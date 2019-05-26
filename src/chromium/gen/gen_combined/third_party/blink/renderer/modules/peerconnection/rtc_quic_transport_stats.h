// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_TRANSPORT_STATS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_TRANSPORT_STATS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCQuicTransportStats : public IDLDictionaryBase {
 public:
  static RTCQuicTransportStats* Create() { return MakeGarbageCollected<RTCQuicTransportStats>(); }

  RTCQuicTransportStats();
  virtual ~RTCQuicTransportStats();

  bool hasBlockedFramesReceived() const { return has_blocked_frames_received_; }
  uint64_t blockedFramesReceived() const {
    DCHECK(has_blocked_frames_received_);
    return blocked_frames_received_;
  }
  inline void setBlockedFramesReceived(uint64_t);

  bool hasBlockedFramesSent() const { return has_blocked_frames_sent_; }
  uint64_t blockedFramesSent() const {
    DCHECK(has_blocked_frames_sent_);
    return blocked_frames_sent_;
  }
  inline void setBlockedFramesSent(uint64_t);

  bool hasBytesReceived() const { return has_bytes_received_; }
  uint64_t bytesReceived() const {
    DCHECK(has_bytes_received_);
    return bytes_received_;
  }
  inline void setBytesReceived(uint64_t);

  bool hasBytesRetransmitted() const { return has_bytes_retransmitted_; }
  uint64_t bytesRetransmitted() const {
    DCHECK(has_bytes_retransmitted_);
    return bytes_retransmitted_;
  }
  inline void setBytesRetransmitted(uint64_t);

  bool hasBytesSent() const { return has_bytes_sent_; }
  uint64_t bytesSent() const {
    DCHECK(has_bytes_sent_);
    return bytes_sent_;
  }
  inline void setBytesSent(uint64_t);

  bool hasConnectivityProbingPacketsReceived() const { return has_connectivity_probing_packets_received_; }
  uint64_t connectivityProbingPacketsReceived() const {
    DCHECK(has_connectivity_probing_packets_received_);
    return connectivity_probing_packets_received_;
  }
  inline void setConnectivityProbingPacketsReceived(uint64_t);

  bool hasCryptoRetransmitCount() const { return has_crypto_retransmit_count_; }
  uint64_t cryptoRetransmitCount() const {
    DCHECK(has_crypto_retransmit_count_);
    return crypto_retransmit_count_;
  }
  inline void setCryptoRetransmitCount(uint64_t);

  bool hasEstimatedBandwidthBps() const { return has_estimated_bandwidth_bps_; }
  uint64_t estimatedBandwidthBps() const {
    DCHECK(has_estimated_bandwidth_bps_);
    return estimated_bandwidth_bps_;
  }
  inline void setEstimatedBandwidthBps(uint64_t);

  bool hasMaxPacketSize() const { return has_max_packet_size_; }
  uint64_t maxPacketSize() const {
    DCHECK(has_max_packet_size_);
    return max_packet_size_;
  }
  inline void setMaxPacketSize(uint64_t);

  bool hasMaxReceivedPacketSize() const { return has_max_received_packet_size_; }
  uint64_t maxReceivedPacketSize() const {
    DCHECK(has_max_received_packet_size_);
    return max_received_packet_size_;
  }
  inline void setMaxReceivedPacketSize(uint64_t);

  bool hasMinRttUs() const { return has_min_rtt_us_; }
  uint64_t minRttUs() const {
    DCHECK(has_min_rtt_us_);
    return min_rtt_us_;
  }
  inline void setMinRttUs(uint64_t);

  bool hasNumDatagramsLost() const { return has_num_datagrams_lost_; }
  uint32_t numDatagramsLost() const {
    DCHECK(has_num_datagrams_lost_);
    return num_datagrams_lost_;
  }
  inline void setNumDatagramsLost(uint32_t);

  bool hasNumIncomingStreamsCreated() const { return has_num_incoming_streams_created_; }
  uint32_t numIncomingStreamsCreated() const {
    DCHECK(has_num_incoming_streams_created_);
    return num_incoming_streams_created_;
  }
  inline void setNumIncomingStreamsCreated(uint32_t);

  bool hasNumOutgoingStreamsCreated() const { return has_num_outgoing_streams_created_; }
  uint32_t numOutgoingStreamsCreated() const {
    DCHECK(has_num_outgoing_streams_created_);
    return num_outgoing_streams_created_;
  }
  inline void setNumOutgoingStreamsCreated(uint32_t);

  bool hasNumReceivedDatagramsDropped() const { return has_num_received_datagrams_dropped_; }
  uint32_t numReceivedDatagramsDropped() const {
    DCHECK(has_num_received_datagrams_dropped_);
    return num_received_datagrams_dropped_;
  }
  inline void setNumReceivedDatagramsDropped(uint32_t);

  bool hasPacketsDropped() const { return has_packets_dropped_; }
  uint64_t packetsDropped() const {
    DCHECK(has_packets_dropped_);
    return packets_dropped_;
  }
  inline void setPacketsDropped(uint64_t);

  bool hasPacketsLost() const { return has_packets_lost_; }
  uint64_t packetsLost() const {
    DCHECK(has_packets_lost_);
    return packets_lost_;
  }
  inline void setPacketsLost(uint64_t);

  bool hasPacketsProcessed() const { return has_packets_processed_; }
  uint64_t packetsProcessed() const {
    DCHECK(has_packets_processed_);
    return packets_processed_;
  }
  inline void setPacketsProcessed(uint64_t);

  bool hasPacketsReceived() const { return has_packets_received_; }
  uint64_t packetsReceived() const {
    DCHECK(has_packets_received_);
    return packets_received_;
  }
  inline void setPacketsReceived(uint64_t);

  bool hasPacketsReordered() const { return has_packets_reordered_; }
  uint64_t packetsReordered() const {
    DCHECK(has_packets_reordered_);
    return packets_reordered_;
  }
  inline void setPacketsReordered(uint64_t);

  bool hasPacketsRetransmitted() const { return has_packets_retransmitted_; }
  uint64_t packetsRetransmitted() const {
    DCHECK(has_packets_retransmitted_);
    return packets_retransmitted_;
  }
  inline void setPacketsRetransmitted(uint64_t);

  bool hasPacketsSent() const { return has_packets_sent_; }
  uint64_t packetsSent() const {
    DCHECK(has_packets_sent_);
    return packets_sent_;
  }
  inline void setPacketsSent(uint64_t);

  bool hasSmoothedRttUs() const { return has_smoothed_rtt_us_; }
  uint64_t smoothedRttUs() const {
    DCHECK(has_smoothed_rtt_us_);
    return smoothed_rtt_us_;
  }
  inline void setSmoothedRttUs(uint64_t);

  bool hasStreamBytesReceived() const { return has_stream_bytes_received_; }
  uint64_t streamBytesReceived() const {
    DCHECK(has_stream_bytes_received_);
    return stream_bytes_received_;
  }
  inline void setStreamBytesReceived(uint64_t);

  bool hasStreamBytesSent() const { return has_stream_bytes_sent_; }
  uint64_t streamBytesSent() const {
    DCHECK(has_stream_bytes_sent_);
    return stream_bytes_sent_;
  }
  inline void setStreamBytesSent(uint64_t);

  bool hasTimestamp() const { return has_timestamp_; }
  double timestamp() const {
    DCHECK(has_timestamp_);
    return timestamp_;
  }
  inline void setTimestamp(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_blocked_frames_received_ = false;
  bool has_blocked_frames_sent_ = false;
  bool has_bytes_received_ = false;
  bool has_bytes_retransmitted_ = false;
  bool has_bytes_sent_ = false;
  bool has_connectivity_probing_packets_received_ = false;
  bool has_crypto_retransmit_count_ = false;
  bool has_estimated_bandwidth_bps_ = false;
  bool has_max_packet_size_ = false;
  bool has_max_received_packet_size_ = false;
  bool has_min_rtt_us_ = false;
  bool has_num_datagrams_lost_ = false;
  bool has_num_incoming_streams_created_ = false;
  bool has_num_outgoing_streams_created_ = false;
  bool has_num_received_datagrams_dropped_ = false;
  bool has_packets_dropped_ = false;
  bool has_packets_lost_ = false;
  bool has_packets_processed_ = false;
  bool has_packets_received_ = false;
  bool has_packets_reordered_ = false;
  bool has_packets_retransmitted_ = false;
  bool has_packets_sent_ = false;
  bool has_smoothed_rtt_us_ = false;
  bool has_stream_bytes_received_ = false;
  bool has_stream_bytes_sent_ = false;
  bool has_timestamp_ = false;

  uint64_t blocked_frames_received_;
  uint64_t blocked_frames_sent_;
  uint64_t bytes_received_;
  uint64_t bytes_retransmitted_;
  uint64_t bytes_sent_;
  uint64_t connectivity_probing_packets_received_;
  uint64_t crypto_retransmit_count_;
  uint64_t estimated_bandwidth_bps_;
  uint64_t max_packet_size_;
  uint64_t max_received_packet_size_;
  uint64_t min_rtt_us_;
  uint32_t num_datagrams_lost_;
  uint32_t num_incoming_streams_created_;
  uint32_t num_outgoing_streams_created_;
  uint32_t num_received_datagrams_dropped_;
  uint64_t packets_dropped_;
  uint64_t packets_lost_;
  uint64_t packets_processed_;
  uint64_t packets_received_;
  uint64_t packets_reordered_;
  uint64_t packets_retransmitted_;
  uint64_t packets_sent_;
  uint64_t smoothed_rtt_us_;
  uint64_t stream_bytes_received_;
  uint64_t stream_bytes_sent_;
  double timestamp_;

  friend class V8RTCQuicTransportStats;
};

