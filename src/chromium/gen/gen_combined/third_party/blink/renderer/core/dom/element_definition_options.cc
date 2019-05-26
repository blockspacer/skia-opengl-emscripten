// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/dom/element_definition_options.h"

#include "third_party/blink/renderer/core/css/css_style_sheet.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

ElementDefinitionOptions::ElementDefinitionOptions() {
}

ElementDefinitionOptions::~ElementDefinitionOptions() = default;

void ElementDefinitionOptions::setStyles(const HeapVector<Member<CSSStyleSheet>>& value) {
  styles_ = value;
  has_styles_ = true;
}

void ElementDefinitionOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(styles_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
