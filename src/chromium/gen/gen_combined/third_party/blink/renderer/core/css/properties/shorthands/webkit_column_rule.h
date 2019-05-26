// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_WEBKIT_COLUMN_RULE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_WEBKIT_COLUMN_RULE_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace css_shorthand {

// Implements the '-webkit-column-rule' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitColumnRule final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitColumnRule() : CSSUnresolvedProperty() {}

  const char* GetPropertyName() const override { return "-webkit-column-rule"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-column-rule"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitColumnRule";
  }
};

}  // namespace css_shorthand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_SHORTHAND_WEBKIT_COLUMN_RULE_H_
