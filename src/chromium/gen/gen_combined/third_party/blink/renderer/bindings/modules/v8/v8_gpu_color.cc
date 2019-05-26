// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_color.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUColorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "a",
    "b",
    "g",
    "r",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUColor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUColor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): a, b, g, r.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUColorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> a_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&a_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (a_value.IsEmpty() || a_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member a is undefined.");
    return;
  } else {
    float a_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, a_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setA(a_cpp_value);
  }

  v8::Local<v8::Value> b_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&b_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (b_value.IsEmpty() || b_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member b is undefined.");
    return;
  } else {
    float b_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, b_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setB(b_cpp_value);
  }

  v8::Local<v8::Value> g_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&g_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (g_value.IsEmpty() || g_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member g is undefined.");
    return;
  } else {
    float g_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, g_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setG(g_cpp_value);
  }

  v8::Local<v8::Value> r_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&r_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (r_value.IsEmpty() || r_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member r is undefined.");
    return;
  } else {
    float r_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, r_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setR(r_cpp_value);
  }
}

v8::Local<v8::Value> GPUColor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUColor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUColor(const GPUColor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUColorKeys(isolate);
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

  v8::Local<v8::Value> a_value;
  bool a_has_value_or_default = false;
  if (impl->hasA()) {
    a_value = v8::Number::New(isolate, impl->a());
    a_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (a_has_value_or_default &&
      !create_property(0, a_value)) {
    return false;
  }

  v8::Local<v8::Value> b_value;
  bool b_has_value_or_default = false;
  if (impl->hasB()) {
    b_value = v8::Number::New(isolate, impl->b());
    b_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (b_has_value_or_default &&
      !create_property(1, b_value)) {
    return false;
  }

  v8::Local<v8::Value> g_value;
  bool g_has_value_or_default = false;
  if (impl->hasG()) {
    g_value = v8::Number::New(isolate, impl->g());
    g_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (g_has_value_or_default &&
      !create_property(2, g_value)) {
    return false;
  }

  v8::Local<v8::Value> r_value;
  bool r_has_value_or_default = false;
  if (impl->hasR()) {
    r_value = v8::Number::New(isolate, impl->r());
    r_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (r_has_value_or_default &&
      !create_property(3, r_value)) {
    return false;
  }

  return true;
}

GPUColor* NativeValueTraits<GPUColor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUColor* impl = GPUColor::Create();
  V8GPUColor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
