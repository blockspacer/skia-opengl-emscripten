// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/can_make_payment_event_init.h"

namespace blink {

CanMakePaymentEventInit::CanMakePaymentEventInit() {
}

CanMakePaymentEventInit::~CanMakePaymentEventInit() = default;

void CanMakePaymentEventInit::setMethodData(const HeapVector<Member<PaymentMethodData>>& value) {
  method_data_ = value;
  has_method_data_ = true;
}

void CanMakePaymentEventInit::setModifiers(const HeapVector<Member<PaymentDetailsModifier>>& value) {
  modifiers_ = value;
  has_modifiers_ = true;
}

void CanMakePaymentEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(method_data_);
  visitor->Trace(modifiers_);
  ExtendableEventInit::Trace(visitor);
}

}  // namespace blink
