// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TRANSITION_TIMING_FUNCTION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TRANSITION_TIMING_FUNCTION_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the 'transition-timing-function' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class TransitionTimingFunction final : public Longhand {
 public:
  constexpr TransitionTimingFunction() : Longhand(CSSPropertyID::kTransitionTimingFunction,
    0
    | kProperty
    ,
    ','
    ) {}

  const char* GetPropertyName() const override { return "transition-timing-function"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("transition-timing-function"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "transitionTimingFunction";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;
  const CSSValue* InitialValue() const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    CSSTransitionData& data = state.Style()->AccessTransitions();
    data.TimingFunctionList().clear();
    data.TimingFunctionList().push_back(CSSTransitionData::InitialTimingFunction());
  }

  void ApplyInherit(StyleResolverState& state) const override {
    const CSSTransitionData* parent_data = state.ParentStyle()->Transitions();
    if (!parent_data)
      ApplyInitial(state);
    else
      state.Style()->AccessTransitions().TimingFunctionList() = parent_data->TimingFunctionList();
  }

  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    CSSTransitionData& data = state.Style()->AccessTransitions();
    data.TimingFunctionList().clear();
    for (auto& listValue : To<CSSValueList>(value))
      data.TimingFunctionList().push_back(CSSToStyleMap::MapAnimationTimingFunction(*listValue));
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_TRANSITION_TIMING_FUNCTION_H_
