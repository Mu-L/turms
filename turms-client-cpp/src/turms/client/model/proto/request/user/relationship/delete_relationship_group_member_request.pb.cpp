// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/user/relationship/delete_relationship_group_member_request.proto

#include "turms/client/model/proto/request/user/relationship/delete_relationship_group_member_request.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {
        template <typename>
PROTOBUF_CONSTEXPR DeleteRelationshipGroupMemberRequest::DeleteRelationshipGroupMemberRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.user_id_)*/ ::int64_t{0},
      /*decltype(_impl_.group_index_)*/ 0,
      /*decltype(_impl_.target_group_index_)*/ 0,
    } {}
struct DeleteRelationshipGroupMemberRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeleteRelationshipGroupMemberRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeleteRelationshipGroupMemberRequestDefaultTypeInternal() {}
  union {
    DeleteRelationshipGroupMemberRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeleteRelationshipGroupMemberRequestDefaultTypeInternal _DeleteRelationshipGroupMemberRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class DeleteRelationshipGroupMemberRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<DeleteRelationshipGroupMemberRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_._has_bits_);
  static void set_has_target_group_index(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

DeleteRelationshipGroupMemberRequest::DeleteRelationshipGroupMemberRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
}
DeleteRelationshipGroupMemberRequest::DeleteRelationshipGroupMemberRequest(const DeleteRelationshipGroupMemberRequest& from)
    : ::google::protobuf::MessageLite(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
}
inline void DeleteRelationshipGroupMemberRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.user_id_){::int64_t{0}},
      decltype(_impl_.group_index_){0},
      decltype(_impl_.target_group_index_){0},
  };
}
DeleteRelationshipGroupMemberRequest::~DeleteRelationshipGroupMemberRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void DeleteRelationshipGroupMemberRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void DeleteRelationshipGroupMemberRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void DeleteRelationshipGroupMemberRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.user_id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.group_index_) -
      reinterpret_cast<char*>(&_impl_.user_id_)) + sizeof(_impl_.group_index_));
  _impl_.target_group_index_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DeleteRelationshipGroupMemberRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> DeleteRelationshipGroupMemberRequest::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_DeleteRelationshipGroupMemberRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // int64 user_id = 1;
    {::_pbi::TcParser::FastV64S1,
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.user_id_)}},
    // int32 group_index = 2;
    {::_pbi::TcParser::FastV32S1,
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.group_index_)}},
    // optional int32 target_group_index = 3;
    {::_pbi::TcParser::FastV32S1,
     {24, 0, 0, PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.target_group_index_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int64 user_id = 1;
    {PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.user_id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
    // int32 group_index = 2;
    {PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.group_index_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // optional int32 target_group_index = 3;
    {PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.target_group_index_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* DeleteRelationshipGroupMemberRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 user_id = 1;
  if (this->_internal_user_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<1>(
            stream, this->_internal_user_id(), target);
  }

  // int32 group_index = 2;
  if (this->_internal_group_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_group_index(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 target_group_index = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_target_group_index(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  return target;
}

::size_t DeleteRelationshipGroupMemberRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 user_id = 1;
  if (this->_internal_user_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_user_id());
  }

  // int32 group_index = 2;
  if (this->_internal_group_index() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_group_index());
  }

  // optional int32 target_group_index = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_target_group_index());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DeleteRelationshipGroupMemberRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DeleteRelationshipGroupMemberRequest*>(
      &from));
}

void DeleteRelationshipGroupMemberRequest::MergeFrom(const DeleteRelationshipGroupMemberRequest& from) {
  DeleteRelationshipGroupMemberRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_user_id() != 0) {
    _this->_internal_set_user_id(from._internal_user_id());
  }
  if (from._internal_group_index() != 0) {
    _this->_internal_set_group_index(from._internal_group_index());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_target_group_index(from._internal_target_group_index());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DeleteRelationshipGroupMemberRequest::CopyFrom(const DeleteRelationshipGroupMemberRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.DeleteRelationshipGroupMemberRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool DeleteRelationshipGroupMemberRequest::IsInitialized() const {
  return true;
}

void DeleteRelationshipGroupMemberRequest::InternalSwap(DeleteRelationshipGroupMemberRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.target_group_index_)
      + sizeof(DeleteRelationshipGroupMemberRequest::_impl_.target_group_index_)
      - PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupMemberRequest, _impl_.user_id_)>(
          reinterpret_cast<char*>(&_impl_.user_id_),
          reinterpret_cast<char*>(&other->_impl_.user_id_));
}

std::string DeleteRelationshipGroupMemberRequest::GetTypeName() const {
  return "turms.client.model.proto.DeleteRelationshipGroupMemberRequest";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
