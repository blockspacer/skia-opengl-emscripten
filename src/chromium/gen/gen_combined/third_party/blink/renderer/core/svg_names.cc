// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/svg/svg_attribute_names.json5
//   ../../third_party/blink/renderer/core/svg/svg_tag_names.json5


#include "third_party/blink/renderer/core/svg_names.h"

#include <memory>

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/static_constructors.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace svg_names {

DEFINE_GLOBAL(AtomicString, kNamespaceURI);

// Tags

void* tag_storage[kTagsCount * ((sizeof(SVGQualifiedName) + sizeof(void *) - 1) / sizeof(void *))];
const SVGQualifiedName& kATag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[0];
const SVGQualifiedName& kAnimateTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[1];
const SVGQualifiedName& kAnimateColorTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[2];
const SVGQualifiedName& kAnimateMotionTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[3];
const SVGQualifiedName& kAnimateTransformTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[4];
const SVGQualifiedName& kCircleTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[5];
const SVGQualifiedName& kClipPathTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[6];
const SVGQualifiedName& kDefsTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[7];
const SVGQualifiedName& kDescTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[8];
const SVGQualifiedName& kDiscardTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[9];
const SVGQualifiedName& kEllipseTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[10];
const SVGQualifiedName& kFEBlendTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[11];
const SVGQualifiedName& kFEColorMatrixTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[12];
const SVGQualifiedName& kFEComponentTransferTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[13];
const SVGQualifiedName& kFECompositeTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[14];
const SVGQualifiedName& kFEConvolveMatrixTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[15];
const SVGQualifiedName& kFEDiffuseLightingTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[16];
const SVGQualifiedName& kFEDisplacementMapTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[17];
const SVGQualifiedName& kFEDistantLightTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[18];
const SVGQualifiedName& kFEDropShadowTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[19];
const SVGQualifiedName& kFEFloodTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[20];
const SVGQualifiedName& kFEFuncATag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[21];
const SVGQualifiedName& kFEFuncBTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[22];
const SVGQualifiedName& kFEFuncGTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[23];
const SVGQualifiedName& kFEFuncRTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[24];
const SVGQualifiedName& kFEGaussianBlurTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[25];
const SVGQualifiedName& kFEImageTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[26];
const SVGQualifiedName& kFEMergeTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[27];
const SVGQualifiedName& kFEMergeNodeTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[28];
const SVGQualifiedName& kFEMorphologyTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[29];
const SVGQualifiedName& kFEOffsetTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[30];
const SVGQualifiedName& kFEPointLightTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[31];
const SVGQualifiedName& kFESpecularLightingTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[32];
const SVGQualifiedName& kFESpotLightTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[33];
const SVGQualifiedName& kFETileTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[34];
const SVGQualifiedName& kFETurbulenceTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[35];
const SVGQualifiedName& kFilterTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[36];
const SVGQualifiedName& kForeignObjectTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[37];
const SVGQualifiedName& kGTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[38];
const SVGQualifiedName& kImageTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[39];
const SVGQualifiedName& kLineTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[40];
const SVGQualifiedName& kLinearGradientTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[41];
const SVGQualifiedName& kMarkerTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[42];
const SVGQualifiedName& kMaskTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[43];
const SVGQualifiedName& kMetadataTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[44];
const SVGQualifiedName& kMPathTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[45];
const SVGQualifiedName& kPathTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[46];
const SVGQualifiedName& kPatternTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[47];
const SVGQualifiedName& kPolygonTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[48];
const SVGQualifiedName& kPolylineTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[49];
const SVGQualifiedName& kRadialGradientTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[50];
const SVGQualifiedName& kRectTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[51];
const SVGQualifiedName& kScriptTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[52];
const SVGQualifiedName& kSetTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[53];
const SVGQualifiedName& kStopTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[54];
const SVGQualifiedName& kStyleTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[55];
const SVGQualifiedName& kSVGTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[56];
const SVGQualifiedName& kSwitchTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[57];
const SVGQualifiedName& kSymbolTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[58];
const SVGQualifiedName& kTextTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[59];
const SVGQualifiedName& kTextPathTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[60];
const SVGQualifiedName& kTitleTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[61];
const SVGQualifiedName& kTSpanTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[62];
const SVGQualifiedName& kUseTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[63];
const SVGQualifiedName& kViewTag = reinterpret_cast<SVGQualifiedName*>(&tag_storage)[64];


std::unique_ptr<const SVGQualifiedName*[]> GetTags() {
  auto tags = std::make_unique<const SVGQualifiedName*[]>(kTagsCount);
  for (size_t i = 0; i < kTagsCount; ++i)
    tags[i] = reinterpret_cast<SVGQualifiedName*>(&tag_storage) + i;
  return tags;
}

// Attributes

void* attr_storage[kAttrsCount * ((sizeof(QualifiedName) + sizeof(void *) - 1) / sizeof(void *))];

const QualifiedName& kAccumulateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[0];
const QualifiedName& kAdditiveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[1];
const QualifiedName& kAlignmentBaselineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[2];
const QualifiedName& kAmplitudeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[3];
const QualifiedName& kAnimateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[4];
const QualifiedName& kAttributeNameAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[5];
const QualifiedName& kAttributeTypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[6];
const QualifiedName& kAzimuthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[7];
const QualifiedName& kBaseFrequencyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[8];
const QualifiedName& kBaseProfileAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[9];
const QualifiedName& kBaselineShiftAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[10];
const QualifiedName& kBeginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[11];
const QualifiedName& kBiasAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[12];
const QualifiedName& kBufferedRenderingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[13];
const QualifiedName& kByAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[14];
const QualifiedName& kCalcModeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[15];
const QualifiedName& kClipAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[16];
const QualifiedName& kClipPathAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[17];
const QualifiedName& kClipRuleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[18];
const QualifiedName& kClipPathUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[19];
const QualifiedName& kColorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[20];
const QualifiedName& kColorInterpolationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[21];
const QualifiedName& kColorInterpolationFiltersAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[22];
const QualifiedName& kColorRenderingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[23];
const QualifiedName& kCursorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[24];
const QualifiedName& kCxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[25];
const QualifiedName& kCyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[26];
const QualifiedName& kDAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[27];
const QualifiedName& kDecodingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[28];
const QualifiedName& kDiffuseConstantAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[29];
const QualifiedName& kDirectionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[30];
const QualifiedName& kDisplayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[31];
const QualifiedName& kDivisorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[32];
const QualifiedName& kDominantBaselineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[33];
const QualifiedName& kDurAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[34];
const QualifiedName& kDxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[35];
const QualifiedName& kDyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[36];
const QualifiedName& kEdgeModeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[37];
const QualifiedName& kElevationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[38];
const QualifiedName& kEndAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[39];
const QualifiedName& kExponentAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[40];
const QualifiedName& kFillAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[41];
const QualifiedName& kFillOpacityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[42];
const QualifiedName& kFillRuleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[43];
const QualifiedName& kFilterAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[44];
const QualifiedName& kFilterUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[45];
const QualifiedName& kFloodColorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[46];
const QualifiedName& kFloodOpacityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[47];
const QualifiedName& kFontFamilyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[48];
const QualifiedName& kFontSizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[49];
const QualifiedName& kFontSizeAdjustAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[50];
const QualifiedName& kFontStretchAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[51];
const QualifiedName& kFontStyleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[52];
const QualifiedName& kFontVariantAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[53];
const QualifiedName& kFontWeightAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[54];
const QualifiedName& kFormatAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[55];
const QualifiedName& kFrAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[56];
const QualifiedName& kFromAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[57];
const QualifiedName& kFxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[58];
const QualifiedName& kFyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[59];
const QualifiedName& kG1Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[60];
const QualifiedName& kG2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[61];
const QualifiedName& kGlyphRefAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[62];
const QualifiedName& kGradientTransformAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[63];
const QualifiedName& kGradientUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[64];
const QualifiedName& kHeightAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[65];
const QualifiedName& kHrefAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[66];
const QualifiedName& kImageRenderingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[67];
const QualifiedName& kInAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[68];
const QualifiedName& kIn2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[69];
const QualifiedName& kInterceptAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[70];
const QualifiedName& kIntrinsicsizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[71];
const QualifiedName& kKAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[72];
const QualifiedName& kK1Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[73];
const QualifiedName& kK2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[74];
const QualifiedName& kK3Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[75];
const QualifiedName& kK4Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[76];
const QualifiedName& kKernelMatrixAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[77];
const QualifiedName& kKernelUnitLengthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[78];
const QualifiedName& kKeyPointsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[79];
const QualifiedName& kKeySplinesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[80];
const QualifiedName& kKeyTimesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[81];
const QualifiedName& kLangAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[82];
const QualifiedName& kLengthAdjustAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[83];
const QualifiedName& kLetterSpacingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[84];
const QualifiedName& kLightingColorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[85];
const QualifiedName& kLimitingConeAngleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[86];
const QualifiedName& kLocalAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[87];
const QualifiedName& kMarkerEndAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[88];
const QualifiedName& kMarkerMidAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[89];
const QualifiedName& kMarkerStartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[90];
const QualifiedName& kMarkerHeightAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[91];
const QualifiedName& kMarkerUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[92];
const QualifiedName& kMarkerWidthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[93];
const QualifiedName& kMaskAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[94];
const QualifiedName& kMaskTypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[95];
const QualifiedName& kMaskContentUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[96];
const QualifiedName& kMaskUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[97];
const QualifiedName& kMaxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[98];
const QualifiedName& kMediaAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[99];
const QualifiedName& kMethodAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[100];
const QualifiedName& kMinAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[101];
const QualifiedName& kModeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[102];
const QualifiedName& kNameAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[103];
const QualifiedName& kNumOctavesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[104];
const QualifiedName& kOffsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[105];
const QualifiedName& kOnactivateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[106];
const QualifiedName& kOnbeginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[107];
const QualifiedName& kOnendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[108];
const QualifiedName& kOnfocusinAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[109];
const QualifiedName& kOnfocusoutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[110];
const QualifiedName& kOnrepeatAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[111];
const QualifiedName& kOpacityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[112];
const QualifiedName& kOperatorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[113];
const QualifiedName& kOrderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[114];
const QualifiedName& kOrientAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[115];
const QualifiedName& kOriginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[116];
const QualifiedName& kOverflowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[117];
const QualifiedName& kPaintOrderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[118];
const QualifiedName& kPathAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[119];
const QualifiedName& kPathLengthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[120];
const QualifiedName& kPatternContentUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[121];
const QualifiedName& kPatternTransformAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[122];
const QualifiedName& kPatternUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[123];
const QualifiedName& kPointerEventsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[124];
const QualifiedName& kPointsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[125];
const QualifiedName& kPointsAtXAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[126];
const QualifiedName& kPointsAtYAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[127];
const QualifiedName& kPointsAtZAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[128];
const QualifiedName& kPreserveAlphaAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[129];
const QualifiedName& kPreserveAspectRatioAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[130];
const QualifiedName& kPrimitiveUnitsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[131];
const QualifiedName& kRAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[132];
const QualifiedName& kRadiusAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[133];
const QualifiedName& kRefXAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[134];
const QualifiedName& kRefYAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[135];
const QualifiedName& kRepeatCountAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[136];
const QualifiedName& kRepeatDurAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[137];
const QualifiedName& kRequiredExtensionsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[138];
const QualifiedName& kRequiredFeaturesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[139];
const QualifiedName& kRestartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[140];
const QualifiedName& kResultAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[141];
const QualifiedName& kRotateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[142];
const QualifiedName& kRxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[143];
const QualifiedName& kRyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[144];
const QualifiedName& kScaleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[145];
const QualifiedName& kSeedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[146];
const QualifiedName& kShapeRenderingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[147];
const QualifiedName& kSlopeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[148];
const QualifiedName& kSpacingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[149];
const QualifiedName& kSpecularConstantAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[150];
const QualifiedName& kSpecularExponentAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[151];
const QualifiedName& kSpreadMethodAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[152];
const QualifiedName& kStartOffsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[153];
const QualifiedName& kStdDeviationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[154];
const QualifiedName& kStitchTilesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[155];
const QualifiedName& kStopColorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[156];
const QualifiedName& kStopOpacityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[157];
const QualifiedName& kStrokeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[158];
const QualifiedName& kStrokeDasharrayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[159];
const QualifiedName& kStrokeDashoffsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[160];
const QualifiedName& kStrokeLinecapAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[161];
const QualifiedName& kStrokeLinejoinAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[162];
const QualifiedName& kStrokeMiterlimitAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[163];
const QualifiedName& kStrokeOpacityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[164];
const QualifiedName& kStrokeWidthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[165];
const QualifiedName& kStyleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[166];
const QualifiedName& kSurfaceScaleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[167];
const QualifiedName& kSystemLanguageAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[168];
const QualifiedName& kTableValuesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[169];
const QualifiedName& kTargetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[170];
const QualifiedName& kTargetXAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[171];
const QualifiedName& kTargetYAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[172];
const QualifiedName& kTextAnchorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[173];
const QualifiedName& kTextDecorationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[174];
const QualifiedName& kTextRenderingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[175];
const QualifiedName& kTextLengthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[176];
const QualifiedName& kTitleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[177];
const QualifiedName& kToAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[178];
const QualifiedName& kTransformAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[179];
const QualifiedName& kTransformOriginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[180];
const QualifiedName& kTypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[181];
const QualifiedName& kU1Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[182];
const QualifiedName& kU2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[183];
const QualifiedName& kUnicodeBidiAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[184];
const QualifiedName& kValuesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[185];
const QualifiedName& kVectorEffectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[186];
const QualifiedName& kVersionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[187];
const QualifiedName& kViewBoxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[188];
const QualifiedName& kVisibilityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[189];
const QualifiedName& kWidthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[190];
const QualifiedName& kWordSpacingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[191];
const QualifiedName& kWritingModeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[192];
const QualifiedName& kXAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[193];
const QualifiedName& kX1Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[194];
const QualifiedName& kX2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[195];
const QualifiedName& kXChannelSelectorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[196];
const QualifiedName& kYAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[197];
const QualifiedName& kY1Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[198];
const QualifiedName& kY2Attr = reinterpret_cast<QualifiedName*>(&attr_storage)[199];
const QualifiedName& kYChannelSelectorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[200];
const QualifiedName& kZAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[201];
const QualifiedName& kZoomAndPanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[202];

std::unique_ptr<const QualifiedName*[]> GetAttrs() {
  auto attrs = std::make_unique<const QualifiedName*[]>(kAttrsCount);
  for (size_t i = 0; i < kAttrsCount; ++i)
    attrs[i] = reinterpret_cast<QualifiedName*>(&attr_storage) + i;
  return attrs;
}


void Init() {
  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
    unsigned char is_tag;
    unsigned char is_attr;
  };

  // Namespace
  // Use placement new to initialize the globals.
  AtomicString ns_uri("http://www.w3.org/2000/svg");
  new ((void*)&kNamespaceURI) AtomicString(ns_uri);

  static const NameEntry kNames[] = {
    { "a", 9778235, 1, 1, 0 },
    { "accumulate", 12470039, 10, 0, 1 },
    { "additive", 2986601, 8, 0, 1 },
    { "alignment-baseline", 15363520, 18, 0, 1 },
    { "amplitude", 4611145, 9, 0, 1 },
    { "animate", 15142871, 7, 1, 1 },
    { "animateColor", 8168430, 12, 1, 0 },
    { "animateMotion", 9626227, 13, 1, 0 },
    { "animateTransform", 8940358, 16, 1, 0 },
    { "attributeName", 8469069, 13, 0, 1 },
    { "attributeType", 4267467, 13, 0, 1 },
    { "azimuth", 11445731, 7, 0, 1 },
    { "baseFrequency", 5843500, 13, 0, 1 },
    { "baseProfile", 6136015, 11, 0, 1 },
    { "baseline-shift", 738627, 14, 0, 1 },
    { "begin", 12626174, 5, 0, 1 },
    { "bias", 16339666, 4, 0, 1 },
    { "buffered-rendering", 711842, 18, 0, 1 },
    { "by", 2718574, 2, 0, 1 },
    { "calcMode", 13855136, 8, 0, 1 },
    { "circle", 1709685, 6, 1, 0 },
    { "clip", 15009294, 4, 0, 1 },
    { "clip-path", 15117952, 9, 0, 1 },
    { "clip-rule", 9308965, 9, 0, 1 },
    { "clipPath", 4241194, 8, 1, 0 },
    { "clipPathUnits", 6700353, 13, 0, 1 },
    { "color", 2734929, 5, 0, 1 },
    { "color-interpolation", 5191234, 19, 0, 1 },
    { "color-interpolation-filters", 10987393, 27, 0, 1 },
    { "color-rendering", 10166753, 15, 0, 1 },
    { "cursor", 1987604, 6, 0, 1 },
    { "cx", 4988833, 2, 0, 1 },
    { "cy", 1446155, 2, 0, 1 },
    { "d", 2286069, 1, 0, 1 },
    { "decoding", 7847386, 8, 0, 1 },
    { "defs", 3666553, 4, 1, 0 },
    { "desc", 8557401, 4, 1, 0 },
    { "diffuseConstant", 2992919, 15, 0, 1 },
    { "direction", 16092904, 9, 0, 1 },
    { "discard", 12039290, 7, 1, 0 },
    { "display", 16245385, 7, 0, 1 },
    { "divisor", 5380631, 7, 0, 1 },
    { "dominant-baseline", 8742937, 17, 0, 1 },
    { "dur", 1381072, 3, 0, 1 },
    { "dx", 4552890, 2, 0, 1 },
    { "dy", 7600873, 2, 0, 1 },
    { "edgeMode", 8996806, 8, 0, 1 },
    { "elevation", 4496523, 9, 0, 1 },
    { "ellipse", 15372068, 7, 1, 0 },
    { "end", 1590106, 3, 0, 1 },
    { "exponent", 7735438, 8, 0, 1 },
    { "feBlend", 11501676, 7, 1, 0 },
    { "feColorMatrix", 3169415, 13, 1, 0 },
    { "feComponentTransfer", 3518927, 19, 1, 0 },
    { "feComposite", 12541773, 11, 1, 0 },
    { "feConvolveMatrix", 14493860, 16, 1, 0 },
    { "feDiffuseLighting", 3352565, 17, 1, 0 },
    { "feDisplacementMap", 5905267, 17, 1, 0 },
    { "feDistantLight", 747025, 14, 1, 0 },
    { "feDropShadow", 10767402, 12, 1, 0 },
    { "feFlood", 6640775, 7, 1, 0 },
    { "feFuncA", 4019930, 7, 1, 0 },
    { "feFuncB", 15012662, 7, 1, 0 },
    { "feFuncG", 4786906, 7, 1, 0 },
    { "feFuncR", 95219, 7, 1, 0 },
    { "feGaussianBlur", 11103364, 14, 1, 0 },
    { "feImage", 7842896, 7, 1, 0 },
    { "feMerge", 1453606, 7, 1, 0 },
    { "feMergeNode", 15500549, 11, 1, 0 },
    { "feMorphology", 8041573, 12, 1, 0 },
    { "feOffset", 10253256, 8, 1, 0 },
    { "fePointLight", 15054408, 12, 1, 0 },
    { "feSpecularLighting", 10866110, 18, 1, 0 },
    { "feSpotLight", 3344980, 11, 1, 0 },
    { "feTile", 2220132, 6, 1, 0 },
    { "feTurbulence", 14661844, 12, 1, 0 },
    { "fill", 14906492, 4, 0, 1 },
    { "fill-opacity", 1178205, 12, 0, 1 },
    { "fill-rule", 11672563, 9, 0, 1 },
    { "filter", 16731886, 6, 1, 1 },
    { "filterUnits", 11167090, 11, 0, 1 },
    { "flood-color", 9861123, 11, 0, 1 },
    { "flood-opacity", 12898900, 13, 0, 1 },
    { "font-family", 11614204, 11, 0, 1 },
    { "font-size", 3230817, 9, 0, 1 },
    { "font-size-adjust", 7342273, 16, 0, 1 },
    { "font-stretch", 8655366, 12, 0, 1 },
    { "font-style", 6471658, 10, 0, 1 },
    { "font-variant", 7877027, 12, 0, 1 },
    { "font-weight", 7792151, 11, 0, 1 },
    { "foreignObject", 15048399, 13, 1, 0 },
    { "format", 15152429, 6, 0, 1 },
    { "fr", 9385464, 2, 0, 1 },
    { "from", 16135834, 4, 0, 1 },
    { "fx", 15324007, 2, 0, 1 },
    { "fy", 15642507, 2, 0, 1 },
    { "g", 16436612, 1, 1, 0 },
    { "g1", 11608154, 2, 0, 1 },
    { "g2", 4017113, 2, 0, 1 },
    { "glyphRef", 7998179, 8, 0, 1 },
    { "gradientTransform", 7347535, 17, 0, 1 },
    { "gradientUnits", 1404814, 13, 0, 1 },
    { "height", 6697833, 6, 0, 1 },
    { "href", 5797448, 4, 0, 1 },
    { "image", 10287573, 5, 1, 0 },
    { "image-rendering", 16430331, 15, 0, 1 },
    { "in", 5937979, 2, 0, 1 },
    { "in2", 14108186, 3, 0, 1 },
    { "intercept", 1705558, 9, 0, 1 },
    { "intrinsicsize", 6463719, 13, 0, 1 },
    { "k", 2339254, 1, 0, 1 },
    { "k1", 6632531, 2, 0, 1 },
    { "k2", 14802177, 2, 0, 1 },
    { "k3", 5328286, 2, 0, 1 },
    { "k4", 1699474, 2, 0, 1 },
    { "kernelMatrix", 12629737, 12, 0, 1 },
    { "kernelUnitLength", 12011177, 16, 0, 1 },
    { "keyPoints", 4334432, 9, 0, 1 },
    { "keySplines", 14518292, 10, 0, 1 },
    { "keyTimes", 16684339, 8, 0, 1 },
    { "lang", 3702417, 4, 0, 1 },
    { "lengthAdjust", 13438957, 12, 0, 1 },
    { "letter-spacing", 15248365, 14, 0, 1 },
    { "lighting-color", 8113130, 14, 0, 1 },
    { "limitingConeAngle", 1376504, 17, 0, 1 },
    { "line", 15272783, 4, 1, 0 },
    { "linearGradient", 1246858, 14, 1, 0 },
    { "local", 9423053, 5, 0, 1 },
    { "marker", 15384222, 6, 1, 0 },
    { "marker-end", 5221081, 10, 0, 1 },
    { "marker-mid", 14289583, 10, 0, 1 },
    { "marker-start", 980150, 12, 0, 1 },
    { "markerHeight", 3243627, 12, 0, 1 },
    { "markerUnits", 126910, 11, 0, 1 },
    { "markerWidth", 2347631, 11, 0, 1 },
    { "mask", 10325940, 4, 1, 1 },
    { "mask-type", 1273039, 9, 0, 1 },
    { "maskContentUnits", 6357138, 16, 0, 1 },
    { "maskUnits", 13353827, 9, 0, 1 },
    { "max", 3449166, 3, 0, 1 },
    { "media", 13905581, 5, 0, 1 },
    { "metadata", 2268346, 8, 1, 0 },
    { "method", 14679268, 6, 0, 1 },
    { "min", 2196278, 3, 0, 1 },
    { "mode", 13319651, 4, 0, 1 },
    { "mpath", 9277366, 5, 1, 0 },
    { "name", 8774809, 4, 0, 1 },
    { "numOctaves", 6742044, 10, 0, 1 },
    { "offset", 1221606, 6, 0, 1 },
    { "onactivate", 3026152, 10, 0, 1 },
    { "onbegin", 12049348, 7, 0, 1 },
    { "onend", 811239, 5, 0, 1 },
    { "onfocusin", 2970475, 9, 0, 1 },
    { "onfocusout", 4459422, 10, 0, 1 },
    { "onrepeat", 6681969, 8, 0, 1 },
    { "opacity", 12231101, 7, 0, 1 },
    { "operator", 16379917, 8, 0, 1 },
    { "order", 15651464, 5, 0, 1 },
    { "orient", 5635487, 6, 0, 1 },
    { "origin", 2361284, 6, 0, 1 },
    { "overflow", 13155215, 8, 0, 1 },
    { "paint-order", 3304976, 11, 0, 1 },
    { "path", 14212236, 4, 1, 1 },
    { "pathLength", 691978, 10, 0, 1 },
    { "pattern", 16283150, 7, 1, 0 },
    { "patternContentUnits", 3102758, 19, 0, 1 },
    { "patternTransform", 15581536, 16, 0, 1 },
    { "patternUnits", 12052704, 12, 0, 1 },
    { "pointer-events", 9363889, 14, 0, 1 },
    { "points", 12718235, 6, 0, 1 },
    { "pointsAtX", 16510410, 9, 0, 1 },
    { "pointsAtY", 10912372, 9, 0, 1 },
    { "pointsAtZ", 13666400, 9, 0, 1 },
    { "polygon", 1875665, 7, 1, 0 },
    { "polyline", 9966402, 8, 1, 0 },
    { "preserveAlpha", 16654065, 13, 0, 1 },
    { "preserveAspectRatio", 15032206, 19, 0, 1 },
    { "primitiveUnits", 12203325, 14, 0, 1 },
    { "r", 9755863, 1, 0, 1 },
    { "radialGradient", 4356263, 14, 1, 0 },
    { "radius", 2794824, 6, 0, 1 },
    { "rect", 15193729, 4, 1, 0 },
    { "refX", 11984993, 4, 0, 1 },
    { "refY", 14103698, 4, 0, 1 },
    { "repeatCount", 10019402, 11, 0, 1 },
    { "repeatDur", 8664793, 9, 0, 1 },
    { "requiredExtensions", 4208057, 18, 0, 1 },
    { "requiredFeatures", 11389123, 16, 0, 1 },
    { "restart", 2504772, 7, 0, 1 },
    { "result", 15954886, 6, 0, 1 },
    { "rotate", 16211843, 6, 0, 1 },
    { "rx", 5132163, 2, 0, 1 },
    { "ry", 14820197, 2, 0, 1 },
    { "scale", 7900465, 5, 0, 1 },
    { "script", 7137273, 6, 1, 0 },
    { "seed", 15054065, 4, 0, 1 },
    { "set", 7291079, 3, 1, 0 },
    { "shape-rendering", 7310465, 15, 0, 1 },
    { "slope", 8800286, 5, 0, 1 },
    { "spacing", 11396576, 7, 0, 1 },
    { "specularConstant", 15821133, 16, 0, 1 },
    { "specularExponent", 12340909, 16, 0, 1 },
    { "spreadMethod", 7294005, 12, 0, 1 },
    { "startOffset", 16206982, 11, 0, 1 },
    { "stdDeviation", 9412814, 12, 0, 1 },
    { "stitchTiles", 14130215, 11, 0, 1 },
    { "stop", 16220638, 4, 1, 0 },
    { "stop-color", 4601095, 10, 0, 1 },
    { "stop-opacity", 15542229, 12, 0, 1 },
    { "stroke", 13630306, 6, 0, 1 },
    { "stroke-dasharray", 13918191, 16, 0, 1 },
    { "stroke-dashoffset", 12491343, 17, 0, 1 },
    { "stroke-linecap", 2304011, 14, 0, 1 },
    { "stroke-linejoin", 14943542, 15, 0, 1 },
    { "stroke-miterlimit", 3565435, 17, 0, 1 },
    { "stroke-opacity", 16354193, 14, 0, 1 },
    { "stroke-width", 15643309, 12, 0, 1 },
    { "style", 10993676, 5, 1, 1 },
    { "surfaceScale", 3931981, 12, 0, 1 },
    { "svg", 8018441, 3, 1, 0 },
    { "switch", 1240910, 6, 1, 0 },
    { "symbol", 9487027, 6, 1, 0 },
    { "systemLanguage", 16769792, 14, 0, 1 },
    { "tableValues", 3989232, 11, 0, 1 },
    { "target", 1752822, 6, 0, 1 },
    { "targetX", 15131166, 7, 0, 1 },
    { "targetY", 9495385, 7, 0, 1 },
    { "text", 2784654, 4, 1, 0 },
    { "text-anchor", 10988461, 11, 0, 1 },
    { "text-decoration", 8931788, 15, 0, 1 },
    { "text-rendering", 5473995, 14, 0, 1 },
    { "textLength", 10317958, 10, 0, 1 },
    { "textPath", 14264041, 8, 1, 0 },
    { "title", 2337488, 5, 1, 1 },
    { "to", 8637605, 2, 0, 1 },
    { "transform", 12016467, 9, 0, 1 },
    { "transform-origin", 11461635, 16, 0, 1 },
    { "tspan", 1121562, 5, 1, 0 },
    { "type", 1916283, 4, 0, 1 },
    { "u1", 8892538, 2, 0, 1 },
    { "u2", 3297321, 2, 0, 1 },
    { "unicode-bidi", 16168075, 12, 0, 1 },
    { "use", 1434542, 3, 1, 0 },
    { "values", 6531200, 6, 0, 1 },
    { "vector-effect", 16211112, 13, 0, 1 },
    { "version", 8128447, 7, 0, 1 },
    { "view", 9558954, 4, 1, 0 },
    { "viewBox", 12063430, 7, 0, 1 },
    { "visibility", 7049701, 10, 0, 1 },
    { "width", 12902275, 5, 0, 1 },
    { "word-spacing", 965879, 12, 0, 1 },
    { "writing-mode", 3659809, 12, 0, 1 },
    { "x", 15484113, 1, 0, 1 },
    { "x1", 9037550, 2, 0, 1 },
    { "x2", 14272341, 2, 0, 1 },
    { "xChannelSelector", 11124924, 16, 0, 1 },
    { "y", 4984204, 1, 0, 1 },
    { "y1", 9285315, 2, 0, 1 },
    { "y2", 1776935, 2, 0, 1 },
    { "yChannelSelector", 12848041, 16, 0, 1 },
    { "z", 9090206, 1, 0, 1 },
    { "zoomAndPan", 16695696, 10, 0, 1 },
  };

  size_t tag_i = 0;
  size_t attr_i = 0;
  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    if (kNames[i].is_tag) {
      void* address = reinterpret_cast<SVGQualifiedName*>(&tag_storage) + tag_i;
      QualifiedName::CreateStatic(address, impl, ns_uri);
      ++tag_i;
    }

    if (!kNames[i].is_attr)
      continue;
    void* address = reinterpret_cast<QualifiedName*>(&attr_storage) + attr_i;
    QualifiedName::CreateStatic(address, impl);
    ++attr_i;
  }
  DCHECK_EQ(tag_i, kTagsCount);
  DCHECK_EQ(attr_i, kAttrsCount);
}

}  // namespace svg_names
}  // namespace blink
