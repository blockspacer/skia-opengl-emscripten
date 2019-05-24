// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CODEC_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CODEC_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCRtpCodecParameters : public IDLDictionaryBase {
 public:
  static RTCRtpCodecParameters* Create() { return MakeGarbageCollected<RTCRtpCodecParameters>(); }

  RTCRtpCodecParameters();
  virtual ~RTCRtpCodecParameters();

  bool hasChannels() const { return has_channels_; }
  uint16_t channels() const {
    DCHECK(has_channels_);
    return channels_;
  }
  inline void setChannels(uint16_t);

  bool hasClockRate() const { return has_clock_rate_; }
  uint32_t clockRate() const {
    DCHECK(has_clock_rate_);
    return clock_rate_;
  }
  inline void setClockRate(uint32_t);

  bool hasMimeType() const { return !mime_type_.IsNull(); }
  const String& mimeType() const {
    return mime_type_;
  }
  inline void setMimeType(const String&);

  bool hasPayloadType() const { return has_payload_type_; }
  uint8_t payloadType() const {
    DCHECK(has_payload_type_);
    return payload_type_;
  }
  inline void setPayloadType(uint8_t);

  bool hasSdpFmtpLine() const { return !sdp_fmtp_line_.IsNull(); }
  const String& sdpFmtpLine() const {
    return sdp_fmtp_line_;
  }
  inline void setSdpFmtpLine(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_channels_ = false;
  bool has_clock_rate_ = false;
  bool has_payload_type_ = false;

  uint16_t channels_;
  uint32_t clock_rate_;
  String mime_type_;
  uint8_t payload_type_;
  String sdp_fmtp_line_;

  friend class V8RTCRtpCodecParameters;
};

void RTCRtpCodecParameters::setChannels(uint16_t value) {
  channels_ = value;
  has_channels_ = true;
}

void RTCRtpCodecParameters::setClockRate(uint32_t value) {
  clock_rate_ = value;
  has_clock_rate_ = true;
}

void RTCRtpCodecParameters::setMimeType(const String& value) {
  mime_type_ = value;
}

void RTCRtpCodecParameters::setPayloadType(uint8_t value) {
  payload_type_ = value;
  has_payload_type_ = true;
}

void RTCRtpCodecParameters::setSdpFmtpLine(const String& value) {
  sdp_fmtp_line_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_CODEC_PARAMETERS_H_
