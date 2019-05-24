// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_periodic_wave_constraints.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PeriodicWaveOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "imag",
    "real",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PeriodicWaveOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PeriodicWaveOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8PeriodicWaveConstraints::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8PeriodicWaveOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> imag_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&imag_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (imag_value.IsEmpty() || imag_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> imag_cpp_value = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, imag_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setImag(imag_cpp_value);
  }

  v8::Local<v8::Value> real_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&real_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (real_value.IsEmpty() || real_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> real_cpp_value = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, real_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setReal(real_cpp_value);
  }
}

v8::Local<v8::Value> PeriodicWaveOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PeriodicWaveOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PeriodicWaveOptions(const PeriodicWaveOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8PeriodicWaveConstraints(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PeriodicWaveOptionsKeys(isolate);
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

  v8::Local<v8::Value> imag_value;
  bool imag_has_value_or_default = false;
  if (impl->hasImag()) {
    imag_value = ToV8(impl->imag(), creationContext, isolate);
    imag_has_value_or_default = true;
  }
  if (imag_has_value_or_default &&
      !create_property(0, imag_value)) {
    return false;
  }

  v8::Local<v8::Value> real_value;
  bool real_has_value_or_default = false;
  if (impl->hasReal()) {
    real_value = ToV8(impl->real(), creationContext, isolate);
    real_has_value_or_default = true;
  }
  if (real_has_value_or_default &&
      !create_property(1, real_value)) {
    return false;
  }

  return true;
}

PeriodicWaveOptions* NativeValueTraits<PeriodicWaveOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PeriodicWaveOptions* impl = PeriodicWaveOptions::Create();
  V8PeriodicWaveOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
