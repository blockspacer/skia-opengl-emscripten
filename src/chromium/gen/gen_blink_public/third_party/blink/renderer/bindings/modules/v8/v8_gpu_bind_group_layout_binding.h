// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BIND_GROUP_LAYOUT_BINDING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BIND_GROUP_LAYOUT_BINDING_H_

#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_bind_group_layout_binding.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class ExceptionState;

class V8GPUBindGroupLayoutBinding {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, GPUBindGroupLayoutBinding* impl, ExceptionState&);
};

MODULES_EXPORT bool toV8GPUBindGroupLayoutBinding(const GPUBindGroupLayoutBinding*, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, GPUBindGroupLayoutBinding* impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, GPUBindGroupLayoutBinding* impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<GPUBindGroupLayoutBinding> : public NativeValueTraitsBase<GPUBindGroupLayoutBinding> {
  MODULES_EXPORT static GPUBindGroupLayoutBinding* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

template <>
struct V8TypeOf<GPUBindGroupLayoutBinding> {
  typedef V8GPUBindGroupLayoutBinding Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_GPU_BIND_GROUP_LAYOUT_BINDING_H_
