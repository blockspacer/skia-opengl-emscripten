// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_position_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PositionOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "enableHighAccuracy",
    "maximumAge",
    "timeout",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PositionOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PositionOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PositionOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> enable_high_accuracy_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&enable_high_accuracy_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (enable_high_accuracy_value.IsEmpty() || enable_high_accuracy_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool enable_high_accuracy_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, enable_high_accuracy_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEnableHighAccuracy(enable_high_accuracy_cpp_value);
  }

  v8::Local<v8::Value> maximum_age_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maximum_age_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (maximum_age_value.IsEmpty() || maximum_age_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t maximum_age_cpp_value = NativeValueTraits<IDLUnsignedLongClamp>::NativeValue(isolate, maximum_age_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaximumAge(maximum_age_cpp_value);
  }

  v8::Local<v8::Value> timeout_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&timeout_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeout_value.IsEmpty() || timeout_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t timeout_cpp_value = NativeValueTraits<IDLUnsignedLongClamp>::NativeValue(isolate, timeout_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimeout(timeout_cpp_value);
  }
}

v8::Local<v8::Value> PositionOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PositionOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PositionOptions(const PositionOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PositionOptionsKeys(isolate);
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

  v8::Local<v8::Value> enable_high_accuracy_value;
  bool enable_high_accuracy_has_value_or_default = false;
  if (impl->hasEnableHighAccuracy()) {
    enable_high_accuracy_value = v8::Boolean::New(isolate, impl->enableHighAccuracy());
    enable_high_accuracy_has_value_or_default = true;
  } else {
    enable_high_accuracy_value = v8::Boolean::New(isolate, false);
    enable_high_accuracy_has_value_or_default = true;
  }
  if (enable_high_accuracy_has_value_or_default &&
      !create_property(0, enable_high_accuracy_value)) {
    return false;
  }

  v8::Local<v8::Value> maximum_age_value;
  bool maximum_age_has_value_or_default = false;
  if (impl->hasMaximumAge()) {
    maximum_age_value = v8::Integer::NewFromUnsigned(isolate, impl->maximumAge());
    maximum_age_has_value_or_default = true;
  } else {
    maximum_age_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    maximum_age_has_value_or_default = true;
  }
  if (maximum_age_has_value_or_default &&
      !create_property(1, maximum_age_value)) {
    return false;
  }

  v8::Local<v8::Value> timeout_value;
  bool timeout_has_value_or_default = false;
  if (impl->hasTimeout()) {
    timeout_value = v8::Integer::NewFromUnsigned(isolate, impl->timeout());
    timeout_has_value_or_default = true;
  } else {
    timeout_value = v8::Integer::NewFromUnsigned(isolate, 4294967295u);
    timeout_has_value_or_default = true;
  }
  if (timeout_has_value_or_default &&
      !create_property(2, timeout_value)) {
    return false;
  }

  return true;
}

PositionOptions* NativeValueTraits<PositionOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PositionOptions* impl = PositionOptions::Create();
  V8PositionOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
