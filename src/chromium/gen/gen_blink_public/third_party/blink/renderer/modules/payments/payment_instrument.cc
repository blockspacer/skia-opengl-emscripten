// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_instrument.h"

namespace blink {

PaymentInstrument::PaymentInstrument() {
}

PaymentInstrument::~PaymentInstrument() = default;

void PaymentInstrument::setCapabilities(ScriptValue value) {
  capabilities_ = value;
}

void PaymentInstrument::setIcons(const HeapVector<Member<ImageObject>>& value) {
  icons_ = value;
  has_icons_ = true;
}

void PaymentInstrument::Trace(blink::Visitor* visitor) {
  visitor->Trace(icons_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
