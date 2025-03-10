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
import im.turms.client.annotation.NotEmpty
import im.turms.client.exception.ResponseException
import im.turms.client.extension.toResponse
import im.turms.client.model.GroupWithVersion
import im.turms.client.model.Response
import im.turms.client.model.ResponseStatusCode
import im.turms.client.model.proto.constant.GroupMemberRole
import im.turms.client.model.proto.model.common.Int64ValuesWithVersion
import im.turms.client.model.proto.model.group.GroupInvitationsWithVersion
import im.turms.client.model.proto.model.group.GroupJoinQuestionsAnswerResult
import im.turms.client.model.proto.model.group.GroupJoinQuestionsWithVersion
import im.turms.client.model.proto.model.group.GroupJoinRequestsWithVersion
import im.turms.client.model.proto.model.group.GroupMembersWithVersion
import im.turms.client.model.proto.model.group.GroupsWithVersion
import im.turms.client.model.proto.model.user.UsersInfosWithVersion
import im.turms.client.model.proto.request.group.CreateGroupRequest
import im.turms.client.model.proto.request.group.DeleteGroupRequest
import im.turms.client.model.proto.request.group.QueryGroupRequest
import im.turms.client.model.proto.request.group.QueryJoinedGroupIdsRequest
import im.turms.client.model.proto.request.group.QueryJoinedGroupInfosRequest
import im.turms.client.model.proto.request.group.UpdateGroupRequest
import im.turms.client.model.proto.request.group.blocklist.CreateGroupBlockedUserRequest
import im.turms.client.model.proto.request.group.blocklist.DeleteGroupBlockedUserRequest
import im.turms.client.model.proto.request.group.blocklist.QueryGroupBlockedUserIdsRequest
import im.turms.client.model.proto.request.group.blocklist.QueryGroupBlockedUserInfosRequest
import im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest
import im.turms.client.model.proto.request.group.enrollment.CreateGroupInvitationRequest
import im.turms.client.model.proto.request.group.enrollment.CreateGroupJoinQuestionRequest
import im.turms.client.model.proto.request.group.enrollment.CreateGroupJoinRequestRequest
import im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest
import im.turms.client.model.proto.request.group.enrollment.DeleteGroupJoinQuestionRequest
import im.turms.client.model.proto.request.group.enrollment.DeleteGroupJoinRequestRequest
import im.turms.client.model.proto.request.group.enrollment.QueryGroupInvitationsRequest
import im.turms.client.model.proto.request.group.enrollment.QueryGroupJoinQuestionsRequest
import im.turms.client.model.proto.request.group.enrollment.QueryGroupJoinRequestsRequest
import im.turms.client.model.proto.request.group.enrollment.UpdateGroupJoinQuestionRequest
import im.turms.client.model.proto.request.group.member.CreateGroupMemberRequest
import im.turms.client.model.proto.request.group.member.DeleteGroupMemberRequest
import im.turms.client.model.proto.request.group.member.QueryGroupMembersRequest
import im.turms.client.model.proto.request.group.member.UpdateGroupMemberRequest
import im.turms.client.util.Validator
import java.util.Date

/**
 * @author James Chen
 */
class GroupService(private val turmsClient: TurmsClient) {

    suspend fun createGroup(
        name: String,
        intro: String? = null,
        announcement: String? = null,
        minimumScore: Int? = null,
        muteEndDate: Date? = null,
        groupTypeId: Long? = null
    ): Response<Long> = turmsClient.driver
        .send(
            CreateGroupRequest.newBuilder().apply {
                this.name = name
                intro?.let { this.intro = it }
                announcement?.let { this.announcement = it }
                minimumScore?.let { this.minimumScore = it }
                muteEndDate?.let { this.muteEndDate = it.time }
                groupTypeId?.let { this.groupTypeId = it }
            }
        ).toResponse {
            it.ids.getValues(0)
        }

    suspend fun deleteGroup(groupId: Long): Response<Unit> =
        turmsClient.driver
            .send(DeleteGroupRequest.newBuilder().apply {
                this.groupId = groupId
            })
            .toResponse()