void RTCQuicTransportStats::setBlockedFramesReceived(uint64_t value) {
  blocked_frames_received_ = value;
  has_blocked_frames_received_ = true;
}

void RTCQuicTransportStats::setBlockedFramesSent(uint64_t value) {
  blocked_frames_sent_ = value;
  has_blocked_frames_sent_ = true;
}

void RTCQuicTransportStats::setBytesReceived(uint64_t value) {
  bytes_received_ = value;
  has_bytes_received_ = true;
}

void RTCQuicTransportStats::setBytesRetransmitted(uint64_t value) {
  bytes_retransmitted_ = value;
  has_bytes_retransmitted_ = true;
}

void RTCQuicTransportStats::setBytesSent(uint64_t value) {
  bytes_sent_ = value;
  has_bytes_sent_ = true;
}

void RTCQuicTransportStats::setConnectivityProbingPacketsReceived(uint64_t value) {
  connectivity_probing_packets_received_ = value;
  has_connectivity_probing_packets_received_ = true;
}

void RTCQuicTransportStats::setCryptoRetransmitCount(uint64_t value) {
  crypto_retransmit_count_ = value;
  has_crypto_retransmit_count_ = true;
}

void RTCQuicTransportStats::setEstimatedBandwidthBps(uint64_t value) {
  estimated_bandwidth_bps_ = value;
  has_estimated_bandwidth_bps_ = true;
}

