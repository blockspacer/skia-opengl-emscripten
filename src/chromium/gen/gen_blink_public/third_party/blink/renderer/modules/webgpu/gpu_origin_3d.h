// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_ORIGIN_3D_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_ORIGIN_3D_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUOrigin3D : public IDLDictionaryBase {
 public:
  static GPUOrigin3D* Create() { return MakeGarbageCollected<GPUOrigin3D>(); }

  GPUOrigin3D();
  virtual ~GPUOrigin3D();

  bool hasX() const { return has_x_; }
  uint32_t x() const {
    DCHECK(has_x_);
    return x_;
  }
  inline void setX(uint32_t);

  bool hasY() const { return has_y_; }
  uint32_t y() const {
    DCHECK(has_y_);
    return y_;
  }
  inline void setY(uint32_t);

  bool hasZ() const { return has_z_; }
  uint32_t z() const {
    DCHECK(has_z_);
    return z_;
  }
  inline void setZ(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_x_ = false;
  bool has_y_ = false;
  bool has_z_ = false;

  uint32_t x_;
  uint32_t y_;
  uint32_t z_;

  friend class V8GPUOrigin3D;
};

void GPUOrigin3D::setX(uint32_t value) {
  x_ = value;
  has_x_ = true;
}

void GPUOrigin3D::setY(uint32_t value) {
  y_ = value;
  has_y_ = true;
}

void GPUOrigin3D::setZ(uint32_t value) {
  z_ = value;
  has_z_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_ORIGIN_3D_H_
