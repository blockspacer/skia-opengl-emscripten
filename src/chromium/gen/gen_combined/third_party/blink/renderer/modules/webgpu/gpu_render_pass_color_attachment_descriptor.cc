// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_render_pass_color_attachment_descriptor.h"

#include "third_party/blink/renderer/modules/webgpu/gpu_texture_view.h"

namespace blink {

GPURenderPassColorAttachmentDescriptor::GPURenderPassColorAttachmentDescriptor() {
  setResolveTarget(nullptr);
}

GPURenderPassColorAttachmentDescriptor::~GPURenderPassColorAttachmentDescriptor() = default;

void GPURenderPassColorAttachmentDescriptor::setClearColor(GPUColor* value) {
  clear_color_ = value;
}

void GPURenderPassColorAttachmentDescriptor::Trace(blink::Visitor* visitor) {
  visitor->Trace(attachment_);
  visitor->Trace(clear_color_);
  visitor->Trace(resolve_target_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
