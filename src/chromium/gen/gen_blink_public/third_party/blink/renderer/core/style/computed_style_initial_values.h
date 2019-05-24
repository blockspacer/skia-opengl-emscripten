// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_INITIAL_VALUES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_INITIAL_VALUES_H_

#include "third_party/blink/renderer/core/layout/layout_theme.h"
#include "third_party/blink/renderer/core/scroll/scroll_types.h"
#include "third_party/blink/renderer/core/style/computed_style_constants.h"
#include "third_party/blink/renderer/core/style/filter_operations.h"
#include "third_party/blink/renderer/platform/theme_types.h"
#include "cc/input/scroll_snap_data.h"
#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/core/css/style_color.h"
#include "third_party/blink/renderer/core/scroll/scroll_customization.h"
#include "third_party/blink/renderer/core/style/applied_text_decoration_list.h"
#include "third_party/blink/renderer/core/style/cursor_list.h"
#include "third_party/blink/renderer/core/style/fill_layer.h"
#include "third_party/blink/renderer/core/style/gap_length.h"
#include "third_party/blink/renderer/core/style/grid_area.h"
#include "third_party/blink/renderer/core/style/grid_position.h"
#include "third_party/blink/renderer/core/style/grid_track_size.h"
#include "third_party/blink/renderer/core/style/named_grid_lines_map.h"
#include "third_party/blink/renderer/core/style/nine_piece_image.h"
#include "third_party/blink/renderer/core/style/ordered_named_grid_lines.h"
#include "third_party/blink/renderer/core/style/style_content_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_filter_data.h"
#include "third_party/blink/renderer/core/style/style_offset_rotation.h"
#include "third_party/blink/renderer/core/style/style_self_alignment_data.h"
#include "third_party/blink/renderer/core/style/text_size_adjust.h"
#include "third_party/blink/renderer/core/style/transform_origin.h"
#include "third_party/blink/renderer/platform/fonts/font.h"
#include "third_party/blink/renderer/platform/geometry/float_size.h"
#include "third_party/blink/renderer/platform/geometry/layout_unit.h"
#include "third_party/blink/renderer/platform/geometry/length.h"
#include "third_party/blink/renderer/platform/geometry/length_box.h"
#include "third_party/blink/renderer/platform/geometry/length_point.h"
#include "third_party/blink/renderer/platform/geometry/length_size.h"
#include "third_party/blink/renderer/platform/graphics/color.h"
#include "third_party/blink/renderer/platform/graphics/graphics_types.h"
#include "third_party/blink/renderer/platform/graphics/touch_action.h"
#include "third_party/blink/renderer/platform/text/tab_size.h"
#include "third_party/blink/renderer/platform/text/text_direction.h"
#include "third_party/blink/renderer/platform/text/text_justify.h"
#include "third_party/blink/renderer/platform/text/unicode_bidi.h"
#include "third_party/blink/renderer/platform/text/writing_mode.h"
#include "third_party/blink/renderer/platform/transforms/transform_operations.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class ShapeValue;
class StyleImage;
class StyleInheritedVariables;
class StyleNonInheritedVariables;
class BasicShape;
class CSSAnimationData;
class CSSTransitionData;
class ClipPathOperation;
class ContentData;
class CounterDirectiveMap;
class PaintImages;
class QuotesData;
class RotateTransformOperation;
class ScaleTransformOperation;
class ShadowList;
class ShapeValue;
class StyleImage;
class StyleInheritedVariables;
class StyleInitialData;
class StyleNonInheritedVariables;
class StyleReflection;
class TranslateTransformOperation;

/**
 * A set of functions that return the initial value for each field on ComputedStyle.
 * This includes both properties defined in css_properties.json5 and the extra
 * fields defined in computed_style_extra_fields.json5.
 */
class ComputedStyleInitialValues{
  STATIC_ONLY(ComputedStyleInitialValues);
 public:
  // Hand-written methods.

  static StyleContentAlignmentData InitialContentAlignment() {
    return StyleContentAlignmentData(ContentPosition::kNormal,
                                     ContentDistributionType::kDefault,
                                     OverflowAlignment::kDefault);
  }
  static StyleSelfAlignmentData InitialDefaultAlignment() {
    return StyleSelfAlignmentData(ItemPosition::kNormal,
                                  OverflowAlignment::kDefault);
  }
  static StyleImage* InitialBorderImageSource() { return nullptr; }
  static float InitialBorderWidth() { return 3; }
  static uint16_t InitialColumnRuleWidth() {
    return 3;
  }

