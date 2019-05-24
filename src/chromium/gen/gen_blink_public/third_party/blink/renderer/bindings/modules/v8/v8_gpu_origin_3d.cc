// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_origin_3d.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUOrigin3DKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "x",
    "y",
    "z",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUOrigin3D::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUOrigin3D* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): x, y, z.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUOrigin3DKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> x_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&x_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (x_value.IsEmpty() || x_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member x is undefined.");
    return;
  } else {
    uint32_t x_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, x_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setX(x_cpp_value);
  }

  v8::Local<v8::Value> y_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&y_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (y_value.IsEmpty() || y_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member y is undefined.");
    return;
  } else {
    uint32_t y_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, y_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setY(y_cpp_value);
  }

  v8::Local<v8::Value> z_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&z_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (z_value.IsEmpty() || z_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member z is undefined.");
    return;
  } else {
    uint32_t z_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, z_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setZ(z_cpp_value);
  }
}

v8::Local<v8::Value> GPUOrigin3D::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUOrigin3D(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUOrigin3D(const GPUOrigin3D* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUOrigin3DKeys(isolate);
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

  v8::Local<v8::Value> x_value;
  bool x_has_value_or_default = false;
  if (impl->hasX()) {
    x_value = v8::Integer::NewFromUnsigned(isolate, impl->x());
    x_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (x_has_value_or_default &&
      !create_property(0, x_value)) {
    return false;
  }

  v8::Local<v8::Value> y_value;
  bool y_has_value_or_default = false;
  if (impl->hasY()) {
    y_value = v8::Integer::NewFromUnsigned(isolate, impl->y());
    y_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (y_has_value_or_default &&
      !create_property(1, y_value)) {
    return false;
  }

  v8::Local<v8::Value> z_value;
  bool z_has_value_or_default = false;
  if (impl->hasZ()) {
    z_value = v8::Integer::NewFromUnsigned(isolate, impl->z());
    z_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (z_has_value_or_default &&
      !create_property(2, z_value)) {
    return false;
  }

  return true;
}

GPUOrigin3D* NativeValueTraits<GPUOrigin3D>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUOrigin3D* impl = GPUOrigin3D::Create();
  V8GPUOrigin3D::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
