// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_STAGE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_STAGE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class GPUShaderModule;

class MODULES_EXPORT GPUPipelineStageDescriptor : public IDLDictionaryBase {
 public:
  static GPUPipelineStageDescriptor* Create() { return MakeGarbageCollected<GPUPipelineStageDescriptor>(); }

  GPUPipelineStageDescriptor();
  virtual ~GPUPipelineStageDescriptor();

  bool hasEntryPoint() const { return !entry_point_.IsNull(); }
  const String& entryPoint() const {
    return entry_point_;
  }
  inline void setEntryPoint(const String&);

  bool hasModule() const { return module_; }
  GPUShaderModule* module() const {
    return module_;
  }
  inline void setModule(GPUShaderModule*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String entry_point_;
  Member<GPUShaderModule> module_;

  friend class V8GPUPipelineStageDescriptor;
};

void GPUPipelineStageDescriptor::setEntryPoint(const String& value) {
  entry_point_ = value;
}

void GPUPipelineStageDescriptor::setModule(GPUShaderModule* value) {
  module_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_PIPELINE_STAGE_DESCRIPTOR_H_
