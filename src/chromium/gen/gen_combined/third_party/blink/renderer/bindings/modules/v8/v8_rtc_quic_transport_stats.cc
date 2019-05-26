// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_transport_stats.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCQuicTransportStatsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "blockedFramesReceived",
    "blockedFramesSent",
    "bytesReceived",
    "bytesRetransmitted",
    "bytesSent",
    "connectivityProbingPacketsReceived",
    "cryptoRetransmitCount",
    "estimatedBandwidthBps",
    "maxPacketSize",
    "maxReceivedPacketSize",
    "minRttUs",
    "numDatagramsLost",
    "numIncomingStreamsCreated",
    "numOutgoingStreamsCreated",
    "numReceivedDatagramsDropped",
    "packetsDropped",
    "packetsLost",
    "packetsProcessed",
    "packetsReceived",
    "packetsReordered",
    "packetsRetransmitted",
    "packetsSent",
    "smoothedRttUs",
    "streamBytesReceived",
    "streamBytesSent",
    "timestamp",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCQuicTransportStats::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCQuicTransportStats* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicTransportStatsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> blocked_frames_received_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&blocked_frames_received_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (blocked_frames_received_value.IsEmpty() || blocked_frames_received_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t blocked_frames_received_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, blocked_frames_received_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBlockedFramesReceived(blocked_frames_received_cpp_value);
  }

  v8::Local<v8::Value> blocked_frames_sent_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&blocked_frames_sent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (blocked_frames_sent_value.IsEmpty() || blocked_frames_sent_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t blocked_frames_sent_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, blocked_frames_sent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBlockedFramesSent(blocked_frames_sent_cpp_value);
  }

  v8::Local<v8::Value> bytes_received_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&bytes_received_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bytes_received_value.IsEmpty() || bytes_received_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t bytes_received_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, bytes_received_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBytesReceived(bytes_received_cpp_value);
  }

  v8::Local<v8::Value> bytes_retransmitted_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&bytes_retransmitted_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bytes_retransmitted_value.IsEmpty() || bytes_retransmitted_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t bytes_retransmitted_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, bytes_retransmitted_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBytesRetransmitted(bytes_retransmitted_cpp_value);
  }

  v8::Local<v8::Value> bytes_sent_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&bytes_sent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bytes_sent_value.IsEmpty() || bytes_sent_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t bytes_sent_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, bytes_sent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBytesSent(bytes_sent_cpp_value);
  }

  v8::Local<v8::Value> connectivity_probing_packets_received_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&connectivity_probing_packets_received_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (connectivity_probing_packets_received_value.IsEmpty() || connectivity_probing_packets_received_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t connectivity_probing_packets_received_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, connectivity_probing_packets_received_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setConnectivityProbingPacketsReceived(connectivity_probing_packets_received_cpp_value);
  }

  v8::Local<v8::Value> crypto_retransmit_count_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&crypto_retransmit_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (crypto_retransmit_count_value.IsEmpty() || crypto_retransmit_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t crypto_retransmit_count_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, crypto_retransmit_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCryptoRetransmitCount(crypto_retransmit_count_cpp_value);
  }

  v8::Local<v8::Value> estimated_bandwidth_bps_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&estimated_bandwidth_bps_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (estimated_bandwidth_bps_value.IsEmpty() || estimated_bandwidth_bps_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t estimated_bandwidth_bps_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, estimated_bandwidth_bps_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEstimatedBandwidthBps(estimated_bandwidth_bps_cpp_value);
  }

  v8::Local<v8::Value> max_packet_size_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&max_packet_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_packet_size_value.IsEmpty() || max_packet_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t max_packet_size_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, max_packet_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxPacketSize(max_packet_size_cpp_value);
  }

  v8::Local<v8::Value> max_received_packet_size_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&max_received_packet_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_received_packet_size_value.IsEmpty() || max_received_packet_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t max_received_packet_size_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, max_received_packet_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxReceivedPacketSize(max_received_packet_size_cpp_value);
  }

  v8::Local<v8::Value> min_rtt_us_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&min_rtt_us_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_rtt_us_value.IsEmpty() || min_rtt_us_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t min_rtt_us_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, min_rtt_us_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMinRttUs(min_rtt_us_cpp_value);
  }

  v8::Local<v8::Value> num_datagrams_lost_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&num_datagrams_lost_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (num_datagrams_lost_value.IsEmpty() || num_datagrams_lost_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t num_datagrams_lost_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, num_datagrams_lost_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumDatagramsLost(num_datagrams_lost_cpp_value);
  }

  v8::Local<v8::Value> num_incoming_streams_created_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&num_incoming_streams_created_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (num_incoming_streams_created_value.IsEmpty() || num_incoming_streams_created_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t num_incoming_streams_created_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, num_incoming_streams_created_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumIncomingStreamsCreated(num_incoming_streams_created_cpp_value);
  }

  v8::Local<v8::Value> num_outgoing_streams_created_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&num_outgoing_streams_created_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (num_outgoing_streams_created_value.IsEmpty() || num_outgoing_streams_created_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t num_outgoing_streams_created_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, num_outgoing_streams_created_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumOutgoingStreamsCreated(num_outgoing_streams_created_cpp_value);
  }

  v8::Local<v8::Value> num_received_datagrams_dropped_value;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&num_received_datagrams_dropped_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (num_received_datagrams_dropped_value.IsEmpty() || num_received_datagrams_dropped_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t num_received_datagrams_dropped_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, num_received_datagrams_dropped_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setNumReceivedDatagramsDropped(num_received_datagrams_dropped_cpp_value);
  }

  v8::Local<v8::Value> packets_dropped_value;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&packets_dropped_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_dropped_value.IsEmpty() || packets_dropped_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_dropped_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_dropped_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsDropped(packets_dropped_cpp_value);
  }

  v8::Local<v8::Value> packets_lost_value;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&packets_lost_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_lost_value.IsEmpty() || packets_lost_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_lost_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_lost_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsLost(packets_lost_cpp_value);
  }

  v8::Local<v8::Value> packets_processed_value;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&packets_processed_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_processed_value.IsEmpty() || packets_processed_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_processed_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_processed_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsProcessed(packets_processed_cpp_value);
  }

  v8::Local<v8::Value> packets_received_value;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&packets_received_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_received_value.IsEmpty() || packets_received_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_received_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_received_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsReceived(packets_received_cpp_value);
  }

  v8::Local<v8::Value> packets_reordered_value;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&packets_reordered_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_reordered_value.IsEmpty() || packets_reordered_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_reordered_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_reordered_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsReordered(packets_reordered_cpp_value);
  }

  v8::Local<v8::Value> packets_retransmitted_value;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&packets_retransmitted_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_retransmitted_value.IsEmpty() || packets_retransmitted_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_retransmitted_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_retransmitted_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsRetransmitted(packets_retransmitted_cpp_value);
  }

  v8::Local<v8::Value> packets_sent_value;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&packets_sent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (packets_sent_value.IsEmpty() || packets_sent_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t packets_sent_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, packets_sent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPacketsSent(packets_sent_cpp_value);
  }

  v8::Local<v8::Value> smoothed_rtt_us_value;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&smoothed_rtt_us_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (smoothed_rtt_us_value.IsEmpty() || smoothed_rtt_us_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t smoothed_rtt_us_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, smoothed_rtt_us_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSmoothedRttUs(smoothed_rtt_us_cpp_value);
  }

  v8::Local<v8::Value> stream_bytes_received_value;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&stream_bytes_received_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stream_bytes_received_value.IsEmpty() || stream_bytes_received_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t stream_bytes_received_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, stream_bytes_received_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStreamBytesReceived(stream_bytes_received_cpp_value);
  }

  v8::Local<v8::Value> stream_bytes_sent_value;
  if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&stream_bytes_sent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stream_bytes_sent_value.IsEmpty() || stream_bytes_sent_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t stream_bytes_sent_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, stream_bytes_sent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStreamBytesSent(stream_bytes_sent_cpp_value);
  }

  v8::Local<v8::Value> timestamp_value;
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&timestamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timestamp_value.IsEmpty() || timestamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    double timestamp_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, timestamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimestamp(timestamp_cpp_value);
  }
}

