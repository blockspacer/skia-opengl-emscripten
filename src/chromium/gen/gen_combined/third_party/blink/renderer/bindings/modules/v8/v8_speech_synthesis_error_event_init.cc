// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_error_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_synthesis_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SpeechSynthesisErrorEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "error",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SpeechSynthesisErrorEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SpeechSynthesisErrorEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): error.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8SpeechSynthesisEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechSynthesisErrorEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> error_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&error_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (error_value.IsEmpty() || error_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member error is undefined.");
    return;
  } else {
    V8StringResource<> error_cpp_value = error_value;
    if (!error_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "canceled",
        "interrupted",
        "audio-busy",
        "audio-hardware",
        "network",
        "synthesis-unavailable",
        "synthesis-failed",
        "language-unavailable",
        "voice-unavailable",
        "text-too-long",
        "invalid-argument",
        "not-allowed",
    };
    if (!IsValidEnum(error_cpp_value, kValidValues, base::size(kValidValues), "SpeechSynthesisErrorCode", exception_state))
      return;
    impl->setError(error_cpp_value);
  }
}

v8::Local<v8::Value> SpeechSynthesisErrorEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SpeechSynthesisErrorEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SpeechSynthesisErrorEventInit(const SpeechSynthesisErrorEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8SpeechSynthesisEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechSynthesisErrorEventInitKeys(isolate);
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

  v8::Local<v8::Value> error_value;
  bool error_has_value_or_default = false;
  if (impl->hasError()) {
    error_value = V8String(isolate, impl->error());
    error_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (error_has_value_or_default &&
      !create_property(0, error_value)) {
    return false;
  }

  return true;
}

SpeechSynthesisErrorEventInit* NativeValueTraits<SpeechSynthesisErrorEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpeechSynthesisErrorEventInit* impl = SpeechSynthesisErrorEventInit::Create();
  V8SpeechSynthesisErrorEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