void RTCQuicTransportStats::setMaxPacketSize(uint64_t value) {
  max_packet_size_ = value;
  has_max_packet_size_ = true;
}

void RTCQuicTransportStats::setMaxReceivedPacketSize(uint64_t value) {
  max_received_packet_size_ = value;
  has_max_received_packet_size_ = true;
}

void RTCQuicTransportStats::setMinRttUs(uint64_t value) {
  min_rtt_us_ = value;
  has_min_rtt_us_ = true;
}

void RTCQuicTransportStats::setNumDatagramsLost(uint32_t value) {
  num_datagrams_lost_ = value;
  has_num_datagrams_lost_ = true;
}

void RTCQuicTransportStats::setNumIncomingStreamsCreated(uint32_t value) {
  num_incoming_streams_created_ = value;
  has_num_incoming_streams_created_ = true;
}

void RTCQuicTransportStats::setNumOutgoingStreamsCreated(uint32_t value) {
  num_outgoing_streams_created_ = value;
  has_num_outgoing_streams_created_ = true;
}

void RTCQuicTransportStats::setNumReceivedDatagramsDropped(uint32_t value) {
  num_received_datagrams_dropped_ = value;
  has_num_received_datagrams_dropped_ = true;
}

void RTCQuicTransportStats::setPacketsDropped(uint64_t value) {
  packets_dropped_ = value;
  has_packets_dropped_ = true;
}

void RTCQuicTransportStats::setPacketsLost(uint64_t value) {
  packets_lost_ = value;
  has_packets_lost_ = true;
}

void RTCQuicTransportStats::setPacketsProcessed(uint64_t value) {
  packets_processed_ = value;
  has_packets_processed_ = true;
}

void RTCQuicTransportStats::setPacketsReceived(uint64_t value) {
  packets_received_ = value;
  has_packets_received_ = true;
}

void RTCQuicTransportStats::setPacketsReordered(uint64_t value) {
  packets_reordered_ = value;
  has_packets_reordered_ = true;
}

void RTCQuicTransportStats::setPacketsRetransmitted(uint64_t value) {
  packets_retransmitted_ = value;
  has_packets_retransmitted_ = true;
}

void RTCQuicTransportStats::setPacketsSent(uint64_t value) {
  packets_sent_ = value;
  has_packets_sent_ = true;
}

void RTCQuicTransportStats::setSmoothedRttUs(uint64_t value) {
  smoothed_rtt_us_ = value;
  has_smoothed_rtt_us_ = true;
}

void RTCQuicTransportStats::setStreamBytesReceived(uint64_t value) {
  stream_bytes_received_ = value;
  has_stream_bytes_received_ = true;
}

void RTCQuicTransportStats::setStreamBytesSent(uint64_t value) {
  stream_bytes_sent_ = value;
  has_stream_bytes_sent_ = true;
}

void RTCQuicTransportStats::setTimestamp(double value) {
  timestamp_ = value;
  has_timestamp_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_TRANSPORT_STATS_H_
