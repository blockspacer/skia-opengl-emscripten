// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_render_pipeline_descriptor.h"

namespace blink {

GPURenderPipelineDescriptor::GPURenderPipelineDescriptor() {
  setSampleCount(1u);
}

GPURenderPipelineDescriptor::~GPURenderPipelineDescriptor() = default;

void GPURenderPipelineDescriptor::setColorStates(const HeapVector<Member<GPUColorStateDescriptor>>& value) {
  color_states_ = value;
  has_color_states_ = true;
}

void GPURenderPipelineDescriptor::setDepthStencilState(GPUDepthStencilStateDescriptor* value) {
  depth_stencil_state_ = value;
}

void GPURenderPipelineDescriptor::setFragmentStage(GPUPipelineStageDescriptor* value) {
  fragment_stage_ = value;
}

void GPURenderPipelineDescriptor::setRasterizationState(GPURasterizationStateDescriptor* value) {
  rasterization_state_ = value;
}

void GPURenderPipelineDescriptor::setVertexInput(GPUVertexInputDescriptor* value) {
  vertex_input_ = value;
}

void GPURenderPipelineDescriptor::setVertexStage(GPUPipelineStageDescriptor* value) {
  vertex_stage_ = value;
}

void GPURenderPipelineDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(color_states_);
  visitor->Trace(depth_stencil_state_);
  visitor->Trace(fragment_stage_);
  visitor->Trace(rasterization_state_);
  visitor->Trace(vertex_input_);
  visitor->Trace(vertex_stage_);
  GPUPipelineDescriptorBase::Trace(visitor);
}

}  // namespace blink
