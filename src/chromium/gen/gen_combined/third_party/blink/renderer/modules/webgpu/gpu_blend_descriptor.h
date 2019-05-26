// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BLEND_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BLEND_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUBlendDescriptor : public IDLDictionaryBase {
 public:
  static GPUBlendDescriptor* Create() { return MakeGarbageCollected<GPUBlendDescriptor>(); }

  GPUBlendDescriptor();
  virtual ~GPUBlendDescriptor();

  bool hasDstFactor() const { return !dst_factor_.IsNull(); }
  const String& dstFactor() const {
    return dst_factor_;
  }
  inline void setDstFactor(const String&);

  bool hasOperation() const { return !operation_.IsNull(); }
  const String& operation() const {
    return operation_;
  }
  inline void setOperation(const String&);

  bool hasSrcFactor() const { return !src_factor_.IsNull(); }
  const String& srcFactor() const {
    return src_factor_;
  }
  inline void setSrcFactor(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String dst_factor_;
  String operation_;
  String src_factor_;

  friend class V8GPUBlendDescriptor;
};

void GPUBlendDescriptor::setDstFactor(const String& value) {
  dst_factor_ = value;
}

void GPUBlendDescriptor::setOperation(const String& value) {
  operation_ = value;
}

void GPUBlendDescriptor::setSrcFactor(const String& value) {
  src_factor_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BLEND_DESCRIPTOR_H_