v8::Local<v8::Value> RTCQuicTransportStats::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCQuicTransportStats(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCQuicTransportStats(const RTCQuicTransportStats* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicTransportStatsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> blocked_frames_received_value;
  bool blocked_frames_received_has_value_or_default = false;
  if (impl->hasBlockedFramesReceived()) {
    blocked_frames_received_value = v8::Number::New(isolate, static_cast<double>(impl->blockedFramesReceived()));
    blocked_frames_received_has_value_or_default = true;
  }
  if (blocked_frames_received_has_value_or_default &&
      !create_property(0, blocked_frames_received_value)) {
    return false;
  }

  v8::Local<v8::Value> blocked_frames_sent_value;
  bool blocked_frames_sent_has_value_or_default = false;
  if (impl->hasBlockedFramesSent()) {
    blocked_frames_sent_value = v8::Number::New(isolate, static_cast<double>(impl->blockedFramesSent()));
    blocked_frames_sent_has_value_or_default = true;
  }
  if (blocked_frames_sent_has_value_or_default &&
      !create_property(1, blocked_frames_sent_value)) {
    return false;
  }

  v8::Local<v8::Value> bytes_received_value;
  bool bytes_received_has_value_or_default = false;
  if (impl->hasBytesReceived()) {
    bytes_received_value = v8::Number::New(isolate, static_cast<double>(impl->bytesReceived()));
    bytes_received_has_value_or_default = true;
  }
  if (bytes_received_has_value_or_default &&
      !create_property(2, bytes_received_value)) {
    return false;
  }

  v8::Local<v8::Value> bytes_retransmitted_value;
  bool bytes_retransmitted_has_value_or_default = false;
  if (impl->hasBytesRetransmitted()) {
    bytes_retransmitted_value = v8::Number::New(isolate, static_cast<double>(impl->bytesRetransmitted()));
    bytes_retransmitted_has_value_or_default = true;
  }
  if (bytes_retransmitted_has_value_or_default &&
      !create_property(3, bytes_retransmitted_value)) {
    return false;
  }

  v8::Local<v8::Value> bytes_sent_value;
  bool bytes_sent_has_value_or_default = false;
  if (impl->hasBytesSent()) {
    bytes_sent_value = v8::Number::New(isolate, static_cast<double>(impl->bytesSent()));
    bytes_sent_has_value_or_default = true;
  }
  if (bytes_sent_has_value_or_default &&
      !create_property(4, bytes_sent_value)) {
    return false;
  }

  v8::Local<v8::Value> connectivity_probing_packets_received_value;
  bool connectivity_probing_packets_received_has_value_or_default = false;
  if (impl->hasConnectivityProbingPacketsReceived()) {
    connectivity_probing_packets_received_value = v8::Number::New(isolate, static_cast<double>(impl->connectivityProbingPacketsReceived()));
    connectivity_probing_packets_received_has_value_or_default = true;
  }
  if (connectivity_probing_packets_received_has_value_or_default &&
      !create_property(5, connectivity_probing_packets_received_value)) {
    return false;
  }

  v8::Local<v8::Value> crypto_retransmit_count_value;
  bool crypto_retransmit_count_has_value_or_default = false;
  if (impl->hasCryptoRetransmitCount()) {
    crypto_retransmit_count_value = v8::Number::New(isolate, static_cast<double>(impl->cryptoRetransmitCount()));
    crypto_retransmit_count_has_value_or_default = true;
  }
  if (crypto_retransmit_count_has_value_or_default &&
      !create_property(6, crypto_retransmit_count_value)) {
    return false;
  }

  v8::Local<v8::Value> estimated_bandwidth_bps_value;
  bool estimated_bandwidth_bps_has_value_or_default = false;
  if (impl->hasEstimatedBandwidthBps()) {
    estimated_bandwidth_bps_value = v8::Number::New(isolate, static_cast<double>(impl->estimatedBandwidthBps()));
    estimated_bandwidth_bps_has_value_or_default = true;
  }
  if (estimated_bandwidth_bps_has_value_or_default &&
      !create_property(7, estimated_bandwidth_bps_value)) {
    return false;
  }

  v8::Local<v8::Value> max_packet_size_value;
  bool max_packet_size_has_value_or_default = false;
  if (impl->hasMaxPacketSize()) {
    max_packet_size_value = v8::Number::New(isolate, static_cast<double>(impl->maxPacketSize()));
    max_packet_size_has_value_or_default = true;
  }
  if (max_packet_size_has_value_or_default &&
      !create_property(8, max_packet_size_value)) {
    return false;
  }

  v8::Local<v8::Value> max_received_packet_size_value;
  bool max_received_packet_size_has_value_or_default = false;
  if (impl->hasMaxReceivedPacketSize()) {
    max_received_packet_size_value = v8::Number::New(isolate, static_cast<double>(impl->maxReceivedPacketSize()));
    max_received_packet_size_has_value_or_default = true;
  }
  if (max_received_packet_size_has_value_or_default &&
      !create_property(9, max_received_packet_size_value)) {
    return false;
  }

  v8::Local<v8::Value> min_rtt_us_value;
  bool min_rtt_us_has_value_or_default = false;
  if (impl->hasMinRttUs()) {
    min_rtt_us_value = v8::Number::New(isolate, static_cast<double>(impl->minRttUs()));
    min_rtt_us_has_value_or_default = true;
  }
  if (min_rtt_us_has_value_or_default &&
      !create_property(10, min_rtt_us_value)) {
    return false;
  }

  v8::Local<v8::Value> num_datagrams_lost_value;
  bool num_datagrams_lost_has_value_or_default = false;
  if (impl->hasNumDatagramsLost()) {
    num_datagrams_lost_value = v8::Integer::NewFromUnsigned(isolate, impl->numDatagramsLost());
    num_datagrams_lost_has_value_or_default = true;
  }
  if (num_datagrams_lost_has_value_or_default &&
      !create_property(11, num_datagrams_lost_value)) {
    return false;
  }

  v8::Local<v8::Value> num_incoming_streams_created_value;
  bool num_incoming_streams_created_has_value_or_default = false;
  if (impl->hasNumIncomingStreamsCreated()) {
    num_incoming_streams_created_value = v8::Integer::NewFromUnsigned(isolate, impl->numIncomingStreamsCreated());
    num_incoming_streams_created_has_value_or_default = true;
  }
  if (num_incoming_streams_created_has_value_or_default &&
      !create_property(12, num_incoming_streams_created_value)) {
    return false;
  }

  v8::Local<v8::Value> num_outgoing_streams_created_value;
  bool num_outgoing_streams_created_has_value_or_default = false;
  if (impl->hasNumOutgoingStreamsCreated()) {
    num_outgoing_streams_created_value = v8::Integer::NewFromUnsigned(isolate, impl->numOutgoingStreamsCreated());
    num_outgoing_streams_created_has_value_or_default = true;
  }
  if (num_outgoing_streams_created_has_value_or_default &&
      !create_property(13, num_outgoing_streams_created_value)) {
    return false;
  }

  v8::Local<v8::Value> num_received_datagrams_dropped_value;
  bool num_received_datagrams_dropped_has_value_or_default = false;
  if (impl->hasNumReceivedDatagramsDropped()) {
    num_received_datagrams_dropped_value = v8::Integer::NewFromUnsigned(isolate, impl->numReceivedDatagramsDropped());
    num_received_datagrams_dropped_has_value_or_default = true;
  }
  if (num_received_datagrams_dropped_has_value_or_default &&
      !create_property(14, num_received_datagrams_dropped_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_dropped_value;
  bool packets_dropped_has_value_or_default = false;
  if (impl->hasPacketsDropped()) {
    packets_dropped_value = v8::Number::New(isolate, static_cast<double>(impl->packetsDropped()));
    packets_dropped_has_value_or_default = true;
  }
  if (packets_dropped_has_value_or_default &&
      !create_property(15, packets_dropped_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_lost_value;
  bool packets_lost_has_value_or_default = false;
  if (impl->hasPacketsLost()) {
    packets_lost_value = v8::Number::New(isolate, static_cast<double>(impl->packetsLost()));
    packets_lost_has_value_or_default = true;
  }
  if (packets_lost_has_value_or_default &&
      !create_property(16, packets_lost_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_processed_value;
  bool packets_processed_has_value_or_default = false;
  if (impl->hasPacketsProcessed()) {
    packets_processed_value = v8::Number::New(isolate, static_cast<double>(impl->packetsProcessed()));
    packets_processed_has_value_or_default = true;
  }
  if (packets_processed_has_value_or_default &&
      !create_property(17, packets_processed_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_received_value;
  bool packets_received_has_value_or_default = false;
  if (impl->hasPacketsReceived()) {
    packets_received_value = v8::Number::New(isolate, static_cast<double>(impl->packetsReceived()));
    packets_received_has_value_or_default = true;
  }
  if (packets_received_has_value_or_default &&
      !create_property(18, packets_received_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_reordered_value;
  bool packets_reordered_has_value_or_default = false;
  if (impl->hasPacketsReordered()) {
    packets_reordered_value = v8::Number::New(isolate, static_cast<double>(impl->packetsReordered()));
    packets_reordered_has_value_or_default = true;
  }
  if (packets_reordered_has_value_or_default &&
      !create_property(19, packets_reordered_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_retransmitted_value;
  bool packets_retransmitted_has_value_or_default = false;
  if (impl->hasPacketsRetransmitted()) {
    packets_retransmitted_value = v8::Number::New(isolate, static_cast<double>(impl->packetsRetransmitted()));
    packets_retransmitted_has_value_or_default = true;
  }
  if (packets_retransmitted_has_value_or_default &&
      !create_property(20, packets_retransmitted_value)) {
    return false;
  }

  v8::Local<v8::Value> packets_sent_value;
  bool packets_sent_has_value_or_default = false;
  if (impl->hasPacketsSent()) {
    packets_sent_value = v8::Number::New(isolate, static_cast<double>(impl->packetsSent()));
    packets_sent_has_value_or_default = true;
  }
  if (packets_sent_has_value_or_default &&
      !create_property(21, packets_sent_value)) {
    return false;
  }

  v8::Local<v8::Value> smoothed_rtt_us_value;
  bool smoothed_rtt_us_has_value_or_default = false;
  if (impl->hasSmoothedRttUs()) {
    smoothed_rtt_us_value = v8::Number::New(isolate, static_cast<double>(impl->smoothedRttUs()));
    smoothed_rtt_us_has_value_or_default = true;
  }
  if (smoothed_rtt_us_has_value_or_default &&
      !create_property(22, smoothed_rtt_us_value)) {
    return false;
  }

  v8::Local<v8::Value> stream_bytes_received_value;
  bool stream_bytes_received_has_value_or_default = false;
  if (impl->hasStreamBytesReceived()) {
    stream_bytes_received_value = v8::Number::New(isolate, static_cast<double>(impl->streamBytesReceived()));
    stream_bytes_received_has_value_or_default = true;
  }
  if (stream_bytes_received_has_value_or_default &&
      !create_property(23, stream_bytes_received_value)) {
    return false;
  }

  v8::Local<v8::Value> stream_bytes_sent_value;
  bool stream_bytes_sent_has_value_or_default = false;
  if (impl->hasStreamBytesSent()) {
    stream_bytes_sent_value = v8::Number::New(isolate, static_cast<double>(impl->streamBytesSent()));
    stream_bytes_sent_has_value_or_default = true;
  }
  if (stream_bytes_sent_has_value_or_default &&
      !create_property(24, stream_bytes_sent_value)) {
    return false;
  }

  v8::Local<v8::Value> timestamp_value;
  bool timestamp_has_value_or_default = false;
  if (impl->hasTimestamp()) {
    timestamp_value = v8::Number::New(isolate, impl->timestamp());
    timestamp_has_value_or_default = true;
  }
  if (timestamp_has_value_or_default &&
      !create_property(25, timestamp_value)) {
    return false;
  }

  return true;
}

RTCQuicTransportStats* NativeValueTraits<RTCQuicTransportStats>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCQuicTransportStats* impl = RTCQuicTransportStats::Create();
  V8RTCQuicTransportStats::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
