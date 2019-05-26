// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_data_pipe_result.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoCreateDataPipeResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "consumer",
    "producer",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MojoCreateDataPipeResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MojoCreateDataPipeResult* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): result.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateDataPipeResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> consumer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&consumer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (consumer_value.IsEmpty() || consumer_value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* consumer_cpp_value = V8MojoHandle::ToImplWithTypeCheck(isolate, consumer_value);
    if (!consumer_cpp_value) {
      exception_state.ThrowTypeError("member consumer is not of type MojoHandle.");
      return;
    }
    impl->setConsumer(consumer_cpp_value);
  }

  v8::Local<v8::Value> producer_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&producer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (producer_value.IsEmpty() || producer_value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* producer_cpp_value = V8MojoHandle::ToImplWithTypeCheck(isolate, producer_value);
    if (!producer_cpp_value) {
      exception_state.ThrowTypeError("member producer is not of type MojoHandle.");
      return;
    }
    impl->setProducer(producer_cpp_value);
  }

  v8::Local<v8::Value> result_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&result_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (result_value.IsEmpty() || result_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member result is undefined.");
    return;
  } else {
    uint32_t result_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, result_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResult(result_cpp_value);
  }
}

v8::Local<v8::Value> MojoCreateDataPipeResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoCreateDataPipeResult(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoCreateDataPipeResult(const MojoCreateDataPipeResult* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateDataPipeResultKeys(isolate);
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

  v8::Local<v8::Value> consumer_value;
  bool consumer_has_value_or_default = false;
  if (impl->hasConsumer()) {
    consumer_value = ToV8(impl->consumer(), creationContext, isolate);
    consumer_has_value_or_default = true;
  }
  if (consumer_has_value_or_default &&
      !create_property(0, consumer_value)) {
    return false;
  }

  v8::Local<v8::Value> producer_value;
  bool producer_has_value_or_default = false;
  if (impl->hasProducer()) {
    producer_value = ToV8(impl->producer(), creationContext, isolate);
    producer_has_value_or_default = true;
  }
  if (producer_has_value_or_default &&
      !create_property(1, producer_value)) {
    return false;
  }

  v8::Local<v8::Value> result_value;
  bool result_has_value_or_default = false;
  if (impl->hasResult()) {
    result_value = v8::Integer::NewFromUnsigned(isolate, impl->result());
    result_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (result_has_value_or_default &&
      !create_property(2, result_value)) {
    return false;
  }

  return true;
}

MojoCreateDataPipeResult* NativeValueTraits<MojoCreateDataPipeResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoCreateDataPipeResult* impl = MojoCreateDataPipeResult::Create();
  V8MojoCreateDataPipeResult::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
