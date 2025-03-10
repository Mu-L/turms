///
//  Generated code. Do not modify.
//  source: request/message/query_messages_request.proto
//
// @dart = 2.12
// ignore_for_file: annotate_overrides,camel_case_types,unnecessary_const,non_constant_identifier_names,library_prefixes,unused_import,unused_shown_name,return_of_invalid_type,unnecessary_this,prefer_final_fields

import 'dart:core' as $core;

import 'package:fixnum/fixnum.dart' as $fixnum;
import 'package:protobuf/protobuf.dart' as $pb;

class QueryMessagesRequest extends $pb.GeneratedMessage {
  static final $pb.BuilderInfo _i = $pb.BuilderInfo(const $core.bool.fromEnvironment('protobuf.omit_message_names') ? '' : 'QueryMessagesRequest', package: const $pb.PackageName(const $core.bool.fromEnvironment('protobuf.omit_message_names') ? '' : 'im.turms.proto'), createEmptyInstance: create)
    ..p<$fixnum.Int64>(1, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'ids', $pb.PbFieldType.P6)
    ..a<$core.int>(2, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'size', $pb.PbFieldType.O3)
    ..aOB(3, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'areGroupMessages')
    ..aOB(4, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'areSystemMessages')
    ..aInt64(5, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'fromId')
    ..aInt64(6, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'deliveryDateAfter')
    ..aInt64(7, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'deliveryDateBefore')
    ..aOB(8, const $core.bool.fromEnvironment('protobuf.omit_field_names') ? '' : 'withTotal')
    ..hasRequiredFields = false
  ;

  QueryMessagesRequest._() : super();
  factory QueryMessagesRequest({
    $core.Iterable<$fixnum.Int64>? ids,
    $core.int? size,
    $core.bool? areGroupMessages,
    $core.bool? areSystemMessages,
    $fixnum.Int64? fromId,
    $fixnum.Int64? deliveryDateAfter,
    $fixnum.Int64? deliveryDateBefore,
    $core.bool? withTotal,
  }) {
    final _result = create();
    if (ids != null) {
      _result.ids.addAll(ids);
    }
    if (size != null) {
      _result.size = size;
    }
    if (areGroupMessages != null) {
      _result.areGroupMessages = areGroupMessages;
    }
    if (areSystemMessages != null) {
      _result.areSystemMessages = areSystemMessages;
    }
    if (fromId != null) {
      _result.fromId = fromId;
    }
    if (deliveryDateAfter != null) {
      _result.deliveryDateAfter = deliveryDateAfter;
    }
    if (deliveryDateBefore != null) {
      _result.deliveryDateBefore = deliveryDateBefore;
    }
    if (withTotal != null) {
      _result.withTotal = withTotal;
    }
    return _result;
  }
  factory QueryMessagesRequest.fromBuffer($core.List<$core.int> i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromBuffer(i, r);
  factory QueryMessagesRequest.fromJson($core.String i, [$pb.ExtensionRegistry r = $pb.ExtensionRegistry.EMPTY]) => create()..mergeFromJson(i, r);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.deepCopy] instead. '
  'Will be removed in next major version')
  QueryMessagesRequest clone() => QueryMessagesRequest()..mergeFromMessage(this);
  @$core.Deprecated(
  'Using this can add significant overhead to your binary. '
  'Use [GeneratedMessageGenericExtensions.rebuild] instead. '
  'Will be removed in next major version')
  QueryMessagesRequest copyWith(void Function(QueryMessagesRequest) updates) => super.copyWith((message) => updates(message as QueryMessagesRequest)) as QueryMessagesRequest; // ignore: deprecated_member_use
  $pb.BuilderInfo get info_ => _i;
  @$core.pragma('dart2js:noInline')
  static QueryMessagesRequest create() => QueryMessagesRequest._();
  QueryMessagesRequest createEmptyInstance() => create();
  static $pb.PbList<QueryMessagesRequest> createRepeated() => $pb.PbList<QueryMessagesRequest>();
  @$core.pragma('dart2js:noInline')
  static QueryMessagesRequest getDefault() => _defaultInstance ??= $pb.GeneratedMessage.$_defaultFor<QueryMessagesRequest>(create);
  static QueryMessagesRequest? _defaultInstance;

  @$pb.TagNumber(1)
  $core.List<$fixnum.Int64> get ids => $_getList(0);

  @$pb.TagNumber(2)
  $core.int get size => $_getIZ(1);
  @$pb.TagNumber(2)
  set size($core.int v) { $_setSignedInt32(1, v); }
  @$pb.TagNumber(2)
  $core.bool hasSize() => $_has(1);
  @$pb.TagNumber(2)
  void clearSize() => clearField(2);

  @$pb.TagNumber(3)
  $core.bool get areGroupMessages => $_getBF(2);
  @$pb.TagNumber(3)
  set areGroupMessages($core.bool v) { $_setBool(2, v); }
  @$pb.TagNumber(3)
  $core.bool hasAreGroupMessages() => $_has(2);
  @$pb.TagNumber(3)
  void clearAreGroupMessages() => clearField(3);

  @$pb.TagNumber(4)
  $core.bool get areSystemMessages => $_getBF(3);
  @$pb.TagNumber(4)
  set areSystemMessages($core.bool v) { $_setBool(3, v); }
  @$pb.TagNumber(4)
  $core.bool hasAreSystemMessages() => $_has(3);
  @$pb.TagNumber(4)
  void clearAreSystemMessages() => clearField(4);

  @$pb.TagNumber(5)
  $fixnum.Int64 get fromId => $_getI64(4);
  @$pb.TagNumber(5)
  set fromId($fixnum.Int64 v) { $_setInt64(4, v); }
  @$pb.TagNumber(5)
  $core.bool hasFromId() => $_has(4);
  @$pb.TagNumber(5)
  void clearFromId() => clearField(5);

  @$pb.TagNumber(6)
  $fixnum.Int64 get deliveryDateAfter => $_getI64(5);
  @$pb.TagNumber(6)
  set deliveryDateAfter($fixnum.Int64 v) { $_setInt64(5, v); }
  @$pb.TagNumber(6)
  $core.bool hasDeliveryDateAfter() => $_has(5);
  @$pb.TagNumber(6)
  void clearDeliveryDateAfter() => clearField(6);

  @$pb.TagNumber(7)
  $fixnum.Int64 get deliveryDateBefore => $_getI64(6);
  @$pb.TagNumber(7)
  set deliveryDateBefore($fixnum.Int64 v) { $_setInt64(6, v); }
  @$pb.TagNumber(7)
  $core.bool hasDeliveryDateBefore() => $_has(6);
  @$pb.TagNumber(7)
  void clearDeliveryDateBefore() => clearField(7);

  @$pb.TagNumber(8)
  $core.bool get withTotal => $_getBF(7);
  @$pb.TagNumber(8)
  set withTotal($core.bool v) { $_setBool(7, v); }
  @$pb.TagNumber(8)
  $core.bool hasWithTotal() => $_has(7);
  @$pb.TagNumber(8)
  void clearWithTotal() => clearField(8);
}

