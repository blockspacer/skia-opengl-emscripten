// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_INTO_VIEW_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_INTO_VIEW_OPTIONS_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/frame/scroll_options.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT ScrollIntoViewOptions : public ScrollOptions {
 public:
  static ScrollIntoViewOptions* Create() { return MakeGarbageCollected<ScrollIntoViewOptions>(); }

  ScrollIntoViewOptions();
  virtual ~ScrollIntoViewOptions();

  bool hasBlock() const { return !block_.IsNull(); }
  const String& block() const {
    return block_;
  }
  inline void setBlock(const String&);

  bool hasInlinePosition() const { return !inline_position_.IsNull(); }
  const String& inlinePosition() const {
    return inline_position_;
  }
  inline void setInlinePosition(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String block_;
  String inline_position_;

  friend class V8ScrollIntoViewOptions;
};

void ScrollIntoViewOptions::setBlock(const String& value) {
  block_ = value;
}

void ScrollIntoViewOptions::setInlinePosition(const String& value) {
  inline_position_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_SCROLL_INTO_VIEW_OPTIONS_H_
