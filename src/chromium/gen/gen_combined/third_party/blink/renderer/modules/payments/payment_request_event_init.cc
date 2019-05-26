// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_request_event_init.h"

namespace blink {

PaymentRequestEventInit::PaymentRequestEventInit() {
}

PaymentRequestEventInit::~PaymentRequestEventInit() = default;

void PaymentRequestEventInit::setMethodData(const HeapVector<Member<PaymentMethodData>>& value) {
  method_data_ = value;
  has_method_data_ = true;
}

void PaymentRequestEventInit::setModifiers(const HeapVector<Member<PaymentDetailsModifier>>& value) {
  modifiers_ = value;
  has_modifiers_ = true;
}

void PaymentRequestEventInit::setTotal(PaymentCurrencyAmount* value) {
  total_ = value;
}

void PaymentRequestEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(method_data_);
  visitor->Trace(modifiers_);
  visitor->Trace(total_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
