// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_POINT_2D_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_POINT_2D_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT Point2D : public IDLDictionaryBase {
 public:
  static Point2D* Create() { return MakeGarbageCollected<Point2D>(); }

  Point2D();
  virtual ~Point2D();

  bool hasX() const { return has_x_; }
  double x() const {
    DCHECK(has_x_);
    return x_;
  }
  inline void setX(double);

  bool hasY() const { return has_y_; }
  double y() const {
    DCHECK(has_y_);
    return y_;
  }
  inline void setY(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_x_ = false;
  bool has_y_ = false;

  double x_;
  double y_;

  friend class V8Point2D;
};

void Point2D::setX(double value) {
  x_ = value;
  has_x_ = true;
}

void Point2D::setY(double value) {
  y_ = value;
  has_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_IMAGECAPTURE_POINT_2D_H_
