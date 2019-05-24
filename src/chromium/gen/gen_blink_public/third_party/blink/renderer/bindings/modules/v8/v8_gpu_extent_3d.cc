// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_extent_3d.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUExtent3DKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "depth",
    "height",
    "width",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUExtent3D::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUExtent3D* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): depth, height, width.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUExtent3DKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> depth_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&depth_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_value.IsEmpty() || depth_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member depth is undefined.");
    return;
  } else {
    uint32_t depth_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, depth_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepth(depth_cpp_value);
  }

  v8::Local<v8::Value> height_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (height_value.IsEmpty() || height_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member height is undefined.");
    return;
  } else {
    uint32_t height_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, height_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setHeight(height_cpp_value);
  }

  v8::Local<v8::Value> width_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&width_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (width_value.IsEmpty() || width_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member width is undefined.");
    return;
  } else {
    uint32_t width_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, width_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setWidth(width_cpp_value);
  }
}

v8::Local<v8::Value> GPUExtent3D::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUExtent3D(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUExtent3D(const GPUExtent3D* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUExtent3DKeys(isolate);
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

  v8::Local<v8::Value> depth_value;
  bool depth_has_value_or_default = false;
  if (impl->hasDepth()) {
    depth_value = v8::Integer::NewFromUnsigned(isolate, impl->depth());
    depth_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (depth_has_value_or_default &&
      !create_property(0, depth_value)) {
    return false;
  }

  v8::Local<v8::Value> height_value;
  bool height_has_value_or_default = false;
  if (impl->hasHeight()) {
    height_value = v8::Integer::NewFromUnsigned(isolate, impl->height());
    height_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (height_has_value_or_default &&
      !create_property(1, height_value)) {
    return false;
  }

  v8::Local<v8::Value> width_value;
  bool width_has_value_or_default = false;
  if (impl->hasWidth()) {
    width_value = v8::Integer::NewFromUnsigned(isolate, impl->width());
    width_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (width_has_value_or_default &&
      !create_property(2, width_value)) {
    return false;
  }

  return true;
}

GPUExtent3D* NativeValueTraits<GPUExtent3D>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUExtent3D* impl = GPUExtent3D::Create();
  V8GPUExtent3D::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
