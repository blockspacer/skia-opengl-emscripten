// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_UPDATE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_UPDATE_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/address_errors.h"
#include "third_party/blink/renderer/modules/payments/payment_details_base.h"
#include "third_party/blink/renderer/modules/payments/payment_item.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentDetailsUpdate : public PaymentDetailsBase {
 public:
  static PaymentDetailsUpdate* Create() { return MakeGarbageCollected<PaymentDetailsUpdate>(); }

  PaymentDetailsUpdate();
  virtual ~PaymentDetailsUpdate();

  bool hasError() const { return !error_.IsNull(); }
  const String& error() const {
    return error_;
  }
  inline void setError(const String&);

  bool hasPaymentMethodErrors() const { return !(payment_method_errors_.IsEmpty() || payment_method_errors_.IsNull() || payment_method_errors_.IsUndefined()); }
  ScriptValue paymentMethodErrors() const {
    return payment_method_errors_;
  }
  void setPaymentMethodErrors(ScriptValue);

  bool hasShippingAddressErrors() const { return shipping_address_errors_; }
  AddressErrors* shippingAddressErrors() const {
    return shipping_address_errors_;
  }
  void setShippingAddressErrors(AddressErrors*);

  bool hasTotal() const { return total_; }
  PaymentItem* total() const {
    return total_;
  }
  void setTotal(PaymentItem*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String error_;
  ScriptValue payment_method_errors_;
  Member<AddressErrors> shipping_address_errors_;
  Member<PaymentItem> total_;

  friend class V8PaymentDetailsUpdate;
};

void PaymentDetailsUpdate::setError(const String& value) {
  error_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_DETAILS_UPDATE_H_
