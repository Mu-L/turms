/* eslint-disable */
import _m0 from "protobufjs/minimal";
import { StorageResourceInfo } from "./storage_resource_info";

export const protobufPackage = "im.turms.proto";

export interface StorageResourceInfos {
  infos: StorageResourceInfo[];
}

function createBaseStorageResourceInfos(): StorageResourceInfos {
  return { infos: [] };
}

export const StorageResourceInfos = {
  encode(message: StorageResourceInfos, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    for (const v of message.infos) {
      StorageResourceInfo.encode(v!, writer.uint32(10).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): StorageResourceInfos {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseStorageResourceInfos();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.infos.push(StorageResourceInfo.decode(reader, reader.uint32()));
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