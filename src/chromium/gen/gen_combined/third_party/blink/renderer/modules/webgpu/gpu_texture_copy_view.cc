// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/webgpu/gpu_texture_copy_view.h"

#include "third_party/blink/renderer/modules/webgpu/gpu_texture.h"

namespace blink {

GPUTextureCopyView::GPUTextureCopyView() {
  setArrayLayer(0u);
  setMipLevel(0u);
}

GPUTextureCopyView::~GPUTextureCopyView() = default;

void GPUTextureCopyView::setOrigin(GPUOrigin3D* value) {
  origin_ = value;
}

void GPUTextureCopyView::Trace(blink::Visitor* visitor) {
  visitor->Trace(origin_);
  visitor->Trace(texture_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
