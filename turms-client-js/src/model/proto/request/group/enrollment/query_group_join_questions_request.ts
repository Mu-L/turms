/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface QueryGroupJoinQuestionsRequest {
  groupId: string;
  withAnswers: boolean;
  lastUpdatedDate?: string | undefined;
}

function createBaseQueryGroupJoinQuestionsRequest(): QueryGroupJoinQuestionsRequest {
  return { groupId: "0", withAnswers: false, lastUpdatedDate: undefined };
}

export const QueryGroupJoinQuestionsRequest = {
  encode(message: QueryGroupJoinQuestionsRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.groupId !== "0") {
      writer.uint32(8).int64(message.groupId);
    }
    if (message.withAnswers === true) {
      writer.uint32(16).bool(message.withAnswers);
    }
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(24).int64(message.lastUpdatedDate);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryGroupJoinQuestionsRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryGroupJoinQuestionsRequest();
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
          if (tag !== 16) {
            break;
          }

          message.withAnswers = reader.bool();
          continue;
        case 3:
          if (tag !== 24) {
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