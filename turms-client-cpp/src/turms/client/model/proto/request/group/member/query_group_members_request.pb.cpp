// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/member/query_group_members_request.proto

#include "turms/client/model/proto/request/group/member/query_group_members_request.pb.h"

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
PROTOBUF_CONSTEXPR QueryGroupMembersRequest::QueryGroupMembersRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.member_ids_)*/ {},
      /* _impl_._member_ids_cached_byte_size_ = */ {0},
      /*decltype(_impl_.group_id_)*/ ::int64_t{0},
      /*decltype(_impl_.last_updated_date_)*/ ::int64_t{0},
      /*decltype(_impl_.with_status_)*/ false,
    } {}
struct QueryGroupMembersRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryGroupMembersRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryGroupMembersRequestDefaultTypeInternal() {}
  union {
    QueryGroupMembersRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryGroupMembersRequestDefaultTypeInternal _QueryGroupMembersRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class QueryGroupMembersRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<QueryGroupMembersRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_._has_bits_);
  static void set_has_last_updated_date(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_with_status(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

QueryGroupMembersRequest::QueryGroupMembersRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.QueryGroupMembersRequest)
}
QueryGroupMembersRequest::QueryGroupMembersRequest(const QueryGroupMembersRequest& from) : ::google::protobuf::MessageLite() {
  QueryGroupMembersRequest* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.member_ids_){from._impl_.member_ids_},
      /* _impl_._member_ids_cached_byte_size_ = */ {0},
      decltype(_impl_.group_id_){},
      decltype(_impl_.last_updated_date_){},
      decltype(_impl_.with_status_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  ::memcpy(&_impl_.group_id_, &from._impl_.group_id_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.with_status_) -
    reinterpret_cast<char*>(&_impl_.group_id_)) + sizeof(_impl_.with_status_));

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.QueryGroupMembersRequest)
}
inline void QueryGroupMembersRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.member_ids_){arena},
      /* _impl_._member_ids_cached_byte_size_ = */ {0},
      decltype(_impl_.group_id_){::int64_t{0}},
      decltype(_impl_.last_updated_date_){::int64_t{0}},
      decltype(_impl_.with_status_){false},
  };
}
QueryGroupMembersRequest::~QueryGroupMembersRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.QueryGroupMembersRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void QueryGroupMembersRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.member_ids_.~RepeatedField();
}
void QueryGroupMembersRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void QueryGroupMembersRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.QueryGroupMembersRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_member_ids()->Clear();
  _impl_.group_id_ = ::int64_t{0};
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.last_updated_date_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.with_status_) -
        reinterpret_cast<char*>(&_impl_.last_updated_date_)) + sizeof(_impl_.with_status_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* QueryGroupMembersRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 0, 0, 2> QueryGroupMembersRequest::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_QueryGroupMembersRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional bool with_status = 4;
    {::_pbi::TcParser::FastV8S1,
     {32, 1, 0, PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.with_status_)}},
    // int64 group_id = 1;
    {::_pbi::TcParser::FastV64S1,
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.group_id_)}},
    // optional int64 last_updated_date = 2;
    {::_pbi::TcParser::FastV64S1,
     {16, 0, 0, PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.last_updated_date_)}},
    // repeated int64 member_ids = 3;
    {::_pbi::TcParser::FastV64P1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.member_ids_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int64 group_id = 1;
    {PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.group_id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
    // optional int64 last_updated_date = 2;
    {PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.last_updated_date_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // repeated int64 member_ids = 3;
    {PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.member_ids_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedInt64)},
    // optional bool with_status = 4;
    {PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.with_status_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* QueryGroupMembersRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.QueryGroupMembersRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int64 group_id = 1;
  if (this->_internal_group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<1>(
            stream, this->_internal_group_id(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 last_updated_date = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_last_updated_date(), target);
  }

  // repeated int64 member_ids = 3;
  {
    int byte_size = _impl_._member_ids_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(3, _internal_member_ids(),
                                                 byte_size, target);
    }
  }

  // optional bool with_status = 4;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        4, this->_internal_with_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.QueryGroupMembersRequest)
  return target;
}

::size_t QueryGroupMembersRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.QueryGroupMembersRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 member_ids = 3;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int64Size(
        this->_internal_member_ids())
    ;
    _impl_._member_ids_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // int64 group_id = 1;
  if (this->_internal_group_id() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_group_id());
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int64 last_updated_date = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_last_updated_date());
    }

    // optional bool with_status = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QueryGroupMembersRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const QueryGroupMembersRequest*>(
      &from));
}

void QueryGroupMembersRequest::MergeFrom(const QueryGroupMembersRequest& from) {
  QueryGroupMembersRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.QueryGroupMembersRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_member_ids()->MergeFrom(from._internal_member_ids());
  if (from._internal_group_id() != 0) {
    _this->_internal_set_group_id(from._internal_group_id());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.last_updated_date_ = from._impl_.last_updated_date_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.with_status_ = from._impl_.with_status_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void QueryGroupMembersRequest::CopyFrom(const QueryGroupMembersRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.QueryGroupMembersRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool QueryGroupMembersRequest::IsInitialized() const {
  return true;
}

void QueryGroupMembersRequest::InternalSwap(QueryGroupMembersRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.member_ids_.InternalSwap(&other->_impl_.member_ids_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.with_status_)
      + sizeof(QueryGroupMembersRequest::_impl_.with_status_)
      - PROTOBUF_FIELD_OFFSET(QueryGroupMembersRequest, _impl_.group_id_)>(
          reinterpret_cast<char*>(&_impl_.group_id_),
          reinterpret_cast<char*>(&other->_impl_.group_id_));
}

std::string QueryGroupMembersRequest::GetTypeName() const {
  return "turms.client.model.proto.QueryGroupMembersRequest";
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
