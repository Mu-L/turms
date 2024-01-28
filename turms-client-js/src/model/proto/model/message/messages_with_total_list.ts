/* eslint-disable */
import _m0 from "protobufjs/minimal";
import { MessagesWithTotal } from "./messages_with_total";

export const protobufPackage = "im.turms.proto";

export interface MessagesWithTotalList {
  messagesWithTotalList: MessagesWithTotal[];
}

function createBaseMessagesWithTotalList(): MessagesWithTotalList {
  return { messagesWithTotalList: [] };
}

export const MessagesWithTotalList = {
  encode(message: MessagesWithTotalList, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    for (const v of message.messagesWithTotalList) {
      MessagesWithTotal.encode(v!, writer.uint32(10).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): MessagesWithTotalList {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseMessagesWithTotalList();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.messagesWithTotalList.push(MessagesWithTotal.decode(reader, reader.uint32()));
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