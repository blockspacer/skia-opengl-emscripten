// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/cable_registration_data.h"

namespace blink {

CableRegistrationData::CableRegistrationData() {
}

CableRegistrationData::~CableRegistrationData() = default;

void CableRegistrationData::setRpPublicKey(const ArrayBufferOrArrayBufferView& value) {
  rp_public_key_ = value;
}

void CableRegistrationData::setVersions(const Vector<uint8_t>& value) {
  versions_ = value;
  has_versions_ = true;
}

void CableRegistrationData::Trace(blink::Visitor* visitor) {
  visitor->Trace(rp_public_key_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
