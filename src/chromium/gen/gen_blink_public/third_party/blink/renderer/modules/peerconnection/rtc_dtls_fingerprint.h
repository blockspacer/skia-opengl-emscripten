// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DTLS_FINGERPRINT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DTLS_FINGERPRINT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCDtlsFingerprint : public IDLDictionaryBase {
 public:
  static RTCDtlsFingerprint* Create() { return MakeGarbageCollected<RTCDtlsFingerprint>(); }

  RTCDtlsFingerprint();
  virtual ~RTCDtlsFingerprint();

  bool hasAlgorithm() const { return !algorithm_.IsNull(); }
  const String& algorithm() const {
    return algorithm_;
  }
  inline void setAlgorithm(const String&);

  bool hasValue() const { return !value_.IsNull(); }
  const String& value() const {
    return value_;
  }
  inline void setValue(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String algorithm_;
  String value_;

  friend class V8RTCDtlsFingerprint;
};

void RTCDtlsFingerprint::setAlgorithm(const String& value) {
  algorithm_ = value;
}

void RTCDtlsFingerprint::setValue(const String& value) {
  value_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_DTLS_FINGERPRINT_H_
