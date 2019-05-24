// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_wheel_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mouse_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WheelEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "deltaMode",
    "deltaX",
    "deltaY",
    "deltaZ",
    "wheelDeltaX",
    "wheelDeltaY",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8WheelEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, WheelEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8MouseEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8WheelEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delta_mode_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delta_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_mode_value.IsEmpty() || delta_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t delta_mode_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, delta_mode_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaMode(delta_mode_cpp_value);
  }

  v8::Local<v8::Value> delta_x_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&delta_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_x_value.IsEmpty() || delta_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_x_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaX(delta_x_cpp_value);
  }

  v8::Local<v8::Value> delta_y_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&delta_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_y_value.IsEmpty() || delta_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_y_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaY(delta_y_cpp_value);
  }

  v8::Local<v8::Value> delta_z_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&delta_z_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delta_z_value.IsEmpty() || delta_z_value->IsUndefined()) {
    // Do nothing.
  } else {
    double delta_z_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delta_z_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDeltaZ(delta_z_cpp_value);
  }

  v8::Local<v8::Value> wheel_delta_x_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&wheel_delta_x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (wheel_delta_x_value.IsEmpty() || wheel_delta_x_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t wheel_delta_x_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, wheel_delta_x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWheelDeltaX(wheel_delta_x_cpp_value);
  }

  v8::Local<v8::Value> wheel_delta_y_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&wheel_delta_y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (wheel_delta_y_value.IsEmpty() || wheel_delta_y_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t wheel_delta_y_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, wheel_delta_y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWheelDeltaY(wheel_delta_y_cpp_value);
  }
}

v8::Local<v8::Value> WheelEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WheelEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WheelEventInit(const WheelEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8MouseEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8WheelEventInitKeys(isolate);
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

  v8::Local<v8::Value> delta_mode_value;
  bool delta_mode_has_value_or_default = false;
  if (impl->hasDeltaMode()) {
    delta_mode_value = v8::Integer::NewFromUnsigned(isolate, impl->deltaMode());
    delta_mode_has_value_or_default = true;
  } else {
    delta_mode_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    delta_mode_has_value_or_default = true;
  }
  if (delta_mode_has_value_or_default &&
      !create_property(0, delta_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_x_value;
  bool delta_x_has_value_or_default = false;
  if (impl->hasDeltaX()) {
    delta_x_value = v8::Number::New(isolate, impl->deltaX());
    delta_x_has_value_or_default = true;
  } else {
    delta_x_value = v8::Number::New(isolate, 0);
    delta_x_has_value_or_default = true;
  }
  if (delta_x_has_value_or_default &&
      !create_property(1, delta_x_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_y_value;
  bool delta_y_has_value_or_default = false;
  if (impl->hasDeltaY()) {
    delta_y_value = v8::Number::New(isolate, impl->deltaY());
    delta_y_has_value_or_default = true;
  } else {
    delta_y_value = v8::Number::New(isolate, 0);
    delta_y_has_value_or_default = true;
  }
  if (delta_y_has_value_or_default &&
      !create_property(2, delta_y_value)) {
    return false;
  }

  v8::Local<v8::Value> delta_z_value;
  bool delta_z_has_value_or_default = false;
  if (impl->hasDeltaZ()) {
    delta_z_value = v8::Number::New(isolate, impl->deltaZ());
    delta_z_has_value_or_default = true;
  } else {
    delta_z_value = v8::Number::New(isolate, 0);
    delta_z_has_value_or_default = true;
  }
  if (delta_z_has_value_or_default &&
      !create_property(3, delta_z_value)) {
    return false;
  }

  v8::Local<v8::Value> wheel_delta_x_value;
  bool wheel_delta_x_has_value_or_default = false;
  if (impl->hasWheelDeltaX()) {
    wheel_delta_x_value = v8::Integer::New(isolate, impl->wheelDeltaX());
    wheel_delta_x_has_value_or_default = true;
  } else {
    wheel_delta_x_value = v8::Integer::New(isolate, 0);
    wheel_delta_x_has_value_or_default = true;
  }
  if (wheel_delta_x_has_value_or_default &&
      !create_property(4, wheel_delta_x_value)) {
    return false;
  }

  v8::Local<v8::Value> wheel_delta_y_value;
  bool wheel_delta_y_has_value_or_default = false;
  if (impl->hasWheelDeltaY()) {
    wheel_delta_y_value = v8::Integer::New(isolate, impl->wheelDeltaY());
    wheel_delta_y_has_value_or_default = true;
  } else {
    wheel_delta_y_value = v8::Integer::New(isolate, 0);
    wheel_delta_y_has_value_or_default = true;
  }
  if (wheel_delta_y_has_value_or_default &&
      !create_property(5, wheel_delta_y_value)) {
    return false;
  }

  return true;
}

WheelEventInit* NativeValueTraits<WheelEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WheelEventInit* impl = WheelEventInit::Create();
  V8WheelEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
