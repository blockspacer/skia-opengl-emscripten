// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_result_list.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SpeechRecognitionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "resultIndex",
    "results",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8SpeechRecognitionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, SpeechRecognitionEventInit* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> result_index_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&result_index_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (result_index_value.IsEmpty() || result_index_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t result_index_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, result_index_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResultIndex(result_index_cpp_value);
  }

  v8::Local<v8::Value> results_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&results_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (results_value.IsEmpty() || results_value->IsUndefined()) {
    // Do nothing.
  } else if (results_value->IsNull()) {
    impl->setResultsToNull();
  } else {
    SpeechRecognitionResultList* results_cpp_value = V8SpeechRecognitionResultList::ToImplWithTypeCheck(isolate, results_value);
    if (!results_cpp_value) {
      exception_state.ThrowTypeError("member results is not of type SpeechRecognitionResultList.");
      return;
    }
    impl->setResults(results_cpp_value);
  }
}

v8::Local<v8::Value> SpeechRecognitionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SpeechRecognitionEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SpeechRecognitionEventInit(const SpeechRecognitionEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionEventInitKeys(isolate);
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

  v8::Local<v8::Value> result_index_value;
  bool result_index_has_value_or_default = false;
  if (impl->hasResultIndex()) {
    result_index_value = v8::Integer::NewFromUnsigned(isolate, impl->resultIndex());
    result_index_has_value_or_default = true;
  }
  if (result_index_has_value_or_default &&
      !create_property(0, result_index_value)) {
    return false;
  }

  v8::Local<v8::Value> results_value;
  bool results_has_value_or_default = false;
  if (impl->hasResults()) {
    results_value = ToV8(impl->results(), creationContext, isolate);
    results_has_value_or_default = true;
  }
  if (results_has_value_or_default &&
      !create_property(1, results_value)) {
    return false;
  }

  return true;
}

SpeechRecognitionEventInit* NativeValueTraits<SpeechRecognitionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SpeechRecognitionEventInit* impl = SpeechRecognitionEventInit::Create();
  V8SpeechRecognitionEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
