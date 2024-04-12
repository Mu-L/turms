// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_infos_with_version.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION != 5026001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "turms/client/model/proto/model/user/user_info.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserInfosWithVersion;
struct UserInfosWithVersionDefaultTypeInternal;
extern UserInfosWithVersionDefaultTypeInternal _UserInfosWithVersion_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================

// -------------------------------------------------------------------

class UserInfosWithVersion final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserInfosWithVersion) */ {
   public:
    inline UserInfosWithVersion()
        : UserInfosWithVersion(nullptr) {
    }
    ~UserInfosWithVersion() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR UserInfosWithVersion(
        ::google::protobuf::internal::ConstantInitialized);

    inline UserInfosWithVersion(const UserInfosWithVersion& from)
        : UserInfosWithVersion(nullptr, from) {
    }
    inline UserInfosWithVersion(UserInfosWithVersion&& from) noexcept
        : UserInfosWithVersion(nullptr, std::move(from)) {
    }
    inline UserInfosWithVersion& operator=(const UserInfosWithVersion& from) {
        CopyFrom(from);
        return *this;
    }
    inline UserInfosWithVersion& operator=(UserInfosWithVersion&& from) noexcept {
        if (this == &from)
            return *this;
        if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
            && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
        ) {
            InternalSwap(&from);
        } else {
            CopyFrom(from);
        }
        return *this;
    }

    inline const std::string& unknown_fields() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.unknown_fields<std::string>(
            ::google::protobuf::internal::GetEmptyString);
    }
    inline std::string* mutable_unknown_fields() ABSL_ATTRIBUTE_LIFETIME_BOUND {
        return _internal_metadata_.mutable_unknown_fields<std::string>();
    }

    static const UserInfosWithVersion& default_instance() {
        return *internal_default_instance();
    }
    static inline const UserInfosWithVersion* internal_default_instance() {
        return reinterpret_cast<const UserInfosWithVersion*>(
            &_UserInfosWithVersion_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(UserInfosWithVersion& a, UserInfosWithVersion& b) {
        a.Swap(&b);
    }
    inline void Swap(UserInfosWithVersion* other) {
        if (other == this)
            return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
        if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
            InternalSwap(other);
        } else {
            ::google::protobuf::internal::GenericSwap(this, other);
        }
    }
    void UnsafeArenaSwap(UserInfosWithVersion* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    UserInfosWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<UserInfosWithVersion>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const UserInfosWithVersion& from);
    void MergeFrom(const UserInfosWithVersion& from);
    ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
    bool IsInitialized() const final;

    ::size_t ByteSizeLong() const final;
    const char* _InternalParse(const char* ptr,
                               ::google::protobuf::internal::ParseContext* ctx) final;
    ::uint8_t* _InternalSerialize(::uint8_t* target,
                                  ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
    int GetCachedSize() const {
        return _impl_._cached_size_.Get();
    }

   private:
    void SharedCtor(::google::protobuf::Arena* arena);
    void SharedDtor();
    void InternalSwap(UserInfosWithVersion* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.UserInfosWithVersion";
    }

   protected:
    explicit UserInfosWithVersion(::google::protobuf::Arena* arena);
    UserInfosWithVersion(::google::protobuf::Arena* arena, const UserInfosWithVersion& from);
    UserInfosWithVersion(::google::protobuf::Arena* arena, UserInfosWithVersion&& from) noexcept
        : UserInfosWithVersion(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserInfosFieldNumber = 1,
        kLastUpdatedDateFieldNumber = 2,
    };
    // repeated .turms.client.model.proto.UserInfo user_infos = 1;
    int user_infos_size() const;

   private:
    int _internal_user_infos_size() const;

   public:
    void clear_user_infos();
    ::turms::client::model::proto::UserInfo* mutable_user_infos(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>*
    mutable_user_infos();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>&
    _internal_user_infos() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>*
    _internal_mutable_user_infos();

   public:
    const ::turms::client::model::proto::UserInfo& user_infos(int index) const;
    ::turms::client::model::proto::UserInfo* add_user_infos();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>&
    user_infos() const;
    // optional int64 last_updated_date = 2;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserInfosWithVersion)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<1, 2, 1, 0, 2> _table_;
    friend class ::google::protobuf::MessageLite;
    friend class ::google::protobuf::Arena;
    template <typename T>
    friend class ::google::protobuf::Arena::InternalHelper;
    using InternalArenaConstructable_ = void;
    using DestructorSkippable_ = void;
    struct Impl_ {
        inline explicit constexpr Impl_(::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena,
                              const Impl_& from);
        ::google::protobuf::internal::HasBits<1> _has_bits_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo> user_infos_;
        ::int64_t last_updated_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserInfosWithVersion

// repeated .turms.client.model.proto.UserInfo user_infos = 1;
inline int UserInfosWithVersion::_internal_user_infos_size() const {
    return _internal_user_infos().size();
}
inline int UserInfosWithVersion::user_infos_size() const {
    return _internal_user_infos_size();
}
inline ::turms::client::model::proto::UserInfo* UserInfosWithVersion::mutable_user_infos(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserInfosWithVersion.user_infos)
    return _internal_mutable_user_infos()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>*
UserInfosWithVersion::mutable_user_infos() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserInfosWithVersion.user_infos)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    return _internal_mutable_user_infos();
}
inline const ::turms::client::model::proto::UserInfo& UserInfosWithVersion::user_infos(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserInfosWithVersion.user_infos)
    return _internal_user_infos().Get(index);
}
inline ::turms::client::model::proto::UserInfo* UserInfosWithVersion::add_user_infos()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::turms::client::model::proto::UserInfo* _add = _internal_mutable_user_infos()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserInfosWithVersion.user_infos)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>&
UserInfosWithVersion::user_infos() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserInfosWithVersion.user_infos)
    return _internal_user_infos();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>&
UserInfosWithVersion::_internal_user_infos() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.user_infos_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserInfo>*
UserInfosWithVersion::_internal_mutable_user_infos() {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return &_impl_.user_infos_;
}

// optional int64 last_updated_date = 2;
inline bool UserInfosWithVersion::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void UserInfosWithVersion::clear_last_updated_date() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t UserInfosWithVersion::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserInfosWithVersion.last_updated_date)
    return _internal_last_updated_date();
}
inline void UserInfosWithVersion::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserInfosWithVersion.last_updated_date)
}
inline ::int64_t UserInfosWithVersion::_internal_last_updated_date() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.last_updated_date_;
}
inline void UserInfosWithVersion::_internal_set_last_updated_date(::int64_t value) {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.last_updated_date_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5finfos_5fwith_5fversion_2eproto_2epb_2eh