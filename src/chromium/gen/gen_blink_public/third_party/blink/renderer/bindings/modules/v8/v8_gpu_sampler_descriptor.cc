// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_sampler_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUSamplerDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "addressModeU",
    "addressModeV",
    "addressModeW",
    "compareFunction",
    "lodMaxClamp",
    "lodMinClamp",
    "magFilter",
    "minFilter",
    "mipmapFilter",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUSamplerDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUSamplerDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUSamplerDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> address_mode_u_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&address_mode_u_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (address_mode_u_value.IsEmpty() || address_mode_u_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> address_mode_u_cpp_value = address_mode_u_value;
    if (!address_mode_u_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "clamp-to-edge",
        "repeat",
        "mirror-repeat",
    };
    if (!IsValidEnum(address_mode_u_cpp_value, kValidValues, base::size(kValidValues), "GPUAddressMode", exception_state))
      return;
    impl->setAddressModeU(address_mode_u_cpp_value);
  }

  v8::Local<v8::Value> address_mode_v_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&address_mode_v_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (address_mode_v_value.IsEmpty() || address_mode_v_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> address_mode_v_cpp_value = address_mode_v_value;
    if (!address_mode_v_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "clamp-to-edge",
        "repeat",
        "mirror-repeat",
    };
    if (!IsValidEnum(address_mode_v_cpp_value, kValidValues, base::size(kValidValues), "GPUAddressMode", exception_state))
      return;
    impl->setAddressModeV(address_mode_v_cpp_value);
  }

  v8::Local<v8::Value> address_mode_w_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&address_mode_w_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (address_mode_w_value.IsEmpty() || address_mode_w_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> address_mode_w_cpp_value = address_mode_w_value;
    if (!address_mode_w_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "clamp-to-edge",
        "repeat",
        "mirror-repeat",
    };
    if (!IsValidEnum(address_mode_w_cpp_value, kValidValues, base::size(kValidValues), "GPUAddressMode", exception_state))
      return;
    impl->setAddressModeW(address_mode_w_cpp_value);
  }

  v8::Local<v8::Value> compare_function_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&compare_function_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (compare_function_value.IsEmpty() || compare_function_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> compare_function_cpp_value = compare_function_value;
    if (!compare_function_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "never",
        "less",
        "equal",
        "less-equal",
        "greater",
        "not-equal",
        "greater-equal",
        "always",
    };
    if (!IsValidEnum(compare_function_cpp_value, kValidValues, base::size(kValidValues), "GPUCompareFunction", exception_state))
      return;
    impl->setCompareFunction(compare_function_cpp_value);
  }

  v8::Local<v8::Value> lod_max_clamp_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&lod_max_clamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (lod_max_clamp_value.IsEmpty() || lod_max_clamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    float lod_max_clamp_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, lod_max_clamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLodMaxClamp(lod_max_clamp_cpp_value);
  }

  v8::Local<v8::Value> lod_min_clamp_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&lod_min_clamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (lod_min_clamp_value.IsEmpty() || lod_min_clamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    float lod_min_clamp_cpp_value = NativeValueTraits<IDLFloat>::NativeValue(isolate, lod_min_clamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLodMinClamp(lod_min_clamp_cpp_value);
  }

  v8::Local<v8::Value> mag_filter_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&mag_filter_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mag_filter_value.IsEmpty() || mag_filter_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mag_filter_cpp_value = mag_filter_value;
    if (!mag_filter_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "nearest",
        "linear",
    };
    if (!IsValidEnum(mag_filter_cpp_value, kValidValues, base::size(kValidValues), "GPUFilterMode", exception_state))
      return;
    impl->setMagFilter(mag_filter_cpp_value);
  }

  v8::Local<v8::Value> min_filter_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&min_filter_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (min_filter_value.IsEmpty() || min_filter_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> min_filter_cpp_value = min_filter_value;
    if (!min_filter_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "nearest",
        "linear",
    };
    if (!IsValidEnum(min_filter_cpp_value, kValidValues, base::size(kValidValues), "GPUFilterMode", exception_state))
      return;
    impl->setMinFilter(min_filter_cpp_value);
  }

  v8::Local<v8::Value> mipmap_filter_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&mipmap_filter_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mipmap_filter_value.IsEmpty() || mipmap_filter_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mipmap_filter_cpp_value = mipmap_filter_value;
    if (!mipmap_filter_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "nearest",
        "linear",
    };
    if (!IsValidEnum(mipmap_filter_cpp_value, kValidValues, base::size(kValidValues), "GPUFilterMode", exception_state))
      return;
    impl->setMipmapFilter(mipmap_filter_cpp_value);
  }
}

