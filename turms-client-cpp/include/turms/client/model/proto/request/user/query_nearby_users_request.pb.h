// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/user/query_nearby_users_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class QueryNearbyUsersRequest;
struct QueryNearbyUsersRequestDefaultTypeInternal;
extern QueryNearbyUsersRequestDefaultTypeInternal _QueryNearbyUsersRequest_default_instance_;
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

class QueryNearbyUsersRequest final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.QueryNearbyUsersRequest) */ {
 public:
  inline QueryNearbyUsersRequest() : QueryNearbyUsersRequest(nullptr) {}
  ~QueryNearbyUsersRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR QueryNearbyUsersRequest(::google::protobuf::internal::ConstantInitialized);

  QueryNearbyUsersRequest(const QueryNearbyUsersRequest& from);
  QueryNearbyUsersRequest(QueryNearbyUsersRequest&& from) noexcept
    : QueryNearbyUsersRequest() {
    *this = ::std::move(from);
  }

  inline QueryNearbyUsersRequest& operator=(const QueryNearbyUsersRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryNearbyUsersRequest& operator=(QueryNearbyUsersRequest&& from) noexcept {
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

  static const QueryNearbyUsersRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryNearbyUsersRequest* internal_default_instance() {
    return reinterpret_cast<const QueryNearbyUsersRequest*>(
               &_QueryNearbyUsersRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QueryNearbyUsersRequest& a, QueryNearbyUsersRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryNearbyUsersRequest* other) {
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
  void UnsafeArenaSwap(QueryNearbyUsersRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryNearbyUsersRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryNearbyUsersRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const QueryNearbyUsersRequest& from);
  void MergeFrom(const QueryNearbyUsersRequest& from);
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
  void InternalSwap(QueryNearbyUsersRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.QueryNearbyUsersRequest";
  }
  protected:
  explicit QueryNearbyUsersRequest(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLatitudeFieldNumber = 1,
    kLongitudeFieldNumber = 2,
    kMaxCountFieldNumber = 3,
    kMaxDistanceFieldNumber = 4,
    kWithCoordinatesFieldNumber = 5,
    kWithDistanceFieldNumber = 6,
    kWithUserInfoFieldNumber = 7,
  };
  // float latitude = 1;
  void clear_latitude() ;
  float latitude() const;
  void set_latitude(float value);

  private:
  float _internal_latitude() const;
  void _internal_set_latitude(float value);

  public:
  // float longitude = 2;
  void clear_longitude() ;
  float longitude() const;
  void set_longitude(float value);

  private:
  float _internal_longitude() const;
  void _internal_set_longitude(float value);

  public:
  // optional int32 max_count = 3;
  bool has_max_count() const;
  void clear_max_count() ;
  ::int32_t max_count() const;
  void set_max_count(::int32_t value);

  private:
  ::int32_t _internal_max_count() const;
  void _internal_set_max_count(::int32_t value);

  public:
  // optional int32 max_distance = 4;
  bool has_max_distance() const;
  void clear_max_distance() ;
  ::int32_t max_distance() const;
  void set_max_distance(::int32_t value);

  private:
  ::int32_t _internal_max_distance() const;
  void _internal_set_max_distance(::int32_t value);

  public:
  // optional bool with_coordinates = 5;
  bool has_with_coordinates() const;
  void clear_with_coordinates() ;
  bool with_coordinates() const;
  void set_with_coordinates(bool value);

  private:
  bool _internal_with_coordinates() const;
  void _internal_set_with_coordinates(bool value);

  public:
  // optional bool with_distance = 6;
  bool has_with_distance() const;
  void clear_with_distance() ;
  bool with_distance() const;
  void set_with_distance(bool value);

  private:
  bool _internal_with_distance() const;
  void _internal_set_with_distance(bool value);

  public:
  // optional bool with_user_info = 7;
  bool has_with_user_info() const;
  void clear_with_user_info() ;
  bool with_user_info() const;
  void set_with_user_info(bool value);

  private:
  bool _internal_with_user_info() const;
  void _internal_set_with_user_info(bool value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.QueryNearbyUsersRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<3, 7, 0, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    float latitude_;
    float longitude_;
    ::int32_t max_count_;
    ::int32_t max_distance_;
    bool with_coordinates_;
    bool with_distance_;
    bool with_user_info_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryNearbyUsersRequest

// float latitude = 1;
inline void QueryNearbyUsersRequest::clear_latitude() {
  _impl_.latitude_ = 0;
}
inline float QueryNearbyUsersRequest::latitude() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.latitude)
  return _internal_latitude();
}
inline void QueryNearbyUsersRequest::set_latitude(float value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.latitude)
}
inline float QueryNearbyUsersRequest::_internal_latitude() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.latitude_;
}
inline void QueryNearbyUsersRequest::_internal_set_latitude(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.latitude_ = value;
}

// float longitude = 2;
inline void QueryNearbyUsersRequest::clear_longitude() {
  _impl_.longitude_ = 0;
}
inline float QueryNearbyUsersRequest::longitude() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.longitude)
  return _internal_longitude();
}
inline void QueryNearbyUsersRequest::set_longitude(float value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.longitude)
}
inline float QueryNearbyUsersRequest::_internal_longitude() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.longitude_;
}
inline void QueryNearbyUsersRequest::_internal_set_longitude(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.longitude_ = value;
}

