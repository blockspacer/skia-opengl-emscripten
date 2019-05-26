// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_STYLE_SHEET_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_STYLE_SHEET_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/media_list_or_string.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/css/media_list.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT CSSStyleSheetInit : public IDLDictionaryBase {
 public:
  static CSSStyleSheetInit* Create() { return MakeGarbageCollected<CSSStyleSheetInit>(); }

  CSSStyleSheetInit();
  virtual ~CSSStyleSheetInit();

  bool hasAlternate() const { return has_alternate_; }
  bool alternate() const {
    DCHECK(has_alternate_);
    return alternate_;
  }
  inline void setAlternate(bool);

  bool hasDisabled() const { return has_disabled_; }
  bool disabled() const {
    DCHECK(has_disabled_);
    return disabled_;
  }
  inline void setDisabled(bool);

  bool hasMedia() const { return !media_.IsNull(); }
  const MediaListOrString& media() const {
    return media_;
  }
  void setMedia(const MediaListOrString&);

  bool hasTitle() const { return !title_.IsNull(); }
  const String& title() const {
    return title_;
  }
  inline void setTitle(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_alternate_ = false;
  bool has_disabled_ = false;

  bool alternate_;
  bool disabled_;
  MediaListOrString media_;
  String title_;

  friend class V8CSSStyleSheetInit;
};

void CSSStyleSheetInit::setAlternate(bool value) {
  alternate_ = value;
  has_alternate_ = true;
}

void CSSStyleSheetInit::setDisabled(bool value) {
  disabled_ = value;
  has_disabled_ = true;
}

void CSSStyleSheetInit::setTitle(const String& value) {
  title_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_STYLE_SHEET_INIT_H_
