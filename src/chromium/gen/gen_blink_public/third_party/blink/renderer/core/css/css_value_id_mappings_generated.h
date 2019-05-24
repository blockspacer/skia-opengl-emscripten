// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   core/css/templates/css_value_id_mappings_generated.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/computed_style_field_aliases.json5
//   ../../third_party/blink/renderer/core/css/css_properties.json5
//   ../../third_party/blink/renderer/core/css/css_value_keywords.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_

#include "base/logging.h"
#include "third_party/blink/renderer/core/css_value_keywords.h"
#include "third_party/blink/renderer/core/style/computed_style_base_constants.h"
#include "cc/input/scroll_snap_data.h"
#include "third_party/blink/renderer/core/css/style_color.h"
#include "third_party/blink/renderer/core/scroll/scroll_customization.h"
#include "third_party/blink/renderer/core/style/basic_shapes.h"
#include "third_party/blink/renderer/core/style/clip_path_operation.h"
#include "third_party/blink/renderer/core/style/content_data.h"
#include "third_party/blink/renderer/core/style/gap_length.h"
#include "third_party/blink/renderer/core/style/grid_position.h"
#include "third_party/blink/renderer/core/style/grid_track_size.h"
#include "third_party/blink/renderer/core/style/quotes_data.h"
#include "third_party/blink/renderer/core/style/shadow_list.h"
#include "third_party/blink/renderer/core/style/shape_value.h"
#include "third_party/blink/renderer/core/style/style_content_alignment_data.h"
#include "third_party/blink/renderer/core/style/style_filter_data.h"
#include "third_party/blink/renderer/core/style/style_image.h"
#include "third_party/blink/renderer/core/style/style_offset_rotation.h"
#include "third_party/blink/renderer/core/style/style_reflection.h"
#include "third_party/blink/renderer/core/style/style_self_alignment_data.h"
#include "third_party/blink/renderer/core/style/text_size_adjust.h"
#include "third_party/blink/renderer/core/style/transform_origin.h"
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
#include "third_party/blink/renderer/platform/transforms/rotate_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/scale_transform_operation.h"
#include "third_party/blink/renderer/platform/transforms/transform_operations.h"
#include "third_party/blink/renderer/platform/transforms/translate_transform_operation.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

// Do not use these functions directly, use the non-generated versions
// in CSSValueMappings.h

namespace detail {

template <class T>
T cssValueIDToPlatformEnumGenerated(CSSValueID);


template <>
inline EVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kHidden:
      return EVisibility::kHidden;
    default:
      DCHECK_GE(v, CSSValueID::kVisible);
      DCHECK_LE(v, CSSValueID::kCollapse);
      return static_cast<EVisibility>(static_cast<int>(v) - static_cast<int>(CSSValueID::kVisible) + static_cast<int>(EVisibility::kVisible));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EVisibility v) {
  switch (v) {
    case EVisibility::kHidden:
      return CSSValueID::kHidden;
    default:
      DCHECK_GE(v, EVisibility::kVisible);
      DCHECK_LE(v, EVisibility::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EVisibility::kVisible) + static_cast<int>(CSSValueID::kVisible));
  }
}


template <>
inline EOverflowAnchor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverflowAnchor::kAuto;
    case CSSValueID::kVisible:
      return EOverflowAnchor::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EOverflowAnchor>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EOverflowAnchor::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowAnchor v) {
  switch (v) {
    case EOverflowAnchor::kAuto:
      return CSSValueID::kAuto;
    case EOverflowAnchor::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EOverflowAnchor::kNone);
      DCHECK_LE(v, EOverflowAnchor::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowAnchor::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EBoxDecorationBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kClone);
  DCHECK_LE(v, CSSValueID::kSlice);
  return static_cast<EBoxDecorationBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kClone) + static_cast<int>(EBoxDecorationBreak::kClone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDecorationBreak v) {
  DCHECK_GE(v, EBoxDecorationBreak::kClone);
  DCHECK_LE(v, EBoxDecorationBreak::kSlice);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDecorationBreak::kClone) + static_cast<int>(CSSValueID::kClone));
}


template <>
inline LineBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return LineBreak::kNormal;
    case CSSValueID::kAuto:
      return LineBreak::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kLoose);
      DCHECK_LE(v, CSSValueID::kAfterWhiteSpace);
      return static_cast<LineBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLoose) + static_cast<int>(LineBreak::kLoose));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(LineBreak v) {
  switch (v) {
    case LineBreak::kNormal:
      return CSSValueID::kNormal;
    case LineBreak::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, LineBreak::kLoose);
      DCHECK_LE(v, LineBreak::kAfterWhiteSpace);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(LineBreak::kLoose) + static_cast<int>(CSSValueID::kLoose));
  }
}


template <>
inline TextJustify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return TextJustify::kNone;
    case CSSValueID::kAuto:
      return TextJustify::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kInterWord);
      DCHECK_LE(v, CSSValueID::kDistribute);
      return static_cast<TextJustify>(static_cast<int>(v) - static_cast<int>(CSSValueID::kInterWord) + static_cast<int>(TextJustify::kInterWord));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextJustify v) {
  switch (v) {
    case TextJustify::kNone:
      return CSSValueID::kNone;
    case TextJustify::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, TextJustify::kInterWord);
      DCHECK_LE(v, TextJustify::kDistribute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextJustify::kInterWord) + static_cast<int>(CSSValueID::kInterWord));
  }
}


