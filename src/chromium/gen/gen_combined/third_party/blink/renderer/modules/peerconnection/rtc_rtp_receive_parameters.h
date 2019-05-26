// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_RECEIVE_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_RECEIVE_PARAMETERS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_decoding_parameters.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCRtpReceiveParameters : public RTCRtpParameters {
 public:
  static RTCRtpReceiveParameters* Create() { return MakeGarbageCollected<RTCRtpReceiveParameters>(); }

  RTCRtpReceiveParameters();
  virtual ~RTCRtpReceiveParameters();

  bool hasEncodings() const { return has_encodings_; }
  const HeapVector<Member<RTCRtpDecodingParameters>>& encodings() const {
    DCHECK(has_encodings_);
    return encodings_;
  }
  void setEncodings(const HeapVector<Member<RTCRtpDecodingParameters>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_encodings_ = false;

  HeapVector<Member<RTCRtpDecodingParameters>> encodings_;

  friend class V8RTCRtpReceiveParameters;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_RECEIVE_PARAMETERS_H_
