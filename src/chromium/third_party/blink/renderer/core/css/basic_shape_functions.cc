/*
 * Copyright (C) 2012 Adobe Systems Incorporated. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include "third_party/blink/renderer/core/css/basic_shape_functions.h"

#include "third_party/blink/renderer/core/css/css_basic_shape_values.h"
#include "third_party/blink/renderer/core/css/css_identifier_value.h"
#include "third_party/blink/renderer/core/css/css_primitive_value_mappings.h"
#include "third_party/blink/renderer/core/css/css_ray_value.h"
#include "third_party/blink/renderer/core/css/css_value_pair.h"
#include "third_party/blink/renderer/core/css/resolver/style_resolver_state.h"
#include "third_party/blink/renderer/core/style/basic_shapes.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/core/style/style_ray.h"

namespace blink {

static StyleRay::RaySize KeywordToRaySize(CSSValueID id) {
  switch (id) {
    case CSSValueID::kClosestSide:
      return StyleRay::RaySize::kClosestSide;
    case CSSValueID::kClosestCorner:
      return StyleRay::RaySize::kClosestCorner;
    case CSSValueID::kFarthestSide:
      return StyleRay::RaySize::kFarthestSide;
    case CSSValueID::kFarthestCorner:
      return StyleRay::RaySize::kFarthestCorner;
    case CSSValueID::kSides:
      return StyleRay::RaySize::kSides;
    default:
      NOTREACHED();
      return StyleRay::RaySize::kClosestSide;
  }
}

static CSSValueID RaySizeToKeyword(StyleRay::RaySize size) {
  switch (size) {
    case StyleRay::RaySize::kClosestSide:
      return CSSValueID::kClosestSide;
    case StyleRay::RaySize::kClosestCorner:
      return CSSValueID::kClosestCorner;
    case StyleRay::RaySize::kFarthestSide:
      return CSSValueID::kFarthestSide;
    case StyleRay::RaySize::kFarthestCorner:
      return CSSValueID::kFarthestCorner;
    case StyleRay::RaySize::kSides:
      return CSSValueID::kSides;
  }
  NOTREACHED();
  return CSSValueID::kInvalid;
}

static CSSValue* ValueForCenterCoordinate(
    const ComputedStyle& style,
    const BasicShapeCenterCoordinate& center,
    EBoxOrient orientation) {
  if (center.GetDirection() == BasicShapeCenterCoordinate::kTopLeft)
    return CSSValue::Create(center.length(), style.EffectiveZoom());

  CSSValueID keyword = orientation == EBoxOrient::kHorizontal
                           ? CSSValueID::kRight
                           : CSSValueID::kBottom;

  return MakeGarbageCollected<CSSValuePair>(
      CSSIdentifierValue::Create(keyword),
      CSSValue::Create(center.length(), style.EffectiveZoom()),
      CSSValuePair::kDropIdenticalValues);
}

static CSSValuePair* ValueForLengthSize(const LengthSize& length_size,
                                        const ComputedStyle& style) {
  return MakeGarbageCollected<CSSValuePair>(
      CSSValue::Create(length_size.Width(), style.EffectiveZoom()),
      CSSValue::Create(length_size.Height(), style.EffectiveZoom()),
      CSSValuePair::kKeepIdenticalValues);
}

static CSSValue* BasicShapeRadiusToCSSValue(const ComputedStyle& style,
                                            const BasicShapeRadius& radius) {
  switch (radius.GetType()) {
    case BasicShapeRadius::kValue:
      return CSSValue::Create(radius.Value(), style.EffectiveZoom());
    case BasicShapeRadius::kClosestSide:
      return CSSIdentifierValue::Create(CSSValueID::kClosestSide);
    case BasicShapeRadius::kFarthestSide:
      return CSSIdentifierValue::Create(CSSValueID::kFarthestSide);
  }

  NOTREACHED();
  return nullptr;
}

CSSValue* ValueForBasicShape(const ComputedStyle& style,
                             const BasicShape* basic_shape) {
  switch (basic_shape->GetType()) {
    case BasicShape::kStyleRayType: {
      const StyleRay& ray = To<StyleRay>(*basic_shape);
      return MakeGarbageCollected<cssvalue::CSSRayValue>(
          *CSSPrimitiveValue::Create(ray.Angle(),
                                     CSSPrimitiveValue::UnitType::kDegrees),
          *CSSIdentifierValue::Create(RaySizeToKeyword(ray.Size())),
          (ray.Contain() ? CSSIdentifierValue::Create(CSSValueID::kContain)
                         : nullptr));
    }

    case BasicShape::kStylePathType:
      return To<StylePath>(basic_shape)->ComputedCSSValue();

    case BasicShape::kBasicShapeCircleType: {
      const BasicShapeCircle* circle = To<BasicShapeCircle>(basic_shape);
      cssvalue::CSSBasicShapeCircleValue* circle_value =
          MakeGarbageCollected<cssvalue::CSSBasicShapeCircleValue>();

      circle_value->SetCenterX(ValueForCenterCoordinate(
          style, circle->CenterX(), EBoxOrient::kHorizontal));
      circle_value->SetCenterY(ValueForCenterCoordinate(
          style, circle->CenterY(), EBoxOrient::kVertical));
      circle_value->SetRadius(
          BasicShapeRadiusToCSSValue(style, circle->Radius()));
      return circle_value;
    }
    case BasicShape::kBasicShapeEllipseType: {
      const BasicShapeEllipse* ellipse = To<BasicShapeEllipse>(basic_shape);
      auto* ellipse_value =
          MakeGarbageCollected<cssvalue::CSSBasicShapeEllipseValue>();

      ellipse_value->SetCenterX(ValueForCenterCoordinate(
          style, ellipse->CenterX(), EBoxOrient::kHorizontal));
      ellipse_value->SetCenterY(ValueForCenterCoordinate(
          style, ellipse->CenterY(), EBoxOrient::kVertical));
      ellipse_value->SetRadiusX(
          BasicShapeRadiusToCSSValue(style, ellipse->RadiusX()));
      ellipse_value->SetRadiusY(
          BasicShapeRadiusToCSSValue(style, ellipse->RadiusY()));
      return ellipse_value;
    }
    case BasicShape::kBasicShapePolygonType: {
      const BasicShapePolygon* polygon = To<BasicShapePolygon>(basic_shape);
      auto* polygon_value =
          MakeGarbageCollected<cssvalue::CSSBasicShapePolygonValue>();

      polygon_value->SetWindRule(polygon->GetWindRule());
      const Vector<Length>& values = polygon->Values();
      for (unsigned i = 0; i < values.size(); i += 2) {
        polygon_value->AppendPoint(
            CSSPrimitiveValue::Create(values.at(i), style.EffectiveZoom()),
            CSSPrimitiveValue::Create(values.at(i + 1), style.EffectiveZoom()));
      }
      return polygon_value;
    }
    case BasicShape::kBasicShapeInsetType: {
      const BasicShapeInset* inset = To<BasicShapeInset>(basic_shape);
      auto* inset_value =
          MakeGarbageCollected<cssvalue::CSSBasicShapeInsetValue>();

      inset_value->SetTop(
          CSSPrimitiveValue::Create(inset->Top(), style.EffectiveZoom()));
      inset_value->SetRight(
          CSSPrimitiveValue::Create(inset->Right(), style.EffectiveZoom()));
      inset_value->SetBottom(
          CSSPrimitiveValue::Create(inset->Bottom(), style.EffectiveZoom()));
      inset_value->SetLeft(
          CSSPrimitiveValue::Create(inset->Left(), style.EffectiveZoom()));

      inset_value->SetTopLeftRadius(
          ValueForLengthSize(inset->TopLeftRadius(), style));
      inset_value->SetTopRightRadius(
          ValueForLengthSize(inset->TopRightRadius(), style));
      inset_value->SetBottomRightRadius(
          ValueForLengthSize(inset->BottomRightRadius(), style));
      inset_value->SetBottomLeftRadius(
          ValueForLengthSize(inset->BottomLeftRadius(), style));

      return inset_value;
    }
    default:
      return nullptr;
  }
}

static Length ConvertToLength(const StyleResolverState& state,
                              const CSSPrimitiveValue* value) {
  if (!value)
    return Length::Fixed(0);
  return value->ConvertToLength(state.CssToLengthConversionData());
}

static LengthSize ConvertToLengthSize(const StyleResolverState& state,
                                      const CSSValuePair* value) {
  if (!value)
    return LengthSize(Length::Fixed(0), Length::Fixed(0));

  return LengthSize(
      ConvertToLength(state, &To<CSSPrimitiveValue>(value->First())),
      ConvertToLength(state, &To<CSSPrimitiveValue>(value->Second())));
}

static BasicShapeCenterCoordinate ConvertToCenterCoordinate(
    const StyleResolverState& state,
    CSSValue* value) {
  BasicShapeCenterCoordinate::Direction direction;
  Length offset = Length::Fixed(0);

  CSSValueID keyword = CSSValueID::kTop;
  if (!value) {
    keyword = CSSValueID::kCenter;
  } else if (auto* identifier_value = DynamicTo<CSSIdentifierValue>(value)) {
    keyword = identifier_value->GetValueID();
  } else if (auto* value_pair = DynamicTo<CSSValuePair>(value)) {
    keyword = To<CSSIdentifierValue>(value_pair->First()).GetValueID();
    offset =
        ConvertToLength(state, &To<CSSPrimitiveValue>(value_pair->Second()));
  } else {
    offset = ConvertToLength(state, To<CSSPrimitiveValue>(value));
  }

  switch (keyword) {
    case CSSValueID::kTop:
    case CSSValueID::kLeft:
      direction = BasicShapeCenterCoordinate::kTopLeft;
      break;
    case CSSValueID::kRight:
    case CSSValueID::kBottom:
      direction = BasicShapeCenterCoordinate::kBottomRight;
      break;
    case CSSValueID::kCenter:
      direction = BasicShapeCenterCoordinate::kTopLeft;
      offset = Length::Percent(50);
      break;
    default:
      NOTREACHED();
      direction = BasicShapeCenterCoordinate::kTopLeft;
      break;
  }

  return BasicShapeCenterCoordinate(direction, offset);
}

static BasicShapeRadius CssValueToBasicShapeRadius(
    const StyleResolverState& state,
    const CSSValue* radius) {
  if (!radius)
    return BasicShapeRadius(BasicShapeRadius::kClosestSide);

  if (auto* radius_identifier_value = DynamicTo<CSSIdentifierValue>(radius)) {
    switch (radius_identifier_value->GetValueID()) {
      case CSSValueID::kClosestSide:
        return BasicShapeRadius(BasicShapeRadius::kClosestSide);
      case CSSValueID::kFarthestSide:
        return BasicShapeRadius(BasicShapeRadius::kFarthestSide);
      default:
        NOTREACHED();
        break;
    }
  }

  return BasicShapeRadius(
      ConvertToLength(state, To<CSSPrimitiveValue>(radius)));
}

scoped_refptr<BasicShape> BasicShapeForValue(
    const StyleResolverState& state,
    const CSSValue& basic_shape_value) {
  scoped_refptr<BasicShape> basic_shape;

  if (IsA<cssvalue::CSSBasicShapeCircleValue>(basic_shape_value)) {
    const auto& circle_value =
        To<cssvalue::CSSBasicShapeCircleValue>(basic_shape_value);
    scoped_refptr<BasicShapeCircle> circle = BasicShapeCircle::Create();

    circle->SetCenterX(
        ConvertToCenterCoordinate(state, circle_value.CenterX()));
    circle->SetCenterY(
        ConvertToCenterCoordinate(state, circle_value.CenterY()));
    circle->SetRadius(CssValueToBasicShapeRadius(state, circle_value.Radius()));

    basic_shape = std::move(circle);
  } else if (IsA<cssvalue::CSSBasicShapeEllipseValue>(basic_shape_value)) {
    const auto& ellipse_value =
        To<cssvalue::CSSBasicShapeEllipseValue>(basic_shape_value);
    scoped_refptr<BasicShapeEllipse> ellipse = BasicShapeEllipse::Create();

    ellipse->SetCenterX(
        ConvertToCenterCoordinate(state, ellipse_value.CenterX()));
    ellipse->SetCenterY(
        ConvertToCenterCoordinate(state, ellipse_value.CenterY()));
    ellipse->SetRadiusX(
        CssValueToBasicShapeRadius(state, ellipse_value.RadiusX()));
    ellipse->SetRadiusY(
        CssValueToBasicShapeRadius(state, ellipse_value.RadiusY()));

    basic_shape = std::move(ellipse);
  } else if (IsA<cssvalue::CSSBasicShapePolygonValue>(basic_shape_value)) {
    const cssvalue::CSSBasicShapePolygonValue& polygon_value =
        To<cssvalue::CSSBasicShapePolygonValue>(basic_shape_value);
    scoped_refptr<BasicShapePolygon> polygon = BasicShapePolygon::Create();

    polygon->SetWindRule(polygon_value.GetWindRule());
    const HeapVector<Member<CSSPrimitiveValue>>& values =
        polygon_value.Values();
    for (unsigned i = 0; i < values.size(); i += 2)
      polygon->AppendPoint(ConvertToLength(state, values.at(i).Get()),
                           ConvertToLength(state, values.at(i + 1).Get()));

    basic_shape = std::move(polygon);
  } else if (IsA<cssvalue::CSSBasicShapeInsetValue>(basic_shape_value)) {
    const cssvalue::CSSBasicShapeInsetValue& rect_value =
        To<cssvalue::CSSBasicShapeInsetValue>(basic_shape_value);
    scoped_refptr<BasicShapeInset> rect = BasicShapeInset::Create();

    rect->SetTop(ConvertToLength(state, rect_value.Top()));
    rect->SetRight(ConvertToLength(state, rect_value.Right()));
    rect->SetBottom(ConvertToLength(state, rect_value.Bottom()));
    rect->SetLeft(ConvertToLength(state, rect_value.Left()));

    rect->SetTopLeftRadius(
        ConvertToLengthSize(state, rect_value.TopLeftRadius()));
    rect->SetTopRightRadius(
        ConvertToLengthSize(state, rect_value.TopRightRadius()));
    rect->SetBottomRightRadius(
        ConvertToLengthSize(state, rect_value.BottomRightRadius()));
    rect->SetBottomLeftRadius(
        ConvertToLengthSize(state, rect_value.BottomLeftRadius()));

    basic_shape = std::move(rect);
  } else if (const auto* ray_value =
                 DynamicTo<cssvalue::CSSRayValue>(basic_shape_value)) {
    float angle = ray_value->Angle().ComputeDegrees();
    StyleRay::RaySize size = KeywordToRaySize(ray_value->Size().GetValueID());
    bool contain = !!ray_value->Contain();
    basic_shape = StyleRay::Create(angle, size, contain);
  } else {
    NOTREACHED();
  }

  return basic_shape;
}

FloatPoint FloatPointForCenterCoordinate(
    const BasicShapeCenterCoordinate& center_x,
    const BasicShapeCenterCoordinate& center_y,
    FloatSize box_size) {
  float x = FloatValueForLength(center_x.ComputedLength(), box_size.Width());
  float y = FloatValueForLength(center_y.ComputedLength(), box_size.Height());
  return FloatPoint(x, y);
}

}  // namespace blink
