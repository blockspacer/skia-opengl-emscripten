// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_method_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_tokenization.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AndroidPayMethodDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "allowedCardNetworks",
    "apiVersion",
    "environment",
    "merchantId",
    "merchantName",
    "minGooglePlayServicesVersion",
    "paymentMethodTokenizationParameters",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AndroidPayMethodData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AndroidPayMethodData* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayMethodDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> allowed_card_networks_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&allowed_card_networks_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (allowed_card_networks_value.IsEmpty() || allowed_card_networks_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> allowed_card_networks_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, allowed_card_networks_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAllowedCardNetworks(allowed_card_networks_cpp_value);
  }

  v8::Local<v8::Value> api_version_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&api_version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (api_version_value.IsEmpty() || api_version_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t api_version_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, api_version_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setApiVersion(api_version_cpp_value);
  }

  v8::Local<v8::Value> environment_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&environment_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (environment_value.IsEmpty() || environment_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> environment_cpp_value = environment_value;
    if (!environment_cpp_value.Prepare(exception_state))
      return;
    impl->setEnvironment(environment_cpp_value);
  }

  v8::Local<v8::Value> merchant_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&merchant_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (merchant_id_value.IsEmpty() || merchant_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> merchant_id_cpp_value = merchant_id_value;
    if (!merchant_id_cpp_value.Prepare(exception_state))
      return;
    impl->setMerchantId(merchant_id_cpp_value);
  }

  v8::Local<v8::Value> merchant_name_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&merchant_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (merchant_name_value.IsEmpty() || merchant_name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> merchant_name_cpp_value = merchant_name_value;
    if (!merchant_name_cpp_value.Prepare(exception_state))
      return;
    impl->setMerchantName(merchant_name_cpp_value);
  }

  v8::Local<v8::Value> min_google_play_services_version_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&min_google_play_services_version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_google_play_services_version_value.IsEmpty() || min_google_play_services_version_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> min_google_play_services_version_cpp_value = min_google_play_services_version_value;
    if (!min_google_play_services_version_cpp_value.Prepare(exception_state))
      return;
    impl->setMinGooglePlayServicesVersion(min_google_play_services_version_cpp_value);
  }

  v8::Local<v8::Value> payment_method_tokenization_parameters_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&payment_method_tokenization_parameters_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (payment_method_tokenization_parameters_value.IsEmpty() || payment_method_tokenization_parameters_value->IsUndefined()) {
    // Do nothing.
  } else {
    AndroidPayTokenization* payment_method_tokenization_parameters_cpp_value = NativeValueTraits<AndroidPayTokenization>::NativeValue(isolate, payment_method_tokenization_parameters_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPaymentMethodTokenizationParameters(payment_method_tokenization_parameters_cpp_value);
  }
}

v8::Local<v8::Value> AndroidPayMethodData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AndroidPayMethodData(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AndroidPayMethodData(const AndroidPayMethodData* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayMethodDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> allowed_card_networks_value;
  bool allowed_card_networks_has_value_or_default = false;
  if (impl->hasAllowedCardNetworks()) {
    allowed_card_networks_value = ToV8(impl->allowedCardNetworks(), creationContext, isolate);
    allowed_card_networks_has_value_or_default = true;
  }
  if (allowed_card_networks_has_value_or_default &&
      !create_property(0, allowed_card_networks_value)) {
    return false;
  }

  v8::Local<v8::Value> api_version_value;
  bool api_version_has_value_or_default = false;
  if (impl->hasApiVersion()) {
    api_version_value = v8::Integer::New(isolate, impl->apiVersion());
    api_version_has_value_or_default = true;
  }
  if (api_version_has_value_or_default &&
      !create_property(1, api_version_value)) {
    return false;
  }

  v8::Local<v8::Value> environment_value;
  bool environment_has_value_or_default = false;
  if (impl->hasEnvironment()) {
    environment_value = V8String(isolate, impl->environment());
    environment_has_value_or_default = true;
  }
  if (environment_has_value_or_default &&
      !create_property(2, environment_value)) {
    return false;
  }

  v8::Local<v8::Value> merchant_id_value;
  bool merchant_id_has_value_or_default = false;
  if (impl->hasMerchantId()) {
    merchant_id_value = V8String(isolate, impl->merchantId());
    merchant_id_has_value_or_default = true;
  }
  if (merchant_id_has_value_or_default &&
      !create_property(3, merchant_id_value)) {
    return false;
  }

  v8::Local<v8::Value> merchant_name_value;
  bool merchant_name_has_value_or_default = false;
  if (impl->hasMerchantName()) {
    merchant_name_value = V8String(isolate, impl->merchantName());
    merchant_name_has_value_or_default = true;
  }
  if (merchant_name_has_value_or_default &&
      !create_property(4, merchant_name_value)) {
    return false;
  }

  v8::Local<v8::Value> min_google_play_services_version_value;
  bool min_google_play_services_version_has_value_or_default = false;
  if (impl->hasMinGooglePlayServicesVersion()) {
    min_google_play_services_version_value = V8String(isolate, impl->minGooglePlayServicesVersion());
    min_google_play_services_version_has_value_or_default = true;
  }
  if (min_google_play_services_version_has_value_or_default &&
      !create_property(5, min_google_play_services_version_value)) {
    return false;
  }

  v8::Local<v8::Value> payment_method_tokenization_parameters_value;
  bool payment_method_tokenization_parameters_has_value_or_default = false;
  if (impl->hasPaymentMethodTokenizationParameters()) {
    payment_method_tokenization_parameters_value = ToV8(impl->paymentMethodTokenizationParameters(), creationContext, isolate);
    payment_method_tokenization_parameters_has_value_or_default = true;
  }
  if (payment_method_tokenization_parameters_has_value_or_default &&
      !create_property(6, payment_method_tokenization_parameters_value)) {
    return false;
  }

  return true;
}

AndroidPayMethodData* NativeValueTraits<AndroidPayMethodData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AndroidPayMethodData* impl = AndroidPayMethodData::Create();
  V8AndroidPayMethodData::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
