// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/templates/cssom_types.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5


#include "third_party/blink/renderer/core/css/cssom/cssom_types.h"

#include "third_party/blink/renderer/core/css/css_property_name.h"
#include "third_party/blink/renderer/core/css/cssom/css_keyword_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_numeric_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_style_value.h"
#include "third_party/blink/renderer/core/css/cssom/css_unsupported_style_value.h"
#include "third_party/blink/renderer/core/css/cssom/cssom_keywords.h"
#include "third_party/blink/renderer/core/css/properties/css_property.h"
#include "third_party/blink/renderer/core/css/property_registration.h"

namespace blink {

bool CSSOMTypes::IsCSSStyleValueLength(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kLength);
}

bool CSSOMTypes::IsCSSStyleValueNumber(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesNumber();
}

bool CSSOMTypes::IsCSSStyleValueTime(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kTime);
}

bool CSSOMTypes::IsCSSStyleValueAngle(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kAngle);
}

bool CSSOMTypes::IsCSSStyleValuePercentage(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesPercentage();
}

bool CSSOMTypes::IsCSSStyleValueResolution(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kResolution);
}

bool CSSOMTypes::IsCSSStyleValueFlex(const CSSStyleValue& value) {
  if (!value.IsNumericValue())
    return false;
  return static_cast<const CSSNumericValue&>(value).Type().
    MatchesBaseType(CSSNumericValueType::BaseType::kFlex);
}

bool CSSOMTypes::IsCSSStyleValueImage(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kURLImageType;
}

bool CSSOMTypes::IsCSSStyleValueTransform(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kTransformType;
}

bool CSSOMTypes::IsCSSStyleValuePosition(const CSSStyleValue& value) {
  return value.GetType() == CSSStyleValue::kPositionType;
}

