// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/user/relationship/delete_relationship_group_request.proto

#include "turms/client/model/proto/request/user/relationship/delete_relationship_group_request.pb.h"

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
PROTOBUF_CONSTEXPR DeleteRelationshipGroupRequest::DeleteRelationshipGroupRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.group_index_)*/ 0,
      /*decltype(_impl_.target_group_index_)*/ 0,
    } {}
struct DeleteRelationshipGroupRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeleteRelationshipGroupRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeleteRelationshipGroupRequestDefaultTypeInternal() {}
  union {
    DeleteRelationshipGroupRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeleteRelationshipGroupRequestDefaultTypeInternal _DeleteRelationshipGroupRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class DeleteRelationshipGroupRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<DeleteRelationshipGroupRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_._has_bits_);
  static void set_has_target_group_index(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

DeleteRelationshipGroupRequest::DeleteRelationshipGroupRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.DeleteRelationshipGroupRequest)
}
DeleteRelationshipGroupRequest::DeleteRelationshipGroupRequest(const DeleteRelationshipGroupRequest& from)
    : ::google::protobuf::MessageLite(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.DeleteRelationshipGroupRequest)
}
inline void DeleteRelationshipGroupRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.group_index_){0},
      decltype(_impl_.target_group_index_){0},
  };
}
DeleteRelationshipGroupRequest::~DeleteRelationshipGroupRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.DeleteRelationshipGroupRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void DeleteRelationshipGroupRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void DeleteRelationshipGroupRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void DeleteRelationshipGroupRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.DeleteRelationshipGroupRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.group_index_ = 0;
  _impl_.target_group_index_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DeleteRelationshipGroupRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> DeleteRelationshipGroupRequest::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_DeleteRelationshipGroupRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional int32 target_group_index = 2;
    {::_pbi::TcParser::FastV32S1,
     {16, 0, 0, PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.target_group_index_)}},
    // int32 group_index = 1;
    {::_pbi::TcParser::FastV32S1,
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.group_index_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 group_index = 1;
    {PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.group_index_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // optional int32 target_group_index = 2;
    {PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.target_group_index_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* DeleteRelationshipGroupRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.DeleteRelationshipGroupRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 group_index = 1;
  if (this->_internal_group_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_group_index(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 target_group_index = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_target_group_index(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.DeleteRelationshipGroupRequest)
  return target;
}

::size_t DeleteRelationshipGroupRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.DeleteRelationshipGroupRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 group_index = 1;
  if (this->_internal_group_index() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_group_index());
  }

  // optional int32 target_group_index = 2;
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

void DeleteRelationshipGroupRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DeleteRelationshipGroupRequest*>(
      &from));
}

void DeleteRelationshipGroupRequest::MergeFrom(const DeleteRelationshipGroupRequest& from) {
  DeleteRelationshipGroupRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.DeleteRelationshipGroupRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_group_index() != 0) {
    _this->_internal_set_group_index(from._internal_group_index());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_target_group_index(from._internal_target_group_index());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DeleteRelationshipGroupRequest::CopyFrom(const DeleteRelationshipGroupRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.DeleteRelationshipGroupRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool DeleteRelationshipGroupRequest::IsInitialized() const {
  return true;
}

void DeleteRelationshipGroupRequest::InternalSwap(DeleteRelationshipGroupRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.target_group_index_)
      + sizeof(DeleteRelationshipGroupRequest::_impl_.target_group_index_)
      - PROTOBUF_FIELD_OFFSET(DeleteRelationshipGroupRequest, _impl_.group_index_)>(
          reinterpret_cast<char*>(&_impl_.group_index_),
          reinterpret_cast<char*>(&other->_impl_.group_index_));
}

std::string DeleteRelationshipGroupRequest::GetTypeName() const {
  return "turms.client.model.proto.DeleteRelationshipGroupRequest";
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
