// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_LAYER_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_LAYER_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/modules/v8/html_canvas_element_or_offscreen_canvas.h"
#include "third_party/blink/renderer/core/html/canvas/html_canvas_element.h"
#include "third_party/blink/renderer/core/offscreencanvas/offscreen_canvas.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT VRLayerInit : public IDLDictionaryBase {
 public:
  static VRLayerInit* Create() { return MakeGarbageCollected<VRLayerInit>(); }

  VRLayerInit();
  virtual ~VRLayerInit();

  bool hasLeftBounds() const { return has_left_bounds_; }
  const Vector<float>& leftBounds() const {
    DCHECK(has_left_bounds_);
    return left_bounds_;
  }
  void setLeftBounds(const Vector<float>&);

  bool hasRightBounds() const { return has_right_bounds_; }
  const Vector<float>& rightBounds() const {
    DCHECK(has_right_bounds_);
    return right_bounds_;
  }
  void setRightBounds(const Vector<float>&);

  bool hasSource() const { return !source_.IsNull(); }
  const HTMLCanvasElementOrOffscreenCanvas& source() const {
    return source_;
  }
  void setSource(const HTMLCanvasElementOrOffscreenCanvas&);
  void setSourceToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_left_bounds_ = false;
  bool has_right_bounds_ = false;

  Vector<float> left_bounds_;
  Vector<float> right_bounds_;
  HTMLCanvasElementOrOffscreenCanvas source_;

  friend class V8VRLayerInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_VR_VR_LAYER_INIT_H_