    suspend fun updateGroup(
        groupId: Long,
        groupName: String? = null,
        intro: String? = null,
        announcement: String? = null,
        minimumScore: Int? = null,
        groupTypeId: Long? = null,
        muteEndDate: Date? = null,
        successorId: Long? = null,
        quitAfterTransfer: Boolean? = null
    ): Response<Unit> = if (Validator.areAllFalsy(
            groupName, intro, announcement, minimumScore, groupTypeId,
            muteEndDate, successorId
        )
    ) Response.unitValue() else turmsClient.driver
        .send(UpdateGroupRequest.newBuilder().apply {
            this.groupId = groupId
            groupName?.let { this.groupName = it }
            intro?.let { this.intro = it }
            announcement?.let { this.announcement = it }
            muteEndDate?.let { this.muteEndDate = it.time }
            minimumScore?.let { this.minimumScore = it }
            groupTypeId?.let { this.groupTypeId = it }
            successorId?.let { this.successorId = it }
            quitAfterTransfer?.let { this.quitAfterTransfer = it }
        })
        .toResponse()

    suspend fun transferOwnership(groupId: Long, successorId: Long, quitAfterTransfer: Boolean = false): Response<Unit> =
        updateGroup(groupId, null, null, null, null, null, null, successorId, quitAfterTransfer)

    suspend fun muteGroup(groupId: Long, muteEndDate: Date): Response<Unit> =
        updateGroup(groupId, null, null, null, null, null, muteEndDate, null, null)

    suspend fun unmuteGroup(groupId: Long): Response<Unit> = muteGroup(groupId, Date(0))

    suspend fun queryGroup(groupId: Long, lastUpdatedDate: Date? = null): Response<GroupWithVersion?> =
        turmsClient.driver
            .send(
                QueryGroupRequest.newBuilder().apply {
                    this.groupId = groupId
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                }
            ).toResponse {
                GroupWithVersion.from(it)
            }

    suspend fun queryJoinedGroupIds(lastUpdatedDate: Date? = null): Response<Int64ValuesWithVersion?> =
        turmsClient.driver
            .send(
                QueryJoinedGroupIdsRequest.newBuilder().apply {
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                })
            .toResponse {
                if (it.hasIdsWithVersion()) it.idsWithVersion else null
            }

    suspend fun queryJoinedGroupInfos(lastUpdatedDate: Date? = null): Response<GroupsWithVersion?> =
        turmsClient.driver
            .send(
                QueryJoinedGroupInfosRequest.newBuilder().apply {
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                }
            )
            .toResponse {
                if (it.hasGroupsWithVersion()) it.groupsWithVersion else null
            }

    suspend fun addGroupJoinQuestion(
        groupId: Long,
        question: String,
        @NotEmpty answers: List<String>,
        score: Int
    ): Response<Long> = if (answers.isEmpty()) {
        throw ResponseException.from(ResponseStatusCode.ILLEGAL_ARGUMENT, "\"answers\" must not be null or empty")
    } else turmsClient.driver
        .send(
            CreateGroupJoinQuestionRequest.newBuilder().apply {
                this.groupId = groupId
                this.question = question
                addAllAnswers(answers)
                this.score = score
            }
        )
        .toResponse {
            it.ids.getValues(0)
        }

