// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COMPUTE_PIPELINE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COMPUTE_PIPELINE_DESCRIPTOR_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_pipeline_descriptor_base.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_pipeline_stage_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUComputePipelineDescriptor : public GPUPipelineDescriptorBase {
 public:
  static GPUComputePipelineDescriptor* Create() { return MakeGarbageCollected<GPUComputePipelineDescriptor>(); }

  GPUComputePipelineDescriptor();
  virtual ~GPUComputePipelineDescriptor();

  bool hasComputeStage() const { return compute_stage_; }
  GPUPipelineStageDescriptor* computeStage() const {
    return compute_stage_;
  }
  void setComputeStage(GPUPipelineStageDescriptor*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<GPUPipelineStageDescriptor> compute_stage_;

  friend class V8GPUComputePipelineDescriptor;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COMPUTE_PIPELINE_DESCRIPTOR_H_
