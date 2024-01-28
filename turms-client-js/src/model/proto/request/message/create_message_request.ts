/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export interface CreateMessageRequest {
  messageId?:
    | string
    | undefined;
  /**
   * is_system_message can only be true if the user is an administrator,
   * or turms server will return an error
   */
  isSystemMessage?: boolean | undefined;
  groupId?: string | undefined;
  recipientId?: string | undefined;
  deliveryDate?: string | undefined;
  text?: string | undefined;
  records: Uint8Array[];
  burnAfter?: number | undefined;
  preMessageId?: string | undefined;
}

function createBaseCreateMessageRequest(): CreateMessageRequest {
  return {
    messageId: undefined,
    isSystemMessage: undefined,
    groupId: undefined,
    recipientId: undefined,
    deliveryDate: undefined,
    text: undefined,
    records: [],
    burnAfter: undefined,
    preMessageId: undefined,
  };
}

export const CreateMessageRequest = {
  encode(message: CreateMessageRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.messageId !== undefined) {
      writer.uint32(8).int64(message.messageId);
    }
    if (message.isSystemMessage !== undefined) {
      writer.uint32(16).bool(message.isSystemMessage);
    }
    if (message.groupId !== undefined) {
      writer.uint32(24).int64(message.groupId);
    }
    if (message.recipientId !== undefined) {
      writer.uint32(32).int64(message.recipientId);
    }
    if (message.deliveryDate !== undefined) {
      writer.uint32(40).int64(message.deliveryDate);
    }
    if (message.text !== undefined) {
      writer.uint32(50).string(message.text);
    }
    for (const v of message.records) {
      writer.uint32(58).bytes(v!);
    }
    if (message.burnAfter !== undefined) {
      writer.uint32(64).int32(message.burnAfter);
    }
    if (message.preMessageId !== undefined) {
      writer.uint32(72).int64(message.preMessageId);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): CreateMessageRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseCreateMessageRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.messageId = longToString(reader.int64() as Long);
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.isSystemMessage = reader.bool();
          continue;
        case 3:
          if (tag !== 24) {
            break;
          }

          message.groupId = longToString(reader.int64() as Long);
          continue;
        case 4:
          if (tag !== 32) {
            break;
          }

          message.recipientId = longToString(reader.int64() as Long);
          continue;
        case 5:
          if (tag !== 40) {
            break;
          }

          message.deliveryDate = longToString(reader.int64() as Long);
          continue;
        case 6:
          if (tag !== 50) {
            break;
          }

          message.text = reader.string();
          continue;
        case 7:
          if (tag !== 58) {
            break;
          }

          message.records.push(reader.bytes());
          continue;
        case 8:
          if (tag !== 64) {
            break;
          }

          message.burnAfter = reader.int32();
          continue;
        case 9:
          if (tag !== 72) {
            break;
          }

          message.preMessageId = longToString(reader.int64() as Long);
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