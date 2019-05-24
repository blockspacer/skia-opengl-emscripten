// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioNodeOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "channelCount",
    "channelCountMode",
    "channelInterpretation",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8AudioNodeOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, AudioNodeOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioNodeOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channel_count_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&channel_count_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channel_count_value.IsEmpty() || channel_count_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t channel_count_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, channel_count_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setChannelCount(channel_count_cpp_value);
  }

  v8::Local<v8::Value> channel_count_mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&channel_count_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channel_count_mode_value.IsEmpty() || channel_count_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channel_count_mode_cpp_value = channel_count_mode_value;
    if (!channel_count_mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "max",
        "clamped-max",
        "explicit",
    };
    if (!IsValidEnum(channel_count_mode_cpp_value, kValidValues, base::size(kValidValues), "ChannelCountMode", exception_state))
      return;
    impl->setChannelCountMode(channel_count_mode_cpp_value);
  }

  v8::Local<v8::Value> channel_interpretation_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&channel_interpretation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (channel_interpretation_value.IsEmpty() || channel_interpretation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channel_interpretation_cpp_value = channel_interpretation_value;
    if (!channel_interpretation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "speakers",
        "discrete",
    };
    if (!IsValidEnum(channel_interpretation_cpp_value, kValidValues, base::size(kValidValues), "ChannelInterpretation", exception_state))
      return;
    impl->setChannelInterpretation(channel_interpretation_cpp_value);
  }
}

v8::Local<v8::Value> AudioNodeOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioNodeOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioNodeOptions(const AudioNodeOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioNodeOptionsKeys(isolate);
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

  v8::Local<v8::Value> channel_count_value;
  bool channel_count_has_value_or_default = false;
  if (impl->hasChannelCount()) {
    channel_count_value = v8::Integer::NewFromUnsigned(isolate, impl->channelCount());
    channel_count_has_value_or_default = true;
  }
  if (channel_count_has_value_or_default &&
      !create_property(0, channel_count_value)) {
    return false;
  }

  v8::Local<v8::Value> channel_count_mode_value;
  bool channel_count_mode_has_value_or_default = false;
  if (impl->hasChannelCountMode()) {
    channel_count_mode_value = V8String(isolate, impl->channelCountMode());
    channel_count_mode_has_value_or_default = true;
  }
  if (channel_count_mode_has_value_or_default &&
      !create_property(1, channel_count_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> channel_interpretation_value;
  bool channel_interpretation_has_value_or_default = false;
  if (impl->hasChannelInterpretation()) {
    channel_interpretation_value = V8String(isolate, impl->channelInterpretation());
    channel_interpretation_has_value_or_default = true;
  }
  if (channel_interpretation_has_value_or_default &&
      !create_property(2, channel_interpretation_value)) {
    return false;
  }

  return true;
}

AudioNodeOptions* NativeValueTraits<AudioNodeOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AudioNodeOptions* impl = AudioNodeOptions::Create();
  V8AudioNodeOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
