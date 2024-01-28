/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface UserRelationship {
  ownerId?: string | undefined;
  relatedUserId?: string | undefined;
  blockDate?: string | undefined;
  groupIndex?: string | undefined;
  establishmentDate?: string | undefined;
  name?: string | undefined;
}

function createBaseUserRelationship(): UserRelationship {
  return {
    ownerId: undefined,
    relatedUserId: undefined,
    blockDate: undefined,
    groupIndex: undefined,
    establishmentDate: undefined,
    name: undefined,
  };
}

export const UserRelationship = {
  encode(message: UserRelationship, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.ownerId !== undefined) {
      writer.uint32(8).int64(message.ownerId);
    }
    if (message.relatedUserId !== undefined) {
      writer.uint32(16).int64(message.relatedUserId);
    }
    if (message.blockDate !== undefined) {
      writer.uint32(24).int64(message.blockDate);
    }
    if (message.groupIndex !== undefined) {
      writer.uint32(32).int64(message.groupIndex);
    }
    if (message.establishmentDate !== undefined) {
      writer.uint32(40).int64(message.establishmentDate);
    }
    if (message.name !== undefined) {
      writer.uint32(50).string(message.name);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): UserRelationship {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseUserRelationship();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.ownerId = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.relatedUserId = longToString(reader.int64() as Long);
          continue;
        case 3:
          if (tag !== 24) {
            break;
          }

          message.blockDate = longToString(reader.int64() as Long);
          continue;
        case 4:
          if (tag !== 32) {
            break;
          }

          message.groupIndex = longToString(reader.int64() as Long);
          continue;
        case 5:
          if (tag !== 40) {
            break;
          }

          message.establishmentDate = longToString(reader.int64() as Long);
          continue;
        case 6:
          if (tag !== 50) {
            break;
          }

          message.name = reader.string();
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