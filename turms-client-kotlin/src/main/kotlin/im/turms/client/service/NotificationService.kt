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
package im.turms.client.service

import im.turms.client.TurmsClient
import im.turms.client.model.proto.request.TurmsRequest
import java.util.LinkedList

/**
 * @author James Chen
 */
class NotificationService(turmsClient: TurmsClient) {

    private var notificationListeners: MutableList<((TurmsRequest) -> Unit)> = LinkedList()

    init {
        turmsClient.driver
            .addNotificationListener { notification ->
                val isBusinessNotification = notification.hasRelayedRequest()
                        && !notification.relayedRequest.hasCreateMessageRequest()
                        && !notification.hasCloseStatus()
                if (isBusinessNotification) {
                    notificationListeners.forEach { it(notification.relayedRequest) }
                }
            }
    }

    fun addNotificationListener(listener: ((TurmsRequest) -> Unit)) =
        this.notificationListeners.add(listener)

    fun removeNotificationListener(listener: ((TurmsRequest) -> Unit)) =
        this.notificationListeners.remove(listener)

}