  // Grid properties.
  static size_t InitialGridAutoRepeatInsertionPoint() { return 0; }
  static AutoRepeatType InitialGridAutoRepeatType() {
    return AutoRepeatType::kNoAutoRepeat;
  }

  // FIXME: Remove letter-spacing/word-spacing and replace them with respective
  // FontBuilder calls.
  static float InitialWordSpacing() { return 0.0f; }
  static float InitialLetterSpacing() { return 0.0f; }

  static uint16_t InitialOutlineWidth() {
    return 3;
  }
  static EVerticalAlign InitialVerticalAlign() {
    return EVerticalAlign::kBaseline;
  }

  // -webkit-perspective-origin-x
  static Length InitialPerspectiveOriginX() { return Length::Percent(50.0); }

  // -webkit-perspective-origin-y
  static Length InitialPerspectiveOriginY() { return Length::Percent(50.0); }

  // -webkit-transform-origin-x
  static Length InitialTransformOriginX() { return Length::Percent(50.0); }
  // -webkit-transform-origin-y
  static Length InitialTransformOriginY() { return Length::Percent(50.0); }
  // -webkit-transform-origin-z
  static float InitialTransformOriginZ() { return 0; }

  // -webkit-mask-box-image-source
  static StyleImage* InitialMaskBoxImageSource() { return nullptr; }

  static const FilterOperations& InitialFilter() {
    return InitialFilterInternal();
  }
  static const FilterOperations& InitialBackdropFilter() {
    return InitialFilterInternal();
  }

  // Generated methods below.

  static Color InitialColor() {
    return Color::kBlack;
  }

  static TextDirection InitialDirection() {
    return TextDirection::kLtr;
  }

  static ETextOrientation InitialTextOrientation() {
    return ETextOrientation::kMixed;
  }

  static WritingMode InitialWritingMode() {
    return WritingMode::kHorizontalTb;
  }

  static float InitialZoom() {
    return 1.0;
  }

