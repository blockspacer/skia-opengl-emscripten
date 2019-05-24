// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SAMPLER_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SAMPLER_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPUSamplerDescriptor : public IDLDictionaryBase {
 public:
  static GPUSamplerDescriptor* Create() { return MakeGarbageCollected<GPUSamplerDescriptor>(); }

  GPUSamplerDescriptor();
  virtual ~GPUSamplerDescriptor();

  bool hasAddressModeU() const { return !address_mode_u_.IsNull(); }
  const String& addressModeU() const {
    return address_mode_u_;
  }
  inline void setAddressModeU(const String&);

  bool hasAddressModeV() const { return !address_mode_v_.IsNull(); }
  const String& addressModeV() const {
    return address_mode_v_;
  }
  inline void setAddressModeV(const String&);

  bool hasAddressModeW() const { return !address_mode_w_.IsNull(); }
  const String& addressModeW() const {
    return address_mode_w_;
  }
  inline void setAddressModeW(const String&);

  bool hasCompareFunction() const { return !compare_function_.IsNull(); }
  const String& compareFunction() const {
    return compare_function_;
  }
  inline void setCompareFunction(const String&);

  bool hasLodMaxClamp() const { return has_lod_max_clamp_; }
  float lodMaxClamp() const {
    DCHECK(has_lod_max_clamp_);
    return lod_max_clamp_;
  }
  inline void setLodMaxClamp(float);

  bool hasLodMinClamp() const { return has_lod_min_clamp_; }
  float lodMinClamp() const {
    DCHECK(has_lod_min_clamp_);
    return lod_min_clamp_;
  }
  inline void setLodMinClamp(float);

  bool hasMagFilter() const { return !mag_filter_.IsNull(); }
  const String& magFilter() const {
    return mag_filter_;
  }
  inline void setMagFilter(const String&);

  bool hasMinFilter() const { return !min_filter_.IsNull(); }
  const String& minFilter() const {
    return min_filter_;
  }
  inline void setMinFilter(const String&);

  bool hasMipmapFilter() const { return !mipmap_filter_.IsNull(); }
  const String& mipmapFilter() const {
    return mipmap_filter_;
  }
  inline void setMipmapFilter(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_lod_max_clamp_ = false;
  bool has_lod_min_clamp_ = false;

  String address_mode_u_;
  String address_mode_v_;
  String address_mode_w_;
  String compare_function_;
  float lod_max_clamp_;
  float lod_min_clamp_;
  String mag_filter_;
  String min_filter_;
  String mipmap_filter_;

  friend class V8GPUSamplerDescriptor;
};

void GPUSamplerDescriptor::setAddressModeU(const String& value) {
  address_mode_u_ = value;
}

void GPUSamplerDescriptor::setAddressModeV(const String& value) {
  address_mode_v_ = value;
}

void GPUSamplerDescriptor::setAddressModeW(const String& value) {
  address_mode_w_ = value;
}

void GPUSamplerDescriptor::setCompareFunction(const String& value) {
  compare_function_ = value;
}

void GPUSamplerDescriptor::setLodMaxClamp(float value) {
  lod_max_clamp_ = value;
  has_lod_max_clamp_ = true;
}

void GPUSamplerDescriptor::setLodMinClamp(float value) {
  lod_min_clamp_ = value;
  has_lod_min_clamp_ = true;
}

void GPUSamplerDescriptor::setMagFilter(const String& value) {
  mag_filter_ = value;
}

void GPUSamplerDescriptor::setMinFilter(const String& value) {
  min_filter_ = value;
}

void GPUSamplerDescriptor::setMipmapFilter(const String& value) {
  mipmap_filter_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_SAMPLER_DESCRIPTOR_H_
