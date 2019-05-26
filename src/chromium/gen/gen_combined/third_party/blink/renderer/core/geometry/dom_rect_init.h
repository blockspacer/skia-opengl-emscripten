// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_RECT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_RECT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMRectInit : public IDLDictionaryBase {
 public:
  static DOMRectInit* Create() { return MakeGarbageCollected<DOMRectInit>(); }

  DOMRectInit();
  virtual ~DOMRectInit();

  bool hasHeight() const { return has_height_; }
  double height() const {
    DCHECK(has_height_);
    return height_;
  }
  inline void setHeight(double);

  bool hasWidth() const { return has_width_; }
  double width() const {
    DCHECK(has_width_);
    return width_;
  }
  inline void setWidth(double);

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
  bool has_height_ = false;
  bool has_width_ = false;
  bool has_x_ = false;
  bool has_y_ = false;

  double height_;
  double width_;
  double x_;
  double y_;

  friend class V8DOMRectInit;
};

void DOMRectInit::setHeight(double value) {
  height_ = value;
  has_height_ = true;
}

void DOMRectInit::setWidth(double value) {
  width_ = value;
  has_width_ = true;
}

void DOMRectInit::setX(double value) {
  x_ = value;
  has_x_ = true;
}

void DOMRectInit::setY(double value) {
  y_ = value;
  has_y_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_RECT_INIT_H_