// optional int32 max_count = 3;
inline bool QueryNearbyUsersRequest::has_max_count() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void QueryNearbyUsersRequest::clear_max_count() {
  _impl_.max_count_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int32_t QueryNearbyUsersRequest::max_count() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.max_count)
  return _internal_max_count();
}
inline void QueryNearbyUsersRequest::set_max_count(::int32_t value) {
  _internal_set_max_count(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.max_count)
}
inline ::int32_t QueryNearbyUsersRequest::_internal_max_count() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.max_count_;
}
inline void QueryNearbyUsersRequest::_internal_set_max_count(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.max_count_ = value;
}

// optional int32 max_distance = 4;
inline bool QueryNearbyUsersRequest::has_max_distance() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void QueryNearbyUsersRequest::clear_max_distance() {
  _impl_.max_distance_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t QueryNearbyUsersRequest::max_distance() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.max_distance)
  return _internal_max_distance();
}
inline void QueryNearbyUsersRequest::set_max_distance(::int32_t value) {
  _internal_set_max_distance(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.max_distance)
}
inline ::int32_t QueryNearbyUsersRequest::_internal_max_distance() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.max_distance_;
}
inline void QueryNearbyUsersRequest::_internal_set_max_distance(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.max_distance_ = value;
}

// optional bool with_coordinates = 5;
inline bool QueryNearbyUsersRequest::has_with_coordinates() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void QueryNearbyUsersRequest::clear_with_coordinates() {
  _impl_.with_coordinates_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool QueryNearbyUsersRequest::with_coordinates() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.with_coordinates)
  return _internal_with_coordinates();
}
inline void QueryNearbyUsersRequest::set_with_coordinates(bool value) {
  _internal_set_with_coordinates(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.with_coordinates)
}
inline bool QueryNearbyUsersRequest::_internal_with_coordinates() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.with_coordinates_;
}
inline void QueryNearbyUsersRequest::_internal_set_with_coordinates(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.with_coordinates_ = value;
}

// optional bool with_distance = 6;
inline bool QueryNearbyUsersRequest::has_with_distance() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void QueryNearbyUsersRequest::clear_with_distance() {
  _impl_.with_distance_ = false;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline bool QueryNearbyUsersRequest::with_distance() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.with_distance)
  return _internal_with_distance();
}
inline void QueryNearbyUsersRequest::set_with_distance(bool value) {
  _internal_set_with_distance(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.with_distance)
}
inline bool QueryNearbyUsersRequest::_internal_with_distance() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.with_distance_;
}
inline void QueryNearbyUsersRequest::_internal_set_with_distance(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.with_distance_ = value;
}

// optional bool with_user_info = 7;
inline bool QueryNearbyUsersRequest::has_with_user_info() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void QueryNearbyUsersRequest::clear_with_user_info() {
  _impl_.with_user_info_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool QueryNearbyUsersRequest::with_user_info() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.QueryNearbyUsersRequest.with_user_info)
  return _internal_with_user_info();
}
inline void QueryNearbyUsersRequest::set_with_user_info(bool value) {
  _internal_set_with_user_info(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.QueryNearbyUsersRequest.with_user_info)
}
inline bool QueryNearbyUsersRequest::_internal_with_user_info() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.with_user_info_;
}
inline void QueryNearbyUsersRequest::_internal_set_with_user_info(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.with_user_info_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fuser_2fquery_5fnearby_5fusers_5frequest_2eproto_2epb_2eh
