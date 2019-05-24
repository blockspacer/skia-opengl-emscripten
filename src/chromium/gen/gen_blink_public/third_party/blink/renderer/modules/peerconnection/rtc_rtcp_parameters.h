// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTCP_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTCP_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCRtcpParameters : public IDLDictionaryBase {
 public:
  static RTCRtcpParameters* Create() { return MakeGarbageCollected<RTCRtcpParameters>(); }

  RTCRtcpParameters();
  virtual ~RTCRtcpParameters();

  bool hasCname() const { return !cname_.IsNull(); }
  const String& cname() const {
    return cname_;
  }
  inline void setCname(const String&);

  bool hasReducedSize() const { return has_reduced_size_; }
  bool reducedSize() const {
    DCHECK(has_reduced_size_);
    return reduced_size_;
  }
  inline void setReducedSize(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_reduced_size_ = false;

  String cname_;
  bool reduced_size_;

  friend class V8RTCRtcpParameters;
};

void RTCRtcpParameters::setCname(const String& value) {
  cname_ = value;
}

void RTCRtcpParameters::setReducedSize(bool value) {
  reduced_size_ = value;
  has_reduced_size_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTCP_PARAMETERS_H_
