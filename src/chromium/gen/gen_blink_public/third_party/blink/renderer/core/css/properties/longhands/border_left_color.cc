// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/border_left_color.h"

#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

void BorderLeftColor::ApplyInitial(StyleResolverState& state) const {
  StyleColor color = StyleColor::CurrentColor();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderLeftColor(color);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->SetVisitedLinkBorderLeftColor(color);
}

void BorderLeftColor::ApplyInherit(StyleResolverState& state) const {
  // Visited link style can never explicitly inherit from parent visited link
  // style so no separate getters are needed.
  StyleColor color = state.ParentStyle()->BorderLeftColor();
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderLeftColor(color);
  if (state.ApplyPropertyToVisitedLinkStyle())
    state.Style()->SetVisitedLinkBorderLeftColor(color);
}

void BorderLeftColor::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  if (state.ApplyPropertyToRegularStyle())
    state.Style()->SetBorderLeftColor(StyleBuilderConverter::ConvertStyleColor(state, value));
  if (state.ApplyPropertyToVisitedLinkStyle()) {
    state.Style()->SetVisitedLinkBorderLeftColor(
        StyleBuilderConverter::ConvertStyleColor(state, value, true));
  }
}


}  // namespace css_longhand
}  // namespace blink
