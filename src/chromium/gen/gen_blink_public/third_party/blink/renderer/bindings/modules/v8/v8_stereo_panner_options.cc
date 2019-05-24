// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_stereo_panner_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8StereoPannerOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "pan",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8StereoPannerOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, StereoPannerOptions* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8StereoPannerOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> pan_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&pan_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pan_value.IsEmpty() || pan_value->IsUndefined()) {
    // Do nothing.
  } else {
    float pan_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, pan_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPan(pan_cpp_value);
  }
}

v8::Local<v8::Value> StereoPannerOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8StereoPannerOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8StereoPannerOptions(const StereoPannerOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8StereoPannerOptionsKeys(isolate);
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

  v8::Local<v8::Value> pan_value;
  bool pan_has_value_or_default = false;
  if (impl->hasPan()) {
    pan_value = v8::Number::New(isolate, impl->pan());
    pan_has_value_or_default = true;
  } else {
    pan_value = v8::Number::New(isolate, 0);
    pan_has_value_or_default = true;
  }
  if (pan_has_value_or_default &&
      !create_property(0, pan_value)) {
    return false;
  }

  return true;
}

StereoPannerOptions* NativeValueTraits<StereoPannerOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  StereoPannerOptions* impl = StereoPannerOptions::Create();
  V8StereoPannerOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
