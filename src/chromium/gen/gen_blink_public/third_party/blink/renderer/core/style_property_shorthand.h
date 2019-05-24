/*
 * (C) 1999-2003 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2004, 2005, 2006, 2008 Apple Inc. All rights reserved.
 * Copyright (C) 2013 Intel Corporation. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

// Generated from template:
//   core/css/templates/style_property_shorthand.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_PROPERTY_SHORTHAND_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_PROPERTY_SHORTHAND_H_

#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/core/css/properties/css_property.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class StylePropertyShorthand {
    USING_FAST_MALLOC(StylePropertyShorthand);
 public:
  constexpr StylePropertyShorthand()
      : properties_(0),
        length_(0),
        shorthand_id_(CSSPropertyID::kInvalid) {}

  constexpr StylePropertyShorthand(CSSPropertyID id,
                                   const CSSProperty** properties,
                                   unsigned numProperties)
      : properties_(properties),
        length_(numProperties),
        shorthand_id_(id) {}

  const CSSProperty** properties() const { return properties_; }
  unsigned length() const { return length_; }
  CSSPropertyID id() const { return shorthand_id_; }

 private:
  const CSSProperty** properties_;
  unsigned length_;
  CSSPropertyID shorthand_id_;
};

const StylePropertyShorthand& animationShorthand();
const StylePropertyShorthand& backgroundShorthand();
const StylePropertyShorthand& backgroundPositionShorthand();
const StylePropertyShorthand& backgroundRepeatShorthand();
const StylePropertyShorthand& borderShorthand();
const StylePropertyShorthand& borderBlockShorthand();
const StylePropertyShorthand& borderBlockColorShorthand();
const StylePropertyShorthand& borderBlockEndShorthand();
const StylePropertyShorthand& borderBlockStartShorthand();
const StylePropertyShorthand& borderBlockStyleShorthand();
const StylePropertyShorthand& borderBlockWidthShorthand();
const StylePropertyShorthand& borderBottomShorthand();
const StylePropertyShorthand& borderColorShorthand();
const StylePropertyShorthand& borderImageShorthand();
const StylePropertyShorthand& borderInlineShorthand();
const StylePropertyShorthand& borderInlineColorShorthand();
const StylePropertyShorthand& borderInlineEndShorthand();
const StylePropertyShorthand& borderInlineStartShorthand();
const StylePropertyShorthand& borderInlineStyleShorthand();
const StylePropertyShorthand& borderInlineWidthShorthand();
const StylePropertyShorthand& borderLeftShorthand();
const StylePropertyShorthand& borderRadiusShorthand();
const StylePropertyShorthand& borderRightShorthand();
const StylePropertyShorthand& borderSpacingShorthand();
const StylePropertyShorthand& borderStyleShorthand();
const StylePropertyShorthand& borderTopShorthand();
const StylePropertyShorthand& borderWidthShorthand();
const StylePropertyShorthand& columnRuleShorthand();
const StylePropertyShorthand& columnsShorthand();
const StylePropertyShorthand& flexShorthand();
const StylePropertyShorthand& flexFlowShorthand();
const StylePropertyShorthand& fontShorthand();
const StylePropertyShorthand& fontVariantShorthand();
const StylePropertyShorthand& gapShorthand();
const StylePropertyShorthand& gridShorthand();
const StylePropertyShorthand& gridAreaShorthand();
const StylePropertyShorthand& gridColumnShorthand();
const StylePropertyShorthand& gridColumnGapShorthand();
const StylePropertyShorthand& gridGapShorthand();
const StylePropertyShorthand& gridRowShorthand();
const StylePropertyShorthand& gridRowGapShorthand();
const StylePropertyShorthand& gridTemplateShorthand();
const StylePropertyShorthand& insetShorthand();
const StylePropertyShorthand& insetBlockShorthand();
const StylePropertyShorthand& insetInlineShorthand();
const StylePropertyShorthand& listStyleShorthand();
const StylePropertyShorthand& marginShorthand();
const StylePropertyShorthand& marginBlockShorthand();
const StylePropertyShorthand& marginInlineShorthand();
const StylePropertyShorthand& markerShorthand();
const StylePropertyShorthand& offsetShorthand();
const StylePropertyShorthand& outlineShorthand();
const StylePropertyShorthand& overflowShorthand();
const StylePropertyShorthand& overscrollBehaviorShorthand();
const StylePropertyShorthand& paddingShorthand();
const StylePropertyShorthand& paddingBlockShorthand();
const StylePropertyShorthand& paddingInlineShorthand();
const StylePropertyShorthand& pageBreakAfterShorthand();
const StylePropertyShorthand& pageBreakBeforeShorthand();
const StylePropertyShorthand& pageBreakInsideShorthand();
const StylePropertyShorthand& placeContentShorthand();
const StylePropertyShorthand& placeItemsShorthand();
const StylePropertyShorthand& placeSelfShorthand();
const StylePropertyShorthand& scrollMarginShorthand();
const StylePropertyShorthand& scrollMarginBlockShorthand();
const StylePropertyShorthand& scrollMarginInlineShorthand();
const StylePropertyShorthand& scrollPaddingShorthand();
const StylePropertyShorthand& scrollPaddingBlockShorthand();
const StylePropertyShorthand& scrollPaddingInlineShorthand();
const StylePropertyShorthand& textDecorationShorthand();
const StylePropertyShorthand& transitionShorthand();
const StylePropertyShorthand& webkitColumnBreakAfterShorthand();
const StylePropertyShorthand& webkitColumnBreakBeforeShorthand();
const StylePropertyShorthand& webkitColumnBreakInsideShorthand();
const StylePropertyShorthand& webkitMarginCollapseShorthand();
const StylePropertyShorthand& webkitMaskShorthand();
const StylePropertyShorthand& webkitMaskBoxImageShorthand();
const StylePropertyShorthand& webkitMaskPositionShorthand();
const StylePropertyShorthand& webkitMaskRepeatShorthand();
const StylePropertyShorthand& webkitTextEmphasisShorthand();
const StylePropertyShorthand& webkitTextStrokeShorthand();

const StylePropertyShorthand& animationShorthandForParsing();
const StylePropertyShorthand& transitionShorthandForParsing();

// Returns an empty list if the property is not a shorthand.
const StylePropertyShorthand& shorthandForProperty(CSSPropertyID);

// Return the list of shorthands for a given longhand.
// The client must pass in an empty result vector.
void getMatchingShorthandsForLonghand(
    CSSPropertyID, Vector<StylePropertyShorthand, 4>* result);

unsigned indexOfShorthandForLonghand(CSSPropertyID,
                                     const Vector<StylePropertyShorthand, 4>&);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_PROPERTY_SHORTHAND_H_
