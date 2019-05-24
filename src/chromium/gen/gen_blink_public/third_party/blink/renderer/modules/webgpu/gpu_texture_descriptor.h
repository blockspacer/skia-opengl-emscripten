// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webgpu/gpu_extent_3d.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUTextureDescriptor : public IDLDictionaryBase {
 public:
  static GPUTextureDescriptor* Create() { return MakeGarbageCollected<GPUTextureDescriptor>(); }

  GPUTextureDescriptor();
  virtual ~GPUTextureDescriptor();

  bool hasArrayLayerCount() const { return has_array_layer_count_; }
  uint32_t arrayLayerCount() const {
    DCHECK(has_array_layer_count_);
    return array_layer_count_;
  }
  inline void setArrayLayerCount(uint32_t);

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

  bool hasSampleCount() const { return has_sample_count_; }
  uint32_t sampleCount() const {
    DCHECK(has_sample_count_);
    return sample_count_;
  }
  inline void setSampleCount(uint32_t);

  bool hasSize() const { return size_; }
  GPUExtent3D* size() const {
    return size_;
  }
  void setSize(GPUExtent3D*);

  bool hasUsage() const { return has_usage_; }
  uint32_t usage() const {
    DCHECK(has_usage_);
    return usage_;
  }
  inline void setUsage(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_array_layer_count_ = false;
  bool has_mip_level_count_ = false;
  bool has_sample_count_ = false;
  bool has_usage_ = false;

  uint32_t array_layer_count_;
  String dimension_;
  String format_;
  uint32_t mip_level_count_;
  uint32_t sample_count_;
  Member<GPUExtent3D> size_;
  uint32_t usage_;

  friend class V8GPUTextureDescriptor;
};

void GPUTextureDescriptor::setArrayLayerCount(uint32_t value) {
  array_layer_count_ = value;
  has_array_layer_count_ = true;
}

void GPUTextureDescriptor::setDimension(const String& value) {
  dimension_ = value;
}

void GPUTextureDescriptor::setFormat(const String& value) {
  format_ = value;
}

void GPUTextureDescriptor::setMipLevelCount(uint32_t value) {
  mip_level_count_ = value;
  has_mip_level_count_ = true;
}

void GPUTextureDescriptor::setSampleCount(uint32_t value) {
  sample_count_ = value;
  has_sample_count_ = true;
}

void GPUTextureDescriptor::setUsage(uint32_t value) {
  usage_ = value;
  has_usage_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_TEXTURE_DESCRIPTOR_H_
