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

package im.turms.gateway.access.client.tcp;

import im.turms.gateway.access.client.common.NotificationFactory;
import im.turms.gateway.access.client.common.connection.NetConnection;
import im.turms.server.common.domain.session.bo.CloseReason;
import im.turms.server.common.infra.exception.ThrowableUtil;
import im.turms.server.common.infra.logging.core.logger.Logger;
import im.turms.server.common.infra.logging.core.logger.LoggerFactory;
import reactor.netty.channel.ChannelOperations;

import java.net.InetSocketAddress;

/**
 * @author James Chen
 */
public class TcpConnection extends NetConnection {

    private static final Logger LOGGER = LoggerFactory.getLogger(TcpConnection.class);

    private final ChannelOperations<?, ?> connection;

    protected TcpConnection(ChannelOperations<?, ?> connection, boolean isConnected) {
        super(isConnected);
        this.connection = connection;
    }

    @Override
    public InetSocketAddress getAddress() {
        return (InetSocketAddress) connection.address();
    }

    /**
     * It's acceptable that the method isn't thread-safe
     */
    @Override
    public void close(CloseReason closeReason) {
        if (!isConnected() || connection.isDisposed()) {
            return;
        }
        super.close(closeReason);
        connection
                .sendObject(NotificationFactory.createBuffer(closeReason))
                .then()
                .doOnError(throwable -> {
                    if (!ThrowableUtil.isDisconnectedClientError(throwable)) {
                        LOGGER.error("Failed to send the close notification", throwable);
                    }
                })
                .retryWhen(RETRY_SEND_CLOSE_NOTIFICATION)
                .doFinally(signal -> close())
                .subscribe(null, t -> {
                    if (!ThrowableUtil.isDisconnectedClientError(t)) {
                        LOGGER.error("Failed to send the close notification with retries exhausted: " +
                                RETRY_SEND_CLOSE_NOTIFICATION.maxAttempts, t);
                    }
                });
    }

    @Override
    public void close() {
        try {
            connection.dispose();
        } catch (Exception e) {
            if (!ThrowableUtil.isDisconnectedClientError(e)) {
                LOGGER.error("Failed to close the connection", e);
            }
        }
    }

}