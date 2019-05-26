// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_VIEW_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_VIEW_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUTextureViewDescriptor : public IDLDictionaryBase {
 public:
  static GPUTextureViewDescriptor* Create() { return MakeGarbageCollected<GPUTextureViewDescriptor>(); }

  GPUTextureViewDescriptor();
  virtual ~GPUTextureViewDescriptor();

  bool hasArrayLayerCount() const { return has_array_layer_count_; }
  uint32_t arrayLayerCount() const {
    DCHECK(has_array_layer_count_);
    return array_layer_count_;
  }
  inline void setArrayLayerCount(uint32_t);

  bool hasAspect() const { return !aspect_.IsNull(); }
  const String& aspect() const {
    return aspect_;
  }
  inline void setAspect(const String&);

  bool hasBaseArrayLayer() const { return has_base_array_layer_; }
  uint32_t baseArrayLayer() const {
    DCHECK(has_base_array_layer_);
    return base_array_layer_;
  }
  inline void setBaseArrayLayer(uint32_t);

  bool hasBaseMipLevel() const { return has_base_mip_level_; }
  uint32_t baseMipLevel() const {
    DCHECK(has_base_mip_level_);
    return base_mip_level_;
  }
  inline void setBaseMipLevel(uint32_t);

  bool hasDimension() const { return !dimension_.IsNull(); }
  const String& dimension() const {
    return dimension_;
  }
  inline void setDimension(const String&);

  bool hasFormat() const { return !format_.IsNull(); }
  const String& format() const {
    return format_;
  }
  inline void setFormat(const String&);

  bool hasMipLevelCount() const { return has_mip_level_count_; }
  uint32_t mipLevelCount() const {
    DCHECK(has_mip_level_count_);
    return mip_level_count_;
  }
  inline void setMipLevelCount(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_array_layer_count_ = false;
  bool has_base_array_layer_ = false;
  bool has_base_mip_level_ = false;
  bool has_mip_level_count_ = false;

  uint32_t array_layer_count_;
  String aspect_;
  uint32_t base_array_layer_;
  uint32_t base_mip_level_;
  String dimension_;
  String format_;
  uint32_t mip_level_count_;

  friend class V8GPUTextureViewDescriptor;
};

void GPUTextureViewDescriptor::setArrayLayerCount(uint32_t value) {
  array_layer_count_ = value;
  has_array_layer_count_ = true;
}

void GPUTextureViewDescriptor::setAspect(const String& value) {
  aspect_ = value;
}

void GPUTextureViewDescriptor::setBaseArrayLayer(uint32_t value) {
  base_array_layer_ = value;
  has_base_array_layer_ = true;
}

void GPUTextureViewDescriptor::setBaseMipLevel(uint32_t value) {
  base_mip_level_ = value;
  has_base_mip_level_ = true;
}

void GPUTextureViewDescriptor::setDimension(const String& value) {
  dimension_ = value;
}

void GPUTextureViewDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUTextureViewDescriptor::setMipLevelCount(uint32_t value) {
  mip_level_count_ = value;
  has_mip_level_count_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_VIEW_DESCRIPTOR_H_
