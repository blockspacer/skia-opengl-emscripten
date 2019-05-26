// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/grid_template_rows.h"

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/resolver/style_builder_converter.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

void GridTemplateRows::ApplyInitial(StyleResolverState& state) const {
  state.Style()->SetGridTemplateRows(ComputedStyleInitialValues::InitialGridTemplateRows());
  state.Style()->SetNamedGridRowLines(ComputedStyleInitialValues::InitialNamedGridRowLines());
  state.Style()->SetOrderedNamedGridRowLines(ComputedStyleInitialValues::InitialOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRows(ComputedStyleInitialValues::InitialGridAutoRepeatRows());
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(ComputedStyleInitialValues::InitialGridAutoRepeatRowsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridRowLines(ComputedStyleInitialValues::InitialNamedGridRowLines());
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(ComputedStyleInitialValues::InitialOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRowsType(ComputedStyleInitialValues::InitialGridAutoRepeatRowsType());
}

void GridTemplateRows::ApplyInherit(StyleResolverState& state) const {
  state.Style()->SetGridTemplateRows(state.ParentStyle()->GridTemplateRows());
  state.Style()->SetNamedGridRowLines(state.ParentStyle()->NamedGridRowLines());
  state.Style()->SetOrderedNamedGridRowLines(state.ParentStyle()->OrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRows(state.ParentStyle()->GridAutoRepeatRows());
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(state.ParentStyle()->GridAutoRepeatRowsInsertionPoint());
  state.Style()->SetAutoRepeatNamedGridRowLines(state.ParentStyle()->AutoRepeatNamedGridRowLines());
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(state.ParentStyle()->AutoRepeatOrderedNamedGridRowLines());
  state.Style()->SetGridAutoRepeatRowsType(state.ParentStyle()->GridAutoRepeatRowsType());
}

void GridTemplateRows::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
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
        named_grid_areas, named_grid_lines, kForRows);
  }
  state.Style()->SetGridTemplateRows(track_sizes);
  state.Style()->SetNamedGridRowLines(named_grid_lines);
  state.Style()->SetOrderedNamedGridRowLines(ordered_named_grid_lines);
  state.Style()->SetGridAutoRepeatRows(auto_repeat_track_sizes);
  state.Style()->SetGridAutoRepeatRowsInsertionPoint(
      auto_repeat_insertion_point);
  state.Style()->SetAutoRepeatNamedGridRowLines(auto_repeat_named_grid_lines);
  state.Style()->SetAutoRepeatOrderedNamedGridRowLines(
      auto_repeat_ordered_named_grid_lines);
  state.Style()->SetGridAutoRepeatRowsType(autoRepeatType);
}


}  // namespace css_longhand
}  // namespace blink
