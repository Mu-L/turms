// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/group/group_invitations_with_version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "turms/client/model/proto/model/group/group_invitation.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupInvitationsWithVersion;
struct GroupInvitationsWithVersionDefaultTypeInternal;
extern GroupInvitationsWithVersionDefaultTypeInternal _GroupInvitationsWithVersion_default_instance_;
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

class GroupInvitationsWithVersion final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupInvitationsWithVersion) */ {
 public:
  inline GroupInvitationsWithVersion() : GroupInvitationsWithVersion(nullptr) {}
  ~GroupInvitationsWithVersion() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GroupInvitationsWithVersion(::google::protobuf::internal::ConstantInitialized);

  GroupInvitationsWithVersion(const GroupInvitationsWithVersion& from);
  GroupInvitationsWithVersion(GroupInvitationsWithVersion&& from) noexcept
    : GroupInvitationsWithVersion() {
    *this = ::std::move(from);
  }

  inline GroupInvitationsWithVersion& operator=(const GroupInvitationsWithVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupInvitationsWithVersion& operator=(GroupInvitationsWithVersion&& from) noexcept {
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

  static const GroupInvitationsWithVersion& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupInvitationsWithVersion* internal_default_instance() {
    return reinterpret_cast<const GroupInvitationsWithVersion*>(
               &_GroupInvitationsWithVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupInvitationsWithVersion& a, GroupInvitationsWithVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupInvitationsWithVersion* other) {
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
  void UnsafeArenaSwap(GroupInvitationsWithVersion* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupInvitationsWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupInvitationsWithVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const GroupInvitationsWithVersion& from);
  void MergeFrom(const GroupInvitationsWithVersion& from);
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
  void InternalSwap(GroupInvitationsWithVersion* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.GroupInvitationsWithVersion";
  }
  protected:
  explicit GroupInvitationsWithVersion(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupInvitationsFieldNumber = 1,
    kLastUpdatedDateFieldNumber = 2,
  };
  // repeated .turms.client.model.proto.GroupInvitation group_invitations = 1;
  int group_invitations_size() const;
  private:
  int _internal_group_invitations_size() const;

  public:
  void clear_group_invitations() ;
  ::turms::client::model::proto::GroupInvitation* mutable_group_invitations(int index);
  ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupInvitation >*
      mutable_group_invitations();
  private:
  const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupInvitation>& _internal_group_invitations() const;
  ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupInvitation>* _internal_mutable_group_invitations();
  public:
  const ::turms::client::model::proto::GroupInvitation& group_invitations(int index) const;
  ::turms::client::model::proto::GroupInvitation* add_group_invitations();
  const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupInvitation >&
      group_invitations() const;
  // optional int64 last_updated_date = 2;
  bool has_last_updated_date() const;
  void clear_last_updated_date() ;
  ::int64_t last_updated_date() const;
  void set_last_updated_date(::int64_t value);

  private:
  ::int64_t _internal_last_updated_date() const;
  void _internal_set_last_updated_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupInvitationsWithVersion)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<1, 2, 1, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupInvitation > group_invitations_;
    ::int64_t last_updated_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupInvitationsWithVersion

// repeated .turms.client.model.proto.GroupInvitation group_invitations = 1;
inline int GroupInvitationsWithVersion::_internal_group_invitations_size() const {
  return _internal_group_invitations().size();
}
inline int GroupInvitationsWithVersion::group_invitations_size() const {
  return _internal_group_invitations_size();
}
inline ::turms::client::model::proto::GroupInvitation* GroupInvitationsWithVersion::mutable_group_invitations(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupInvitationsWithVersion.group_invitations)
  return _internal_mutable_group_invitations()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupInvitation >*
GroupInvitationsWithVersion::mutable_group_invitations() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupInvitationsWithVersion.group_invitations)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_group_invitations();
}
inline const ::turms::client::model::proto::GroupInvitation& GroupInvitationsWithVersion::group_invitations(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitationsWithVersion.group_invitations)
    return _internal_group_invitations().Get(index);
}
inline ::turms::client::model::proto::GroupInvitation* GroupInvitationsWithVersion::add_group_invitations() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::turms::client::model::proto::GroupInvitation* _add = _internal_mutable_group_invitations()->Add();
  // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupInvitationsWithVersion.group_invitations)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupInvitation >&
GroupInvitationsWithVersion::group_invitations() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupInvitationsWithVersion.group_invitations)
  return _internal_group_invitations();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupInvitation>&
GroupInvitationsWithVersion::_internal_group_invitations() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_invitations_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupInvitation>*
GroupInvitationsWithVersion::_internal_mutable_group_invitations() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.group_invitations_;
}

// optional int64 last_updated_date = 2;
inline bool GroupInvitationsWithVersion::has_last_updated_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GroupInvitationsWithVersion::clear_last_updated_date() {
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t GroupInvitationsWithVersion::last_updated_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupInvitationsWithVersion.last_updated_date)
  return _internal_last_updated_date();
}
inline void GroupInvitationsWithVersion::set_last_updated_date(::int64_t value) {
  _internal_set_last_updated_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupInvitationsWithVersion.last_updated_date)
}
inline ::int64_t GroupInvitationsWithVersion::_internal_last_updated_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.last_updated_date_;
}
inline void GroupInvitationsWithVersion::_internal_set_last_updated_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5finvitations_5fwith_5fversion_2eproto_2epb_2eh
