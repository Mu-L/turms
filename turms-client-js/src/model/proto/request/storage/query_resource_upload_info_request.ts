/* eslint-disable */
import Long from "long";
import _m0 from "protobufjs/minimal";
import { StorageResourceType } from "../../constant/storage_resource_type";

export const protobufPackage = "im.turms.proto";

export interface QueryResourceUploadInfoRequest {
  type: StorageResourceType;
  idNum?: string | undefined;
  idStr?: string | undefined;
  name?: string | undefined;
  mediaType?: string | undefined;
  extra: { [key: string]: string };
}

export interface QueryResourceUploadInfoRequest_ExtraEntry {
  key: string;
  value: string;
}

function createBaseQueryResourceUploadInfoRequest(): QueryResourceUploadInfoRequest {
  return { type: 0, idNum: undefined, idStr: undefined, name: undefined, mediaType: undefined, extra: {} };
}

export const QueryResourceUploadInfoRequest = {
  encode(message: QueryResourceUploadInfoRequest, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.type !== 0) {
      writer.uint32(8).int32(message.type);
    }
    if (message.idNum !== undefined) {
      writer.uint32(16).int64(message.idNum);
    }
    if (message.idStr !== undefined) {
      writer.uint32(26).string(message.idStr);
    }
    if (message.name !== undefined) {
      writer.uint32(34).string(message.name);
    }
    if (message.mediaType !== undefined) {
      writer.uint32(42).string(message.mediaType);
    }
    Object.entries(message.extra).forEach(([key, value]) => {
      QueryResourceUploadInfoRequest_ExtraEntry.encode({ key: key as any, value }, writer.uint32(50).fork()).ldelim();
    });
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryResourceUploadInfoRequest {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryResourceUploadInfoRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 8) {
            break;
          }

          message.type = reader.int32() as any;
          continue;
        case 2:
          if (tag !== 16) {
            break;
          }

          message.idNum = longToString(reader.int64() as Long);
          continue;
        case 3:
          if (tag !== 26) {
            break;
          }

          message.idStr = reader.string();
          continue;
        case 4:
          if (tag !== 34) {
            break;
          }

          message.name = reader.string();
          continue;
        case 5:
          if (tag !== 42) {
            break;
          }

          message.mediaType = reader.string();
          continue;
        case 6:
          if (tag !== 50) {
            break;
          }

          const entry6 = QueryResourceUploadInfoRequest_ExtraEntry.decode(reader, reader.uint32());
          if (entry6.value !== undefined) {
            message.extra[entry6.key] = entry6.value;
          }
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

function createBaseQueryResourceUploadInfoRequest_ExtraEntry(): QueryResourceUploadInfoRequest_ExtraEntry {
  return { key: "", value: "" };
}

export const QueryResourceUploadInfoRequest_ExtraEntry = {
  encode(message: QueryResourceUploadInfoRequest_ExtraEntry, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.key !== "") {
      writer.uint32(10).string(message.key);
    }
    if (message.value !== "") {
      writer.uint32(18).string(message.value);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): QueryResourceUploadInfoRequest_ExtraEntry {
    const reader = input instanceof _m0.Reader ? input : _m0.Reader.create(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryResourceUploadInfoRequest_ExtraEntry();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          if (tag !== 10) {
            break;
          }

          message.key = reader.string();
          continue;
        case 2:
          if (tag !== 18) {
            break;
          }

          message.value = reader.string();
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