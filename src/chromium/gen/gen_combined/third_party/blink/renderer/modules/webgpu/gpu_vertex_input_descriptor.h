// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_INPUT_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_INPUT_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUVertexInputDescriptor : public IDLDictionaryBase {
 public:
  static GPUVertexInputDescriptor* Create() { return MakeGarbageCollected<GPUVertexInputDescriptor>(); }

  GPUVertexInputDescriptor();
  virtual ~GPUVertexInputDescriptor();

  bool hasIndexFormat() const { return !index_format_.IsNull(); }
  const String& indexFormat() const {
    return index_format_;
  }
  inline void setIndexFormat(const String&);

  bool hasVertexBuffers() const { return !(vertex_buffers_.IsEmpty() || vertex_buffers_.IsNull() || vertex_buffers_.IsUndefined()); }
  ScriptValue vertexBuffers() const {
    return vertex_buffers_;
  }
  void setVertexBuffers(ScriptValue);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String index_format_;
  ScriptValue vertex_buffers_;

  friend class V8GPUVertexInputDescriptor;
};

void GPUVertexInputDescriptor::setIndexFormat(const String& value) {
  index_format_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_VERTEX_INPUT_DESCRIPTOR_H_
