// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_BINDING_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_BINDING_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class GPUBuffer;

class MODULES_EXPORT GPUBufferBinding : public IDLDictionaryBase {
 public:
  static GPUBufferBinding* Create() { return MakeGarbageCollected<GPUBufferBinding>(); }

  GPUBufferBinding();
  virtual ~GPUBufferBinding();

  bool hasBuffer() const { return buffer_; }
  GPUBuffer* buffer() const {
    return buffer_;
  }
  inline void setBuffer(GPUBuffer*);

  bool hasOffset() const { return has_offset_; }
  uint64_t offset() const {
    DCHECK(has_offset_);
    return offset_;
  }
  inline void setOffset(uint64_t);

  bool hasSize() const { return has_size_; }
  uint64_t size() const {
    DCHECK(has_size_);
    return size_;
  }
  inline void setSize(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_offset_ = false;
  bool has_size_ = false;

  Member<GPUBuffer> buffer_;
  uint64_t offset_;
  uint64_t size_;

  friend class V8GPUBufferBinding;
};

void GPUBufferBinding::setBuffer(GPUBuffer* value) {
  buffer_ = value;
}

void GPUBufferBinding::setOffset(uint64_t value) {
  offset_ = value;
  has_offset_ = true;
}

void GPUBufferBinding::setSize(uint64_t value) {
  size_ = value;
  has_size_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BUFFER_BINDING_H_
