// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: model/user/user_relationship_groups_with_version.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { UserRelationshipGroup } from "./user_relationship_group";

export const protobufPackage = "im.turms.proto";

export interface UserRelationshipGroupsWithVersion {
  userRelationshipGroups: UserRelationshipGroup[];
  lastUpdatedDate?: string | undefined;
}

function createBaseUserRelationshipGroupsWithVersion(): UserRelationshipGroupsWithVersion {
  return { userRelationshipGroups: [], lastUpdatedDate: undefined };
}

export const UserRelationshipGroupsWithVersion: MessageFns<UserRelationshipGroupsWithVersion> = {
  encode(message: UserRelationshipGroupsWithVersion, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    for (const v of message.userRelationshipGroups) {
      UserRelationshipGroup.encode(v!, writer.uint32(10).fork()).join();
    }
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(16).int64(message.lastUpdatedDate);
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): UserRelationshipGroupsWithVersion {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseUserRelationshipGroupsWithVersion();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 10) {
            break;
          }

          message.userRelationshipGroups.push(UserRelationshipGroup.decode(reader, reader.uint32()));
          continue;
        }
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.lastUpdatedDate = reader.int64().toString();
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },
};

export interface MessageFns<T> {
  encode(message: T, writer?: BinaryWriter): BinaryWriter;
  decode(input: BinaryReader | Uint8Array, length?: number): T;
}
