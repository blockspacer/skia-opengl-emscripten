// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FAMILY_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FAMILY_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/font_builder.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"

namespace blink {
namespace css_longhand {

// Implements the 'font-family' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class FontFamily final : public Longhand {
 public:
  constexpr FontFamily() : Longhand(CSSPropertyID::kFontFamily,
    0
    | kDescriptor
    | kProperty
    | kInherited
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "font-family"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("font-family"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "fontFamily";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.GetFontBuilder().SetFamilyDescription(FontBuilder::InitialFamilyDescription());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.GetFontBuilder().SetFamilyDescription(state.ParentFontDescription().GetFamilyDescription());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.GetFontBuilder().SetFamilyDescription(StyleBuilderConverter::ConvertFontFamily(state, value));
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FONT_FAMILY_H_