template <>
inline EColumnSpan cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return EColumnSpan::kAll;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EColumnSpan>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EColumnSpan::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnSpan v) {
  switch (v) {
    case EColumnSpan::kAll:
      return CSSValueID::kAll;
    default:
      DCHECK_GE(v, EColumnSpan::kNone);
      DCHECK_LE(v, EColumnSpan::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnSpan::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EPointerEvents cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EPointerEvents::kNone;
    case CSSValueID::kAll:
      return EPointerEvents::kAll;
    case CSSValueID::kAuto:
      return EPointerEvents::kAuto;
    case CSSValueID::kVisible:
      return EPointerEvents::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kVisiblepainted);
      DCHECK_LE(v, CSSValueID::kBoundingBox);
      return static_cast<EPointerEvents>(static_cast<int>(v) - static_cast<int>(CSSValueID::kVisiblepainted) + static_cast<int>(EPointerEvents::kVisiblepainted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPointerEvents v) {
  switch (v) {
    case EPointerEvents::kNone:
      return CSSValueID::kNone;
    case EPointerEvents::kAll:
      return CSSValueID::kAll;
    case EPointerEvents::kAuto:
      return CSSValueID::kAuto;
    case EPointerEvents::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EPointerEvents::kVisiblepainted);
      DCHECK_LE(v, EPointerEvents::kBoundingBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPointerEvents::kVisiblepainted) + static_cast<int>(CSSValueID::kVisiblepainted));
  }
}


template <>
inline ETextOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kClip);
  DCHECK_LE(v, CSSValueID::kEllipsis);
  return static_cast<ETextOverflow>(static_cast<int>(v) - static_cast<int>(CSSValueID::kClip) + static_cast<int>(ETextOverflow::kClip));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOverflow v) {
  DCHECK_GE(v, ETextOverflow::kClip);
  DCHECK_LE(v, ETextOverflow::kEllipsis);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOverflow::kClip) + static_cast<int>(CSSValueID::kClip));
}


template <>
inline EColumnFill cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBalance:
      return EColumnFill::kBalance;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EColumnFill>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EColumnFill::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EColumnFill v) {
  switch (v) {
    case EColumnFill::kBalance:
      return CSSValueID::kBalance;
    default:
      DCHECK_GE(v, EColumnFill::kAuto);
      DCHECK_LE(v, EColumnFill::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EColumnFill::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline TextDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kLtr);
  DCHECK_LE(v, CSSValueID::kRtl);
  return static_cast<TextDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLtr) + static_cast<int>(TextDirection::kLtr));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDirection v) {
  DCHECK_GE(v, TextDirection::kLtr);
  DCHECK_LE(v, TextDirection::kRtl);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(TextDirection::kLtr) + static_cast<int>(CSSValueID::kLtr));
}


template <>
inline EBreakInside cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAvoid:
      return EBreakInside::kAvoid;
    case CSSValueID::kAvoidPage:
      return EBreakInside::kAvoidPage;
    case CSSValueID::kAvoidColumn:
      return EBreakInside::kAvoidColumn;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EBreakInside>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EBreakInside::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakInside v) {
  switch (v) {
    case EBreakInside::kAvoid:
      return CSSValueID::kAvoid;
    case EBreakInside::kAvoidPage:
      return CSSValueID::kAvoidPage;
    case EBreakInside::kAvoidColumn:
      return CSSValueID::kAvoidColumn;
    default:
      DCHECK_GE(v, EBreakInside::kAuto);
      DCHECK_LE(v, EBreakInside::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakInside::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EFloat cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EFloat::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kInlineEnd);
      return static_cast<EFloat>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(EFloat::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFloat v) {
  switch (v) {
    case EFloat::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, EFloat::kLeft);
      DCHECK_LE(v, EFloat::kInlineEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFloat::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline EOrder cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kLogical);
  DCHECK_LE(v, CSSValueID::kVisual);
  return static_cast<EOrder>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLogical) + static_cast<int>(EOrder::kLogical));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOrder v) {
  DCHECK_GE(v, EOrder::kLogical);
  DCHECK_LE(v, EOrder::kVisual);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOrder::kLogical) + static_cast<int>(CSSValueID::kLogical));
}


template <>
inline EImageRendering cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EImageRendering::kAuto;
    case CSSValueID::kOptimizespeed:
      return EImageRendering::kOptimizespeed;
    default:
      DCHECK_GE(v, CSSValueID::kOptimizequality);
      DCHECK_LE(v, CSSValueID::kWebkitOptimizeContrast);
      return static_cast<EImageRendering>(static_cast<int>(v) - static_cast<int>(CSSValueID::kOptimizequality) + static_cast<int>(EImageRendering::kOptimizequality));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EImageRendering v) {
  switch (v) {
    case EImageRendering::kAuto:
      return CSSValueID::kAuto;
    case EImageRendering::kOptimizespeed:
      return CSSValueID::kOptimizespeed;
    default:
      DCHECK_GE(v, EImageRendering::kOptimizequality);
      DCHECK_LE(v, EImageRendering::kWebkitOptimizeContrast);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EImageRendering::kOptimizequality) + static_cast<int>(CSSValueID::kOptimizequality));
  }
}


template <>
inline EUserModify cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kReadOnly);
  DCHECK_LE(v, CSSValueID::kReadWritePlaintextOnly);
  return static_cast<EUserModify>(static_cast<int>(v) - static_cast<int>(CSSValueID::kReadOnly) + static_cast<int>(EUserModify::kReadOnly));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserModify v) {
  DCHECK_GE(v, EUserModify::kReadOnly);
  DCHECK_LE(v, EUserModify::kReadWritePlaintextOnly);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserModify::kReadOnly) + static_cast<int>(CSSValueID::kReadOnly));
}


template <>
inline EMarginCollapse cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kSeparate:
      return EMarginCollapse::kSeparate;
    case CSSValueID::kDiscard:
      return EMarginCollapse::kDiscard;
    default:
      DCHECK_GE(v, CSSValueID::kCollapse);
      DCHECK_LE(v, CSSValueID::kCollapse);
      return static_cast<EMarginCollapse>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCollapse) + static_cast<int>(EMarginCollapse::kCollapse));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EMarginCollapse v) {
  switch (v) {
    case EMarginCollapse::kSeparate:
      return CSSValueID::kSeparate;
    case EMarginCollapse::kDiscard:
      return CSSValueID::kDiscard;
    default:
      DCHECK_GE(v, EMarginCollapse::kCollapse);
      DCHECK_LE(v, EMarginCollapse::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EMarginCollapse::kCollapse) + static_cast<int>(CSSValueID::kCollapse));
  }
}


