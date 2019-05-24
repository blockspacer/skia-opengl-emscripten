// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_acceleration_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_motion_event_rotation_rate_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DeviceMotionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "acceleration",
    "accelerationIncludingGravity",
    "interval",
    "rotationRate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DeviceMotionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DeviceMotionEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceMotionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> acceleration_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&acceleration_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (acceleration_value.IsEmpty() || acceleration_value->IsUndefined()) {
    // Do nothing.
  } else {
    DeviceMotionEventAccelerationInit* acceleration_cpp_value = NativeValueTraits<DeviceMotionEventAccelerationInit>::NativeValue(isolate, acceleration_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAcceleration(acceleration_cpp_value);
  }

  v8::Local<v8::Value> acceleration_including_gravity_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&acceleration_including_gravity_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (acceleration_including_gravity_value.IsEmpty() || acceleration_including_gravity_value->IsUndefined()) {
    // Do nothing.
  } else {
    DeviceMotionEventAccelerationInit* acceleration_including_gravity_cpp_value = NativeValueTraits<DeviceMotionEventAccelerationInit>::NativeValue(isolate, acceleration_including_gravity_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAccelerationIncludingGravity(acceleration_including_gravity_cpp_value);
  }

  v8::Local<v8::Value> interval_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&interval_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (interval_value.IsEmpty() || interval_value->IsUndefined()) {
    // Do nothing.
  } else {
    double interval_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, interval_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInterval(interval_cpp_value);
  }

  v8::Local<v8::Value> rotation_rate_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&rotation_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (rotation_rate_value.IsEmpty() || rotation_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    DeviceMotionEventRotationRateInit* rotation_rate_cpp_value = NativeValueTraits<DeviceMotionEventRotationRateInit>::NativeValue(isolate, rotation_rate_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRotationRate(rotation_rate_cpp_value);
  }
}

v8::Local<v8::Value> DeviceMotionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DeviceMotionEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DeviceMotionEventInit(const DeviceMotionEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceMotionEventInitKeys(isolate);
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

  v8::Local<v8::Value> acceleration_value;
  bool acceleration_has_value_or_default = false;
  if (impl->hasAcceleration()) {
    acceleration_value = ToV8(impl->acceleration(), creationContext, isolate);
    acceleration_has_value_or_default = true;
  }
  if (acceleration_has_value_or_default &&
      !create_property(0, acceleration_value)) {
    return false;
  }

  v8::Local<v8::Value> acceleration_including_gravity_value;
  bool acceleration_including_gravity_has_value_or_default = false;
  if (impl->hasAccelerationIncludingGravity()) {
    acceleration_including_gravity_value = ToV8(impl->accelerationIncludingGravity(), creationContext, isolate);
    acceleration_including_gravity_has_value_or_default = true;
  }
  if (acceleration_including_gravity_has_value_or_default &&
      !create_property(1, acceleration_including_gravity_value)) {
    return false;
  }

  v8::Local<v8::Value> interval_value;
  bool interval_has_value_or_default = false;
  if (impl->hasInterval()) {
    interval_value = v8::Number::New(isolate, impl->interval());
    interval_has_value_or_default = true;
  } else {
    interval_value = v8::Number::New(isolate, 0);
    interval_has_value_or_default = true;
  }
  if (interval_has_value_or_default &&
      !create_property(2, interval_value)) {
    return false;
  }

  v8::Local<v8::Value> rotation_rate_value;
  bool rotation_rate_has_value_or_default = false;
  if (impl->hasRotationRate()) {
    rotation_rate_value = ToV8(impl->rotationRate(), creationContext, isolate);
    rotation_rate_has_value_or_default = true;
  }
  if (rotation_rate_has_value_or_default &&
      !create_property(3, rotation_rate_value)) {
    return false;
  }

  return true;
}

DeviceMotionEventInit* NativeValueTraits<DeviceMotionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DeviceMotionEventInit* impl = DeviceMotionEventInit::Create();
  V8DeviceMotionEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
