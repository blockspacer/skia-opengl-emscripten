// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_render_pass_color_attachment_descriptor.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_render_pass_depth_stencil_attachment_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT GPURenderPassDescriptor : public IDLDictionaryBase {
 public:
  static GPURenderPassDescriptor* Create() { return MakeGarbageCollected<GPURenderPassDescriptor>(); }

  GPURenderPassDescriptor();
  virtual ~GPURenderPassDescriptor();

  bool hasColorAttachments() const { return has_color_attachments_; }
  const HeapVector<Member<GPURenderPassColorAttachmentDescriptor>>& colorAttachments() const {
    DCHECK(has_color_attachments_);
    return color_attachments_;
  }
  void setColorAttachments(const HeapVector<Member<GPURenderPassColorAttachmentDescriptor>>&);

  bool hasDepthStencilAttachment() const { return depth_stencil_attachment_; }
  GPURenderPassDepthStencilAttachmentDescriptor* depthStencilAttachment() const {
    return depth_stencil_attachment_;
  }
  void setDepthStencilAttachment(GPURenderPassDepthStencilAttachmentDescriptor*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_color_attachments_ = false;

  HeapVector<Member<GPURenderPassColorAttachmentDescriptor>> color_attachments_;
  Member<GPURenderPassDepthStencilAttachmentDescriptor> depth_stencil_attachment_;

  friend class V8GPURenderPassDescriptor;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DESCRIPTOR_H_
