// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_STATE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_STATE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_blend_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUColorStateDescriptor : public IDLDictionaryBase {
 public:
  static GPUColorStateDescriptor* Create() { return MakeGarbageCollected<GPUColorStateDescriptor>(); }

  GPUColorStateDescriptor();
  virtual ~GPUColorStateDescriptor();

  bool hasAlphaBlend() const { return alpha_blend_; }
  GPUBlendDescriptor* alphaBlend() const {
    return alpha_blend_;
  }
  void setAlphaBlend(GPUBlendDescriptor*);

  bool hasColorBlend() const { return color_blend_; }
  GPUBlendDescriptor* colorBlend() const {
    return color_blend_;
  }
  void setColorBlend(GPUBlendDescriptor*);

  bool hasFormat() const { return !format_.IsNull(); }
  const String& format() const {
    return format_;
  }
  inline void setFormat(const String&);

  bool hasWriteMask() const { return has_write_mask_; }
  uint32_t writeMask() const {
    DCHECK(has_write_mask_);
    return write_mask_;
  }
  inline void setWriteMask(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_write_mask_ = false;

  Member<GPUBlendDescriptor> alpha_blend_;
  Member<GPUBlendDescriptor> color_blend_;
  String format_;
  uint32_t write_mask_;

  friend class V8GPUColorStateDescriptor;
};

void GPUColorStateDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUColorStateDescriptor::setWriteMask(uint32_t value) {
  write_mask_ = value;
  has_write_mask_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_STATE_DESCRIPTOR_H_
