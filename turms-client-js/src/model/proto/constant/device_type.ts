/* eslint-disable */
import Long from "long";
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "im.turms.proto";

export enum DeviceType {
  DESKTOP = 0,
  BROWSER = 1,
  IOS = 2,
  ANDROID = 3,
  OTHERS = 4,
  UNKNOWN = 5,
  UNRECOGNIZED = -1,
}

if (_m0.util.Long !== Long) {
  _m0.util.Long = Long as any;
  _m0.configure();
}
