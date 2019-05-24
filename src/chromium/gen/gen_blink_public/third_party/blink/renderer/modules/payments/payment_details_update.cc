// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_details_update.h"

namespace blink {

PaymentDetailsUpdate::PaymentDetailsUpdate() {
}

PaymentDetailsUpdate::~PaymentDetailsUpdate() = default;

void PaymentDetailsUpdate::setPaymentMethodErrors(ScriptValue value) {
  payment_method_errors_ = value;
}

void PaymentDetailsUpdate::setShippingAddressErrors(AddressErrors* value) {
  shipping_address_errors_ = value;
}

void PaymentDetailsUpdate::setTotal(PaymentItem* value) {
  total_ = value;
}

void PaymentDetailsUpdate::Trace(blink::Visitor* visitor) {
  visitor->Trace(shipping_address_errors_);
  visitor->Trace(total_);
  PaymentDetailsBase::Trace(visitor);
}

}  // namespace blink