bool CSSOMTypes::IsPropertySupported(CSSPropertyID id) {
  switch (id) {
    case CSSPropertyID::kVariable:
    case CSSPropertyID::kAnimationDelay:
    case CSSPropertyID::kAnimationDirection:
    case CSSPropertyID::kAnimationDuration:
    case CSSPropertyID::kAnimationFillMode:
    case CSSPropertyID::kAnimationIterationCount:
    case CSSPropertyID::kAnimationName:
    case CSSPropertyID::kAnimationPlayState:
    case CSSPropertyID::kAnimationTimingFunction:
    case CSSPropertyID::kTransitionDelay:
    case CSSPropertyID::kTransitionDuration:
    case CSSPropertyID::kTransitionProperty:
    case CSSPropertyID::kTransitionTimingFunction:
    case CSSPropertyID::kColor:
    case CSSPropertyID::kDirection:
    case CSSPropertyID::kFontFeatureSettings:
    case CSSPropertyID::kFontKerning:
    case CSSPropertyID::kFontSize:
    case CSSPropertyID::kFontSizeAdjust:
    case CSSPropertyID::kFontStretch:
    case CSSPropertyID::kFontStyle:
    case CSSPropertyID::kFontVariantCaps:
    case CSSPropertyID::kFontVariantEastAsian:
    case CSSPropertyID::kFontVariantLigatures:
    case CSSPropertyID::kFontVariantNumeric:
    case CSSPropertyID::kFontVariationSettings:
    case CSSPropertyID::kFontWeight:
    case CSSPropertyID::kTextOrientation:
    case CSSPropertyID::kTextRendering:
    case CSSPropertyID::kWritingMode:
    case CSSPropertyID::kAlignmentBaseline:
    case CSSPropertyID::kBackdropFilter:
    case CSSPropertyID::kBackfaceVisibility:
    case CSSPropertyID::kBackgroundAttachment:
    case CSSPropertyID::kBackgroundBlendMode:
    case CSSPropertyID::kBackgroundClip:
    case CSSPropertyID::kBackgroundColor:
    case CSSPropertyID::kBackgroundImage:
    case CSSPropertyID::kBackgroundOrigin:
    case CSSPropertyID::kBackgroundSize:
    case CSSPropertyID::kBaselineShift:
    case CSSPropertyID::kBlockSize:
    case CSSPropertyID::kBorderBottomColor:
    case CSSPropertyID::kBorderBottomLeftRadius:
    case CSSPropertyID::kBorderBottomRightRadius:
    case CSSPropertyID::kBorderBottomStyle:
    case CSSPropertyID::kBorderBottomWidth:
    case CSSPropertyID::kBorderCollapse:
    case CSSPropertyID::kBorderImageOutset:
    case CSSPropertyID::kBorderImageRepeat:
    case CSSPropertyID::kBorderImageSlice:
    case CSSPropertyID::kBorderImageSource:
    case CSSPropertyID::kBorderImageWidth:
    case CSSPropertyID::kBorderLeftColor:
    case CSSPropertyID::kBorderLeftStyle:
    case CSSPropertyID::kBorderLeftWidth:
    case CSSPropertyID::kBorderRightColor:
    case CSSPropertyID::kBorderRightStyle:
    case CSSPropertyID::kBorderRightWidth:
    case CSSPropertyID::kBorderTopColor:
    case CSSPropertyID::kBorderTopLeftRadius:
    case CSSPropertyID::kBorderTopRightRadius:
    case CSSPropertyID::kBorderTopStyle:
    case CSSPropertyID::kBorderTopWidth:
    case CSSPropertyID::kBottom:
    case CSSPropertyID::kBoxShadow:
    case CSSPropertyID::kBoxSizing:
    case CSSPropertyID::kBreakAfter:
    case CSSPropertyID::kBreakBefore:
    case CSSPropertyID::kBreakInside:
    case CSSPropertyID::kCaptionSide:
    case CSSPropertyID::kCaretColor:
    case CSSPropertyID::kClear:
    case CSSPropertyID::kClip:
    case CSSPropertyID::kClipPath:
    case CSSPropertyID::kClipRule:
    case CSSPropertyID::kColorInterpolation:
    case CSSPropertyID::kColorRendering:
    case CSSPropertyID::kColumnCount:
    case CSSPropertyID::kColumnFill:
    case CSSPropertyID::kColumnGap:
    case CSSPropertyID::kColumnRuleColor:
    case CSSPropertyID::kColumnRuleStyle:
    case CSSPropertyID::kColumnRuleWidth:
    case CSSPropertyID::kColumnSpan:
    case CSSPropertyID::kColumnWidth:
    case CSSPropertyID::kContain:
    case CSSPropertyID::kCounterIncrement:
    case CSSPropertyID::kCounterReset:
    case CSSPropertyID::kCursor:
    case CSSPropertyID::kCx:
    case CSSPropertyID::kCy:
    case CSSPropertyID::kD:
    case CSSPropertyID::kDisplay:
    case CSSPropertyID::kDominantBaseline:
    case CSSPropertyID::kEmptyCells:
    case CSSPropertyID::kFillOpacity:
    case CSSPropertyID::kFillRule:
    case CSSPropertyID::kFilter:
    case CSSPropertyID::kFlexBasis:
    case CSSPropertyID::kFlexDirection:
    case CSSPropertyID::kFlexGrow:
    case CSSPropertyID::kFlexShrink:
    case CSSPropertyID::kFlexWrap:
    case CSSPropertyID::kFloat:
    case CSSPropertyID::kFloodColor:
    case CSSPropertyID::kFloodOpacity:
    case CSSPropertyID::kGridAutoColumns:
    case CSSPropertyID::kGridAutoFlow:
    case CSSPropertyID::kGridAutoRows:
    case CSSPropertyID::kGridColumnEnd:
    case CSSPropertyID::kGridColumnStart:
    case CSSPropertyID::kGridRowEnd:
    case CSSPropertyID::kGridRowStart:
    case CSSPropertyID::kGridTemplateAreas:
    case CSSPropertyID::kGridTemplateColumns:
    case CSSPropertyID::kGridTemplateRows:
    case CSSPropertyID::kHeight:
    case CSSPropertyID::kHyphens:
    case CSSPropertyID::kImageRendering:
    case CSSPropertyID::kInlineSize:
    case CSSPropertyID::kIsolation:
    case CSSPropertyID::kLeft:
    case CSSPropertyID::kLetterSpacing:
    case CSSPropertyID::kLightingColor:
    case CSSPropertyID::kLineBreak:
    case CSSPropertyID::kLineHeight:
    case CSSPropertyID::kLineHeightStep:
    case CSSPropertyID::kListStyleImage:
    case CSSPropertyID::kListStylePosition:
    case CSSPropertyID::kMarginBottom:
    case CSSPropertyID::kMarginLeft:
    case CSSPropertyID::kMarginRight:
    case CSSPropertyID::kMarginTop:
    case CSSPropertyID::kMarkerEnd:
    case CSSPropertyID::kMarkerMid:
    case CSSPropertyID::kMarkerStart:
    case CSSPropertyID::kMaskType:
    case CSSPropertyID::kMaxBlockSize:
    case CSSPropertyID::kMaxHeight:
    case CSSPropertyID::kMaxInlineSize:
    case CSSPropertyID::kMaxWidth:
    case CSSPropertyID::kMinBlockSize:
    case CSSPropertyID::kMinHeight:
    case CSSPropertyID::kMinInlineSize:
    case CSSPropertyID::kMinWidth:
    case CSSPropertyID::kMixBlendMode:
    case CSSPropertyID::kObjectFit:
    case CSSPropertyID::kObjectPosition:
    case CSSPropertyID::kOffsetAnchor:
    case CSSPropertyID::kOffsetDistance:
    case CSSPropertyID::kOffsetPath:
    case CSSPropertyID::kOffsetPosition:
    case CSSPropertyID::kOffsetRotate:
    case CSSPropertyID::kOpacity:
    case CSSPropertyID::kOrder:
    case CSSPropertyID::kOrphans:
    case CSSPropertyID::kOutlineColor:
    case CSSPropertyID::kOutlineOffset:
    case CSSPropertyID::kOutlineStyle:
    case CSSPropertyID::kOutlineWidth:
    case CSSPropertyID::kOverflowAnchor:
    case CSSPropertyID::kOverflowWrap:
    case CSSPropertyID::kOverflowX:
    case CSSPropertyID::kOverflowY:
    case CSSPropertyID::kOverscrollBehaviorX:
    case CSSPropertyID::kOverscrollBehaviorY:
    case CSSPropertyID::kPaddingBottom:
    case CSSPropertyID::kPaddingLeft:
    case CSSPropertyID::kPaddingRight:
    case CSSPropertyID::kPaddingTop:
    case CSSPropertyID::kPaintOrder:
    case CSSPropertyID::kPerspective:
    case CSSPropertyID::kPerspectiveOrigin:
    case CSSPropertyID::kPointerEvents:
    case CSSPropertyID::kPosition:
    case CSSPropertyID::kQuotes:
    case CSSPropertyID::kR:
    case CSSPropertyID::kResize:
    case CSSPropertyID::kRight:
    case CSSPropertyID::kRowGap:
    case CSSPropertyID::kRx:
    case CSSPropertyID::kRy:
    case CSSPropertyID::kScrollBehavior:
    case CSSPropertyID::kScrollMarginBlockEnd:
    case CSSPropertyID::kScrollMarginBlockStart:
    case CSSPropertyID::kScrollMarginBottom:
    case CSSPropertyID::kScrollMarginInlineEnd:
    case CSSPropertyID::kScrollMarginInlineStart:
    case CSSPropertyID::kScrollMarginLeft:
    case CSSPropertyID::kScrollMarginRight:
    case CSSPropertyID::kScrollMarginTop:
    case CSSPropertyID::kScrollPaddingBlockEnd:
    case CSSPropertyID::kScrollPaddingBlockStart:
    case CSSPropertyID::kScrollPaddingBottom:
    case CSSPropertyID::kScrollPaddingInlineEnd:
    case CSSPropertyID::kScrollPaddingInlineStart:
    case CSSPropertyID::kScrollPaddingLeft:
    case CSSPropertyID::kScrollPaddingRight:
    case CSSPropertyID::kScrollPaddingTop:
    case CSSPropertyID::kScrollSnapAlign:
    case CSSPropertyID::kScrollSnapStop:
    case CSSPropertyID::kScrollSnapType:
    case CSSPropertyID::kShapeImageThreshold:
    case CSSPropertyID::kShapeMargin:
    case CSSPropertyID::kShapeOutside:
    case CSSPropertyID::kShapeRendering:
    case CSSPropertyID::kStopColor:
    case CSSPropertyID::kStopOpacity:
    case CSSPropertyID::kStrokeDasharray:
    case CSSPropertyID::kStrokeDashoffset:
    case CSSPropertyID::kStrokeLinecap:
    case CSSPropertyID::kStrokeLinejoin:
    case CSSPropertyID::kStrokeMiterlimit:
    case CSSPropertyID::kStrokeOpacity:
    case CSSPropertyID::kStrokeWidth:
    case CSSPropertyID::kTabSize:
    case CSSPropertyID::kTableLayout:
    case CSSPropertyID::kTextAlign:
    case CSSPropertyID::kTextAlignLast:
    case CSSPropertyID::kTextAnchor:
    case CSSPropertyID::kTextCombineUpright:
    case CSSPropertyID::kTextDecorationColor:
    case CSSPropertyID::kTextDecorationLine:
    case CSSPropertyID::kTextDecorationSkipInk:
    case CSSPropertyID::kTextDecorationStyle:
    case CSSPropertyID::kTextIndent:
    case CSSPropertyID::kTextJustify:
    case CSSPropertyID::kTextOverflow:
    case CSSPropertyID::kTextShadow:
    case CSSPropertyID::kTextSizeAdjust:
    case CSSPropertyID::kTextTransform:
    case CSSPropertyID::kTextUnderlinePosition:
    case CSSPropertyID::kTop:
    case CSSPropertyID::kTouchAction:
    case CSSPropertyID::kTransform:
    case CSSPropertyID::kTransformBox:
    case CSSPropertyID::kTransformStyle:
    case CSSPropertyID::kUnicodeBidi:
    case CSSPropertyID::kUserSelect:
    case CSSPropertyID::kVectorEffect:
    case CSSPropertyID::kVerticalAlign:
    case CSSPropertyID::kVisibility:
    case CSSPropertyID::kWhiteSpace:
    case CSSPropertyID::kWidows:
    case CSSPropertyID::kWidth:
    case CSSPropertyID::kWillChange:
    case CSSPropertyID::kWordBreak:
    case CSSPropertyID::kWordSpacing:
    case CSSPropertyID::kX:
    case CSSPropertyID::kY:
    case CSSPropertyID::kZIndex:
      return true;
    default:
      return false;
  }
}

