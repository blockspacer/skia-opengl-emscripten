// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_COLOR_ATTACHMENT_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_COLOR_ATTACHMENT_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_color.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class GPUTextureView;

class MODULES_EXPORT GPURenderPassColorAttachmentDescriptor : public IDLDictionaryBase {
 public:
  static GPURenderPassColorAttachmentDescriptor* Create() { return MakeGarbageCollected<GPURenderPassColorAttachmentDescriptor>(); }

  GPURenderPassColorAttachmentDescriptor();
  virtual ~GPURenderPassColorAttachmentDescriptor();

  bool hasAttachment() const { return attachment_; }
  GPUTextureView* attachment() const {
    return attachment_;
  }
  inline void setAttachment(GPUTextureView*);

  bool hasClearColor() const { return clear_color_; }
  GPUColor* clearColor() const {
    return clear_color_;
  }
  void setClearColor(GPUColor*);

  bool hasLoadOp() const { return !load_op_.IsNull(); }
  const String& loadOp() const {
    return load_op_;
  }
  inline void setLoadOp(const String&);

  bool hasResolveTarget() const { return has_resolve_target_; }
  GPUTextureView* resolveTarget() const {
    return resolve_target_;
  }
  inline void setResolveTarget(GPUTextureView*);
  inline void setResolveTargetToNull();

  bool hasStoreOp() const { return !store_op_.IsNull(); }
  const String& storeOp() const {
    return store_op_;
  }
  inline void setStoreOp(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_resolve_target_ = false;

  Member<GPUTextureView> attachment_;
  Member<GPUColor> clear_color_;
  String load_op_;
  Member<GPUTextureView> resolve_target_;
  String store_op_;

  friend class V8GPURenderPassColorAttachmentDescriptor;
};

void GPURenderPassColorAttachmentDescriptor::setAttachment(GPUTextureView* value) {
  attachment_ = value;
}

void GPURenderPassColorAttachmentDescriptor::setLoadOp(const String& value) {
  load_op_ = value;
}

void GPURenderPassColorAttachmentDescriptor::setResolveTarget(GPUTextureView* value) {
  resolve_target_ = value;
  has_resolve_target_ = true;
}

void GPURenderPassColorAttachmentDescriptor::setResolveTargetToNull() {
  resolve_target_ = Member<GPUTextureView>();
  has_resolve_target_ = true;
}

void GPURenderPassColorAttachmentDescriptor::setStoreOp(const String& value) {
  store_op_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RENDER_PASS_COLOR_ATTACHMENT_DESCRIPTOR_H_
