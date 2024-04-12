// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/enrollment/delete_group_join_request_request.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct
    TableStruct_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class DeleteGroupJoinRequestRequest;
struct DeleteGroupJoinRequestRequestDefaultTypeInternal;
extern DeleteGroupJoinRequestRequestDefaultTypeInternal
    _DeleteGroupJoinRequestRequest_default_instance_;
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

class DeleteGroupJoinRequestRequest final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.DeleteGroupJoinRequestRequest)
 */
{
   public:
    inline DeleteGroupJoinRequestRequest()
        : DeleteGroupJoinRequestRequest(nullptr) {
    }
    ~DeleteGroupJoinRequestRequest() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR DeleteGroupJoinRequestRequest(
        ::google::protobuf::internal::ConstantInitialized);

    inline DeleteGroupJoinRequestRequest(const DeleteGroupJoinRequestRequest& from)
        : DeleteGroupJoinRequestRequest(nullptr, from) {
    }
    inline DeleteGroupJoinRequestRequest(DeleteGroupJoinRequestRequest&& from) noexcept
        : DeleteGroupJoinRequestRequest(nullptr, std::move(from)) {
    }
    inline DeleteGroupJoinRequestRequest& operator=(const DeleteGroupJoinRequestRequest& from) {
        CopyFrom(from);
        return *this;
    }
    inline DeleteGroupJoinRequestRequest& operator=(DeleteGroupJoinRequestRequest&& from) noexcept {
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

    static const DeleteGroupJoinRequestRequest& default_instance() {
        return *internal_default_instance();
    }
    static inline const DeleteGroupJoinRequestRequest* internal_default_instance() {
        return reinterpret_cast<const DeleteGroupJoinRequestRequest*>(
            &_DeleteGroupJoinRequestRequest_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(DeleteGroupJoinRequestRequest& a, DeleteGroupJoinRequestRequest& b) {
        a.Swap(&b);
    }
    inline void Swap(DeleteGroupJoinRequestRequest* other) {
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
    void UnsafeArenaSwap(DeleteGroupJoinRequestRequest* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    DeleteGroupJoinRequestRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<DeleteGroupJoinRequestRequest>(
            arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const DeleteGroupJoinRequestRequest& from);
    void MergeFrom(const DeleteGroupJoinRequestRequest& from);
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
    void InternalSwap(DeleteGroupJoinRequestRequest* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.DeleteGroupJoinRequestRequest";
    }

   protected:
    explicit DeleteGroupJoinRequestRequest(::google::protobuf::Arena* arena);
    DeleteGroupJoinRequestRequest(::google::protobuf::Arena* arena,
                                  const DeleteGroupJoinRequestRequest& from);
    DeleteGroupJoinRequestRequest(::google::protobuf::Arena* arena,
                                  DeleteGroupJoinRequestRequest&& from) noexcept
        : DeleteGroupJoinRequestRequest(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kRequestIdFieldNumber = 1,
    };
    // int64 request_id = 1;
    void clear_request_id();
    ::int64_t request_id() const;
    void set_request_id(::int64_t value);

   private:
    ::int64_t _internal_request_id() const;
    void _internal_set_request_id(::int64_t value);

   public:
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.DeleteGroupJoinRequestRequest)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 0, 2> _table_;
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
        ::int64_t request_id_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::
        TableStruct_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DeleteGroupJoinRequestRequest

// int64 request_id = 1;
inline void DeleteGroupJoinRequestRequest::clear_request_id() {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.request_id_ = ::int64_t{0};
}
inline ::int64_t DeleteGroupJoinRequestRequest::request_id() const {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.DeleteGroupJoinRequestRequest.request_id)
    return _internal_request_id();
}
inline void DeleteGroupJoinRequestRequest::set_request_id(::int64_t value) {
    _internal_set_request_id(value);
    // @@protoc_insertion_point(field_set:turms.client.model.proto.DeleteGroupJoinRequestRequest.request_id)
}
inline ::int64_t DeleteGroupJoinRequestRequest::_internal_request_id() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.request_id_;
}
inline void DeleteGroupJoinRequestRequest::_internal_set_request_id(::int64_t value) {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    _impl_.request_id_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fgroup_2fenrollment_2fdelete_5fgroup_5fjoin_5frequest_5frequest_2eproto_2epb_2eh