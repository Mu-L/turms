// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/storage/storage_resource_infos.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fstorage_2fstorage_5fresource_5finfos_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fstorage_2fstorage_5fresource_5finfos_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/storage/storage_resource_info.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fstorage_2fstorage_5fresource_5finfos_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fstorage_2fstorage_5fresource_5finfos_2eproto {
    static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class StorageResourceInfos;
struct StorageResourceInfosDefaultTypeInternal;
extern StorageResourceInfosDefaultTypeInternal _StorageResourceInfos_default_instance_;
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

class StorageResourceInfos final : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:turms.client.model.proto.StorageResourceInfos) */ {
   public:
    inline StorageResourceInfos()
        : StorageResourceInfos(nullptr) {
    }
    ~StorageResourceInfos() override;
    template <typename = void>
    explicit PROTOBUF_CONSTEXPR StorageResourceInfos(
        ::google::protobuf::internal::ConstantInitialized);

    inline StorageResourceInfos(const StorageResourceInfos& from)
        : StorageResourceInfos(nullptr, from) {
    }
    inline StorageResourceInfos(StorageResourceInfos&& from) noexcept
        : StorageResourceInfos(nullptr, std::move(from)) {
    }
    inline StorageResourceInfos& operator=(const StorageResourceInfos& from) {
        CopyFrom(from);
        return *this;
    }
    inline StorageResourceInfos& operator=(StorageResourceInfos&& from) noexcept {
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

    static const StorageResourceInfos& default_instance() {
        return *internal_default_instance();
    }
    static inline const StorageResourceInfos* internal_default_instance() {
        return reinterpret_cast<const StorageResourceInfos*>(
            &_StorageResourceInfos_default_instance_);
    }
    static constexpr int kIndexInFileMessages = 0;
    friend void swap(StorageResourceInfos& a, StorageResourceInfos& b) {
        a.Swap(&b);
    }
    inline void Swap(StorageResourceInfos* other) {
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
    void UnsafeArenaSwap(StorageResourceInfos* other) {
        if (other == this)
            return;
        ABSL_DCHECK(GetArena() == other->GetArena());
        InternalSwap(other);
    }

    // implements Message ----------------------------------------------

    StorageResourceInfos* New(::google::protobuf::Arena* arena = nullptr) const final {
        return ::google::protobuf::MessageLite::DefaultConstruct<StorageResourceInfos>(arena);
    }
    void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) final;
    void CopyFrom(const StorageResourceInfos& from);
    void MergeFrom(const StorageResourceInfos& from);
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
    void InternalSwap(StorageResourceInfos* other);

   private:
    friend class ::google::protobuf::internal::AnyMetadata;
    static ::absl::string_view FullMessageName() {
        return "turms.client.model.proto.StorageResourceInfos";
    }

   protected:
    explicit StorageResourceInfos(::google::protobuf::Arena* arena);
    StorageResourceInfos(::google::protobuf::Arena* arena, const StorageResourceInfos& from);
    StorageResourceInfos(::google::protobuf::Arena* arena, StorageResourceInfos&& from) noexcept
        : StorageResourceInfos(arena) {
        *this = ::std::move(from);
    }
    const ::google::protobuf::MessageLite::ClassData* GetClassData() const final;

   public:
    // nested types ----------------------------------------------------

    // accessors -------------------------------------------------------
    enum : int {
        kInfosFieldNumber = 1,
    };
    // repeated .turms.client.model.proto.StorageResourceInfo infos = 1;
    int infos_size() const;

   private:
    int _internal_infos_size() const;

   public:
    void clear_infos();
    ::turms::client::model::proto::StorageResourceInfo* mutable_infos(int index);
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>*
    mutable_infos();

   private:
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>&
    _internal_infos() const;
    ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>*
    _internal_mutable_infos();

   public:
    const ::turms::client::model::proto::StorageResourceInfo& infos(int index) const;
    ::turms::client::model::proto::StorageResourceInfo* add_infos();
    const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>&
    infos() const;
    // @@protoc_insertion_point(class_scope:turms.client.model.proto.StorageResourceInfos)
   private:
    class _Internal;
    friend class ::google::protobuf::internal::TcParser;
    static const ::google::protobuf::internal::TcParseTable<0, 1, 1, 0, 2> _table_;
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
        ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>
            infos_;
        mutable ::google::protobuf::internal::CachedSize _cached_size_;
        PROTOBUF_TSAN_DECLARE_MEMBER
    };
    union {
        Impl_ _impl_;
    };
    friend struct ::TableStruct_model_2fstorage_2fstorage_5fresource_5finfos_2eproto;
};

// ===================================================================

// ===================================================================

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// StorageResourceInfos

// repeated .turms.client.model.proto.StorageResourceInfo infos = 1;
inline int StorageResourceInfos::_internal_infos_size() const {
    return _internal_infos().size();
}
inline int StorageResourceInfos::infos_size() const {
    return _internal_infos_size();
}
inline ::turms::client::model::proto::StorageResourceInfo* StorageResourceInfos::mutable_infos(
    int index) ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable:turms.client.model.proto.StorageResourceInfos.infos)
    return _internal_mutable_infos()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>*
StorageResourceInfos::mutable_infos() ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.StorageResourceInfos.infos)
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    return _internal_mutable_infos();
}
inline const ::turms::client::model::proto::StorageResourceInfo& StorageResourceInfos::infos(
    int index) const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_get:turms.client.model.proto.StorageResourceInfos.infos)
    return _internal_infos().Get(index);
}
inline ::turms::client::model::proto::StorageResourceInfo* StorageResourceInfos::add_infos()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
    PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
    ::turms::client::model::proto::StorageResourceInfo* _add = _internal_mutable_infos()->Add();
    // @@protoc_insertion_point(field_add:turms.client.model.proto.StorageResourceInfos.infos)
    return _add;
}
inline const ::google::protobuf::RepeatedPtrField<
    ::turms::client::model::proto::StorageResourceInfo>&
StorageResourceInfos::infos() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
    // @@protoc_insertion_point(field_list:turms.client.model.proto.StorageResourceInfos.infos)
    return _internal_infos();
}
inline const ::google::protobuf::RepeatedPtrField<
    ::turms::client::model::proto::StorageResourceInfo>&
StorageResourceInfos::_internal_infos() const {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return _impl_.infos_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::StorageResourceInfo>*
StorageResourceInfos::_internal_mutable_infos() {
    PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
    return &_impl_.infos_;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fstorage_2fstorage_5fresource_5finfos_2eproto_2epb_2eh