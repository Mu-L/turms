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

package im.turms.service.domain.group.po;

import im.turms.server.common.domain.common.po.BaseEntity;
import im.turms.server.common.storage.mongo.entity.annotation.CompoundIndex;
import im.turms.server.common.storage.mongo.entity.annotation.Document;
import im.turms.server.common.storage.mongo.entity.annotation.Field;
import im.turms.server.common.storage.mongo.entity.annotation.Id;
import im.turms.server.common.storage.mongo.entity.annotation.Indexed;
import im.turms.server.common.storage.mongo.entity.annotation.PersistenceConstructor;
import im.turms.server.common.storage.mongo.entity.annotation.Sharded;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.Date;

import static im.turms.server.common.storage.mongo.entity.IndexType.HASH;
import static im.turms.server.common.storage.mongo.entity.annotation.IndexedReason.EXTENDED_FEATURE;

/**
 * @author James Chen
 */
@Data
@AllArgsConstructor(onConstructor = @__(@PersistenceConstructor))
@Document(GroupBlockedUser.COLLECTION_NAME)
@CompoundIndex({GroupBlockedUser.Fields.ID_GROUP_ID, GroupBlockedUser.Fields.ID_USER_ID})
@Sharded(shardKey = GroupBlockedUser.Fields.ID_GROUP_ID)
public final class GroupBlockedUser extends BaseEntity {

    public static final String COLLECTION_NAME = "groupBlockedUser";

    @Id
    private final Key key;

    @Field(Fields.BLOCK_DATE)
    @Indexed(optional = true, reason = EXTENDED_FEATURE)
    private final Date blockDate;

    @Field(Fields.REQUESTER_ID)
    @Indexed(optional = true, value = HASH, reason = EXTENDED_FEATURE)
    private final Long requesterId;

    public GroupBlockedUser(Long groupId, Long userId, Date blockDate, Long requesterId) {
        this.key = new Key(groupId, userId);
        this.blockDate = blockDate;
        this.requesterId = requesterId;
    }

    @Data
    @AllArgsConstructor
    @NoArgsConstructor // Make sure spring can initiate the key and use setters
    public static final class Key {

        @Field(Fields.GROUP_ID)
        private Long groupId;

        @Field(Fields.USER_ID)
        private Long userId;

        public static final class Fields {
            public static final String GROUP_ID = "gid";
            public static final String USER_ID = "uid";

            private Fields() {
            }
        }
    }

    public static final class Fields {
        public static final String ID_GROUP_ID = "_id." + Key.Fields.GROUP_ID;
        public static final String ID_USER_ID = "_id." + Key.Fields.USER_ID;
        public static final String BLOCK_DATE = "bd";
        public static final String REQUESTER_ID = "rid";

        private Fields() {
        }
    }
}