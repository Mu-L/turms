///
//  Generated code. Do not modify.
//  source: request/group/blocklist/query_group_blocked_user_ids_request.proto
//
// @dart = 2.12
// ignore_for_file: annotate_overrides,camel_case_types,unnecessary_const,non_constant_identifier_names,library_prefixes,unused_import,unused_shown_name,return_of_invalid_type,unnecessary_this,prefer_final_fields

import 'dart:core' as $core;

import 'package:fixnum/fixnum.dart' as $fixnum;
import 'package:protobuf/protobuf.dart' as $pb;

class QueryGroupBlockedUserIdsRequest extends $pb.GeneratedMessage {
  static final $pb.BuilderInfo _i = $pb.BuilderInfo(const $core.bool.fromEnvironment('protobuf.omit_message_names') ? '' : 'QueryGroupBlockedUserIdsRequest', package: const $pb.PackageName(const $core.bool.fromEnvironment('protobuf.omit_message_names') ? '' : 'im.turms.proto'), createEmptyInstance: create)
    ..aInt64(1, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'groupId')
    ..aInt64(2, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'lastUpdatedDate')
    ..hasRequiredFields = false
  ;

  QueryGroupBlockedUserIdsRequest._() : super();
  factory QueryGroupBlockedUserIdsRequest({
    $fixnum.Int64? groupId,
    $fixnum.Int64? lastUpdatedDate,
  }) {
    final _result = create();
    if (groupId != null) {
      _result.groupId = groupId;
    }
    if (lastUpdatedDate != null) {
      _result.lastUpdatedDate = lastUpdatedDate;
    }
    return _result;
  }
  factory QueryGroupBlockedUserIdsRequest.fromBuffer($core.List<$core.int> i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromBuffer(i, r);
  factory QueryGroupBlockedUserIdsRequest.fromJson($core.String i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromJson(i, r);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
  'Will be removed in next major version')
  QueryGroupBlockedUserIdsRequest clone() => QueryGroupBlockedUserIdsRequest()..mergeFromMessage(this);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
  'Will be removed in next major version')
  QueryGroupBlockedUserIdsRequest copyWith(void Function(QueryGroupBlockedUserIdsRequest) updates) => super.copyWith((message) => updates(message as QueryGroupBlockedUserIdsRequest)) as QueryGroupBlockedUserIdsRequest; // ignore: deprecated_member_use
  $pb.BuilderInfo get info_ => _i;
  @$core.pragma('dart2js:noInline')
  static QueryGroupBlockedUserIdsRequest create() => QueryGroupBlockedUserIdsRequest._();
  QueryGroupBlockedUserIdsRequest createEmptyInstance() => create();
  static $pb.PbList<QueryGroupBlockedUserIdsRequest> createRepeated() => $pb.PbList<QueryGroupBlockedUserIdsRequest>();
  @$core.pragma('dart2js:noInline')
  static QueryGroupBlockedUserIdsRequest getDefault() => _defaultInstance ??= $pb.GeneratedMessage.$_defaultFor<QueryGroupBlockedUserIdsRequest>(create);
  static QueryGroupBlockedUserIdsRequest? _defaultInstance;

  @$pb.TagNumber(1)
  $fixnum.Int64 get groupId => $_getI64(0);
  @$pb.TagNumber(1)
  set groupId($fixnum.Int64 v) { $_setInt64(0, v); }
  @$pb.TagNumber(1)
  $core.bool hasGroupId() => $_has(0);
  @$pb.TagNumber(1)
  void clearGroupId() => clearField(1);

  @$pb.TagNumber(2)
  $fixnum.Int64 get lastUpdatedDate => $_getI64(1);
  @$pb.TagNumber(2)
  set lastUpdatedDate($fixnum.Int64 v) { $_setInt64(1, v); }
  @$pb.TagNumber(2)
  $core.bool hasLastUpdatedDate() => $_has(1);
  @$pb.TagNumber(2)
  void clearLastUpdatedDate() => clearField(2);
}

