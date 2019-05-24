// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_REPEAT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_REPEAT_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-mask-box-image-repeat' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitMaskBoxImageRepeat final : public Longhand {
 public:
  constexpr WebkitMaskBoxImageRepeat() : Longhand(CSSPropertyID::kWebkitMaskBoxImageRepeat,
    0
    | kProperty
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "-webkit-mask-box-image-repeat"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-mask-box-image-repeat"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitMaskBoxImageRepeat";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    const NinePieceImage& current_image = state.Style()->MaskBoxImage();
    if (current_image.HorizontalRule() == kStretchImageRule &&
        current_image.VerticalRule() == kStretchImageRule)
      return;
    NinePieceImage image(current_image);
    image.SetHorizontalRule(kStretchImageRule);
    image.SetVerticalRule(kStretchImageRule);
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    image.CopyRepeatFrom(state.ParentStyle()->MaskBoxImage());
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    CSSToStyleMap::MapNinePieceImageRepeat(state, value, image);
    state.Style()->SetMaskBoxImage(image);
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_REPEAT_H_
