/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.service.storage.mongo;

import com.google.common.collect.HashMultimap;
import com.google.common.collect.Multimap;
import im.turms.server.common.domain.admin.po.Admin;
import im.turms.server.common.domain.admin.po.AdminRole;
import im.turms.server.common.domain.user.po.User;
import im.turms.server.common.infra.cluster.node.Node;
import im.turms.server.common.infra.context.TurmsApplicationContext;
import im.turms.server.common.infra.lang.Pair;
import im.turms.server.common.infra.logging.core.logger.Logger;
import im.turms.server.common.infra.logging.core.logger.LoggerFactory;
import im.turms.server.common.infra.property.TurmsPropertiesManager;
import im.turms.server.common.infra.property.env.service.ServiceProperties;
import im.turms.server.common.infra.property.env.service.env.database.MongoProperties;
import im.turms.server.common.infra.property.env.service.env.database.TieredStorageProperties;
import im.turms.server.common.infra.reactor.PublisherUtil;
import im.turms.server.common.infra.security.PasswordManager;
import im.turms.server.common.infra.task.TaskManager;
import im.turms.server.common.infra.time.DurationConst;
import im.turms.server.common.storage.mongo.BsonPool;
import im.turms.server.common.storage.mongo.IMongoCollectionInitializer;
import im.turms.server.common.storage.mongo.TurmsMongoClient;
import im.turms.server.common.storage.mongo.entity.MongoEntity;
import im.turms.server.common.storage.mongo.entity.Zone;
import im.turms.server.common.storage.mongo.entity.annotation.CompoundIndex;
import im.turms.server.common.storage.mongo.model.Tag;
import im.turms.service.domain.conversation.po.GroupConversation;
import im.turms.service.domain.conversation.po.PrivateConversation;
import im.turms.service.domain.group.po.Group;
import im.turms.service.domain.group.po.GroupBlockedUser;
import im.turms.service.domain.group.po.GroupInvitation;
import im.turms.service.domain.group.po.GroupJoinQuestion;
import im.turms.service.domain.group.po.GroupJoinRequest;
import im.turms.service.domain.group.po.GroupMember;
import im.turms.service.domain.group.po.GroupType;
import im.turms.service.domain.group.po.GroupVersion;
import im.turms.service.domain.message.po.Message;
import im.turms.service.domain.user.po.UserFriendRequest;
import im.turms.service.domain.user.po.UserPermissionGroup;
import im.turms.service.domain.user.po.UserRelationship;
import im.turms.service.domain.user.po.UserRelationshipGroup;
import im.turms.service.domain.user.po.UserRelationshipGroupMember;
import im.turms.service.domain.user.po.UserVersion;
import org.bson.BsonDateTime;
import org.bson.Document;
import org.bson.types.MinKey;
import org.springframework.context.annotation.Lazy;
import org.springframework.stereotype.Component;
import org.springframework.util.StringUtils;
import reactor.core.publisher.Mono;

import java.lang.reflect.Field;
import java.time.Duration;
import java.time.Instant;
import java.time.LocalDate;
import java.time.ZoneOffset;
import java.time.temporal.ChronoUnit;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.BiPredicate;
import java.util.stream.Collectors;

import static im.turms.server.common.infra.property.env.service.env.database.TieredStorageProperties.StorageTierProperties;

/**
 * @author James Chen
 */
@Component(IMongoCollectionInitializer.BEAN_NAME)
public class MongoCollectionInitializer implements IMongoCollectionInitializer {

    private static final Logger LOGGER = LoggerFactory.getLogger(MongoCollectionInitializer.class);

    private final TurmsMongoClient adminMongoClient;
    private final TurmsMongoClient userMongoClient;
    private final TurmsMongoClient groupMongoClient;
    private final TurmsMongoClient conversationMongoClient;
    private final TurmsMongoClient messageMongoClient;
    private final List<TurmsMongoClient> clients;

    private final TurmsApplicationContext context;
    private final MongoFakingManager fakingManager;
    private final TieredStorageProperties messageTieredStorageProperties;
    private final MongoProperties mongoProperties;

    private final boolean useConversationId;

    private final Node node;
    private final TurmsPropertiesManager propertiesManager;

