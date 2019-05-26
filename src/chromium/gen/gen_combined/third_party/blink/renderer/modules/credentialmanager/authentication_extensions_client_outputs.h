// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_OUTPUTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_OUTPUTS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT AuthenticationExtensionsClientOutputs : public IDLDictionaryBase {
 public:
  static AuthenticationExtensionsClientOutputs* Create() { return MakeGarbageCollected<AuthenticationExtensionsClientOutputs>(); }

  AuthenticationExtensionsClientOutputs();
  virtual ~AuthenticationExtensionsClientOutputs();

  bool hasAppid() const { return has_appid_; }
  bool appid() const {
    DCHECK(has_appid_);
    return appid_;
  }
  inline void setAppid(bool);

  bool hasHmacCreateSecret() const { return has_hmac_create_secret_; }
  bool hmacCreateSecret() const {
    DCHECK(has_hmac_create_secret_);
    return hmac_create_secret_;
  }
  inline void setHmacCreateSecret(bool);

  bool hasUvm() const { return has_uvm_; }
  const Vector<Vector<uint32_t>>& uvm() const {
    DCHECK(has_uvm_);
    return uvm_;
  }
  void setUvm(const Vector<Vector<uint32_t>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_appid_ = false;
  bool has_hmac_create_secret_ = false;
  bool has_uvm_ = false;

  bool appid_;
  bool hmac_create_secret_;
  Vector<Vector<uint32_t>> uvm_;

  friend class V8AuthenticationExtensionsClientOutputs;
};

void AuthenticationExtensionsClientOutputs::setAppid(bool value) {
  appid_ = value;
  has_appid_ = true;
}

void AuthenticationExtensionsClientOutputs::setHmacCreateSecret(bool value) {
  hmac_create_secret_ = value;
  has_hmac_create_secret_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_OUTPUTS_H_