    suspend fun deleteGroupJoinQuestion(questionId: Long): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupJoinQuestionRequest.newBuilder().apply {
                this.questionId = questionId
            })
        .toResponse()

    suspend fun updateGroupJoinQuestion(
        questionId: Long,
        question: String? = null,
        answers: List<String>? = null,
        score: Int? = null
    ): Response<Unit> = if (Validator.areAllNull(question, answers, score)) {
        Response.unitValue()
    } else {
        turmsClient.driver.send(
            UpdateGroupJoinQuestionRequest.newBuilder().apply {
                this.questionId = questionId
                question?.let { this.question = it }
                answers?.let { this.addAllAnswers(it) }
                score?.let { this.score = it }
            }
        )
            .toResponse()
    }

    // Group Blocklist
    suspend fun blockUser(groupId: Long, userId: Long): Response<Unit> = turmsClient.driver
        .send(
            CreateGroupBlockedUserRequest.newBuilder().apply {
                this.userId = userId
                this.groupId = groupId
            }
        )
        .toResponse()

    suspend fun unblockUser(groupId: Long, userId: Long): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupBlockedUserRequest.newBuilder().apply {
                this.groupId = groupId
                this.userId = userId
            }
        )
        .toResponse()

    suspend fun queryBlockedUserIds(
        groupId: Long,
        lastUpdatedDate: Date? = null
    ): Response<Int64ValuesWithVersion?> = turmsClient.driver
        .send(
            QueryGroupBlockedUserIdsRequest.newBuilder().apply {
                this.groupId = groupId
                lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
            }
        )
        .toResponse {
            if (it.hasIdsWithVersion()) it.idsWithVersion else null
        }

    suspend fun queryBlockedUserInfos(
        groupId: Long,
        lastUpdatedDate: Date? = null
    ): Response<UsersInfosWithVersion?> = turmsClient.driver
        .send(
            QueryGroupBlockedUserInfosRequest.newBuilder().apply {
                this.groupId = groupId
                lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
            }
        ).toResponse {
            if (it.hasUsersInfosWithVersion()) it.usersInfosWithVersion else null
        }

    // Group Enrollment
    suspend fun createInvitation(
        groupId: Long,
        inviteeId: Long,
        content: String
    ): Response<Long> = turmsClient.driver
        .send(
            CreateGroupInvitationRequest.newBuilder().apply {
                this.groupId = groupId
                this.inviteeId = inviteeId
                this.content = content
            }
        ).toResponse {
            it.ids.getValues(0)
        }

    suspend fun deleteInvitation(invitationId: Long): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupInvitationRequest.newBuilder().apply {
                this.invitationId = invitationId
            }
        )
        .toResponse()

    suspend fun queryInvitations(groupId: Long, lastUpdatedDate: Date? = null): Response<GroupInvitationsWithVersion?> =
        turmsClient.driver
            .send(
                QueryGroupInvitationsRequest.newBuilder().apply {
                    this.groupId = groupId
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                }
            ).toResponse {
                if (it.hasGroupInvitationsWithVersion()) it.groupInvitationsWithVersion else null
            }

    suspend fun queryInvitations(areSentByMe: Boolean, lastUpdatedDate: Date? = null): Response<GroupInvitationsWithVersion?> =
        turmsClient.driver
            .send(
                QueryGroupInvitationsRequest.newBuilder().apply {
                    this.areSentByMe = areSentByMe
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                }
            ).toResponse {
                if (it.hasGroupInvitationsWithVersion()) it.groupInvitationsWithVersion else null
            }

    suspend fun createJoinRequest(groupId: Long, content: String): Response<Long> = turmsClient.driver
        .send(
            CreateGroupJoinRequestRequest.newBuilder().apply {
                this.groupId = groupId
                this.content = content
            }
        ).toResponse {
            it.ids.getValues(0)
        }

    suspend fun deleteJoinRequest(requestId: Long): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupJoinRequestRequest.newBuilder().apply {
                this.requestId = requestId
            }
        )
        .toResponse()

    suspend fun queryJoinRequests(
        groupId: Long, lastUpdatedDate: Date? = null
    ): Response<GroupJoinRequestsWithVersion?> = turmsClient.driver
        .send(
            QueryGroupJoinRequestsRequest.newBuilder().apply {
                this.groupId = groupId
                lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
            }
        ).toResponse {
            if (it.hasGroupJoinRequestsWithVersion()) it.groupJoinRequestsWithVersion else null
        }

    suspend fun querySentJoinRequests(lastUpdatedDate: Date? = null): Response<GroupJoinRequestsWithVersion?> =
        turmsClient.driver
            .send(
                QueryGroupJoinRequestsRequest.newBuilder().apply {
                    lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
                }
            ).toResponse {
                if (it.hasGroupJoinRequestsWithVersion()) it.groupJoinRequestsWithVersion else null
            }

    /**
     * Note: Only the owner and managers have the right to fetch questions with answers
     */
    suspend fun queryGroupJoinQuestionsRequest(
        groupId: Long,
        withAnswers: Boolean,
        lastUpdatedDate: Date? = null
    ): Response<GroupJoinQuestionsWithVersion?> = turmsClient.driver
        .send(
            QueryGroupJoinQuestionsRequest.newBuilder().apply {
                this.groupId = groupId
                this.withAnswers = withAnswers
                lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
            }
        ).toResponse {
            if (it.hasGroupJoinQuestionsWithVersion()) it.groupJoinQuestionsWithVersion else null
        }

    suspend fun answerGroupQuestions(@NotEmpty questionIdToAnswer: Map<Long, String>): Response<GroupJoinQuestionsAnswerResult> =
        if (questionIdToAnswer.isEmpty()) {
            throw ResponseException.from(
                ResponseStatusCode.ILLEGAL_ARGUMENT,
                "\"questionIdToAnswer\" must not be null or empty"
            )
        } else turmsClient.driver
            .send(
                CheckGroupJoinQuestionsAnswersRequest.newBuilder().apply {
                    putAllQuestionIdToAnswer(questionIdToAnswer)
                }
            ).toResponse {
                if (it.hasGroupJoinQuestionAnswerResult()) {
                    it.groupJoinQuestionAnswerResult
                } else {
                    throw ResponseException.from(ResponseStatusCode.INVALID_RESPONSE)
                }
            }

    // Group Member
    suspend fun addGroupMember(
        groupId: Long,
        userId: Long,
        name: String? = null,
        role: GroupMemberRole? = null,
        muteEndDate: Date? = null
    ): Response<Unit> = turmsClient.driver
        .send(
            CreateGroupMemberRequest.newBuilder().apply {
                this.groupId = groupId
                this.userId = userId
                name?.let { this.name = it }
                role?.let { this.role = it }
                muteEndDate?.let { this.muteEndDate = it.time }
            }
        )
        .toResponse()

    suspend fun quitGroup(
        groupId: Long,
        successorId: Long? = null,
        quitAfterTransfer: Boolean? = null
    ): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupMemberRequest.newBuilder().apply {
                this.groupId = groupId
                memberId = turmsClient.userService.userInfo!!.userId
                successorId?.let { this.successorId = it }
                quitAfterTransfer?.let { this.quitAfterTransfer = it }
            }
        )
        .toResponse()

    suspend fun removeGroupMember(groupId: Long, memberId: Long): Response<Unit> = turmsClient.driver
        .send(
            DeleteGroupMemberRequest.newBuilder().apply {
                this.groupId = groupId
                this.memberId = memberId
            }
        )
        .toResponse()

    suspend fun updateGroupMemberInfo(
        groupId: Long,
        memberId: Long,
        name: String? = null,
        role: GroupMemberRole? = null,
        muteEndDate: Date? = null
    ): Response<Unit> = if (Validator.areAllNull(name, role, muteEndDate)) {
        Response.unitValue()
    } else {
        turmsClient.driver
            .send(
                UpdateGroupMemberRequest.newBuilder().apply {
                    this.groupId = groupId
                    this.memberId = memberId
                    name?.let { this.name = it }
                    role?.let { this.role = it }
                    muteEndDate?.let { this.muteEndDate = it.time }
                }
            )
            .toResponse()
    }

    suspend fun muteGroupMember(
        groupId: Long,
        memberId: Long,
        muteEndDate: Date
    ): Response<Unit> = updateGroupMemberInfo(groupId, memberId, null, null, muteEndDate)

    suspend fun unmuteGroupMember(groupId: Long, memberId: Long): Response<Unit> = muteGroupMember(groupId, memberId, Date(0))

    suspend fun queryGroupMembers(
        groupId: Long,
        withStatus: Boolean,
        lastUpdatedDate: Date? = null
    ): Response<GroupMembersWithVersion?> = turmsClient.driver
        .send(
            QueryGroupMembersRequest.newBuilder().apply {
                this.groupId = groupId
                this.withStatus = withStatus
                lastUpdatedDate?.let { this.lastUpdatedDate = it.time }
            }
        ).toResponse {
            if (it.hasGroupMembersWithVersion()) it.groupMembersWithVersion else null
        }

    suspend fun queryGroupMembersByMemberIds(
        groupId: Long,
        @NotEmpty memberIds: Set<Long>,
        withStatus: Boolean = false
    ): Response<GroupMembersWithVersion?> = if (memberIds.isEmpty()) {
        throw ResponseException.from(ResponseStatusCode.ILLEGAL_ARGUMENT, "\"memberIds\" must not be null or empty")
    } else turmsClient.driver
        .send(
            QueryGroupMembersRequest.newBuilder().apply {
                this.groupId = groupId
                addAllMemberIds(memberIds)
                this.withStatus = withStatus
            }
        ).toResponse {
            if (it.hasGroupMembersWithVersion()) it.groupMembersWithVersion else null
        }

}