// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/enrollment/check_group_join_questions_answers_request.proto

#include "turms/client/model/proto/request/group/enrollment/check_group_join_questions_answers_request.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
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
      template <typename>
PROTOBUF_CONSTEXPR CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse(::_pbi::ConstantInitialized) {}
struct CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUseDefaultTypeInternal() {}
  union {
    CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUseDefaultTypeInternal _CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR CheckGroupJoinQuestionsAnswersRequest::CheckGroupJoinQuestionsAnswersRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /* decltype(_impl_.question_id_to_answer_) */ {},
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct CheckGroupJoinQuestionsAnswersRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CheckGroupJoinQuestionsAnswersRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CheckGroupJoinQuestionsAnswersRequestDefaultTypeInternal() {}
  union {
    CheckGroupJoinQuestionsAnswersRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CheckGroupJoinQuestionsAnswersRequestDefaultTypeInternal _CheckGroupJoinQuestionsAnswersRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
// ===================================================================

CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse() {}
CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse(::google::protobuf::Arena* arena)
    : SuperType(arena) {}
void CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::MergeFrom(const CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
// ===================================================================

class CheckGroupJoinQuestionsAnswersRequest::_Internal {
 public:
};

CheckGroupJoinQuestionsAnswersRequest::CheckGroupJoinQuestionsAnswersRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
}
CheckGroupJoinQuestionsAnswersRequest::CheckGroupJoinQuestionsAnswersRequest(const CheckGroupJoinQuestionsAnswersRequest& from) : ::google::protobuf::MessageLite() {
  CheckGroupJoinQuestionsAnswersRequest* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      /* decltype(_impl_.question_id_to_answer_) */ {},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  _this->_impl_.question_id_to_answer_.MergeFrom(from._impl_.question_id_to_answer_);

  // @@protoc_insertion_point(copy_constructor:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
}
inline void CheckGroupJoinQuestionsAnswersRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      /* decltype(_impl_.question_id_to_answer_) */ {::google::protobuf::internal::ArenaInitialized(), arena},
      /*decltype(_impl_._cached_size_)*/ {},
  };
}
CheckGroupJoinQuestionsAnswersRequest::~CheckGroupJoinQuestionsAnswersRequest() {
  // @@protoc_insertion_point(destructor:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void CheckGroupJoinQuestionsAnswersRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.question_id_to_answer_.~MapFieldLite();
}
void CheckGroupJoinQuestionsAnswersRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void CheckGroupJoinQuestionsAnswersRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.question_id_to_answer_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* CheckGroupJoinQuestionsAnswersRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 92, 2> CheckGroupJoinQuestionsAnswersRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_CheckGroupJoinQuestionsAnswersRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // map<int64, string> question_id_to_answer = 1;
    {PROTOBUF_FIELD_OFFSET(CheckGroupJoinQuestionsAnswersRequest, _impl_.question_id_to_answer_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMap)},
  }}, {{
    {::_pbi::TcParser::GetMapAuxInfo<decltype(CheckGroupJoinQuestionsAnswersRequest()._impl_.question_id_to_answer_)>(1, 0, 0)},
  }}, {{
    "\76\25\0\0\0\0\0\0"
    "turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest"
    "question_id_to_answer"
  }},
};

::uint8_t* CheckGroupJoinQuestionsAnswersRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // map<int64, string> question_id_to_answer = 1;
  if (!_internal_question_id_to_answer().empty()) {
    using MapType = ::google::protobuf::Map<::int64_t, std::string>;
    using WireHelper = CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::Funcs;
    const auto& field = _internal_question_id_to_answer();

    if (stream->IsSerializationDeterministic() && field.size() > 1) {
      for (const auto& entry : ::google::protobuf::internal::MapSorterFlat<MapType>(field)) {
        target = WireHelper::InternalSerialize(
            1, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.second.data(), static_cast<int>(entry.second.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest.question_id_to_answer");
      }
    } else {
      for (const auto& entry : field) {
        target = WireHelper::InternalSerialize(
            1, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.second.data(), static_cast<int>(entry.second.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest.question_id_to_answer");
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  return target;
}

::size_t CheckGroupJoinQuestionsAnswersRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<int64, string> question_id_to_answer = 1;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_question_id_to_answer_size());
  for (const auto& entry : _internal_question_id_to_answer()) {
    total_size += CheckGroupJoinQuestionsAnswersRequest_QuestionIdToAnswerEntry_DoNotUse::Funcs::ByteSizeLong(entry.first, entry.second);
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CheckGroupJoinQuestionsAnswersRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const CheckGroupJoinQuestionsAnswersRequest*>(
      &from));
}

void CheckGroupJoinQuestionsAnswersRequest::MergeFrom(const CheckGroupJoinQuestionsAnswersRequest& from) {
  CheckGroupJoinQuestionsAnswersRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.question_id_to_answer_.MergeFrom(from._impl_.question_id_to_answer_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void CheckGroupJoinQuestionsAnswersRequest::CopyFrom(const CheckGroupJoinQuestionsAnswersRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CheckGroupJoinQuestionsAnswersRequest::IsInitialized() const {
  return true;
}

void CheckGroupJoinQuestionsAnswersRequest::InternalSwap(CheckGroupJoinQuestionsAnswersRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.question_id_to_answer_.InternalSwap(&other->_impl_.question_id_to_answer_);
}

std::string CheckGroupJoinQuestionsAnswersRequest::GetTypeName() const {
  return "turms.client.model.proto.CheckGroupJoinQuestionsAnswersRequest";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
