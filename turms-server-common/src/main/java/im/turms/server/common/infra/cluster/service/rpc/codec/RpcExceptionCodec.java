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

package im.turms.server.common.infra.cluster.service.rpc.codec;

import im.turms.server.common.access.common.ResponseStatusCode;
import im.turms.server.common.infra.cluster.service.codec.codec.Codec;
import im.turms.server.common.infra.cluster.service.codec.codec.CodecId;
import im.turms.server.common.infra.cluster.service.rpc.RpcErrorCode;
import im.turms.server.common.infra.cluster.service.rpc.exception.RpcException;
import im.turms.server.common.infra.lang.StringUtil;
import io.netty.buffer.ByteBuf;

import javax.annotation.Nullable;

/**
 * @author James Chen
 */
public class RpcExceptionCodec implements Codec<RpcException> {

    @Override
    public CodecId getCodecId() {
        return CodecId.RPC_EXCEPTION;
    }

    @Override
    public void write(ByteBuf out, RpcException data) {
        out.writeShort(data.getErrorCode().getErrorCode())
                .writeShort(data.getStatusCode().getBusinessCode());
        String description = data.getDescription();
        if (description != null) {
            byte[] bytes = StringUtil.getBytes(description);
            byte coder = StringUtil.getCoder(description);
            out.writeBytes(bytes)
                    .writeByte(coder);
        }
    }

    @Override
    public RpcException read(ByteBuf in) {
        return RpcException.get(
                parseErrorCode(in),
                parseStatusCode(in),
                parseDescription(in));
    }

    @Override
    public int initialCapacity(RpcException data) {
        return Short.BYTES * 2 + StringUtil.getLength(data.getDescription()) + 1;
    }

    private static RpcErrorCode parseErrorCode(ByteBuf in) {
        RpcErrorCode code;
        int errorCode;
        try {
            errorCode = in.readShort() & 0xFFFF;
        } catch (Exception e) {
            throw new IllegalArgumentException("Failed to parse the error code", e);
        }
        code = RpcErrorCode.from(errorCode);
        if (code == null) {
            throw new IllegalArgumentException("Unknown error code: " + errorCode);
        }
        return code;
    }

    private static ResponseStatusCode parseStatusCode(ByteBuf in) {
        ResponseStatusCode code;
        int statusCode;
        try {
            statusCode = in.readShort() & 0xFFFF;
        } catch (Exception e) {
            throw new IllegalArgumentException("Failed to parse the status code", e);
        }
        code = ResponseStatusCode.from(statusCode);
        if (code == null) {
            throw new IllegalArgumentException("Unknown status code: " + statusCode);
        }
        return code;
    }

    @Nullable
    private static String parseDescription(ByteBuf in) {
        int length = in.readableBytes();
        if (length == 0) {
            return null;
        }
        try {
            byte[] bytes = new byte[length - 1];
            in.readBytes(bytes);
            return StringUtil.newString(bytes, in.readByte());
        } catch (Exception e) {
            throw new IllegalArgumentException("Failed to parse description", e);
        }
    }

}