  static StyleContentAlignmentData InitialAlignContent() {
    return StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault);
  }

  static StyleSelfAlignmentData InitialAlignItems() {
    return StyleSelfAlignmentData(ItemPosition::kNormal, OverflowAlignment::kDefault);
  }

  static StyleSelfAlignmentData InitialAlignSelf() {
    return StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault);
  }

  static EBackfaceVisibility InitialBackfaceVisibility() {
    return EBackfaceVisibility::kVisible;
  }

  static StyleColor InitialBackgroundColor() {
    return StyleColor(Color::kTransparent);
  }

  static Color InitialBorderBottomColor() {
    return 0;
  }

  static LengthSize InitialBorderBottomLeftRadius() {
    return LengthSize(Length::Fixed(0), Length::Fixed(0));
  }

  static LengthSize InitialBorderBottomRightRadius() {
    return LengthSize(Length::Fixed(0), Length::Fixed(0));
  }

  static EBorderStyle InitialBorderBottomStyle() {
    return EBorderStyle::kNone;
  }

  static LayoutUnit InitialBorderBottomWidth() {
    return LayoutUnit(3);
  }

  static EBorderCollapse InitialBorderCollapse() {
    return EBorderCollapse::kSeparate;
  }

  static Color InitialBorderLeftColor() {
    return 0;
  }

  static EBorderStyle InitialBorderLeftStyle() {
    return EBorderStyle::kNone;
  }

  static LayoutUnit InitialBorderLeftWidth() {
    return LayoutUnit(3);
  }

  static Color InitialBorderRightColor() {
    return 0;
  }

  static EBorderStyle InitialBorderRightStyle() {
    return EBorderStyle::kNone;
  }

  static LayoutUnit InitialBorderRightWidth() {
    return LayoutUnit(3);
  }

  static Color InitialBorderTopColor() {
    return 0;
  }

  static LengthSize InitialBorderTopLeftRadius() {
    return LengthSize(Length::Fixed(0), Length::Fixed(0));
  }

  static LengthSize InitialBorderTopRightRadius() {
    return LengthSize(Length::Fixed(0), Length::Fixed(0));
  }

  static EBorderStyle InitialBorderTopStyle() {
    return EBorderStyle::kNone;
  }

  static LayoutUnit InitialBorderTopWidth() {
    return LayoutUnit(3);
  }

  static Length InitialBottom() {
    return Length();
  }

  static ShadowList* InitialBoxShadow() {
    return nullptr;
  }

  static EBoxSizing InitialBoxSizing() {
    return EBoxSizing::kContentBox;
  }

  static EBreakBetween InitialBreakAfter() {
    return EBreakBetween::kAuto;
  }

  static EBreakBetween InitialBreakBefore() {
    return EBreakBetween::kAuto;
  }

  static EBreakInside InitialBreakInside() {
    return EBreakInside::kAuto;
  }

  static ECaptionSide InitialCaptionSide() {
    return ECaptionSide::kTop;
  }

  static Color InitialCaretColor() {
    return Color();
  }

  static EClear InitialClear() {
    return EClear::kNone;
  }

  static LengthBox InitialClip() {
    return LengthBox();
  }

  static ClipPathOperation* InitialClipPath() {
    return nullptr;
  }

  static unsigned short InitialColumnCount() {
    return 1;
  }

  static EColumnFill InitialColumnFill() {
    return EColumnFill::kBalance;
  }

  static GapLength InitialColumnGap() {
    return GapLength();
  }

  static Color InitialColumnRuleColor() {
    return 0;
  }

  static EBorderStyle InitialColumnRuleStyle() {
    return EBorderStyle::kNone;
  }

  static EColumnSpan InitialColumnSpan() {
    return EColumnSpan::kNone;
  }

  static float InitialColumnWidth() {
    return 0.0f;
  }

  static unsigned InitialContain() {
    return kContainsNone;
  }

  static ContentData* InitialContent() {
    return nullptr;
  }

  static ECursor InitialCursor() {
    return ECursor::kAuto;
  }

  static EEmptyCells InitialEmptyCells() {
    return EEmptyCells::kShow;
  }

  static Length InitialFlexBasis() {
    return Length::Auto();
  }

  static EFlexDirection InitialFlexDirection() {
    return EFlexDirection::kRow;
  }

  static float InitialFlexGrow() {
    return 0.0f;
  }

  static float InitialFlexShrink() {
    return 1.0f;
  }

  static EFlexWrap InitialFlexWrap() {
    return EFlexWrap::kNowrap;
  }

  static EFloat InitialFloating() {
    return EFloat::kNone;
  }

  static Vector<GridTrackSize> InitialGridAutoColumns() {
    return Vector<GridTrackSize>(1, GridTrackSize(Length::Auto()));
  }

  static GridAutoFlow InitialGridAutoFlow() {
    return kAutoFlowRow;
  }

  static Vector<GridTrackSize> InitialGridAutoRows() {
    return Vector<GridTrackSize>(1, GridTrackSize(Length::Auto()));
  }

  static GridPosition InitialGridColumnEnd() {
    return GridPosition();
  }

  static GridPosition InitialGridColumnStart() {
    return GridPosition();
  }

  static GridPosition InitialGridRowEnd() {
    return GridPosition();
  }

  static GridPosition InitialGridRowStart() {
    return GridPosition();
  }

  static Vector<GridTrackSize> InitialGridTemplateColumns() {
    return Vector<GridTrackSize>();
  }

  static Vector<GridTrackSize> InitialGridTemplateRows() {
    return Vector<GridTrackSize>();
  }

  static Length InitialHeight() {
    return Length();
  }

  static Hyphens InitialHyphens() {
    return Hyphens::kManual;
  }

  static bool InitialRespectImageOrientation() {
    return false;
  }

  static EImageRendering InitialImageRendering() {
    return EImageRendering::kAuto;
  }

  static EIsolation InitialIsolation() {
    return EIsolation::kAuto;
  }

  static StyleContentAlignmentData InitialJustifyContent() {
    return StyleContentAlignmentData(ContentPosition::kNormal, ContentDistributionType::kDefault, OverflowAlignment::kDefault);
  }

  static StyleSelfAlignmentData InitialJustifyItems() {
    return StyleSelfAlignmentData(ItemPosition::kLegacy, OverflowAlignment::kDefault);
  }

  static StyleSelfAlignmentData InitialJustifySelf() {
    return StyleSelfAlignmentData(ItemPosition::kAuto, OverflowAlignment::kDefault);
  }

  static Length InitialLeft() {
    return Length();
  }

  static Length InitialLineHeight() {
    return Length::Percent(-100.0);
  }

  static uint8_t InitialLineHeightStep() {
    return 0;
  }

  static StyleImage* InitialListStyleImage() {
    return nullptr;
  }

  static EListStylePosition InitialListStylePosition() {
    return EListStylePosition::kOutside;
  }

  static EListStyleType InitialListStyleType() {
    return EListStyleType::kDisc;
  }

  static Length InitialMarginBottom() {
    return Length::Fixed();
  }

  static Length InitialMarginLeft() {
    return Length::Fixed();
  }

  static Length InitialMarginRight() {
    return Length::Fixed();
  }

  static Length InitialMarginTop() {
    return Length::Fixed();
  }

  static Length InitialMaxHeight() {
    return Length::MaxSizeNone();
  }

  static Length InitialMaxWidth() {
    return Length::MaxSizeNone();
  }

  static Length InitialMinHeight() {
    return Length();
  }

  static Length InitialMinWidth() {
    return Length();
  }

  static BlendMode InitialBlendMode() {
    return BlendMode::kNormal;
  }

  static EObjectFit InitialObjectFit() {
    return EObjectFit::kFill;
  }

  static LengthPoint InitialObjectPosition() {
    return LengthPoint(Length::Percent(50.0), Length::Percent(50.0));
  }

  static LengthPoint InitialOffsetAnchor() {
    return LengthPoint(Length::Auto(), Length::Auto());
  }

  static Length InitialOffsetDistance() {
    return Length::Fixed(0);
  }

  static BasicShape* InitialOffsetPath() {
    return nullptr;
  }

  static LengthPoint InitialOffsetPosition() {
    return LengthPoint(Length::Auto(), Length::Auto());
  }

  static StyleOffsetRotation InitialOffsetRotate() {
    return StyleOffsetRotation(0, OffsetRotationType::kAuto);
  }

  static float InitialOpacity() {
    return 1.0;
  }

  static int InitialOrder() {
    return 0;
  }

  static short InitialOrphans() {
    return 2;
  }

  static Color InitialOutlineColor() {
    return 0;
  }

  static int InitialOutlineOffset() {
    return 0;
  }

  static EBorderStyle InitialOutlineStyle() {
    return EBorderStyle::kNone;
  }

  static EOverflowAnchor InitialOverflowAnchor() {
    return EOverflowAnchor::kAuto;
  }

  static EOverflowWrap InitialOverflowWrap() {
    return EOverflowWrap::kNormal;
  }

  static EOverflow InitialOverflowX() {
    return EOverflow::kVisible;
  }

  static EOverflow InitialOverflowY() {
    return EOverflow::kVisible;
  }

  static EOverscrollBehavior InitialOverscrollBehaviorX() {
    return EOverscrollBehavior::kAuto;
  }

  static EOverscrollBehavior InitialOverscrollBehaviorY() {
    return EOverscrollBehavior::kAuto;
  }

  static Length InitialPaddingBottom() {
    return Length::Fixed();
  }

  static Length InitialPaddingLeft() {
    return Length::Fixed();
  }

  static Length InitialPaddingRight() {
    return Length::Fixed();
  }

  static Length InitialPaddingTop() {
    return Length::Fixed();
  }

  static float InitialPerspective() {
    return 0.0;
  }

  static LengthPoint InitialPerspectiveOrigin() {
    return LengthPoint(Length::Percent(50.0), Length::Percent(50.0));
  }

  static EPointerEvents InitialPointerEvents() {
    return EPointerEvents::kAuto;
  }

  static EPosition InitialPosition() {
    return EPosition::kStatic;
  }

  static QuotesData* InitialQuotes() {
    return nullptr;
  }

  static EResize InitialResize() {
    return EResize::kNone;
  }

  static Length InitialRight() {
    return Length();
  }

  static RotateTransformOperation* InitialRotate() {
    return nullptr;
  }

  static GapLength InitialRowGap() {
    return GapLength();
  }

  static ScaleTransformOperation* InitialScale() {
    return nullptr;
  }

  static ScrollBehavior InitialScrollBehavior() {
    return kScrollBehaviorAuto;
  }

  static scroll_customization::ScrollDirection InitialScrollCustomization() {
    return scroll_customization::kScrollDirectionNone;
  }

  static float InitialScrollMarginBottom() {
    return 0.0f;
  }

  static float InitialScrollMarginLeft() {
    return 0.0f;
  }

  static float InitialScrollMarginRight() {
    return 0.0f;
  }

  static float InitialScrollMarginTop() {
    return 0.0f;
  }

  static Length InitialScrollPaddingBottom() {
    return Length();
  }

  static Length InitialScrollPaddingLeft() {
    return Length();
  }

  static Length InitialScrollPaddingRight() {
    return Length();
  }

  static Length InitialScrollPaddingTop() {
    return Length();
  }

  static cc::ScrollSnapAlign InitialScrollSnapAlign() {
    return cc::ScrollSnapAlign();
  }

  static EScrollSnapStop InitialScrollSnapStop() {
    return EScrollSnapStop::kNormal;
  }

  static cc::ScrollSnapType InitialScrollSnapType() {
    return cc::ScrollSnapType();
  }

  static float InitialShapeImageThreshold() {
    return 0.0;
  }

  static Length InitialShapeMargin() {
    return Length::Fixed(0);
  }

  static ShapeValue* InitialShapeOutside() {
    return nullptr;
  }

  static ESpeak InitialSpeak() {
    return ESpeak::kNormal;
  }

  static TabSize InitialTabSize() {
    return TabSize(8);
  }

  static ETableLayout InitialTableLayout() {
    return ETableLayout::kAuto;
  }

  static ETextAlign InitialTextAlign() {
    return ETextAlign::kStart;
  }

  static ETextAlignLast InitialTextAlignLast() {
    return ETextAlignLast::kAuto;
  }

  static ETextCombine InitialTextCombine() {
    return ETextCombine::kNone;
  }

  static StyleColor InitialTextDecorationColor() {
    return StyleColor::CurrentColor();
  }

  static TextDecoration InitialTextDecoration() {
    return TextDecoration::kNone;
  }

  static ETextDecorationSkipInk InitialTextDecorationSkipInk() {
    return ETextDecorationSkipInk::kAuto;
  }

  static ETextDecorationStyle InitialTextDecorationStyle() {
    return ETextDecorationStyle::kSolid;
  }

  static Length InitialTextIndent() {
    return Length::Fixed();
  }

  static TextJustify InitialTextJustify() {
    return TextJustify::kAuto;
  }

  static ETextOverflow InitialTextOverflow() {
    return ETextOverflow::kClip;
  }

  static ShadowList* InitialTextShadow() {
    return nullptr;
  }

  static TextSizeAdjust InitialTextSizeAdjust() {
    return TextSizeAdjust::AdjustAuto();
  }

  static ETextTransform InitialTextTransform() {
    return ETextTransform::kNone;
  }

  static unsigned InitialTextUnderlinePosition() {
    return kTextUnderlinePositionAuto;
  }

  static Length InitialTop() {
    return Length();
  }

  static TouchAction InitialTouchAction() {
    return TouchAction::kTouchActionAuto;
  }

  static TransformOperations InitialTransform() {
    return EmptyTransformOperations();
  }

  static ETransformBox InitialTransformBox() {
    return ETransformBox::kViewBox;
  }

  static TransformOrigin InitialTransformOrigin() {
    return TransformOrigin(Length::Percent(50.0), Length::Percent(50.0), 0);
  }

  static ETransformStyle3D InitialTransformStyle3D() {
    return ETransformStyle3D::kFlat;
  }

  static TranslateTransformOperation* InitialTranslate() {
    return nullptr;
  }

  static UnicodeBidi InitialUnicodeBidi() {
    return UnicodeBidi::kNormal;
  }

  static EUserSelect InitialUserSelect() {
    return EUserSelect::kAuto;
  }

  static EVisibility InitialVisibility() {
    return EVisibility::kVisible;
  }

  static EDraggableRegionMode InitialDraggableRegionMode() {
    return EDraggableRegionMode::kNone;
  }

  static ControlPart InitialAppearance() {
    return kNoControlPart;
  }

  static short InitialHorizontalBorderSpacing() {
    return 0;
  }

  static short InitialVerticalBorderSpacing() {
    return 0;
  }

  static EBoxAlignment InitialBoxAlign() {
    return EBoxAlignment::kStretch;
  }

  static EBoxDecorationBreak InitialBoxDecorationBreak() {
    return EBoxDecorationBreak::kSlice;
  }

  static EBoxDirection InitialBoxDirection() {
    return EBoxDirection::kNormal;
  }

  static float InitialBoxFlex() {
    return 0.0f;
  }

  static unsigned InitialBoxOrdinalGroup() {
    return 1;
  }

  static EBoxOrient InitialBoxOrient() {
    return EBoxOrient::kHorizontal;
  }

  static EBoxPack InitialBoxPack() {
    return EBoxPack::kStart;
  }

  static StyleReflection* InitialBoxReflect() {
    return nullptr;
  }

  static AtomicString InitialHighlight() {
    return g_null_atom;
  }

  static AtomicString InitialHyphenationString() {
    return AtomicString();
  }

  static LineBreak InitialLineBreak() {
    return LineBreak::kAuto;
  }

  static int InitialLineClamp() {
    return 0;
  }

  static EMarginCollapse InitialMarginAfterCollapse() {
    return EMarginCollapse::kCollapse;
  }

  static EMarginCollapse InitialMarginBeforeCollapse() {
    return EMarginCollapse::kCollapse;
  }

  static EPrintColorAdjust InitialPrintColorAdjust() {
    return EPrintColorAdjust::kEconomy;
  }

  static EOrder InitialRtlOrdering() {
    return EOrder::kLogical;
  }

  static RubyPosition InitialRubyPosition() {
    return RubyPosition::kBefore;
  }

  static Color InitialTapHighlightColor() {
    return LayoutTheme::TapHighlightColor();
  }

  static Color InitialTextEmphasisColor() {
    return Color();
  }

  static TextEmphasisPosition InitialTextEmphasisPosition() {
    return TextEmphasisPosition::kOverRight;
  }

  static Color InitialTextFillColor() {
    return Color();
  }

  static ETextSecurity InitialTextSecurity() {
    return ETextSecurity::kNone;
  }

  static Color InitialTextStrokeColor() {
    return Color();
  }

  static float InitialTextStrokeWidth() {
    return 0;
  }

  static EUserDrag InitialUserDrag() {
    return EUserDrag::kAuto;
  }

  static EUserModify InitialUserModify() {
    return EUserModify::kReadOnly;
  }

  static EWhiteSpace InitialWhiteSpace() {
    return EWhiteSpace::kNormal;
  }

  static short InitialWidows() {
    return 2;
  }

  static Length InitialWidth() {
    return Length();
  }

  static EWordBreak InitialWordBreak() {
    return EWordBreak::kNormal;
  }

  static int InitialZIndex() {
    return 0;
  }

  static bool InitialBorderLeftColorIsCurrentColor() {
    return true;
  }

  static bool InitialBorderRightColorIsCurrentColor() {
    return true;
  }

  static bool InitialBorderTopColorIsCurrentColor() {
    return true;
  }

  static bool InitialBorderBottomColorIsCurrentColor() {
    return true;
  }

  static EDisplay InitialDisplay() {
    return EDisplay::kInline;
  }

  static AtomicString InitialDisplayLayoutCustomName() {
    return g_null_atom;
  }

  static AtomicString InitialDisplayLayoutCustomParentName() {
    return g_null_atom;
  }

  static EDisplay InitialOriginalDisplay() {
    return EDisplay::kInline;
  }

  static EInsideLink InitialInsideLink() {
    return EInsideLink::kNotInsideLink;
  }

  static bool InitialHasViewportUnits() {
    return false;
  }

  static unsigned InitialStyleType() {
    return PseudoId::kPseudoIdNone;
  }

  static unsigned InitialPseudoBits() {
    return kPseudoIdNone;
  }

  static bool InitialHasSimpleUnderline() {
    return false;
  }

  static Length InitialVerticalAlignLength() {
    return Length();
  }

  static NinePieceImage InitialBorderImage() {
    return NinePieceImage();
  }

  static FillLayer InitialBackground() {
    return FillLayer(EFillLayerType::kBackground, true);
  }

  static bool InitialHasAutoClip() {
    return true;
  }

  static bool InitialHasAutoZIndex() {
    return true;
  }

  static Font InitialFont() {
    return Font();
  }

  static Color InitialVisitedLinkColor() {
    return Color::kBlack;
  }

  static float InitialTextAutosizingMultiplier() {
    return 1.0;
  }

  static Color InitialVisitedLinkTextStrokeColor() {
    return Color();
  }

  static Color InitialVisitedLinkTextFillColor() {
    return Color();
  }

  static Color InitialVisitedLinkTextEmphasisColor() {
    return Color();
  }

  static Color InitialVisitedLinkCaretColor() {
    return Color();
  }

  static CursorList* InitialCursorData() {
    return nullptr;
  }

  static float InitialEffectiveZoom() {
    return 1.0f;
  }

  static bool InitialTextStrokeColorIsCurrentColor() {
    return true;
  }

  static bool InitialTextFillColorIsCurrentColor() {
    return true;
  }

  static bool InitialTextEmphasisColorIsCurrentColor() {
    return true;
  }

  static bool InitialCaretColorIsCurrentColor() {
    return false;
  }

  static bool InitialCaretColorIsAuto() {
    return true;
  }

  static bool InitialVisitedLinkTextStrokeColorIsCurrentColor() {
    return true;
  }

  static bool InitialVisitedLinkTextFillColorIsCurrentColor() {
    return true;
  }

  static bool InitialVisitedLinkTextEmphasisColorIsCurrentColor() {
    return true;
  }

  static bool InitialVisitedLinkCaretColorIsCurrentColor() {
    return false;
  }

  static bool InitialVisitedLinkCaretColorIsAuto() {
    return true;
  }

  static TextEmphasisFill InitialTextEmphasisFill() {
    return TextEmphasisFill::kFilled;
  }

  static TextEmphasisMark InitialTextEmphasisMark() {
    return TextEmphasisMark::kNone;
  }

  static TextIndentLine InitialTextIndentLine() {
    return TextIndentLine::kFirstLine;
  }

  static TextIndentType InitialTextIndentType() {
    return TextIndentType::kNormal;
  }

  static bool InitialSubtreeWillChangeContents() {
    return false;
  }

  static bool InitialSelfOrAncestorHasDirAutoAttribute() {
    return false;
  }

  static bool InitialSubtreeIsSticky() {
    return false;
  }

  static short InitialHyphenationLimitBefore() {
    return -1;
  }

  static short InitialHyphenationLimitAfter() {
    return -1;
  }

  static short InitialHyphenationLimitLines() {
    return -1;
  }

  static TouchAction InitialEffectiveTouchAction() {
    return TouchAction::kTouchActionAuto;
  }

  static AtomicString InitialTextEmphasisCustomMark() {
    return AtomicString();
  }

  static AppliedTextDecorationList* InitialAppliedTextDecorations() {
    return nullptr;
  }

  static StyleInheritedVariables* InitialInheritedVariables() {
    return nullptr;
  }

  static StyleInitialData* InitialInitialData() {
    return nullptr;
  }

  static FillLayer InitialMask() {
    return FillLayer(EFillLayerType::kMask, true);
  }

  static CounterDirectiveMap* InitialCounterDirectives() {
    return nullptr;
  }

  static CSSAnimationData* InitialAnimations() {
    return nullptr;
  }

  static CSSTransitionData* InitialTransitions() {
    return nullptr;
  }

  static NinePieceImage InitialMaskBoxImage() {
    return NinePieceImage::MaskDefaults();
  }

  static FloatSize InitialPageSize() {
    return FloatSize();
  }

  static bool InitialOutlineColorIsCurrentColor() {
    return true;
  }

  static bool InitialOutlineStyleIsAuto() {
    return false;
  }

  static StyleColor InitialVisitedLinkTextDecorationColor() {
    return StyleColor::CurrentColor();
  }

  static StyleColor InitialVisitedLinkBackgroundColor() {
    return StyleColor(Color::kTransparent);
  }

  static StyleColor InitialVisitedLinkOutlineColor() {
    return StyleColor::CurrentColor();
  }

  static StyleColor InitialVisitedLinkBorderLeftColor() {
    return StyleColor::CurrentColor();
  }

  static StyleColor InitialVisitedLinkBorderRightColor() {
    return StyleColor::CurrentColor();
  }

  static StyleColor InitialVisitedLinkBorderTopColor() {
    return StyleColor::CurrentColor();
  }

  static StyleColor InitialVisitedLinkBorderBottomColor() {
    return StyleColor::CurrentColor();
  }

  static Vector<String> InitialCallbackSelectors() {
    return Vector<String>();
  }

  static PaintImages* InitialPaintImages() {
    return nullptr;
  }

  static StyleNonInheritedVariables* InitialNonInheritedVariables() {
    return nullptr;
  }

  static EPageSizeType InitialPageSizeType() {
    return EPageSizeType::kAuto;
  }

  static bool InitialHasCurrentOpacityAnimation() {
    return false;
  }

  static bool InitialHasCurrentTransformAnimation() {
    return false;
  }

  static bool InitialHasCurrentFilterAnimation() {
    return false;
  }

  static bool InitialHasCurrentBackdropFilterAnimation() {
    return false;
  }

  static bool InitialIsRunningOpacityAnimationOnCompositor() {
    return false;
  }

  static bool InitialIsRunningTransformAnimationOnCompositor() {
    return false;
  }

  static bool InitialIsRunningFilterAnimationOnCompositor() {
    return false;
  }

  static bool InitialIsRunningBackdropFilterAnimationOnCompositor() {
    return false;
  }

  static bool InitialIsStackingContext() {
    return false;
  }

  static bool InitialRequiresAcceleratedCompositingForExternalReasons() {
    return false;
  }

  static bool InitialHasAuthorBackground() {
    return false;
  }

  static bool InitialHasAuthorBorder() {
    return false;
  }

  static Vector<CSSPropertyID> InitialWillChangeProperties() {
    return Vector<CSSPropertyID>();
  }

  static bool InitialWillChangeContents() {
    return false;
  }

  static bool InitialWillChangeScrollPosition() {
    return false;
  }

  static bool InitialColumnRuleColorIsCurrentColor() {
    return true;
  }

  static StyleColor InitialVisitedLinkColumnRuleColor() {
    return StyleColor::CurrentColor();
  }

  static bool InitialHasAutoColumnWidth() {
    return true;
  }

  static bool InitialHasAutoColumnCount() {
    return true;
  }

  static NamedGridLinesMap InitialNamedGridColumnLines() {
    return NamedGridLinesMap();
  }

  static NamedGridLinesMap InitialNamedGridRowLines() {
    return NamedGridLinesMap();
  }

  static OrderedNamedGridLines InitialOrderedNamedGridColumnLines() {
    return OrderedNamedGridLines();
  }

  static OrderedNamedGridLines InitialOrderedNamedGridRowLines() {
    return OrderedNamedGridLines();
  }

  static NamedGridLinesMap InitialAutoRepeatNamedGridColumnLines() {
    return NamedGridLinesMap();
  }

  static NamedGridLinesMap InitialAutoRepeatNamedGridRowLines() {
    return NamedGridLinesMap();
  }

  static OrderedNamedGridLines InitialAutoRepeatOrderedNamedGridColumnLines() {
    return OrderedNamedGridLines();
  }

  static OrderedNamedGridLines InitialAutoRepeatOrderedNamedGridRowLines() {
    return OrderedNamedGridLines();
  }

  static NamedGridAreaMap InitialNamedGridArea() {
    return NamedGridAreaMap();
  }

  static size_t InitialNamedGridAreaRowCount() {
    return 0;
  }

  static size_t InitialNamedGridAreaColumnCount() {
    return 0;
  }

  static Vector<GridTrackSize> InitialGridAutoRepeatColumns() {
    return Vector<GridTrackSize>();
  }

  static Vector<GridTrackSize> InitialGridAutoRepeatRows() {
    return Vector<GridTrackSize>();
  }

  static size_t InitialGridAutoRepeatColumnsInsertionPoint() {
    return 0;
  }

  static size_t InitialGridAutoRepeatRowsInsertionPoint() {
    return 0;
  }

  static AutoRepeatType InitialGridAutoRepeatColumnsType() {
    return AutoRepeatType::kNoAutoRepeat;
  }

  static AutoRepeatType InitialGridAutoRepeatRowsType() {
    return AutoRepeatType::kNoAutoRepeat;
  }

 private:
  static const FilterOperations& InitialFilterInternal() {
    DEFINE_STATIC_LOCAL(Persistent<FilterOperationsWrapper>, ops,
        (MakeGarbageCollected<FilterOperationsWrapper>()));
    return ops->Operations();
  }
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_STYLE_COMPUTED_STYLE_INITIAL_VALUES_H_
