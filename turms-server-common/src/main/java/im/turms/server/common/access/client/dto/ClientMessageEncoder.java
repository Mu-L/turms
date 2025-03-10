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

package im.turms.server.common.access.client.dto;

import com.google.protobuf.CodedOutputStream;
import com.google.protobuf.WireFormat;
import im.turms.server.common.access.client.dto.model.user.UserSession;
import im.turms.server.common.access.client.dto.notification.TurmsNotification;
import im.turms.server.common.access.common.ResponseStatusCode;
import im.turms.server.common.domain.session.bo.SessionCloseStatus;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.PooledByteBufAllocator;

import javax.annotation.Nullable;

import static com.google.protobuf.CodedOutputStream.computeInt32Size;
import static com.google.protobuf.CodedOutputStream.computeInt64Size;
import static com.google.protobuf.CodedOutputStream.computeStringSize;
import static com.google.protobuf.CodedOutputStream.computeTagSize;
import static com.google.protobuf.CodedOutputStream.computeUInt32SizeNoTag;
import static com.google.protobuf.CodedOutputStream.newInstance;

/**
 * @author James Chen
 */
public class ClientMessageEncoder {

    private ClientMessageEncoder() {
    }

    public static ByteBuf encodeResponse(long requestId, ResponseStatusCode code) {
        return encodeResponse(requestId, code.getBusinessCode(), null);
    }

    public static ByteBuf encodeResponse(long requestId, int code, @Nullable String reason) {
        boolean hasReason = reason != null;
        int capacity = computeInt64Size(TurmsNotification.REQUEST_ID_FIELD_NUMBER, requestId)
                + computeInt32Size(TurmsNotification.CODE_FIELD_NUMBER, code);
        if (hasReason) {
            capacity += computeStringSize(TurmsNotification.REASON_FIELD_NUMBER, reason);
        }
        ByteBuf output = PooledByteBufAllocator.DEFAULT.directBuffer(capacity);
        try {
            CodedOutputStream stream = newInstance(output.nioBuffer(0, capacity));
            stream.writeInt64(TurmsNotification.REQUEST_ID_FIELD_NUMBER, requestId);
            stream.writeInt32(TurmsNotification.CODE_FIELD_NUMBER, code);
            if (hasReason) {
                stream.writeString(TurmsNotification.REASON_FIELD_NUMBER, reason);
            }
            output.writerIndex(capacity);
        } catch (Exception e) {
            output.release();
            throw new RuntimeException(e);
        }
        return output;
    }

    public static ByteBuf encodeCloseNotification(SessionCloseStatus closeStatus,
                                                  @Nullable ResponseStatusCode statusCode,
                                                  @Nullable String reason) {
        boolean hasCode = statusCode != null;
        boolean hasReason = reason != null;
        int code = closeStatus.getCode();
        int capacity = computeInt32Size(TurmsNotification.CLOSE_STATUS_FIELD_NUMBER, code);
        if (hasCode) {
            capacity += computeInt32Size(TurmsNotification.CODE_FIELD_NUMBER, statusCode.getBusinessCode());
        }
        if (hasReason) {
            capacity += computeStringSize(TurmsNotification.REASON_FIELD_NUMBER, reason);
        }
        ByteBuf output = PooledByteBufAllocator.DEFAULT.directBuffer(capacity);
        try {
            CodedOutputStream stream = newInstance(output.nioBuffer(0, capacity));
            stream.writeInt32(TurmsNotification.CLOSE_STATUS_FIELD_NUMBER, code);
            if (hasCode) {
                stream.writeInt32(TurmsNotification.CODE_FIELD_NUMBER, statusCode.getBusinessCode());
            }
            if (hasReason) {
                stream.writeString(TurmsNotification.REASON_FIELD_NUMBER, reason);
            }
            output.writerIndex(capacity);
        } catch (Exception e) {
            output.release();
            throw new RuntimeException(e);
        }
        return output;
    }

    public static ByteBuf encodeUserSessionNotification(String sessionId, String serverId) {
        int userSessionSize = computeStringSize(UserSession.SESSION_ID_FIELD_NUMBER, sessionId)
                + computeStringSize(UserSession.SERVER_ID_FIELD_NUMBER, serverId);
        int userSessionWithTagSize = computeTagSize(TurmsNotification.Data.USER_SESSION_FIELD_NUMBER)
                + computeUInt32SizeNoTag(userSessionSize)
                + userSessionSize;
        int capacity = computeTagSize(TurmsNotification.DATA_FIELD_NUMBER)
                + computeUInt32SizeNoTag(userSessionWithTagSize)
                + computeTagSize(TurmsNotification.Data.USER_SESSION_FIELD_NUMBER)
                + computeUInt32SizeNoTag(userSessionSize)
                + computeStringSize(UserSession.SESSION_ID_FIELD_NUMBER, sessionId)
                + computeStringSize(UserSession.SERVER_ID_FIELD_NUMBER, serverId);
        ByteBuf output = PooledByteBufAllocator.DEFAULT.directBuffer(capacity);
        try {
            CodedOutputStream stream = newInstance(output.nioBuffer(0, capacity));
            stream.writeTag(TurmsNotification.DATA_FIELD_NUMBER, WireFormat.WIRETYPE_LENGTH_DELIMITED);
            stream.writeUInt32NoTag(userSessionWithTagSize);
            stream.writeTag(TurmsNotification.Data.USER_SESSION_FIELD_NUMBER, WireFormat.WIRETYPE_LENGTH_DELIMITED);
            stream.writeUInt32NoTag(userSessionSize);
            stream.writeString(UserSession.SESSION_ID_FIELD_NUMBER, sessionId);
            stream.writeString(UserSession.SERVER_ID_FIELD_NUMBER, serverId);
            output.writerIndex(capacity);
        } catch (Exception e) {
            output.release();
            throw new RuntimeException(e);
        }
        return output;
    }

}
