// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_spatial_sensor_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SpatialSensorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "referenceFrame",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SpatialSensorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SpatialSensorOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8SensorOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8SpatialSensorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> reference_frame_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&reference_frame_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (reference_frame_value.IsEmpty() || reference_frame_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> reference_frame_cpp_value = reference_frame_value;
    if (!reference_frame_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "device",
        "screen",
    };
    if (!IsValidEnum(reference_frame_cpp_value, kValidValues, base::size(kValidValues), "LocalCoordinateSystem", exception_state))
      return;
    impl->setReferenceFrame(reference_frame_cpp_value);
  }
}

v8::Local<v8::Value> SpatialSensorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SpatialSensorOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SpatialSensorOptions(const SpatialSensorOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8SensorOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SpatialSensorOptionsKeys(isolate);
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

  v8::Local<v8::Value> reference_frame_value;
  bool reference_frame_has_value_or_default = false;
  if (impl->hasReferenceFrame()) {
    reference_frame_value = V8String(isolate, impl->referenceFrame());
    reference_frame_has_value_or_default = true;
  } else {
    reference_frame_value = V8String(isolate, "device");
    reference_frame_has_value_or_default = true;
  }
  if (reference_frame_has_value_or_default &&
      !create_property(0, reference_frame_value)) {
    return false;
  }

  return true;
}

SpatialSensorOptions* NativeValueTraits<SpatialSensorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpatialSensorOptions* impl = SpatialSensorOptions::Create();
  V8SpatialSensorOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