bool CSSOMTypes::PropertyCanTake(CSSPropertyID id,
                                 const AtomicString& custom_property_name,
                                 const PropertyRegistration* registration,
                                 const CSSStyleValue& value,
                                 const CSSSyntaxComponent*& match) {
  DCHECK_EQ(id == CSSPropertyID::kVariable, !custom_property_name.IsNull());

  if (id == CSSPropertyID::kVariable && registration) {
    if (auto* unsupported_style_value =
            DynamicTo<CSSUnsupportedStyleValue>(value)) {
      return unsupported_style_value->IsValidFor(
          CSSPropertyName(custom_property_name));
    }
    match = registration->Syntax().Match(value);
    return match != nullptr;
  }

  if (auto* css_keyword_value = DynamicTo<CSSKeywordValue>(value)) {
    return CSSOMKeywords::ValidKeywordForProperty(id, *css_keyword_value);
  }
  if (auto* unsupported_style_value =
          DynamicTo<CSSUnsupportedStyleValue>(value)) {
    return unsupported_style_value->IsValidFor(CSSPropertyName(id));
  }
  if (value.GetType() == CSSStyleValue::kUnparsedType) {
    return true;
  }

  switch (id) {
    case CSSPropertyID::kVariable:
      return value.GetType() == CSSStyleValue::kUnparsedType;
    case CSSPropertyID::kAnimationDelay:
      return (
          CSSOMTypes::IsCSSStyleValueTime(value)
      );
    case CSSPropertyID::kAnimationDuration:
      return (
          CSSOMTypes::IsCSSStyleValueTime(value)
      );
    case CSSPropertyID::kAnimationIterationCount:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kTransitionDelay:
      return (
          CSSOMTypes::IsCSSStyleValueTime(value)
      );
    case CSSPropertyID::kTransitionDuration:
      return (
          CSSOMTypes::IsCSSStyleValueTime(value)
      );
    case CSSPropertyID::kFontSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kFontSizeAdjust:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kFontStretch:
      return (
          CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kFontWeight:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kBackgroundImage:
      return (
          CSSOMTypes::IsCSSStyleValueImage(value)
      );
    case CSSPropertyID::kBackgroundSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBaselineShift:
      return (
          CSSOMTypes::IsCSSStyleValuePercentage(value)
          || CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kBlockSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderBottomLeftRadius:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderBottomRightRadius:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderBottomWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kBorderImageOutset:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kBorderImageSlice:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderImageSource:
      return (
          CSSOMTypes::IsCSSStyleValueImage(value)
      );
    case CSSPropertyID::kBorderImageWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
          || CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kBorderLeftWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kBorderRightWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kBorderTopLeftRadius:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderTopRightRadius:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kBorderTopWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kBottom:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kColumnCount:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kColumnGap:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kColumnRuleWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kColumnWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kCx:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kCy:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kFillOpacity:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kFlexBasis:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kFlexGrow:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kFlexShrink:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kFloodOpacity:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kGridAutoColumns:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
          || CSSOMTypes::IsCSSStyleValueFlex(value)
      );
    case CSSPropertyID::kGridAutoRows:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
          || CSSOMTypes::IsCSSStyleValueFlex(value)
      );
    case CSSPropertyID::kHeight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kInlineSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kLeft:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kLetterSpacing:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kLineHeight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValueNumber(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kLineHeightStep:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kListStyleImage:
      return (
          CSSOMTypes::IsCSSStyleValueImage(value)
      );
    case CSSPropertyID::kMarginBottom:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMarginLeft:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMarginRight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMarginTop:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMaxBlockSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMaxHeight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMaxInlineSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMaxWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMinBlockSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMinHeight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMinInlineSize:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kMinWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kObjectPosition:
      return (
          CSSOMTypes::IsCSSStyleValuePosition(value)
      );
    case CSSPropertyID::kOffsetAnchor:
      return (
          CSSOMTypes::IsCSSStyleValuePosition(value)
      );
    case CSSPropertyID::kOffsetDistance:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kOffsetPosition:
      return (
          CSSOMTypes::IsCSSStyleValuePosition(value)
      );
    case CSSPropertyID::kOffsetRotate:
      return (
          CSSOMTypes::IsCSSStyleValueAngle(value)
      );
    case CSSPropertyID::kOpacity:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kOrder:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kOrphans:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kOutlineOffset:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kOutlineWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kPaddingBottom:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kPaddingLeft:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kPaddingRight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kPaddingTop:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kPerspective:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kPerspectiveOrigin:
      return (
          CSSOMTypes::IsCSSStyleValuePosition(value)
      );
    case CSSPropertyID::kR:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kRight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kRowGap:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kRx:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kRy:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollMarginBlockEnd:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginBlockStart:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginBottom:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginInlineEnd:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginInlineStart:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginLeft:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginRight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollMarginTop:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kScrollPaddingBlockEnd:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingBlockStart:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingBottom:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingInlineEnd:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingInlineStart:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingLeft:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingRight:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kScrollPaddingTop:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kShapeImageThreshold:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kShapeMargin:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kShapeOutside:
      return (
          CSSOMTypes::IsCSSStyleValueImage(value)
      );
    case CSSPropertyID::kStopOpacity:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kStrokeDashoffset:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kStrokeMiterlimit:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kStrokeOpacity:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kStrokeWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kTabSize:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
          || CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kTextIndent:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kTextSizeAdjust:
      return (
          CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kTop:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kTransform:
      return (
          CSSOMTypes::IsCSSStyleValueTransform(value)
      );
    case CSSPropertyID::kVerticalAlign:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kWidows:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    case CSSPropertyID::kWidth:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kWordSpacing:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
      );
    case CSSPropertyID::kX:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kY:
      return (
          CSSOMTypes::IsCSSStyleValueLength(value)
          || CSSOMTypes::IsCSSStyleValuePercentage(value)
      );
    case CSSPropertyID::kZIndex:
      return (
          CSSOMTypes::IsCSSStyleValueNumber(value)
      );
    default:
      return false;
  }
}

}  // namespace blink
