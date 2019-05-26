// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_LAYOUT_BINDING_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_LAYOUT_BINDING_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUBindGroupLayoutBinding : public IDLDictionaryBase {
 public:
  static GPUBindGroupLayoutBinding* Create() { return MakeGarbageCollected<GPUBindGroupLayoutBinding>(); }

  GPUBindGroupLayoutBinding();
  virtual ~GPUBindGroupLayoutBinding();

  bool hasBinding() const { return has_binding_; }
  uint32_t binding() const {
    DCHECK(has_binding_);
    return binding_;
  }
  inline void setBinding(uint32_t);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  bool hasVisibility() const { return has_visibility_; }
  uint32_t visibility() const {
    DCHECK(has_visibility_);
    return visibility_;
  }
  inline void setVisibility(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_binding_ = false;
  bool has_visibility_ = false;

  uint32_t binding_;
  String type_;
  uint32_t visibility_;

  friend class V8GPUBindGroupLayoutBinding;
};

void GPUBindGroupLayoutBinding::setBinding(uint32_t value) {
  binding_ = value;
  has_binding_ = true;
}

void GPUBindGroupLayoutBinding::setType(const String& value) {
  type_ = value;
}

void GPUBindGroupLayoutBinding::setVisibility(uint32_t value) {
  visibility_ = value;
  has_visibility_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_BIND_GROUP_LAYOUT_BINDING_H_
