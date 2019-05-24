// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_BOTTOM_RIGHT_RADIUS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_BOTTOM_RIGHT_RADIUS_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-border-bottom-right-radius' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitBorderBottomRightRadius final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitBorderBottomRightRadius() : CSSUnresolvedProperty() {}

  const char* GetPropertyName() const override { return "-webkit-border-bottom-right-radius"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-border-bottom-right-radius"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitBorderBottomRightRadius";
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_BOTTOM_RIGHT_RADIUS_H_
