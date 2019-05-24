// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/mask_source_type.h"

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

void MaskSourceType::ApplyInitial(StyleResolverState& state) const {
  FillLayer* curr_child = &state.Style()->AccessMaskLayers();
  curr_child->SetMaskSourceType(FillLayer::InitialFillMaskSourceType(EFillLayerType::kMask));
  for (curr_child = curr_child->Next(); curr_child; curr_child = curr_child->Next())
    curr_child->ClearMaskSourceType();
}

void MaskSourceType::ApplyInherit(StyleResolverState& state) const {
  FillLayer* curr_child = &state.Style()->AccessMaskLayers();
  FillLayer* prev_child = 0;
  const FillLayer* curr_parent = &state.ParentStyle()->MaskLayers();
  while (curr_parent && curr_parent->IsMaskSourceTypeSet()) {
    if (!curr_child)
      curr_child = prev_child->EnsureNext();
    curr_child->SetMaskSourceType(curr_parent->MaskSourceType());
    prev_child = curr_child;
    curr_child = prev_child->Next();
    curr_parent = curr_parent->Next();
  }

  while (curr_child) {
    // Reset any remaining layers to not have the property set.
    curr_child->ClearMaskSourceType();
    curr_child = curr_child->Next();
  }
}

void MaskSourceType::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  FillLayer* curr_child = &state.Style()->AccessMaskLayers();
  FillLayer* prev_child = 0;
  const auto* value_list = DynamicTo<CSSValueList>(value);
  if (value_list && !value.IsImageSetValue()) {
    // Walk each value and put it into a layer, creating new layers as needed.
    for (unsigned int i = 0; i < value_list->length(); i++) {
      if (!curr_child)
        curr_child = prev_child->EnsureNext();
      CSSToStyleMap::MapFillMaskSourceType(state, curr_child, value_list->Item(i));
      prev_child = curr_child;
      curr_child = curr_child->Next();
    }
  } else {
    CSSToStyleMap::MapFillMaskSourceType(state, curr_child, value);
    curr_child = curr_child->Next();
  }
  while (curr_child) {
    // Reset all remaining layers to not have the property set.
    curr_child->ClearMaskSourceType();
    curr_child = curr_child->Next();
  }
}


}  // namespace css_longhand
}  // namespace blink
