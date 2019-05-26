// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/properties/templates/css_property_subclass.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/properties/css_property_methods.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_OUTSET_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_OUTSET_H_

#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/properties/longhand.h"
#include "third_party/blink/renderer/core/css/properties/style_building_utils.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/computed_style.h"

namespace blink {
namespace css_longhand {

// Implements the '-webkit-mask-box-image-outset' CSS property
// See src/third_party/blink/renderer/core/css/properties/README.md
class WebkitMaskBoxImageOutset final : public Longhand {
 public:
  constexpr WebkitMaskBoxImageOutset() : Longhand(CSSPropertyID::kWebkitMaskBoxImageOutset,
    0
    | kInterpolable
    | kProperty
    ,
    '\0'
    ) {}

  const char* GetPropertyName() const override { return "-webkit-mask-box-image-outset"; }
  const WTF::AtomicString& GetPropertyNameAtomicString() const override {
    DEFINE_STATIC_LOCAL(const AtomicString, name, ("-webkit-mask-box-image-outset"));
    return name;
  }
  const char* GetJSPropertyName() const override {
    return "webkitMaskBoxImageOutset";
  }
  const CSSValue* ParseSingleValue(CSSParserTokenRange&, const CSSParserContext&, const CSSParserLocalContext&) const override;
  const CSSValue* CSSValueFromComputedStyleInternal(const ComputedStyle&, const SVGComputedStyle&, const LayoutObject*, Node*, bool allow_visited_style) const override;

  // Style builder functions
  void ApplyInitial(StyleResolverState& state) const override {
    const NinePieceImage& current_image = state.Style()->MaskBoxImage();
    if (style_building_utils::BorderImageLengthMatchesAllSides(current_image.Outset(),
                                         BorderImageLength(Length::Fixed(0))))
      return;
    NinePieceImage image(current_image);
    image.SetOutset(Length::Fixed(0));
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyInherit(StyleResolverState& state) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    image.CopyOutsetFrom(state.ParentStyle()->MaskBoxImage());
    state.Style()->SetMaskBoxImage(image);
  }
  void ApplyValue(StyleResolverState& state, const CSSValue& value) const override {
    NinePieceImage image(state.Style()->MaskBoxImage());
    image.SetOutset(CSSToStyleMap::MapNinePieceImageQuad(state, value));
    state.Style()->SetMaskBoxImage(image);
  }
};

}  // namespace css_longhand
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PROPERTIES_LONGHAND_WEBKIT_MASK_BOX_IMAGE_OUTSET_H_
