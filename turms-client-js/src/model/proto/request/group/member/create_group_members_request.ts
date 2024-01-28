/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";
import { GroupMemberRole } from "../../../constant/group_member_role";

export const protobufPackage = "im.turms.proto";

export interface CreateGroupMembersRequest {
  groupId: string;
  userIds: string[];
  name?: string | undefined;
  role?: GroupMemberRole | undefined;
  muteEndDate?: string | undefined;
}

function createBaseCreateGroupMembersRequest(): CreateGroupMembersRequest {
  return { groupId: "0", userIds: [], name: undefined, role: undefined, muteEndDate: undefined };
}

export const CreateGroupMembersRequest = {
  encode(message: CreateGroupMembersRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.groupId !== "0") {
      writer.uint32(8).int64(message.groupId);
    }
    writer.uint32(18).fork();
    for (const v of message.userIds) {
      writer.int64(v);
    }
    writer.ldelim();
    if (message.name !== undefined) {
      writer.uint32(26).string(message.name);
    }
    if (message.role !== undefined) {
      writer.uint32(32).int32(message.role);
    }
    if (message.muteEndDate !== undefined) {
      writer.uint32(40).int64(message.muteEndDate);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): CreateGroupMembersRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseCreateGroupMembersRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.groupId = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag === 16) {
            message.userIds.push(longToString(reader.int64() as Long));

            continue;
          }

          if (tag === 18) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.userIds.push(longToString(reader.int64() as Long));
            }

            continue;
          }

          break;
        case 3:
          if (tag !== 26) {
            break;
          }

          message.name = reader.string();
          continue;
        case 4:
          if (tag !== 32) {
            break;
          }

          message.role = reader.int32() as any;
          continue;
        case 5:
          if (tag !== 40) {
            break;
          }

          message.muteEndDate = longToString(reader.int64() as Long);
          continue;
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skipType(tag & 7);
    }
    return message;
  },
};

function longToString(long: Long) {
  return long.toString();
}

if (_m0.util.Long !== Long) {
  _m0.util.Long = Long as any;
  _m0.configure();
}