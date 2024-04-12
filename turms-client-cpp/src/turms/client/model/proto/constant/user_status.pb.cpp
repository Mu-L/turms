// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: constant/user_status.proto
// Protobuf C++ Version: 5.26.1

#include "turms/client/model/proto/constant/user_status.pb.h"

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
PROTOBUF_CONSTINIT const uint32_t UserStatus_internal_data_[] = {
    458752u,
    0u,
};
bool UserStatus_IsValid(int value) {
    return 0 <= value && value <= 6;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string> UserStatus_strings[7] = {};

static const char UserStatus_names[] = {
    "AVAILABLE"
    "AWAY"
    "BE_RIGHT_BACK"
    "BUSY"
    "DO_NOT_DISTURB"
    "INVISIBLE"
    "OFFLINE"};

static const ::google::protobuf::internal::EnumEntry UserStatus_entries[] = {
    {{&UserStatus_names[0], 9}, 0},
    {{&UserStatus_names[9], 4}, 5},
    {{&UserStatus_names[13], 13}, 6},
    {{&UserStatus_names[26], 4}, 3},
    {{&UserStatus_names[30], 14}, 4},
    {{&UserStatus_names[44], 9}, 2},
    {{&UserStatus_names[53], 7}, 1},
};

static const int UserStatus_entries_by_number[] = {
    0,  // 0 -> AVAILABLE
    6,  // 1 -> OFFLINE
    5,  // 2 -> INVISIBLE
    3,  // 3 -> BUSY
    4,  // 4 -> DO_NOT_DISTURB
    1,  // 5 -> AWAY
    2,  // 6 -> BE_RIGHT_BACK
};

const std::string& UserStatus_Name(UserStatus value) {
    static const bool kDummy = ::google::protobuf::internal::InitializeEnumStrings(
        UserStatus_entries, UserStatus_entries_by_number, 7, UserStatus_strings);
    (void)kDummy;

    int idx = ::google::protobuf::internal::LookUpEnumName(
        UserStatus_entries, UserStatus_entries_by_number, 7, value);
    return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                     : UserStatus_strings[idx].get();
}

bool UserStatus_Parse(absl::string_view name, UserStatus* value) {
    int int_value;
    bool success =
        ::google::protobuf::internal::LookUpEnumValue(UserStatus_entries, 7, name, &int_value);
    if (success) {
        *value = static_cast<UserStatus>(int_value);
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