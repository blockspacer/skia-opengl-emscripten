// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DATA_CHANNEL_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DATA_CHANNEL_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCDataChannelInit : public IDLDictionaryBase {
 public:
  static RTCDataChannelInit* Create() { return MakeGarbageCollected<RTCDataChannelInit>(); }

  RTCDataChannelInit();
  virtual ~RTCDataChannelInit();

  bool hasId() const { return has_id_; }
  uint16_t id() const {
    DCHECK(has_id_);
    return id_;
  }
  inline void setId(uint16_t);

  bool hasMaxPacketLifeTime() const { return has_max_packet_life_time_; }
  uint16_t maxPacketLifeTime() const {
    DCHECK(has_max_packet_life_time_);
    return max_packet_life_time_;
  }
  inline void setMaxPacketLifeTime(uint16_t);

  bool hasMaxRetransmitTime() const { return has_max_retransmit_time_; }
  uint16_t maxRetransmitTime() const {
    DCHECK(has_max_retransmit_time_);
    return max_retransmit_time_;
  }
  inline void setMaxRetransmitTime(uint16_t);

  bool hasMaxRetransmits() const { return has_max_retransmits_; }
  uint16_t maxRetransmits() const {
    DCHECK(has_max_retransmits_);
    return max_retransmits_;
  }
  inline void setMaxRetransmits(uint16_t);

  bool hasNegotiated() const { return has_negotiated_; }
  bool negotiated() const {
    DCHECK(has_negotiated_);
    return negotiated_;
  }
  inline void setNegotiated(bool);

  bool hasOrdered() const { return has_ordered_; }
  bool ordered() const {
    DCHECK(has_ordered_);
    return ordered_;
  }
  inline void setOrdered(bool);

  bool hasProtocol() const { return !protocol_.IsNull(); }
  const String& protocol() const {
    return protocol_;
  }
  inline void setProtocol(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_id_ = false;
  bool has_max_packet_life_time_ = false;
  bool has_max_retransmit_time_ = false;
  bool has_max_retransmits_ = false;
  bool has_negotiated_ = false;
  bool has_ordered_ = false;

  uint16_t id_;
  uint16_t max_packet_life_time_;
  uint16_t max_retransmit_time_;
  uint16_t max_retransmits_;
  bool negotiated_;
  bool ordered_;
  String protocol_;

  friend class V8RTCDataChannelInit;
};

void RTCDataChannelInit::setId(uint16_t value) {
  id_ = value;
  has_id_ = true;
}

void RTCDataChannelInit::setMaxPacketLifeTime(uint16_t value) {
  max_packet_life_time_ = value;
  has_max_packet_life_time_ = true;
}

void RTCDataChannelInit::setMaxRetransmitTime(uint16_t value) {
  max_retransmit_time_ = value;
  has_max_retransmit_time_ = true;
}

void RTCDataChannelInit::setMaxRetransmits(uint16_t value) {
  max_retransmits_ = value;
  has_max_retransmits_ = true;
}

void RTCDataChannelInit::setNegotiated(bool value) {
  negotiated_ = value;
  has_negotiated_ = true;
}

void RTCDataChannelInit::setOrdered(bool value) {
  ordered_ = value;
  has_ordered_ = true;
}

void RTCDataChannelInit::setProtocol(const String& value) {
  protocol_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DATA_CHANNEL_INIT_H_
