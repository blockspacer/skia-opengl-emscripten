// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PIPELINE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PIPELINE_DESCRIPTOR_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_color_state_descriptor.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_depth_stencil_state_descriptor.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_pipeline_descriptor_base.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_pipeline_stage_descriptor.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_rasterization_state_descriptor.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_vertex_input_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT GPURenderPipelineDescriptor : public GPUPipelineDescriptorBase {
 public:
  static GPURenderPipelineDescriptor* Create() { return MakeGarbageCollected<GPURenderPipelineDescriptor>(); }

  GPURenderPipelineDescriptor();
  virtual ~GPURenderPipelineDescriptor();

  bool hasColorStates() const { return has_color_states_; }
  const HeapVector<Member<GPUColorStateDescriptor>>& colorStates() const {
    DCHECK(has_color_states_);
    return color_states_;
  }
  void setColorStates(const HeapVector<Member<GPUColorStateDescriptor>>&);

  bool hasDepthStencilState() const { return depth_stencil_state_; }
  GPUDepthStencilStateDescriptor* depthStencilState() const {
    return depth_stencil_state_;
  }
  void setDepthStencilState(GPUDepthStencilStateDescriptor*);

  bool hasFragmentStage() const { return fragment_stage_; }
  GPUPipelineStageDescriptor* fragmentStage() const {
    return fragment_stage_;
  }
  void setFragmentStage(GPUPipelineStageDescriptor*);

  bool hasPrimitiveTopology() const { return !primitive_topology_.IsNull(); }
  const String& primitiveTopology() const {
    return primitive_topology_;
  }
  inline void setPrimitiveTopology(const String&);

  bool hasRasterizationState() const { return rasterization_state_; }
  GPURasterizationStateDescriptor* rasterizationState() const {
    return rasterization_state_;
  }
  void setRasterizationState(GPURasterizationStateDescriptor*);

  bool hasSampleCount() const { return has_sample_count_; }
  uint32_t sampleCount() const {
    DCHECK(has_sample_count_);
    return sample_count_;
  }
  inline void setSampleCount(uint32_t);

  bool hasVertexInput() const { return vertex_input_; }
  GPUVertexInputDescriptor* vertexInput() const {
    return vertex_input_;
  }
  void setVertexInput(GPUVertexInputDescriptor*);

  bool hasVertexStage() const { return vertex_stage_; }
  GPUPipelineStageDescriptor* vertexStage() const {
    return vertex_stage_;
  }
  void setVertexStage(GPUPipelineStageDescriptor*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_color_states_ = false;
  bool has_sample_count_ = false;

  HeapVector<Member<GPUColorStateDescriptor>> color_states_;
  Member<GPUDepthStencilStateDescriptor> depth_stencil_state_;
  Member<GPUPipelineStageDescriptor> fragment_stage_;
  String primitive_topology_;
  Member<GPURasterizationStateDescriptor> rasterization_state_;
  uint32_t sample_count_;
  Member<GPUVertexInputDescriptor> vertex_input_;
  Member<GPUPipelineStageDescriptor> vertex_stage_;

  friend class V8GPURenderPipelineDescriptor;
};

void GPURenderPipelineDescriptor::setPrimitiveTopology(const String& value) {
  primitive_topology_ = value;
}

void GPURenderPipelineDescriptor::setSampleCount(uint32_t value) {
  sample_count_ = value;
  has_sample_count_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PIPELINE_DESCRIPTOR_H_
