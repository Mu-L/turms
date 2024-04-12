// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/message/update_message_request.proto
// Protobuf C++ Version: 5.26.1

#include "turms/client/model/proto/request/message/update_message_request.pb.h"

#include <algorithm>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/wire_format_lite.h"
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

inline constexpr UpdateMessageRequest::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : _cached_size_{0},
      records_{},
      text_(&::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
      message_id_{::int64_t{0}},
      recall_date_{::int64_t{0}} {
}

template <typename>
PROTOBUF_CONSTEXPR UpdateMessageRequest::UpdateMessageRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {
}
struct UpdateMessageRequestDefaultTypeInternal {
    PROTOBUF_CONSTEXPR UpdateMessageRequestDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~UpdateMessageRequestDefaultTypeInternal() {
    }
    union {
        UpdateMessageRequest _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    UpdateMessageRequestDefaultTypeInternal _UpdateMessageRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class UpdateMessageRequest::_Internal {
   public:
    using HasBits = decltype(std::declval<UpdateMessageRequest>()._impl_._has_bits_);
    static constexpr ::int32_t kHasBitsOffset =
        8 * PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_._has_bits_);
};

UpdateMessageRequest::UpdateMessageRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UpdateMessageRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateMessageRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from)
    : _has_bits_{from._has_bits_},
      _cached_size_{0},
      records_{visibility, arena, from.records_},
      text_(arena, from.text_) {
}

UpdateMessageRequest::UpdateMessageRequest(::google::protobuf::Arena* arena,
                                           const UpdateMessageRequest& from)
    : ::google::protobuf::MessageLite(arena) {
    UpdateMessageRequest* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
    ::memcpy(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, message_id_),
        reinterpret_cast<const char*>(&from._impl_) + offsetof(Impl_, message_id_),
        offsetof(Impl_, recall_date_) - offsetof(Impl_, message_id_) + sizeof(Impl_::recall_date_));

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UpdateMessageRequest)
}
inline PROTOBUF_NDEBUG_INLINE UpdateMessageRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : _cached_size_{0},
      records_{visibility, arena},
      text_(arena) {
}

inline void UpdateMessageRequest::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    ::memset(
        reinterpret_cast<char*>(&_impl_) + offsetof(Impl_, message_id_),
        0,
        offsetof(Impl_, recall_date_) - offsetof(Impl_, message_id_) + sizeof(Impl_::recall_date_));
}
UpdateMessageRequest::~UpdateMessageRequest() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.UpdateMessageRequest)
    _internal_metadata_.Delete<std::string>();
    SharedDtor();
}
inline void UpdateMessageRequest::SharedDtor() {
    ABSL_DCHECK(GetArena() == nullptr);
    _impl_.text_.Destroy();
    _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData* UpdateMessageRequest::GetClassData() const {
    struct ClassData_ {
        ::google::protobuf::MessageLite::ClassData header;
        char type_name[46];
    };

    PROTOBUF_CONSTINIT static const ClassData_ _data_ = {
        {
            nullptr,  // OnDemandRegisterArenaDtor
            PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_._cached_size_),
            true,
        },
        "turms.client.model.proto.UpdateMessageRequest",
    };

    return &_data_.header;
}
PROTOBUF_NOINLINE void UpdateMessageRequest::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UpdateMessageRequest)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.records_.Clear();
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        _impl_.text_.ClearNonDefaultToEmpty();
    }
    _impl_.message_id_ = ::int64_t{0};
    _impl_.recall_date_ = ::int64_t{0};
    _impl_._has_bits_.Clear();
    _internal_metadata_.Clear<std::string>();
}

const char* UpdateMessageRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
    ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
    return ptr;
}

PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<2, 4, 0, 58, 2>
    UpdateMessageRequest::_table_ = {
        {
            PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_._has_bits_),
            0,  // no _extensions_
            4,
            24,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294967280,  // skipmap
            offsetof(decltype(_table_), field_entries),
            4,                                         // num_field_entries
            0,                                         // num_aux_entries
            offsetof(decltype(_table_), field_names),  // no aux_entries
            &_UpdateMessageRequest_default_instance_._instance,
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::UpdateMessageRequest>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            // optional int64 recall_date = 4;
            {::_pbi::TcParser::FastV64S1,
             {32, 1, 0, PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.recall_date_)}},
            // int64 message_id = 1;
            {::_pbi::TcParser::FastV64S1,
             {8, 63, 0, PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.message_id_)}},
            // optional string text = 2;
            {::_pbi::TcParser::FastUS1,
             {18, 0, 0, PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.text_)}},
            // repeated bytes records = 3;
            {::_pbi::TcParser::FastBR1,
             {26, 63, 0, PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.records_)}},
        }},
        {{65535, 65535}},
        {{
            // int64 message_id = 1;
            {PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.message_id_),
             -1,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt64)},
            // optional string text = 2;
            {PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.text_),
             _Internal::kHasBitsOffset + 0,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kUtf8String | ::_fl::kRepAString)},
            // repeated bytes records = 3;
            {PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.records_),
             -1,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kBytes | ::_fl::kRepSString)},
            // optional int64 recall_date = 4;
            {PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.recall_date_),
             _Internal::kHasBitsOffset + 1,
             0,
             (0 | ::_fl::kFcOptional | ::_fl::kInt64)},
        }},
        // no aux_entries
        {{"\55\0\4\0\0\0\0\0"
          "turms.client.model.proto.UpdateMessageRequest"
          "text"}},
};

::uint8_t* UpdateMessageRequest::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UpdateMessageRequest)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // int64 message_id = 1;
    if (this->_internal_message_id() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>(
            stream, this->_internal_message_id(), target);
    }

    cached_has_bits = _impl_._has_bits_[0];
    // optional string text = 2;
    if (cached_has_bits & 0x00000001u) {
        const std::string& _s = this->_internal_text();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.UpdateMessageRequest.text");
        target = stream->WriteStringMaybeAliased(2, _s, target);
    }

    // repeated bytes records = 3;
    for (int i = 0, n = this->_internal_records_size(); i < n; ++i) {
        const auto& s = this->_internal_records().Get(i);
        target = stream->WriteBytes(3, s, target);
    }

    // optional int64 recall_date = 4;
    if (cached_has_bits & 0x00000002u) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>(
            stream, this->_internal_recall_date(), target);
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        target = stream->WriteRaw(
            _internal_metadata_
                .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                .data(),
            static_cast<int>(
                _internal_metadata_
                    .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                    .size()),
            target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UpdateMessageRequest)
    return target;
}

::size_t UpdateMessageRequest::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UpdateMessageRequest)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    // repeated bytes records = 3;
    total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_records().size());
    for (int i = 0, n = _internal_records().size(); i < n; ++i) {
        total_size +=
            ::google::protobuf::internal::WireFormatLite::BytesSize(_internal_records().Get(i));
    }
    // optional string text = 2;
    cached_has_bits = _impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        total_size +=
            1 + ::google::protobuf::internal::WireFormatLite::StringSize(this->_internal_text());
    }

    // int64 message_id = 1;
    if (this->_internal_message_id() != 0) {
        total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_message_id());
    }

    // optional int64 recall_date = 4;
    if (cached_has_bits & 0x00000002u) {
        total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_recall_date());
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        total_size += _internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void UpdateMessageRequest::CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) {
    MergeFrom(*::_pbi::DownCast<const UpdateMessageRequest*>(&from));
}

void UpdateMessageRequest::MergeFrom(const UpdateMessageRequest& from) {
    UpdateMessageRequest* const _this = this;
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UpdateMessageRequest)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_records()->MergeFrom(from._internal_records());
    cached_has_bits = from._impl_._has_bits_[0];
    if (cached_has_bits & 0x00000001u) {
        _this->_internal_set_text(from._internal_text());
    }
    if (from._internal_message_id() != 0) {
        _this->_impl_.message_id_ = from._impl_.message_id_;
    }
    if (cached_has_bits & 0x00000002u) {
        _this->_impl_.recall_date_ = from._impl_.recall_date_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UpdateMessageRequest::CopyFrom(const UpdateMessageRequest& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UpdateMessageRequest)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

PROTOBUF_NOINLINE bool UpdateMessageRequest::IsInitialized() const {
    return true;
}

void UpdateMessageRequest::InternalSwap(UpdateMessageRequest* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
    _impl_.records_.InternalSwap(&other->_impl_.records_);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, &other->_impl_.text_, arena);
    ::google::protobuf::internal::memswap<
        PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.recall_date_) +
        sizeof(UpdateMessageRequest::_impl_.recall_date_) -
        PROTOBUF_FIELD_OFFSET(UpdateMessageRequest, _impl_.message_id_)>(
        reinterpret_cast<char*>(&_impl_.message_id_),
        reinterpret_cast<char*>(&other->_impl_.message_id_));
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"