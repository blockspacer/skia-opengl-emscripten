// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_bind_group_layout_descriptor.h"

namespace blink {

GPUBindGroupLayoutDescriptor::GPUBindGroupLayoutDescriptor() {
}

GPUBindGroupLayoutDescriptor::~GPUBindGroupLayoutDescriptor() = default;

void GPUBindGroupLayoutDescriptor::setBindings(const HeapVector<Member<GPUBindGroupLayoutBinding>>& value) {
  bindings_ = value;
  has_bindings_ = true;
}

void GPUBindGroupLayoutDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(bindings_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
