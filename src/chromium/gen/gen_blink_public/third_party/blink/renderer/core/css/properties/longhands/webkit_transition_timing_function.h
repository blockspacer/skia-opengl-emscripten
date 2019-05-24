// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_TIMING_FUNCTION_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_TIMING_FUNCTION_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-transition-timing-function' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitTransitionTimingFunction final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitTransitionTimingFunction() : CSSUnresolvedProperty() {}

  const char* GetPropertyName() const override { return "-webkit-transition-timing-function"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-transition-timing-function"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitTransitionTimingFunction";
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_TRANSITION_TIMING_FUNCTION_H_
