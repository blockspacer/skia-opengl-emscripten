// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_request_options.h"

namespace blink {

PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions() {
  setAllowCredentials(HeapVector<Member<PublicKeyCredentialDescriptor>>());
  setUserVerification("preferred");
}

PublicKeyCredentialRequestOptions::~PublicKeyCredentialRequestOptions() = default;

void PublicKeyCredentialRequestOptions::setAllowCredentials(const HeapVector<Member<PublicKeyCredentialDescriptor>>& value) {
  allow_credentials_ = value;
  has_allow_credentials_ = true;
}

void PublicKeyCredentialRequestOptions::setChallenge(const ArrayBufferOrArrayBufferView& value) {
  challenge_ = value;
}

void PublicKeyCredentialRequestOptions::setExtensions(AuthenticationExtensionsClientInputs* value) {
  extensions_ = value;
}

void PublicKeyCredentialRequestOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(allow_credentials_);
  visitor->Trace(challenge_);
  visitor->Trace(extensions_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
