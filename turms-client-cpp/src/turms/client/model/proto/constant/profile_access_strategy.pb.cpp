// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: constant/profile_access_strategy.proto
// Protobuf C++ Version: 5.26.1

#include "turms/client/model/proto/constant/profile_access_strategy.pb.h"

#include <algorithm>

#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/wire_format_lite.h"
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
namespace proto {}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
PROTOBUF_CONSTINIT const uint32_t ProfileAccessStrategy_internal_data_[] = {
    196608u,
    0u,
};
bool ProfileAccessStrategy_IsValid(int value) {
    return 0 <= value && value <= 2;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    ProfileAccessStrategy_strings[3] = {};

static const char ProfileAccessStrategy_names[] = {
    "ALL"
    "ALL_EXCEPT_BLOCKED_USERS"
    "FRIENDS"};

static const ::google::protobuf::internal::EnumEntry ProfileAccessStrategy_entries[] = {
    {{&ProfileAccessStrategy_names[0], 3}, 0},
    {{&ProfileAccessStrategy_names[3], 24}, 1},
    {{&ProfileAccessStrategy_names[27], 7}, 2},
};

static const int ProfileAccessStrategy_entries_by_number[] = {
    0,  // 0 -> ALL
    1,  // 1 -> ALL_EXCEPT_BLOCKED_USERS
    2,  // 2 -> FRIENDS
};

const std::string& ProfileAccessStrategy_Name(ProfileAccessStrategy value) {
    static const bool kDummy =
        ::google::protobuf::internal::InitializeEnumStrings(ProfileAccessStrategy_entries,
                                                            ProfileAccessStrategy_entries_by_number,
                                                            3,
                                                            ProfileAccessStrategy_strings);
    (void)kDummy;

    int idx = ::google::protobuf::internal::LookUpEnumName(
        ProfileAccessStrategy_entries, ProfileAccessStrategy_entries_by_number, 3, value);
    return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                     : ProfileAccessStrategy_strings[idx].get();
}

bool ProfileAccessStrategy_Parse(absl::string_view name, ProfileAccessStrategy* value) {
    int int_value;
    bool success = ::google::protobuf::internal::LookUpEnumValue(
        ProfileAccessStrategy_entries, 3, name, &int_value);
    if (success) {
        *value = static_cast<ProfileAccessStrategy>(int_value);
    }
    return success;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"