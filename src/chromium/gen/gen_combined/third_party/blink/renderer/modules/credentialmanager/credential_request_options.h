// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_REQUEST_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_request_options.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_request_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class AbortSignal;

class MODULES_EXPORT CredentialRequestOptions : public IDLDictionaryBase {
 public:
  static CredentialRequestOptions* Create() { return MakeGarbageCollected<CredentialRequestOptions>(); }

  CredentialRequestOptions();
  virtual ~CredentialRequestOptions();

  bool hasFederated() const { return federated_; }
  FederatedCredentialRequestOptions* federated() const {
    return federated_;
  }
  void setFederated(FederatedCredentialRequestOptions*);

  bool hasMediation() const { return !mediation_.IsNull(); }
  const String& mediation() const {
    return mediation_;
  }
  inline void setMediation(const String&);

  bool hasPassword() const { return has_password_; }
  bool password() const {
    DCHECK(has_password_);
    return password_;
  }
  inline void setPassword(bool);

  bool hasPublicKey() const { return public_key_; }
  PublicKeyCredentialRequestOptions* publicKey() const {
    return public_key_;
  }
  void setPublicKey(PublicKeyCredentialRequestOptions*);

  bool hasSignal() const { return signal_; }
  AbortSignal* signal() const {
    return signal_;
  }
  inline void setSignal(AbortSignal*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_password_ = false;

  Member<FederatedCredentialRequestOptions> federated_;
  String mediation_;
  bool password_;
  Member<PublicKeyCredentialRequestOptions> public_key_;
  Member<AbortSignal> signal_;

  friend class V8CredentialRequestOptions;
};

void CredentialRequestOptions::setMediation(const String& value) {
  mediation_ = value;
}

void CredentialRequestOptions::setPassword(bool value) {
  password_ = value;
  has_password_ = true;
}

void CredentialRequestOptions::setSignal(AbortSignal* value) {
  signal_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_REQUEST_OPTIONS_H_
