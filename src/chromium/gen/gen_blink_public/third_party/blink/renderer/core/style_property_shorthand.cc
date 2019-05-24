/*
 * (C) 1999-2003 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2004, 2005, 2006, 2007, 2008 Apple Inc. All rights reserved.
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
//   core/css/templates/style_property_shorthand.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5


#include "third_party/blink/renderer/core/style_property_shorthand.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {

const StylePropertyShorthand& animationShorthand() {
  static const CSSProperty* animationProperties[] = {
    &GetCSSPropertyAnimationDuration(),
    &GetCSSPropertyAnimationTimingFunction(),
    &GetCSSPropertyAnimationDelay(),
    &GetCSSPropertyAnimationIterationCount(),
    &GetCSSPropertyAnimationDirection(),
    &GetCSSPropertyAnimationFillMode(),
    &GetCSSPropertyAnimationPlayState(),
    &GetCSSPropertyAnimationName(),
  };

  static StylePropertyShorthand animationLonghands(
    CSSPropertyID::kAnimation,
    animationProperties,
    base::size(animationProperties));
  return animationLonghands;
}

const StylePropertyShorthand& backgroundShorthand() {
  static const CSSProperty* backgroundProperties[] = {
    &GetCSSPropertyBackgroundImage(),
    &GetCSSPropertyBackgroundPositionX(),
    &GetCSSPropertyBackgroundPositionY(),
    &GetCSSPropertyBackgroundSize(),
    &GetCSSPropertyBackgroundRepeatX(),
    &GetCSSPropertyBackgroundRepeatY(),
    &GetCSSPropertyBackgroundAttachment(),
    &GetCSSPropertyBackgroundOrigin(),
    &GetCSSPropertyBackgroundClip(),
    &GetCSSPropertyBackgroundColor(),
  };

  static StylePropertyShorthand backgroundLonghands(
    CSSPropertyID::kBackground,
    backgroundProperties,
    base::size(backgroundProperties));
  return backgroundLonghands;
}

const StylePropertyShorthand& backgroundPositionShorthand() {
  static const CSSProperty* backgroundPositionProperties[] = {
    &GetCSSPropertyBackgroundPositionX(),
    &GetCSSPropertyBackgroundPositionY(),
  };

  static StylePropertyShorthand backgroundPositionLonghands(
    CSSPropertyID::kBackgroundPosition,
    backgroundPositionProperties,
    base::size(backgroundPositionProperties));
  return backgroundPositionLonghands;
}

const StylePropertyShorthand& backgroundRepeatShorthand() {
  static const CSSProperty* backgroundRepeatProperties[] = {
    &GetCSSPropertyBackgroundRepeatX(),
    &GetCSSPropertyBackgroundRepeatY(),
  };

  static StylePropertyShorthand backgroundRepeatLonghands(
    CSSPropertyID::kBackgroundRepeat,
    backgroundRepeatProperties,
    base::size(backgroundRepeatProperties));
  return backgroundRepeatLonghands;
}

const StylePropertyShorthand& borderShorthand() {
  static const CSSProperty* borderProperties[] = {
    &GetCSSPropertyBorderTopColor(),
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderRightColor(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderBottomColor(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderLeftColor(),
    &GetCSSPropertyBorderLeftStyle(),
    &GetCSSPropertyBorderLeftWidth(),
    &GetCSSPropertyBorderImageSource(),
    &GetCSSPropertyBorderImageSlice(),
    &GetCSSPropertyBorderImageWidth(),
    &GetCSSPropertyBorderImageOutset(),
    &GetCSSPropertyBorderImageRepeat(),
  };

  static StylePropertyShorthand borderLonghands(
    CSSPropertyID::kBorder,
    borderProperties,
    base::size(borderProperties));
  return borderLonghands;
}

const StylePropertyShorthand& borderBlockShorthand() {
  static const CSSProperty* borderBlockProperties[] = {
    &GetCSSPropertyBorderBlockStartColor(),
    &GetCSSPropertyBorderBlockStartStyle(),
    &GetCSSPropertyBorderBlockStartWidth(),
    &GetCSSPropertyBorderBlockEndColor(),
    &GetCSSPropertyBorderBlockEndStyle(),
    &GetCSSPropertyBorderBlockEndWidth(),
  };

  static StylePropertyShorthand borderBlockLonghands(
    CSSPropertyID::kBorderBlock,
    borderBlockProperties,
    base::size(borderBlockProperties));
  return borderBlockLonghands;
}

const StylePropertyShorthand& borderBlockColorShorthand() {
  static const CSSProperty* borderBlockColorProperties[] = {
    &GetCSSPropertyBorderBlockStartColor(),
    &GetCSSPropertyBorderBlockEndColor(),
  };

  static StylePropertyShorthand borderBlockColorLonghands(
    CSSPropertyID::kBorderBlockColor,
    borderBlockColorProperties,
    base::size(borderBlockColorProperties));
  return borderBlockColorLonghands;
}

const StylePropertyShorthand& borderBlockEndShorthand() {
  static const CSSProperty* borderBlockEndProperties[] = {
    &GetCSSPropertyBorderBlockEndWidth(),
    &GetCSSPropertyBorderBlockEndStyle(),
    &GetCSSPropertyBorderBlockEndColor(),
  };

  static StylePropertyShorthand borderBlockEndLonghands(
    CSSPropertyID::kBorderBlockEnd,
    borderBlockEndProperties,
    base::size(borderBlockEndProperties));
  return borderBlockEndLonghands;
}

const StylePropertyShorthand& borderBlockStartShorthand() {
  static const CSSProperty* borderBlockStartProperties[] = {
    &GetCSSPropertyBorderBlockStartWidth(),
    &GetCSSPropertyBorderBlockStartStyle(),
    &GetCSSPropertyBorderBlockStartColor(),
  };

  static StylePropertyShorthand borderBlockStartLonghands(
    CSSPropertyID::kBorderBlockStart,
    borderBlockStartProperties,
    base::size(borderBlockStartProperties));
  return borderBlockStartLonghands;
}

const StylePropertyShorthand& borderBlockStyleShorthand() {
  static const CSSProperty* borderBlockStyleProperties[] = {
    &GetCSSPropertyBorderBlockStartStyle(),
    &GetCSSPropertyBorderBlockEndStyle(),
  };

  static StylePropertyShorthand borderBlockStyleLonghands(
    CSSPropertyID::kBorderBlockStyle,
    borderBlockStyleProperties,
    base::size(borderBlockStyleProperties));
  return borderBlockStyleLonghands;
}

const StylePropertyShorthand& borderBlockWidthShorthand() {
  static const CSSProperty* borderBlockWidthProperties[] = {
    &GetCSSPropertyBorderBlockStartWidth(),
    &GetCSSPropertyBorderBlockEndWidth(),
  };

  static StylePropertyShorthand borderBlockWidthLonghands(
    CSSPropertyID::kBorderBlockWidth,
    borderBlockWidthProperties,
    base::size(borderBlockWidthProperties));
  return borderBlockWidthLonghands;
}

const StylePropertyShorthand& borderBottomShorthand() {
  static const CSSProperty* borderBottomProperties[] = {
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderBottomColor(),
  };

  static StylePropertyShorthand borderBottomLonghands(
    CSSPropertyID::kBorderBottom,
    borderBottomProperties,
    base::size(borderBottomProperties));
  return borderBottomLonghands;
}

const StylePropertyShorthand& borderColorShorthand() {
  static const CSSProperty* borderColorProperties[] = {
    &GetCSSPropertyBorderTopColor(),
    &GetCSSPropertyBorderRightColor(),
    &GetCSSPropertyBorderBottomColor(),
    &GetCSSPropertyBorderLeftColor(),
  };

  static StylePropertyShorthand borderColorLonghands(
    CSSPropertyID::kBorderColor,
    borderColorProperties,
    base::size(borderColorProperties));
  return borderColorLonghands;
}

const StylePropertyShorthand& borderImageShorthand() {
  static const CSSProperty* borderImageProperties[] = {
    &GetCSSPropertyBorderImageSource(),
    &GetCSSPropertyBorderImageSlice(),
    &GetCSSPropertyBorderImageWidth(),
    &GetCSSPropertyBorderImageOutset(),
    &GetCSSPropertyBorderImageRepeat(),
  };

  static StylePropertyShorthand borderImageLonghands(
    CSSPropertyID::kBorderImage,
    borderImageProperties,
    base::size(borderImageProperties));
  return borderImageLonghands;
}

const StylePropertyShorthand& borderInlineShorthand() {
  static const CSSProperty* borderInlineProperties[] = {
    &GetCSSPropertyBorderInlineStartColor(),
    &GetCSSPropertyBorderInlineStartStyle(),
    &GetCSSPropertyBorderInlineStartWidth(),
    &GetCSSPropertyBorderInlineEndColor(),
    &GetCSSPropertyBorderInlineEndStyle(),
    &GetCSSPropertyBorderInlineEndWidth(),
  };

  static StylePropertyShorthand borderInlineLonghands(
    CSSPropertyID::kBorderInline,
    borderInlineProperties,
    base::size(borderInlineProperties));
  return borderInlineLonghands;
}

const StylePropertyShorthand& borderInlineColorShorthand() {
  static const CSSProperty* borderInlineColorProperties[] = {
    &GetCSSPropertyBorderInlineStartColor(),
    &GetCSSPropertyBorderInlineEndColor(),
  };

  static StylePropertyShorthand borderInlineColorLonghands(
    CSSPropertyID::kBorderInlineColor,
    borderInlineColorProperties,
    base::size(borderInlineColorProperties));
  return borderInlineColorLonghands;
}

const StylePropertyShorthand& borderInlineEndShorthand() {
  static const CSSProperty* borderInlineEndProperties[] = {
    &GetCSSPropertyBorderInlineEndWidth(),
    &GetCSSPropertyBorderInlineEndStyle(),
    &GetCSSPropertyBorderInlineEndColor(),
  };

  static StylePropertyShorthand borderInlineEndLonghands(
    CSSPropertyID::kBorderInlineEnd,
    borderInlineEndProperties,
    base::size(borderInlineEndProperties));
  return borderInlineEndLonghands;
}

const StylePropertyShorthand& borderInlineStartShorthand() {
  static const CSSProperty* borderInlineStartProperties[] = {
    &GetCSSPropertyBorderInlineStartWidth(),
    &GetCSSPropertyBorderInlineStartStyle(),
    &GetCSSPropertyBorderInlineStartColor(),
  };

  static StylePropertyShorthand borderInlineStartLonghands(
    CSSPropertyID::kBorderInlineStart,
    borderInlineStartProperties,
    base::size(borderInlineStartProperties));
  return borderInlineStartLonghands;
}

const StylePropertyShorthand& borderInlineStyleShorthand() {
  static const CSSProperty* borderInlineStyleProperties[] = {
    &GetCSSPropertyBorderInlineStartStyle(),
    &GetCSSPropertyBorderInlineEndStyle(),
  };

  static StylePropertyShorthand borderInlineStyleLonghands(
    CSSPropertyID::kBorderInlineStyle,
    borderInlineStyleProperties,
    base::size(borderInlineStyleProperties));
  return borderInlineStyleLonghands;
}

const StylePropertyShorthand& borderInlineWidthShorthand() {
  static const CSSProperty* borderInlineWidthProperties[] = {
    &GetCSSPropertyBorderInlineStartWidth(),
    &GetCSSPropertyBorderInlineEndWidth(),
  };

  static StylePropertyShorthand borderInlineWidthLonghands(
    CSSPropertyID::kBorderInlineWidth,
    borderInlineWidthProperties,
    base::size(borderInlineWidthProperties));
  return borderInlineWidthLonghands;
}

const StylePropertyShorthand& borderLeftShorthand() {
  static const CSSProperty* borderLeftProperties[] = {
    &GetCSSPropertyBorderLeftWidth(),
    &GetCSSPropertyBorderLeftStyle(),
    &GetCSSPropertyBorderLeftColor(),
  };

  static StylePropertyShorthand borderLeftLonghands(
    CSSPropertyID::kBorderLeft,
    borderLeftProperties,
    base::size(borderLeftProperties));
  return borderLeftLonghands;
}

const StylePropertyShorthand& borderRadiusShorthand() {
  static const CSSProperty* borderRadiusProperties[] = {
    &GetCSSPropertyBorderTopLeftRadius(),
    &GetCSSPropertyBorderTopRightRadius(),
    &GetCSSPropertyBorderBottomRightRadius(),
    &GetCSSPropertyBorderBottomLeftRadius(),
  };

  static StylePropertyShorthand borderRadiusLonghands(
    CSSPropertyID::kBorderRadius,
    borderRadiusProperties,
    base::size(borderRadiusProperties));
  return borderRadiusLonghands;
}

const StylePropertyShorthand& borderRightShorthand() {
  static const CSSProperty* borderRightProperties[] = {
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderRightColor(),
  };

  static StylePropertyShorthand borderRightLonghands(
    CSSPropertyID::kBorderRight,
    borderRightProperties,
    base::size(borderRightProperties));
  return borderRightLonghands;
}

const StylePropertyShorthand& borderSpacingShorthand() {
  static const CSSProperty* borderSpacingProperties[] = {
    &GetCSSPropertyWebkitBorderHorizontalSpacing(),
    &GetCSSPropertyWebkitBorderVerticalSpacing(),
  };

  static StylePropertyShorthand borderSpacingLonghands(
    CSSPropertyID::kBorderSpacing,
    borderSpacingProperties,
    base::size(borderSpacingProperties));
  return borderSpacingLonghands;
}

const StylePropertyShorthand& borderStyleShorthand() {
  static const CSSProperty* borderStyleProperties[] = {
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderRightStyle(),
    &GetCSSPropertyBorderBottomStyle(),
    &GetCSSPropertyBorderLeftStyle(),
  };

  static StylePropertyShorthand borderStyleLonghands(
    CSSPropertyID::kBorderStyle,
    borderStyleProperties,
    base::size(borderStyleProperties));
  return borderStyleLonghands;
}

const StylePropertyShorthand& borderTopShorthand() {
  static const CSSProperty* borderTopProperties[] = {
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderTopStyle(),
    &GetCSSPropertyBorderTopColor(),
  };

  static StylePropertyShorthand borderTopLonghands(
    CSSPropertyID::kBorderTop,
    borderTopProperties,
    base::size(borderTopProperties));
  return borderTopLonghands;
}

const StylePropertyShorthand& borderWidthShorthand() {
  static const CSSProperty* borderWidthProperties[] = {
    &GetCSSPropertyBorderTopWidth(),
    &GetCSSPropertyBorderRightWidth(),
    &GetCSSPropertyBorderBottomWidth(),
    &GetCSSPropertyBorderLeftWidth(),
  };

  static StylePropertyShorthand borderWidthLonghands(
    CSSPropertyID::kBorderWidth,
    borderWidthProperties,
    base::size(borderWidthProperties));
  return borderWidthLonghands;
}

const StylePropertyShorthand& columnRuleShorthand() {
  static const CSSProperty* columnRuleProperties[] = {
    &GetCSSPropertyColumnRuleWidth(),
    &GetCSSPropertyColumnRuleStyle(),
    &GetCSSPropertyColumnRuleColor(),
  };

  static StylePropertyShorthand columnRuleLonghands(
    CSSPropertyID::kColumnRule,
    columnRuleProperties,
    base::size(columnRuleProperties));
  return columnRuleLonghands;
}

const StylePropertyShorthand& columnsShorthand() {
  static const CSSProperty* columnsProperties[] = {
    &GetCSSPropertyColumnWidth(),
    &GetCSSPropertyColumnCount(),
  };

  static StylePropertyShorthand columnsLonghands(
    CSSPropertyID::kColumns,
    columnsProperties,
    base::size(columnsProperties));
  return columnsLonghands;
}

const StylePropertyShorthand& flexShorthand() {
  static const CSSProperty* flexProperties[] = {
    &GetCSSPropertyFlexGrow(),
    &GetCSSPropertyFlexShrink(),
    &GetCSSPropertyFlexBasis(),
  };

  static StylePropertyShorthand flexLonghands(
    CSSPropertyID::kFlex,
    flexProperties,
    base::size(flexProperties));
  return flexLonghands;
}

const StylePropertyShorthand& flexFlowShorthand() {
  static const CSSProperty* flexFlowProperties[] = {
    &GetCSSPropertyFlexDirection(),
    &GetCSSPropertyFlexWrap(),
  };

  static StylePropertyShorthand flexFlowLonghands(
    CSSPropertyID::kFlexFlow,
    flexFlowProperties,
    base::size(flexFlowProperties));
  return flexFlowLonghands;
}

const StylePropertyShorthand& fontShorthand() {
  static const CSSProperty* fontProperties[] = {
    &GetCSSPropertyFontStyle(),
    &GetCSSPropertyFontVariantLigatures(),
    &GetCSSPropertyFontVariantCaps(),
    &GetCSSPropertyFontVariantNumeric(),
    &GetCSSPropertyFontVariantEastAsian(),
    &GetCSSPropertyFontWeight(),
    &GetCSSPropertyFontStretch(),
    &GetCSSPropertyFontSize(),
    &GetCSSPropertyLineHeight(),
    &GetCSSPropertyFontFamily(),
  };

  static StylePropertyShorthand fontLonghands(
    CSSPropertyID::kFont,
    fontProperties,
    base::size(fontProperties));
  return fontLonghands;
}

const StylePropertyShorthand& fontVariantShorthand() {
  static const CSSProperty* fontVariantProperties[] = {
    &GetCSSPropertyFontVariantLigatures(),
    &GetCSSPropertyFontVariantCaps(),
    &GetCSSPropertyFontVariantNumeric(),
    &GetCSSPropertyFontVariantEastAsian(),
  };

  static StylePropertyShorthand fontVariantLonghands(
    CSSPropertyID::kFontVariant,
    fontVariantProperties,
    base::size(fontVariantProperties));
  return fontVariantLonghands;
}

const StylePropertyShorthand& gapShorthand() {
  static const CSSProperty* gapProperties[] = {
    &GetCSSPropertyRowGap(),
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gapLonghands(
    CSSPropertyID::kGap,
    gapProperties,
    base::size(gapProperties));
  return gapLonghands;
}

const StylePropertyShorthand& gridShorthand() {
  static const CSSProperty* gridProperties[] = {
    &GetCSSPropertyGridTemplateRows(),
    &GetCSSPropertyGridTemplateColumns(),
    &GetCSSPropertyGridTemplateAreas(),
    &GetCSSPropertyGridAutoFlow(),
    &GetCSSPropertyGridAutoRows(),
    &GetCSSPropertyGridAutoColumns(),
  };

  static StylePropertyShorthand gridLonghands(
    CSSPropertyID::kGrid,
    gridProperties,
    base::size(gridProperties));
  return gridLonghands;
}

const StylePropertyShorthand& gridAreaShorthand() {
  static const CSSProperty* gridAreaProperties[] = {
    &GetCSSPropertyGridRowStart(),
    &GetCSSPropertyGridColumnStart(),
    &GetCSSPropertyGridRowEnd(),
    &GetCSSPropertyGridColumnEnd(),
  };

  static StylePropertyShorthand gridAreaLonghands(
    CSSPropertyID::kGridArea,
    gridAreaProperties,
    base::size(gridAreaProperties));
  return gridAreaLonghands;
}

const StylePropertyShorthand& gridColumnShorthand() {
  static const CSSProperty* gridColumnProperties[] = {
    &GetCSSPropertyGridColumnStart(),
    &GetCSSPropertyGridColumnEnd(),
  };

  static StylePropertyShorthand gridColumnLonghands(
    CSSPropertyID::kGridColumn,
    gridColumnProperties,
    base::size(gridColumnProperties));
  return gridColumnLonghands;
}

const StylePropertyShorthand& gridColumnGapShorthand() {
  static const CSSProperty* gridColumnGapProperties[] = {
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gridColumnGapLonghands(
    CSSPropertyID::kGridColumnGap,
    gridColumnGapProperties,
    base::size(gridColumnGapProperties));
  return gridColumnGapLonghands;
}

const StylePropertyShorthand& gridGapShorthand() {
  static const CSSProperty* gridGapProperties[] = {
    &GetCSSPropertyRowGap(),
    &GetCSSPropertyColumnGap(),
  };

  static StylePropertyShorthand gridGapLonghands(
    CSSPropertyID::kGridGap,
    gridGapProperties,
    base::size(gridGapProperties));
  return gridGapLonghands;
}

const StylePropertyShorthand& gridRowShorthand() {
  static const CSSProperty* gridRowProperties[] = {
    &GetCSSPropertyGridRowStart(),
    &GetCSSPropertyGridRowEnd(),
  };

  static StylePropertyShorthand gridRowLonghands(
    CSSPropertyID::kGridRow,
    gridRowProperties,
    base::size(gridRowProperties));
  return gridRowLonghands;
}

const StylePropertyShorthand& gridRowGapShorthand() {
  static const CSSProperty* gridRowGapProperties[] = {
    &GetCSSPropertyRowGap(),
  };

  static StylePropertyShorthand gridRowGapLonghands(
    CSSPropertyID::kGridRowGap,
    gridRowGapProperties,
    base::size(gridRowGapProperties));
  return gridRowGapLonghands;
}

const StylePropertyShorthand& gridTemplateShorthand() {
  static const CSSProperty* gridTemplateProperties[] = {
    &GetCSSPropertyGridTemplateRows(),
    &GetCSSPropertyGridTemplateColumns(),
    &GetCSSPropertyGridTemplateAreas(),
  };

  static StylePropertyShorthand gridTemplateLonghands(
    CSSPropertyID::kGridTemplate,
    gridTemplateProperties,
    base::size(gridTemplateProperties));
  return gridTemplateLonghands;
}

const StylePropertyShorthand& insetShorthand() {
  static const CSSProperty* insetProperties[] = {
    &GetCSSPropertyTop(),
    &GetCSSPropertyRight(),
    &GetCSSPropertyBottom(),
    &GetCSSPropertyLeft(),
  };

  static StylePropertyShorthand insetLonghands(
    CSSPropertyID::kInset,
    insetProperties,
    base::size(insetProperties));
  return insetLonghands;
}

const StylePropertyShorthand& insetBlockShorthand() {
  static const CSSProperty* insetBlockProperties[] = {
    &GetCSSPropertyInsetBlockStart(),
    &GetCSSPropertyInsetBlockEnd(),
  };

  static StylePropertyShorthand insetBlockLonghands(
    CSSPropertyID::kInsetBlock,
    insetBlockProperties,
    base::size(insetBlockProperties));
  return insetBlockLonghands;
}

const StylePropertyShorthand& insetInlineShorthand() {
  static const CSSProperty* insetInlineProperties[] = {
    &GetCSSPropertyInsetInlineStart(),
    &GetCSSPropertyInsetInlineEnd(),
  };

  static StylePropertyShorthand insetInlineLonghands(
    CSSPropertyID::kInsetInline,
    insetInlineProperties,
    base::size(insetInlineProperties));
  return insetInlineLonghands;
}

const StylePropertyShorthand& listStyleShorthand() {
  static const CSSProperty* listStyleProperties[] = {
    &GetCSSPropertyListStyleType(),
    &GetCSSPropertyListStylePosition(),
    &GetCSSPropertyListStyleImage(),
  };

  static StylePropertyShorthand listStyleLonghands(
    CSSPropertyID::kListStyle,
    listStyleProperties,
    base::size(listStyleProperties));
  return listStyleLonghands;
}

const StylePropertyShorthand& marginShorthand() {
  static const CSSProperty* marginProperties[] = {
    &GetCSSPropertyMarginTop(),
    &GetCSSPropertyMarginRight(),
    &GetCSSPropertyMarginBottom(),
    &GetCSSPropertyMarginLeft(),
  };

  static StylePropertyShorthand marginLonghands(
    CSSPropertyID::kMargin,
    marginProperties,
    base::size(marginProperties));
  return marginLonghands;
}

const StylePropertyShorthand& marginBlockShorthand() {
  static const CSSProperty* marginBlockProperties[] = {
    &GetCSSPropertyMarginBlockStart(),
    &GetCSSPropertyMarginBlockEnd(),
  };

  static StylePropertyShorthand marginBlockLonghands(
    CSSPropertyID::kMarginBlock,
    marginBlockProperties,
    base::size(marginBlockProperties));
  return marginBlockLonghands;
}

const StylePropertyShorthand& marginInlineShorthand() {
  static const CSSProperty* marginInlineProperties[] = {
    &GetCSSPropertyMarginInlineStart(),
    &GetCSSPropertyMarginInlineEnd(),
  };

  static StylePropertyShorthand marginInlineLonghands(
    CSSPropertyID::kMarginInline,
    marginInlineProperties,
    base::size(marginInlineProperties));
  return marginInlineLonghands;
}

const StylePropertyShorthand& markerShorthand() {
  static const CSSProperty* markerProperties[] = {
    &GetCSSPropertyMarkerStart(),
    &GetCSSPropertyMarkerMid(),
    &GetCSSPropertyMarkerEnd(),
  };

  static StylePropertyShorthand markerLonghands(
    CSSPropertyID::kMarker,
    markerProperties,
    base::size(markerProperties));
  return markerLonghands;
}

const StylePropertyShorthand& offsetShorthand() {
  static const CSSProperty* offsetProperties[] = {
    &GetCSSPropertyOffsetPosition(),
    &GetCSSPropertyOffsetPath(),
    &GetCSSPropertyOffsetDistance(),
    &GetCSSPropertyOffsetRotate(),
    &GetCSSPropertyOffsetAnchor(),
  };

  static StylePropertyShorthand offsetLonghands(
    CSSPropertyID::kOffset,
    offsetProperties,
    base::size(offsetProperties));
  return offsetLonghands;
}

const StylePropertyShorthand& outlineShorthand() {
  static const CSSProperty* outlineProperties[] = {
    &GetCSSPropertyOutlineColor(),
    &GetCSSPropertyOutlineStyle(),
    &GetCSSPropertyOutlineWidth(),
  };

  static StylePropertyShorthand outlineLonghands(
    CSSPropertyID::kOutline,
    outlineProperties,
    base::size(outlineProperties));
  return outlineLonghands;
}

const StylePropertyShorthand& overflowShorthand() {
  static const CSSProperty* overflowProperties[] = {
    &GetCSSPropertyOverflowX(),
    &GetCSSPropertyOverflowY(),
  };

  static StylePropertyShorthand overflowLonghands(
    CSSPropertyID::kOverflow,
    overflowProperties,
    base::size(overflowProperties));
  return overflowLonghands;
}

const StylePropertyShorthand& overscrollBehaviorShorthand() {
  static const CSSProperty* overscrollBehaviorProperties[] = {
    &GetCSSPropertyOverscrollBehaviorX(),
    &GetCSSPropertyOverscrollBehaviorY(),
  };

  static StylePropertyShorthand overscrollBehaviorLonghands(
    CSSPropertyID::kOverscrollBehavior,
    overscrollBehaviorProperties,
    base::size(overscrollBehaviorProperties));
  return overscrollBehaviorLonghands;
}

const StylePropertyShorthand& paddingShorthand() {
  static const CSSProperty* paddingProperties[] = {
    &GetCSSPropertyPaddingTop(),
    &GetCSSPropertyPaddingRight(),
    &GetCSSPropertyPaddingBottom(),
    &GetCSSPropertyPaddingLeft(),
  };

  static StylePropertyShorthand paddingLonghands(
    CSSPropertyID::kPadding,
    paddingProperties,
    base::size(paddingProperties));
  return paddingLonghands;
}

const StylePropertyShorthand& paddingBlockShorthand() {
  static const CSSProperty* paddingBlockProperties[] = {
    &GetCSSPropertyPaddingBlockStart(),
    &GetCSSPropertyPaddingBlockEnd(),
  };

  static StylePropertyShorthand paddingBlockLonghands(
    CSSPropertyID::kPaddingBlock,
    paddingBlockProperties,
    base::size(paddingBlockProperties));
  return paddingBlockLonghands;
}

const StylePropertyShorthand& paddingInlineShorthand() {
  static const CSSProperty* paddingInlineProperties[] = {
    &GetCSSPropertyPaddingInlineStart(),
    &GetCSSPropertyPaddingInlineEnd(),
  };

  static StylePropertyShorthand paddingInlineLonghands(
    CSSPropertyID::kPaddingInline,
    paddingInlineProperties,
    base::size(paddingInlineProperties));
  return paddingInlineLonghands;
}

const StylePropertyShorthand& pageBreakAfterShorthand() {
  static const CSSProperty* pageBreakAfterProperties[] = {
    &GetCSSPropertyBreakAfter(),
  };

  static StylePropertyShorthand pageBreakAfterLonghands(
    CSSPropertyID::kPageBreakAfter,
    pageBreakAfterProperties,
    base::size(pageBreakAfterProperties));
  return pageBreakAfterLonghands;
}

const StylePropertyShorthand& pageBreakBeforeShorthand() {
  static const CSSProperty* pageBreakBeforeProperties[] = {
    &GetCSSPropertyBreakBefore(),
  };

  static StylePropertyShorthand pageBreakBeforeLonghands(
    CSSPropertyID::kPageBreakBefore,
    pageBreakBeforeProperties,
    base::size(pageBreakBeforeProperties));
  return pageBreakBeforeLonghands;
}

const StylePropertyShorthand& pageBreakInsideShorthand() {
  static const CSSProperty* pageBreakInsideProperties[] = {
    &GetCSSPropertyBreakInside(),
  };

  static StylePropertyShorthand pageBreakInsideLonghands(
    CSSPropertyID::kPageBreakInside,
    pageBreakInsideProperties,
    base::size(pageBreakInsideProperties));
  return pageBreakInsideLonghands;
}

const StylePropertyShorthand& placeContentShorthand() {
  static const CSSProperty* placeContentProperties[] = {
    &GetCSSPropertyAlignContent(),
    &GetCSSPropertyJustifyContent(),
  };

  static StylePropertyShorthand placeContentLonghands(
    CSSPropertyID::kPlaceContent,
    placeContentProperties,
    base::size(placeContentProperties));
  return placeContentLonghands;
}

const StylePropertyShorthand& placeItemsShorthand() {
  static const CSSProperty* placeItemsProperties[] = {
    &GetCSSPropertyAlignItems(),
    &GetCSSPropertyJustifyItems(),
  };

  static StylePropertyShorthand placeItemsLonghands(
    CSSPropertyID::kPlaceItems,
    placeItemsProperties,
    base::size(placeItemsProperties));
  return placeItemsLonghands;
}

const StylePropertyShorthand& placeSelfShorthand() {
  static const CSSProperty* placeSelfProperties[] = {
    &GetCSSPropertyAlignSelf(),
    &GetCSSPropertyJustifySelf(),
  };

  static StylePropertyShorthand placeSelfLonghands(
    CSSPropertyID::kPlaceSelf,
    placeSelfProperties,
    base::size(placeSelfProperties));
  return placeSelfLonghands;
}

const StylePropertyShorthand& scrollMarginShorthand() {
  static const CSSProperty* scrollMarginProperties[] = {
    &GetCSSPropertyScrollMarginTop(),
    &GetCSSPropertyScrollMarginRight(),
    &GetCSSPropertyScrollMarginBottom(),
    &GetCSSPropertyScrollMarginLeft(),
  };

  static StylePropertyShorthand scrollMarginLonghands(
    CSSPropertyID::kScrollMargin,
    scrollMarginProperties,
    base::size(scrollMarginProperties));
  return scrollMarginLonghands;
}

const StylePropertyShorthand& scrollMarginBlockShorthand() {
  static const CSSProperty* scrollMarginBlockProperties[] = {
    &GetCSSPropertyScrollMarginBlockStart(),
    &GetCSSPropertyScrollMarginBlockEnd(),
  };

  static StylePropertyShorthand scrollMarginBlockLonghands(
    CSSPropertyID::kScrollMarginBlock,
    scrollMarginBlockProperties,
    base::size(scrollMarginBlockProperties));
  return scrollMarginBlockLonghands;
}

const StylePropertyShorthand& scrollMarginInlineShorthand() {
  static const CSSProperty* scrollMarginInlineProperties[] = {
    &GetCSSPropertyScrollMarginInlineStart(),
    &GetCSSPropertyScrollMarginInlineEnd(),
  };

  static StylePropertyShorthand scrollMarginInlineLonghands(
    CSSPropertyID::kScrollMarginInline,
    scrollMarginInlineProperties,
    base::size(scrollMarginInlineProperties));
  return scrollMarginInlineLonghands;
}

const StylePropertyShorthand& scrollPaddingShorthand() {
  static const CSSProperty* scrollPaddingProperties[] = {
    &GetCSSPropertyScrollPaddingTop(),
    &GetCSSPropertyScrollPaddingRight(),
    &GetCSSPropertyScrollPaddingBottom(),
    &GetCSSPropertyScrollPaddingLeft(),
  };

  static StylePropertyShorthand scrollPaddingLonghands(
    CSSPropertyID::kScrollPadding,
    scrollPaddingProperties,
    base::size(scrollPaddingProperties));
  return scrollPaddingLonghands;
}

const StylePropertyShorthand& scrollPaddingBlockShorthand() {
  static const CSSProperty* scrollPaddingBlockProperties[] = {
    &GetCSSPropertyScrollPaddingBlockStart(),
    &GetCSSPropertyScrollPaddingBlockEnd(),
  };

  static StylePropertyShorthand scrollPaddingBlockLonghands(
    CSSPropertyID::kScrollPaddingBlock,
    scrollPaddingBlockProperties,
    base::size(scrollPaddingBlockProperties));
  return scrollPaddingBlockLonghands;
}

const StylePropertyShorthand& scrollPaddingInlineShorthand() {
  static const CSSProperty* scrollPaddingInlineProperties[] = {
    &GetCSSPropertyScrollPaddingInlineStart(),
    &GetCSSPropertyScrollPaddingInlineEnd(),
  };

  static StylePropertyShorthand scrollPaddingInlineLonghands(
    CSSPropertyID::kScrollPaddingInline,
    scrollPaddingInlineProperties,
    base::size(scrollPaddingInlineProperties));
  return scrollPaddingInlineLonghands;
}

const StylePropertyShorthand& textDecorationShorthand() {
  static const CSSProperty* textDecorationProperties[] = {
    &GetCSSPropertyTextDecorationLine(),
    &GetCSSPropertyTextDecorationStyle(),
    &GetCSSPropertyTextDecorationColor(),
  };

  static StylePropertyShorthand textDecorationLonghands(
    CSSPropertyID::kTextDecoration,
    textDecorationProperties,
    base::size(textDecorationProperties));
  return textDecorationLonghands;
}

const StylePropertyShorthand& transitionShorthand() {
  static const CSSProperty* transitionProperties[] = {
    &GetCSSPropertyTransitionProperty(),
    &GetCSSPropertyTransitionDuration(),
    &GetCSSPropertyTransitionTimingFunction(),
    &GetCSSPropertyTransitionDelay(),
  };

  static StylePropertyShorthand transitionLonghands(
    CSSPropertyID::kTransition,
    transitionProperties,
    base::size(transitionProperties));
  return transitionLonghands;
}

const StylePropertyShorthand& webkitColumnBreakAfterShorthand() {
  static const CSSProperty* webkitColumnBreakAfterProperties[] = {
    &GetCSSPropertyBreakAfter(),
  };

  static StylePropertyShorthand webkitColumnBreakAfterLonghands(
    CSSPropertyID::kWebkitColumnBreakAfter,
    webkitColumnBreakAfterProperties,
    base::size(webkitColumnBreakAfterProperties));
  return webkitColumnBreakAfterLonghands;
}

const StylePropertyShorthand& webkitColumnBreakBeforeShorthand() {
  static const CSSProperty* webkitColumnBreakBeforeProperties[] = {
    &GetCSSPropertyBreakBefore(),
  };

  static StylePropertyShorthand webkitColumnBreakBeforeLonghands(
    CSSPropertyID::kWebkitColumnBreakBefore,
    webkitColumnBreakBeforeProperties,
    base::size(webkitColumnBreakBeforeProperties));
  return webkitColumnBreakBeforeLonghands;
}

const StylePropertyShorthand& webkitColumnBreakInsideShorthand() {
  static const CSSProperty* webkitColumnBreakInsideProperties[] = {
    &GetCSSPropertyBreakInside(),
  };

  static StylePropertyShorthand webkitColumnBreakInsideLonghands(
    CSSPropertyID::kWebkitColumnBreakInside,
    webkitColumnBreakInsideProperties,
    base::size(webkitColumnBreakInsideProperties));
  return webkitColumnBreakInsideLonghands;
}

const StylePropertyShorthand& webkitMarginCollapseShorthand() {
  static const CSSProperty* webkitMarginCollapseProperties[] = {
    &GetCSSPropertyWebkitMarginBeforeCollapse(),
    &GetCSSPropertyWebkitMarginAfterCollapse(),
  };

  static StylePropertyShorthand webkitMarginCollapseLonghands(
    CSSPropertyID::kWebkitMarginCollapse,
    webkitMarginCollapseProperties,
    base::size(webkitMarginCollapseProperties));
  return webkitMarginCollapseLonghands;
}

const StylePropertyShorthand& webkitMaskShorthand() {
  static const CSSProperty* webkitMaskProperties[] = {
    &GetCSSPropertyWebkitMaskImage(),
    &GetCSSPropertyWebkitMaskPositionX(),
    &GetCSSPropertyWebkitMaskPositionY(),
    &GetCSSPropertyWebkitMaskSize(),
    &GetCSSPropertyWebkitMaskRepeatX(),
    &GetCSSPropertyWebkitMaskRepeatY(),
    &GetCSSPropertyWebkitMaskOrigin(),
    &GetCSSPropertyWebkitMaskClip(),
  };

  static StylePropertyShorthand webkitMaskLonghands(
    CSSPropertyID::kWebkitMask,
    webkitMaskProperties,
    base::size(webkitMaskProperties));
  return webkitMaskLonghands;
}

const StylePropertyShorthand& webkitMaskBoxImageShorthand() {
  static const CSSProperty* webkitMaskBoxImageProperties[] = {
    &GetCSSPropertyWebkitMaskBoxImageSource(),
    &GetCSSPropertyWebkitMaskBoxImageSlice(),
    &GetCSSPropertyWebkitMaskBoxImageWidth(),
    &GetCSSPropertyWebkitMaskBoxImageOutset(),
    &GetCSSPropertyWebkitMaskBoxImageRepeat(),
  };

  static StylePropertyShorthand webkitMaskBoxImageLonghands(
    CSSPropertyID::kWebkitMaskBoxImage,
    webkitMaskBoxImageProperties,
    base::size(webkitMaskBoxImageProperties));
  return webkitMaskBoxImageLonghands;
}

const StylePropertyShorthand& webkitMaskPositionShorthand() {
  static const CSSProperty* webkitMaskPositionProperties[] = {
    &GetCSSPropertyWebkitMaskPositionX(),
    &GetCSSPropertyWebkitMaskPositionY(),
  };

  static StylePropertyShorthand webkitMaskPositionLonghands(
    CSSPropertyID::kWebkitMaskPosition,
    webkitMaskPositionProperties,
    base::size(webkitMaskPositionProperties));
  return webkitMaskPositionLonghands;
}

const StylePropertyShorthand& webkitMaskRepeatShorthand() {
  static const CSSProperty* webkitMaskRepeatProperties[] = {
    &GetCSSPropertyWebkitMaskRepeatX(),
    &GetCSSPropertyWebkitMaskRepeatY(),
  };

  static StylePropertyShorthand webkitMaskRepeatLonghands(
    CSSPropertyID::kWebkitMaskRepeat,
    webkitMaskRepeatProperties,
    base::size(webkitMaskRepeatProperties));
  return webkitMaskRepeatLonghands;
}

const StylePropertyShorthand& webkitTextEmphasisShorthand() {
  static const CSSProperty* webkitTextEmphasisProperties[] = {
    &GetCSSPropertyWebkitTextEmphasisStyle(),
    &GetCSSPropertyWebkitTextEmphasisColor(),
  };

  static StylePropertyShorthand webkitTextEmphasisLonghands(
    CSSPropertyID::kWebkitTextEmphasis,
    webkitTextEmphasisProperties,
    base::size(webkitTextEmphasisProperties));
  return webkitTextEmphasisLonghands;
}

const StylePropertyShorthand& webkitTextStrokeShorthand() {
  static const CSSProperty* webkitTextStrokeProperties[] = {
    &GetCSSPropertyWebkitTextStrokeWidth(),
    &GetCSSPropertyWebkitTextStrokeColor(),
  };

  static StylePropertyShorthand webkitTextStrokeLonghands(
    CSSPropertyID::kWebkitTextStroke,
    webkitTextStrokeProperties,
    base::size(webkitTextStrokeProperties));
  return webkitTextStrokeLonghands;
}

// TODO(ericwilligers): Retire this when offset-position and offset-anchor ship
const StylePropertyShorthand& offsetShorthandWithoutPositionAnchor() {
  static const CSSProperty* offsetProperties[] = {
    &GetCSSPropertyOffsetPath(),
    &GetCSSPropertyOffsetDistance(),
    &GetCSSPropertyOffsetRotate(),
  };
  DEFINE_STATIC_LOCAL(StylePropertyShorthand, offsetLonghands, (CSSPropertyID::kOffset, offsetProperties, base::size(offsetProperties)));
  return offsetLonghands;
}

// Returns an empty list if the property is not a shorthand
const StylePropertyShorthand& shorthandForProperty(CSSPropertyID propertyID) {
  // FIXME: We shouldn't switch between shorthand/not shorthand based on a runtime flag
  static StylePropertyShorthand emptyShorthand;

  if (propertyID == CSSPropertyID::kOffset &&
      !RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled())
    return offsetShorthandWithoutPositionAnchor();
  switch (propertyID) {
    case CSSPropertyID::kAnimation:
      return animationShorthand();
    case CSSPropertyID::kBackground:
      return backgroundShorthand();
    case CSSPropertyID::kBackgroundPosition:
      return backgroundPositionShorthand();
    case CSSPropertyID::kBackgroundRepeat:
      return backgroundRepeatShorthand();
    case CSSPropertyID::kBorder:
      return borderShorthand();
    case CSSPropertyID::kBorderBlock:
      return borderBlockShorthand();
    case CSSPropertyID::kBorderBlockColor:
      return borderBlockColorShorthand();
    case CSSPropertyID::kBorderBlockEnd:
      return borderBlockEndShorthand();
    case CSSPropertyID::kBorderBlockStart:
      return borderBlockStartShorthand();
    case CSSPropertyID::kBorderBlockStyle:
      return borderBlockStyleShorthand();
    case CSSPropertyID::kBorderBlockWidth:
      return borderBlockWidthShorthand();
    case CSSPropertyID::kBorderBottom:
      return borderBottomShorthand();
    case CSSPropertyID::kBorderColor:
      return borderColorShorthand();
    case CSSPropertyID::kBorderImage:
      return borderImageShorthand();
    case CSSPropertyID::kBorderInline:
      return borderInlineShorthand();
    case CSSPropertyID::kBorderInlineColor:
      return borderInlineColorShorthand();
    case CSSPropertyID::kBorderInlineEnd:
      return borderInlineEndShorthand();
    case CSSPropertyID::kBorderInlineStart:
      return borderInlineStartShorthand();
    case CSSPropertyID::kBorderInlineStyle:
      return borderInlineStyleShorthand();
    case CSSPropertyID::kBorderInlineWidth:
      return borderInlineWidthShorthand();
    case CSSPropertyID::kBorderLeft:
      return borderLeftShorthand();
    case CSSPropertyID::kBorderRadius:
      return borderRadiusShorthand();
    case CSSPropertyID::kBorderRight:
      return borderRightShorthand();
    case CSSPropertyID::kBorderSpacing:
      return borderSpacingShorthand();
    case CSSPropertyID::kBorderStyle:
      return borderStyleShorthand();
    case CSSPropertyID::kBorderTop:
      return borderTopShorthand();
    case CSSPropertyID::kBorderWidth:
      return borderWidthShorthand();
    case CSSPropertyID::kColumnRule:
      return columnRuleShorthand();
    case CSSPropertyID::kColumns:
      return columnsShorthand();
    case CSSPropertyID::kFlex:
      return flexShorthand();
    case CSSPropertyID::kFlexFlow:
      return flexFlowShorthand();
    case CSSPropertyID::kFont:
      return fontShorthand();
    case CSSPropertyID::kFontVariant:
      return fontVariantShorthand();
    case CSSPropertyID::kGap:
      return gapShorthand();
    case CSSPropertyID::kGrid:
      return gridShorthand();
    case CSSPropertyID::kGridArea:
      return gridAreaShorthand();
    case CSSPropertyID::kGridColumn:
      return gridColumnShorthand();
    case CSSPropertyID::kGridColumnGap:
      return gridColumnGapShorthand();
    case CSSPropertyID::kGridGap:
      return gridGapShorthand();
    case CSSPropertyID::kGridRow:
      return gridRowShorthand();
    case CSSPropertyID::kGridRowGap:
      return gridRowGapShorthand();
    case CSSPropertyID::kGridTemplate:
      return gridTemplateShorthand();
    case CSSPropertyID::kInset:
      return insetShorthand();
    case CSSPropertyID::kInsetBlock:
      return insetBlockShorthand();
    case CSSPropertyID::kInsetInline:
      return insetInlineShorthand();
    case CSSPropertyID::kListStyle:
      return listStyleShorthand();
    case CSSPropertyID::kMargin:
      return marginShorthand();
    case CSSPropertyID::kMarginBlock:
      return marginBlockShorthand();
    case CSSPropertyID::kMarginInline:
      return marginInlineShorthand();
    case CSSPropertyID::kMarker:
      return markerShorthand();
    case CSSPropertyID::kOffset:
      return offsetShorthand();
    case CSSPropertyID::kOutline:
      return outlineShorthand();
    case CSSPropertyID::kOverflow:
      return overflowShorthand();
    case CSSPropertyID::kOverscrollBehavior:
      return overscrollBehaviorShorthand();
    case CSSPropertyID::kPadding:
      return paddingShorthand();
    case CSSPropertyID::kPaddingBlock:
      return paddingBlockShorthand();
    case CSSPropertyID::kPaddingInline:
      return paddingInlineShorthand();
    case CSSPropertyID::kPageBreakAfter:
      return pageBreakAfterShorthand();
    case CSSPropertyID::kPageBreakBefore:
      return pageBreakBeforeShorthand();
    case CSSPropertyID::kPageBreakInside:
      return pageBreakInsideShorthand();
    case CSSPropertyID::kPlaceContent:
      return placeContentShorthand();
    case CSSPropertyID::kPlaceItems:
      return placeItemsShorthand();
    case CSSPropertyID::kPlaceSelf:
      return placeSelfShorthand();
    case CSSPropertyID::kScrollMargin:
      return scrollMarginShorthand();
    case CSSPropertyID::kScrollMarginBlock:
      return scrollMarginBlockShorthand();
    case CSSPropertyID::kScrollMarginInline:
      return scrollMarginInlineShorthand();
    case CSSPropertyID::kScrollPadding:
      return scrollPaddingShorthand();
    case CSSPropertyID::kScrollPaddingBlock:
      return scrollPaddingBlockShorthand();
    case CSSPropertyID::kScrollPaddingInline:
      return scrollPaddingInlineShorthand();
    case CSSPropertyID::kTextDecoration:
      return textDecorationShorthand();
    case CSSPropertyID::kTransition:
      return transitionShorthand();
    case CSSPropertyID::kWebkitColumnBreakAfter:
      return webkitColumnBreakAfterShorthand();
    case CSSPropertyID::kWebkitColumnBreakBefore:
      return webkitColumnBreakBeforeShorthand();
    case CSSPropertyID::kWebkitColumnBreakInside:
      return webkitColumnBreakInsideShorthand();
    case CSSPropertyID::kWebkitMarginCollapse:
      return webkitMarginCollapseShorthand();
    case CSSPropertyID::kWebkitMask:
      return webkitMaskShorthand();
    case CSSPropertyID::kWebkitMaskBoxImage:
      return webkitMaskBoxImageShorthand();
    case CSSPropertyID::kWebkitMaskPosition:
      return webkitMaskPositionShorthand();
    case CSSPropertyID::kWebkitMaskRepeat:
      return webkitMaskRepeatShorthand();
    case CSSPropertyID::kWebkitTextEmphasis:
      return webkitTextEmphasisShorthand();
    case CSSPropertyID::kWebkitTextStroke:
      return webkitTextStrokeShorthand();
    default: {
      return emptyShorthand;
    }
  }
}

void getMatchingShorthandsForLonghand(
    CSSPropertyID propertyID, Vector<StylePropertyShorthand, 4>* result) {
  DCHECK(!result->size());
  switch (propertyID) {
    case CSSPropertyID::kTop: {
      if (CSSProperty::Get(CSSPropertyID::kInset).IsEnabled())
        result->UncheckedAppend(insetShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockStartWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockStart).IsEnabled())
        result->UncheckedAppend(borderBlockStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockWidth).IsEnabled())
        result->UncheckedAppend(borderBlockWidthShorthand());
      break;
    }
    case CSSPropertyID::kOutlineStyle: {
      if (CSSProperty::Get(CSSPropertyID::kOutline).IsEnabled())
        result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyID::kRowGap: {
      if (CSSProperty::Get(CSSPropertyID::kGap).IsEnabled())
        result->UncheckedAppend(gapShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridGap).IsEnabled())
        result->UncheckedAppend(gridGapShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridRowGap).IsEnabled())
        result->UncheckedAppend(gridRowGapShorthand());
      break;
    }
    case CSSPropertyID::kAnimationDuration: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kBorderTopStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderStyle).IsEnabled())
        result->UncheckedAppend(borderStyleShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderTop).IsEnabled())
        result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyID::kFontVariantNumeric: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      if (CSSProperty::Get(CSSPropertyID::kFontVariant).IsEnabled())
        result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundRepeatX: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBackgroundRepeat).IsEnabled())
        result->UncheckedAppend(backgroundRepeatShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundRepeatY: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBackgroundRepeat).IsEnabled())
        result->UncheckedAppend(backgroundRepeatShorthand());
      break;
    }
    case CSSPropertyID::kFontFamily: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockStartStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockStart).IsEnabled())
        result->UncheckedAppend(borderBlockStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockStyle).IsEnabled())
        result->UncheckedAppend(borderBlockStyleShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginInlineStart: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMarginInline).IsEnabled())
        result->UncheckedAppend(scrollMarginInlineShorthand());
      break;
    }
    case CSSPropertyID::kBorderLeftStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderStyle).IsEnabled())
        result->UncheckedAppend(borderStyleShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderLeft).IsEnabled())
        result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyID::kGridTemplateColumns: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridTemplate).IsEnabled())
        result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyID::kPaddingRight: {
      if (CSSProperty::Get(CSSPropertyID::kPadding).IsEnabled())
        result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMarginBeforeCollapse: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMarginCollapse).IsEnabled())
        result->UncheckedAppend(webkitMarginCollapseShorthand());
      break;
    }
    case CSSPropertyID::kMarginRight: {
      if (CSSProperty::Get(CSSPropertyID::kMargin).IsEnabled())
        result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskClip: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyID::kAnimationDirection: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kAnimationFillMode: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kWebkitBorderVerticalSpacing: {
      if (CSSProperty::Get(CSSPropertyID::kBorderSpacing).IsEnabled())
        result->UncheckedAppend(borderSpacingShorthand());
      break;
    }
    case CSSPropertyID::kColumnRuleStyle: {
      if (CSSProperty::Get(CSSPropertyID::kColumnRule).IsEnabled())
        result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyID::kGridAutoFlow: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockEndWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockEnd).IsEnabled())
        result->UncheckedAppend(borderBlockEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockWidth).IsEnabled())
        result->UncheckedAppend(borderBlockWidthShorthand());
      break;
    }
    case CSSPropertyID::kMarginBlockEnd: {
      if (CSSProperty::Get(CSSPropertyID::kMarginBlock).IsEnabled())
        result->UncheckedAppend(marginBlockShorthand());
      break;
    }
    case CSSPropertyID::kTransitionTimingFunction: {
      if (CSSProperty::Get(CSSPropertyID::kTransition).IsEnabled())
        result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyID::kAlignSelf: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceSelf).IsEnabled())
        result->UncheckedAppend(placeSelfShorthand());
      break;
    }
    case CSSPropertyID::kMarginInlineEnd: {
      if (CSSProperty::Get(CSSPropertyID::kMarginInline).IsEnabled())
        result->UncheckedAppend(marginInlineShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockEndStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockEnd).IsEnabled())
        result->UncheckedAppend(borderBlockEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockStyle).IsEnabled())
        result->UncheckedAppend(borderBlockStyleShorthand());
      break;
    }
    case CSSPropertyID::kOffsetRotate: {
      if (CSSProperty::Get(CSSPropertyID::kOffset).IsEnabled())
        result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingBlockEnd: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPaddingBlock).IsEnabled())
        result->UncheckedAppend(scrollPaddingBlockShorthand());
      break;
    }
    case CSSPropertyID::kBreakInside: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitColumnBreakInside).IsEnabled())
        result->UncheckedAppend(webkitColumnBreakInsideShorthand());
      if (CSSProperty::Get(CSSPropertyID::kPageBreakInside).IsEnabled())
        result->UncheckedAppend(pageBreakInsideShorthand());
      break;
    }
    case CSSPropertyID::kAnimationIterationCount: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kPaddingLeft: {
      if (CSSProperty::Get(CSSPropertyID::kPadding).IsEnabled())
        result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyID::kInsetInlineStart: {
      if (CSSProperty::Get(CSSPropertyID::kInsetInline).IsEnabled())
        result->UncheckedAppend(insetInlineShorthand());
      break;
    }
    case CSSPropertyID::kBreakAfter: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitColumnBreakAfter).IsEnabled())
        result->UncheckedAppend(webkitColumnBreakAfterShorthand());
      if (CSSProperty::Get(CSSPropertyID::kPageBreakAfter).IsEnabled())
        result->UncheckedAppend(pageBreakAfterShorthand());
      break;
    }
    case CSSPropertyID::kAlignContent: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceContent).IsEnabled())
        result->UncheckedAppend(placeContentShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineStartStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineStart).IsEnabled())
        result->UncheckedAppend(borderInlineStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineStyle).IsEnabled())
        result->UncheckedAppend(borderInlineStyleShorthand());
      break;
    }
    case CSSPropertyID::kWebkitTextEmphasisStyle: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitTextEmphasis).IsEnabled())
        result->UncheckedAppend(webkitTextEmphasisShorthand());
      break;
    }
    case CSSPropertyID::kBorderImageSlice: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderImage).IsEnabled())
        result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginBlockStart: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMarginBlock).IsEnabled())
        result->UncheckedAppend(scrollMarginBlockShorthand());
      break;
    }
    case CSSPropertyID::kBorderRightWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderWidth).IsEnabled())
        result->UncheckedAppend(borderWidthShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderRight).IsEnabled())
        result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyID::kAnimationDelay: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundClip: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kPaddingBottom: {
      if (CSSProperty::Get(CSSPropertyID::kPadding).IsEnabled())
        result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingInlineStart: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPaddingInline).IsEnabled())
        result->UncheckedAppend(scrollPaddingInlineShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingLeft: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPadding).IsEnabled())
        result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyID::kColumnWidth: {
      if (CSSProperty::Get(CSSPropertyID::kColumns).IsEnabled())
        result->UncheckedAppend(columnsShorthand());
      break;
    }
    case CSSPropertyID::kOutlineWidth: {
      if (CSSProperty::Get(CSSPropertyID::kOutline).IsEnabled())
        result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyID::kMarkerStart: {
      if (CSSProperty::Get(CSSPropertyID::kMarker).IsEnabled())
        result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyID::kAnimationName: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kGridColumnEnd: {
      if (CSSProperty::Get(CSSPropertyID::kGridArea).IsEnabled())
        result->UncheckedAppend(gridAreaShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridColumn).IsEnabled())
        result->UncheckedAppend(gridColumnShorthand());
      break;
    }
    case CSSPropertyID::kFontSize: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kPaddingInlineEnd: {
      if (CSSProperty::Get(CSSPropertyID::kPaddingInline).IsEnabled())
        result->UncheckedAppend(paddingInlineShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockEndColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockEnd).IsEnabled())
        result->UncheckedAppend(borderBlockEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockColor).IsEnabled())
        result->UncheckedAppend(borderBlockColorShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginTop: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMargin).IsEnabled())
        result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyID::kPaddingTop: {
      if (CSSProperty::Get(CSSPropertyID::kPadding).IsEnabled())
        result->UncheckedAppend(paddingShorthand());
      break;
    }
    case CSSPropertyID::kMarginBlockStart: {
      if (CSSProperty::Get(CSSPropertyID::kMarginBlock).IsEnabled())
        result->UncheckedAppend(marginBlockShorthand());
      break;
    }
    case CSSPropertyID::kLineHeight: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundAttachment: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskBoxImageSlice: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskBoxImage).IsEnabled())
        result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyID::kAnimationTimingFunction: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kGridColumnStart: {
      if (CSSProperty::Get(CSSPropertyID::kGridArea).IsEnabled())
        result->UncheckedAppend(gridAreaShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridColumn).IsEnabled())
        result->UncheckedAppend(gridColumnShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingBottom: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPadding).IsEnabled())
        result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskRepeatX: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskRepeat).IsEnabled())
        result->UncheckedAppend(webkitMaskRepeatShorthand());
      break;
    }
    case CSSPropertyID::kTransitionDuration: {
      if (CSSProperty::Get(CSSPropertyID::kTransition).IsEnabled())
        result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyID::kFontVariantCaps: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      if (CSSProperty::Get(CSSPropertyID::kFontVariant).IsEnabled())
        result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyID::kListStylePosition: {
      if (CSSProperty::Get(CSSPropertyID::kListStyle).IsEnabled())
        result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyID::kBorderBlockStartColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorderBlock).IsEnabled())
        result->UncheckedAppend(borderBlockShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockStart).IsEnabled())
        result->UncheckedAppend(borderBlockStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBlockColor).IsEnabled())
        result->UncheckedAppend(borderBlockColorShorthand());
      break;
    }
    case CSSPropertyID::kBorderTopWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderWidth).IsEnabled())
        result->UncheckedAppend(borderWidthShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderTop).IsEnabled())
        result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyID::kBorderLeftColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderColor).IsEnabled())
        result->UncheckedAppend(borderColorShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderLeft).IsEnabled())
        result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyID::kOverflowY: {
      if (CSSProperty::Get(CSSPropertyID::kOverflow).IsEnabled())
        result->UncheckedAppend(overflowShorthand());
      break;
    }
    case CSSPropertyID::kOverflowX: {
      if (CSSProperty::Get(CSSPropertyID::kOverflow).IsEnabled())
        result->UncheckedAppend(overflowShorthand());
      break;
    }
    case CSSPropertyID::kRight: {
      if (CSSProperty::Get(CSSPropertyID::kInset).IsEnabled())
        result->UncheckedAppend(insetShorthand());
      break;
    }
    case CSSPropertyID::kAnimationPlayState: {
      if (CSSProperty::Get(CSSPropertyID::kAnimation).IsEnabled())
        result->UncheckedAppend(animationShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundColor: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kFlexWrap: {
      if (CSSProperty::Get(CSSPropertyID::kFlexFlow).IsEnabled())
        result->UncheckedAppend(flexFlowShorthand());
      break;
    }
    case CSSPropertyID::kGridRowStart: {
      if (CSSProperty::Get(CSSPropertyID::kGridArea).IsEnabled())
        result->UncheckedAppend(gridAreaShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridRow).IsEnabled())
        result->UncheckedAppend(gridRowShorthand());
      break;
    }
    case CSSPropertyID::kGridAutoColumns: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyID::kFlexGrow: {
      if (CSSProperty::Get(CSSPropertyID::kFlex).IsEnabled())
        result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyID::kOffsetPosition: {
      if (CSSProperty::Get(CSSPropertyID::kOffset).IsEnabled())
        result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyID::kMarkerEnd: {
      if (CSSProperty::Get(CSSPropertyID::kMarker).IsEnabled())
        result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineEndWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineEnd).IsEnabled())
        result->UncheckedAppend(borderInlineEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineWidth).IsEnabled())
        result->UncheckedAppend(borderInlineWidthShorthand());
      break;
    }
    case CSSPropertyID::kMarginTop: {
      if (CSSProperty::Get(CSSPropertyID::kMargin).IsEnabled())
        result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyID::kJustifyContent: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceContent).IsEnabled())
        result->UncheckedAppend(placeContentShorthand());
      break;
    }
    case CSSPropertyID::kListStyleType: {
      if (CSSProperty::Get(CSSPropertyID::kListStyle).IsEnabled())
        result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyID::kBorderImageWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderImage).IsEnabled())
        result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingBlockStart: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPaddingBlock).IsEnabled())
        result->UncheckedAppend(scrollPaddingBlockShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskImage: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyID::kTextDecorationStyle: {
      if (CSSProperty::Get(CSSPropertyID::kTextDecoration).IsEnabled())
        result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyID::kInsetBlockEnd: {
      if (CSSProperty::Get(CSSPropertyID::kInsetBlock).IsEnabled())
        result->UncheckedAppend(insetBlockShorthand());
      break;
    }
    case CSSPropertyID::kInsetBlockStart: {
      if (CSSProperty::Get(CSSPropertyID::kInsetBlock).IsEnabled())
        result->UncheckedAppend(insetBlockShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundImage: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineStartWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineStart).IsEnabled())
        result->UncheckedAppend(borderInlineStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineWidth).IsEnabled())
        result->UncheckedAppend(borderInlineWidthShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskOrigin: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskBoxImageWidth: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskBoxImage).IsEnabled())
        result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyID::kJustifyItems: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceItems).IsEnabled())
        result->UncheckedAppend(placeItemsShorthand());
      break;
    }
    case CSSPropertyID::kBorderImageOutset: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderImage).IsEnabled())
        result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyID::kBorderBottomRightRadius: {
      if (CSSProperty::Get(CSSPropertyID::kBorderRadius).IsEnabled())
        result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyID::kFlexShrink: {
      if (CSSProperty::Get(CSSPropertyID::kFlex).IsEnabled())
        result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyID::kFontStretch: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kBorderImageRepeat: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderImage).IsEnabled())
        result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyID::kFontWeight: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kFontVariantLigatures: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      if (CSSProperty::Get(CSSPropertyID::kFontVariant).IsEnabled())
        result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyID::kWebkitTextEmphasisColor: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitTextEmphasis).IsEnabled())
        result->UncheckedAppend(webkitTextEmphasisShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingInlineEnd: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPaddingInline).IsEnabled())
        result->UncheckedAppend(scrollPaddingInlineShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskRepeatY: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskRepeat).IsEnabled())
        result->UncheckedAppend(webkitMaskRepeatShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMarginAfterCollapse: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMarginCollapse).IsEnabled())
        result->UncheckedAppend(webkitMarginCollapseShorthand());
      break;
    }
    case CSSPropertyID::kFontStyle: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginBottom: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMargin).IsEnabled())
        result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyID::kMarkerMid: {
      if (CSSProperty::Get(CSSPropertyID::kMarker).IsEnabled())
        result->UncheckedAppend(markerShorthand());
      break;
    }
    case CSSPropertyID::kAlignItems: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceItems).IsEnabled())
        result->UncheckedAppend(placeItemsShorthand());
      break;
    }
    case CSSPropertyID::kInsetInlineEnd: {
      if (CSSProperty::Get(CSSPropertyID::kInsetInline).IsEnabled())
        result->UncheckedAppend(insetInlineShorthand());
      break;
    }
    case CSSPropertyID::kBorderBottomLeftRadius: {
      if (CSSProperty::Get(CSSPropertyID::kBorderRadius).IsEnabled())
        result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginLeft: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMargin).IsEnabled())
        result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyID::kBreakBefore: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitColumnBreakBefore).IsEnabled())
        result->UncheckedAppend(webkitColumnBreakBeforeShorthand());
      if (CSSProperty::Get(CSSPropertyID::kPageBreakBefore).IsEnabled())
        result->UncheckedAppend(pageBreakBeforeShorthand());
      break;
    }
    case CSSPropertyID::kBorderImageSource: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderImage).IsEnabled())
        result->UncheckedAppend(borderImageShorthand());
      break;
    }
    case CSSPropertyID::kBorderRightStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderStyle).IsEnabled())
        result->UncheckedAppend(borderStyleShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderRight).IsEnabled())
        result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyID::kLeft: {
      if (CSSProperty::Get(CSSPropertyID::kInset).IsEnabled())
        result->UncheckedAppend(insetShorthand());
      break;
    }
    case CSSPropertyID::kFontVariantEastAsian: {
      if (CSSProperty::Get(CSSPropertyID::kFont).IsEnabled())
        result->UncheckedAppend(fontShorthand());
      if (CSSProperty::Get(CSSPropertyID::kFontVariant).IsEnabled())
        result->UncheckedAppend(fontVariantShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundPositionX: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBackgroundPosition).IsEnabled())
        result->UncheckedAppend(backgroundPositionShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundPositionY: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBackgroundPosition).IsEnabled())
        result->UncheckedAppend(backgroundPositionShorthand());
      break;
    }
    case CSSPropertyID::kOffsetPath: {
      if (CSSProperty::Get(CSSPropertyID::kOffset).IsEnabled())
        result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyID::kTransitionDelay: {
      if (CSSProperty::Get(CSSPropertyID::kTransition).IsEnabled())
        result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyID::kColumnRuleWidth: {
      if (CSSProperty::Get(CSSPropertyID::kColumnRule).IsEnabled())
        result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyID::kOffsetAnchor: {
      if (CSSProperty::Get(CSSPropertyID::kOffset).IsEnabled())
        result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskBoxImageOutset: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskBoxImage).IsEnabled())
        result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyID::kGridAutoRows: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      break;
    }
    case CSSPropertyID::kTextDecorationLine: {
      if (CSSProperty::Get(CSSPropertyID::kTextDecoration).IsEnabled())
        result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyID::kTransitionProperty: {
      if (CSSProperty::Get(CSSPropertyID::kTransition).IsEnabled())
        result->UncheckedAppend(transitionShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingTop: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPadding).IsEnabled())
        result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskSize: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      break;
    }
    case CSSPropertyID::kGridRowEnd: {
      if (CSSProperty::Get(CSSPropertyID::kGridArea).IsEnabled())
        result->UncheckedAppend(gridAreaShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridRow).IsEnabled())
        result->UncheckedAppend(gridRowShorthand());
      break;
    }
    case CSSPropertyID::kPaddingInlineStart: {
      if (CSSProperty::Get(CSSPropertyID::kPaddingInline).IsEnabled())
        result->UncheckedAppend(paddingInlineShorthand());
      break;
    }
    case CSSPropertyID::kGridTemplateAreas: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridTemplate).IsEnabled())
        result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyID::kBorderBottomStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderStyle).IsEnabled())
        result->UncheckedAppend(borderStyleShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBottom).IsEnabled())
        result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyID::kPaddingBlockEnd: {
      if (CSSProperty::Get(CSSPropertyID::kPaddingBlock).IsEnabled())
        result->UncheckedAppend(paddingBlockShorthand());
      break;
    }
    case CSSPropertyID::kFlexBasis: {
      if (CSSProperty::Get(CSSPropertyID::kFlex).IsEnabled())
        result->UncheckedAppend(flexShorthand());
      break;
    }
    case CSSPropertyID::kBorderTopRightRadius: {
      if (CSSProperty::Get(CSSPropertyID::kBorderRadius).IsEnabled())
        result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineStartColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineStart).IsEnabled())
        result->UncheckedAppend(borderInlineStartShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineColor).IsEnabled())
        result->UncheckedAppend(borderInlineColorShorthand());
      break;
    }
    case CSSPropertyID::kBorderLeftWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderWidth).IsEnabled())
        result->UncheckedAppend(borderWidthShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderLeft).IsEnabled())
        result->UncheckedAppend(borderLeftShorthand());
      break;
    }
    case CSSPropertyID::kBorderRightColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderColor).IsEnabled())
        result->UncheckedAppend(borderColorShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderRight).IsEnabled())
        result->UncheckedAppend(borderRightShorthand());
      break;
    }
    case CSSPropertyID::kTextDecorationColor: {
      if (CSSProperty::Get(CSSPropertyID::kTextDecoration).IsEnabled())
        result->UncheckedAppend(textDecorationShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundOrigin: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kOverscrollBehaviorY: {
      if (CSSProperty::Get(CSSPropertyID::kOverscrollBehavior).IsEnabled())
        result->UncheckedAppend(overscrollBehaviorShorthand());
      break;
    }
    case CSSPropertyID::kColumnCount: {
      if (CSSProperty::Get(CSSPropertyID::kColumns).IsEnabled())
        result->UncheckedAppend(columnsShorthand());
      break;
    }
    case CSSPropertyID::kGridTemplateRows: {
      if (CSSProperty::Get(CSSPropertyID::kGrid).IsEnabled())
        result->UncheckedAppend(gridShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridTemplate).IsEnabled())
        result->UncheckedAppend(gridTemplateShorthand());
      break;
    }
    case CSSPropertyID::kPaddingBlockStart: {
      if (CSSProperty::Get(CSSPropertyID::kPaddingBlock).IsEnabled())
        result->UncheckedAppend(paddingBlockShorthand());
      break;
    }
    case CSSPropertyID::kOffsetDistance: {
      if (CSSProperty::Get(CSSPropertyID::kOffset).IsEnabled())
        result->UncheckedAppend(offsetShorthand());
      break;
    }
    case CSSPropertyID::kBorderBottomColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderColor).IsEnabled())
        result->UncheckedAppend(borderColorShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBottom).IsEnabled())
        result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyID::kListStyleImage: {
      if (CSSProperty::Get(CSSPropertyID::kListStyle).IsEnabled())
        result->UncheckedAppend(listStyleShorthand());
      break;
    }
    case CSSPropertyID::kBackgroundSize: {
      if (CSSProperty::Get(CSSPropertyID::kBackground).IsEnabled())
        result->UncheckedAppend(backgroundShorthand());
      break;
    }
    case CSSPropertyID::kOutlineColor: {
      if (CSSProperty::Get(CSSPropertyID::kOutline).IsEnabled())
        result->UncheckedAppend(outlineShorthand());
      break;
    }
    case CSSPropertyID::kFlexDirection: {
      if (CSSProperty::Get(CSSPropertyID::kFlexFlow).IsEnabled())
        result->UncheckedAppend(flexFlowShorthand());
      break;
    }
    case CSSPropertyID::kMarginLeft: {
      if (CSSProperty::Get(CSSPropertyID::kMargin).IsEnabled())
        result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyID::kMarginBottom: {
      if (CSSProperty::Get(CSSPropertyID::kMargin).IsEnabled())
        result->UncheckedAppend(marginShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginRight: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMargin).IsEnabled())
        result->UncheckedAppend(scrollMarginShorthand());
      break;
    }
    case CSSPropertyID::kColumnGap: {
      if (CSSProperty::Get(CSSPropertyID::kGap).IsEnabled())
        result->UncheckedAppend(gapShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridGap).IsEnabled())
        result->UncheckedAppend(gridGapShorthand());
      if (CSSProperty::Get(CSSPropertyID::kGridColumnGap).IsEnabled())
        result->UncheckedAppend(gridColumnGapShorthand());
      break;
    }
    case CSSPropertyID::kOverscrollBehaviorX: {
      if (CSSProperty::Get(CSSPropertyID::kOverscrollBehavior).IsEnabled())
        result->UncheckedAppend(overscrollBehaviorShorthand());
      break;
    }
    case CSSPropertyID::kJustifySelf: {
      if (CSSProperty::Get(CSSPropertyID::kPlaceSelf).IsEnabled())
        result->UncheckedAppend(placeSelfShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineEndStyle: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineEnd).IsEnabled())
        result->UncheckedAppend(borderInlineEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineStyle).IsEnabled())
        result->UncheckedAppend(borderInlineStyleShorthand());
      break;
    }
    case CSSPropertyID::kColumnRuleColor: {
      if (CSSProperty::Get(CSSPropertyID::kColumnRule).IsEnabled())
        result->UncheckedAppend(columnRuleShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginBlockEnd: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMarginBlock).IsEnabled())
        result->UncheckedAppend(scrollMarginBlockShorthand());
      break;
    }
    case CSSPropertyID::kScrollMarginInlineEnd: {
      if (CSSProperty::Get(CSSPropertyID::kScrollMarginInline).IsEnabled())
        result->UncheckedAppend(scrollMarginInlineShorthand());
      break;
    }
    case CSSPropertyID::kMarginInlineStart: {
      if (CSSProperty::Get(CSSPropertyID::kMarginInline).IsEnabled())
        result->UncheckedAppend(marginInlineShorthand());
      break;
    }
    case CSSPropertyID::kBorderBottomWidth: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderWidth).IsEnabled())
        result->UncheckedAppend(borderWidthShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderBottom).IsEnabled())
        result->UncheckedAppend(borderBottomShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskBoxImageRepeat: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskBoxImage).IsEnabled())
        result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyID::kWebkitTextStrokeColor: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitTextStroke).IsEnabled())
        result->UncheckedAppend(webkitTextStrokeShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskPositionX: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskPosition).IsEnabled())
        result->UncheckedAppend(webkitMaskPositionShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskPositionY: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMask).IsEnabled())
        result->UncheckedAppend(webkitMaskShorthand());
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskPosition).IsEnabled())
        result->UncheckedAppend(webkitMaskPositionShorthand());
      break;
    }
    case CSSPropertyID::kWebkitMaskBoxImageSource: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitMaskBoxImage).IsEnabled())
        result->UncheckedAppend(webkitMaskBoxImageShorthand());
      break;
    }
    case CSSPropertyID::kScrollPaddingRight: {
      if (CSSProperty::Get(CSSPropertyID::kScrollPadding).IsEnabled())
        result->UncheckedAppend(scrollPaddingShorthand());
      break;
    }
    case CSSPropertyID::kBorderTopColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorder).IsEnabled())
        result->UncheckedAppend(borderShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderColor).IsEnabled())
        result->UncheckedAppend(borderColorShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderTop).IsEnabled())
        result->UncheckedAppend(borderTopShorthand());
      break;
    }
    case CSSPropertyID::kBorderTopLeftRadius: {
      if (CSSProperty::Get(CSSPropertyID::kBorderRadius).IsEnabled())
        result->UncheckedAppend(borderRadiusShorthand());
      break;
    }
    case CSSPropertyID::kWebkitBorderHorizontalSpacing: {
      if (CSSProperty::Get(CSSPropertyID::kBorderSpacing).IsEnabled())
        result->UncheckedAppend(borderSpacingShorthand());
      break;
    }
    case CSSPropertyID::kBottom: {
      if (CSSProperty::Get(CSSPropertyID::kInset).IsEnabled())
        result->UncheckedAppend(insetShorthand());
      break;
    }
    case CSSPropertyID::kWebkitTextStrokeWidth: {
      if (CSSProperty::Get(CSSPropertyID::kWebkitTextStroke).IsEnabled())
        result->UncheckedAppend(webkitTextStrokeShorthand());
      break;
    }
    case CSSPropertyID::kBorderInlineEndColor: {
      if (CSSProperty::Get(CSSPropertyID::kBorderInline).IsEnabled())
        result->UncheckedAppend(borderInlineShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineEnd).IsEnabled())
        result->UncheckedAppend(borderInlineEndShorthand());
      if (CSSProperty::Get(CSSPropertyID::kBorderInlineColor).IsEnabled())
        result->UncheckedAppend(borderInlineColorShorthand());
      break;
    }
    default:
      break;
  }
}

} // namespace blink
