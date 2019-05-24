// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_compute_pipeline_descriptor.h"

namespace blink {

GPUComputePipelineDescriptor::GPUComputePipelineDescriptor() {
}

GPUComputePipelineDescriptor::~GPUComputePipelineDescriptor() = default;

void GPUComputePipelineDescriptor::setComputeStage(GPUPipelineStageDescriptor* value) {
  compute_stage_ = value;
}

void GPUComputePipelineDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(compute_stage_);
  GPUPipelineDescriptorBase::Trace(visitor);
}

}  // namespace blink
