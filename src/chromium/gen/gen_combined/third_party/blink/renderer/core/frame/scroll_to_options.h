// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_TO_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_TO_OPTIONS_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/frame/scroll_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT ScrollToOptions : public ScrollOptions {
 public:
  static ScrollToOptions* Create() { return MakeGarbageCollected<ScrollToOptions>(); }

  ScrollToOptions();
  virtual ~ScrollToOptions();

  bool hasLeft() const { return has_left_; }
  double left() const {
    DCHECK(has_left_);
    return left_;
  }
  inline void setLeft(double);

  bool hasTop() const { return has_top_; }
  double top() const {
    DCHECK(has_top_);
    return top_;
  }
  inline void setTop(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_left_ = false;
  bool has_top_ = false;

  double left_;
  double top_;

  friend class V8ScrollToOptions;
};

void ScrollToOptions::setLeft(double value) {
  left_ = value;
  has_left_ = true;
}

void ScrollToOptions::setTop(double value) {
  top_ = value;
  has_top_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_TO_OPTIONS_H_
