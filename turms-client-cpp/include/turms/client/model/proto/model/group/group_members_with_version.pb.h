// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/group/group_members_with_version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/group/group_member.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupMembersWithVersion;
struct GroupMembersWithVersionDefaultTypeInternal;
extern GroupMembersWithVersionDefaultTypeInternal _GroupMembersWithVersion_default_instance_;
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

class GroupMembersWithVersion final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupMembersWithVersion) */ {
 public:
  inline GroupMembersWithVersion() : GroupMembersWithVersion(nullptr) {}
  ~GroupMembersWithVersion() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GroupMembersWithVersion(::google::protobuf::internal::ConstantInitialized);

  GroupMembersWithVersion(const GroupMembersWithVersion& from);
  GroupMembersWithVersion(GroupMembersWithVersion&& from) noexcept
    : GroupMembersWithVersion() {
    *this = ::std::move(from);
  }

  inline GroupMembersWithVersion& operator=(const GroupMembersWithVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupMembersWithVersion& operator=(GroupMembersWithVersion&& from) noexcept {
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

  static const GroupMembersWithVersion& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupMembersWithVersion* internal_default_instance() {
    return reinterpret_cast<const GroupMembersWithVersion*>(
               &_GroupMembersWithVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupMembersWithVersion& a, GroupMembersWithVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupMembersWithVersion* other) {
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
  void UnsafeArenaSwap(GroupMembersWithVersion* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupMembersWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupMembersWithVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const GroupMembersWithVersion& from);
  void MergeFrom(const GroupMembersWithVersion& from);
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
  void InternalSwap(GroupMembersWithVersion* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.GroupMembersWithVersion";
  }
  protected:
  explicit GroupMembersWithVersion(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupMembersFieldNumber = 1,
    kLastUpdatedDateFieldNumber = 2,
  };
  // repeated .turms.client.model.proto.GroupMember group_members = 1;
  int group_members_size() const;
  private:
  int _internal_group_members_size() const;

  public:
  void clear_group_members() ;
  ::turms::client::model::proto::GroupMember* mutable_group_members(int index);
  ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupMember >*
      mutable_group_members();
  private:
  const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupMember>& _internal_group_members() const;
  ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupMember>* _internal_mutable_group_members();
  public:
  const ::turms::client::model::proto::GroupMember& group_members(int index) const;
  ::turms::client::model::proto::GroupMember* add_group_members();
  const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupMember >&
      group_members() const;
  // optional int64 last_updated_date = 2;
  bool has_last_updated_date() const;
  void clear_last_updated_date() ;
  ::int64_t last_updated_date() const;
  void set_last_updated_date(::int64_t value);

  private:
  ::int64_t _internal_last_updated_date() const;
  void _internal_set_last_updated_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupMembersWithVersion)
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
    ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupMember > group_members_;
    ::int64_t last_updated_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupMembersWithVersion

// repeated .turms.client.model.proto.GroupMember group_members = 1;
inline int GroupMembersWithVersion::_internal_group_members_size() const {
  return _internal_group_members().size();
}
inline int GroupMembersWithVersion::group_members_size() const {
  return _internal_group_members_size();
}
inline ::turms::client::model::proto::GroupMember* GroupMembersWithVersion::mutable_group_members(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupMembersWithVersion.group_members)
  return _internal_mutable_group_members()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupMember >*
GroupMembersWithVersion::mutable_group_members() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupMembersWithVersion.group_members)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_group_members();
}
inline const ::turms::client::model::proto::GroupMember& GroupMembersWithVersion::group_members(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMembersWithVersion.group_members)
    return _internal_group_members().Get(index);
}
inline ::turms::client::model::proto::GroupMember* GroupMembersWithVersion::add_group_members() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::turms::client::model::proto::GroupMember* _add = _internal_mutable_group_members()->Add();
  // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupMembersWithVersion.group_members)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::GroupMember >&
GroupMembersWithVersion::group_members() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupMembersWithVersion.group_members)
  return _internal_group_members();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupMember>&
GroupMembersWithVersion::_internal_group_members() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_members_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::GroupMember>*
GroupMembersWithVersion::_internal_mutable_group_members() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.group_members_;
}

// optional int64 last_updated_date = 2;
inline bool GroupMembersWithVersion::has_last_updated_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GroupMembersWithVersion::clear_last_updated_date() {
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t GroupMembersWithVersion::last_updated_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMembersWithVersion.last_updated_date)
  return _internal_last_updated_date();
}
inline void GroupMembersWithVersion::set_last_updated_date(::int64_t value) {
  _internal_set_last_updated_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMembersWithVersion.last_updated_date)
}
inline ::int64_t GroupMembersWithVersion::_internal_last_updated_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.last_updated_date_;
}
inline void GroupMembersWithVersion::_internal_set_last_updated_date(::int64_t value) {
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmembers_5fwith_5fversion_2eproto_2epb_2eh
