// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_COLLAPSE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_COLLAPSE_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the 'border-collapse' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class BorderCollapse final : public Longhand {
 public:
  constexpr BorderCollapse() : Longhand(CSSPropertyID::kBorderCollapse,
    0
    | kProperty
    | kInherited
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "border-collapse"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("border-collapse"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "borderCollapse";
  }
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    state.Style()->SetBorderCollapse(ComputedStyleInitialValues::InitialBorderCollapse());
    state.Style()->SetBorderCollapseIsInherited(false);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    state.Style()->SetBorderCollapse(state.ParentStyle()->BorderCollapse());
    state.Style()->SetBorderCollapseIsInherited(true);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    state.Style()->SetBorderCollapse(To<CSSIdentifierValue>(value).ConvertTo<blink::EBorderCollapse>());
    state.Style()->SetBorderCollapseIsInherited(false);
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_BORDER_COLLAPSE_H_
