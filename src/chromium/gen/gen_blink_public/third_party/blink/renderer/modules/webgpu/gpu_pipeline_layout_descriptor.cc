// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_pipeline_layout_descriptor.h"

#include "third_party/blink/renderer/modules/webgpu/gpu_bind_group_layout.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

GPUPipelineLayoutDescriptor::GPUPipelineLayoutDescriptor() {
}

GPUPipelineLayoutDescriptor::~GPUPipelineLayoutDescriptor() = default;

void GPUPipelineLayoutDescriptor::setBindGroupLayouts(const HeapVector<Member<GPUBindGroupLayout>>& value) {
  bind_group_layouts_ = value;
  has_bind_group_layouts_ = true;
}

void GPUPipelineLayoutDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(bind_group_layouts_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
