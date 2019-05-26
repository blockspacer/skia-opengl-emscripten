// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_SCROLL_PADDING_INLINE_END_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_SCROLL_PADDING_INLINE_END_H_

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style_property_shorthand.h"

namespace blink {
namespace css_longhand {

// Implements the 'scroll-padding-inline-end' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class ScrollPaddingInlineEnd final : public Longhand {
 public:
  constexpr ScrollPaddingInlineEnd() : Longhand(CSSPropertyID::kScrollPaddingInlineEnd,
    0
    | kProperty
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "scroll-padding-inline-end"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("scroll-padding-inline-end"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "scrollPaddingInlineEnd";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(
      const ComputedStyle& ,
      const SVGComputedStyle&,
      const LayoutObject*,
      Node*,
      bool allow_visited_style) const override {
    // Directional properties are resolved by resolveDirectionAwareProperty()
    // before calling CSSValueFromComputedStyleInternal.
    NOTREACHED();
    return nullptr;
  }
  const CSSProperty& ResolveDirectionAwareProperty(
      TextDirection direction,
      blink::WritingMode writing_mode) const override {
    return ResolveEndToPhysicalProperty(
      direction,
      writing_mode,
      scrollPaddingShorthand());
  }

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    const CSSProperty& resolved_property =
        ResolveDirectionAwareProperty(state.Style()->Direction(),
                                      state.Style()->GetWritingMode());
    DCHECK(!resolved_property.IDEquals(PropertyID()));
    To<Longhand>(resolved_property).ApplyInitial(state);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    const CSSProperty& resolved_property =
        ResolveDirectionAwareProperty(state.Style()->Direction(),
                                      state.Style()->GetWritingMode());
    DCHECK(!resolved_property.IDEquals(PropertyID()));
    To<Longhand>(resolved_property).ApplyInherit(state);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    const CSSProperty& resolved_property =
        ResolveDirectionAwareProperty(state.Style()->Direction(),
                                      state.Style()->GetWritingMode());
    DCHECK(!resolved_property.IDEquals(PropertyID()));
    To<Longhand>(resolved_property).ApplyValue(state, value);
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_SCROLL_PADDING_INLINE_END_H_
