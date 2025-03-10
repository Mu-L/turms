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

package im.turms.server.common.infra.netty;

import com.google.common.annotations.VisibleForTesting;
import im.turms.server.common.infra.lang.NumberFormatter;
import im.turms.server.common.infra.lang.StringUtil;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.ByteBufs;
import io.netty.buffer.PooledByteBufAllocator;
import io.netty.buffer.RefCntCorrectorByteBuf;
import io.netty.buffer.Unpooled;

/**
 * @author James Chen
 */
public final class ByteBufUtil {

    private static final int BYTE_CACHE_SIZE = Byte.MAX_VALUE + 1;
    private static final int INTEGER_CACHE_SIZE = Byte.MAX_VALUE + 1;
    private static final ByteBuf[] BYTE_CACHE;
    private static final ByteBuf[] INTEGER_CACHE;

    static {
        BYTE_CACHE = new ByteBuf[BYTE_CACHE_SIZE];
        INTEGER_CACHE = new ByteBuf[INTEGER_CACHE_SIZE];
        for (int i = 0; i < BYTE_CACHE_SIZE; i++) {
            BYTE_CACHE[i] = getUnreleasableDirectBuffer((byte) i);
        }
        for (int i = 0; i < INTEGER_CACHE_SIZE; i++) {
            INTEGER_CACHE[i] = getUnreleasableDirectBuffer(i);
        }
    }

    private ByteBufUtil() {
    }

    @VisibleForTesting
    public static String getString(ByteBuf buffer) {
        buffer.markReaderIndex();
        byte[] bytes = new byte[buffer.readableBytes()];
        buffer.readBytes(bytes);
        buffer.resetReaderIndex();
        return new String(bytes);
    }

    public static ByteBuf getPooledPreferredByteBuffer(int value) {
        if (0 <= value && value < BYTE_CACHE_SIZE) {
            return BYTE_CACHE[value];
        }
        return PooledByteBufAllocator.DEFAULT.directBuffer(Byte.BYTES).writeByte(value);
    }

    public static ByteBuf getPooledPreferredIntegerBuffer(int value) {
        if (0 <= value && value < INTEGER_CACHE_SIZE) {
            return INTEGER_CACHE[value];
        }
        return PooledByteBufAllocator.DEFAULT.directBuffer(Integer.BYTES).writeInt(value);
    }

    public static ByteBuf getPooledLongBuffer(long value) {
        return PooledByteBufAllocator.DEFAULT.directBuffer(Long.BYTES).writeLong(value);
    }

    public static ByteBuf getUnreleasableDirectBuffer(byte b) {
        ByteBuf buffer = Unpooled.directBuffer(Byte.BYTES)
                .writeByte(b);
        return Unpooled.unreleasableBuffer(buffer);
    }

    public static ByteBuf getUnreleasableDirectBuffer(byte[] bytes) {
        ByteBuf buffer = Unpooled.directBuffer(bytes.length)
                .writeBytes(bytes);
        return Unpooled.unreleasableBuffer(buffer);
    }

    public static ByteBuf getUnreleasableDirectBuffer(int i) {
        ByteBuf buffer = Unpooled.directBuffer(Integer.BYTES)
                .writeInt(i);
        return Unpooled.unreleasableBuffer(buffer);
    }

    public static ByteBuf getUnreleasableDirectBuffer(String string) {
        byte[] bytes = StringUtil.getBytes(string);
        return Unpooled.unreleasableBuffer(Unpooled
                .directBuffer(bytes.length).writeBytes(bytes));
    }

    public static ByteBuf obj2Buffer(Object obj) {
        if (obj instanceof ByteBuf element) {
            return element;
        }
        if (obj instanceof Byte element) {
            return getPooledPreferredByteBuffer(element.intValue());
        }
        if (obj instanceof Short element) {
            return PooledByteBufAllocator.DEFAULT.directBuffer(Short.BYTES).writeShort(element);
        }
        if (obj instanceof Integer element) {
            return getPooledPreferredIntegerBuffer(element);
        }
        if (obj instanceof Long element) {
            return PooledByteBufAllocator.DEFAULT.directBuffer(Long.BYTES).writeLong(element);
        }
        if (obj instanceof String element) {
            byte[] bytes = StringUtil.getUTF8Bytes(element);
            return PooledByteBufAllocator.DEFAULT.directBuffer(bytes.length).writeBytes(bytes);
        }
        if (obj instanceof Float element) {
            return PooledByteBufAllocator.DEFAULT.directBuffer(Float.BYTES).writeFloat(element);
        }
        if (obj instanceof Double element) {
            return PooledByteBufAllocator.DEFAULT.directBuffer(Double.BYTES).writeDouble(element);
        }
        if (obj instanceof Character element) {
            return PooledByteBufAllocator.DEFAULT.directBuffer(Character.BYTES).writeChar(element);
        }
        if (obj instanceof Boolean element) {
            return getPooledPreferredByteBuffer(element ? 1 : 0);
        }
        throw new IllegalArgumentException("Cannot serialize the unknown value: " + obj);
    }

    public static ByteBuf[] objs2Buffers(Object... objs) {
        ByteBuf[] buffers = new ByteBuf[objs.length];
        for (int i = 0; i < objs.length; i++) {
            try {
                buffers[i] = ByteBufUtil.obj2Buffer(objs[i]);
            } catch (Exception e) {
                for (int j = 0; j < i; j++) {
                    buffers[j].release();
                }
                throw new RuntimeException(e);
            }
        }
        return buffers;
    }

    public static ByteBuf ensureByteBufRefCnfCorrect(ByteBuf buf) {
        if (ByteBufs.isUnreleasable(buf) || buf instanceof RefCntCorrectorByteBuf) {
            return buf;
        }
        return new RefCntCorrectorByteBuf(buf);
    }

    public static void safeEnsureReleased(ByteBuf buffer) {
        try {
            int refCnt = buffer.refCnt();
            if (refCnt > 0) {
                buffer.release(refCnt);
            }
        } catch (Exception ignored) {
        }
    }

    public static void ensureReleased(ByteBuf buffer) {
        int refCnt = buffer.refCnt();
        if (refCnt > 0) {
            buffer.release(refCnt);
        }
    }

    public static void ensureReleased(ByteBuf[] buffers) {
        for (ByteBuf buffer : buffers) {
            ensureReleased(buffer);
        }
    }

    public static ByteBuf join(int estimatedSize, int delimiter, Object... elements) {
        ByteBuf buffer = PooledByteBufAllocator.DEFAULT.directBuffer(estimatedSize);
        for (int i = 0, length = elements.length, last = length - 1; i < length; i++) {
            Object element = elements[i];
            if (element instanceof Integer num) {
                buffer.writeBytes(NumberFormatter.toCharBytes(num));
            } else if (element instanceof Long num) {
                buffer.writeBytes(NumberFormatter.toCharBytes(num));
            } else if (element instanceof String s) {
                buffer.writeBytes(StringUtil.getBytes(s));
            } else if (element instanceof byte[] bytes) {
                buffer.writeBytes(bytes);
            } else if (element instanceof Character c) {
                buffer.writeChar(c);
            } else if (element != null) {
                buffer.release();
                throw new IllegalArgumentException("Unsupported type: " + element.getClass().getName());
            }
            if (i != last) {
                buffer.writeByte(delimiter);
            }
        }
        return buffer;
    }

}
