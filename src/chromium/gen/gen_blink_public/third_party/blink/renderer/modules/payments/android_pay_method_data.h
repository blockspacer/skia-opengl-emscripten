// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_METHOD_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_METHOD_DATA_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/payments/android_pay_tokenization.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT AndroidPayMethodData : public IDLDictionaryBase {
 public:
  static AndroidPayMethodData* Create() { return MakeGarbageCollected<AndroidPayMethodData>(); }

  AndroidPayMethodData();
  virtual ~AndroidPayMethodData();

  bool hasAllowedCardNetworks() const { return has_allowed_card_networks_; }
  const Vector<String>& allowedCardNetworks() const {
    DCHECK(has_allowed_card_networks_);
    return allowed_card_networks_;
  }
  void setAllowedCardNetworks(const Vector<String>&);

  bool hasApiVersion() const { return has_api_version_; }
  int32_t apiVersion() const {
    DCHECK(has_api_version_);
    return api_version_;
  }
  inline void setApiVersion(int32_t);

  bool hasEnvironment() const { return !environment_.IsNull(); }
  const String& environment() const {
    return environment_;
  }
  inline void setEnvironment(const String&);

  bool hasMerchantId() const { return !merchant_id_.IsNull(); }
  const String& merchantId() const {
    return merchant_id_;
  }
  inline void setMerchantId(const String&);

  bool hasMerchantName() const { return !merchant_name_.IsNull(); }
  const String& merchantName() const {
    return merchant_name_;
  }
  inline void setMerchantName(const String&);

  bool hasMinGooglePlayServicesVersion() const { return !min_google_play_services_version_.IsNull(); }
  const String& minGooglePlayServicesVersion() const {
    return min_google_play_services_version_;
  }
  inline void setMinGooglePlayServicesVersion(const String&);

  bool hasPaymentMethodTokenizationParameters() const { return payment_method_tokenization_parameters_; }
  AndroidPayTokenization* paymentMethodTokenizationParameters() const {
    return payment_method_tokenization_parameters_;
  }
  void setPaymentMethodTokenizationParameters(AndroidPayTokenization*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_allowed_card_networks_ = false;
  bool has_api_version_ = false;

  Vector<String> allowed_card_networks_;
  int32_t api_version_;
  String environment_;
  String merchant_id_;
  String merchant_name_;
  String min_google_play_services_version_;
  Member<AndroidPayTokenization> payment_method_tokenization_parameters_;

  friend class V8AndroidPayMethodData;
};

void AndroidPayMethodData::setApiVersion(int32_t value) {
  api_version_ = value;
  has_api_version_ = true;
}

void AndroidPayMethodData::setEnvironment(const String& value) {
  environment_ = value;
}

void AndroidPayMethodData::setMerchantId(const String& value) {
  merchant_id_ = value;
}

void AndroidPayMethodData::setMerchantName(const String& value) {
  merchant_name_ = value;
}

void AndroidPayMethodData::setMinGooglePlayServicesVersion(const String& value) {
  min_google_play_services_version_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PAYMENTS_ANDROID_PAY_METHOD_DATA_H_
