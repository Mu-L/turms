// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_relationship_group.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fuser_2fuser_5frelationship_5fgroup_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fuser_2fuser_5frelationship_5fgroup_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UserRelationshipGroup;
struct UserRelationshipGroupDefaultTypeInternal;
extern UserRelationshipGroupDefaultTypeInternal _UserRelationshipGroup_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class UserRelationshipGroup final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.UserRelationshipGroup) */ {
 public:
  inline UserRelationshipGroup() : UserRelationshipGroup(nullptr) {}
  ~UserRelationshipGroup() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UserRelationshipGroup(::google::protobuf::internal::ConstantInitialized);

  UserRelationshipGroup(const UserRelationshipGroup& from);
  UserRelationshipGroup(UserRelationshipGroup&& from) noexcept
    : UserRelationshipGroup() {
    *this = ::std::move(from);
  }

  inline UserRelationshipGroup& operator=(const UserRelationshipGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserRelationshipGroup& operator=(UserRelationshipGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const UserRelationshipGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserRelationshipGroup* internal_default_instance() {
    return reinterpret_cast<const UserRelationshipGroup*>(
               &_UserRelationshipGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserRelationshipGroup& a, UserRelationshipGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(UserRelationshipGroup* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserRelationshipGroup* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserRelationshipGroup* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserRelationshipGroup>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const UserRelationshipGroup& from);
  void MergeFrom(const UserRelationshipGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UserRelationshipGroup* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.UserRelationshipGroup";
  }
  protected:
  explicit UserRelationshipGroup(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIndexFieldNumber = 1,
  };
  // string name = 2;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // int32 index = 1;
  void clear_index() ;
  ::int32_t index() const;
  void set_index(::int32_t value);

  private:
  ::int32_t _internal_index() const;
  void _internal_set_index(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.UserRelationshipGroup)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<1, 2, 0, 59, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::int32_t index_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fuser_2fuser_5frelationship_5fgroup_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UserRelationshipGroup

// int32 index = 1;
inline void UserRelationshipGroup::clear_index() {
  _impl_.index_ = 0;
}
inline ::int32_t UserRelationshipGroup::index() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UserRelationshipGroup.index)
  return _internal_index();
}
inline void UserRelationshipGroup::set_index(::int32_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UserRelationshipGroup.index)
}
inline ::int32_t UserRelationshipGroup::_internal_index() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.index_;
}
inline void UserRelationshipGroup::_internal_set_index(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.index_ = value;
}

// string name = 2;
inline void UserRelationshipGroup::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& UserRelationshipGroup::name() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UserRelationshipGroup.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UserRelationshipGroup::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UserRelationshipGroup.name)
}
inline std::string* UserRelationshipGroup::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UserRelationshipGroup.name)
  return _s;
}
inline const std::string& UserRelationshipGroup::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void UserRelationshipGroup::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* UserRelationshipGroup::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* UserRelationshipGroup::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:turms.client.model.proto.UserRelationshipGroup.name)
  return _impl_.name_.Release();
}
inline void UserRelationshipGroup::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.UserRelationshipGroup.name)
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fuser_2fuser_5frelationship_5fgroup_2eproto_2epb_2eh
