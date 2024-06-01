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

package im.turms.server.common.access.client.dto.request.group.enrollment;

/**
 * Protobuf type {@code im.turms.proto.UpdateGroupInvitationRequest}
 */
public final class UpdateGroupInvitationRequest extends com.google.protobuf.GeneratedMessage
        implements
        // @@protoc_insertion_point(message_implements:im.turms.proto.UpdateGroupInvitationRequest)
        UpdateGroupInvitationRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 27,
                /* patch= */ 0,
                /* suffix= */ "",
                UpdateGroupInvitationRequest.class.getName());
    }

    // Use UpdateGroupInvitationRequest.newBuilder() to construct.
    private UpdateGroupInvitationRequest(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private UpdateGroupInvitationRequest() {
        responseAction_ = 0;
        reason_ = "";
    }

    public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOuterClass.internal_static_im_turms_proto_UpdateGroupInvitationRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOuterClass.internal_static_im_turms_proto_UpdateGroupInvitationRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest.class,
                        im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest.Builder.class);
    }

    private int bitField0_;
    public static final int INVITATION_ID_FIELD_NUMBER = 1;
    private long invitationId_ = 0L;

    /**
     * <pre>
     * Query filter
     * </pre>
     *
     * <code>int64 invitation_id = 1;</code>
     *
     * @return The invitationId.
     */
    @java.lang.Override
    public long getInvitationId() {
        return invitationId_;
    }

    public static final int RESPONSE_ACTION_FIELD_NUMBER = 2;
    private int responseAction_ = 0;

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
     *
     * @return The enum numeric value on the wire for responseAction.
     */
    @java.lang.Override
    public int getResponseActionValue() {
        return responseAction_;
    }

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
     *
     * @return The responseAction.
     */
    @java.lang.Override
    public im.turms.server.common.access.client.dto.constant.ResponseAction getResponseAction() {
        im.turms.server.common.access.client.dto.constant.ResponseAction result =
                im.turms.server.common.access.client.dto.constant.ResponseAction
                        .forNumber(responseAction_);
        return result == null
                ? im.turms.server.common.access.client.dto.constant.ResponseAction.UNRECOGNIZED
                : result;
    }

    public static final int REASON_FIELD_NUMBER = 3;
    @SuppressWarnings("serial")
    private volatile java.lang.Object reason_ = "";

    /**
     * <code>optional string reason = 3;</code>
     *
     * @return Whether the reason field is set.
     */
    @java.lang.Override
    public boolean hasReason() {
        return ((bitField0_ & 0x00000001) != 0);
    }

    /**
     * <code>optional string reason = 3;</code>
     *
     * @return The reason.
     */
    @java.lang.Override
    public java.lang.String getReason() {
        java.lang.Object ref = reason_;
        if (ref instanceof java.lang.String) {
            return (java.lang.String) ref;
        } else {
            com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
            java.lang.String s = bs.toStringUtf8();
            reason_ = s;
            return s;
        }
    }

    /**
     * <code>optional string reason = 3;</code>
     *
     * @return The bytes for reason.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getReasonBytes() {
        java.lang.Object ref = reason_;
        if (ref instanceof java.lang.String) {
            com.google.protobuf.ByteString b =
                    com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
            reason_ = b;
            return b;
        } else {
            return (com.google.protobuf.ByteString) ref;
        }
    }

    private byte memoizedIsInitialized = -1;

    @java.lang.Override
    public boolean isInitialized() {
        byte isInitialized = memoizedIsInitialized;
        if (isInitialized == 1) {
            return true;
        }
        if (isInitialized == 0) {
            return false;
        }

        memoizedIsInitialized = 1;
        return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output) throws java.io.IOException {
        if (invitationId_ != 0L) {
            output.writeInt64(1, invitationId_);
        }
        if (responseAction_ != im.turms.server.common.access.client.dto.constant.ResponseAction.ACCEPT
                .getNumber()) {
            output.writeEnum(2, responseAction_);
        }
        if (((bitField0_ & 0x00000001) != 0)) {
            com.google.protobuf.GeneratedMessage.writeString(output, 3, reason_);
        }
        getUnknownFields().writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
        int size = memoizedSize;
        if (size != -1) {
            return size;
        }

        size = 0;
        if (invitationId_ != 0L) {
            size += com.google.protobuf.CodedOutputStream.computeInt64Size(1, invitationId_);
        }
        if (responseAction_ != im.turms.server.common.access.client.dto.constant.ResponseAction.ACCEPT
                .getNumber()) {
            size += com.google.protobuf.CodedOutputStream.computeEnumSize(2, responseAction_);
        }
        if (((bitField0_ & 0x00000001) != 0)) {
            size += com.google.protobuf.GeneratedMessage.computeStringSize(3, reason_);
        }
        size += getUnknownFields().getSerializedSize();
        memoizedSize = size;
        return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof UpdateGroupInvitationRequest other)) {
            return super.equals(obj);
        }

        if (getInvitationId() != other.getInvitationId()) {
            return false;
        }
        if (responseAction_ != other.responseAction_) {
            return false;
        }
        if (hasReason() != other.hasReason()) {
            return false;
        }
        if (hasReason()) {
            if (!getReason().equals(other.getReason())) {
                return false;
            }
        }
        return getUnknownFields().equals(other.getUnknownFields());
    }

    @java.lang.Override
    public int hashCode() {
        if (memoizedHashCode != 0) {
            return memoizedHashCode;
        }
        int hash = 41;
        hash = (19 * hash) + getDescriptor().hashCode();
        hash = (37 * hash) + INVITATION_ID_FIELD_NUMBER;
        hash = (53 * hash) + com.google.protobuf.Internal.hashLong(getInvitationId());
        hash = (37 * hash) + RESPONSE_ACTION_FIELD_NUMBER;
        hash = (53 * hash) + responseAction_;
        if (hasReason()) {
            hash = (37 * hash) + REASON_FIELD_NUMBER;
            hash = (53 * hash) + getReason().hashCode();
        }
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            byte[] data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest parseFrom(
            com.google.protobuf.CodedInputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() {
        return newBuilder();
    }

    public static Builder newBuilder() {
        return DEFAULT_INSTANCE.toBuilder();
    }

    public static Builder newBuilder(
            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest prototype) {
        return DEFAULT_INSTANCE.toBuilder()
                .mergeFrom(prototype);
    }

    @java.lang.Override
    public Builder toBuilder() {
        return this == DEFAULT_INSTANCE
                ? new Builder()
                : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
        return new Builder(parent);
    }

    /**
     * Protobuf type {@code im.turms.proto.UpdateGroupInvitationRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:im.turms.proto.UpdateGroupInvitationRequest)
            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOrBuilder {
        public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOuterClass.internal_static_im_turms_proto_UpdateGroupInvitationRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOuterClass.internal_static_im_turms_proto_UpdateGroupInvitationRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest.class,
                            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest.Builder.class);
        }

        // Construct using
        // im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            invitationId_ = 0L;
            responseAction_ = 0;
            reason_ = "";
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequestOuterClass.internal_static_im_turms_proto_UpdateGroupInvitationRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest getDefaultInstanceForType() {
            return im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest
                    .getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest build() {
            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest result =
                    buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest buildPartial() {
            im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest result =
                    new im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest(
                            this);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartial0(
                im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest result) {
            int from_bitField0_ = bitField0_;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                result.invitationId_ = invitationId_;
            }
            if (((from_bitField0_ & 0x00000002) != 0)) {
                result.responseAction_ = responseAction_;
            }
            int to_bitField0_ = 0;
            if (((from_bitField0_ & 0x00000004) != 0)) {
                result.reason_ = reason_;
                to_bitField0_ |= 0x00000001;
            }
            result.bitField0_ |= to_bitField0_;
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest) {
                return mergeFrom(
                        (im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(
                im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest other) {
            if (other == im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (other.getInvitationId() != 0L) {
                setInvitationId(other.getInvitationId());
            }
            if (other.responseAction_ != 0) {
                setResponseActionValue(other.getResponseActionValue());
            }
            if (other.hasReason()) {
                reason_ = other.reason_;
                bitField0_ |= 0x00000004;
                onChanged();
            }
            this.mergeUnknownFields(other.getUnknownFields());
            onChanged();
            return this;
        }

        @java.lang.Override
        public boolean isInitialized() {
            return true;
        }

        @java.lang.Override
        public Builder mergeFrom(
                com.google.protobuf.CodedInputStream input,
                com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                throws java.io.IOException {
            if (extensionRegistry == null) {
                throw new java.lang.NullPointerException();
            }
            try {
                boolean done = false;
                while (!done) {
                    int tag = input.readTag();
                    switch (tag) {
                        case 0 -> done = true;
                        case 8 -> {
                            invitationId_ = input.readInt64();
                            bitField0_ |= 0x00000001;
                        } // case 8
                        case 16 -> {
                            responseAction_ = input.readEnum();
                            bitField0_ |= 0x00000002;
                        } // case 16
                        case 26 -> {
                            reason_ = input.readStringRequireUtf8();
                            bitField0_ |= 0x00000004;
                        } // case 26
                        default -> {
                            if (!super.parseUnknownField(input, extensionRegistry, tag)) {
                                done = true; // was an endgroup tag
                            }
                        } // default:
                    } // switch (tag)
                } // while (!done)
            } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                throw e.unwrapIOException();
            } finally {
                onChanged();
            } // finally
            return this;
        }

        private int bitField0_;

        private long invitationId_;

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int64 invitation_id = 1;</code>
         *
         * @return The invitationId.
         */
        @java.lang.Override
        public long getInvitationId() {
            return invitationId_;
        }

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int64 invitation_id = 1;</code>
         *
         * @param value The invitationId to set.
         * @return This builder for chaining.
         */
        public Builder setInvitationId(long value) {

            invitationId_ = value;
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int64 invitation_id = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearInvitationId() {
            bitField0_ &= ~0x00000001;
            invitationId_ = 0L;
            onChanged();
            return this;
        }

        private int responseAction_ = 0;

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
         *
         * @return The enum numeric value on the wire for responseAction.
         */
        @java.lang.Override
        public int getResponseActionValue() {
            return responseAction_;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
         *
         * @param value The enum numeric value on the wire for responseAction to set.
         * @return This builder for chaining.
         */
        public Builder setResponseActionValue(int value) {
            responseAction_ = value;
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
         *
         * @return The responseAction.
         */
        @java.lang.Override
        public im.turms.server.common.access.client.dto.constant.ResponseAction getResponseAction() {
            im.turms.server.common.access.client.dto.constant.ResponseAction result =
                    im.turms.server.common.access.client.dto.constant.ResponseAction
                            .forNumber(responseAction_);
            return result == null
                    ? im.turms.server.common.access.client.dto.constant.ResponseAction.UNRECOGNIZED
                    : result;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
         *
         * @param value The responseAction to set.
         * @return This builder for chaining.
         */
        public Builder setResponseAction(
                im.turms.server.common.access.client.dto.constant.ResponseAction value) {
            if (value == null) {
                throw new NullPointerException();
            }
            bitField0_ |= 0x00000002;
            responseAction_ = value.getNumber();
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>.im.turms.proto.ResponseAction response_action = 2;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearResponseAction() {
            bitField0_ &= ~0x00000002;
            responseAction_ = 0;
            onChanged();
            return this;
        }

        private java.lang.Object reason_ = "";

        /**
         * <code>optional string reason = 3;</code>
         *
         * @return Whether the reason field is set.
         */
        public boolean hasReason() {
            return ((bitField0_ & 0x00000004) != 0);
        }

        /**
         * <code>optional string reason = 3;</code>
         *
         * @return The reason.
         */
        public java.lang.String getReason() {
            java.lang.Object ref = reason_;
            if (!(ref instanceof java.lang.String)) {
                com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
                java.lang.String s = bs.toStringUtf8();
                reason_ = s;
                return s;
            } else {
                return (java.lang.String) ref;
            }
        }

        /**
         * <code>optional string reason = 3;</code>
         *
         * @return The bytes for reason.
         */
        public com.google.protobuf.ByteString getReasonBytes() {
            java.lang.Object ref = reason_;
            if (ref instanceof String) {
                com.google.protobuf.ByteString b =
                        com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
                reason_ = b;
                return b;
            } else {
                return (com.google.protobuf.ByteString) ref;
            }
        }

        /**
         * <code>optional string reason = 3;</code>
         *
         * @param value The reason to set.
         * @return This builder for chaining.
         */
        public Builder setReason(java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            reason_ = value;
            bitField0_ |= 0x00000004;
            onChanged();
            return this;
        }

        /**
         * <code>optional string reason = 3;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearReason() {
            reason_ = getDefaultInstance().getReason();
            bitField0_ &= ~0x00000004;
            onChanged();
            return this;
        }

        /**
         * <code>optional string reason = 3;</code>
         *
         * @param value The bytes for reason to set.
         * @return This builder for chaining.
         */
        public Builder setReasonBytes(com.google.protobuf.ByteString value) {
            if (value == null) {
                throw new NullPointerException();
            }
            checkByteStringIsUtf8(value);
            reason_ = value;
            bitField0_ |= 0x00000004;
            onChanged();
            return this;
        }

        // @@protoc_insertion_point(builder_scope:im.turms.proto.UpdateGroupInvitationRequest)
    }

    // @@protoc_insertion_point(class_scope:im.turms.proto.UpdateGroupInvitationRequest)
    private static final im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE =
                new im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest();
    }

    public static im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<UpdateGroupInvitationRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public UpdateGroupInvitationRequest parsePartialFrom(
                        com.google.protobuf.CodedInputStream input,
                        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                        throws com.google.protobuf.InvalidProtocolBufferException {
                    Builder builder = newBuilder();
                    try {
                        builder.mergeFrom(input, extensionRegistry);
                    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                        throw e.setUnfinishedMessage(builder.buildPartial());
                    } catch (com.google.protobuf.UninitializedMessageException e) {
                        throw e.asInvalidProtocolBufferException()
                                .setUnfinishedMessage(builder.buildPartial());
                    } catch (java.io.IOException e) {
                        throw new com.google.protobuf.InvalidProtocolBufferException(e)
                                .setUnfinishedMessage(builder.buildPartial());
                    }
                    return builder.buildPartial();
                }
            };

    public static com.google.protobuf.Parser<UpdateGroupInvitationRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<UpdateGroupInvitationRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.group.enrollment.UpdateGroupInvitationRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}