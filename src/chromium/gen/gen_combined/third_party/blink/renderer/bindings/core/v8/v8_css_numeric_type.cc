// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_type.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CSSNumericTypeKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "angle",
    "flex",
    "frequency",
    "length",
    "percent",
    "percentHint",
    "resolution",
    "time",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CSSNumericType::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CSSNumericType* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CSSNumericTypeKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> angle_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&angle_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (angle_value.IsEmpty() || angle_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t angle_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, angle_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAngle(angle_cpp_value);
  }

  v8::Local<v8::Value> flex_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&flex_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (flex_value.IsEmpty() || flex_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t flex_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, flex_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFlex(flex_cpp_value);
  }

  v8::Local<v8::Value> frequency_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&frequency_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (frequency_value.IsEmpty() || frequency_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t frequency_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, frequency_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFrequency(frequency_cpp_value);
  }

  v8::Local<v8::Value> length_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&length_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (length_value.IsEmpty() || length_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t length_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, length_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLength(length_cpp_value);
  }

  v8::Local<v8::Value> percent_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&percent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (percent_value.IsEmpty() || percent_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t percent_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, percent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPercent(percent_cpp_value);
  }

  v8::Local<v8::Value> percent_hint_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&percent_hint_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (percent_hint_value.IsEmpty() || percent_hint_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> percent_hint_cpp_value = percent_hint_value;
    if (!percent_hint_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "length",
        "angle",
        "time",
        "frequency",
        "resolution",
        "flex",
        "percent",
        nullptr,
    };
    if (!IsValidEnum(percent_hint_cpp_value, kValidValues, base::size(kValidValues), "CSSNumericBaseType", exception_state))
      return;
    impl->setPercentHint(percent_hint_cpp_value);
  }

  v8::Local<v8::Value> resolution_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&resolution_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resolution_value.IsEmpty() || resolution_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t resolution_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, resolution_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResolution(resolution_cpp_value);
  }

  v8::Local<v8::Value> time_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (time_value.IsEmpty() || time_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t time_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTime(time_cpp_value);
  }
}

v8::Local<v8::Value> CSSNumericType::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CSSNumericType(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CSSNumericType(const CSSNumericType* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CSSNumericTypeKeys(isolate);
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

  v8::Local<v8::Value> angle_value;
  bool angle_has_value_or_default = false;
  if (impl->hasAngle()) {
    angle_value = v8::Integer::New(isolate, impl->angle());
    angle_has_value_or_default = true;
  }
  if (angle_has_value_or_default &&
      !create_property(0, angle_value)) {
    return false;
  }

  v8::Local<v8::Value> flex_value;
  bool flex_has_value_or_default = false;
  if (impl->hasFlex()) {
    flex_value = v8::Integer::New(isolate, impl->flex());
    flex_has_value_or_default = true;
  }
  if (flex_has_value_or_default &&
      !create_property(1, flex_value)) {
    return false;
  }

  v8::Local<v8::Value> frequency_value;
  bool frequency_has_value_or_default = false;
  if (impl->hasFrequency()) {
    frequency_value = v8::Integer::New(isolate, impl->frequency());
    frequency_has_value_or_default = true;
  }
  if (frequency_has_value_or_default &&
      !create_property(2, frequency_value)) {
    return false;
  }

  v8::Local<v8::Value> length_value;
  bool length_has_value_or_default = false;
  if (impl->hasLength()) {
    length_value = v8::Integer::New(isolate, impl->length());
    length_has_value_or_default = true;
  }
  if (length_has_value_or_default &&
      !create_property(3, length_value)) {
    return false;
  }

  v8::Local<v8::Value> percent_value;
  bool percent_has_value_or_default = false;
  if (impl->hasPercent()) {
    percent_value = v8::Integer::New(isolate, impl->percent());
    percent_has_value_or_default = true;
  }
  if (percent_has_value_or_default &&
      !create_property(4, percent_value)) {
    return false;
  }

  v8::Local<v8::Value> percent_hint_value;
  bool percent_hint_has_value_or_default = false;
  if (impl->hasPercentHint()) {
    percent_hint_value = V8String(isolate, impl->percentHint());
    percent_hint_has_value_or_default = true;
  }
  if (percent_hint_has_value_or_default &&
      !create_property(5, percent_hint_value)) {
    return false;
  }

  v8::Local<v8::Value> resolution_value;
  bool resolution_has_value_or_default = false;
  if (impl->hasResolution()) {
    resolution_value = v8::Integer::New(isolate, impl->resolution());
    resolution_has_value_or_default = true;
  }
  if (resolution_has_value_or_default &&
      !create_property(6, resolution_value)) {
    return false;
  }

  v8::Local<v8::Value> time_value;
  bool time_has_value_or_default = false;
  if (impl->hasTime()) {
    time_value = v8::Integer::New(isolate, impl->time());
    time_has_value_or_default = true;
  }
  if (time_has_value_or_default &&
      !create_property(7, time_value)) {
    return false;
  }

  return true;
}

CSSNumericType* NativeValueTraits<CSSNumericType>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSNumericType* impl = CSSNumericType::Create();
  V8CSSNumericType::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
