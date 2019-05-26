// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtcp_parameters.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_codec_parameters.h"
#include "third_party/blink/renderer/modules/peerconnection/rtc_rtp_header_extension_parameters.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT RTCRtpParameters : public IDLDictionaryBase {
 public:
  static RTCRtpParameters* Create() { return MakeGarbageCollected<RTCRtpParameters>(); }

  RTCRtpParameters();
  virtual ~RTCRtpParameters();

  bool hasCodecs() const { return has_codecs_; }
  const HeapVector<Member<RTCRtpCodecParameters>>& codecs() const {
    DCHECK(has_codecs_);
    return codecs_;
  }
  void setCodecs(const HeapVector<Member<RTCRtpCodecParameters>>&);

  bool hasHeaderExtensions() const { return has_header_extensions_; }
  const HeapVector<Member<RTCRtpHeaderExtensionParameters>>& headerExtensions() const {
    DCHECK(has_header_extensions_);
    return header_extensions_;
  }
  void setHeaderExtensions(const HeapVector<Member<RTCRtpHeaderExtensionParameters>>&);

  bool hasRtcp() const { return rtcp_; }
  RTCRtcpParameters* rtcp() const {
    return rtcp_;
  }
  void setRtcp(RTCRtcpParameters*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_codecs_ = false;
  bool has_header_extensions_ = false;

  HeapVector<Member<RTCRtpCodecParameters>> codecs_;
  HeapVector<Member<RTCRtpHeaderExtensionParameters>> header_extensions_;
  Member<RTCRtcpParameters> rtcp_;

  friend class V8RTCRtpParameters;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_PARAMETERS_H_
