// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_binding.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBufferBindingKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "offset",
    "size",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBufferBinding::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBufferBinding* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): buffer, size.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferBindingKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buffer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buffer_value.IsEmpty() || buffer_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member buffer is undefined.");
    return;
  } else {
    GPUBuffer* buffer_cpp_value = V8GPUBuffer::ToImplWithTypeCheck(isolate, buffer_value);
    if (!buffer_cpp_value) {
      exception_state.ThrowTypeError("member buffer is not of type GPUBuffer.");
      return;
    }
    impl->setBuffer(buffer_cpp_value);
  }

  v8::Local<v8::Value> offset_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&offset_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (offset_value.IsEmpty() || offset_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t offset_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, offset_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOffset(offset_cpp_value);
  }

  v8::Local<v8::Value> size_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (size_value.IsEmpty() || size_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member size is undefined.");
    return;
  } else {
    uint64_t size_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSize(size_cpp_value);
  }
}

v8::Local<v8::Value> GPUBufferBinding::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBufferBinding(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBufferBinding(const GPUBufferBinding* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferBindingKeys(isolate);
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
  } else {
    NOTREACHED();
  }
  if (buffer_has_value_or_default &&
      !create_property(0, buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> offset_value;
  bool offset_has_value_or_default = false;
  if (impl->hasOffset()) {
    offset_value = v8::Number::New(isolate, static_cast<double>(impl->offset()));
    offset_has_value_or_default = true;
  } else {
    offset_value = v8::Number::New(isolate, static_cast<double>(0));
    offset_has_value_or_default = true;
  }
  if (offset_has_value_or_default &&
      !create_property(1, offset_value)) {
    return false;
  }

  v8::Local<v8::Value> size_value;
  bool size_has_value_or_default = false;
  if (impl->hasSize()) {
    size_value = v8::Number::New(isolate, static_cast<double>(impl->size()));
    size_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (size_has_value_or_default &&
      !create_property(2, size_value)) {
    return false;
  }

  return true;
}

GPUBufferBinding* NativeValueTraits<GPUBufferBinding>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBufferBinding* impl = GPUBufferBinding::Create();
  V8GPUBufferBinding::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
