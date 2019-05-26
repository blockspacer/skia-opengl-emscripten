// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/federated_credential_request_options.h"

namespace blink {

FederatedCredentialRequestOptions::FederatedCredentialRequestOptions() {
}

FederatedCredentialRequestOptions::~FederatedCredentialRequestOptions() = default;

void FederatedCredentialRequestOptions::setProtocols(const Vector<String>& value) {
  protocols_ = value;
  has_protocols_ = true;
}

void FederatedCredentialRequestOptions::setProviders(const Vector<String>& value) {
  providers_ = value;
  has_providers_ = true;
}

void FederatedCredentialRequestOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
