// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_ENCODING_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_ENCODING_PARAMETERS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_coding_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCRtpEncodingParameters : public RTCRtpCodingParameters {
 public:
  static RTCRtpEncodingParameters* Create() { return MakeGarbageCollected<RTCRtpEncodingParameters>(); }

  RTCRtpEncodingParameters();
  virtual ~RTCRtpEncodingParameters();

  bool hasActive() const { return has_active_; }
  bool active() const {
    DCHECK(has_active_);
    return active_;
  }
  inline void setActive(bool);

  bool hasMaxBitrate() const { return has_max_bitrate_; }
  uint32_t maxBitrate() const {
    DCHECK(has_max_bitrate_);
    return max_bitrate_;
  }
  inline void setMaxBitrate(uint32_t);

  bool hasNetworkPriority() const { return !network_priority_.IsNull(); }
  const String& networkPriority() const {
    return network_priority_;
  }
  inline void setNetworkPriority(const String&);

  bool hasPriority() const { return !priority_.IsNull(); }
  const String& priority() const {
    return priority_;
  }
  inline void setPriority(const String&);

  bool hasScaleResolutionDownBy() const { return has_scale_resolution_down_by_; }
  double scaleResolutionDownBy() const {
    DCHECK(has_scale_resolution_down_by_);
    return scale_resolution_down_by_;
  }
  inline void setScaleResolutionDownBy(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_active_ = false;
  bool has_max_bitrate_ = false;
  bool has_scale_resolution_down_by_ = false;

  bool active_;
  uint32_t max_bitrate_;
  String network_priority_;
  String priority_;
  double scale_resolution_down_by_;

  friend class V8RTCRtpEncodingParameters;
};

void RTCRtpEncodingParameters::setActive(bool value) {
  active_ = value;
  has_active_ = true;
}

void RTCRtpEncodingParameters::setMaxBitrate(uint32_t value) {
  max_bitrate_ = value;
  has_max_bitrate_ = true;
}

void RTCRtpEncodingParameters::setNetworkPriority(const String& value) {
  network_priority_ = value;
}

void RTCRtpEncodingParameters::setPriority(const String& value) {
  priority_ = value;
}

void RTCRtpEncodingParameters::setScaleResolutionDownBy(double value) {
  scale_resolution_down_by_ = value;
  has_scale_resolution_down_by_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_ENCODING_PARAMETERS_H_
