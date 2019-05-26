// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_param_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioParamDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "automationRate",
    "defaultValue",
    "maxValue",
    "minValue",
    "name",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioParamDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioParamDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): name.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioParamDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> automation_rate_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&automation_rate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (automation_rate_value.IsEmpty() || automation_rate_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> automation_rate_cpp_value = automation_rate_value;
    if (!automation_rate_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "a-rate",
        "k-rate",
    };
    if (!IsValidEnum(automation_rate_cpp_value, kValidValues, base::size(kValidValues), "AutomationRate", exception_state))
      return;
    impl->setAutomationRate(automation_rate_cpp_value);
  }

  v8::Local<v8::Value> default_value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&default_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (default_value_value.IsEmpty() || default_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    float default_value_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, default_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDefaultValue(default_value_cpp_value);
  }

  v8::Local<v8::Value> max_value_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&max_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_value_value.IsEmpty() || max_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    float max_value_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, max_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxValue(max_value_cpp_value);
  }

  v8::Local<v8::Value> min_value_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&min_value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_value_value.IsEmpty() || min_value_value->IsUndefined()) {
    // Do nothing.
  } else {
    float min_value_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, min_value_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMinValue(min_value_cpp_value);
  }

  v8::Local<v8::Value> name_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (name_value.IsEmpty() || name_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member name is undefined.");
    return;
  } else {
    V8StringResource<> name_cpp_value = name_value;
    if (!name_cpp_value.Prepare(exception_state))
      return;
    impl->setName(name_cpp_value);
  }
}

v8::Local<v8::Value> AudioParamDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioParamDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioParamDescriptor(const AudioParamDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioParamDescriptorKeys(isolate);
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

  v8::Local<v8::Value> automation_rate_value;
  bool automation_rate_has_value_or_default = false;
  if (impl->hasAutomationRate()) {
    automation_rate_value = V8String(isolate, impl->automationRate());
    automation_rate_has_value_or_default = true;
  } else {
    automation_rate_value = V8String(isolate, "a-rate");
    automation_rate_has_value_or_default = true;
  }
  if (automation_rate_has_value_or_default &&
      !create_property(0, automation_rate_value)) {
    return false;
  }

  v8::Local<v8::Value> default_value_value;
  bool default_value_has_value_or_default = false;
  if (impl->hasDefaultValue()) {
    default_value_value = v8::Number::New(isolate, impl->defaultValue());
    default_value_has_value_or_default = true;
  } else {
    default_value_value = v8::Number::New(isolate, 0);
    default_value_has_value_or_default = true;
  }
  if (default_value_has_value_or_default &&
      !create_property(1, default_value_value)) {
    return false;
  }

  v8::Local<v8::Value> max_value_value;
  bool max_value_has_value_or_default = false;
  if (impl->hasMaxValue()) {
    max_value_value = v8::Number::New(isolate, impl->maxValue());
    max_value_has_value_or_default = true;
  } else {
    max_value_value = v8::Number::New(isolate, 3.40282e+38);
    max_value_has_value_or_default = true;
  }
  if (max_value_has_value_or_default &&
      !create_property(2, max_value_value)) {
    return false;
  }

  v8::Local<v8::Value> min_value_value;
  bool min_value_has_value_or_default = false;
  if (impl->hasMinValue()) {
    min_value_value = v8::Number::New(isolate, impl->minValue());
    min_value_has_value_or_default = true;
  } else {
    min_value_value = v8::Number::New(isolate, -3.40282e+38);
    min_value_has_value_or_default = true;
  }
  if (min_value_has_value_or_default &&
      !create_property(3, min_value_value)) {
    return false;
  }

  v8::Local<v8::Value> name_value;
  bool name_has_value_or_default = false;
  if (impl->hasName()) {
    name_value = V8String(isolate, impl->name());
    name_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (name_has_value_or_default &&
      !create_property(4, name_value)) {
    return false;
  }

  return true;
}

AudioParamDescriptor* NativeValueTraits<AudioParamDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioParamDescriptor* impl = AudioParamDescriptor::Create();
  V8AudioParamDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
