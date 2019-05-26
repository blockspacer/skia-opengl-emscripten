// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_CONSTRAIN_POINT_2D_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_CONSTRAIN_POINT_2D_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/imagecapture/point_2d.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ConstrainPoint2DParameters : public IDLDictionaryBase {
 public:
  static ConstrainPoint2DParameters* Create() { return MakeGarbageCollected<ConstrainPoint2DParameters>(); }

  ConstrainPoint2DParameters();
  virtual ~ConstrainPoint2DParameters();

  bool hasExact() const { return has_exact_; }
  const HeapVector<Member<Point2D>>& exact() const {
    DCHECK(has_exact_);
    return exact_;
  }
  void setExact(const HeapVector<Member<Point2D>>&);

  bool hasIdeal() const { return has_ideal_; }
  const HeapVector<Member<Point2D>>& ideal() const {
    DCHECK(has_ideal_);
    return ideal_;
  }
  void setIdeal(const HeapVector<Member<Point2D>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exact_ = false;
  bool has_ideal_ = false;

  HeapVector<Member<Point2D>> exact_;
  HeapVector<Member<Point2D>> ideal_;

  friend class V8ConstrainPoint2DParameters;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_CONSTRAIN_POINT_2D_PARAMETERS_H_
