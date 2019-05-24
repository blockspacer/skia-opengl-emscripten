// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_VERTICAL_SPACING_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_VERTICAL_SPACING_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-border-vertical-spacing' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitBorderVerticalSpacing final : public Longhand {
 public:
  constexpr WebkitBorderVerticalSpacing() : Longhand(CSSPropertyID::kWebkitBorderVerticalSpacing,
    0
    | kInterpolable
    | kProperty
    | kInherited
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "-webkit-border-vertical-spacing"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-border-vertical-spacing"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitBorderVerticalSpacing";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetVerticalBorderSpacing(ComputedStyleInitialValues::InitialVerticalBorderSpacing());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetVerticalBorderSpacing(state.ParentStyle()->VerticalBorderSpacing());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetVerticalBorderSpacing(StyleBuilderConverter::ConvertComputedLength<short>(state, value));
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_BORDER_VERTICAL_SPACING_H_
