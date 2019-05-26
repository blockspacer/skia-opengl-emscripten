// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_columns.h"

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

void GridTemplateColumns::ApplyInitial(StyleResolverState& state) const {
  state.Style()->SetGridTemplateColumns(ComputedStyleInitialValues::InitialGridTemplateColumns());
  state.Style()->SetNamedGridColumnLines(ComputedStyleInitialValues::InitialNamedGridColumnLines());
  state.Style()->SetOrderedNamedGridColumnLines(ComputedStyleInitialValues::InitialOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumns(ComputedStyleInitialValues::InitialGridAutoRepeatColumns());
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(ComputedStyleInitialValues::InitialGridAutoRepeatColumnsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridColumnLines(ComputedStyleInitialValues::InitialNamedGridColumnLines());
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(ComputedStyleInitialValues::InitialOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumnsType(ComputedStyleInitialValues::InitialGridAutoRepeatColumnsType());
}

void GridTemplateColumns::ApplyInherit(StyleResolverState& state) const {
  state.Style()->SetGridTemplateColumns(state.ParentStyle()->GridTemplateColumns());
  state.Style()->SetNamedGridColumnLines(state.ParentStyle()->NamedGridColumnLines());
  state.Style()->SetOrderedNamedGridColumnLines(state.ParentStyle()->OrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumns(state.ParentStyle()->GridAutoRepeatColumns());
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(state.ParentStyle()->GridAutoRepeatColumnsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridColumnLines(state.ParentStyle()->AutoRepeatNamedGridColumnLines());
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(state.ParentStyle()->AutoRepeatOrderedNamedGridColumnLines());
  state.Style()->SetGridAutoRepeatColumnsType(state.ParentStyle()->GridAutoRepeatColumnsType());
}

void GridTemplateColumns::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  Vector<GridTrackSize> track_sizes;
  Vector<GridTrackSize> auto_repeat_track_sizes;
  NamedGridLinesMap named_grid_lines;
  OrderedNamedGridLines ordered_named_grid_lines;
  NamedGridLinesMap auto_repeat_named_grid_lines;
  OrderedNamedGridLines auto_repeat_ordered_named_grid_lines;
  AutoRepeatType autoRepeatType = ComputedStyleInitialValues::InitialGridAutoRepeatType();
  size_t auto_repeat_insertion_point =
      ComputedStyleInitialValues::InitialGridAutoRepeatInsertionPoint();
  StyleBuilderConverter::ConvertGridTrackList(
      value, track_sizes, named_grid_lines, ordered_named_grid_lines,
      auto_repeat_track_sizes, auto_repeat_named_grid_lines,
      auto_repeat_ordered_named_grid_lines, auto_repeat_insertion_point,
      autoRepeatType, state);
  const NamedGridAreaMap& named_grid_areas = state.Style()->NamedGridArea();
  if (!named_grid_areas.IsEmpty()) {
    StyleBuilderConverter::CreateImplicitNamedGridLinesFromGridArea(
        named_grid_areas, named_grid_lines, kForColumns);
  }
  state.Style()->SetGridTemplateColumns(track_sizes);
  state.Style()->SetNamedGridColumnLines(named_grid_lines);
  state.Style()->SetOrderedNamedGridColumnLines(ordered_named_grid_lines);
  state.Style()->SetGridAutoRepeatColumns(auto_repeat_track_sizes);
  state.Style()->SetGridAutoRepeatColumnsInsertionPoint(
      auto_repeat_insertion_point);
  state.Style()->SetAutoRepeatNamedGridColumnLines(auto_repeat_named_grid_lines);
  state.Style()->SetAutoRepeatOrderedNamedGridColumnLines(
      auto_repeat_ordered_named_grid_lines);
  state.Style()->SetGridAutoRepeatColumnsType(autoRepeatType);
}


}  // namespace css_longhand
}  // namespace blink
