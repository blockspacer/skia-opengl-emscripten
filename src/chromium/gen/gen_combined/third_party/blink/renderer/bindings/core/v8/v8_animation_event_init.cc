// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnimationEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "animationName",
    "elapsedTime",
    "pseudoElement",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AnimationEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AnimationEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> animation_name_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&animation_name_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (animation_name_value.IsEmpty() || animation_name_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> animation_name_cpp_value = animation_name_value;
    if (!animation_name_cpp_value.Prepare(exception_state))
      return;
    impl->setAnimationName(animation_name_cpp_value);
  }

  v8::Local<v8::Value> elapsed_time_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&elapsed_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (elapsed_time_value.IsEmpty() || elapsed_time_value->IsUndefined()) {
    // Do nothing.
  } else {
    double elapsed_time_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, elapsed_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setElapsedTime(elapsed_time_cpp_value);
  }

  v8::Local<v8::Value> pseudo_element_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&pseudo_element_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pseudo_element_value.IsEmpty() || pseudo_element_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pseudo_element_cpp_value = pseudo_element_value;
    if (!pseudo_element_cpp_value.Prepare(exception_state))
      return;
    impl->setPseudoElement(pseudo_element_cpp_value);
  }
}

v8::Local<v8::Value> AnimationEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnimationEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnimationEventInit(const AnimationEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationEventInitKeys(isolate);
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

  v8::Local<v8::Value> animation_name_value;
  bool animation_name_has_value_or_default = false;
  if (impl->hasAnimationName()) {
    animation_name_value = V8String(isolate, impl->animationName());
    animation_name_has_value_or_default = true;
  } else {
    animation_name_value = V8String(isolate, WTF::g_empty_string);
    animation_name_has_value_or_default = true;
  }
  if (animation_name_has_value_or_default &&
      !create_property(0, animation_name_value)) {
    return false;
  }

  v8::Local<v8::Value> elapsed_time_value;
  bool elapsed_time_has_value_or_default = false;
  if (impl->hasElapsedTime()) {
    elapsed_time_value = v8::Number::New(isolate, impl->elapsedTime());
    elapsed_time_has_value_or_default = true;
  } else {
    elapsed_time_value = v8::Number::New(isolate, 0);
    elapsed_time_has_value_or_default = true;
  }
  if (elapsed_time_has_value_or_default &&
      !create_property(1, elapsed_time_value)) {
    return false;
  }

  v8::Local<v8::Value> pseudo_element_value;
  bool pseudo_element_has_value_or_default = false;
  if (impl->hasPseudoElement()) {
    pseudo_element_value = V8String(isolate, impl->pseudoElement());
    pseudo_element_has_value_or_default = true;
  } else {
    pseudo_element_value = V8String(isolate, WTF::g_empty_string);
    pseudo_element_has_value_or_default = true;
  }
  if (pseudo_element_has_value_or_default &&
      !create_property(2, pseudo_element_value)) {
    return false;
  }

  return true;
}

AnimationEventInit* NativeValueTraits<AnimationEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnimationEventInit* impl = AnimationEventInit::Create();
  V8AnimationEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
