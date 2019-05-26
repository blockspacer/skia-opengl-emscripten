// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_

#include "third_party/blink/renderer/core/css/properties/css_unresolved_property.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-shape-image-threshold' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitShapeImageThreshold final : public CSSUnresolvedProperty {
 public:
  constexpr WebkitShapeImageThreshold() : CSSUnresolvedProperty() {}

  const char* GetPropertyName() const override { return "-webkit-shape-image-threshold"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-shape-image-threshold"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitShapeImageThreshold";
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_SHAPE_IMAGE_THRESHOLD_H_
