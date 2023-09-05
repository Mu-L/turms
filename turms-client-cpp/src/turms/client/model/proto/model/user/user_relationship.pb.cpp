// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_relationship.proto

#include "turms/client/model/proto/model/user/user_relationship.pb.h"

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
PROTOBUF_CONSTEXPR UserRelationship::UserRelationship(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.owner_id_)*/ ::int64_t{0},
      /*decltype(_impl_.related_user_id_)*/ ::int64_t{0},
      /*decltype(_impl_.block_date_)*/ ::int64_t{0},
      /*decltype(_impl_.group_index_)*/ ::int64_t{0},
      /*decltype(_impl_.establishment_date_)*/ ::int64_t{0},
    } {}
struct UserRelationshipDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserRelationshipDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserRelationshipDefaultTypeInternal() {}
  union {
    UserRelationship _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserRelationshipDefaultTypeInternal _UserRelationship_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class UserRelationship::_Internal {
 public:
  using HasBits = decltype(std::declval<UserRelationship>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_._has_bits_);
  static void set_has_owner_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_related_user_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_block_date(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_group_index(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_establishment_date(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

UserRelationship::UserRelationship(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UserRelationship)
}
UserRelationship::UserRelationship(const UserRelationship& from)
    : ::google::protobuf::MessageLite(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UserRelationship)
}
inline void UserRelationship::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.owner_id_){::int64_t{0}},
      decltype(_impl_.related_user_id_){::int64_t{0}},
      decltype(_impl_.block_date_){::int64_t{0}},
      decltype(_impl_.group_index_){::int64_t{0}},
      decltype(_impl_.establishment_date_){::int64_t{0}},
  };
}
UserRelationship::~UserRelationship() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.UserRelationship)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void UserRelationship::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void UserRelationship::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void UserRelationship::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UserRelationship)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.owner_id_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.establishment_date_) -
        reinterpret_cast<char*>(&_impl_.owner_id_)) + sizeof(_impl_.establishment_date_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* UserRelationship::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 0, 0, 2> UserRelationship::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_._has_bits_),
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_UserRelationship_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // optional int64 owner_id = 1;
    {::_pbi::TcParser::FastV64S1,
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.owner_id_)}},
    // optional int64 related_user_id = 2;
    {::_pbi::TcParser::FastV64S1,
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.related_user_id_)}},
    // optional int64 block_date = 3;
    {::_pbi::TcParser::FastV64S1,
     {24, 2, 0, PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.block_date_)}},
    // optional int64 group_index = 4;
    {::_pbi::TcParser::FastV64S1,
     {32, 3, 0, PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.group_index_)}},
    // optional int64 establishment_date = 5;
    {::_pbi::TcParser::FastV64S1,
     {40, 4, 0, PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.establishment_date_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // optional int64 owner_id = 1;
    {PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.owner_id_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 related_user_id = 2;
    {PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.related_user_id_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 block_date = 3;
    {PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.block_date_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 group_index = 4;
    {PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.group_index_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional int64 establishment_date = 5;
    {PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.establishment_date_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* UserRelationship::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UserRelationship)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 owner_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<1>(
            stream, this->_internal_owner_id(), target);
  }

  // optional int64 related_user_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_related_user_id(), target);
  }

  // optional int64 block_date = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<3>(
            stream, this->_internal_block_date(), target);
  }

  // optional int64 group_index = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<4>(
            stream, this->_internal_group_index(), target);
  }

  // optional int64 establishment_date = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<5>(
            stream, this->_internal_establishment_date(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UserRelationship)
  return target;
}

::size_t UserRelationship::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UserRelationship)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional int64 owner_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_owner_id());
    }

    // optional int64 related_user_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_related_user_id());
    }

    // optional int64 block_date = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_block_date());
    }

    // optional int64 group_index = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_group_index());
    }

    // optional int64 establishment_date = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_establishment_date());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserRelationship::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const UserRelationship*>(
      &from));
}

void UserRelationship::MergeFrom(const UserRelationship& from) {
  UserRelationship* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UserRelationship)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.owner_id_ = from._impl_.owner_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.related_user_id_ = from._impl_.related_user_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.block_date_ = from._impl_.block_date_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.group_index_ = from._impl_.group_index_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.establishment_date_ = from._impl_.establishment_date_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UserRelationship::CopyFrom(const UserRelationship& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UserRelationship)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool UserRelationship::IsInitialized() const {
  return true;
}

void UserRelationship::InternalSwap(UserRelationship* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.establishment_date_)
      + sizeof(UserRelationship::_impl_.establishment_date_)
      - PROTOBUF_FIELD_OFFSET(UserRelationship, _impl_.owner_id_)>(
          reinterpret_cast<char*>(&_impl_.owner_id_),
          reinterpret_cast<char*>(&other->_impl_.owner_id_));
}

std::string UserRelationship::GetTypeName() const {
  return "turms.client.model.proto.UserRelationship";
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
