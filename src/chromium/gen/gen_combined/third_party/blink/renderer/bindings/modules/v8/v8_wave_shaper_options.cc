// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_wave_shaper_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WaveShaperOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "curve",
    "oversample",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8WaveShaperOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, WaveShaperOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8WaveShaperOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> curve_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&curve_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (curve_value.IsEmpty() || curve_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> curve_cpp_value = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, curve_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCurve(curve_cpp_value);
  }

  v8::Local<v8::Value> oversample_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&oversample_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (oversample_value.IsEmpty() || oversample_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> oversample_cpp_value = oversample_value;
    if (!oversample_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "2x",
        "4x",
    };
    if (!IsValidEnum(oversample_cpp_value, kValidValues, base::size(kValidValues), "OverSampleType", exception_state))
      return;
    impl->setOversample(oversample_cpp_value);
  }
}

v8::Local<v8::Value> WaveShaperOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WaveShaperOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WaveShaperOptions(const WaveShaperOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8WaveShaperOptionsKeys(isolate);
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

  v8::Local<v8::Value> curve_value;
  bool curve_has_value_or_default = false;
  if (impl->hasCurve()) {
    curve_value = ToV8(impl->curve(), creationContext, isolate);
    curve_has_value_or_default = true;
  }
  if (curve_has_value_or_default &&
      !create_property(0, curve_value)) {
    return false;
  }

  v8::Local<v8::Value> oversample_value;
  bool oversample_has_value_or_default = false;
  if (impl->hasOversample()) {
    oversample_value = V8String(isolate, impl->oversample());
    oversample_has_value_or_default = true;
  } else {
    oversample_value = V8String(isolate, "none");
    oversample_has_value_or_default = true;
  }
  if (oversample_has_value_or_default &&
      !create_property(1, oversample_value)) {
    return false;
  }

  return true;
}

WaveShaperOptions* NativeValueTraits<WaveShaperOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WaveShaperOptions* impl = WaveShaperOptions::Create();
  V8WaveShaperOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
