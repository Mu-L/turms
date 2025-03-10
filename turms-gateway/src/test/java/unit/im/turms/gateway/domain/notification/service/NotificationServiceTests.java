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

package unit.im.turms.gateway.domain.notification.service;

import im.turms.gateway.access.client.common.UserSession;
import im.turms.gateway.access.client.tcp.TcpConnection;
import im.turms.gateway.domain.notification.service.NotificationService;
import im.turms.gateway.domain.session.manager.UserSessionsManager;
import im.turms.gateway.domain.session.service.SessionService;
import im.turms.gateway.infra.logging.ApiLoggingContext;
import im.turms.gateway.infra.plugin.extension.NotificationHandler;
import im.turms.server.common.access.client.dto.constant.DeviceType;
import im.turms.server.common.domain.location.bo.Location;
import im.turms.server.common.infra.lang.ByteArrayWrapper;
import im.turms.server.common.infra.plugin.PluginManager;
import im.turms.server.common.infra.property.TurmsProperties;
import im.turms.server.common.infra.property.TurmsPropertiesManager;
import im.turms.server.common.infra.tracing.TracingContext;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.UnpooledByteBufAllocator;
import org.junit.jupiter.api.Test;
import reactor.core.publisher.Mono;
import reactor.core.publisher.Sinks;
import reactor.test.StepVerifier;

import java.time.Duration;
import java.util.Collections;
import java.util.Map;
import java.util.Set;

import static org.assertj.core.api.Assertions.assertThat;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;

/**
 * @author James Chen
 */
class NotificationServiceTests {

    @Test
    void constructor_shouldReturnInstance() {
        TurmsPropertiesManager propertiesManager = mock(TurmsPropertiesManager.class);
        when(propertiesManager.getLocalProperties()).thenReturn(new TurmsProperties());

        NotificationService notificationService = new NotificationService(null, null, null, propertiesManager);
        assertThat(notificationService).isNotNull();
    }

    @Test
    void sendNotificationToLocalClients_shouldReleaseAndReturnTrue_ifRecipientsAreOnline() {
        UserSessionsManager sessionsManager = mock(UserSessionsManager.class);
        TcpConnection connection = mock(TcpConnection.class);
        UserSession session = new UserSession(1, 1L, DeviceType.ANDROID, null, new Location(1F, 1F));
        session.setConnection(connection, new ByteArrayWrapper(new byte[]{}));
        Sinks.One<ByteBuf> sink = Sinks.one();
        session.setNotificationConsumer((notification, tracingContext) -> {
            sink.tryEmitValue(notification);
            return Mono.empty();
        });
        Mono<ByteBuf> result = sink.asMono()
                .flatMap(byteBuf -> Mono
                        // Wait 1s to simulate the async process
                        .delay(Duration.ofSeconds(1))
                        .then(Mono.fromRunnable(byteBuf::release))
                        .thenReturn(byteBuf));
        when(sessionsManager.getDeviceTypeToSession())
                .thenReturn(Map.of(DeviceType.ANDROID, session));
        NotificationService notificationService = newOutboundMessageService(sessionsManager);

        ByteBuf byteBuf = UnpooledByteBufAllocator.DEFAULT.directBuffer();
        Set<Long> recipientIds = Set.of(1L);
        boolean sent = notificationService.sendNotificationToLocalClients(TracingContext.NOOP,
                byteBuf,
                recipientIds,
                Collections.emptySet(),
                null);

        assertThat(byteBuf.refCnt())
                .as("Buffer should not be released if the notification hasn't been sent")
                .isPositive();
        StepVerifier.create(result)
                .expectNextMatches(buf -> buf.refCnt() == 0)
                .as("Buffer should be released if the notification is sent")
                .verifyComplete();
        assertThat(sent)
                .as("Notification is sent or queued")
                .isTrue();
    }

    @Test
    void sendNotificationToLocalClients_shouldReleaseAndReturnFalse_ifRecipientsAreOffline() {
        NotificationService notificationService = newOutboundMessageService(null);

        ByteBuf byteBuf = UnpooledByteBufAllocator.DEFAULT.directBuffer();
        Set<Long> recipientIds = Set.of(1L);
        boolean sent = notificationService.sendNotificationToLocalClients(TracingContext.NOOP,
                byteBuf,
                recipientIds,
                Collections.emptySet(),
                null);

        assertThat(byteBuf.refCnt())
                .as("Buffer should be released if recipients are offline")
                .isZero();
        assertThat(sent)
                .as("Notification isn't sent or queued")
                .isFalse();
    }

    private NotificationService newOutboundMessageService(UserSessionsManager userSessionsManager) {
        NotificationHandler handler = mock(NotificationHandler.class);
        when(handler.handle(any(), any(), any()))
                .thenReturn(Mono.empty());

        ApiLoggingContext apiLoggingContext = mock(ApiLoggingContext.class);
        when(apiLoggingContext.shouldLogNotification(any()))
                .thenReturn(true);

        PluginManager pluginManager = mock(PluginManager.class);

        TurmsPropertiesManager propertiesManager = mock(TurmsPropertiesManager.class);
        when(propertiesManager.getLocalProperties()).thenReturn(new TurmsProperties());

        SessionService sessionService = mock(SessionService.class);
        when(sessionService.getUserSessionsManager(any()))
                .thenReturn(userSessionsManager);
        return new NotificationService(apiLoggingContext, sessionService, pluginManager, propertiesManager);
    }

}