// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_item.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentDetailsModifierKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "additionalDisplayItems",
    "data",
    "supportedMethods",
    "total",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentDetailsModifier::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentDetailsModifier* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): supportedMethods.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsModifierKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> additional_display_items_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&additional_display_items_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (additional_display_items_value.IsEmpty() || additional_display_items_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PaymentItem>> additional_display_items_cpp_value = NativeValueTraits<IDLSequence<PaymentItem>>::NativeValue(isolate, additional_display_items_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAdditionalDisplayItems(additional_display_items_cpp_value);
  }

  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue data_cpp_value = ScriptValue(ScriptState::Current(isolate), data_value);
    if (!data_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member data is not an object.");
      return;
    }
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> supported_methods_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&supported_methods_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (supported_methods_value.IsEmpty() || supported_methods_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member supportedMethods is undefined.");
    return;
  } else {
    V8StringResource<> supported_methods_cpp_value = supported_methods_value;
    if (!supported_methods_cpp_value.Prepare(exception_state))
      return;
    impl->setSupportedMethod(supported_methods_cpp_value);
  }

  v8::Local<v8::Value> total_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&total_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (total_value.IsEmpty() || total_value->IsUndefined()) {
    // Do nothing.
  } else {
    PaymentItem* total_cpp_value = NativeValueTraits<PaymentItem>::NativeValue(isolate, total_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTotal(total_cpp_value);
  }
}

v8::Local<v8::Value> PaymentDetailsModifier::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentDetailsModifier(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentDetailsModifier(const PaymentDetailsModifier* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsModifierKeys(isolate);
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

  v8::Local<v8::Value> additional_display_items_value;
  bool additional_display_items_has_value_or_default = false;
  if (impl->hasAdditionalDisplayItems()) {
    additional_display_items_value = ToV8(impl->additionalDisplayItems(), creationContext, isolate);
    additional_display_items_has_value_or_default = true;
  }
  if (additional_display_items_has_value_or_default &&
      !create_property(0, additional_display_items_value)) {
    return false;
  }

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    DCHECK(impl->data().IsObject());
    data_value = impl->data().V8Value();
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(1, data_value)) {
    return false;
  }

  v8::Local<v8::Value> supported_methods_value;
  bool supported_methods_has_value_or_default = false;
  if (impl->hasSupportedMethod()) {
    supported_methods_value = V8String(isolate, impl->supportedMethod());
    supported_methods_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (supported_methods_has_value_or_default &&
      !create_property(2, supported_methods_value)) {
    return false;
  }

  v8::Local<v8::Value> total_value;
  bool total_has_value_or_default = false;
  if (impl->hasTotal()) {
    total_value = ToV8(impl->total(), creationContext, isolate);
    total_has_value_or_default = true;
  }
  if (total_has_value_or_default &&
      !create_property(3, total_value)) {
    return false;
  }

  return true;
}

PaymentDetailsModifier* NativeValueTraits<PaymentDetailsModifier>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentDetailsModifier* impl = PaymentDetailsModifier::Create();
  V8PaymentDetailsModifier::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
