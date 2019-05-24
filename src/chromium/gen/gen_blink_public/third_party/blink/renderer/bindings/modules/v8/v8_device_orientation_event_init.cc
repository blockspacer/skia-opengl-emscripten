// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_device_orientation_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DeviceOrientationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "absolute",
    "alpha",
    "beta",
    "gamma",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8DeviceOrientationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, DeviceOrientationEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceOrientationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> absolute_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&absolute_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (absolute_value.IsEmpty() || absolute_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool absolute_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, absolute_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAbsolute(absolute_cpp_value);
  }

  v8::Local<v8::Value> alpha_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&alpha_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alpha_value.IsEmpty() || alpha_value->IsUndefined()) {
    // Do nothing.
  } else if (alpha_value->IsNull()) {
    impl->setAlphaToNull();
  } else {
    double alpha_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, alpha_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAlpha(alpha_cpp_value);
  }

  v8::Local<v8::Value> beta_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&beta_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (beta_value.IsEmpty() || beta_value->IsUndefined()) {
    // Do nothing.
  } else if (beta_value->IsNull()) {
    impl->setBetaToNull();
  } else {
    double beta_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, beta_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBeta(beta_cpp_value);
  }

  v8::Local<v8::Value> gamma_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&gamma_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (gamma_value.IsEmpty() || gamma_value->IsUndefined()) {
    // Do nothing.
  } else if (gamma_value->IsNull()) {
    impl->setGammaToNull();
  } else {
    double gamma_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, gamma_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setGamma(gamma_cpp_value);
  }
}

v8::Local<v8::Value> DeviceOrientationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DeviceOrientationEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DeviceOrientationEventInit(const DeviceOrientationEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DeviceOrientationEventInitKeys(isolate);
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

  v8::Local<v8::Value> absolute_value;
  bool absolute_has_value_or_default = false;
  if (impl->hasAbsolute()) {
    absolute_value = v8::Boolean::New(isolate, impl->absolute());
    absolute_has_value_or_default = true;
  } else {
    absolute_value = v8::Boolean::New(isolate, false);
    absolute_has_value_or_default = true;
  }
  if (absolute_has_value_or_default &&
      !create_property(0, absolute_value)) {
    return false;
  }

  v8::Local<v8::Value> alpha_value;
  bool alpha_has_value_or_default = false;
  if (impl->hasAlpha()) {
    alpha_value = v8::Number::New(isolate, impl->alpha());
    alpha_has_value_or_default = true;
  } else {
    alpha_value = v8::Null(isolate);
    alpha_has_value_or_default = true;
  }
  if (alpha_has_value_or_default &&
      !create_property(1, alpha_value)) {
    return false;
  }

  v8::Local<v8::Value> beta_value;
  bool beta_has_value_or_default = false;
  if (impl->hasBeta()) {
    beta_value = v8::Number::New(isolate, impl->beta());
    beta_has_value_or_default = true;
  } else {
    beta_value = v8::Null(isolate);
    beta_has_value_or_default = true;
  }
  if (beta_has_value_or_default &&
      !create_property(2, beta_value)) {
    return false;
  }

  v8::Local<v8::Value> gamma_value;
  bool gamma_has_value_or_default = false;
  if (impl->hasGamma()) {
    gamma_value = v8::Number::New(isolate, impl->gamma());
    gamma_has_value_or_default = true;
  } else {
    gamma_value = v8::Null(isolate);
    gamma_has_value_or_default = true;
  }
  if (gamma_has_value_or_default &&
      !create_property(3, gamma_value)) {
    return false;
  }

  return true;
}

DeviceOrientationEventInit* NativeValueTraits<DeviceOrientationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DeviceOrientationEventInit* impl = DeviceOrientationEventInit::Create();
  V8DeviceOrientationEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
