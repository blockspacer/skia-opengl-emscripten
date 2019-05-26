// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialParameters : public IDLDictionaryBase {
 public:
  static PublicKeyCredentialParameters* Create() { return MakeGarbageCollected<PublicKeyCredentialParameters>(); }

  PublicKeyCredentialParameters();
  virtual ~PublicKeyCredentialParameters();

  bool hasAlg() const { return has_alg_; }
  int32_t alg() const {
    DCHECK(has_alg_);
    return alg_;
  }
  inline void setAlg(int32_t);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alg_ = false;

  int32_t alg_;
  String type_;

  friend class V8PublicKeyCredentialParameters;
};

void PublicKeyCredentialParameters::setAlg(int32_t value) {
  alg_ = value;
  has_alg_ = true;
}

void PublicKeyCredentialParameters::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_PARAMETERS_H_
