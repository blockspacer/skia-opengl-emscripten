// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_APP_BANNER_APP_BANNER_PROMPT_RESULT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_APP_BANNER_APP_BANNER_PROMPT_RESULT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT AppBannerPromptResult : public IDLDictionaryBase {
 public:
  static AppBannerPromptResult* Create() { return MakeGarbageCollected<AppBannerPromptResult>(); }

  AppBannerPromptResult();
  virtual ~AppBannerPromptResult();

  bool hasOutcome() const { return !outcome_.IsNull(); }
  const String& outcome() const {
    return outcome_;
  }
  inline void setOutcome(const String&);

  bool hasPlatform() const { return !platform_.IsNull(); }
  const String& platform() const {
    return platform_;
  }
  inline void setPlatform(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String outcome_;
  String platform_;

  friend class V8AppBannerPromptResult;
};

void AppBannerPromptResult::setOutcome(const String& value) {
  outcome_ = value;
}

void AppBannerPromptResult::setPlatform(const String& value) {
  platform_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_APP_BANNER_APP_BANNER_PROMPT_RESULT_H_
