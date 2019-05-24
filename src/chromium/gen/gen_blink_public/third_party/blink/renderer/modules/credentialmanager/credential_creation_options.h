// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_CREATION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_CREATION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/password_credential_data_or_html_form_element.h"
#include "third_party/blink/renderer/core/html/forms/html_form_element.h"
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_init.h"
#include "third_party/blink/renderer/modules/credentialmanager/password_credential_data.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_creation_options.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AbortSignal;

class MODULES_EXPORT CredentialCreationOptions : public IDLDictionaryBase {
 public:
  static CredentialCreationOptions* Create() { return MakeGarbageCollected<CredentialCreationOptions>(); }

  CredentialCreationOptions();
  virtual ~CredentialCreationOptions();

  bool hasFederated() const { return federated_; }
  FederatedCredentialInit* federated() const {
    return federated_;
  }
  void setFederated(FederatedCredentialInit*);

  bool hasPassword() const { return !password_.IsNull(); }
  const PasswordCredentialDataOrHTMLFormElement& password() const {
    return password_;
  }
  void setPassword(const PasswordCredentialDataOrHTMLFormElement&);

  bool hasPublicKey() const { return public_key_; }
  PublicKeyCredentialCreationOptions* publicKey() const {
    return public_key_;
  }
  void setPublicKey(PublicKeyCredentialCreationOptions*);

  bool hasSignal() const { return signal_; }
  AbortSignal* signal() const {
    return signal_;
  }
  inline void setSignal(AbortSignal*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<FederatedCredentialInit> federated_;
  PasswordCredentialDataOrHTMLFormElement password_;
  Member<PublicKeyCredentialCreationOptions> public_key_;
  Member<AbortSignal> signal_;

  friend class V8CredentialCreationOptions;
};

void CredentialCreationOptions::setSignal(AbortSignal* value) {
  signal_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_CREDENTIAL_CREATION_OPTIONS_H_
