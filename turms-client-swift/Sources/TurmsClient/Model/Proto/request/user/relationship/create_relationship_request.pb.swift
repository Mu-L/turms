// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/user/relationship/create_relationship_request.proto
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

public struct CreateRelationshipRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var userID: Int64 = 0

    public var blocked: Bool = false

    public var groupIndex: Int32 {
        get { return _groupIndex ?? 0 }
        set { _groupIndex = newValue }
    }

    /// Returns true if `groupIndex` has been explicitly set.
    public var hasGroupIndex: Bool { return _groupIndex != nil }
    /// Clears the value of `groupIndex`. Subsequent reads from it will return its default value.
    public mutating func clearGroupIndex() { _groupIndex = nil }

    public var name: String {
        get { return _name ?? String() }
        set { _name = newValue }
    }

    /// Returns true if `name` has been explicitly set.
    public var hasName: Bool { return _name != nil }
    /// Clears the value of `name`. Subsequent reads from it will return its default value.
    public mutating func clearName() { _name = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    fileprivate var _groupIndex: Int32?
    fileprivate var _name: String?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension CreateRelationshipRequest: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension CreateRelationshipRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".CreateRelationshipRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .standard(proto: "user_id"),
        2: .same(proto: "blocked"),
        3: .standard(proto: "group_index"),
        4: .same(proto: "name"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try decoder.decodeSingularInt64Field(value: &userID)
            case 2: try decoder.decodeSingularBoolField(value: &blocked)
            case 3: try decoder.decodeSingularInt32Field(value: &_groupIndex)
            case 4: try decoder.decodeSingularStringField(value: &_name)
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
        if blocked != false {
            try visitor.visitSingularBoolField(value: blocked, fieldNumber: 2)
        }
        try { if let v = self._groupIndex {
            try visitor.visitSingularInt32Field(value: v, fieldNumber: 3)
        } }()
        try { if let v = self._name {
            try visitor.visitSingularStringField(value: v, fieldNumber: 4)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: CreateRelationshipRequest, rhs: CreateRelationshipRequest) -> Bool {
        if lhs.userID != rhs.userID { return false }
        if lhs.blocked != rhs.blocked { return false }
        if lhs._groupIndex != rhs._groupIndex { return false }
        if lhs._name != rhs._name { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}
