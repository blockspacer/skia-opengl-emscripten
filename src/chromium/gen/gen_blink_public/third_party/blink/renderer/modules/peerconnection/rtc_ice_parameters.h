// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCIceParameters : public IDLDictionaryBase {
 public:
  static RTCIceParameters* Create() { return MakeGarbageCollected<RTCIceParameters>(); }

  RTCIceParameters();
  virtual ~RTCIceParameters();

  bool hasPassword() const { return !password_.IsNull(); }
  const String& password() const {
    return password_;
  }
  inline void setPassword(const String&);

  bool hasUsernameFragment() const { return !username_fragment_.IsNull(); }
  const String& usernameFragment() const {
    return username_fragment_;
  }
  inline void setUsernameFragment(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String password_;
  String username_fragment_;

  friend class V8RTCIceParameters;
};

void RTCIceParameters::setPassword(const String& value) {
  password_ = value;
}

void RTCIceParameters::setUsernameFragment(const String& value) {
  username_fragment_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_ICE_PARAMETERS_H_
