// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/blocklist/query_group_blocked_user_infos_request.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct
    TableStruct_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryGroupBlockedUserInfosRequest;
struct QueryGroupBlockedUserInfosRequestDefaultTypeInternal;
extern QueryGroupBlockedUserInfosRequestDefaultTypeInternal
    _QueryGroupBlockedUserInfosRequest_default_instance_;
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

class QueryGroupBlockedUserInfosRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryGroupBlockedUserInfosRequest)
 */
{
   public:
    inline QueryGroupBlockedUserInfosRequest()
        : QueryGroupBlockedUserInfosRequest(nullptr) {
    }
    ~QueryGroupBlockedUserInfosRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR QueryGroupBlockedUserInfosRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline QueryGroupBlockedUserInfosRequest(const QueryGroupBlockedUserInfosRequest& from)
        : QueryGroupBlockedUserInfosRequest(nullptr, from) {
    }
    inline QueryGroupBlockedUserInfosRequest(QueryGroupBlockedUserInfosRequest&& from) noexcept
        : QueryGroupBlockedUserInfosRequest(nullptr, std::move(from)) {
    }
    inline QueryGroupBlockedUserInfosRequest& operator=(
        const QueryGroupBlockedUserInfosRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline QueryGroupBlockedUserInfosRequest& operator=(
        QueryGroupBlockedUserInfosRequest&& from) noexcept {
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

    static const QueryGroupBlockedUserInfosRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const QueryGroupBlockedUserInfosRequest* internal_default_instance() {
        return reinterpret_cast<const QueryGroupBlockedUserInfosRequest*>(
            &_QueryGroupBlockedUserInfosRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(QueryGroupBlockedUserInfosRequest& a, QueryGroupBlockedUserInfosRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(QueryGroupBlockedUserInfosRequest* other) {
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
    void UnsafeArenaSwap(QueryGroupBlockedUserInfosRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    QueryGroupBlockedUserInfosRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<QueryGroupBlockedUserInfosRequest>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const QueryGroupBlockedUserInfosRequest& from);
    void MergeFrom(const QueryGroupBlockedUserInfosRequest& from);
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
    void InternalSwap(QueryGroupBlockedUserInfosRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.QueryGroupBlockedUserInfosRequest";
    }

   protected:
    explicit QueryGroupBlockedUserInfosRequest(::google::protobuf::Arena* arena);
    QueryGroupBlockedUserInfosRequest(::google::protobuf::Arena* arena,
                                      const QueryGroupBlockedUserInfosRequest& from);
    QueryGroupBlockedUserInfosRequest(::google::protobuf::Arena* arena,
                                      QueryGroupBlockedUserInfosRequest&& from) noexcept
        : QueryGroupBlockedUserInfosRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kGroupIdFieldNumber = 1,
        kLastUpdatedDateFieldNumber = 2,
    };
    // int64 group_id = 1;
    void clear_group_id();
    ::int64_t group_id() const;
    void set_group_id(::int64_t value);

   private:
    ::int64_t _internal_group_id() const;
    void _internal_set_group_id(::int64_t value);

   public:
    // optional int64 last_updated_date = 2;
    bool has_last_updated_date() const;
    void clear_last_updated_date();
    ::int64_t last_updated_date() const;
    void set_last_updated_date(::int64_t value);

   private:
    ::int64_t _internal_last_updated_date() const;
    void _internal_set_last_updated_date(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryGroupBlockedUserInfosRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<1, 2, 0, 0, 2> _table_;
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
        ::int64_t group_id_;
        ::int64_t last_updated_date_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryGroupBlockedUserInfosRequest

// int64 group_id = 1;
inline void QueryGroupBlockedUserInfosRequest::clear_group_id() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.group_id_ = ::int64_t{0};
}
inline ::int64_t QueryGroupBlockedUserInfosRequest::group_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryGroupBlockedUserInfosRequest.group_id)
    return _internal_group_id();
}
inline void QueryGroupBlockedUserInfosRequest::set_group_id(::int64_t value) {
    _internal_set_group_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryGroupBlockedUserInfosRequest.group_id)
}
inline ::int64_t QueryGroupBlockedUserInfosRequest::_internal_group_id() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.group_id_;
}
inline void QueryGroupBlockedUserInfosRequest::_internal_set_group_id(::int64_t value) {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.group_id_ = value;
}

// optional int64 last_updated_date = 2;
inline bool QueryGroupBlockedUserInfosRequest::has_last_updated_date() const {
    bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
    return value;
}
inline void QueryGroupBlockedUserInfosRequest::clear_last_updated_date() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.last_updated_date_ = ::int64_t{0};
    _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t QueryGroupBlockedUserInfosRequest::last_updated_date() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryGroupBlockedUserInfosRequest.last_updated_date)
    return _internal_last_updated_date();
}
inline void QueryGroupBlockedUserInfosRequest::set_last_updated_date(::int64_t value) {
    _internal_set_last_updated_date(value);
    _impl_._has_bits_[0] |= 0x00000001u;
    // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryGroupBlockedUserInfosRequest.last_updated_date)
}
inline ::int64_t QueryGroupBlockedUserInfosRequest::_internal_last_updated_date() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.last_updated_date_;
}
inline void QueryGroupBlockedUserInfosRequest::_internal_set_last_updated_date(::int64_t value) {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fblocklist_2fquery_5fgroup_5fblocked_5fuser_5finfos_5frequest_2eproto_2epb_2eh