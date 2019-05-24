// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_method_change_event_init.h"

namespace blink {

PaymentMethodChangeEventInit::PaymentMethodChangeEventInit() {
  setMethodName(WTF::g_empty_string);
}

PaymentMethodChangeEventInit::~PaymentMethodChangeEventInit() = default;

void PaymentMethodChangeEventInit::setMethodDetails(ScriptValue value) {
  method_details_ = value;
}

void PaymentMethodChangeEventInit::setMethodDetailsToNull() {
  method_details_ = ScriptValue();
}

void PaymentMethodChangeEventInit::Trace(blink::Visitor* visitor) {
  PaymentRequestUpdateEventInit::Trace(visitor);
}

}  // namespace blink
