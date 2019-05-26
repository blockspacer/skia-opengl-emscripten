// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_creation_options.h"

namespace blink {

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions() {
  setExcludeCredentials(HeapVector<Member<PublicKeyCredentialDescriptor>>());
}

PublicKeyCredentialCreationOptions::~PublicKeyCredentialCreationOptions() = default;

void PublicKeyCredentialCreationOptions::setAuthenticatorSelection(AuthenticatorSelectionCriteria* value) {
  authenticator_selection_ = value;
}

void PublicKeyCredentialCreationOptions::setChallenge(const ArrayBufferOrArrayBufferView& value) {
  challenge_ = value;
}

void PublicKeyCredentialCreationOptions::setExcludeCredentials(const HeapVector<Member<PublicKeyCredentialDescriptor>>& value) {
  exclude_credentials_ = value;
  has_exclude_credentials_ = true;
}

void PublicKeyCredentialCreationOptions::setExtensions(AuthenticationExtensionsClientInputs* value) {
  extensions_ = value;
}

void PublicKeyCredentialCreationOptions::setPubKeyCredParams(const HeapVector<Member<PublicKeyCredentialParameters>>& value) {
  pub_key_cred_params_ = value;
  has_pub_key_cred_params_ = true;
}

void PublicKeyCredentialCreationOptions::setRp(PublicKeyCredentialRpEntity* value) {
  rp_ = value;
}

void PublicKeyCredentialCreationOptions::setUser(PublicKeyCredentialUserEntity* value) {
  user_ = value;
}

void PublicKeyCredentialCreationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(authenticator_selection_);
  visitor->Trace(challenge_);
  visitor->Trace(exclude_credentials_);
  visitor->Trace(extensions_);
  visitor->Trace(pub_key_cred_params_);
  visitor->Trace(rp_);
  visitor->Trace(user_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
