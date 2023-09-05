// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/storage/delete_resource_request.proto

#include "turms/client/model/proto/request/storage/delete_resource_request.pb.h"

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
PROTOBUF_CONSTEXPR DeleteResourceRequest_ExtraEntry_DoNotUse::DeleteResourceRequest_ExtraEntry_DoNotUse(::_pbi::ConstantInitialized) {}
struct DeleteResourceRequest_ExtraEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeleteResourceRequest_ExtraEntry_DoNotUseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeleteResourceRequest_ExtraEntry_DoNotUseDefaultTypeInternal() {}
  union {
    DeleteResourceRequest_ExtraEntry_DoNotUse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeleteResourceRequest_ExtraEntry_DoNotUseDefaultTypeInternal _DeleteResourceRequest_ExtraEntry_DoNotUse_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR DeleteResourceRequest::DeleteResourceRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /* decltype(_impl_.extra_) */ {},
      /*decltype(_impl_.id_str_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.id_num_)*/ ::int64_t{0},
      /*decltype(_impl_.type_)*/ 0,
    } {}
struct DeleteResourceRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeleteResourceRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeleteResourceRequestDefaultTypeInternal() {}
  union {
    DeleteResourceRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeleteResourceRequestDefaultTypeInternal _DeleteResourceRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

DeleteResourceRequest_ExtraEntry_DoNotUse::DeleteResourceRequest_ExtraEntry_DoNotUse() {}
DeleteResourceRequest_ExtraEntry_DoNotUse::DeleteResourceRequest_ExtraEntry_DoNotUse(::google::protobuf::Arena* arena)
    : SuperType(arena) {}
void DeleteResourceRequest_ExtraEntry_DoNotUse::MergeFrom(const DeleteResourceRequest_ExtraEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
// ===================================================================

class DeleteResourceRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<DeleteResourceRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_._has_bits_);
  static void set_has_id_num(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_id_str(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

DeleteResourceRequest::DeleteResourceRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.DeleteResourceRequest)
}
DeleteResourceRequest::DeleteResourceRequest(const DeleteResourceRequest& from) : ::google::protobuf::MessageLite() {
  DeleteResourceRequest* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      /* decltype(_impl_.extra_) */ {},
      decltype(_impl_.id_str_){},
      decltype(_impl_.id_num_){},
      decltype(_impl_.type_){},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _this->_impl_.extra_.MergeFrom(from._impl_.extra_);
  _impl_.id_str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_str_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.id_str_.Set(from._internal_id_str(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.id_num_, &from._impl_.id_num_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.type_) -
    reinterpret_cast<char*>(&_impl_.id_num_)) + sizeof(_impl_.type_));

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.DeleteResourceRequest)
}
inline void DeleteResourceRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      /* decltype(_impl_.extra_) */ {::google::protobuf::internal::ArenaInitialized(), arena},
      decltype(_impl_.id_str_){},
      decltype(_impl_.id_num_){::int64_t{0}},
      decltype(_impl_.type_){0},
  };
  _impl_.id_str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_str_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
DeleteResourceRequest::~DeleteResourceRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.DeleteResourceRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void DeleteResourceRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.extra_.~MapFieldLite();
  _impl_.id_str_.Destroy();
}
void DeleteResourceRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void DeleteResourceRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.DeleteResourceRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.extra_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.id_str_.ClearNonDefaultToEmpty();
  }
  _impl_.id_num_ = ::int64_t{0};
  _impl_.type_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* DeleteResourceRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 1, 66, 2> DeleteResourceRequest::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967280,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_DeleteResourceRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // .turms.client.model.proto.StorageResourceType type = 1;
    {::_pbi::TcParser::FastV32S1,
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.type_)}},
    // optional int64 id_num = 2;
    {::_pbi::TcParser::FastV64S1,
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.id_num_)}},
    // optional string id_str = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.id_str_)}},
  }}, {{
    65535, 65535
  }}, {{
    // .turms.client.model.proto.StorageResourceType type = 1;
    {PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.type_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // optional int64 id_num = 2;
    {PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.id_num_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
    // optional string id_str = 3;
    {PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.id_str_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // map<string, string> extra = 4;
    {PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.extra_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMap)},
  }}, {{
    {::_pbi::TcParser::GetMapAuxInfo<decltype(DeleteResourceRequest()._impl_.extra_)>(1, 0, 0)},
  }}, {{
    "\56\0\0\6\5\0\0\0"
    "turms.client.model.proto.DeleteResourceRequest"
    "id_str"
    "extra"
  }},
};

::uint8_t* DeleteResourceRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.DeleteResourceRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // .turms.client.model.proto.StorageResourceType type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_type(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 id_num = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt64ToArrayWithField<2>(
            stream, this->_internal_id_num(), target);
  }

  // optional string id_str = 3;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_id_str();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.DeleteResourceRequest.id_str");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // map<string, string> extra = 4;
  if (!_internal_extra().empty()) {
    using MapType = ::google::protobuf::Map<std::string, std::string>;
    using WireHelper = DeleteResourceRequest_ExtraEntry_DoNotUse::Funcs;
    const auto& field = _internal_extra();

    if (stream->IsSerializationDeterministic() && field.size() > 1) {
      for (const auto& entry : ::google::protobuf::internal::MapSorterPtr<MapType>(field)) {
        target = WireHelper::InternalSerialize(
            4, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.first.data(), static_cast<int>(entry.first.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.DeleteResourceRequest.extra");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.second.data(), static_cast<int>(entry.second.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.DeleteResourceRequest.extra");
      }
    } else {
      for (const auto& entry : field) {
        target = WireHelper::InternalSerialize(
            4, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.first.data(), static_cast<int>(entry.first.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.DeleteResourceRequest.extra");
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.second.data(), static_cast<int>(entry.second.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.DeleteResourceRequest.extra");
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.DeleteResourceRequest)
  return target;
}

::size_t DeleteResourceRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.DeleteResourceRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> extra = 4;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_extra_size());
  for (const auto& entry : _internal_extra()) {
    total_size += DeleteResourceRequest_ExtraEntry_DoNotUse::Funcs::ByteSizeLong(entry.first, entry.second);
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string id_str = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_id_str());
    }

    // optional int64 id_num = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_id_num());
    }

  }
  // .turms.client.model.proto.StorageResourceType type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DeleteResourceRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const DeleteResourceRequest*>(
      &from));
}

void DeleteResourceRequest::MergeFrom(const DeleteResourceRequest& from) {
  DeleteResourceRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.DeleteResourceRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.extra_.MergeFrom(from._impl_.extra_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_id_str(from._internal_id_str());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.id_num_ = from._impl_.id_num_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void DeleteResourceRequest::CopyFrom(const DeleteResourceRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.DeleteResourceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool DeleteResourceRequest::IsInitialized() const {
  return true;
}

void DeleteResourceRequest::InternalSwap(DeleteResourceRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.extra_.InternalSwap(&other->_impl_.extra_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_str_, lhs_arena,
                                       &other->_impl_.id_str_, rhs_arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.type_)
      + sizeof(DeleteResourceRequest::_impl_.type_)
      - PROTOBUF_FIELD_OFFSET(DeleteResourceRequest, _impl_.id_num_)>(
          reinterpret_cast<char*>(&_impl_.id_num_),
          reinterpret_cast<char*>(&other->_impl_.id_num_));
}

std::string DeleteResourceRequest::GetTypeName() const {
  return "turms.client.model.proto.DeleteResourceRequest";
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
