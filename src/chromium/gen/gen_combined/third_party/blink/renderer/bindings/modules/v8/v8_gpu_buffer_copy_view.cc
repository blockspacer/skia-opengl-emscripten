// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_copy_view.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBufferCopyViewKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "imageHeight",
    "offset",
    "rowPitch",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBufferCopyView::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBufferCopyView* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): buffer, imageHeight, rowPitch.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferCopyViewKeys(isolate);
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

  v8::Local<v8::Value> image_height_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&image_height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (image_height_value.IsEmpty() || image_height_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member imageHeight is undefined.");
    return;
  } else {
    uint32_t image_height_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, image_height_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setImageHeight(image_height_cpp_value);
  }

  v8::Local<v8::Value> offset_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&offset_value)) {
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

  v8::Local<v8::Value> row_pitch_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&row_pitch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (row_pitch_value.IsEmpty() || row_pitch_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member rowPitch is undefined.");
    return;
  } else {
    uint32_t row_pitch_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, row_pitch_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRowPitch(row_pitch_cpp_value);
  }
}

v8::Local<v8::Value> GPUBufferCopyView::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBufferCopyView(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBufferCopyView(const GPUBufferCopyView* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBufferCopyViewKeys(isolate);
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

  v8::Local<v8::Value> image_height_value;
  bool image_height_has_value_or_default = false;
  if (impl->hasImageHeight()) {
    image_height_value = v8::Integer::NewFromUnsigned(isolate, impl->imageHeight());
    image_height_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (image_height_has_value_or_default &&
      !create_property(1, image_height_value)) {
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
      !create_property(2, offset_value)) {
    return false;
  }

  v8::Local<v8::Value> row_pitch_value;
  bool row_pitch_has_value_or_default = false;
  if (impl->hasRowPitch()) {
    row_pitch_value = v8::Integer::NewFromUnsigned(isolate, impl->rowPitch());
    row_pitch_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (row_pitch_has_value_or_default &&
      !create_property(3, row_pitch_value)) {
    return false;
  }

  return true;
}

GPUBufferCopyView* NativeValueTraits<GPUBufferCopyView>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBufferCopyView* impl = GPUBufferCopyView::Create();
  V8GPUBufferCopyView::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
