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
// source: request/group/enrollment/delete_group_invitation_request.proto

package im.turms.client.model.proto.request.group.enrollment;

/**
 * Protobuf type {@code im.turms.proto.DeleteGroupInvitationRequest}
 */
public  final class DeleteGroupInvitationRequest extends
    com.google.protobuf.GeneratedMessageLite<
        DeleteGroupInvitationRequest, DeleteGroupInvitationRequest.Builder> implements
    // @@protoc_insertion_point(message_implements:im.turms.proto.DeleteGroupInvitationRequest)
    DeleteGroupInvitationRequestOrBuilder {
  private DeleteGroupInvitationRequest() {
  }
  public static final int INVITATION_ID_FIELD_NUMBER = 1;
  private long invitationId_;
  /**
   * <code>int64 invitation_id = 1;</code>
   * @return The invitationId.
   */
  @java.lang.Override
  public long getInvitationId() {
    return invitationId_;
  }
  /**
   * <code>int64 invitation_id = 1;</code>
   * @param value The invitationId to set.
   */
  private void setInvitationId(long value) {
    
    invitationId_ = value;
  }
  /**
   * <code>int64 invitation_id = 1;</code>
   */
  private void clearInvitationId() {
    
    invitationId_ = 0L;
  }

  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code im.turms.proto.DeleteGroupInvitationRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest, Builder> implements
      // @@protoc_insertion_point(builder_implements:im.turms.proto.DeleteGroupInvitationRequest)
      im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequestOrBuilder {
    // Construct using im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    /**
     * <code>int64 invitation_id = 1;</code>
     * @return The invitationId.
     */
    @java.lang.Override
    public long getInvitationId() {
      return instance.getInvitationId();
    }
    /**
     * <code>int64 invitation_id = 1;</code>
     * @param value The invitationId to set.
     * @return This builder for chaining.
     */
    public Builder setInvitationId(long value) {
      copyOnWrite();
      instance.setInvitationId(value);
      return this;
    }
    /**
     * <code>int64 invitation_id = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearInvitationId() {
      copyOnWrite();
      instance.clearInvitationId();
      return this;
    }

    // @@protoc_insertion_point(builder_scope:im.turms.proto.DeleteGroupInvitationRequest)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "invitationId_",
          };
          java.lang.String info =
              "\u0000\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0000\u0000\u0001\u0002";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest> parser = PARSER;
        if (parser == null) {
          synchronized (im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest>(
                      DEFAULT_INSTANCE);
              PARSER = parser;
            }
          }
        }
        return parser;
    }
    case GET_MEMOIZED_IS_INITIALIZED: {
      return (byte) 1;
    }
    case SET_MEMOIZED_IS_INITIALIZED: {
      return null;
    }
    }
    throw new UnsupportedOperationException();
  }


  // @@protoc_insertion_point(class_scope:im.turms.proto.DeleteGroupInvitationRequest)
  private static final im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest DEFAULT_INSTANCE;
  static {
    DeleteGroupInvitationRequest defaultInstance = new DeleteGroupInvitationRequest();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      DeleteGroupInvitationRequest.class, defaultInstance);
  }

  public static im.turms.client.model.proto.request.group.enrollment.DeleteGroupInvitationRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<DeleteGroupInvitationRequest> PARSER;

  public static com.google.protobuf.Parser<DeleteGroupInvitationRequest> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}

