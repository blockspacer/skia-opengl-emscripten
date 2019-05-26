// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/basic_card_request.h"

namespace blink {

BasicCardRequest::BasicCardRequest() {
}

BasicCardRequest::~BasicCardRequest() = default;

void BasicCardRequest::setSupportedNetworks(const Vector<String>& value) {
  supported_networks_ = value;
  has_supported_networks_ = true;
}

void BasicCardRequest::setSupportedTypes(const Vector<String>& value) {
  supported_types_ = value;
  has_supported_types_ = true;
}

void BasicCardRequest::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
