// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class GPUTextureView;

class MODULES_EXPORT GPURenderPassDepthStencilAttachmentDescriptor : public IDLDictionaryBase {
 public:
  static GPURenderPassDepthStencilAttachmentDescriptor* Create() { return MakeGarbageCollected<GPURenderPassDepthStencilAttachmentDescriptor>(); }

  GPURenderPassDepthStencilAttachmentDescriptor();
  virtual ~GPURenderPassDepthStencilAttachmentDescriptor();

  bool hasAttachment() const { return attachment_; }
  GPUTextureView* attachment() const {
    return attachment_;
  }
  inline void setAttachment(GPUTextureView*);

  bool hasClearDepth() const { return has_clear_depth_; }
  float clearDepth() const {
    DCHECK(has_clear_depth_);
    return clear_depth_;
  }
  inline void setClearDepth(float);

  bool hasClearStencil() const { return has_clear_stencil_; }
  uint32_t clearStencil() const {
    DCHECK(has_clear_stencil_);
    return clear_stencil_;
  }
  inline void setClearStencil(uint32_t);

  bool hasDepthLoadOp() const { return !depth_load_op_.IsNull(); }
  const String& depthLoadOp() const {
    return depth_load_op_;
  }
  inline void setDepthLoadOp(const String&);

  bool hasDepthStoreOp() const { return !depth_store_op_.IsNull(); }
  const String& depthStoreOp() const {
    return depth_store_op_;
  }
  inline void setDepthStoreOp(const String&);

  bool hasStencilLoadOp() const { return !stencil_load_op_.IsNull(); }
  const String& stencilLoadOp() const {
    return stencil_load_op_;
  }
  inline void setStencilLoadOp(const String&);

  bool hasStencilStoreOp() const { return !stencil_store_op_.IsNull(); }
  const String& stencilStoreOp() const {
    return stencil_store_op_;
  }
  inline void setStencilStoreOp(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_clear_depth_ = false;
  bool has_clear_stencil_ = false;

  Member<GPUTextureView> attachment_;
  float clear_depth_;
  uint32_t clear_stencil_;
  String depth_load_op_;
  String depth_store_op_;
  String stencil_load_op_;
  String stencil_store_op_;

  friend class V8GPURenderPassDepthStencilAttachmentDescriptor;
};

void GPURenderPassDepthStencilAttachmentDescriptor::setAttachment(GPUTextureView* value) {
  attachment_ = value;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setClearDepth(float value) {
  clear_depth_ = value;
  has_clear_depth_ = true;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setClearStencil(uint32_t value) {
  clear_stencil_ = value;
  has_clear_stencil_ = true;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setDepthLoadOp(const String& value) {
  depth_load_op_ = value;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setDepthStoreOp(const String& value) {
  depth_store_op_ = value;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setStencilLoadOp(const String& value) {
  stencil_load_op_ = value;
}

void GPURenderPassDepthStencilAttachmentDescriptor::setStencilStoreOp(const String& value) {
  stencil_store_op_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_DEPTH_STENCIL_ATTACHMENT_DESCRIPTOR_H_
