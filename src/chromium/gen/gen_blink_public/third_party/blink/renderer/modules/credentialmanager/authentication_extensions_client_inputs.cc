// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/authentication_extensions_client_inputs.h"

namespace blink {

AuthenticationExtensionsClientInputs::AuthenticationExtensionsClientInputs() {
  setEnforceCredentialProtectionPolicy(false);
}

AuthenticationExtensionsClientInputs::~AuthenticationExtensionsClientInputs() = default;

void AuthenticationExtensionsClientInputs::setCableAuthentication(const HeapVector<Member<CableAuthenticationData>>& value) {
  cable_authentication_ = value;
  has_cable_authentication_ = true;
}

void AuthenticationExtensionsClientInputs::setCableRegistration(CableRegistrationData* value) {
  cable_registration_ = value;
}

void AuthenticationExtensionsClientInputs::Trace(blink::Visitor* visitor) {
  visitor->Trace(cable_authentication_);
  visitor->Trace(cable_registration_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
