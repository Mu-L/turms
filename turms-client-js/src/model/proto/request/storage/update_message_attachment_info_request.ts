/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface UpdateMessageAttachmentInfoRequest {
  /** Query filter */
  attachmentIdNum?: string | undefined;
  attachmentIdStr?:
    | string
    | undefined;
  /** Update */
  userIdToShareWith?: string | undefined;
  userIdToUnshareWith?: string | undefined;
  groupIdToShareWith?: string | undefined;
  groupIdToUnshareWith?: string | undefined;
}

function createBaseUpdateMessageAttachmentInfoRequest(): UpdateMessageAttachmentInfoRequest {
  return {
    attachmentIdNum: undefined,
    attachmentIdStr: undefined,
    userIdToShareWith: undefined,
    userIdToUnshareWith: undefined,
    groupIdToShareWith: undefined,
    groupIdToUnshareWith: undefined,
  };
}

export const UpdateMessageAttachmentInfoRequest = {
  encode(message: UpdateMessageAttachmentInfoRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.attachmentIdNum !== undefined) {
      writer.uint32(8).int64(message.attachmentIdNum);
    }
    if (message.attachmentIdStr !== undefined) {
      writer.uint32(18).string(message.attachmentIdStr);
    }
    if (message.userIdToShareWith !== undefined) {
      writer.uint32(24).int64(message.userIdToShareWith);
    }
    if (message.userIdToUnshareWith !== undefined) {
      writer.uint32(32).int64(message.userIdToUnshareWith);
    }
    if (message.groupIdToShareWith !== undefined) {
      writer.uint32(40).int64(message.groupIdToShareWith);
    }
    if (message.groupIdToUnshareWith !== undefined) {
      writer.uint32(48).int64(message.groupIdToUnshareWith);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): UpdateMessageAttachmentInfoRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseUpdateMessageAttachmentInfoRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.attachmentIdNum = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag !== 18) {
            break;
          }

          message.attachmentIdStr = reader.string();
          continue;
        case 3:
          if (tag !== 24) {
            break;
          }

          message.userIdToShareWith = longToString(reader.int64() as Long);
          continue;
        case 4:
          if (tag !== 32) {
            break;
          }

          message.userIdToUnshareWith = longToString(reader.int64() as Long);
          continue;
        case 5:
          if (tag !== 40) {
            break;
          }

          message.groupIdToShareWith = longToString(reader.int64() as Long);
          continue;
        case 6:
          if (tag !== 48) {
            break;
          }

          message.groupIdToUnshareWith = longToString(reader.int64() as Long);
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