// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_LAYOUT_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_LAYOUT_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class GPUBindGroupLayout;

class MODULES_EXPORT GPUPipelineLayoutDescriptor : public IDLDictionaryBase {
 public:
  static GPUPipelineLayoutDescriptor* Create() { return MakeGarbageCollected<GPUPipelineLayoutDescriptor>(); }

  GPUPipelineLayoutDescriptor();
  virtual ~GPUPipelineLayoutDescriptor();

  bool hasBindGroupLayouts() const { return has_bind_group_layouts_; }
  const HeapVector<Member<GPUBindGroupLayout>>& bindGroupLayouts() const {
    DCHECK(has_bind_group_layouts_);
    return bind_group_layouts_;
  }
  void setBindGroupLayouts(const HeapVector<Member<GPUBindGroupLayout>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_bind_group_layouts_ = false;

  HeapVector<Member<GPUBindGroupLayout>> bind_group_layouts_;

  friend class V8GPUPipelineLayoutDescriptor;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_LAYOUT_DESCRIPTOR_H_
