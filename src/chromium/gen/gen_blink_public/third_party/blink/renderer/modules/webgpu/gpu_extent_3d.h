// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_EXTENT_3D_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_EXTENT_3D_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT GPUExtent3D : public IDLDictionaryBase {
 public:
  static GPUExtent3D* Create() { return MakeGarbageCollected<GPUExtent3D>(); }

  GPUExtent3D();
  virtual ~GPUExtent3D();

  bool hasDepth() const { return has_depth_; }
  uint32_t depth() const {
    DCHECK(has_depth_);
    return depth_;
  }
  inline void setDepth(uint32_t);

  bool hasHeight() const { return has_height_; }
  uint32_t height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(uint32_t);

  bool hasWidth() const { return has_width_; }
  uint32_t width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_depth_ = false;
  bool has_height_ = false;
  bool has_width_ = false;

  uint32_t depth_;
  uint32_t height_;
  uint32_t width_;

  friend class V8GPUExtent3D;
};

void GPUExtent3D::setDepth(uint32_t value) {
  depth_ = value;
  has_depth_ = true;
}

void GPUExtent3D::setHeight(uint32_t value) {
  height_ = value;
  has_height_ = true;
}

void GPUExtent3D::setWidth(uint32_t value) {
  width_ = value;
  has_width_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_EXTENT_3D_H_
