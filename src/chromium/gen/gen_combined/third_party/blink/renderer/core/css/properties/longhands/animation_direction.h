// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_ANIMATION_DIRECTION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_ANIMATION_DIRECTION_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the 'animation-direction' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class AnimationDirection final : public Longhand {
 public:
  constexpr AnimationDirection() : Longhand(CSSPropertyID::kAnimationDirection,
    0
    | kProperty
    ,
    ','
    ) {}

  const char* GetPropertyName() const override { return "animation-direction"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("animation-direction"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "animationDirection";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  const CSSValue* InitialValue() const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    CSSAnimationData& data = state.Style()->AccessAnimations();
    data.DirectionList().clear();
    data.DirectionList().push_back(CSSAnimationData::InitialDirection());
  }

  void ApplyInherit(StyleResolverState& state) const override {
    const CSSAnimationData* parent_data = state.ParentStyle()->Animations();
    if (!parent_data)
      ApplyInitial(state);
    else
      state.Style()->AccessAnimations().DirectionList() = parent_data->DirectionList();
  }

  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    CSSAnimationData& data = state.Style()->AccessAnimations();
    data.DirectionList().clear();
    for (auto& listValue : To<CSSValueList>(value))
      data.DirectionList().push_back(CSSToStyleMap::MapAnimationDirection(*listValue));
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_ANIMATION_DIRECTION_H_
