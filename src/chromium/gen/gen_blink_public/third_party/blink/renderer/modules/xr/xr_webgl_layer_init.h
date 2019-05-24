// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_WEBGL_LAYER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_WEBGL_LAYER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT XRWebGLLayerInit : public IDLDictionaryBase {
 public:
  static XRWebGLLayerInit* Create() { return MakeGarbageCollected<XRWebGLLayerInit>(); }

  XRWebGLLayerInit();
  virtual ~XRWebGLLayerInit();

  bool hasAlpha() const { return has_alpha_; }
  bool alpha() const {
    DCHECK(has_alpha_);
    return alpha_;
  }
  inline void setAlpha(bool);

  bool hasAntialias() const { return has_antialias_; }
  bool antialias() const {
    DCHECK(has_antialias_);
    return antialias_;
  }
  inline void setAntialias(bool);

  bool hasDepth() const { return has_depth_; }
  bool depth() const {
    DCHECK(has_depth_);
    return depth_;
  }
  inline void setDepth(bool);

  bool hasFramebufferScaleFactor() const { return has_framebuffer_scale_factor_; }
  double framebufferScaleFactor() const {
    DCHECK(has_framebuffer_scale_factor_);
    return framebuffer_scale_factor_;
  }
  inline void setFramebufferScaleFactor(double);

  bool hasIgnoreDepthValues() const { return has_ignore_depth_values_; }
  bool ignoreDepthValues() const {
    DCHECK(has_ignore_depth_values_);
    return ignore_depth_values_;
  }
  inline void setIgnoreDepthValues(bool);

  bool hasMultiview() const { return has_multiview_; }
  bool multiview() const {
    DCHECK(has_multiview_);
    return multiview_;
  }
  inline void setMultiview(bool);

  bool hasStencil() const { return has_stencil_; }
  bool stencil() const {
    DCHECK(has_stencil_);
    return stencil_;
  }
  inline void setStencil(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alpha_ = false;
  bool has_antialias_ = false;
  bool has_depth_ = false;
  bool has_framebuffer_scale_factor_ = false;
  bool has_ignore_depth_values_ = false;
  bool has_multiview_ = false;
  bool has_stencil_ = false;

  bool alpha_;
  bool antialias_;
  bool depth_;
  double framebuffer_scale_factor_;
  bool ignore_depth_values_;
  bool multiview_;
  bool stencil_;

  friend class V8XRWebGLLayerInit;
};

void XRWebGLLayerInit::setAlpha(bool value) {
  alpha_ = value;
  has_alpha_ = true;
}

void XRWebGLLayerInit::setAntialias(bool value) {
  antialias_ = value;
  has_antialias_ = true;
}

void XRWebGLLayerInit::setDepth(bool value) {
  depth_ = value;
  has_depth_ = true;
}

void XRWebGLLayerInit::setFramebufferScaleFactor(double value) {
  framebuffer_scale_factor_ = value;
  has_framebuffer_scale_factor_ = true;
}

void XRWebGLLayerInit::setIgnoreDepthValues(bool value) {
  ignore_depth_values_ = value;
  has_ignore_depth_values_ = true;
}

void XRWebGLLayerInit::setMultiview(bool value) {
  multiview_ = value;
  has_multiview_ = true;
}

void XRWebGLLayerInit::setStencil(bool value) {
  stencil_ = value;
  has_stencil_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_WEBGL_LAYER_INIT_H_
