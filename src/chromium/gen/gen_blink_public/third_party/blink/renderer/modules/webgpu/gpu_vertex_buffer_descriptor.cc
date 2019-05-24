// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_vertex_buffer_descriptor.h"

namespace blink {

GPUVertexBufferDescriptor::GPUVertexBufferDescriptor() {
  setStepMode("vertex");
}

GPUVertexBufferDescriptor::~GPUVertexBufferDescriptor() = default;

void GPUVertexBufferDescriptor::setAttributes(const HeapVector<Member<GPUVertexAttributeDescriptor>>& value) {
  attributes_ = value;
  has_attributes_ = true;
}

void GPUVertexBufferDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(attributes_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