template <>
inline EWordBreak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return EWordBreak::kNormal;
    default:
      DCHECK_GE(v, CSSValueID::kBreakAll);
      DCHECK_LE(v, CSSValueID::kBreakWord);
      return static_cast<EWordBreak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kBreakAll) + static_cast<int>(EWordBreak::kBreakAll));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWordBreak v) {
  switch (v) {
    case EWordBreak::kNormal:
      return CSSValueID::kNormal;
    default:
      DCHECK_GE(v, EWordBreak::kBreakAll);
      DCHECK_LE(v, EWordBreak::kBreakWord);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EWordBreak::kBreakAll) + static_cast<int>(CSSValueID::kBreakAll));
  }
}


template <>
inline EOverscrollBehavior cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverscrollBehavior::kAuto;
    case CSSValueID::kContain:
      return EOverscrollBehavior::kContain;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EOverscrollBehavior>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EOverscrollBehavior::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverscrollBehavior v) {
  switch (v) {
    case EOverscrollBehavior::kAuto:
      return CSSValueID::kAuto;
    case EOverscrollBehavior::kContain:
      return CSSValueID::kContain;
    default:
      DCHECK_GE(v, EOverscrollBehavior::kNone);
      DCHECK_LE(v, EOverscrollBehavior::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverscrollBehavior::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EFlexWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNowrap:
      return EFlexWrap::kNowrap;
    default:
      DCHECK_GE(v, CSSValueID::kWrap);
      DCHECK_LE(v, CSSValueID::kWrapReverse);
      return static_cast<EFlexWrap>(static_cast<int>(v) - static_cast<int>(CSSValueID::kWrap) + static_cast<int>(EFlexWrap::kWrap));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexWrap v) {
  switch (v) {
    case EFlexWrap::kNowrap:
      return CSSValueID::kNowrap;
    default:
      DCHECK_GE(v, EFlexWrap::kWrap);
      DCHECK_LE(v, EFlexWrap::kWrapReverse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexWrap::kWrap) + static_cast<int>(CSSValueID::kWrap));
  }
}


template <>
inline EPrintColorAdjust cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kEconomy);
  DCHECK_LE(v, CSSValueID::kExact);
  return static_cast<EPrintColorAdjust>(static_cast<int>(v) - static_cast<int>(CSSValueID::kEconomy) + static_cast<int>(EPrintColorAdjust::kEconomy));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPrintColorAdjust v) {
  DCHECK_GE(v, EPrintColorAdjust::kEconomy);
  DCHECK_LE(v, EPrintColorAdjust::kExact);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPrintColorAdjust::kEconomy) + static_cast<int>(CSSValueID::kEconomy));
}


template <>
inline EBoxDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kReverse:
      return EBoxDirection::kReverse;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EBoxDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EBoxDirection::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxDirection v) {
  switch (v) {
    case EBoxDirection::kReverse:
      return CSSValueID::kReverse;
    default:
      DCHECK_GE(v, EBoxDirection::kNormal);
      DCHECK_LE(v, EBoxDirection::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxDirection::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline ETransformStyle3D cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kFlat);
  DCHECK_LE(v, CSSValueID::kPreserve3d);
  return static_cast<ETransformStyle3D>(static_cast<int>(v) - static_cast<int>(CSSValueID::kFlat) + static_cast<int>(ETransformStyle3D::kFlat));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformStyle3D v) {
  DCHECK_GE(v, ETransformStyle3D::kFlat);
  DCHECK_LE(v, ETransformStyle3D::kPreserve3d);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformStyle3D::kFlat) + static_cast<int>(CSSValueID::kFlat));
}


template <>
inline ETextOrientation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kUpright:
      return ETextOrientation::kUpright;
    default:
      DCHECK_GE(v, CSSValueID::kMixed);
      DCHECK_LE(v, CSSValueID::kSideways);
      return static_cast<ETextOrientation>(static_cast<int>(v) - static_cast<int>(CSSValueID::kMixed) + static_cast<int>(ETextOrientation::kMixed));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextOrientation v) {
  switch (v) {
    case ETextOrientation::kUpright:
      return CSSValueID::kUpright;
    default:
      DCHECK_GE(v, ETextOrientation::kMixed);
      DCHECK_LE(v, ETextOrientation::kSideways);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextOrientation::kMixed) + static_cast<int>(CSSValueID::kMixed));
  }
}


template <>
inline EBoxSizing cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kContentBox:
      return EBoxSizing::kContentBox;
    default:
      DCHECK_GE(v, CSSValueID::kBorderBox);
      DCHECK_LE(v, CSSValueID::kBorderBox);
      return static_cast<EBoxSizing>(static_cast<int>(v) - static_cast<int>(CSSValueID::kBorderBox) + static_cast<int>(EBoxSizing::kBorderBox));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxSizing v) {
  switch (v) {
    case EBoxSizing::kContentBox:
      return CSSValueID::kContentBox;
    default:
      DCHECK_GE(v, EBoxSizing::kBorderBox);
      DCHECK_LE(v, EBoxSizing::kBorderBox);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxSizing::kBorderBox) + static_cast<int>(CSSValueID::kBorderBox));
  }
}


template <>
inline ETextAlign cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kLeft:
      return ETextAlign::kLeft;
    case CSSValueID::kRight:
      return ETextAlign::kRight;
    case CSSValueID::kStart:
      return ETextAlign::kStart;
    case CSSValueID::kEnd:
      return ETextAlign::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kCenter);
      DCHECK_LE(v, CSSValueID::kWebkitCenter);
      return static_cast<ETextAlign>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCenter) + static_cast<int>(ETextAlign::kCenter));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlign v) {
  switch (v) {
    case ETextAlign::kLeft:
      return CSSValueID::kLeft;
    case ETextAlign::kRight:
      return CSSValueID::kRight;
    case ETextAlign::kStart:
      return CSSValueID::kStart;
    case ETextAlign::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, ETextAlign::kCenter);
      DCHECK_LE(v, ETextAlign::kWebkitCenter);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlign::kCenter) + static_cast<int>(CSSValueID::kCenter));
  }
}


