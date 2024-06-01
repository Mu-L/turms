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

package im.turms.server.common.access.client.dto.request.conversation;

public interface DeleteConversationSettingsRequestOrBuilder extends
        // @@protoc_insertion_point(interface_extends:im.turms.proto.DeleteConversationSettingsRequest)
        com.google.protobuf.MessageOrBuilder {

    /**
     * <code>repeated int64 user_ids = 1;</code>
     *
     * @return A list containing the userIds.
     */
    java.util.List<java.lang.Long> getUserIdsList();

    /**
     * <code>repeated int64 user_ids = 1;</code>
     *
     * @return The count of userIds.
     */
    int getUserIdsCount();

    /**
     * <code>repeated int64 user_ids = 1;</code>
     *
     * @param index The index of the element to return.
     * @return The userIds at the given index.
     */
    long getUserIds(int index);

    /**
     * <code>repeated int64 group_ids = 2;</code>
     *
     * @return A list containing the groupIds.
     */
    java.util.List<java.lang.Long> getGroupIdsList();

    /**
     * <code>repeated int64 group_ids = 2;</code>
     *
     * @return The count of groupIds.
     */
    int getGroupIdsCount();

    /**
     * <code>repeated int64 group_ids = 2;</code>
     *
     * @param index The index of the element to return.
     * @return The groupIds at the given index.
     */
    long getGroupIds(int index);

    /**
     * <code>repeated string names = 3;</code>
     *
     * @return A list containing the names.
     */
    java.util.List<java.lang.String> getNamesList();

    /**
     * <code>repeated string names = 3;</code>
     *
     * @return The count of names.
     */
    int getNamesCount();

    /**
     * <code>repeated string names = 3;</code>
     *
     * @param index The index of the element to return.
     * @return The names at the given index.
     */
    java.lang.String getNames(int index);

    /**
     * <code>repeated string names = 3;</code>
     *
     * @param index The index of the value to return.
     * @return The bytes of the names at the given index.
     */
    com.google.protobuf.ByteString getNamesBytes(int index);
}
