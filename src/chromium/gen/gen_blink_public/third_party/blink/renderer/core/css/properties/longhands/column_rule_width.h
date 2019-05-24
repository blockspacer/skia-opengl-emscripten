// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_COLUMN_RULE_WIDTH_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_COLUMN_RULE_WIDTH_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the 'column-rule-width' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class ColumnRuleWidth final : public Longhand {
 public:
  constexpr ColumnRuleWidth() : Longhand(CSSPropertyID::kColumnRuleWidth,
    0
    | kInterpolable
    | kProperty
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "column-rule-width"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("column-rule-width"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "columnRuleWidth";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetColumnRuleWidth(ComputedStyleInitialValues::InitialColumnRuleWidth());
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetColumnRuleWidth(state.ParentStyle()->ColumnRuleWidth());
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetColumnRuleWidth(StyleBuilderConverter::ConvertLineWidth<unsigned short>(state, value));
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_COLUMN_RULE_WIDTH_H_
