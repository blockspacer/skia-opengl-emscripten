// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_TRANSCEIVER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_TRANSCEIVER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_encoding_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MediaStream;

class MODULES_EXPORT RTCRtpTransceiverInit : public IDLDictionaryBase {
 public:
  static RTCRtpTransceiverInit* Create() { return MakeGarbageCollected<RTCRtpTransceiverInit>(); }

  RTCRtpTransceiverInit();
  virtual ~RTCRtpTransceiverInit();

  bool hasDirection() const { return !direction_.IsNull(); }
  const String& direction() const {
    return direction_;
  }
  inline void setDirection(const String&);

  bool hasSendEncodings() const { return has_send_encodings_; }
  const HeapVector<Member<RTCRtpEncodingParameters>>& sendEncodings() const {
    DCHECK(has_send_encodings_);
    return send_encodings_;
  }
  void setSendEncodings(const HeapVector<Member<RTCRtpEncodingParameters>>&);

  bool hasStreams() const { return has_streams_; }
  const HeapVector<Member<MediaStream>>& streams() const {
    DCHECK(has_streams_);
    return streams_;
  }
  void setStreams(const HeapVector<Member<MediaStream>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_send_encodings_ = false;
  bool has_streams_ = false;

  String direction_;
  HeapVector<Member<RTCRtpEncodingParameters>> send_encodings_;
  HeapVector<Member<MediaStream>> streams_;

  friend class V8RTCRtpTransceiverInit;
};

void RTCRtpTransceiverInit::setDirection(const String& value) {
  direction_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_TRANSCEIVER_INIT_H_
