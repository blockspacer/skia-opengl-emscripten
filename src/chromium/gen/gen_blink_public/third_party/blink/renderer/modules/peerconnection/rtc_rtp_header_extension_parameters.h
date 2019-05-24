// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_HEADER_EXTENSION_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_HEADER_EXTENSION_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT RTCRtpHeaderExtensionParameters : public IDLDictionaryBase {
 public:
  static RTCRtpHeaderExtensionParameters* Create() { return MakeGarbageCollected<RTCRtpHeaderExtensionParameters>(); }

  RTCRtpHeaderExtensionParameters();
  virtual ~RTCRtpHeaderExtensionParameters();

  bool hasEncrypted() const { return has_encrypted_; }
  bool encrypted() const {
    DCHECK(has_encrypted_);
    return encrypted_;
  }
  inline void setEncrypted(bool);

  bool hasId() const { return has_id_; }
  uint16_t id() const {
    DCHECK(has_id_);
    return id_;
  }
  inline void setId(uint16_t);

  bool hasUri() const { return !uri_.IsNull(); }
  const String& uri() const {
    return uri_;
  }
  inline void setUri(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_encrypted_ = false;
  bool has_id_ = false;

  bool encrypted_;
  uint16_t id_;
  String uri_;

  friend class V8RTCRtpHeaderExtensionParameters;
};

void RTCRtpHeaderExtensionParameters::setEncrypted(bool value) {
  encrypted_ = value;
  has_encrypted_ = true;
}

void RTCRtpHeaderExtensionParameters::setId(uint16_t value) {
  id_ = value;
  has_id_ = true;
}

void RTCRtpHeaderExtensionParameters::setUri(const String& value) {
  uri_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_RTP_HEADER_EXTENSION_PARAMETERS_H_
