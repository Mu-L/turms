//
//  Generated code. Do not modify.
//  source: request/user/query_user_profiles_request.proto
//
// @dart = 2.12

// ignore_for_file: annotate_overrides, camel_case_types, comment_references
// ignore_for_file: constant_identifier_names, library_prefixes
// ignore_for_file: non_constant_identifier_names, prefer_final_fields
// ignore_for_file: unnecessary_import, unnecessary_this, unused_import

import 'dart:convert' as $convert;
import 'dart:core' as $core;
import 'dart:typed_data' as $typed_data;

@$core.Deprecated('Use queryUserProfilesRequestDescriptor instead')
const QueryUserProfilesRequest$json = {
  '1': 'QueryUserProfilesRequest',
  '2': [
    {'1': 'user_ids', '3': 1, '4': 3, '5': 3, '10': 'userIds'},
    {
      '1': 'last_updated_date',
      '3': 2,
      '4': 1,
      '5': 3,
      '9': 0,
      '10': 'lastUpdatedDate',
      '17': true
    },
  ],
  '8': [
    {'1': '_last_updated_date'},
  ],
};

/// Descriptor for `QueryUserProfilesRequest`. Decode as a `google.protobuf.DescriptorProto`.
final $typed_data.Uint8List queryUserProfilesRequestDescriptor = $convert.base64Decode(
    'ChhRdWVyeVVzZXJQcm9maWxlc1JlcXVlc3QSGQoIdXNlcl9pZHMYASADKANSB3VzZXJJZHMSLw'
    'oRbGFzdF91cGRhdGVkX2RhdGUYAiABKANIAFIPbGFzdFVwZGF0ZWREYXRliAEBQhQKEl9sYXN0'
    'X3VwZGF0ZWRfZGF0ZQ==');
