// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RASTERIZATION_STATE_DESCRIPTOR_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RASTERIZATION_STATE_DESCRIPTOR_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT GPURasterizationStateDescriptor : public IDLDictionaryBase {
 public:
  static GPURasterizationStateDescriptor* Create() { return MakeGarbageCollected<GPURasterizationStateDescriptor>(); }

  GPURasterizationStateDescriptor();
  virtual ~GPURasterizationStateDescriptor();

  bool hasCullMode() const { return !cull_mode_.IsNull(); }
  const String& cullMode() const {
    return cull_mode_;
  }
  inline void setCullMode(const String&);

  bool hasDepthBias() const { return has_depth_bias_; }
  int32_t depthBias() const {
    DCHECK(has_depth_bias_);
    return depth_bias_;
  }
  inline void setDepthBias(int32_t);

  bool hasDepthBiasClamp() const { return has_depth_bias_clamp_; }
  float depthBiasClamp() const {
    DCHECK(has_depth_bias_clamp_);
    return depth_bias_clamp_;
  }
  inline void setDepthBiasClamp(float);

  bool hasDepthBiasSlopeScale() const { return has_depth_bias_slope_scale_; }
  float depthBiasSlopeScale() const {
    DCHECK(has_depth_bias_slope_scale_);
    return depth_bias_slope_scale_;
  }
  inline void setDepthBiasSlopeScale(float);

  bool hasFrontFace() const { return !front_face_.IsNull(); }
  const String& frontFace() const {
    return front_face_;
  }
  inline void setFrontFace(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_depth_bias_ = false;
  bool has_depth_bias_clamp_ = false;
  bool has_depth_bias_slope_scale_ = false;

  String cull_mode_;
  int32_t depth_bias_;
  float depth_bias_clamp_;
  float depth_bias_slope_scale_;
  String front_face_;

  friend class V8GPURasterizationStateDescriptor;
};

void GPURasterizationStateDescriptor::setCullMode(const String& value) {
  cull_mode_ = value;
}

void GPURasterizationStateDescriptor::setDepthBias(int32_t value) {
  depth_bias_ = value;
  has_depth_bias_ = true;
}

void GPURasterizationStateDescriptor::setDepthBiasClamp(float value) {
  depth_bias_clamp_ = value;
  has_depth_bias_clamp_ = true;
}

void GPURasterizationStateDescriptor::setDepthBiasSlopeScale(float value) {
  depth_bias_slope_scale_ = value;
  has_depth_bias_slope_scale_ = true;
}

void GPURasterizationStateDescriptor::setFrontFace(const String& value) {
  front_face_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_WEBGPU_GPU_RASTERIZATION_STATE_DESCRIPTOR_H_
