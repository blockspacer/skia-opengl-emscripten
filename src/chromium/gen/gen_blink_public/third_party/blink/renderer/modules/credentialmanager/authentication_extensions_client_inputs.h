// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_INPUTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_INPUTS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/credentialmanager/cable_authentication_data.h"
#include "third_party/blink/renderer/modules/credentialmanager/cable_registration_data.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT AuthenticationExtensionsClientInputs : public IDLDictionaryBase {
 public:
  static AuthenticationExtensionsClientInputs* Create() { return MakeGarbageCollected<AuthenticationExtensionsClientInputs>(); }

  AuthenticationExtensionsClientInputs();
  virtual ~AuthenticationExtensionsClientInputs();

  bool hasAppid() const { return !appid_.IsNull(); }
  const String& appid() const {
    return appid_;
  }
  inline void setAppid(const String&);

  bool hasCableAuthentication() const { return has_cable_authentication_; }
  const HeapVector<Member<CableAuthenticationData>>& cableAuthentication() const {
    DCHECK(has_cable_authentication_);
    return cable_authentication_;
  }
  void setCableAuthentication(const HeapVector<Member<CableAuthenticationData>>&);

  bool hasCableRegistration() const { return cable_registration_; }
  CableRegistrationData* cableRegistration() const {
    return cable_registration_;
  }
  void setCableRegistration(CableRegistrationData*);

  bool hasCredentialProtectionPolicy() const { return !credential_protection_policy_.IsNull(); }
  const String& credentialProtectionPolicy() const {
    return credential_protection_policy_;
  }
  inline void setCredentialProtectionPolicy(const String&);

  bool hasEnforceCredentialProtectionPolicy() const { return has_enforce_credential_protection_policy_; }
  bool enforceCredentialProtectionPolicy() const {
    DCHECK(has_enforce_credential_protection_policy_);
    return enforce_credential_protection_policy_;
  }
  inline void setEnforceCredentialProtectionPolicy(bool);

  bool hasHmacCreateSecret() const { return has_hmac_create_secret_; }
  bool hmacCreateSecret() const {
    DCHECK(has_hmac_create_secret_);
    return hmac_create_secret_;
  }
  inline void setHmacCreateSecret(bool);

  bool hasUvm() const { return has_uvm_; }
  bool uvm() const {
    DCHECK(has_uvm_);
    return uvm_;
  }
  inline void setUvm(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_cable_authentication_ = false;
  bool has_enforce_credential_protection_policy_ = false;
  bool has_hmac_create_secret_ = false;
  bool has_uvm_ = false;

  String appid_;
  HeapVector<Member<CableAuthenticationData>> cable_authentication_;
  Member<CableRegistrationData> cable_registration_;
  String credential_protection_policy_;
  bool enforce_credential_protection_policy_;
  bool hmac_create_secret_;
  bool uvm_;

  friend class V8AuthenticationExtensionsClientInputs;
};

void AuthenticationExtensionsClientInputs::setAppid(const String& value) {
  appid_ = value;
}

void AuthenticationExtensionsClientInputs::setCredentialProtectionPolicy(const String& value) {
  credential_protection_policy_ = value;
}

void AuthenticationExtensionsClientInputs::setEnforceCredentialProtectionPolicy(bool value) {
  enforce_credential_protection_policy_ = value;
  has_enforce_credential_protection_policy_ = true;
}

void AuthenticationExtensionsClientInputs::setHmacCreateSecret(bool value) {
  hmac_create_secret_ = value;
  has_hmac_create_secret_ = true;
}

void AuthenticationExtensionsClientInputs::setUvm(bool value) {
  uvm_ = value;
  has_uvm_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_AUTHENTICATION_EXTENSIONS_CLIENT_INPUTS_H_
