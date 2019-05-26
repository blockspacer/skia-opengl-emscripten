// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_DESCRIPTOR_BASE_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_DESCRIPTOR_BASE_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class GPUPipelineLayout;

class MODULES_EXPORT GPUPipelineDescriptorBase : public IDLDictionaryBase {
 public:
  static GPUPipelineDescriptorBase* Create() { return MakeGarbageCollected<GPUPipelineDescriptorBase>(); }

  GPUPipelineDescriptorBase();
  virtual ~GPUPipelineDescriptorBase();

  bool hasLabel() const { return !label_.IsNull(); }
  const String& label() const {
    return label_;
  }
  inline void setLabel(const String&);

  bool hasLayout() const { return layout_; }
  GPUPipelineLayout* layout() const {
    return layout_;
  }
  inline void setLayout(GPUPipelineLayout*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String label_;
  Member<GPUPipelineLayout> layout_;

  friend class V8GPUPipelineDescriptorBase;
};

void GPUPipelineDescriptorBase::setLabel(const String& value) {
  label_ = value;
}

void GPUPipelineDescriptorBase::setLayout(GPUPipelineLayout* value) {
  layout_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_DESCRIPTOR_BASE_H_
