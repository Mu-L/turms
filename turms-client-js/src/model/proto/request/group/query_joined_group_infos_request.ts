/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface QueryJoinedGroupInfosRequest {
  lastUpdatedDate?: string | undefined;
}

function createBaseQueryJoinedGroupInfosRequest(): QueryJoinedGroupInfosRequest {
  return { lastUpdatedDate: undefined };
}

export const QueryJoinedGroupInfosRequest = {
  encode(message: QueryJoinedGroupInfosRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(8).int64(message.lastUpdatedDate);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryJoinedGroupInfosRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryJoinedGroupInfosRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.lastUpdatedDate = longToString(reader.int64() as Long);
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