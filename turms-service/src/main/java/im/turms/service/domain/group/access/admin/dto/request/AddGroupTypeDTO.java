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

package im.turms.service.domain.group.access.admin.dto.request;

import im.turms.service.domain.group.bo.GroupInvitationStrategy;
import im.turms.service.domain.group.bo.GroupJoinStrategy;
import im.turms.service.domain.group.bo.GroupUpdateStrategy;

/**
 * @author James Chen
 */
public record AddGroupTypeDTO(
        String name,
        Integer groupSizeLimit,
        GroupInvitationStrategy invitationStrategy,
        GroupJoinStrategy joinStrategy,
        GroupUpdateStrategy groupInfoUpdateStrategy,
        GroupUpdateStrategy memberInfoUpdateStrategy,
        Boolean guestSpeakable,
        Boolean selfInfoUpdatable,
        Boolean enableReadReceipt,
        Boolean messageEditable
) {
}