    public MongoCollectionInitializer(
            @Lazy Node node,
            TurmsMongoClient adminMongoClient,
            TurmsMongoClient userMongoClient,
            TurmsMongoClient groupMongoClient,
            TurmsMongoClient conversationMongoClient,
            TurmsMongoClient messageMongoClient,
            PasswordManager passwordManager,
            TaskManager taskManager,
            TurmsApplicationContext context,
            TurmsPropertiesManager propertiesManager) {
        this.node = node;
        this.adminMongoClient = adminMongoClient;
        this.userMongoClient = userMongoClient;
        this.groupMongoClient = groupMongoClient;
        this.conversationMongoClient = conversationMongoClient;
        this.messageMongoClient = messageMongoClient;
        clients = List.of(adminMongoClient,
                userMongoClient,
                groupMongoClient,
                conversationMongoClient,
                messageMongoClient);
        this.context = context;
        this.propertiesManager = propertiesManager;
        ServiceProperties serviceProperties = propertiesManager.getLocalProperties().getService();
        fakingManager = new MongoFakingManager(serviceProperties.getFake(),
                passwordManager,
                adminMongoClient,
                userMongoClient,
                groupMongoClient,
                conversationMongoClient,
                messageMongoClient);
        mongoProperties = serviceProperties
                .getMongo();
        messageTieredStorageProperties = serviceProperties
                .getMongo()
                .getMessage()
                .getTieredStorage();
        useConversationId = serviceProperties.getMessage().isUseConversationId();

        initCollections();

        TieredStorageProperties.AutoRangeUpdaterProperties autoRangeUpdater = messageTieredStorageProperties.getAutoRangeUpdater();
        if (autoRangeUpdater.isEnabled()) {
            taskManager.reschedule("tieredStorageZoneUpdater", autoRangeUpdater.getCron(), () -> {
                if (isQualifiedToRotateZones()) {
                    LOGGER.info("Updating the zone range for tiered storage");
                    ensureZones()
                            .subscribe(unused -> LOGGER.info("Updated the zone range for tiered storage"),
                                    t -> LOGGER.error("Failed to update the zone range for tiered storage", t));
                }
            });
        }
    }

    private boolean isQualifiedToRotateZones() {
        return node.isLocalNodeLeader() && propertiesManager.getGlobalProperties()
                .getService().getMongo().getMessage().getTieredStorage().getAutoRangeUpdater().isEnabled();
    }

    private void initCollections() {
        if (!context.isProduction() && fakingManager.isClearAllCollectionsBeforeFaking()) {
            LOGGER.info("Start dropping databases...");
            try {
                dropAllDatabases().block(DurationConst.ONE_MINUTE);
            } catch (Exception e) {
                throw new IllegalStateException("Caught an error while dropping databases", e);
            }
            LOGGER.info("All collections are cleared");
        }
        LOGGER.info("Start creating collections...");
        Mono<Void> createCollections = createCollectionsIfNotExist()
                .onErrorMap(t -> new IllegalStateException("Failed to create collections", t))
                .doOnSuccess(ignored -> LOGGER.info("All collections are created"))
                .flatMap(exists -> {
                    if (exists && !fakingManager.isFakeIfCollectionExists()) {
                        return Mono.empty();
                    }
                    return Mono.defer(() -> ensureZones()
                            .then(Mono.defer(this::ensureIndexesAndShard)
                                    .onErrorMap(t -> new IllegalStateException("Failed to ensure indexes and shard", t)))
                            .then(Mono.defer(() -> !context.isProduction() && fakingManager.isFakingEnabled()
                                    ? fakingManager.fakeData()
                                    : Mono.empty())));
                });
        try {
            createCollections.block(DurationConst.ONE_MINUTE);
        } catch (Exception e) {
            throw new IllegalStateException("Caught an error while creating collections", e);
        }
    }

