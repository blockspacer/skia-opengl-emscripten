// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_DEPTH_STENCIL_STATE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_DEPTH_STENCIL_STATE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_stencil_state_face_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUDepthStencilStateDescriptor : public IDLDictionaryBase {
 public:
  static GPUDepthStencilStateDescriptor* Create() { return MakeGarbageCollected<GPUDepthStencilStateDescriptor>(); }

  GPUDepthStencilStateDescriptor();
  virtual ~GPUDepthStencilStateDescriptor();

  bool hasDepthCompare() const { return !depth_compare_.IsNull(); }
  const String& depthCompare() const {
    return depth_compare_;
  }
  inline void setDepthCompare(const String&);

  bool hasDepthWriteEnabled() const { return has_depth_write_enabled_; }
  bool depthWriteEnabled() const {
    DCHECK(has_depth_write_enabled_);
    return depth_write_enabled_;
  }
  inline void setDepthWriteEnabled(bool);

  bool hasFormat() const { return !format_.IsNull(); }
  const String& format() const {
    return format_;
  }
  inline void setFormat(const String&);

  bool hasStencilBack() const { return stencil_back_; }
  GPUStencilStateFaceDescriptor* stencilBack() const {
    return stencil_back_;
  }
  void setStencilBack(GPUStencilStateFaceDescriptor*);

  bool hasStencilFront() const { return stencil_front_; }
  GPUStencilStateFaceDescriptor* stencilFront() const {
    return stencil_front_;
  }
  void setStencilFront(GPUStencilStateFaceDescriptor*);

  bool hasStencilReadMask() const { return has_stencil_read_mask_; }
  uint32_t stencilReadMask() const {
    DCHECK(has_stencil_read_mask_);
    return stencil_read_mask_;
  }
  inline void setStencilReadMask(uint32_t);

  bool hasStencilWriteMask() const { return has_stencil_write_mask_; }
  uint32_t stencilWriteMask() const {
    DCHECK(has_stencil_write_mask_);
    return stencil_write_mask_;
  }
  inline void setStencilWriteMask(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_depth_write_enabled_ = false;
  bool has_stencil_read_mask_ = false;
  bool has_stencil_write_mask_ = false;

  String depth_compare_;
  bool depth_write_enabled_;
  String format_;
  Member<GPUStencilStateFaceDescriptor> stencil_back_;
  Member<GPUStencilStateFaceDescriptor> stencil_front_;
  uint32_t stencil_read_mask_;
  uint32_t stencil_write_mask_;

  friend class V8GPUDepthStencilStateDescriptor;
};

void GPUDepthStencilStateDescriptor::setDepthCompare(const String& value) {
  depth_compare_ = value;
}

void GPUDepthStencilStateDescriptor::setDepthWriteEnabled(bool value) {
  depth_write_enabled_ = value;
  has_depth_write_enabled_ = true;
}

void GPUDepthStencilStateDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUDepthStencilStateDescriptor::setStencilReadMask(uint32_t value) {
  stencil_read_mask_ = value;
  has_stencil_read_mask_ = true;
}

void GPUDepthStencilStateDescriptor::setStencilWriteMask(uint32_t value) {
  stencil_write_mask_ = value;
  has_stencil_write_mask_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_DEPTH_STENCIL_STATE_DESCRIPTOR_H_
