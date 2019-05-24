// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/credentialmanager/public_key_credential_descriptor.h"

namespace blink {

PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor() {
}

PublicKeyCredentialDescriptor::~PublicKeyCredentialDescriptor() = default;

void PublicKeyCredentialDescriptor::setId(const ArrayBufferOrArrayBufferView& value) {
  id_ = value;
}

void PublicKeyCredentialDescriptor::setTransports(const Vector<String>& value) {
  transports_ = value;
  has_transports_ = true;
}

void PublicKeyCredentialDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(id_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