v8::Local<v8::Value> GPUSamplerDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUSamplerDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUSamplerDescriptor(const GPUSamplerDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUSamplerDescriptorKeys(isolate);
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

  v8::Local<v8::Value> address_mode_u_value;
  bool address_mode_u_has_value_or_default = false;
  if (impl->hasAddressModeU()) {
    address_mode_u_value = V8String(isolate, impl->addressModeU());
    address_mode_u_has_value_or_default = true;
  } else {
    address_mode_u_value = V8String(isolate, "clamp-to-edge");
    address_mode_u_has_value_or_default = true;
  }
  if (address_mode_u_has_value_or_default &&
      !create_property(0, address_mode_u_value)) {
    return false;
  }

  v8::Local<v8::Value> address_mode_v_value;
  bool address_mode_v_has_value_or_default = false;
  if (impl->hasAddressModeV()) {
    address_mode_v_value = V8String(isolate, impl->addressModeV());
    address_mode_v_has_value_or_default = true;
  } else {
    address_mode_v_value = V8String(isolate, "clamp-to-edge");
    address_mode_v_has_value_or_default = true;
  }
  if (address_mode_v_has_value_or_default &&
      !create_property(1, address_mode_v_value)) {
    return false;
  }

  v8::Local<v8::Value> address_mode_w_value;
  bool address_mode_w_has_value_or_default = false;
  if (impl->hasAddressModeW()) {
    address_mode_w_value = V8String(isolate, impl->addressModeW());
    address_mode_w_has_value_or_default = true;
  } else {
    address_mode_w_value = V8String(isolate, "clamp-to-edge");
    address_mode_w_has_value_or_default = true;
  }
  if (address_mode_w_has_value_or_default &&
      !create_property(2, address_mode_w_value)) {
    return false;
  }

  v8::Local<v8::Value> compare_function_value;
  bool compare_function_has_value_or_default = false;
  if (impl->hasCompareFunction()) {
    compare_function_value = V8String(isolate, impl->compareFunction());
    compare_function_has_value_or_default = true;
  } else {
    compare_function_value = V8String(isolate, "never");
    compare_function_has_value_or_default = true;
  }
  if (compare_function_has_value_or_default &&
      !create_property(3, compare_function_value)) {
    return false;
  }

  v8::Local<v8::Value> lod_max_clamp_value;
  bool lod_max_clamp_has_value_or_default = false;
  if (impl->hasLodMaxClamp()) {
    lod_max_clamp_value = v8::Number::New(isolate, impl->lodMaxClamp());
    lod_max_clamp_has_value_or_default = true;
  } else {
    lod_max_clamp_value = v8::Number::New(isolate, 4294967295);
    lod_max_clamp_has_value_or_default = true;
  }
  if (lod_max_clamp_has_value_or_default &&
      !create_property(4, lod_max_clamp_value)) {
    return false;
  }

  v8::Local<v8::Value> lod_min_clamp_value;
  bool lod_min_clamp_has_value_or_default = false;
  if (impl->hasLodMinClamp()) {
    lod_min_clamp_value = v8::Number::New(isolate, impl->lodMinClamp());
    lod_min_clamp_has_value_or_default = true;
  } else {
    lod_min_clamp_value = v8::Number::New(isolate, 0);
    lod_min_clamp_has_value_or_default = true;
  }
  if (lod_min_clamp_has_value_or_default &&
      !create_property(5, lod_min_clamp_value)) {
    return false;
  }

  v8::Local<v8::Value> mag_filter_value;
  bool mag_filter_has_value_or_default = false;
  if (impl->hasMagFilter()) {
    mag_filter_value = V8String(isolate, impl->magFilter());
    mag_filter_has_value_or_default = true;
  } else {
    mag_filter_value = V8String(isolate, "nearest");
    mag_filter_has_value_or_default = true;
  }
  if (mag_filter_has_value_or_default &&
      !create_property(6, mag_filter_value)) {
    return false;
  }

  v8::Local<v8::Value> min_filter_value;
  bool min_filter_has_value_or_default = false;
  if (impl->hasMinFilter()) {
    min_filter_value = V8String(isolate, impl->minFilter());
    min_filter_has_value_or_default = true;
  } else {
    min_filter_value = V8String(isolate, "nearest");
    min_filter_has_value_or_default = true;
  }
  if (min_filter_has_value_or_default &&
      !create_property(7, min_filter_value)) {
    return false;
  }

  v8::Local<v8::Value> mipmap_filter_value;
  bool mipmap_filter_has_value_or_default = false;
  if (impl->hasMipmapFilter()) {
    mipmap_filter_value = V8String(isolate, impl->mipmapFilter());
    mipmap_filter_has_value_or_default = true;
  } else {
    mipmap_filter_value = V8String(isolate, "nearest");
    mipmap_filter_has_value_or_default = true;
  }
  if (mipmap_filter_has_value_or_default &&
      !create_property(8, mipmap_filter_value)) {
    return false;
  }

  return true;
}

GPUSamplerDescriptor* NativeValueTraits<GPUSamplerDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUSamplerDescriptor* impl = GPUSamplerDescriptor::Create();
  V8GPUSamplerDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
