// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_descriptor.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_binding.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_bind_group_layout.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GPUBindGroupDescriptorKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bindings",
    "layout",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GPUBindGroupDescriptor::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GPUBindGroupDescriptor* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): bindings, layout.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GPUBindGroupDescriptorKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bindings_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bindings_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bindings_value.IsEmpty() || bindings_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member bindings is undefined.");
    return;
  } else {
    HeapVector<Member<GPUBindGroupBinding>> bindings_cpp_value = NativeValueTraits<IDLSequence<GPUBindGroupBinding>>::NativeValue(isolate, bindings_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBindings(bindings_cpp_value);
  }

  v8::Local<v8::Value> layout_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&layout_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (layout_value.IsEmpty() || layout_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member layout is undefined.");
    return;
  } else {
    GPUBindGroupLayout* layout_cpp_value = V8GPUBindGroupLayout::ToImplWithTypeCheck(isolate, layout_value);
    if (!layout_cpp_value) {
      exception_state.ThrowTypeError("member layout is not of type GPUBindGroupLayout.");
      return;
    }
    impl->setLayout(layout_cpp_value);
  }
}

v8::Local<v8::Value> GPUBindGroupDescriptor::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GPUBindGroupDescriptor(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GPUBindGroupDescriptor(const GPUBindGroupDescriptor* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GPUBindGroupDescriptorKeys(isolate);
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

  v8::Local<v8::Value> bindings_value;
  bool bindings_has_value_or_default = false;
  if (impl->hasBindings()) {
    bindings_value = ToV8(impl->bindings(), creationContext, isolate);
    bindings_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (bindings_has_value_or_default &&
      !create_property(0, bindings_value)) {
    return false;
  }

  v8::Local<v8::Value> layout_value;
  bool layout_has_value_or_default = false;
  if (impl->hasLayout()) {
    layout_value = ToV8(impl->layout(), creationContext, isolate);
    layout_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (layout_has_value_or_default &&
      !create_property(1, layout_value)) {
    return false;
  }

  return true;
}

GPUBindGroupDescriptor* NativeValueTraits<GPUBindGroupDescriptor>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBindGroupDescriptor* impl = GPUBindGroupDescriptor::Create();
  V8GPUBindGroupDescriptor::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
