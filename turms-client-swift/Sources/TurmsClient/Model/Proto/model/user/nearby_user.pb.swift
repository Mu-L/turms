// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: model/user/nearby_user.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
private struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
    struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
    typealias Version = _2
}

public struct NearbyUser {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    /// session info
    public var userID: Int64 = 0

    public var deviceType: DeviceType {
        get { return _deviceType ?? .desktop }
        set { _deviceType = newValue }
    }

    /// Returns true if `deviceType` has been explicitly set.
    public var hasDeviceType: Bool { return _deviceType != nil }
    /// Clears the value of `deviceType`. Subsequent reads from it will return its default value.
    public mutating func clearDeviceType() { _deviceType = nil }

    /// user info
    public var info: UserInfo {
        get { return _info ?? UserInfo() }
        set { _info = newValue }
    }

    /// Returns true if `info` has been explicitly set.
    public var hasInfo: Bool { return _info != nil }
    /// Clears the value of `info`. Subsequent reads from it will return its default value.
    public mutating func clearInfo() { _info = nil }

    /// geo info
    public var distance: Int32 {
        get { return _distance ?? 0 }
        set { _distance = newValue }
    }

    /// Returns true if `distance` has been explicitly set.
    public var hasDistance: Bool { return _distance != nil }
    /// Clears the value of `distance`. Subsequent reads from it will return its default value.
    public mutating func clearDistance() { _distance = nil }

    public var location: UserLocation {
        get { return _location ?? UserLocation() }
        set { _location = newValue }
    }

    /// Returns true if `location` has been explicitly set.
    public var hasLocation: Bool { return _location != nil }
    /// Clears the value of `location`. Subsequent reads from it will return its default value.
    public mutating func clearLocation() { _location = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _deviceType: DeviceType?
    fileprivate var _info: UserInfo?
    fileprivate var _distance: Int32?
    fileprivate var _location: UserLocation?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension NearbyUser: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension NearbyUser: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".NearbyUser"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .standard(proto: "user_id"),
        2: .standard(proto: "device_type"),
        3: .same(proto: "info"),
        4: .same(proto: "distance"),
        5: .same(proto: "location"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try decoder.decodeSingularInt64Field(value: &userID)
            case 2: try decoder.decodeSingularEnumField(value: &_deviceType)
            case 3: try decoder.decodeSingularMessageField(value: &_info)
            case 4: try decoder.decodeSingularInt32Field(value: &_distance)
            case 5: try decoder.decodeSingularMessageField(value: &_location)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every if/case branch local when no optimizations
        // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
        // https://github.com/apple/swift-protobuf/issues/1182
        if userID != 0 {
            try visitor.visitSingularInt64Field(value: userID, fieldNumber: 1)
        }
        try { if let v = self._deviceType {
            try visitor.visitSingularEnumField(value: v, fieldNumber: 2)
        } }()
        try { if let v = self._info {
            try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._distance {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 4)
        } }()
        try { if let v = self._location {
            try visitor.visitSingularMessageField(value: v, fieldNumber: 5)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: NearbyUser, rhs: NearbyUser) -> Bool {
        if lhs.userID != rhs.userID { return false }
        if lhs._deviceType != rhs._deviceType { return false }
        if lhs._info != rhs._info { return false }
        if lhs._distance != rhs._distance { return false }
        if lhs._location != rhs._location { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
