// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_relationship_group.proto
// Protobuf C++ Version: 5.26.1

#include "turms/client/model/proto/model/user/user_relationship_group.pb.h"

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

inline constexpr UserRelationshipGroup::Impl_::Impl_(::_pbi::ConstantInitialized) noexcept
    : name_(&::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
      index_{0},
      _cached_size_{0} {
}

template <typename>
PROTOBUF_CONSTEXPR UserRelationshipGroup::UserRelationshipGroup(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {
}
struct UserRelationshipGroupDefaultTypeInternal {
    PROTOBUF_CONSTEXPR UserRelationshipGroupDefaultTypeInternal()
        : _instance(::_pbi::ConstantInitialized{}) {
    }
    ~UserRelationshipGroupDefaultTypeInternal() {
    }
    union {
        UserRelationshipGroup _instance;
    };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
    UserRelationshipGroupDefaultTypeInternal _UserRelationshipGroup_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

class UserRelationshipGroup::_Internal {
   public:
};

UserRelationshipGroup::UserRelationshipGroup(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
    SharedCtor(arena);
    // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.UserRelationshipGroup)
}
inline PROTOBUF_NDEBUG_INLINE UserRelationshipGroup::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena,
    const Impl_& from)
    : name_(arena, from.name_),
      _cached_size_{0} {
}

UserRelationshipGroup::UserRelationshipGroup(::google::protobuf::Arena* arena,
                                             const UserRelationshipGroup& from)
    : ::google::protobuf::MessageLite(arena) {
    UserRelationshipGroup* const _this = this;
    (void)_this;
    _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
    new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
    _impl_.index_ = from._impl_.index_;

    // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.UserRelationshipGroup)
}
inline PROTOBUF_NDEBUG_INLINE UserRelationshipGroup::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena)
    : name_(arena),
      _cached_size_{0} {
}

inline void UserRelationshipGroup::SharedCtor(::_pb::Arena* arena) {
    new (&_impl_) Impl_(internal_visibility(), arena);
    _impl_.index_ = {};
}
UserRelationshipGroup::~UserRelationshipGroup() {
    // @@protoc_insertion_point(destructor:turms.client.model.proto.UserRelationshipGroup)
    _internal_metadata_.Delete<std::string>();
    SharedDtor();
}
inline void UserRelationshipGroup::SharedDtor() {
    ABSL_DCHECK(GetArena() == nullptr);
    _impl_.name_.Destroy();
    _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData* UserRelationshipGroup::GetClassData() const {
    struct ClassData_ {
        ::google::protobuf::MessageLite::ClassData header;
        char type_name[47];
    };

    PROTOBUF_CONSTINIT static const ClassData_ _data_ = {
        {
            nullptr,  // OnDemandRegisterArenaDtor
            PROTOBUF_FIELD_OFFSET(UserRelationshipGroup, _impl_._cached_size_),
            true,
        },
        "turms.client.model.proto.UserRelationshipGroup",
    };

    return &_data_.header;
}
PROTOBUF_NOINLINE void UserRelationshipGroup::Clear() {
    // @@protoc_insertion_point(message_clear_start:turms.client.model.proto.UserRelationshipGroup)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    _impl_.name_.ClearToEmpty();
    _impl_.index_ = 0;
    _internal_metadata_.Clear<std::string>();
}

const char* UserRelationshipGroup::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
    ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
    return ptr;
}

PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 const ::_pbi::TcParseTable<1, 2, 0, 59, 2>
    UserRelationshipGroup::_table_ = {
        {
            0,  // no _has_bits_
            0,  // no _extensions_
            2,
            8,  // max_field_number, fast_idx_mask
            offsetof(decltype(_table_), field_lookup_table),
            4294967292,  // skipmap
            offsetof(decltype(_table_), field_entries),
            2,                                         // num_field_entries
            0,                                         // num_aux_entries
            offsetof(decltype(_table_), field_names),  // no aux_entries
            &_UserRelationshipGroup_default_instance_._instance,
            ::_pbi::TcParser::GenericFallbackLite,  // fallback
#ifdef PROTOBUF_PREFETCH_PARSE_TABLE
            ::_pbi::TcParser::GetTable<
                ::turms::client::model::proto::UserRelationshipGroup>(),  // to_prefetch
#endif  // PROTOBUF_PREFETCH_PARSE_TABLE
        },
        {{
            // string name = 2;
            {::_pbi::TcParser::FastUS1,
             {18, 63, 0, PROTOBUF_FIELD_OFFSET(UserRelationshipGroup, _impl_.name_)}},
            // int32 index = 1;
            {::_pbi::TcParser::FastV32S1,
             {8, 63, 0, PROTOBUF_FIELD_OFFSET(UserRelationshipGroup, _impl_.index_)}},
        }},
        {{65535, 65535}},
        {{
            // int32 index = 1;
            {PROTOBUF_FIELD_OFFSET(UserRelationshipGroup, _impl_.index_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
            // string name = 2;
            {PROTOBUF_FIELD_OFFSET(UserRelationshipGroup, _impl_.name_),
             0,
             0,
             (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
        }},
        // no aux_entries
        {{"\56\0\4\0\0\0\0\0"
          "turms.client.model.proto.UserRelationshipGroup"
          "name"}},
};

::uint8_t* UserRelationshipGroup::_InternalSerialize(
    ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.UserRelationshipGroup)
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    // int32 index = 1;
    if (this->_internal_index() != 0) {
        target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>(
            stream, this->_internal_index(), target);
    }

    // string name = 2;
    if (!this->_internal_name().empty()) {
        const std::string& _s = this->_internal_name();
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            _s.data(),
            static_cast<int>(_s.length()),
            ::google::protobuf::internal::WireFormatLite::SERIALIZE,
            "turms.client.model.proto.UserRelationshipGroup.name");
        target = stream->WriteStringMaybeAliased(2, _s, target);
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
    // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.UserRelationshipGroup)
    return target;
}

::size_t UserRelationshipGroup::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.UserRelationshipGroup)
    ::size_t total_size = 0;

    ::uint32_t cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    // string name = 2;
    if (!this->_internal_name().empty()) {
        total_size +=
            1 + ::google::protobuf::internal::WireFormatLite::StringSize(this->_internal_name());
    }

    // int32 index = 1;
    if (this->_internal_index() != 0) {
        total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_index());
    }

    if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
        total_size += _internal_metadata_
                          .unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString)
                          .size();
    }
    _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
    return total_size;
}

