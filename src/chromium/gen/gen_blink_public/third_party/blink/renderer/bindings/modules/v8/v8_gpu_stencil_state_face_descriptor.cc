// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_stencil_state_face_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUStencilStateFaceDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "compare",
    "depthFailOp",
    "failOp",
    "passOp",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUStencilStateFaceDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUStencilStateFaceDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUStencilStateFaceDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> compare_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&compare_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (compare_value.IsEmpty() || compare_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> compare_cpp_value = compare_value;
    if (!compare_cpp_value.Prepare(exception_state))
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
    if (!IsValidEnum(compare_cpp_value, kValidValues, base::size(kValidValues), "GPUCompareFunction", exception_state))
      return;
    impl->setCompare(compare_cpp_value);
  }

  v8::Local<v8::Value> depth_fail_op_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&depth_fail_op_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_fail_op_value.IsEmpty() || depth_fail_op_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> depth_fail_op_cpp_value = depth_fail_op_value;
    if (!depth_fail_op_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "keep",
        "zero",
        "replace",
        "invert",
        "increment-clamp",
        "decrement-clamp",
        "increment-wrap",
        "decrement-wrap",
    };
    if (!IsValidEnum(depth_fail_op_cpp_value, kValidValues, base::size(kValidValues), "GPUStencilOperation", exception_state))
      return;
    impl->setDepthFailOp(depth_fail_op_cpp_value);
  }

  v8::Local<v8::Value> fail_op_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&fail_op_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fail_op_value.IsEmpty() || fail_op_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fail_op_cpp_value = fail_op_value;
    if (!fail_op_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "keep",
        "zero",
        "replace",
        "invert",
        "increment-clamp",
        "decrement-clamp",
        "increment-wrap",
        "decrement-wrap",
    };
    if (!IsValidEnum(fail_op_cpp_value, kValidValues, base::size(kValidValues), "GPUStencilOperation", exception_state))
      return;
    impl->setFailOp(fail_op_cpp_value);
  }

  v8::Local<v8::Value> pass_op_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&pass_op_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pass_op_value.IsEmpty() || pass_op_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> pass_op_cpp_value = pass_op_value;
    if (!pass_op_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "keep",
        "zero",
        "replace",
        "invert",
        "increment-clamp",
        "decrement-clamp",
        "increment-wrap",
        "decrement-wrap",
    };
    if (!IsValidEnum(pass_op_cpp_value, kValidValues, base::size(kValidValues), "GPUStencilOperation", exception_state))
      return;
    impl->setPassOp(pass_op_cpp_value);
  }
}

v8::Local<v8::Value> GPUStencilStateFaceDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUStencilStateFaceDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUStencilStateFaceDescriptor(const GPUStencilStateFaceDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUStencilStateFaceDescriptorKeys(isolate);
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

  v8::Local<v8::Value> compare_value;
  bool compare_has_value_or_default = false;
  if (impl->hasCompare()) {
    compare_value = V8String(isolate, impl->compare());
    compare_has_value_or_default = true;
  } else {
    compare_value = V8String(isolate, "always");
    compare_has_value_or_default = true;
  }
  if (compare_has_value_or_default &&
      !create_property(0, compare_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_fail_op_value;
  bool depth_fail_op_has_value_or_default = false;
  if (impl->hasDepthFailOp()) {
    depth_fail_op_value = V8String(isolate, impl->depthFailOp());
    depth_fail_op_has_value_or_default = true;
  } else {
    depth_fail_op_value = V8String(isolate, "keep");
    depth_fail_op_has_value_or_default = true;
  }
  if (depth_fail_op_has_value_or_default &&
      !create_property(1, depth_fail_op_value)) {
    return false;
  }

  v8::Local<v8::Value> fail_op_value;
  bool fail_op_has_value_or_default = false;
  if (impl->hasFailOp()) {
    fail_op_value = V8String(isolate, impl->failOp());
    fail_op_has_value_or_default = true;
  } else {
    fail_op_value = V8String(isolate, "keep");
    fail_op_has_value_or_default = true;
  }
  if (fail_op_has_value_or_default &&
      !create_property(2, fail_op_value)) {
    return false;
  }

  v8::Local<v8::Value> pass_op_value;
  bool pass_op_has_value_or_default = false;
  if (impl->hasPassOp()) {
    pass_op_value = V8String(isolate, impl->passOp());
    pass_op_has_value_or_default = true;
  } else {
    pass_op_value = V8String(isolate, "keep");
    pass_op_has_value_or_default = true;
  }
  if (pass_op_has_value_or_default &&
      !create_property(3, pass_op_value)) {
    return false;
  }

  return true;
}

GPUStencilStateFaceDescriptor* NativeValueTraits<GPUStencilStateFaceDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUStencilStateFaceDescriptor* impl = GPUStencilStateFaceDescriptor::Create();
  V8GPUStencilStateFaceDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
