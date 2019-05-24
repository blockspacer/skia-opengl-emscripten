// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_can_make_payment_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_data.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CanMakePaymentEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "methodData",
    "modifiers",
    "paymentRequestOrigin",
    "topOrigin",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CanMakePaymentEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CanMakePaymentEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8CanMakePaymentEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> method_data_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&method_data_value)) {
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
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&modifiers_value)) {
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

  v8::Local<v8::Value> payment_request_origin_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&payment_request_origin_value)) {
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
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&top_origin_value)) {
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
}

v8::Local<v8::Value> CanMakePaymentEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CanMakePaymentEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CanMakePaymentEventInit(const CanMakePaymentEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8CanMakePaymentEventInitKeys(isolate);
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

  v8::Local<v8::Value> method_data_value;
  bool method_data_has_value_or_default = false;
  if (impl->hasMethodData()) {
    method_data_value = ToV8(impl->methodData(), creationContext, isolate);
    method_data_has_value_or_default = true;
  }
  if (method_data_has_value_or_default &&
      !create_property(0, method_data_value)) {
    return false;
  }

  v8::Local<v8::Value> modifiers_value;
  bool modifiers_has_value_or_default = false;
  if (impl->hasModifiers()) {
    modifiers_value = ToV8(impl->modifiers(), creationContext, isolate);
    modifiers_has_value_or_default = true;
  }
  if (modifiers_has_value_or_default &&
      !create_property(1, modifiers_value)) {
    return false;
  }

  v8::Local<v8::Value> payment_request_origin_value;
  bool payment_request_origin_has_value_or_default = false;
  if (impl->hasPaymentRequestOrigin()) {
    payment_request_origin_value = V8String(isolate, impl->paymentRequestOrigin());
    payment_request_origin_has_value_or_default = true;
  }
  if (payment_request_origin_has_value_or_default &&
      !create_property(2, payment_request_origin_value)) {
    return false;
  }

  v8::Local<v8::Value> top_origin_value;
  bool top_origin_has_value_or_default = false;
  if (impl->hasTopOrigin()) {
    top_origin_value = V8String(isolate, impl->topOrigin());
    top_origin_has_value_or_default = true;
  }
  if (top_origin_has_value_or_default &&
      !create_property(3, top_origin_value)) {
    return false;
  }

  return true;
}

CanMakePaymentEventInit* NativeValueTraits<CanMakePaymentEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CanMakePaymentEventInit* impl = CanMakePaymentEventInit::Create();
  V8CanMakePaymentEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
