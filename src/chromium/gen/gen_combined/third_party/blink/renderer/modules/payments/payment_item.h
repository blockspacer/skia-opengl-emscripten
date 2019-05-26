// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_ITEM_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_ITEM_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/payment_currency_amount.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentItem : public IDLDictionaryBase {
 public:
  static PaymentItem* Create() { return MakeGarbageCollected<PaymentItem>(); }

  PaymentItem();
  virtual ~PaymentItem();

  bool hasAmount() const { return amount_; }
  PaymentCurrencyAmount* amount() const {
    return amount_;
  }
  void setAmount(PaymentCurrencyAmount*);

  bool hasLabel() const { return !label_.IsNull(); }
  const String& label() const {
    return label_;
  }
  inline void setLabel(const String&);

  bool hasPending() const { return has_pending_; }
  bool pending() const {
    DCHECK(has_pending_);
    return pending_;
  }
  inline void setPending(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_pending_ = false;

  Member<PaymentCurrencyAmount> amount_;
  String label_;
  bool pending_;

  friend class V8PaymentItem;
};

void PaymentItem::setLabel(const String& value) {
  label_ = value;
}

void PaymentItem::setPending(bool value) {
  pending_ = value;
  has_pending_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_ITEM_H_
