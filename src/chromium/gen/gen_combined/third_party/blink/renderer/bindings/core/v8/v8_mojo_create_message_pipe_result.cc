// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_message_pipe_result.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoCreateMessagePipeResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "handle0",
    "handle1",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MojoCreateMessagePipeResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MojoCreateMessagePipeResult* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateMessagePipeResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> handle_0_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&handle_0_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (handle_0_value.IsEmpty() || handle_0_value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* handle_0_cpp_value = V8MojoHandle::ToImplWithTypeCheck(isolate, handle_0_value);
    if (!handle_0_cpp_value) {
      exception_state.ThrowTypeError("member handle0 is not of type MojoHandle.");
      return;
    }
    impl->setHandle0(handle_0_cpp_value);
  }

  v8::Local<v8::Value> handle_1_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&handle_1_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (handle_1_value.IsEmpty() || handle_1_value->IsUndefined()) {
    // Do nothing.
  } else {
    MojoHandle* handle_1_cpp_value = V8MojoHandle::ToImplWithTypeCheck(isolate, handle_1_value);
    if (!handle_1_cpp_value) {
      exception_state.ThrowTypeError("member handle1 is not of type MojoHandle.");
      return;
    }
    impl->setHandle1(handle_1_cpp_value);
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

v8::Local<v8::Value> MojoCreateMessagePipeResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoCreateMessagePipeResult(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoCreateMessagePipeResult(const MojoCreateMessagePipeResult* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoCreateMessagePipeResultKeys(isolate);
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

  v8::Local<v8::Value> handle_0_value;
  bool handle_0_has_value_or_default = false;
  if (impl->hasHandle0()) {
    handle_0_value = ToV8(impl->handle0(), creationContext, isolate);
    handle_0_has_value_or_default = true;
  }
  if (handle_0_has_value_or_default &&
      !create_property(0, handle_0_value)) {
    return false;
  }

  v8::Local<v8::Value> handle_1_value;
  bool handle_1_has_value_or_default = false;
  if (impl->hasHandle1()) {
    handle_1_value = ToV8(impl->handle1(), creationContext, isolate);
    handle_1_has_value_or_default = true;
  }
  if (handle_1_has_value_or_default &&
      !create_property(1, handle_1_value)) {
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

MojoCreateMessagePipeResult* NativeValueTraits<MojoCreateMessagePipeResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoCreateMessagePipeResult* impl = MojoCreateMessagePipeResult::Create();
  V8MojoCreateMessagePipeResult::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
