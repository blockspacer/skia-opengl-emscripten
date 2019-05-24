// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_COPY_VIEW_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_COPY_VIEW_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_origin_3d.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class GPUTexture;

class MODULES_EXPORT GPUTextureCopyView : public IDLDictionaryBase {
 public:
  static GPUTextureCopyView* Create() { return MakeGarbageCollected<GPUTextureCopyView>(); }

  GPUTextureCopyView();
  virtual ~GPUTextureCopyView();

  bool hasArrayLayer() const { return has_array_layer_; }
  uint32_t arrayLayer() const {
    DCHECK(has_array_layer_);
    return array_layer_;
  }
  inline void setArrayLayer(uint32_t);

  bool hasMipLevel() const { return has_mip_level_; }
  uint32_t mipLevel() const {
    DCHECK(has_mip_level_);
    return mip_level_;
  }
  inline void setMipLevel(uint32_t);

  bool hasOrigin() const { return origin_; }
  GPUOrigin3D* origin() const {
    return origin_;
  }
  void setOrigin(GPUOrigin3D*);

  bool hasTexture() const { return texture_; }
  GPUTexture* texture() const {
    return texture_;
  }
  inline void setTexture(GPUTexture*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_array_layer_ = false;
  bool has_mip_level_ = false;

  uint32_t array_layer_;
  uint32_t mip_level_;
  Member<GPUOrigin3D> origin_;
  Member<GPUTexture> texture_;

  friend class V8GPUTextureCopyView;
};

void GPUTextureCopyView::setArrayLayer(uint32_t value) {
  array_layer_ = value;
  has_array_layer_ = true;
}

void GPUTextureCopyView::setMipLevel(uint32_t value) {
  mip_level_ = value;
  has_mip_level_ = true;
}

void GPUTextureCopyView::setTexture(GPUTexture* value) {
  texture_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_COPY_VIEW_H_
