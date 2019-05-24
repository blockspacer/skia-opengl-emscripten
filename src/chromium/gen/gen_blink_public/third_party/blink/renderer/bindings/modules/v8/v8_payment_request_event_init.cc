// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_currency_amount.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_data.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentRequestEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "instrumentKey",
    "methodData",
    "modifiers",
    "paymentRequestId",
    "paymentRequestOrigin",
    "topOrigin",
    "total",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentRequestEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentRequestEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentRequestEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> instrument_key_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&instrument_key_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (instrument_key_value.IsEmpty() || instrument_key_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> instrument_key_cpp_value = instrument_key_value;
    if (!instrument_key_cpp_value.Prepare(exception_state))
      return;
    impl->setInstrumentKey(instrument_key_cpp_value);
  }

  v8::Local<v8::Value> method_data_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&method_data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_data_value.IsEmpty() || method_data_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PaymentMethodData>> method_data_cpp_value = NativeValueTraits<IDLSequence<PaymentMethodData>>::NativeValue(isolate, method_data_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMethodData(method_data_cpp_value);
  }

  v8::Local<v8::Value> modifiers_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&modifiers_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (modifiers_value.IsEmpty() || modifiers_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PaymentDetailsModifier>> modifiers_cpp_value = NativeValueTraits<IDLSequence<PaymentDetailsModifier>>::NativeValue(isolate, modifiers_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setModifiers(modifiers_cpp_value);
  }

  v8::Local<v8::Value> payment_request_id_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&payment_request_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (payment_request_id_value.IsEmpty() || payment_request_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> payment_request_id_cpp_value = payment_request_id_value;
    if (!payment_request_id_cpp_value.Prepare(exception_state))
      return;
    impl->setPaymentRequestId(payment_request_id_cpp_value);
  }

  v8::Local<v8::Value> payment_request_origin_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&payment_request_origin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (payment_request_origin_value.IsEmpty() || payment_request_origin_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> payment_request_origin_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, payment_request_origin_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPaymentRequestOrigin(payment_request_origin_cpp_value);
  }

  v8::Local<v8::Value> top_origin_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&top_origin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (top_origin_value.IsEmpty() || top_origin_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> top_origin_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, top_origin_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTopOrigin(top_origin_cpp_value);
  }

  v8::Local<v8::Value> total_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&total_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (total_value.IsEmpty() || total_value->IsUndefined()) {
    // Do nothing.
  } else {
    PaymentCurrencyAmount* total_cpp_value = NativeValueTraits<PaymentCurrencyAmount>::NativeValue(isolate, total_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTotal(total_cpp_value);
  }
}

v8::Local<v8::Value> PaymentRequestEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentRequestEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentRequestEventInit(const PaymentRequestEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentRequestEventInitKeys(isolate);
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

  v8::Local<v8::Value> instrument_key_value;
  bool instrument_key_has_value_or_default = false;
  if (impl->hasInstrumentKey()) {
    instrument_key_value = V8String(isolate, impl->instrumentKey());
    instrument_key_has_value_or_default = true;
  }
  if (instrument_key_has_value_or_default &&
      !create_property(0, instrument_key_value)) {
    return false;
  }

  v8::Local<v8::Value> method_data_value;
  bool method_data_has_value_or_default = false;
  if (impl->hasMethodData()) {
    method_data_value = ToV8(impl->methodData(), creationContext, isolate);
    method_data_has_value_or_default = true;
  }
  if (method_data_has_value_or_default &&
      !create_property(1, method_data_value)) {
    return false;
  }

  v8::Local<v8::Value> modifiers_value;
  bool modifiers_has_value_or_default = false;
  if (impl->hasModifiers()) {
    modifiers_value = ToV8(impl->modifiers(), creationContext, isolate);
    modifiers_has_value_or_default = true;
  }
  if (modifiers_has_value_or_default &&
      !create_property(2, modifiers_value)) {
    return false;
  }

  v8::Local<v8::Value> payment_request_id_value;
  bool payment_request_id_has_value_or_default = false;
  if (impl->hasPaymentRequestId()) {
    payment_request_id_value = V8String(isolate, impl->paymentRequestId());
    payment_request_id_has_value_or_default = true;
  }
  if (payment_request_id_has_value_or_default &&
      !create_property(3, payment_request_id_value)) {
    return false;
  }

  v8::Local<v8::Value> payment_request_origin_value;
  bool payment_request_origin_has_value_or_default = false;
  if (impl->hasPaymentRequestOrigin()) {
    payment_request_origin_value = V8String(isolate, impl->paymentRequestOrigin());
    payment_request_origin_has_value_or_default = true;
  }
  if (payment_request_origin_has_value_or_default &&
      !create_property(4, payment_request_origin_value)) {
    return false;
  }

  v8::Local<v8::Value> top_origin_value;
  bool top_origin_has_value_or_default = false;
  if (impl->hasTopOrigin()) {
    top_origin_value = V8String(isolate, impl->topOrigin());
    top_origin_has_value_or_default = true;
  }
  if (top_origin_has_value_or_default &&
      !create_property(5, top_origin_value)) {
    return false;
  }

  v8::Local<v8::Value> total_value;
  bool total_has_value_or_default = false;
  if (impl->hasTotal()) {
    total_value = ToV8(impl->total(), creationContext, isolate);
    total_has_value_or_default = true;
  }
  if (total_has_value_or_default &&
      !create_property(6, total_value)) {
    return false;
  }

  return true;
}

PaymentRequestEventInit* NativeValueTraits<PaymentRequestEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentRequestEventInit* impl = PaymentRequestEventInit::Create();
  V8PaymentRequestEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
