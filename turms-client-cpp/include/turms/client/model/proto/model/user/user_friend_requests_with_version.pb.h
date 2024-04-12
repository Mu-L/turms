// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_friend_requests_with_version.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/user/user_friend_request.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserFriendRequestsWithVersion;
struct UserFriendRequestsWithVersionDefaultTypeInternal;
extern UserFriendRequestsWithVersionDefaultTypeInternal
    _UserFriendRequestsWithVersion_default_instance_;
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

class UserFriendRequestsWithVersion final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserFriendRequestsWithVersion)
 */
{
   public:
    inline UserFriendRequestsWithVersion()
        : UserFriendRequestsWithVersion(nullptr) {
    }
    ~UserFriendRequestsWithVersion() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR UserFriendRequestsWithVersion(
        ::google::protobuf::internal::ConstantInitialized);

    inline UserFriendRequestsWithVersion(const UserFriendRequestsWithVersion& from)
        : UserFriendRequestsWithVersion(nullptr, from) {
    }
    inline UserFriendRequestsWithVersion(UserFriendRequestsWithVersion&& from) noexcept
        : UserFriendRequestsWithVersion(nullptr, std::move(from)) {
    }
    inline UserFriendRequestsWithVersion& operator=(const UserFriendRequestsWithVersion& from) {
        CopyFrom(from);
        return *this;
    }
    inline UserFriendRequestsWithVersion& operator=(UserFriendRequestsWithVersion&& from) noexcept {
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

    static const UserFriendRequestsWithVersion& default_instance() {
        return *internal_default_instance();
    }
    static inline const UserFriendRequestsWithVersion* internal_default_instance() {
        return reinterpret_cast<const UserFriendRequestsWithVersion*>(
            &_UserFriendRequestsWithVersion_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(UserFriendRequestsWithVersion& a, UserFriendRequestsWithVersion& b) {
        a.Swap(&b);
    }
    inline void Swap(UserFriendRequestsWithVersion* other) {
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
    void UnsafeArenaSwap(UserFriendRequestsWithVersion* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    UserFriendRequestsWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<UserFriendRequestsWithVersion>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const UserFriendRequestsWithVersion& from);
    void MergeFrom(const UserFriendRequestsWithVersion& from);
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
    void InternalSwap(UserFriendRequestsWithVersion* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.UserFriendRequestsWithVersion";
    }

   protected:
    explicit UserFriendRequestsWithVersion(::google::protobuf::Arena* arena);
    UserFriendRequestsWithVersion(::google::protobuf::Arena* arena,
                                  const UserFriendRequestsWithVersion& from);
    UserFriendRequestsWithVersion(::google::protobuf::Arena* arena,
                                  UserFriendRequestsWithVersion&& from) noexcept
        : UserFriendRequestsWithVersion(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kUserFriendRequestsFieldNumber = 1,
        kLastUpdatedDateFieldNumber = 2,
    };
    // repeated .turms.client.model.proto.UserFriendRequest user_friend_requests = 1;
    int user_friend_requests_size() const;

   private:
    int _internal_user_friend_requests_size() const;

   public:
    void clear_user_friend_requests();
    ::turms::client::model::proto::UserFriendRequest* mutable_user_friend_requests(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>*
    mutable_user_friend_requests();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>&
    _internal_user_friend_requests() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>*
    _internal_mutable_user_friend_requests();

   public:
    const ::turms::client::model::proto::UserFriendRequest& user_friend_requests(int index) const;
    ::turms::client::model::proto::UserFriendRequest* add_user_friend_requests();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>&
    user_friend_requests() const;
    // optional int64 last_updated_date = 2;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserFriendRequestsWithVersion)
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
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>
            user_friend_requests_;
        ::int64_t last_updated_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserFriendRequestsWithVersion

// repeated .turms.client.model.proto.UserFriendRequest user_friend_requests = 1;
inline int UserFriendRequestsWithVersion::_internal_user_friend_requests_size() const {
    return _internal_user_friend_requests().size();
}
inline int UserFriendRequestsWithVersion::user_friend_requests_size() const {
    return _internal_user_friend_requests_size();
}
inline ::turms::client::model::proto::UserFriendRequest*
UserFriendRequestsWithVersion::mutable_user_friend_requests(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserFriendRequestsWithVersion.user_friend_requests)
    return _internal_mutable_user_friend_requests()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>*
UserFriendRequestsWithVersion::mutable_user_friend_requests() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.UserFriendRequestsWithVersion.user_friend_requests)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    return _internal_mutable_user_friend_requests();
}
inline const ::turms::client::model::proto::UserFriendRequest&
UserFriendRequestsWithVersion::user_friend_requests(int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequestsWithVersion.user_friend_requests)
    return _internal_user_friend_requests().Get(index);
}
inline ::turms::client::model::proto::UserFriendRequest*
UserFriendRequestsWithVersion::add_user_friend_requests() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::turms::client::model::proto::UserFriendRequest* _add =
        _internal_mutable_user_friend_requests()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.UserFriendRequestsWithVersion.user_friend_requests)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>&
UserFriendRequestsWithVersion::user_friend_requests() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.UserFriendRequestsWithVersion.user_friend_requests)
    return _internal_user_friend_requests();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>&
UserFriendRequestsWithVersion::_internal_user_friend_requests() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.user_friend_requests_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::UserFriendRequest>*
UserFriendRequestsWithVersion::_internal_mutable_user_friend_requests() {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return &_impl_.user_friend_requests_;
}

// optional int64 last_updated_date = 2;
inline bool UserFriendRequestsWithVersion::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void UserFriendRequestsWithVersion::clear_last_updated_date() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t UserFriendRequestsWithVersion::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.UserFriendRequestsWithVersion.last_updated_date)
    return _internal_last_updated_date();
}
inline void UserFriendRequestsWithVersion::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.UserFriendRequestsWithVersion.last_updated_date)
}
inline ::int64_t UserFriendRequestsWithVersion::_internal_last_updated_date() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.last_updated_date_;
}
inline void UserFriendRequestsWithVersion::_internal_set_last_updated_date(::int64_t value) {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5ffriend_5frequests_5fwith_5fversion_2eproto_2epb_2eh