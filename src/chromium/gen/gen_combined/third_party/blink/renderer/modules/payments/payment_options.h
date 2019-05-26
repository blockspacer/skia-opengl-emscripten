// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT PaymentOptions : public IDLDictionaryBase {
 public:
  static PaymentOptions* Create() { return MakeGarbageCollected<PaymentOptions>(); }

  PaymentOptions();
  virtual ~PaymentOptions();

  bool hasRequestPayerEmail() const { return has_request_payer_email_; }
  bool requestPayerEmail() const {
    DCHECK(has_request_payer_email_);
    return request_payer_email_;
  }
  inline void setRequestPayerEmail(bool);

  bool hasRequestPayerName() const { return has_request_payer_name_; }
  bool requestPayerName() const {
    DCHECK(has_request_payer_name_);
    return request_payer_name_;
  }
  inline void setRequestPayerName(bool);

  bool hasRequestPayerPhone() const { return has_request_payer_phone_; }
  bool requestPayerPhone() const {
    DCHECK(has_request_payer_phone_);
    return request_payer_phone_;
  }
  inline void setRequestPayerPhone(bool);

  bool hasRequestShipping() const { return has_request_shipping_; }
  bool requestShipping() const {
    DCHECK(has_request_shipping_);
    return request_shipping_;
  }
  inline void setRequestShipping(bool);

  bool hasShippingType() const { return !shipping_type_.IsNull(); }
  const String& shippingType() const {
    return shipping_type_;
  }
  inline void setShippingType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_request_payer_email_ = false;
  bool has_request_payer_name_ = false;
  bool has_request_payer_phone_ = false;
  bool has_request_shipping_ = false;

  bool request_payer_email_;
  bool request_payer_name_;
  bool request_payer_phone_;
  bool request_shipping_;
  String shipping_type_;

  friend class V8PaymentOptions;
};

void PaymentOptions::setRequestPayerEmail(bool value) {
  request_payer_email_ = value;
  has_request_payer_email_ = true;
}

void PaymentOptions::setRequestPayerName(bool value) {
  request_payer_name_ = value;
  has_request_payer_name_ = true;
}

void PaymentOptions::setRequestPayerPhone(bool value) {
  request_payer_phone_ = value;
  has_request_payer_phone_ = true;
}

void PaymentOptions::setRequestShipping(bool value) {
  request_shipping_ = value;
  has_request_shipping_ = true;
}

void PaymentOptions::setShippingType(const String& value) {
  shipping_type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_PAYMENT_OPTIONS_H_
