// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_CREATION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_CREATION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/credentialmanager/authentication_extensions_client_inputs.h"
#include "third_party/blink/renderer/modules/credentialmanager/authenticator_selection_criteria.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_descriptor.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_parameters.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_rp_entity.h"
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_user_entity.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialCreationOptions : public IDLDictionaryBase {
 public:
  static PublicKeyCredentialCreationOptions* Create() { return MakeGarbageCollected<PublicKeyCredentialCreationOptions>(); }

  PublicKeyCredentialCreationOptions();
  virtual ~PublicKeyCredentialCreationOptions();

  bool hasAttestation() const { return !attestation_.IsNull(); }
  const String& attestation() const {
    return attestation_;
  }
  inline void setAttestation(const String&);

  bool hasAuthenticatorSelection() const { return authenticator_selection_; }
  AuthenticatorSelectionCriteria* authenticatorSelection() const {
    return authenticator_selection_;
  }
  void setAuthenticatorSelection(AuthenticatorSelectionCriteria*);

  bool hasChallenge() const { return !challenge_.IsNull(); }
  const ArrayBufferOrArrayBufferView& challenge() const {
    return challenge_;
  }
  void setChallenge(const ArrayBufferOrArrayBufferView&);

  bool hasExcludeCredentials() const { return has_exclude_credentials_; }
  const HeapVector<Member<PublicKeyCredentialDescriptor>>& excludeCredentials() const {
    DCHECK(has_exclude_credentials_);
    return exclude_credentials_;
  }
  void setExcludeCredentials(const HeapVector<Member<PublicKeyCredentialDescriptor>>&);

  bool hasExtensions() const { return extensions_; }
  AuthenticationExtensionsClientInputs* extensions() const {
    return extensions_;
  }
  void setExtensions(AuthenticationExtensionsClientInputs*);

  bool hasPubKeyCredParams() const { return has_pub_key_cred_params_; }
  const HeapVector<Member<PublicKeyCredentialParameters>>& pubKeyCredParams() const {
    DCHECK(has_pub_key_cred_params_);
    return pub_key_cred_params_;
  }
  void setPubKeyCredParams(const HeapVector<Member<PublicKeyCredentialParameters>>&);

  bool hasRp() const { return rp_; }
  PublicKeyCredentialRpEntity* rp() const {
    return rp_;
  }
  void setRp(PublicKeyCredentialRpEntity*);

  bool hasTimeout() const { return has_timeout_; }
  uint32_t timeout() const {
    DCHECK(has_timeout_);
    return timeout_;
  }
  inline void setTimeout(uint32_t);

  bool hasUser() const { return user_; }
  PublicKeyCredentialUserEntity* user() const {
    return user_;
  }
  void setUser(PublicKeyCredentialUserEntity*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exclude_credentials_ = false;
  bool has_pub_key_cred_params_ = false;
  bool has_timeout_ = false;

  String attestation_;
  Member<AuthenticatorSelectionCriteria> authenticator_selection_;
  ArrayBufferOrArrayBufferView challenge_;
  HeapVector<Member<PublicKeyCredentialDescriptor>> exclude_credentials_;
  Member<AuthenticationExtensionsClientInputs> extensions_;
  HeapVector<Member<PublicKeyCredentialParameters>> pub_key_cred_params_;
  Member<PublicKeyCredentialRpEntity> rp_;
  uint32_t timeout_;
  Member<PublicKeyCredentialUserEntity> user_;

  friend class V8PublicKeyCredentialCreationOptions;
};

void PublicKeyCredentialCreationOptions::setAttestation(const String& value) {
  attestation_ = value;
}

void PublicKeyCredentialCreationOptions::setTimeout(uint32_t value) {
  timeout_ = value;
  has_timeout_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CREDENTIALMANAGER_PUBLIC_KEY_CREDENTIAL_CREATION_OPTIONS_H_
