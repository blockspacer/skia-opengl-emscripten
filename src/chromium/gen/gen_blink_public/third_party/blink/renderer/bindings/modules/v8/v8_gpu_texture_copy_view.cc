// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture_copy_view.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_origin_3d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_texture.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUTextureCopyViewKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "arrayLayer",
    "mipLevel",
    "origin",
    "texture",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUTextureCopyView::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUTextureCopyView* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): origin, texture.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureCopyViewKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> array_layer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&array_layer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (array_layer_value.IsEmpty() || array_layer_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t array_layer_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, array_layer_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setArrayLayer(array_layer_cpp_value);
  }

  v8::Local<v8::Value> mip_level_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mip_level_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mip_level_value.IsEmpty() || mip_level_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t mip_level_cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, mip_level_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMipLevel(mip_level_cpp_value);
  }

  v8::Local<v8::Value> origin_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&origin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (origin_value.IsEmpty() || origin_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member origin is undefined.");
    return;
  } else {
    GPUOrigin3D* origin_cpp_value = NativeValueTraits<GPUOrigin3D>::NativeValue(isolate, origin_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setOrigin(origin_cpp_value);
  }

  v8::Local<v8::Value> texture_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&texture_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (texture_value.IsEmpty() || texture_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member texture is undefined.");
    return;
  } else {
    GPUTexture* texture_cpp_value = V8GPUTexture::ToImplWithTypeCheck(isolate, texture_value);
    if (!texture_cpp_value) {
      exception_state.ThrowTypeError("member texture is not of type GPUTexture.");
      return;
    }
    impl->setTexture(texture_cpp_value);
  }
}

v8::Local<v8::Value> GPUTextureCopyView::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUTextureCopyView(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUTextureCopyView(const GPUTextureCopyView* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUTextureCopyViewKeys(isolate);
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

  v8::Local<v8::Value> array_layer_value;
  bool array_layer_has_value_or_default = false;
  if (impl->hasArrayLayer()) {
    array_layer_value = v8::Integer::NewFromUnsigned(isolate, impl->arrayLayer());
    array_layer_has_value_or_default = true;
  } else {
    array_layer_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    array_layer_has_value_or_default = true;
  }
  if (array_layer_has_value_or_default &&
      !create_property(0, array_layer_value)) {
    return false;
  }

  v8::Local<v8::Value> mip_level_value;
  bool mip_level_has_value_or_default = false;
  if (impl->hasMipLevel()) {
    mip_level_value = v8::Integer::NewFromUnsigned(isolate, impl->mipLevel());
    mip_level_has_value_or_default = true;
  } else {
    mip_level_value = v8::Integer::NewFromUnsigned(isolate, 0u);
    mip_level_has_value_or_default = true;
  }
  if (mip_level_has_value_or_default &&
      !create_property(1, mip_level_value)) {
    return false;
  }

  v8::Local<v8::Value> origin_value;
  bool origin_has_value_or_default = false;
  if (impl->hasOrigin()) {
    origin_value = ToV8(impl->origin(), creationContext, isolate);
    origin_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (origin_has_value_or_default &&
      !create_property(2, origin_value)) {
    return false;
  }

  v8::Local<v8::Value> texture_value;
  bool texture_has_value_or_default = false;
  if (impl->hasTexture()) {
    texture_value = ToV8(impl->texture(), creationContext, isolate);
    texture_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (texture_has_value_or_default &&
      !create_property(3, texture_value)) {
    return false;
  }

  return true;
}

GPUTextureCopyView* NativeValueTraits<GPUTextureCopyView>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUTextureCopyView* impl = GPUTextureCopyView::Create();
  V8GPUTextureCopyView::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
