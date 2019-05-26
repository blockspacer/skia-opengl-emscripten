// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_request_adapter_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPURequestAdapterOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "powerPreference",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPURequestAdapterOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPURequestAdapterOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPURequestAdapterOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> power_preference_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&power_preference_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (power_preference_value.IsEmpty() || power_preference_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> power_preference_cpp_value = power_preference_value;
    if (!power_preference_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "low-power",
        "high-performance",
    };
    if (!IsValidEnum(power_preference_cpp_value, kValidValues, base::size(kValidValues), "GPUPowerPreference", exception_state))
      return;
    impl->setPowerPreference(power_preference_cpp_value);
  }
}

v8::Local<v8::Value> GPURequestAdapterOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPURequestAdapterOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPURequestAdapterOptions(const GPURequestAdapterOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPURequestAdapterOptionsKeys(isolate);
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

  v8::Local<v8::Value> power_preference_value;
  bool power_preference_has_value_or_default = false;
  if (impl->hasPowerPreference()) {
    power_preference_value = V8String(isolate, impl->powerPreference());
    power_preference_has_value_or_default = true;
  }
  if (power_preference_has_value_or_default &&
      !create_property(0, power_preference_value)) {
    return false;
  }

  return true;
}

GPURequestAdapterOptions* NativeValueTraits<GPURequestAdapterOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPURequestAdapterOptions* impl = GPURequestAdapterOptions::Create();
  V8GPURequestAdapterOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
