// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_LIMITS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_LIMITS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPULimits : public IDLDictionaryBase {
 public:
  static GPULimits* Create() { return MakeGarbageCollected<GPULimits>(); }

  GPULimits();
  virtual ~GPULimits();

  bool hasMaxBindGroups() const { return has_max_bind_groups_; }
  uint32_t maxBindGroups() const {
    DCHECK(has_max_bind_groups_);
    return max_bind_groups_;
  }
  inline void setMaxBindGroups(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_max_bind_groups_ = false;

  uint32_t max_bind_groups_;

  friend class V8GPULimits;
};

void GPULimits::setMaxBindGroups(uint32_t value) {
  max_bind_groups_ = value;
  has_max_bind_groups_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_LIMITS_H_
