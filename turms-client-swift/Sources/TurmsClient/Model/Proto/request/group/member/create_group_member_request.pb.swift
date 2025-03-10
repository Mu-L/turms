// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/group/member/create_group_member_request.proto
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

public struct CreateGroupMemberRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var groupID: Int64 = 0

    public var userID: Int64 = 0

    public var name: String {
        get { return _name ?? String() }
        set { _name = newValue }
    }

    /// Returns true if `name` has been explicitly set.
    public var hasName: Bool { return _name != nil }
    /// Clears the value of `name`. Subsequent reads from it will return its default value.
    public mutating func clearName() { _name = nil }

    public var role: GroupMemberRole = .owner

    public var muteEndDate: Int64 {
        get { return _muteEndDate ?? 0 }
        set { _muteEndDate = newValue }
    }

    /// Returns true if `muteEndDate` has been explicitly set.
    public var hasMuteEndDate: Bool { return _muteEndDate != nil }
    /// Clears the value of `muteEndDate`. Subsequent reads from it will return its default value.
    public mutating func clearMuteEndDate() { _muteEndDate = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _name: String?
    fileprivate var _muteEndDate: Int64?
}

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension CreateGroupMemberRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".CreateGroupMemberRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .standard(proto: "group_id"),
        2: .standard(proto: "user_id"),
        3: .same(proto: "name"),
        4: .same(proto: "role"),
        5: .standard(proto: "mute_end_date"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try try decoder.decodeSingularInt64Field(value: &groupID)
            case 2: try try decoder.decodeSingularInt64Field(value: &userID)
            case 3: try try decoder.decodeSingularStringField(value: &_name)
            case 4: try try decoder.decodeSingularEnumField(value: &role)
            case 5: try try decoder.decodeSingularInt64Field(value: &_muteEndDate)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        if groupID != 0 {
            try visitor.visitSingularInt64Field(value: groupID, fieldNumber: 1)
        }
        if userID != 0 {
            try visitor.visitSingularInt64Field(value: userID, fieldNumber: 2)
        }
        try { if let v = self._name {
            try visitor.visitSingularStringField(value: v, fieldNumber: 3)
        } }()
        if role != .owner {
            try visitor.visitSingularEnumField(value: role, fieldNumber: 4)
        }
        try { if let v = self._muteEndDate {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 5)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: CreateGroupMemberRequest, rhs: CreateGroupMemberRequest) -> Bool {
        if lhs.groupID != rhs.groupID { return false }
        if lhs.userID != rhs.userID { return false }
        if lhs._name != rhs._name { return false }
        if lhs.role != rhs.role { return false }
        if lhs._muteEndDate != rhs._muteEndDate { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
