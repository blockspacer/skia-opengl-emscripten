// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_BUFFER_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_BUFFER_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_vertex_attribute_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT GPUVertexBufferDescriptor : public IDLDictionaryBase {
 public:
  static GPUVertexBufferDescriptor* Create() { return MakeGarbageCollected<GPUVertexBufferDescriptor>(); }

  GPUVertexBufferDescriptor();
  virtual ~GPUVertexBufferDescriptor();

  bool hasAttributes() const { return has_attributes_; }
  const HeapVector<Member<GPUVertexAttributeDescriptor>>& attributes() const {
    DCHECK(has_attributes_);
    return attributes_;
  }
  void setAttributes(const HeapVector<Member<GPUVertexAttributeDescriptor>>&);

  bool hasStepMode() const { return !step_mode_.IsNull(); }
  const String& stepMode() const {
    return step_mode_;
  }
  inline void setStepMode(const String&);

  bool hasStride() const { return has_stride_; }
  uint64_t stride() const {
    DCHECK(has_stride_);
    return stride_;
  }
  inline void setStride(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_attributes_ = false;
  bool has_stride_ = false;

  HeapVector<Member<GPUVertexAttributeDescriptor>> attributes_;
  String step_mode_;
  uint64_t stride_;

  friend class V8GPUVertexBufferDescriptor;
};

void GPUVertexBufferDescriptor::setStepMode(const String& value) {
  step_mode_ = value;
}

void GPUVertexBufferDescriptor::setStride(uint64_t value) {
  stride_ = value;
  has_stride_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_BUFFER_DESCRIPTOR_H_
