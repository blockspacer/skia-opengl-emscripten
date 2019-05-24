// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_ATTRIBUTE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_ATTRIBUTE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUVertexAttributeDescriptor : public IDLDictionaryBase {
 public:
  static GPUVertexAttributeDescriptor* Create() { return MakeGarbageCollected<GPUVertexAttributeDescriptor>(); }

  GPUVertexAttributeDescriptor();
  virtual ~GPUVertexAttributeDescriptor();

  bool hasFormat() const { return !format_.IsNull(); }
  const String& format() const {
    return format_;
  }
  inline void setFormat(const String&);

  bool hasOffset() const { return has_offset_; }
  uint64_t offset() const {
    DCHECK(has_offset_);
    return offset_;
  }
  inline void setOffset(uint64_t);

  bool hasShaderLocation() const { return has_shader_location_; }
  uint32_t shaderLocation() const {
    DCHECK(has_shader_location_);
    return shader_location_;
  }
  inline void setShaderLocation(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_offset_ = false;
  bool has_shader_location_ = false;

  String format_;
  uint64_t offset_;
  uint32_t shader_location_;

  friend class V8GPUVertexAttributeDescriptor;
};

void GPUVertexAttributeDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUVertexAttributeDescriptor::setOffset(uint64_t value) {
  offset_ = value;
  has_offset_ = true;
}

void GPUVertexAttributeDescriptor::setShaderLocation(uint32_t value) {
  shader_location_ = value;
  has_shader_location_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_ATTRIBUTE_DESCRIPTOR_H_
