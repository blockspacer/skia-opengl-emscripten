// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_message_result.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MojoReadMessageResultKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "handles",
    "result",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MojoReadMessageResult::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MojoReadMessageResult* impl, ExceptionState& exception_state) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadMessageResultKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buffer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buffer_value.IsEmpty() || buffer_value->IsUndefined()) {
    // Do nothing.
  } else {
    DOMArrayBuffer* buffer_cpp_value = buffer_value->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(buffer_value)) : 0;
    if (!buffer_cpp_value) {
      exception_state.ThrowTypeError("member buffer is not of type ArrayBuffer.");
      return;
    }
    impl->setBuffer(buffer_cpp_value);
  }

  v8::Local<v8::Value> handles_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&handles_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (handles_value.IsEmpty() || handles_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MojoHandle>> handles_cpp_value = NativeValueTraits<IDLSequence<MojoHandle>>::NativeValue(isolate, handles_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHandles(handles_cpp_value);
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

v8::Local<v8::Value> MojoReadMessageResult::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MojoReadMessageResult(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MojoReadMessageResult(const MojoReadMessageResult* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MojoReadMessageResultKeys(isolate);
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

  v8::Local<v8::Value> buffer_value;
  bool buffer_has_value_or_default = false;
  if (impl->hasBuffer()) {
    buffer_value = ToV8(impl->buffer(), creationContext, isolate);
    buffer_has_value_or_default = true;
  }
  if (buffer_has_value_or_default &&
      !create_property(0, buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> handles_value;
  bool handles_has_value_or_default = false;
  if (impl->hasHandles()) {
    handles_value = ToV8(impl->handles(), creationContext, isolate);
    handles_has_value_or_default = true;
  }
  if (handles_has_value_or_default &&
      !create_property(1, handles_value)) {
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

MojoReadMessageResult* NativeValueTraits<MojoReadMessageResult>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoReadMessageResult* impl = MojoReadMessageResult::Create();
  V8MojoReadMessageResult::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
