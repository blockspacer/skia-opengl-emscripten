// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_vertex_buffer_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_vertex_attribute_descriptor.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUVertexBufferDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "attributes",
    "stepMode",
    "stride",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUVertexBufferDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUVertexBufferDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): attributes, stride.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUVertexBufferDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> attributes_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&attributes_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (attributes_value.IsEmpty() || attributes_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member attributes is undefined.");
    return;
  } else {
    HeapVector<Member<GPUVertexAttributeDescriptor>> attributes_cpp_value = NativeValueTraits<IDLSequence<GPUVertexAttributeDescriptor>>::NativeValue(isolate, attributes_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAttributes(attributes_cpp_value);
  }

  v8::Local<v8::Value> step_mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&step_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (step_mode_value.IsEmpty() || step_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> step_mode_cpp_value = step_mode_value;
    if (!step_mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "vertex",
        "instance",
    };
    if (!IsValidEnum(step_mode_cpp_value, kValidValues, base::size(kValidValues), "GPUInputStepMode", exception_state))
      return;
    impl->setStepMode(step_mode_cpp_value);
  }

  v8::Local<v8::Value> stride_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&stride_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stride_value.IsEmpty() || stride_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member stride is undefined.");
    return;
  } else {
    uint64_t stride_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, stride_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStride(stride_cpp_value);
  }
}

v8::Local<v8::Value> GPUVertexBufferDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUVertexBufferDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUVertexBufferDescriptor(const GPUVertexBufferDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUVertexBufferDescriptorKeys(isolate);
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

  v8::Local<v8::Value> attributes_value;
  bool attributes_has_value_or_default = false;
  if (impl->hasAttributes()) {
    attributes_value = ToV8(impl->attributes(), creationContext, isolate);
    attributes_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (attributes_has_value_or_default &&
      !create_property(0, attributes_value)) {
    return false;
  }

  v8::Local<v8::Value> step_mode_value;
  bool step_mode_has_value_or_default = false;
  if (impl->hasStepMode()) {
    step_mode_value = V8String(isolate, impl->stepMode());
    step_mode_has_value_or_default = true;
  } else {
    step_mode_value = V8String(isolate, "vertex");
    step_mode_has_value_or_default = true;
  }
  if (step_mode_has_value_or_default &&
      !create_property(1, step_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> stride_value;
  bool stride_has_value_or_default = false;
  if (impl->hasStride()) {
    stride_value = v8::Number::New(isolate, static_cast<double>(impl->stride()));
    stride_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (stride_has_value_or_default &&
      !create_property(2, stride_value)) {
    return false;
  }

  return true;
}

GPUVertexBufferDescriptor* NativeValueTraits<GPUVertexBufferDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUVertexBufferDescriptor* impl = GPUVertexBufferDescriptor::Create();
  V8GPUVertexBufferDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
