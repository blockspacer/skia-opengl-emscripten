// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_base.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_modifier.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_item.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_shipping_option.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaymentDetailsBaseKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "displayItems",
    "modifiers",
    "shippingOptions",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PaymentDetailsBase::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PaymentDetailsBase* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsBaseKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> display_items_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&display_items_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (display_items_value.IsEmpty() || display_items_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PaymentItem>> display_items_cpp_value = NativeValueTraits<IDLSequence<PaymentItem>>::NativeValue(isolate, display_items_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDisplayItems(display_items_cpp_value);
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

  v8::Local<v8::Value> shipping_options_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&shipping_options_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (shipping_options_value.IsEmpty() || shipping_options_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<PaymentShippingOption>> shipping_options_cpp_value = NativeValueTraits<IDLSequence<PaymentShippingOption>>::NativeValue(isolate, shipping_options_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setShippingOptions(shipping_options_cpp_value);
  }
}

v8::Local<v8::Value> PaymentDetailsBase::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaymentDetailsBase(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaymentDetailsBase(const PaymentDetailsBase* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaymentDetailsBaseKeys(isolate);
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

  v8::Local<v8::Value> display_items_value;
  bool display_items_has_value_or_default = false;
  if (impl->hasDisplayItems()) {
    display_items_value = ToV8(impl->displayItems(), creationContext, isolate);
    display_items_has_value_or_default = true;
  }
  if (display_items_has_value_or_default &&
      !create_property(0, display_items_value)) {
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

  v8::Local<v8::Value> shipping_options_value;
  bool shipping_options_has_value_or_default = false;
  if (impl->hasShippingOptions()) {
    shipping_options_value = ToV8(impl->shippingOptions(), creationContext, isolate);
    shipping_options_has_value_or_default = true;
  }
  if (shipping_options_has_value_or_default &&
      !create_property(2, shipping_options_value)) {
    return false;
  }

  return true;
}

PaymentDetailsBase* NativeValueTraits<PaymentDetailsBase>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentDetailsBase* impl = PaymentDetailsBase::Create();
  V8PaymentDetailsBase::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
