// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_GPU_SAMPLER_OR_GPU_TEXTURE_VIEW_OR_GPU_BUFFER_BINDING_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_GPU_SAMPLER_OR_GPU_TEXTURE_VIEW_OR_GPU_BUFFER_BINDING_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_binding.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class GPUSampler;
class GPUTextureView;

class MODULES_EXPORT GPUSamplerOrGPUTextureViewOrGPUBufferBinding final {
  DISALLOW_NEW();
 public:
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsGPUBufferBinding() const { return type_ == SpecificType::kGPUBufferBinding; }
  GPUBufferBinding* GetAsGPUBufferBinding() const;
  void SetGPUBufferBinding(GPUBufferBinding*);
  static GPUSamplerOrGPUTextureViewOrGPUBufferBinding FromGPUBufferBinding(GPUBufferBinding*);

  bool IsGPUSampler() const { return type_ == SpecificType::kGPUSampler; }
  GPUSampler* GetAsGPUSampler() const;
  void SetGPUSampler(GPUSampler*);
  static GPUSamplerOrGPUTextureViewOrGPUBufferBinding FromGPUSampler(GPUSampler*);

  bool IsGPUTextureView() const { return type_ == SpecificType::kGPUTextureView; }
  GPUTextureView* GetAsGPUTextureView() const;
  void SetGPUTextureView(GPUTextureView*);
  static GPUSamplerOrGPUTextureViewOrGPUBufferBinding FromGPUTextureView(GPUTextureView*);

  GPUSamplerOrGPUTextureViewOrGPUBufferBinding(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&);
  ~GPUSamplerOrGPUTextureViewOrGPUBufferBinding();
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding& operator=(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kGPUBufferBinding,
    kGPUSampler,
    kGPUTextureView,
  };
  SpecificType type_;

  Member<GPUBufferBinding> gpu_buffer_binding_;
  Member<GPUSampler> gpu_sampler_;
  Member<GPUTextureView> gpu_texture_view_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8GPUSamplerOrGPUTextureViewOrGPUBufferBinding final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, GPUSamplerOrGPUTextureViewOrGPUBufferBinding&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, GPUSamplerOrGPUTextureViewOrGPUBufferBinding& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, GPUSamplerOrGPUTextureViewOrGPUBufferBinding& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<GPUSamplerOrGPUTextureViewOrGPUBufferBinding> : public NativeValueTraitsBase<GPUSamplerOrGPUTextureViewOrGPUBufferBinding> {
  MODULES_EXPORT static GPUSamplerOrGPUTextureViewOrGPUBufferBinding NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static GPUSamplerOrGPUTextureViewOrGPUBufferBinding NullValue() { return GPUSamplerOrGPUTextureViewOrGPUBufferBinding(); }
};

template <>
struct V8TypeOf<GPUSamplerOrGPUTextureViewOrGPUBufferBinding> {
  typedef V8GPUSamplerOrGPUTextureViewOrGPUBufferBinding Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::GPUSamplerOrGPUTextureViewOrGPUBufferBinding)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_GPU_SAMPLER_OR_GPU_TEXTURE_VIEW_OR_GPU_BUFFER_BINDING_H_
