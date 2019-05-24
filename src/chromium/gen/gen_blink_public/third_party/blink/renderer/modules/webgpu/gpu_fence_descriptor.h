// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_FENCE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_FENCE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUFenceDescriptor : public IDLDictionaryBase {
 public:
  static GPUFenceDescriptor* Create() { return MakeGarbageCollected<GPUFenceDescriptor>(); }

  GPUFenceDescriptor();
  virtual ~GPUFenceDescriptor();

  bool hasInitialValue() const { return has_initial_value_; }
  uint64_t initialValue() const {
    DCHECK(has_initial_value_);
    return initial_value_;
  }
  inline void setInitialValue(uint64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_initial_value_ = false;

  uint64_t initial_value_;

  friend class V8GPUFenceDescriptor;
};

void GPUFenceDescriptor::setInitialValue(uint64_t value) {
  initial_value_ = value;
  has_initial_value_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_FENCE_DESCRIPTOR_H_
