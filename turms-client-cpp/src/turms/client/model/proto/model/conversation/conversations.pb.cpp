// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/conversation/conversations.proto
// Protobuf C++ Version: 5.26.1

#include "turms/client/model/proto/model/conversation/conversations.pb.h"

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

inline constexpr Conversations::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : private_conversations_{},
      group_conversations_{},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR Conversations::Conversations(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {
}
struct ConversationsDefaultTypeInternal {
    PROTOBUF_CONSTEXPR ConversationsDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~ConversationsDefaultTypeInternal() {
    }
    union {
        Conversations _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    ConversationsDefaultTypeInternal _Conversations_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class Conversations::_Internal {
   public:
};

void Conversations::clear_private_conversations() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.private_conversations_.Clear();
}
void Conversations::clear_group_conversations() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.group_conversations_.Clear();
}
Conversations::Conversations(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.Conversations)
}
inline PROTOBUF_NDEBUG_INLINE Conversations::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from)
    : private_conversations_{visibility, arena, from.private_conversations_},
      group_conversations_{visibility, arena, from.group_conversations_},
      _cached_size_{0} {
}

Conversations::Conversations(::google::protobuf::Arena* arena, const Conversations& from)
    : ::google::protobuf::MessageLite(arena) {
    Conversations* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.Conversations)
}
inline PROTOBUF_NDEBUG_INLINE Conversations::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : private_conversations_{visibility, arena},
      group_conversations_{visibility, arena},
      _cached_size_{0} {
}

inline void Conversations::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
}
Conversations::~Conversations() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.Conversations)
    _internal_metadata_.Delete<std::string>();
    SharedDtor();
}
inline void Conversations::SharedDtor() {
    ABSL_DCHECK(GetArena() == nullptr);
    _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData* Conversations::GetClassData() const {
    struct ClassData_ {
        ::google::protobuf::MessageLite::ClassData header;
        char type_name[39];
    };

    PROTOBUF_CONSTINIT static const ClassData_ _data_ = {
        {
            nullptr,  // OnDemandRegisterArenaDtor
            PROTOBUF_FIELD_OFFSET(Conversations, _impl_._cached_size_),
            true,
        },
        "turms.client.model.proto.Conversations",
    };

    return &_data_.header;
}
PROTOBUF_NOINLINE void Conversations::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.Conversations)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.private_conversations_.Clear();
    _impl_.group_conversations_.Clear();
    _internal_metadata_.Clear<std::string>();
}

const char* Conversations::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
    ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
    return ptr;
}

PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<1, 2, 2, 0, 2>
    Conversations::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            2,
            8,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294967292,  // skipmap
            offsetof(decltype(_table_), field_entries),
            2,  // num_field_entries
            2,  // num_aux_entries
            offsetof(decltype(_table_), aux_entries),
            &_Conversations_default_instance_._instance,
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::Conversations>(),  // to_prefetch
#endif                                                            // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            // repeated .turms.client.model.proto.GroupConversation group_conversations = 2;
            {::_pbi::TcParser::FastMtR1,
             {18, 63, 1, PROTOBUF_FIELD_OFFSET(Conversations, _impl_.group_conversations_)}},
            // repeated .turms.client.model.proto.PrivateConversation private_conversations = 1;
            {::_pbi::TcParser::FastMtR1,
             {10, 63, 0, PROTOBUF_FIELD_OFFSET(Conversations, _impl_.private_conversations_)}},
        }},
        {{65535, 65535}},
        {{
            // repeated .turms.client.model.proto.PrivateConversation private_conversations = 1;
            {PROTOBUF_FIELD_OFFSET(Conversations, _impl_.private_conversations_),
             0,
             0,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
            // repeated .turms.client.model.proto.GroupConversation group_conversations = 2;
            {PROTOBUF_FIELD_OFFSET(Conversations, _impl_.group_conversations_),
             0,
             1,
             (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
        }},
        {{
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::PrivateConversation>()},
            {::_pbi::TcParser::GetTable<::turms::client::model::proto::GroupConversation>()},
        }},
        {{}},
};

::uint8_t* Conversations::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.Conversations)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .turms.client.model.proto.PrivateConversation private_conversations = 1;
    for (unsigned i = 0, n = static_cast<unsigned>(this->_internal_private_conversations_size());
         i < n;
         i++) {
        const auto& repfield = this->_internal_private_conversations().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1, repfield, repfield.GetCachedSize(), target, stream);
    }

    // repeated .turms.client.model.proto.GroupConversation group_conversations = 2;
    for (unsigned i = 0, n = static_cast<unsigned>(this->_internal_group_conversations_size());
         i < n;
         i++) {
        const auto& repfield = this->_internal_group_conversations().Get(i);
        target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            2, repfield, repfield.GetCachedSize(), target, stream);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.Conversations)
    return target;
}

::size_t Conversations::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.Conversations)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    // repeated .turms.client.model.proto.PrivateConversation private_conversations = 1;
    total_size += 1UL * this->_internal_private_conversations_size();
    for (const auto& msg : this->_internal_private_conversations()) {
        total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
    }
    // repeated .turms.client.model.proto.GroupConversation group_conversations = 2;
    total_size += 1UL * this->_internal_group_conversations_size();
    for (const auto& msg : this->_internal_group_conversations()) {
        total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
    }
    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        total_size += _internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void Conversations::CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) {
    MergeFrom(*::_pbi::DownCast<const Conversations*>(&from));
}

void Conversations::MergeFrom(const Conversations& from) {
    Conversations* const _this = this;
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.Conversations)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    _this->_internal_mutable_private_conversations()->MergeFrom(
        from._internal_private_conversations());
    _this->_internal_mutable_group_conversations()->MergeFrom(from._internal_group_conversations());
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Conversations::CopyFrom(const Conversations& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.Conversations)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

PROTOBUF_NOINLINE bool Conversations::IsInitialized() const {
    return true;
}

void Conversations::InternalSwap(Conversations* PROTOBUF_RESTRICT other) {
    using std::swap;
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    _impl_.private_conversations_.InternalSwap(&other->_impl_.private_conversations_);
    _impl_.group_conversations_.InternalSwap(&other->_impl_.group_conversations_);
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