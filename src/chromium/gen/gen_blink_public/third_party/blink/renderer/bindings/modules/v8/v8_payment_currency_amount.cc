// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_currency_amount.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentCurrencyAmountKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "currency",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentCurrencyAmount::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentCurrencyAmount* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): currency, value.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentCurrencyAmountKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> currency_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&currency_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (currency_value.IsEmpty() || currency_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member currency is undefined.");
    return;
  } else {
    V8StringResource<> currency_cpp_value = currency_value;
    if (!currency_cpp_value.Prepare(exception_state))
      return;
    impl->setCurrency(currency_cpp_value);
  }

  v8::Local<v8::Value> value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (value_value.IsEmpty() || value_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member value is undefined.");
    return;
  } else {
    V8StringResource<> value_cpp_value = value_value;
    if (!value_cpp_value.Prepare(exception_state))
      return;
    impl->setValue(value_cpp_value);
  }
}

v8::Local<v8::Value> PaymentCurrencyAmount::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentCurrencyAmount(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentCurrencyAmount(const PaymentCurrencyAmount* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentCurrencyAmountKeys(isolate);
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

  v8::Local<v8::Value> currency_value;
  bool currency_has_value_or_default = false;
  if (impl->hasCurrency()) {
    currency_value = V8String(isolate, impl->currency());
    currency_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (currency_has_value_or_default &&
      !create_property(0, currency_value)) {
    return false;
  }

  v8::Local<v8::Value> value_value;
  bool value_has_value_or_default = false;
  if (impl->hasValue()) {
    value_value = V8String(isolate, impl->value());
    value_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (value_has_value_or_default &&
      !create_property(1, value_value)) {
    return false;
  }

  return true;
}

PaymentCurrencyAmount* NativeValueTraits<PaymentCurrencyAmount>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentCurrencyAmount* impl = PaymentCurrencyAmount::Create();
  V8PaymentCurrencyAmount::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