template <>
inline Hyphens cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return Hyphens::kAuto;
    case CSSValueID::kManual:
      return Hyphens::kManual;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<Hyphens>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(Hyphens::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(Hyphens v) {
  switch (v) {
    case Hyphens::kAuto:
      return CSSValueID::kAuto;
    case Hyphens::kManual:
      return CSSValueID::kManual;
    default:
      DCHECK_GE(v, Hyphens::kNone);
      DCHECK_LE(v, Hyphens::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(Hyphens::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}

template <>
inline EWhiteSpace cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EWhiteSpace::kNone;
    case CSSValueID::kNormal:
      return EWhiteSpace::kNormal;
    case CSSValueID::kPre:
      return EWhiteSpace::kPre;
    case CSSValueID::kPreWrap:
      return EWhiteSpace::kPreWrap;
    case CSSValueID::kPreLine:
      return EWhiteSpace::kPreLine;
    case CSSValueID::kNowrap:
      return EWhiteSpace::kNowrap;
    case CSSValueID::kWebkitNowrap:
      return EWhiteSpace::kWebkitNowrap;
    case CSSValueID::kBreakSpaces:
      return EWhiteSpace::kBreakSpaces;
    default:
      NOTREACHED();
      return EWhiteSpace::kNormal;
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EWhiteSpace v) {
  switch (v) {
    case EWhiteSpace::kNone:
      return CSSValueID::kNone;
    case EWhiteSpace::kNormal:
      return CSSValueID::kNormal;
    case EWhiteSpace::kPre:
      return CSSValueID::kPre;
    case EWhiteSpace::kPreWrap:
      return CSSValueID::kPreWrap;
    case EWhiteSpace::kPreLine:
      return CSSValueID::kPreLine;
    case EWhiteSpace::kNowrap:
      return CSSValueID::kNowrap;
    case EWhiteSpace::kWebkitNowrap:
      return CSSValueID::kWebkitNowrap;
    case EWhiteSpace::kBreakSpaces:
      return CSSValueID::kBreakSpaces;
    default:
      NOTREACHED();
      return CSSValueID::kNone;
  }
}

template <>
inline ETextTransform cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ETextTransform::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kCapitalize);
      DCHECK_LE(v, CSSValueID::kLowercase);
      return static_cast<ETextTransform>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCapitalize) + static_cast<int>(ETextTransform::kCapitalize));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextTransform v) {
  switch (v) {
    case ETextTransform::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, ETextTransform::kCapitalize);
      DCHECK_LE(v, ETextTransform::kLowercase);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextTransform::kCapitalize) + static_cast<int>(CSSValueID::kCapitalize));
  }
}


template <>
inline EBreakBetween cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kLeft:
      return EBreakBetween::kLeft;
    case CSSValueID::kRight:
      return EBreakBetween::kRight;
    case CSSValueID::kAuto:
      return EBreakBetween::kAuto;
    case CSSValueID::kAvoid:
      return EBreakBetween::kAvoid;
    case CSSValueID::kColumn:
      return EBreakBetween::kColumn;
    default:
      DCHECK_GE(v, CSSValueID::kAvoidPage);
      DCHECK_LE(v, CSSValueID::kAvoidColumn);
      return static_cast<EBreakBetween>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAvoidPage) + static_cast<int>(EBreakBetween::kAvoidPage));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBreakBetween v) {
  switch (v) {
    case EBreakBetween::kLeft:
      return CSSValueID::kLeft;
    case EBreakBetween::kRight:
      return CSSValueID::kRight;
    case EBreakBetween::kAuto:
      return CSSValueID::kAuto;
    case EBreakBetween::kAvoid:
      return CSSValueID::kAvoid;
    case EBreakBetween::kColumn:
      return CSSValueID::kColumn;
    default:
      DCHECK_GE(v, EBreakBetween::kAvoidPage);
      DCHECK_LE(v, EBreakBetween::kAvoidColumn);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBreakBetween::kAvoidPage) + static_cast<int>(CSSValueID::kAvoidPage));
  }
}


template <>
inline EScrollSnapStop cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAlways:
      return EScrollSnapStop::kAlways;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EScrollSnapStop>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EScrollSnapStop::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EScrollSnapStop v) {
  switch (v) {
    case EScrollSnapStop::kAlways:
      return CSSValueID::kAlways;
    default:
      DCHECK_GE(v, EScrollSnapStop::kNormal);
      DCHECK_LE(v, EScrollSnapStop::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EScrollSnapStop::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EBoxPack cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kStart:
      return EBoxPack::kStart;
    case CSSValueID::kEnd:
      return EBoxPack::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kCenter);
      DCHECK_LE(v, CSSValueID::kJustify);
      return static_cast<EBoxPack>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCenter) + static_cast<int>(EBoxPack::kCenter));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxPack v) {
  switch (v) {
    case EBoxPack::kStart:
      return CSSValueID::kStart;
    case EBoxPack::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, EBoxPack::kCenter);
      DCHECK_LE(v, EBoxPack::kJustify);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxPack::kCenter) + static_cast<int>(CSSValueID::kCenter));
  }
}


template <>
inline EListStylePosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kOutside);
  DCHECK_LE(v, CSSValueID::kInside);
  return static_cast<EListStylePosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kOutside) + static_cast<int>(EListStylePosition::kOutside));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EListStylePosition v) {
  DCHECK_GE(v, EListStylePosition::kOutside);
  DCHECK_LE(v, EListStylePosition::kInside);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EListStylePosition::kOutside) + static_cast<int>(CSSValueID::kOutside));
}


