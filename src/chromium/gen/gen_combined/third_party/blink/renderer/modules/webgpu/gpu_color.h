// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUColor : public IDLDictionaryBase {
 public:
  static GPUColor* Create() { return MakeGarbageCollected<GPUColor>(); }

  GPUColor();
  virtual ~GPUColor();

  bool hasA() const { return has_a_; }
  float a() const {
    DCHECK(has_a_);
    return a_;
  }
  inline void setA(float);

  bool hasB() const { return has_b_; }
  float b() const {
    DCHECK(has_b_);
    return b_;
  }
  inline void setB(float);

  bool hasG() const { return has_g_; }
  float g() const {
    DCHECK(has_g_);
    return g_;
  }
  inline void setG(float);

  bool hasR() const { return has_r_; }
  float r() const {
    DCHECK(has_r_);
    return r_;
  }
  inline void setR(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_a_ = false;
  bool has_b_ = false;
  bool has_g_ = false;
  bool has_r_ = false;

  float a_;
  float b_;
  float g_;
  float r_;

  friend class V8GPUColor;
};

void GPUColor::setA(float value) {
  a_ = value;
  has_a_ = true;
}

void GPUColor::setB(float value) {
  b_ = value;
  has_b_ = true;
}

void GPUColor::setG(float value) {
  g_ = value;
  has_g_ = true;
}

void GPUColor::setR(float value) {
  r_ = value;
  has_r_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_COLOR_H_
