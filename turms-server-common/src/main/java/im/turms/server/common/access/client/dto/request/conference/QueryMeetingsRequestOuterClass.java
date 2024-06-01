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

package im.turms.server.common.access.client.dto.request.conference;

public final class QueryMeetingsRequestOuterClass {
    private QueryMeetingsRequestOuterClass() {
    }

    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 27,
                /* patch= */ 0,
                /* suffix= */ "",
                QueryMeetingsRequestOuterClass.class.getName());
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistryLite registry) {
    }

    public static void registerAllExtensions(com.google.protobuf.ExtensionRegistry registry) {
        registerAllExtensions((com.google.protobuf.ExtensionRegistryLite) registry);
    }

    static final com.google.protobuf.Descriptors.Descriptor internal_static_im_turms_proto_QueryMeetingsRequest_descriptor;
    static final com.google.protobuf.GeneratedMessage.FieldAccessorTable internal_static_im_turms_proto_QueryMeetingsRequest_fieldAccessorTable;

    public static com.google.protobuf.Descriptors.FileDescriptor getDescriptor() {
        return descriptor;
    }

    private static final com.google.protobuf.Descriptors.FileDescriptor descriptor;
    static {
        java.lang.String[] descriptorData = {"\n/request/conference/query_meetings_requ"
                + "est.proto\022\016im.turms.proto\"\207\002\n\024QueryMeeti"
                + "ngsRequest\022\013\n\003ids\030\001 \003(\003\022\023\n\013creator_ids\030\002"
                + " \003(\003\022\020\n\010user_ids\030\003 \003(\003\022\021\n\tgroup_ids\030\004 \003("
                + "\003\022 \n\023creation_date_start\030\005 \001(\003H\000\210\001\001\022\036\n\021c"
                + "reation_date_end\030\006 \001(\003H\001\210\001\001\022\021\n\004skip\030\n \001("
                + "\005H\002\210\001\001\022\022\n\005limit\030\013 \001(\005H\003\210\001\001B\026\n\024_creation_"
                + "date_startB\024\n\022_creation_date_endB\007\n\005_ski"
                + "pB\010\n\006_limitBB\n;im.turms.server.common.ac"
                + "cess.client.dto.request.conferenceP\001\272\002\000b"
                + "\006proto3"};
        descriptor = com.google.protobuf.Descriptors.FileDescriptor.internalBuildGeneratedFileFrom(
                descriptorData,
                new com.google.protobuf.Descriptors.FileDescriptor[]{});
        internal_static_im_turms_proto_QueryMeetingsRequest_descriptor =
                getDescriptor().getMessageTypes()
                        .get(0);
        internal_static_im_turms_proto_QueryMeetingsRequest_fieldAccessorTable =
                new com.google.protobuf.GeneratedMessage.FieldAccessorTable(
                        internal_static_im_turms_proto_QueryMeetingsRequest_descriptor,
                        new java.lang.String[]{"Ids",
                                "CreatorIds",
                                "UserIds",
                                "GroupIds",
                                "CreationDateStart",
                                "CreationDateEnd",
                                "Skip",
                                "Limit",});
        descriptor.resolveAllFeaturesImmutable();
    }

    // @@protoc_insertion_point(outer_class_scope)
}