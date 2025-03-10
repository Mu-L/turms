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

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_status_detail.proto

package im.turms.server.common.access.client.dto.model.user;

/**
 * Protobuf type {@code im.turms.proto.UserStatusDetail}
 */
public final class UserStatusDetail extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:im.turms.proto.UserStatusDetail)
    UserStatusDetailOrBuilder {
private static final long serialVersionUID = 0L;
  // Use UserStatusDetail.newBuilder() to construct.
  private UserStatusDetail(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private UserStatusDetail() {
    userStatus_ = 0;
    usingDeviceTypes_ = java.util.Collections.emptyList();
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new UserStatusDetail();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private UserStatusDetail(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    int mutable_bitField0_ = 0;
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 8: {

            userId_ = input.readInt64();
            break;
          }
          case 16: {
            int rawValue = input.readEnum();

            userStatus_ = rawValue;
            break;
          }
          case 24: {
            int rawValue = input.readEnum();
            if (!((mutable_bitField0_ & 0x00000001) != 0)) {
              usingDeviceTypes_ = new java.util.ArrayList<java.lang.Integer>();
              mutable_bitField0_ |= 0x00000001;
            }
            usingDeviceTypes_.add(rawValue);
            break;
          }
          case 26: {
            int length = input.readRawVarint32();
            int oldLimit = input.pushLimit(length);
            while(input.getBytesUntilLimit() > 0) {
              int rawValue = input.readEnum();
              if (!((mutable_bitField0_ & 0x00000001) != 0)) {
                usingDeviceTypes_ = new java.util.ArrayList<java.lang.Integer>();
                mutable_bitField0_ |= 0x00000001;
              }
              usingDeviceTypes_.add(rawValue);
            }
            input.popLimit(oldLimit);
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (com.google.protobuf.UninitializedMessageException e) {
      throw e.asInvalidProtocolBufferException().setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      if (((mutable_bitField0_ & 0x00000001) != 0)) {
        usingDeviceTypes_ = java.util.Collections.unmodifiableList(usingDeviceTypes_);
      }
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return im.turms.server.common.access.client.dto.model.user.UserStatusDetailOuterClass.internal_static_im_turms_proto_UserStatusDetail_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return im.turms.server.common.access.client.dto.model.user.UserStatusDetailOuterClass.internal_static_im_turms_proto_UserStatusDetail_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            im.turms.server.common.access.client.dto.model.user.UserStatusDetail.class, im.turms.server.common.access.client.dto.model.user.UserStatusDetail.Builder.class);
  }

  public static final int USER_ID_FIELD_NUMBER = 1;
  private long userId_;
  /**
   * <code>int64 user_id = 1;</code>
   * @return The userId.
   */
  @java.lang.Override
  public long getUserId() {
    return userId_;
  }

  public static final int USER_STATUS_FIELD_NUMBER = 2;
  private int userStatus_;
  /**
   * <code>.im.turms.proto.UserStatus user_status = 2;</code>
   * @return The enum numeric value on the wire for userStatus.
   */
  @java.lang.Override public int getUserStatusValue() {
    return userStatus_;
  }
  /**
   * <code>.im.turms.proto.UserStatus user_status = 2;</code>
   * @return The userStatus.
   */
  @java.lang.Override public im.turms.server.common.access.client.dto.constant.UserStatus getUserStatus() {
    @SuppressWarnings("deprecation")
    im.turms.server.common.access.client.dto.constant.UserStatus result = im.turms.server.common.access.client.dto.constant.UserStatus.valueOf(userStatus_);
    return result == null ? im.turms.server.common.access.client.dto.constant.UserStatus.UNRECOGNIZED : result;
  }

  public static final int USING_DEVICE_TYPES_FIELD_NUMBER = 3;
  private java.util.List<java.lang.Integer> usingDeviceTypes_;
  private static final com.google.protobuf.Internal.ListAdapter.Converter<
      java.lang.Integer, im.turms.server.common.access.client.dto.constant.DeviceType> usingDeviceTypes_converter_ =
          new com.google.protobuf.Internal.ListAdapter.Converter<
              java.lang.Integer, im.turms.server.common.access.client.dto.constant.DeviceType>() {
            public im.turms.server.common.access.client.dto.constant.DeviceType convert(java.lang.Integer from) {
              @SuppressWarnings("deprecation")
              im.turms.server.common.access.client.dto.constant.DeviceType result = im.turms.server.common.access.client.dto.constant.DeviceType.valueOf(from);
              return result == null ? im.turms.server.common.access.client.dto.constant.DeviceType.UNRECOGNIZED : result;
            }
          };
  /**
   * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
   * @return A list containing the usingDeviceTypes.
   */
  @java.lang.Override
  public java.util.List<im.turms.server.common.access.client.dto.constant.DeviceType> getUsingDeviceTypesList() {
    return new com.google.protobuf.Internal.ListAdapter<
        java.lang.Integer, im.turms.server.common.access.client.dto.constant.DeviceType>(usingDeviceTypes_, usingDeviceTypes_converter_);
  }
  /**
   * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
   * @return The count of usingDeviceTypes.
   */
  @java.lang.Override
  public int getUsingDeviceTypesCount() {
    return usingDeviceTypes_.size();
  }
  /**
   * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
   * @param index The index of the element to return.
   * @return The usingDeviceTypes at the given index.
   */
  @java.lang.Override
  public im.turms.server.common.access.client.dto.constant.DeviceType getUsingDeviceTypes(int index) {
    return usingDeviceTypes_converter_.convert(usingDeviceTypes_.get(index));
  }
  /**
   * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
   * @return A list containing the enum numeric values on the wire for usingDeviceTypes.
   */
  @java.lang.Override
  public java.util.List<java.lang.Integer>
  getUsingDeviceTypesValueList() {
    return usingDeviceTypes_;
  }
  /**
   * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
   * @param index The index of the value to return.
   * @return The enum numeric value on the wire of usingDeviceTypes at the given index.
   */
  @java.lang.Override
  public int getUsingDeviceTypesValue(int index) {
    return usingDeviceTypes_.get(index);
  }
  private int usingDeviceTypesMemoizedSerializedSize;

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    getSerializedSize();
    if (userId_ != 0L) {
      output.writeInt64(1, userId_);
    }
    if (userStatus_ != im.turms.server.common.access.client.dto.constant.UserStatus.AVAILABLE.getNumber()) {
      output.writeEnum(2, userStatus_);
    }
    if (getUsingDeviceTypesList().size() > 0) {
      output.writeUInt32NoTag(26);
      output.writeUInt32NoTag(usingDeviceTypesMemoizedSerializedSize);
    }
    for (int i = 0; i < usingDeviceTypes_.size(); i++) {
      output.writeEnumNoTag(usingDeviceTypes_.get(i));
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (userId_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(1, userId_);
    }
    if (userStatus_ != im.turms.server.common.access.client.dto.constant.UserStatus.AVAILABLE.getNumber()) {
      size += com.google.protobuf.CodedOutputStream
        .computeEnumSize(2, userStatus_);
    }
    {
      int dataSize = 0;
      for (int i = 0; i < usingDeviceTypes_.size(); i++) {
        dataSize += com.google.protobuf.CodedOutputStream
          .computeEnumSizeNoTag(usingDeviceTypes_.get(i));
      }
      size += dataSize;
      if (!getUsingDeviceTypesList().isEmpty()) {  size += 1;
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32SizeNoTag(dataSize);
      }usingDeviceTypesMemoizedSerializedSize = dataSize;
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof im.turms.server.common.access.client.dto.model.user.UserStatusDetail)) {
      return super.equals(obj);
    }
    im.turms.server.common.access.client.dto.model.user.UserStatusDetail other = (im.turms.server.common.access.client.dto.model.user.UserStatusDetail) obj;

    if (getUserId()
        != other.getUserId()) return false;
    if (userStatus_ != other.userStatus_) return false;
    if (!usingDeviceTypes_.equals(other.usingDeviceTypes_)) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + USER_ID_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getUserId());
    hash = (37 * hash) + USER_STATUS_FIELD_NUMBER;
    hash = (53 * hash) + userStatus_;
    if (getUsingDeviceTypesCount() > 0) {
      hash = (37 * hash) + USING_DEVICE_TYPES_FIELD_NUMBER;
      hash = (53 * hash) + usingDeviceTypes_.hashCode();
    }
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(im.turms.server.common.access.client.dto.model.user.UserStatusDetail prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * Protobuf type {@code im.turms.proto.UserStatusDetail}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:im.turms.proto.UserStatusDetail)
      im.turms.server.common.access.client.dto.model.user.UserStatusDetailOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return im.turms.server.common.access.client.dto.model.user.UserStatusDetailOuterClass.internal_static_im_turms_proto_UserStatusDetail_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return im.turms.server.common.access.client.dto.model.user.UserStatusDetailOuterClass.internal_static_im_turms_proto_UserStatusDetail_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              im.turms.server.common.access.client.dto.model.user.UserStatusDetail.class, im.turms.server.common.access.client.dto.model.user.UserStatusDetail.Builder.class);
    }

    // Construct using im.turms.server.common.access.client.dto.model.user.UserStatusDetail.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      userId_ = 0L;

      userStatus_ = 0;

      usingDeviceTypes_ = java.util.Collections.emptyList();
      bitField0_ = (bitField0_ & ~0x00000001);
      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return im.turms.server.common.access.client.dto.model.user.UserStatusDetailOuterClass.internal_static_im_turms_proto_UserStatusDetail_descriptor;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.model.user.UserStatusDetail getDefaultInstanceForType() {
      return im.turms.server.common.access.client.dto.model.user.UserStatusDetail.getDefaultInstance();
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.model.user.UserStatusDetail build() {
      im.turms.server.common.access.client.dto.model.user.UserStatusDetail result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.model.user.UserStatusDetail buildPartial() {
      im.turms.server.common.access.client.dto.model.user.UserStatusDetail result = new im.turms.server.common.access.client.dto.model.user.UserStatusDetail(this);
      int from_bitField0_ = bitField0_;
      result.userId_ = userId_;
      result.userStatus_ = userStatus_;
      if (((bitField0_ & 0x00000001) != 0)) {
        usingDeviceTypes_ = java.util.Collections.unmodifiableList(usingDeviceTypes_);
        bitField0_ = (bitField0_ & ~0x00000001);
      }
      result.usingDeviceTypes_ = usingDeviceTypes_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof im.turms.server.common.access.client.dto.model.user.UserStatusDetail) {
        return mergeFrom((im.turms.server.common.access.client.dto.model.user.UserStatusDetail)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(im.turms.server.common.access.client.dto.model.user.UserStatusDetail other) {
      if (other == im.turms.server.common.access.client.dto.model.user.UserStatusDetail.getDefaultInstance()) return this;
      if (other.getUserId() != 0L) {
        setUserId(other.getUserId());
      }
      if (other.userStatus_ != 0) {
        setUserStatusValue(other.getUserStatusValue());
      }
      if (!other.usingDeviceTypes_.isEmpty()) {
        if (usingDeviceTypes_.isEmpty()) {
          usingDeviceTypes_ = other.usingDeviceTypes_;
          bitField0_ = (bitField0_ & ~0x00000001);
        } else {
          ensureUsingDeviceTypesIsMutable();
          usingDeviceTypes_.addAll(other.usingDeviceTypes_);
        }
        onChanged();
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      im.turms.server.common.access.client.dto.model.user.UserStatusDetail parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (im.turms.server.common.access.client.dto.model.user.UserStatusDetail) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }
    private int bitField0_;

    private long userId_ ;
    /**
     * <code>int64 user_id = 1;</code>
     * @return The userId.
     */
    @java.lang.Override
    public long getUserId() {
      return userId_;
    }
    /**
     * <code>int64 user_id = 1;</code>
     * @param value The userId to set.
     * @return This builder for chaining.
     */
    public Builder setUserId(long value) {
      
      userId_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>int64 user_id = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearUserId() {
      
      userId_ = 0L;
      onChanged();
      return this;
    }

    private int userStatus_ = 0;
    /**
     * <code>.im.turms.proto.UserStatus user_status = 2;</code>
     * @return The enum numeric value on the wire for userStatus.
     */
    @java.lang.Override public int getUserStatusValue() {
      return userStatus_;
    }
    /**
     * <code>.im.turms.proto.UserStatus user_status = 2;</code>
     * @param value The enum numeric value on the wire for userStatus to set.
     * @return This builder for chaining.
     */
    public Builder setUserStatusValue(int value) {
      
      userStatus_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>.im.turms.proto.UserStatus user_status = 2;</code>
     * @return The userStatus.
     */
    @java.lang.Override
    public im.turms.server.common.access.client.dto.constant.UserStatus getUserStatus() {
      @SuppressWarnings("deprecation")
      im.turms.server.common.access.client.dto.constant.UserStatus result = im.turms.server.common.access.client.dto.constant.UserStatus.valueOf(userStatus_);
      return result == null ? im.turms.server.common.access.client.dto.constant.UserStatus.UNRECOGNIZED : result;
    }
    /**
     * <code>.im.turms.proto.UserStatus user_status = 2;</code>
     * @param value The userStatus to set.
     * @return This builder for chaining.
     */
    public Builder setUserStatus(im.turms.server.common.access.client.dto.constant.UserStatus value) {
      if (value == null) {
        throw new NullPointerException();
      }
      
      userStatus_ = value.getNumber();
      onChanged();
      return this;
    }
    /**
     * <code>.im.turms.proto.UserStatus user_status = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearUserStatus() {
      
      userStatus_ = 0;
      onChanged();
      return this;
    }

    private java.util.List<java.lang.Integer> usingDeviceTypes_ =
      java.util.Collections.emptyList();
    private void ensureUsingDeviceTypesIsMutable() {
      if (!((bitField0_ & 0x00000001) != 0)) {
        usingDeviceTypes_ = new java.util.ArrayList<java.lang.Integer>(usingDeviceTypes_);
        bitField0_ |= 0x00000001;
      }
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @return A list containing the usingDeviceTypes.
     */
    public java.util.List<im.turms.server.common.access.client.dto.constant.DeviceType> getUsingDeviceTypesList() {
      return new com.google.protobuf.Internal.ListAdapter<
          java.lang.Integer, im.turms.server.common.access.client.dto.constant.DeviceType>(usingDeviceTypes_, usingDeviceTypes_converter_);
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @return The count of usingDeviceTypes.
     */
    public int getUsingDeviceTypesCount() {
      return usingDeviceTypes_.size();
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param index The index of the element to return.
     * @return The usingDeviceTypes at the given index.
     */
    public im.turms.server.common.access.client.dto.constant.DeviceType getUsingDeviceTypes(int index) {
      return usingDeviceTypes_converter_.convert(usingDeviceTypes_.get(index));
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param index The index to set the value at.
     * @param value The usingDeviceTypes to set.
     * @return This builder for chaining.
     */
    public Builder setUsingDeviceTypes(
        int index, im.turms.server.common.access.client.dto.constant.DeviceType value) {
      if (value == null) {
        throw new NullPointerException();
      }
      ensureUsingDeviceTypesIsMutable();
      usingDeviceTypes_.set(index, value.getNumber());
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param value The usingDeviceTypes to add.
     * @return This builder for chaining.
     */
    public Builder addUsingDeviceTypes(im.turms.server.common.access.client.dto.constant.DeviceType value) {
      if (value == null) {
        throw new NullPointerException();
      }
      ensureUsingDeviceTypesIsMutable();
      usingDeviceTypes_.add(value.getNumber());
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param values The usingDeviceTypes to add.
     * @return This builder for chaining.
     */
    public Builder addAllUsingDeviceTypes(
        java.lang.Iterable<? extends im.turms.server.common.access.client.dto.constant.DeviceType> values) {
      ensureUsingDeviceTypesIsMutable();
      for (im.turms.server.common.access.client.dto.constant.DeviceType value : values) {
        usingDeviceTypes_.add(value.getNumber());
      }
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearUsingDeviceTypes() {
      usingDeviceTypes_ = java.util.Collections.emptyList();
      bitField0_ = (bitField0_ & ~0x00000001);
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @return A list containing the enum numeric values on the wire for usingDeviceTypes.
     */
    public java.util.List<java.lang.Integer>
    getUsingDeviceTypesValueList() {
      return java.util.Collections.unmodifiableList(usingDeviceTypes_);
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param index The index of the value to return.
     * @return The enum numeric value on the wire of usingDeviceTypes at the given index.
     */
    public int getUsingDeviceTypesValue(int index) {
      return usingDeviceTypes_.get(index);
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param index The index of the value to return.
     * @return The enum numeric value on the wire of usingDeviceTypes at the given index.
     * @return This builder for chaining.
     */
    public Builder setUsingDeviceTypesValue(
        int index, int value) {
      ensureUsingDeviceTypesIsMutable();
      usingDeviceTypes_.set(index, value);
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param value The enum numeric value on the wire for usingDeviceTypes to add.
     * @return This builder for chaining.
     */
    public Builder addUsingDeviceTypesValue(int value) {
      ensureUsingDeviceTypesIsMutable();
      usingDeviceTypes_.add(value);
      onChanged();
      return this;
    }
    /**
     * <code>repeated .im.turms.proto.DeviceType using_device_types = 3;</code>
     * @param values The enum numeric values on the wire for usingDeviceTypes to add.
     * @return This builder for chaining.
     */
    public Builder addAllUsingDeviceTypesValue(
        java.lang.Iterable<java.lang.Integer> values) {
      ensureUsingDeviceTypesIsMutable();
      for (int value : values) {
        usingDeviceTypes_.add(value);
      }
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:im.turms.proto.UserStatusDetail)
  }

  // @@protoc_insertion_point(class_scope:im.turms.proto.UserStatusDetail)
  private static final im.turms.server.common.access.client.dto.model.user.UserStatusDetail DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new im.turms.server.common.access.client.dto.model.user.UserStatusDetail();
  }

  public static im.turms.server.common.access.client.dto.model.user.UserStatusDetail getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<UserStatusDetail>
      PARSER = new com.google.protobuf.AbstractParser<UserStatusDetail>() {
    @java.lang.Override
    public UserStatusDetail parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new UserStatusDetail(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<UserStatusDetail> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<UserStatusDetail> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public im.turms.server.common.access.client.dto.model.user.UserStatusDetail getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