    /**
     * @return True if all collections have existed
     */
    private Mono<Boolean> createCollectionsIfNotExist() {
        return PublisherUtil.areAllTrue(
                createCollectionIfNotExist(Admin.class),
                createCollectionIfNotExist(AdminRole.class),

                createCollectionIfNotExist(Group.class),
                createCollectionIfNotExist(GroupBlockedUser.class),
                createCollectionIfNotExist(GroupInvitation.class),
                createCollectionIfNotExist(GroupJoinQuestion.class),
                createCollectionIfNotExist(GroupMember.class),
                createCollectionIfNotExist(GroupType.class),
                createCollectionIfNotExist(GroupVersion.class),

                createCollectionIfNotExist(PrivateConversation.class),
                createCollectionIfNotExist(GroupConversation.class),

                createCollectionIfNotExist(Message.class),

                createCollectionIfNotExist(User.class),
                createCollectionIfNotExist(UserFriendRequest.class),
                createCollectionIfNotExist(UserPermissionGroup.class),
                createCollectionIfNotExist(UserRelationship.class),
                createCollectionIfNotExist(UserRelationshipGroup.class),
                createCollectionIfNotExist(UserRelationshipGroupMember.class),
                createCollectionIfNotExist(UserVersion.class));
    }

    /**
     * @return whether the collection has already existed
     */
    private <T> Mono<Boolean> createCollectionIfNotExist(Class<T> clazz) {
        TurmsMongoClient mongoClient;
        if (clazz == Admin.class || clazz == AdminRole.class) {
            mongoClient = adminMongoClient;
        } else if (clazz == User.class
                || clazz == UserFriendRequest.class
                || clazz == UserPermissionGroup.class
                || clazz == UserRelationship.class
                || clazz == UserRelationshipGroup.class
                || clazz == UserRelationshipGroupMember.class
                || clazz == UserVersion.class) {
            mongoClient = userMongoClient;
        } else if (clazz == Group.class
                || clazz == GroupBlockedUser.class
                || clazz == GroupInvitation.class
                || clazz == GroupJoinQuestion.class
                || clazz == GroupJoinRequest.class
                || clazz == GroupMember.class
                || clazz == GroupType.class
                || clazz == GroupVersion.class) {
            mongoClient = groupMongoClient;
        } else if (clazz == PrivateConversation.class
                || clazz == GroupConversation.class) {
            mongoClient = conversationMongoClient;
        } else if (clazz == Message.class) {
            mongoClient = messageMongoClient;
        } else {
            return Mono.error(new IllegalArgumentException("Unknown collection " + clazz.getName()));
        }
        return mongoClient.collectionExists(clazz)
                .flatMap(exists -> exists
                        ? Mono.just(true)
                        : mongoClient.createCollection(clazz).thenReturn(false));
    }

    private Mono<Void> dropAllDatabases() {
        Mono<Void> dropDatabase = Mono.empty();
        for (TurmsMongoClient client : clients) {
            dropDatabase = dropDatabase
                    .then(Mono.defer(client::dropDatabase));
        }
        return dropDatabase;
    }