template <>
inline ETextAlignLast cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kCenter:
      return ETextAlignLast::kCenter;
    case CSSValueID::kJustify:
      return ETextAlignLast::kJustify;
    case CSSValueID::kAuto:
      return ETextAlignLast::kAuto;
    case CSSValueID::kStart:
      return ETextAlignLast::kStart;
    case CSSValueID::kEnd:
      return ETextAlignLast::kEnd;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kRight);
      return static_cast<ETextAlignLast>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(ETextAlignLast::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextAlignLast v) {
  switch (v) {
    case ETextAlignLast::kCenter:
      return CSSValueID::kCenter;
    case ETextAlignLast::kJustify:
      return CSSValueID::kJustify;
    case ETextAlignLast::kAuto:
      return CSSValueID::kAuto;
    case ETextAlignLast::kStart:
      return CSSValueID::kStart;
    case ETextAlignLast::kEnd:
      return CSSValueID::kEnd;
    default:
      DCHECK_GE(v, ETextAlignLast::kLeft);
      DCHECK_LE(v, ETextAlignLast::kRight);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextAlignLast::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline EBorderStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kNone);
  DCHECK_LE(v, CSSValueID::kDouble);
  return static_cast<EBorderStyle>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EBorderStyle::kNone));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderStyle v) {
  DCHECK_GE(v, EBorderStyle::kNone);
  DCHECK_LE(v, EBorderStyle::kDouble);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderStyle::kNone) + static_cast<int>(CSSValueID::kNone));
}


template <>
inline ETextDecorationSkipInk cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return ETextDecorationSkipInk::kAuto;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<ETextDecorationSkipInk>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(ETextDecorationSkipInk::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationSkipInk v) {
  switch (v) {
    case ETextDecorationSkipInk::kAuto:
      return CSSValueID::kAuto;
    default:
      DCHECK_GE(v, ETextDecorationSkipInk::kNone);
      DCHECK_LE(v, ETextDecorationSkipInk::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationSkipInk::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EDraggableRegionMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EDraggableRegionMode::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kDrag);
      DCHECK_LE(v, CSSValueID::kNoDrag);
      return static_cast<EDraggableRegionMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDrag) + static_cast<int>(EDraggableRegionMode::kDrag));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EDraggableRegionMode v) {
  switch (v) {
    case EDraggableRegionMode::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, EDraggableRegionMode::kDrag);
      DCHECK_LE(v, EDraggableRegionMode::kNoDrag);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EDraggableRegionMode::kDrag) + static_cast<int>(CSSValueID::kDrag));
  }
}

template <>
inline TextDecoration cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return TextDecoration::kNone;
    case CSSValueID::kUnderline:
      return TextDecoration::kUnderline;
    case CSSValueID::kOverline:
      return TextDecoration::kOverline;
    case CSSValueID::kLineThrough:
      return TextDecoration::kLineThrough;
    case CSSValueID::kBlink:
      return TextDecoration::kBlink;
    default:
      NOTREACHED();
      return TextDecoration::kNone;
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(TextDecoration v) {
  switch (v) {
    case TextDecoration::kNone:
      return CSSValueID::kNone;
    case TextDecoration::kUnderline:
      return CSSValueID::kUnderline;
    case TextDecoration::kOverline:
      return CSSValueID::kOverline;
    case TextDecoration::kLineThrough:
      return CSSValueID::kLineThrough;
    case TextDecoration::kBlink:
      return CSSValueID::kBlink;
    default:
      NOTREACHED();
      return CSSValueID::kNone;
  }
}

template <>
inline ETransformBox cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kFillBox);
  DCHECK_LE(v, CSSValueID::kViewBox);
  return static_cast<ETransformBox>(static_cast<int>(v) - static_cast<int>(CSSValueID::kFillBox) + static_cast<int>(ETransformBox::kFillBox));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETransformBox v) {
  DCHECK_GE(v, ETransformBox::kFillBox);
  DCHECK_LE(v, ETransformBox::kViewBox);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETransformBox::kFillBox) + static_cast<int>(CSSValueID::kFillBox));
}


template <>
inline ECursor cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ECursor::kNone;
    case CSSValueID::kCopy:
      return ECursor::kCopy;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kGrabbing);
      return static_cast<ECursor>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(ECursor::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECursor v) {
  switch (v) {
    case ECursor::kNone:
      return CSSValueID::kNone;
    case ECursor::kCopy:
      return CSSValueID::kCopy;
    default:
      DCHECK_GE(v, ECursor::kAuto);
      DCHECK_LE(v, ECursor::kGrabbing);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECursor::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EOverflowWrap cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBreakWord:
      return EOverflowWrap::kBreakWord;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<EOverflowWrap>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(EOverflowWrap::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflowWrap v) {
  switch (v) {
    case EOverflowWrap::kBreakWord:
      return CSSValueID::kBreakWord;
    default:
      DCHECK_GE(v, EOverflowWrap::kNormal);
      DCHECK_LE(v, EOverflowWrap::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflowWrap::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline ETextCombine cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return ETextCombine::kAll;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<ETextCombine>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(ETextCombine::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextCombine v) {
  switch (v) {
    case ETextCombine::kAll:
      return CSSValueID::kAll;
    default:
      DCHECK_GE(v, ETextCombine::kNone);
      DCHECK_LE(v, ETextCombine::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextCombine::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline ETextDecorationStyle cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kWavy:
      return ETextDecorationStyle::kWavy;
    default:
      DCHECK_GE(v, CSSValueID::kDotted);
      DCHECK_LE(v, CSSValueID::kDouble);
      return static_cast<ETextDecorationStyle>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDotted) + static_cast<int>(ETextDecorationStyle::kDotted));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextDecorationStyle v) {
  switch (v) {
    case ETextDecorationStyle::kWavy:
      return CSSValueID::kWavy;
    default:
      DCHECK_GE(v, ETextDecorationStyle::kDotted);
      DCHECK_LE(v, ETextDecorationStyle::kDouble);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextDecorationStyle::kDotted) + static_cast<int>(CSSValueID::kDotted));
  }
}


template <>
inline EOverflow cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EOverflow::kAuto;
    case CSSValueID::kVisible:
      return EOverflow::kVisible;
    case CSSValueID::kOverlay:
      return EOverflow::kOverlay;
    case CSSValueID::kScroll:
      return EOverflow::kScroll;
    default:
      DCHECK_GE(v, CSSValueID::kHidden);
      DCHECK_LE(v, CSSValueID::kHidden);
      return static_cast<EOverflow>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHidden) + static_cast<int>(EOverflow::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EOverflow v) {
  switch (v) {
    case EOverflow::kAuto:
      return CSSValueID::kAuto;
    case EOverflow::kVisible:
      return CSSValueID::kVisible;
    case EOverflow::kOverlay:
      return CSSValueID::kOverlay;
    case EOverflow::kScroll:
      return CSSValueID::kScroll;
    default:
      DCHECK_GE(v, EOverflow::kHidden);
      DCHECK_LE(v, EOverflow::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EOverflow::kHidden) + static_cast<int>(CSSValueID::kHidden));
  }
}


template <>
inline ECaptionSide cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kTop);
  DCHECK_LE(v, CSSValueID::kBottom);
  return static_cast<ECaptionSide>(static_cast<int>(v) - static_cast<int>(CSSValueID::kTop) + static_cast<int>(ECaptionSide::kTop));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ECaptionSide v) {
  DCHECK_GE(v, ECaptionSide::kTop);
  DCHECK_LE(v, ECaptionSide::kBottom);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ECaptionSide::kTop) + static_cast<int>(CSSValueID::kTop));
}


