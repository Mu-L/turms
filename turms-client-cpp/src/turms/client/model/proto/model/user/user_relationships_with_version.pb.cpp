// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_relationships_with_version.proto

#include "turms/client/model/proto/model/user/user_relationships_with_version.pb.h"

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
PROTOBUF_CONSTEXPR UserRelationshipsWithVersion::UserRelationshipsWithVersion(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.user_relationships_)*/ {},
      /*decltype(_impl_.last_updated_date_)*/ ::int64_t{0},
    } {}
struct UserRelationshipsWithVersionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserRelationshipsWithVersionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserRelationshipsWithVersionDefaultTypeInternal() {}
  union {
    UserRelationshipsWithVersion _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserRelationshipsWithVersionDefaultTypeInternal _UserRelationshipsWithVersion_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class UserRelationshipsWithVersion::_Internal {
 public:
  using HasBits = decltype(std::declval<UserRelationshipsWithVersion>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_._has_bits_);
  static void set_has_last_updated_date(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

void UserRelationshipsWithVersion::clear_user_relationships() {
  _internal_mutable_user_relationships()->Clear();
}
UserRelationshipsWithVersion::UserRelationshipsWithVersion(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UserRelationshipsWithVersion)
}
UserRelationshipsWithVersion::UserRelationshipsWithVersion(const UserRelationshipsWithVersion& from) : ::google::protobuf::MessageLite() {
  UserRelationshipsWithVersion* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.user_relationships_){from._impl_.user_relationships_},
      decltype(_impl_.last_updated_date_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _this->_impl_.last_updated_date_ = from._impl_.last_updated_date_;

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UserRelationshipsWithVersion)
}
inline void UserRelationshipsWithVersion::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.user_relationships_){arena},
      decltype(_impl_.last_updated_date_){::int64_t{0}},
  };
}
UserRelationshipsWithVersion::~UserRelationshipsWithVersion() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.UserRelationshipsWithVersion)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void UserRelationshipsWithVersion::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.user_relationships_.~RepeatedPtrField();
}
void UserRelationshipsWithVersion::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void UserRelationshipsWithVersion::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UserRelationshipsWithVersion)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_user_relationships()->Clear();
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* UserRelationshipsWithVersion::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> UserRelationshipsWithVersion::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_UserRelationshipsWithVersion_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    // optional int64 last_updated_date = 2;
    {::_pbi::TcParser::FastV64S1,
     {16, 0, 0, PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_.last_updated_date_)}},
    // repeated .turms.client.model.proto.UserRelationship user_relationships = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_.user_relationships_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .turms.client.model.proto.UserRelationship user_relationships = 1;
    {PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_.user_relationships_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional int64 last_updated_date = 2;
    {PROTOBUF_FIELD_OFFSET(UserRelationshipsWithVersion, _impl_.last_updated_date_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
  }}, {{
    {::_pbi::TcParser::GetTable<::turms::client::model::proto::UserRelationship>()},
  }}, {{
  }},
};

::uint8_t* UserRelationshipsWithVersion::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UserRelationshipsWithVersion)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .turms.client.model.proto.UserRelationship user_relationships = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_user_relationships_size()); i < n; i++) {
    const auto& repfield = this->_internal_user_relationships().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 last_updated_date = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_last_updated_date(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UserRelationshipsWithVersion)
  return target;
}

::size_t UserRelationshipsWithVersion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UserRelationshipsWithVersion)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .turms.client.model.proto.UserRelationship user_relationships = 1;
  total_size += 1UL * this->_internal_user_relationships_size();
  for (const auto& msg : this->_internal_user_relationships()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // optional int64 last_updated_date = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_last_updated_date());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserRelationshipsWithVersion::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const UserRelationshipsWithVersion*>(
      &from));
}

void UserRelationshipsWithVersion::MergeFrom(const UserRelationshipsWithVersion& from) {
  UserRelationshipsWithVersion* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UserRelationshipsWithVersion)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_user_relationships()->MergeFrom(from._internal_user_relationships());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_last_updated_date(from._internal_last_updated_date());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UserRelationshipsWithVersion::CopyFrom(const UserRelationshipsWithVersion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UserRelationshipsWithVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool UserRelationshipsWithVersion::IsInitialized() const {
  return true;
}

void UserRelationshipsWithVersion::InternalSwap(UserRelationshipsWithVersion* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.user_relationships_.InternalSwap(&other->_impl_.user_relationships_);
        swap(_impl_.last_updated_date_, other->_impl_.last_updated_date_);
}

std::string UserRelationshipsWithVersion::GetTypeName() const {
  return "turms.client.model.proto.UserRelationshipsWithVersion";
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
