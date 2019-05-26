// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_merchant_validation_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MerchantValidationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "methodName",
    "validationURL",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MerchantValidationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MerchantValidationEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MerchantValidationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> method_name_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&method_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (method_name_value.IsEmpty() || method_name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> method_name_cpp_value = method_name_value;
    if (!method_name_cpp_value.Prepare(exception_state))
      return;
    impl->setMethodName(method_name_cpp_value);
  }

  v8::Local<v8::Value> validation_url_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&validation_url_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (validation_url_value.IsEmpty() || validation_url_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> validation_url_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, validation_url_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setValidationURL(validation_url_cpp_value);
  }
}

v8::Local<v8::Value> MerchantValidationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MerchantValidationEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MerchantValidationEventInit(const MerchantValidationEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MerchantValidationEventInitKeys(isolate);
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

  v8::Local<v8::Value> method_name_value;
  bool method_name_has_value_or_default = false;
  if (impl->hasMethodName()) {
    method_name_value = V8String(isolate, impl->methodName());
    method_name_has_value_or_default = true;
  } else {
    method_name_value = V8String(isolate, WTF::g_empty_string);
    method_name_has_value_or_default = true;
  }
  if (method_name_has_value_or_default &&
      !create_property(0, method_name_value)) {
    return false;
  }

  v8::Local<v8::Value> validation_url_value;
  bool validation_url_has_value_or_default = false;
  if (impl->hasValidationURL()) {
    validation_url_value = V8String(isolate, impl->validationURL());
    validation_url_has_value_or_default = true;
  } else {
    validation_url_value = V8String(isolate, WTF::g_empty_string);
    validation_url_has_value_or_default = true;
  }
  if (validation_url_has_value_or_default &&
      !create_property(1, validation_url_value)) {
    return false;
  }

  return true;
}

MerchantValidationEventInit* NativeValueTraits<MerchantValidationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MerchantValidationEventInit* impl = MerchantValidationEventInit::Create();
  V8MerchantValidationEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