template <>
inline EEmptyCells cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kShow:
      return EEmptyCells::kShow;
    default:
      DCHECK_GE(v, CSSValueID::kHide);
      DCHECK_LE(v, CSSValueID::kHide);
      return static_cast<EEmptyCells>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHide) + static_cast<int>(EEmptyCells::kHide));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EEmptyCells v) {
  switch (v) {
    case EEmptyCells::kShow:
      return CSSValueID::kShow;
    default:
      DCHECK_GE(v, EEmptyCells::kHide);
      DCHECK_LE(v, EEmptyCells::kHide);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EEmptyCells::kHide) + static_cast<int>(CSSValueID::kHide));
  }
}


template <>
inline WritingMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kHorizontalTb);
  DCHECK_LE(v, CSSValueID::kVerticalLr);
  return static_cast<WritingMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHorizontalTb) + static_cast<int>(WritingMode::kHorizontalTb));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(WritingMode v) {
  DCHECK_GE(v, WritingMode::kHorizontalTb);
  DCHECK_LE(v, WritingMode::kVerticalLr);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(WritingMode::kHorizontalTb) + static_cast<int>(CSSValueID::kHorizontalTb));
}


template <>
inline ETextSecurity cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ETextSecurity::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kDisc);
      DCHECK_LE(v, CSSValueID::kSquare);
      return static_cast<ETextSecurity>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDisc) + static_cast<int>(ETextSecurity::kDisc));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETextSecurity v) {
  switch (v) {
    case ETextSecurity::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, ETextSecurity::kDisc);
      DCHECK_LE(v, ETextSecurity::kSquare);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETextSecurity::kDisc) + static_cast<int>(CSSValueID::kDisc));
  }
}


template <>
inline BlendMode cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNormal:
      return BlendMode::kNormal;
    case CSSValueID::kOverlay:
      return BlendMode::kOverlay;
    case CSSValueID::kMultiply:
      return BlendMode::kMultiply;
    case CSSValueID::kScreen:
      return BlendMode::kScreen;
    default:
      DCHECK_GE(v, CSSValueID::kDarken);
      DCHECK_LE(v, CSSValueID::kLuminosity);
      return static_cast<BlendMode>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDarken) + static_cast<int>(BlendMode::kDarken));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(BlendMode v) {
  switch (v) {
    case BlendMode::kNormal:
      return CSSValueID::kNormal;
    case BlendMode::kOverlay:
      return CSSValueID::kOverlay;
    case BlendMode::kMultiply:
      return CSSValueID::kMultiply;
    case BlendMode::kScreen:
      return CSSValueID::kScreen;
    default:
      DCHECK_GE(v, BlendMode::kDarken);
      DCHECK_LE(v, BlendMode::kLuminosity);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(BlendMode::kDarken) + static_cast<int>(CSSValueID::kDarken));
  }
}


template <>
inline ESpeak cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return ESpeak::kNone;
    case CSSValueID::kNormal:
      return ESpeak::kNormal;
    default:
      DCHECK_GE(v, CSSValueID::kSpellOut);
      DCHECK_LE(v, CSSValueID::kNoPunctuation);
      return static_cast<ESpeak>(static_cast<int>(v) - static_cast<int>(CSSValueID::kSpellOut) + static_cast<int>(ESpeak::kSpellOut));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ESpeak v) {
  switch (v) {
    case ESpeak::kNone:
      return CSSValueID::kNone;
    case ESpeak::kNormal:
      return CSSValueID::kNormal;
    default:
      DCHECK_GE(v, ESpeak::kSpellOut);
      DCHECK_LE(v, ESpeak::kNoPunctuation);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ESpeak::kSpellOut) + static_cast<int>(CSSValueID::kSpellOut));
  }
}


template <>
inline EResize cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EResize::kNone;
    case CSSValueID::kBoth:
      return EResize::kBoth;
    case CSSValueID::kHorizontal:
      return EResize::kHorizontal;
    case CSSValueID::kVertical:
      return EResize::kVertical;
    default:
      DCHECK_GE(v, CSSValueID::kInline);
      DCHECK_LE(v, CSSValueID::kBlock);
      return static_cast<EResize>(static_cast<int>(v) - static_cast<int>(CSSValueID::kInline) + static_cast<int>(EResize::kInline));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EResize v) {
  switch (v) {
    case EResize::kNone:
      return CSSValueID::kNone;
    case EResize::kBoth:
      return CSSValueID::kBoth;
    case EResize::kHorizontal:
      return CSSValueID::kHorizontal;
    case EResize::kVertical:
      return CSSValueID::kVertical;
    default:
      DCHECK_GE(v, EResize::kInline);
      DCHECK_LE(v, EResize::kBlock);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EResize::kInline) + static_cast<int>(CSSValueID::kInline));
  }
}


