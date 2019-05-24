// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_VALIDATION_ERRORS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_VALIDATION_ERRORS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/address_errors.h"
#include "third_party/blink/renderer/modules/payments/payer_errors.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentValidationErrors : public IDLDictionaryBase {
 public:
  static PaymentValidationErrors* Create() { return MakeGarbageCollected<PaymentValidationErrors>(); }

  PaymentValidationErrors();
  virtual ~PaymentValidationErrors();

  bool hasError() const { return !error_.IsNull(); }
  const String& error() const {
    return error_;
  }
  inline void setError(const String&);

  bool hasPayer() const { return payer_; }
  PayerErrors* payer() const {
    return payer_;
  }
  void setPayer(PayerErrors*);

  bool hasShippingAddress() const { return shipping_address_; }
  AddressErrors* shippingAddress() const {
    return shipping_address_;
  }
  void setShippingAddress(AddressErrors*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String error_;
  Member<PayerErrors> payer_;
  Member<AddressErrors> shipping_address_;

  friend class V8PaymentValidationErrors;
};

void PaymentValidationErrors::setError(const String& value) {
  error_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_VALIDATION_ERRORS_H_
