// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_BINDING_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_BINDING_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/gpu_sampler_or_gpu_texture_view_or_gpu_buffer_binding.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_buffer_binding.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_sampler.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_texture_view.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUBindGroupBinding : public IDLDictionaryBase {
 public:
  static GPUBindGroupBinding* Create() { return MakeGarbageCollected<GPUBindGroupBinding>(); }

  GPUBindGroupBinding();
  virtual ~GPUBindGroupBinding();

  bool hasBinding() const { return has_binding_; }
  uint32_t binding() const {
    DCHECK(has_binding_);
    return binding_;
  }
  inline void setBinding(uint32_t);

  bool hasResource() const { return !resource_.IsNull(); }
  const GPUSamplerOrGPUTextureViewOrGPUBufferBinding& resource() const {
    return resource_;
  }
  void setResource(const GPUSamplerOrGPUTextureViewOrGPUBufferBinding&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_binding_ = false;

  uint32_t binding_;
  GPUSamplerOrGPUTextureViewOrGPUBufferBinding resource_;

  friend class V8GPUBindGroupBinding;
};

void GPUBindGroupBinding::setBinding(uint32_t value) {
  binding_ = value;
  has_binding_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_BINDING_H_
