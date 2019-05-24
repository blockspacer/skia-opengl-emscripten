// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_SHIPPING_OPTION_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_SHIPPING_OPTION_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_currency_amount.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentShippingOption : public IDLDictionaryBase {
 public:
  static PaymentShippingOption* Create() { return MakeGarbageCollected<PaymentShippingOption>(); }

  PaymentShippingOption();
  virtual ~PaymentShippingOption();

  bool hasAmount() const { return amount_; }
  PaymentCurrencyAmount* amount() const {
    return amount_;
  }
  void setAmount(PaymentCurrencyAmount*);

  bool hasId() const { return !id_.IsNull(); }
  const String& id() const {
    return id_;
  }
  inline void setId(const String&);

  bool hasLabel() const { return !label_.IsNull(); }
  const String& label() const {
    return label_;
  }
  inline void setLabel(const String&);

  bool hasSelected() const { return has_selected_; }
  bool selected() const {
    DCHECK(has_selected_);
    return selected_;
  }
  inline void setSelected(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_selected_ = false;

  Member<PaymentCurrencyAmount> amount_;
  String id_;
  String label_;
  bool selected_;

  friend class V8PaymentShippingOption;
};

void PaymentShippingOption::setId(const String& value) {
  id_ = value;
}

void PaymentShippingOption::setLabel(const String& value) {
  label_ = value;
}

void PaymentShippingOption::setSelected(bool value) {
  selected_ = value;
  has_selected_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_SHIPPING_OPTION_H_
