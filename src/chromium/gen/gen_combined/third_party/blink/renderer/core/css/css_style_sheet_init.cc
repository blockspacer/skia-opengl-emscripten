// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/css/css_style_sheet_init.h"

namespace blink {

CSSStyleSheetInit::CSSStyleSheetInit() {
  setAlternate(false);
  setDisabled(false);
  setMedia(MediaListOrString::FromString(WTF::g_empty_string));
  setTitle(WTF::g_empty_string);
}

CSSStyleSheetInit::~CSSStyleSheetInit() = default;

void CSSStyleSheetInit::setMedia(const MediaListOrString& value) {
  media_ = value;
}

void CSSStyleSheetInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
