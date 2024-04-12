/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface QueryUserProfilesRequest {
  userIds: string[];
  lastUpdatedDate?: string | undefined;
  name?: string | undefined;
  skip?: number | undefined;
  limit?: number | undefined;
  fieldsToHighlight: number[];
}

function createBaseQueryUserProfilesRequest(): QueryUserProfilesRequest {
  return {
    userIds: [],
    lastUpdatedDate: undefined,
    name: undefined,
    skip: undefined,
    limit: undefined,
    fieldsToHighlight: [],
  };
}

export const QueryUserProfilesRequest = {
  encode(message: QueryUserProfilesRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    writer.uint32(10).fork();
    for (const v of message.userIds) {
      writer.int64(v);
    }
    writer.ldelim();
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(16).int64(message.lastUpdatedDate);
    }
    if (message.name !== undefined) {
      writer.uint32(26).string(message.name);
    }
    if (message.skip !== undefined) {
      writer.uint32(80).int32(message.skip);
    }
    if (message.limit !== undefined) {
      writer.uint32(88).int32(message.limit);
    }
    writer.uint32(98).fork();
    for (const v of message.fieldsToHighlight) {
      writer.int32(v);
    }
    writer.ldelim();
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryUserProfilesRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryUserProfilesRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag === 8) {
            message.userIds.push(longToString(reader.int64() as Long));

            continue;
          }

          if (tag === 10) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.userIds.push(longToString(reader.int64() as Long));
            }

            continue;
          }

          break;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.lastUpdatedDate = longToString(reader.int64() as Long);
          continue;
        case 3:
          if (tag !== 26) {
            break;
          }

          message.name = reader.string();
          continue;
        case 10:
          if (tag !== 80) {
            break;
          }

          message.skip = reader.int32();
          continue;
        case 11:
          if (tag !== 88) {
            break;
          }

          message.limit = reader.int32();
          continue;
        case 12:
          if (tag === 96) {
            message.fieldsToHighlight.push(reader.int32());

            continue;
          }

          if (tag === 98) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.fieldsToHighlight.push(reader.int32());
            }

            continue;
          }

          break;
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