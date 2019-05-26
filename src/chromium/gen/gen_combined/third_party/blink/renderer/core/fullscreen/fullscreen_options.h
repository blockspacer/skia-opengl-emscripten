// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FULLSCREEN_FULLSCREEN_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FULLSCREEN_FULLSCREEN_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT FullscreenOptions : public IDLDictionaryBase {
 public:
  static FullscreenOptions* Create() { return MakeGarbageCollected<FullscreenOptions>(); }

  FullscreenOptions();
  virtual ~FullscreenOptions();

  bool hasNavigationUI() const { return !navigation_ui_.IsNull(); }
  const String& navigationUI() const {
    return navigation_ui_;
  }
  inline void setNavigationUI(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String navigation_ui_;

  friend class V8FullscreenOptions;
};

void FullscreenOptions::setNavigationUI(const String& value) {
  navigation_ui_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FULLSCREEN_FULLSCREEN_OPTIONS_H_