    private Mono<Void> ensureIndexesAndShard() {
        Multimap<TurmsMongoClient, MongoEntity<?>> clientToEntities = HashMultimap.create(clients.size(), 8);
        for (TurmsMongoClient client : clients) {
            clientToEntities.putAll(client, client.getRegisteredEntities());
        }
        BiPredicate<Class<?>, CompoundIndex> customCompoundIndexFilter = (entityClass, index) -> {
            if (entityClass == Message.class) {
                if (index.ifExist().length > 0 && index.ifExist()[0].equals(Message.Fields.CONVERSATION_ID)) {
                    return useConversationId;
                } else {
                    return !useConversationId;
                }
            }
            return true;
        };
        BiPredicate<String, Object> isCustomIndexEnabled = (fieldName, optionalIndex) -> {
            try {
                Field field = optionalIndex.getClass().getDeclaredField(fieldName);
                field.setAccessible(true);
                return (boolean) field.get(optionalIndex);
            } catch (NoSuchFieldException | IllegalAccessException e) {
                String message = "Cannot find the field %s in the optional index properties %s"
                        .formatted(fieldName, optionalIndex.getClass().getName());
                throw new IllegalStateException(message, e);
            }
        };
        BiPredicate<Class<?>, Field> customIndexFilter = (entityClass, field) -> {
            String fieldName = field.getName();
            // TODO: pattern matching
            if (entityClass == Admin.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getAdmin().getOptionalIndex().getAdmin());
            } else if (entityClass == Group.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getGroup().getOptionalIndex().getGroup());
            } else if (entityClass == GroupBlockedUser.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getGroup().getOptionalIndex().getGroupBlockedUser());
            } else if (entityClass == GroupInvitation.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getGroup().getOptionalIndex().getGroupInvitation());
            } else if (entityClass == GroupJoinRequest.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getGroup().getOptionalIndex().getGroupJoinRequest());
            } else if (entityClass == GroupMember.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getGroup().getOptionalIndex().getGroupMember());
            } else if (entityClass == Message.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getMessage().getOptionalIndex().getMessage());
            } else if (entityClass == UserFriendRequest.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getUser().getOptionalIndex().getUserFriendRequest());
            } else if (entityClass == UserRelationship.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getUser().getOptionalIndex().getUserRelationship());
            } else if (entityClass == UserRelationshipGroupMember.class) {
                return isCustomIndexEnabled.test(fieldName, mongoProperties.getUser().getOptionalIndex().getUserRelationshipGroupMember());
            } else {
                String message = "Cannot check if the custom index is enabled because the class %s is unknown"
                        .formatted(entityClass.getName());
                throw new IllegalStateException(message);
            }
        };
        return Mono.whenDelayError(clientToEntities.asMap().entrySet().stream()
                .map(entry -> entry.getKey().ensureIndexesAndShard(entry.getValue().stream()
                                .map(MongoEntity::entityClass)
                                .collect(Collectors.toList()),
                        customCompoundIndexFilter,
                        customIndexFilter))
                .toList());
    }

    private Mono<Void> ensureZones() {
        Mono<Void> ensureZones = Mono.empty();
        var map = Map.of(messageTieredStorageProperties, messageMongoClient);
        for (var entry : map.entrySet()) {
            TieredStorageProperties properties = entry.getKey();
            if (!properties.isEnabled()) {
                continue;
            }
            TurmsMongoClient client = entry.getValue();
            for (MongoEntity<?> entity : client.getRegisteredEntities()) {
                String collectionName = entity.collectionName();
                Zone zone = entity.zone();
                if (zone == null) {
                    continue;
                }
                List<Pair<String, StorageTierProperties>> tiers;
                try {
                    tiers = getEnabledTiers(properties);
                    if (tiers.isEmpty()) {
                        continue;
                    }
                } catch (Exception e) {
                    return Mono.error(e);
                }
                ensureZones = ensureZones
                        .then(client.findTags(entity.collectionName()))
                        .flatMap(tags -> {
                            if (needRotateTieredStorageZones(entity, tags, tiers)) {
                                return client.isBalancerRunning();
                            }
                            return Mono.empty();
                        })
                        .flatMap(isBalancerRunning -> {
                            if (isBalancerRunning) {
                                return Mono.error(new IllegalStateException("Failed to ensure zones because the balancer is running"));
                            }
                            return client.disableBalancing(collectionName)
                                    .then(Mono.defer(() -> {
                                        LOGGER.info("Deleting the existing tags for the collection " + collectionName);
                                        return client.deleteTags(collectionName)
                                                .onErrorMap(t -> new IllegalStateException("Failed to the existing tags for the collection " + collectionName))
                                                .then(Mono.defer(() -> {
                                                    LOGGER.info("Deleted the existing tags for the collection " + collectionName);
                                                    LOGGER.info("Adding the shards of the collection {} to zones...", collectionName);
                                                    return ensureZones(client, tiers, collectionName, entity.zone())
                                                            .doOnSuccess(unused -> LOGGER.info("Added the shards of the collection {} to zones",
                                                                    collectionName));
                                                }));
                                    }))
                                    .then(client.enableBalancing(collectionName));
                        });
            }
        }
        return ensureZones;
    }

    private Mono<Void> ensureZones(TurmsMongoClient mongoClient,
                                   List<Pair<String, StorageTierProperties>> tiers,
                                   String collectionName,
                                   Zone zone) {
        Mono<Void> ensureZones = Mono.empty();
        Instant creationDateBoundary = LocalDate.now().atStartOfDay().toInstant(ZoneOffset.UTC);
        String creationDateFieldName = zone.creationDateFieldName();
        for (int i = 0, tierSize = tiers.size(); i < tierSize; i++) {
            Pair<String, StorageTierProperties> entry = tiers.get(i);
            String zoneName = entry.first();
            StorageTierProperties properties = entry.second();
            int days = properties.getDays();
            Object max;
            if (i == 0) {
                max = BsonPool.MAX_KEY;
            } else {
                max = new BsonDateTime(creationDateBoundary.toEpochMilli());
                creationDateBoundary = creationDateBoundary.minus(days, ChronoUnit.DAYS);
            }
            Object min = i == tierSize - 1
                    ? BsonPool.MIN_KEY
                    : new BsonDateTime(creationDateBoundary.toEpochMilli());
            List<String> shards = properties.getShards();
            for (String shard : shards) {
                if (!StringUtils.hasText(shard)) {
                    continue;
                }
                ensureZones = ensureZones
                        .then(Mono.defer(() -> mongoClient.addShardToZone(shard, zoneName)
                                        .onErrorMap(t -> new IllegalStateException("Failed to add a shard %s to the zone %s"
                                                .formatted(shard, zoneName), t)))
                                .doOnSuccess(unused -> LOGGER.info("Added a shard {} to the zone {}", shard, zoneName)))
                        .then(Mono.defer(() -> {
                            // TODO: support the shard key consisting of multiple fields
                            Document minimum = new Document(creationDateFieldName, min);
                            Document maximum = new Document(creationDateFieldName, max);
                            return mongoClient.updateZoneKeyRange(collectionName,
                                            zoneName,
                                            minimum,
                                            maximum)
                                    .onErrorMap(t -> new IllegalStateException("Failed to update the zone %s with the key ranges: %s -->> %s".formatted(
                                                    zoneName,
                                                    minimum.toJson(),
                                                    maximum.toJson()),
                                            t))
                                    .doOnSuccess(unused -> LOGGER.info("Updated the zone {} with the key ranges: {} -->> {}",
                                            zoneName,
                                            minimum.toJson(),
                                            maximum.toJson()));
                        }));
            }
        }
        return ensureZones;
    }

    private List<Pair<String, StorageTierProperties>> getEnabledTiers(TieredStorageProperties storageProperties) {
        Set<Map.Entry<String, StorageTierProperties>> tierEntries = storageProperties.getTiers().entrySet();
        if (tierEntries.isEmpty()) {
            return Collections.emptyList();
        }
        int tierSize = tierEntries.size();
        List<Pair<String, StorageTierProperties>> tiers = new ArrayList<>(tierSize);
        int i = 0;
        for (Map.Entry<String, StorageTierProperties> tierEntry : tierEntries) {
            StorageTierProperties properties = tierEntry.getValue();
            int days = properties.getDays();
            if (days <= 0 && i != tierSize - 1) {
                throw new IllegalArgumentException("The days of non-latest tiered storage properties must be more than 0");
            }
            if (properties.isEnabled()) {
                tiers.add(Pair.of(tierEntry.getKey(), tierEntry.getValue()));
            }
            i++;
        }
        if (tiers.isEmpty()) {
            return Collections.emptyList();
        }
        return tiers;
    }

    private boolean needRotateTieredStorageZones(MongoEntity<?> entity,
                                                 List<Tag> tags,
                                                 List<Pair<String, StorageTierProperties>> propertiesPairs) {
        if (tags.isEmpty()) {
            return true;
        }
        Map<String, Tag> nameToTag = tags.stream().collect(Collectors.toMap(Tag::tag, tag -> tag));
        String creationDateFieldName = entity.zone().creationDateFieldName();
        long now = System.currentTimeMillis();
        long elapsedTime = 0;
        for (Pair<String, StorageTierProperties> pair : propertiesPairs) {
            Tag tag = nameToTag.get(pair.first());
            if (tag == null) {
                return true;
            }
            if (elapsedTime == 0) {
                Object date = tag.minimum().get(creationDateFieldName);
                if (date == null) {
                    return true;
                } else if (date instanceof MinKey) {
                    return propertiesPairs.size() != 1;
                } else if (date instanceof Date creationDateLower) {
                    elapsedTime = now - creationDateLower.getTime();
                } else {
                    return true;
                }
            }
            int days = pair.second().getDays();
            if (days > 0 && elapsedTime > Duration.ofDays(days).toMillis()) {
                return true;
            }
        }
        return false;
    }

}