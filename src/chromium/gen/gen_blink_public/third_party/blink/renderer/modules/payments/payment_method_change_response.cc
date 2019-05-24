// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_method_change_response.h"

namespace blink {

PaymentMethodChangeResponse::PaymentMethodChangeResponse() {
}

PaymentMethodChangeResponse::~PaymentMethodChangeResponse() = default;

void PaymentMethodChangeResponse::setModifiers(const HeapVector<Member<PaymentDetailsModifier>>& value) {
  modifiers_ = value;
  has_modifiers_ = true;
}

void PaymentMethodChangeResponse::setPaymentMethodErrors(ScriptValue value) {
  payment_method_errors_ = value;
}

void PaymentMethodChangeResponse::setTotal(PaymentCurrencyAmount* value) {
  total_ = value;
}

void PaymentMethodChangeResponse::Trace(blink::Visitor* visitor) {
  visitor->Trace(modifiers_);
  visitor->Trace(total_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