template <>
inline UnicodeBidi cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBidiOverride:
      return UnicodeBidi::kBidiOverride;
    case CSSValueID::kEmbed:
      return UnicodeBidi::kEmbed;
    case CSSValueID::kIsolate:
      return UnicodeBidi::kIsolate;
    case CSSValueID::kIsolateOverride:
      return UnicodeBidi::kIsolateOverride;
    case CSSValueID::kPlaintext:
      return UnicodeBidi::kPlaintext;
    default:
      DCHECK_GE(v, CSSValueID::kNormal);
      DCHECK_LE(v, CSSValueID::kNormal);
      return static_cast<UnicodeBidi>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNormal) + static_cast<int>(UnicodeBidi::kNormal));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(UnicodeBidi v) {
  switch (v) {
    case UnicodeBidi::kBidiOverride:
      return CSSValueID::kBidiOverride;
    case UnicodeBidi::kEmbed:
      return CSSValueID::kEmbed;
    case UnicodeBidi::kIsolate:
      return CSSValueID::kIsolate;
    case UnicodeBidi::kIsolateOverride:
      return CSSValueID::kIsolateOverride;
    case UnicodeBidi::kPlaintext:
      return CSSValueID::kPlaintext;
    default:
      DCHECK_GE(v, UnicodeBidi::kNormal);
      DCHECK_LE(v, UnicodeBidi::kNormal);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(UnicodeBidi::kNormal) + static_cast<int>(CSSValueID::kNormal));
  }
}


template <>
inline EPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kFixed:
      return EPosition::kFixed;
    case CSSValueID::kRelative:
      return EPosition::kRelative;
    case CSSValueID::kStatic:
      return EPosition::kStatic;
    case CSSValueID::kSticky:
      return EPosition::kSticky;
    default:
      DCHECK_GE(v, CSSValueID::kAbsolute);
      DCHECK_LE(v, CSSValueID::kAbsolute);
      return static_cast<EPosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAbsolute) + static_cast<int>(EPosition::kAbsolute));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EPosition v) {
  switch (v) {
    case EPosition::kFixed:
      return CSSValueID::kFixed;
    case EPosition::kRelative:
      return CSSValueID::kRelative;
    case EPosition::kStatic:
      return CSSValueID::kStatic;
    case EPosition::kSticky:
      return CSSValueID::kSticky;
    default:
      DCHECK_GE(v, EPosition::kAbsolute);
      DCHECK_LE(v, EPosition::kAbsolute);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EPosition::kAbsolute) + static_cast<int>(CSSValueID::kAbsolute));
  }
}


template <>
inline EBoxAlignment cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kBaseline:
      return EBoxAlignment::kBaseline;
    case CSSValueID::kCenter:
      return EBoxAlignment::kCenter;
    default:
      DCHECK_GE(v, CSSValueID::kStretch);
      DCHECK_LE(v, CSSValueID::kEnd);
      return static_cast<EBoxAlignment>(static_cast<int>(v) - static_cast<int>(CSSValueID::kStretch) + static_cast<int>(EBoxAlignment::kStretch));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxAlignment v) {
  switch (v) {
    case EBoxAlignment::kBaseline:
      return CSSValueID::kBaseline;
    case EBoxAlignment::kCenter:
      return CSSValueID::kCenter;
    default:
      DCHECK_GE(v, EBoxAlignment::kStretch);
      DCHECK_LE(v, EBoxAlignment::kEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxAlignment::kStretch) + static_cast<int>(CSSValueID::kStretch));
  }
}


template <>
inline ETableLayout cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kFixed:
      return ETableLayout::kFixed;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<ETableLayout>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(ETableLayout::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(ETableLayout v) {
  switch (v) {
    case ETableLayout::kFixed:
      return CSSValueID::kFixed;
    default:
      DCHECK_GE(v, ETableLayout::kAuto);
      DCHECK_LE(v, ETableLayout::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(ETableLayout::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EBoxOrient cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kHorizontal);
  DCHECK_LE(v, CSSValueID::kVertical);
  return static_cast<EBoxOrient>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHorizontal) + static_cast<int>(EBoxOrient::kHorizontal));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBoxOrient v) {
  DCHECK_GE(v, EBoxOrient::kHorizontal);
  DCHECK_LE(v, EBoxOrient::kVertical);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBoxOrient::kHorizontal) + static_cast<int>(CSSValueID::kHorizontal));
}


template <>
inline EObjectFit cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EObjectFit::kNone;
    case CSSValueID::kFill:
      return EObjectFit::kFill;
    case CSSValueID::kScaleDown:
      return EObjectFit::kScaleDown;
    default:
      DCHECK_GE(v, CSSValueID::kContain);
      DCHECK_LE(v, CSSValueID::kCover);
      return static_cast<EObjectFit>(static_cast<int>(v) - static_cast<int>(CSSValueID::kContain) + static_cast<int>(EObjectFit::kContain));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EObjectFit v) {
  switch (v) {
    case EObjectFit::kNone:
      return CSSValueID::kNone;
    case EObjectFit::kFill:
      return CSSValueID::kFill;
    case EObjectFit::kScaleDown:
      return CSSValueID::kScaleDown;
    default:
      DCHECK_GE(v, EObjectFit::kContain);
      DCHECK_LE(v, EObjectFit::kCover);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EObjectFit::kContain) + static_cast<int>(CSSValueID::kContain));
  }
}


template <>
inline EFlexDirection cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kRow);
  DCHECK_LE(v, CSSValueID::kColumnReverse);
  return static_cast<EFlexDirection>(static_cast<int>(v) - static_cast<int>(CSSValueID::kRow) + static_cast<int>(EFlexDirection::kRow));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EFlexDirection v) {
  DCHECK_GE(v, EFlexDirection::kRow);
  DCHECK_LE(v, EFlexDirection::kColumnReverse);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EFlexDirection::kRow) + static_cast<int>(CSSValueID::kRow));
}


