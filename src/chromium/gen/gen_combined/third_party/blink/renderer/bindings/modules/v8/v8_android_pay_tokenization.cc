// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_android_pay_tokenization.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AndroidPayTokenizationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "parameters",
    "tokenizationType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AndroidPayTokenization::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AndroidPayTokenization* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayTokenizationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> parameters_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&parameters_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (parameters_value.IsEmpty() || parameters_value->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary parameters_cpp_value = NativeValueTraits<Dictionary>::NativeValue(isolate, parameters_value, exception_state);
    if (exception_state.HadException())
      return;
    if (!parameters_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member parameters is not an object.");
      return;
    }
    impl->setParameters(parameters_cpp_value);
  }

  v8::Local<v8::Value> tokenization_type_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&tokenization_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tokenization_type_value.IsEmpty() || tokenization_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tokenization_type_cpp_value = tokenization_type_value;
    if (!tokenization_type_cpp_value.Prepare(exception_state))
      return;
    impl->setTokenizationType(tokenization_type_cpp_value);
  }
}

v8::Local<v8::Value> AndroidPayTokenization::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AndroidPayTokenization(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AndroidPayTokenization(const AndroidPayTokenization* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AndroidPayTokenizationKeys(isolate);
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

  v8::Local<v8::Value> parameters_value;
  bool parameters_has_value_or_default = false;
  if (impl->hasParameters()) {
    DCHECK(impl->parameters().IsObject());
    parameters_value = impl->parameters().V8Value();
    parameters_has_value_or_default = true;
  }
  if (parameters_has_value_or_default &&
      !create_property(0, parameters_value)) {
    return false;
  }

  v8::Local<v8::Value> tokenization_type_value;
  bool tokenization_type_has_value_or_default = false;
  if (impl->hasTokenizationType()) {
    tokenization_type_value = V8String(isolate, impl->tokenizationType());
    tokenization_type_has_value_or_default = true;
  }
  if (tokenization_type_has_value_or_default &&
      !create_property(1, tokenization_type_value)) {
    return false;
  }

  return true;
}

AndroidPayTokenization* NativeValueTraits<AndroidPayTokenization>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AndroidPayTokenization* impl = AndroidPayTokenization::Create();
  V8AndroidPayTokenization::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
