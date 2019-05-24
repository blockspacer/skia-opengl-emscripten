// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_color_state_descriptor.h"

namespace blink {

GPUColorStateDescriptor::GPUColorStateDescriptor() {
  setWriteMask(15u);
}

GPUColorStateDescriptor::~GPUColorStateDescriptor() = default;

void GPUColorStateDescriptor::setAlphaBlend(GPUBlendDescriptor* value) {
  alpha_blend_ = value;
}

void GPUColorStateDescriptor::setColorBlend(GPUBlendDescriptor* value) {
  color_blend_ = value;
}

void GPUColorStateDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(alpha_blend_);
  visitor->Trace(color_blend_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
