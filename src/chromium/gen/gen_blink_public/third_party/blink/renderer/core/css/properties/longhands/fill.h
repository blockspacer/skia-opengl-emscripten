// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FILL_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FILL_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style/svg_computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the 'fill' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class Fill final : public Longhand {
 public:
  constexpr Fill() : Longhand(CSSPropertyID::kFill,
    0
    | kInterpolable
    | kProperty
    | kValidForVisitedLink
    | kInherited
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "fill"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("fill"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "fill";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    if (state.ApplyPropertyToRegularStyle())
      state.Style()->AccessSVGStyle().SetFillPaint(SVGComputedStyle::InitialFillPaint());
    if (state.ApplyPropertyToVisitedLinkStyle())
      state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(SVGComputedStyle::InitialFillPaint());
  }

  void ApplyInherit(StyleResolverState& state) const override {
    const SVGComputedStyle& parent_svg_style = state.ParentStyle()->SvgStyle();
    if (state.ApplyPropertyToRegularStyle())
      state.Style()->AccessSVGStyle().SetFillPaint(parent_svg_style.FillPaint());
    if (state.ApplyPropertyToVisitedLinkStyle())
      state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(parent_svg_style.FillPaint());
  }

  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    SVGPaint paint = StyleBuilderConverter::ConvertSVGPaint(state, value);
    if (state.ApplyPropertyToRegularStyle())
      state.Style()->AccessSVGStyle().SetFillPaint(paint);
    if (state.ApplyPropertyToVisitedLinkStyle())
      state.Style()->AccessSVGStyle().SetVisitedLinkFillPaint(paint);
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_FILL_H_
