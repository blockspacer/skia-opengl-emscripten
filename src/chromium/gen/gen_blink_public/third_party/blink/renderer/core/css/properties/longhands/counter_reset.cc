// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#include "third_party/blink/renderer/core/css/properties/longhands/counter_reset.h"

#include "third_party/blink/renderer/core/css/css_custom_ident_value.h"
#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_value_list.h"
#include "third_party/blink/renderer/core/css/css_value_pair.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

void CounterReset::ApplyInitial(StyleResolverState& state) const {
  state.Style()->ClearResetDirectives();
}

void CounterReset::ApplyInherit(StyleResolverState& state) const {
  const CounterDirectiveMap* parent_map = state.ParentStyle()->GetCounterDirectives();
  if (!parent_map)
    return;

  CounterDirectiveMap& map = state.Style()->AccessCounterDirectives();
  DCHECK(!parent_map->IsEmpty());

  typedef CounterDirectiveMap::const_iterator Iterator;
  Iterator end = parent_map->end();
  for (Iterator it = parent_map->begin(); it != end; ++it) {
    CounterDirectives& directives = map.insert(it->key, CounterDirectives()).stored_value->value;
    directives.InheritReset(it->value);
  }
}

void CounterReset::ApplyValue(StyleResolverState& state, const CSSValue& value) const {
  state.Style()->ClearResetDirectives();

  const auto* list = DynamicTo<CSSValueList>(value);
  if (!list) {
    DCHECK_EQ(To<CSSIdentifierValue>(value).GetValueID(), CSSValueID::kNone);
    return;
  }

  CounterDirectiveMap& map = state.Style()->AccessCounterDirectives();

  for (const CSSValue* item : *list) {
    const auto& pair = To<CSSValuePair>(*item);
    AtomicString identifier(To<CSSCustomIdentValue>(pair.First()).Value());
    int counter_value = To<CSSPrimitiveValue>(pair.Second()).GetIntValue();
    CounterDirectives& directives =
    map.insert(identifier, CounterDirectives()).stored_value->value;
    directives.SetResetValue(counter_value);
  }
  DCHECK(!map.IsEmpty());
}


}  // namespace css_longhand
}  // namespace blink
