// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_animation_playback_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AnimationPlaybackEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "currentTime",
    "timelineTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AnimationPlaybackEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AnimationPlaybackEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationPlaybackEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> current_time_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&current_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (current_time_value.IsEmpty() || current_time_value->IsUndefined()) {
    // Do nothing.
  } else if (current_time_value->IsNull()) {
    impl->setCurrentTimeToNull();
  } else {
    double current_time_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, current_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCurrentTime(current_time_cpp_value);
  }

  v8::Local<v8::Value> timeline_time_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&timeline_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timeline_time_value.IsEmpty() || timeline_time_value->IsUndefined()) {
    // Do nothing.
  } else if (timeline_time_value->IsNull()) {
    impl->setTimelineTimeToNull();
  } else {
    double timeline_time_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, timeline_time_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimelineTime(timeline_time_cpp_value);
  }
}

v8::Local<v8::Value> AnimationPlaybackEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AnimationPlaybackEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AnimationPlaybackEventInit(const AnimationPlaybackEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8AnimationPlaybackEventInitKeys(isolate);
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

  v8::Local<v8::Value> current_time_value;
  bool current_time_has_value_or_default = false;
  if (impl->hasCurrentTime()) {
    current_time_value = v8::Number::New(isolate, impl->currentTime());
    current_time_has_value_or_default = true;
  } else {
    current_time_value = v8::Null(isolate);
    current_time_has_value_or_default = true;
  }
  if (current_time_has_value_or_default &&
      !create_property(0, current_time_value)) {
    return false;
  }

  v8::Local<v8::Value> timeline_time_value;
  bool timeline_time_has_value_or_default = false;
  if (impl->hasTimelineTime()) {
    timeline_time_value = v8::Number::New(isolate, impl->timelineTime());
    timeline_time_has_value_or_default = true;
  } else {
    timeline_time_value = v8::Null(isolate);
    timeline_time_has_value_or_default = true;
  }
  if (timeline_time_has_value_or_default &&
      !create_property(1, timeline_time_value)) {
    return false;
  }

  return true;
}

AnimationPlaybackEventInit* NativeValueTraits<AnimationPlaybackEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AnimationPlaybackEventInit* impl = AnimationPlaybackEventInit::Create();
  V8AnimationPlaybackEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
