// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "requestPayerEmail",
    "requestPayerName",
    "requestPayerPhone",
    "requestShipping",
    "shippingType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> request_payer_email_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&request_payer_email_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_payer_email_value.IsEmpty() || request_payer_email_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool request_payer_email_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, request_payer_email_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequestPayerEmail(request_payer_email_cpp_value);
  }

  v8::Local<v8::Value> request_payer_name_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&request_payer_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_payer_name_value.IsEmpty() || request_payer_name_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool request_payer_name_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, request_payer_name_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequestPayerName(request_payer_name_cpp_value);
  }

  v8::Local<v8::Value> request_payer_phone_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&request_payer_phone_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_payer_phone_value.IsEmpty() || request_payer_phone_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool request_payer_phone_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, request_payer_phone_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequestPayerPhone(request_payer_phone_cpp_value);
  }

  v8::Local<v8::Value> request_shipping_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&request_shipping_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (request_shipping_value.IsEmpty() || request_shipping_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool request_shipping_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, request_shipping_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequestShipping(request_shipping_cpp_value);
  }

  v8::Local<v8::Value> shipping_type_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&shipping_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (shipping_type_value.IsEmpty() || shipping_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> shipping_type_cpp_value = shipping_type_value;
    if (!shipping_type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "shipping",
        "delivery",
        "pickup",
    };
    if (!IsValidEnum(shipping_type_cpp_value, kValidValues, base::size(kValidValues), "PaymentShippingType", exception_state))
      return;
    impl->setShippingType(shipping_type_cpp_value);
  }
}

v8::Local<v8::Value> PaymentOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentOptions(const PaymentOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentOptionsKeys(isolate);
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

  v8::Local<v8::Value> request_payer_email_value;
  bool request_payer_email_has_value_or_default = false;
  if (impl->hasRequestPayerEmail()) {
    request_payer_email_value = v8::Boolean::New(isolate, impl->requestPayerEmail());
    request_payer_email_has_value_or_default = true;
  } else {
    request_payer_email_value = v8::Boolean::New(isolate, false);
    request_payer_email_has_value_or_default = true;
  }
  if (request_payer_email_has_value_or_default &&
      !create_property(0, request_payer_email_value)) {
    return false;
  }

  v8::Local<v8::Value> request_payer_name_value;
  bool request_payer_name_has_value_or_default = false;
  if (impl->hasRequestPayerName()) {
    request_payer_name_value = v8::Boolean::New(isolate, impl->requestPayerName());
    request_payer_name_has_value_or_default = true;
  } else {
    request_payer_name_value = v8::Boolean::New(isolate, false);
    request_payer_name_has_value_or_default = true;
  }
  if (request_payer_name_has_value_or_default &&
      !create_property(1, request_payer_name_value)) {
    return false;
  }

  v8::Local<v8::Value> request_payer_phone_value;
  bool request_payer_phone_has_value_or_default = false;
  if (impl->hasRequestPayerPhone()) {
    request_payer_phone_value = v8::Boolean::New(isolate, impl->requestPayerPhone());
    request_payer_phone_has_value_or_default = true;
  } else {
    request_payer_phone_value = v8::Boolean::New(isolate, false);
    request_payer_phone_has_value_or_default = true;
  }
  if (request_payer_phone_has_value_or_default &&
      !create_property(2, request_payer_phone_value)) {
    return false;
  }

  v8::Local<v8::Value> request_shipping_value;
  bool request_shipping_has_value_or_default = false;
  if (impl->hasRequestShipping()) {
    request_shipping_value = v8::Boolean::New(isolate, impl->requestShipping());
    request_shipping_has_value_or_default = true;
  } else {
    request_shipping_value = v8::Boolean::New(isolate, false);
    request_shipping_has_value_or_default = true;
  }
  if (request_shipping_has_value_or_default &&
      !create_property(3, request_shipping_value)) {
    return false;
  }

  v8::Local<v8::Value> shipping_type_value;
  bool shipping_type_has_value_or_default = false;
  if (impl->hasShippingType()) {
    shipping_type_value = V8String(isolate, impl->shippingType());
    shipping_type_has_value_or_default = true;
  } else {
    shipping_type_value = V8String(isolate, "shipping");
    shipping_type_has_value_or_default = true;
  }
  if (shipping_type_has_value_or_default &&
      !create_property(4, shipping_type_value)) {
    return false;
  }

  return true;
}

PaymentOptions* NativeValueTraits<PaymentOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentOptions* impl = PaymentOptions::Create();
  V8PaymentOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
