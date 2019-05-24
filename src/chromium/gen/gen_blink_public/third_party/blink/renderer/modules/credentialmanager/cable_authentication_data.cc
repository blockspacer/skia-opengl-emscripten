// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/cable_authentication_data.h"

namespace blink {

CableAuthenticationData::CableAuthenticationData() {
}

CableAuthenticationData::~CableAuthenticationData() = default;

void CableAuthenticationData::setAuthenticatorEid(const ArrayBufferOrArrayBufferView& value) {
  authenticator_eid_ = value;
}

void CableAuthenticationData::setClientEid(const ArrayBufferOrArrayBufferView& value) {
  client_eid_ = value;
}

void CableAuthenticationData::setSessionPreKey(const ArrayBufferOrArrayBufferView& value) {
  session_pre_key_ = value;
}

void CableAuthenticationData::Trace(blink::Visitor* visitor) {
  visitor->Trace(authenticator_eid_);
  visitor->Trace(client_eid_);
  visitor->Trace(session_pre_key_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
