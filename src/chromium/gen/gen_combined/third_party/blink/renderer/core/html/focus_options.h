// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FOCUS_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FOCUS_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT FocusOptions : public IDLDictionaryBase {
 public:
  static FocusOptions* Create() { return MakeGarbageCollected<FocusOptions>(); }

  FocusOptions();
  virtual ~FocusOptions();

  bool hasPreventScroll() const { return has_prevent_scroll_; }
  bool preventScroll() const {
    DCHECK(has_prevent_scroll_);
    return prevent_scroll_;
  }
  inline void setPreventScroll(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_prevent_scroll_ = false;

  bool prevent_scroll_;

  friend class V8FocusOptions;
};

void FocusOptions::setPreventScroll(bool value) {
  prevent_scroll_ = value;
  has_prevent_scroll_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_FOCUS_OPTIONS_H_
