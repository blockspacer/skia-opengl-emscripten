// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/payments/payment_details_base.h"

namespace blink {

PaymentDetailsBase::PaymentDetailsBase() {
}

PaymentDetailsBase::~PaymentDetailsBase() = default;

void PaymentDetailsBase::setDisplayItems(const HeapVector<Member<PaymentItem>>& value) {
  display_items_ = value;
  has_display_items_ = true;
}

void PaymentDetailsBase::setModifiers(const HeapVector<Member<PaymentDetailsModifier>>& value) {
  modifiers_ = value;
  has_modifiers_ = true;
}

void PaymentDetailsBase::setShippingOptions(const HeapVector<Member<PaymentShippingOption>>& value) {
  shipping_options_ = value;
  has_shipping_options_ = true;
}

void PaymentDetailsBase::Trace(blink::Visitor* visitor) {
  visitor->Trace(display_items_);
  visitor->Trace(modifiers_);
  visitor->Trace(shipping_options_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