template <>
inline EUserDrag cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAuto:
      return EUserDrag::kAuto;
    case CSSValueID::kElement:
      return EUserDrag::kElement;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EUserDrag>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EUserDrag::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserDrag v) {
  switch (v) {
    case EUserDrag::kAuto:
      return CSSValueID::kAuto;
    case EUserDrag::kElement:
      return CSSValueID::kElement;
    default:
      DCHECK_GE(v, EUserDrag::kNone);
      DCHECK_LE(v, EUserDrag::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserDrag::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EClear cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EClear::kNone;
    case CSSValueID::kBoth:
      return EClear::kBoth;
    default:
      DCHECK_GE(v, CSSValueID::kLeft);
      DCHECK_LE(v, CSSValueID::kInlineEnd);
      return static_cast<EClear>(static_cast<int>(v) - static_cast<int>(CSSValueID::kLeft) + static_cast<int>(EClear::kLeft));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EClear v) {
  switch (v) {
    case EClear::kNone:
      return CSSValueID::kNone;
    case EClear::kBoth:
      return CSSValueID::kBoth;
    default:
      DCHECK_GE(v, EClear::kLeft);
      DCHECK_LE(v, EClear::kInlineEnd);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EClear::kLeft) + static_cast<int>(CSSValueID::kLeft));
  }
}


template <>
inline EUserSelect cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kAll:
      return EUserSelect::kAll;
    case CSSValueID::kAuto:
      return EUserSelect::kAuto;
    case CSSValueID::kText:
      return EUserSelect::kText;
    default:
      DCHECK_GE(v, CSSValueID::kNone);
      DCHECK_LE(v, CSSValueID::kNone);
      return static_cast<EUserSelect>(static_cast<int>(v) - static_cast<int>(CSSValueID::kNone) + static_cast<int>(EUserSelect::kNone));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EUserSelect v) {
  switch (v) {
    case EUserSelect::kAll:
      return CSSValueID::kAll;
    case EUserSelect::kAuto:
      return CSSValueID::kAuto;
    case EUserSelect::kText:
      return CSSValueID::kText;
    default:
      DCHECK_GE(v, EUserSelect::kNone);
      DCHECK_LE(v, EUserSelect::kNone);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EUserSelect::kNone) + static_cast<int>(CSSValueID::kNone));
  }
}


template <>
inline EBackfaceVisibility cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kVisible:
      return EBackfaceVisibility::kVisible;
    default:
      DCHECK_GE(v, CSSValueID::kHidden);
      DCHECK_LE(v, CSSValueID::kHidden);
      return static_cast<EBackfaceVisibility>(static_cast<int>(v) - static_cast<int>(CSSValueID::kHidden) + static_cast<int>(EBackfaceVisibility::kHidden));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBackfaceVisibility v) {
  switch (v) {
    case EBackfaceVisibility::kVisible:
      return CSSValueID::kVisible;
    default:
      DCHECK_GE(v, EBackfaceVisibility::kHidden);
      DCHECK_LE(v, EBackfaceVisibility::kHidden);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBackfaceVisibility::kHidden) + static_cast<int>(CSSValueID::kHidden));
  }
}


template <>
inline EBorderCollapse cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kSeparate:
      return EBorderCollapse::kSeparate;
    default:
      DCHECK_GE(v, CSSValueID::kCollapse);
      DCHECK_LE(v, CSSValueID::kCollapse);
      return static_cast<EBorderCollapse>(static_cast<int>(v) - static_cast<int>(CSSValueID::kCollapse) + static_cast<int>(EBorderCollapse::kCollapse));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EBorderCollapse v) {
  switch (v) {
    case EBorderCollapse::kSeparate:
      return CSSValueID::kSeparate;
    default:
      DCHECK_GE(v, EBorderCollapse::kCollapse);
      DCHECK_LE(v, EBorderCollapse::kCollapse);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EBorderCollapse::kCollapse) + static_cast<int>(CSSValueID::kCollapse));
  }
}


template <>
inline EIsolation cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kIsolate:
      return EIsolation::kIsolate;
    default:
      DCHECK_GE(v, CSSValueID::kAuto);
      DCHECK_LE(v, CSSValueID::kAuto);
      return static_cast<EIsolation>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAuto) + static_cast<int>(EIsolation::kAuto));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EIsolation v) {
  switch (v) {
    case EIsolation::kIsolate:
      return CSSValueID::kIsolate;
    default:
      DCHECK_GE(v, EIsolation::kAuto);
      DCHECK_LE(v, EIsolation::kAuto);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EIsolation::kAuto) + static_cast<int>(CSSValueID::kAuto));
  }
}


template <>
inline EListStyleType cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  switch (v) {
    case CSSValueID::kNone:
      return EListStyleType::kNone;
    default:
      DCHECK_GE(v, CSSValueID::kDisc);
      DCHECK_LE(v, CSSValueID::kKatakanaIroha);
      return static_cast<EListStyleType>(static_cast<int>(v) - static_cast<int>(CSSValueID::kDisc) + static_cast<int>(EListStyleType::kDisc));
  }
}

inline CSSValueID platformEnumToCSSValueIDGenerated(EListStyleType v) {
  switch (v) {
    case EListStyleType::kNone:
      return CSSValueID::kNone;
    default:
      DCHECK_GE(v, EListStyleType::kDisc);
      DCHECK_LE(v, EListStyleType::kKatakanaIroha);
      return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(EListStyleType::kDisc) + static_cast<int>(CSSValueID::kDisc));
  }
}


template <>
inline RubyPosition cssValueIDToPlatformEnumGenerated(CSSValueID v) {
  DCHECK_GE(v, CSSValueID::kAfter);
  DCHECK_LE(v, CSSValueID::kBefore);
  return static_cast<RubyPosition>(static_cast<int>(v) - static_cast<int>(CSSValueID::kAfter) + static_cast<int>(RubyPosition::kAfter));
}

inline CSSValueID platformEnumToCSSValueIDGenerated(RubyPosition v) {
  DCHECK_GE(v, RubyPosition::kAfter);
  DCHECK_LE(v, RubyPosition::kBefore);
  return static_cast<CSSValueID>(static_cast<int>(v) - static_cast<int>(RubyPosition::kAfter) + static_cast<int>(CSSValueID::kAfter));
}

}  // namespace detail

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSS_VALUE_ID_MAPPINGS_GENERATED_H_