void UserRelationshipGroup::CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) {
    MergeFrom(*::_pbi::DownCast<const UserRelationshipGroup*>(&from));
}

void UserRelationshipGroup::MergeFrom(const UserRelationshipGroup& from) {
    UserRelationshipGroup* const _this = this;
    // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.UserRelationshipGroup)
    ABSL_DCHECK_NE(&from, _this);
    ::uint32_t cached_has_bits = 0;
    (void)cached_has_bits;

    if (!from._internal_name().empty()) {
        _this->_internal_set_name(from._internal_name());
    }
    if (from._internal_index() != 0) {
        _this->_impl_.index_ = from._impl_.index_;
    }
    _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UserRelationshipGroup::CopyFrom(const UserRelationshipGroup& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.UserRelationshipGroup)
    if (&from == this)
        return;
    Clear();
    MergeFrom(from);
}

PROTOBUF_NOINLINE bool UserRelationshipGroup::IsInitialized() const {
    return true;
}

void UserRelationshipGroup::InternalSwap(UserRelationshipGroup* PROTOBUF_RESTRICT other) {
    using std::swap;
    auto* arena = GetArena();
    ABSL_DCHECK_EQ(arena, other->GetArena());
    _internal_metadata_.InternalSwap(&other->_internal_metadata_);
    ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
    swap(_impl_.index_, other->_impl_.index_);
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