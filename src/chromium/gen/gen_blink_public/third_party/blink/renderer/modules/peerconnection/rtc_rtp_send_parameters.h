// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_SEND_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_SEND_PARAMETERS_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_encoding_parameters.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCRtpSendParameters : public RTCRtpParameters {
 public:
  static RTCRtpSendParameters* Create() { return MakeGarbageCollected<RTCRtpSendParameters>(); }

  RTCRtpSendParameters();
  virtual ~RTCRtpSendParameters();

  bool hasEncodings() const { return has_encodings_; }
  const HeapVector<Member<RTCRtpEncodingParameters>>& encodings() const {
    DCHECK(has_encodings_);
    return encodings_;
  }
  void setEncodings(const HeapVector<Member<RTCRtpEncodingParameters>>&);

  bool hasTransactionId() const { return !transaction_id_.IsNull(); }
  const String& transactionId() const {
    return transaction_id_;
  }
  inline void setTransactionId(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_encodings_ = false;

  HeapVector<Member<RTCRtpEncodingParameters>> encodings_;
  String transaction_id_;

  friend class V8RTCRtpSendParameters;
};

void RTCRtpSendParameters::setTransactionId(const String& value) {
  transaction_id_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_SEND_PARAMETERS_H_
