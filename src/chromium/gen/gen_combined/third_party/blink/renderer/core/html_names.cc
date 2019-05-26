// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/aria_properties.json5
//   ../../third_party/blink/renderer/core/html/html_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#include "third_party/blink/renderer/core/html_names.h"

#include <memory>

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/static_constructors.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace html_names {

DEFINE_GLOBAL(AtomicString, xhtmlNamespaceURI);

// Tags

void* tag_storage[kTagsCount * ((sizeof(HTMLQualifiedName) + sizeof(void *) - 1) / sizeof(void *))];
const HTMLQualifiedName& kATag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[0];
const HTMLQualifiedName& kAbbrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[1];
const HTMLQualifiedName& kAcronymTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[2];
const HTMLQualifiedName& kAddressTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[3];
const HTMLQualifiedName& kAppletTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[4];
const HTMLQualifiedName& kAreaTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[5];
const HTMLQualifiedName& kArticleTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[6];
const HTMLQualifiedName& kAsideTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[7];
const HTMLQualifiedName& kAudioTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[8];
const HTMLQualifiedName& kBTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[9];
const HTMLQualifiedName& kBaseTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[10];
const HTMLQualifiedName& kBasefontTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[11];
const HTMLQualifiedName& kBdiTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[12];
const HTMLQualifiedName& kBdoTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[13];
const HTMLQualifiedName& kBgsoundTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[14];
const HTMLQualifiedName& kBigTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[15];
const HTMLQualifiedName& kBlockquoteTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[16];
const HTMLQualifiedName& kBodyTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[17];
const HTMLQualifiedName& kBrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[18];
const HTMLQualifiedName& kButtonTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[19];
const HTMLQualifiedName& kCanvasTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[20];
const HTMLQualifiedName& kCaptionTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[21];
const HTMLQualifiedName& kCenterTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[22];
const HTMLQualifiedName& kCiteTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[23];
const HTMLQualifiedName& kCodeTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[24];
const HTMLQualifiedName& kColTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[25];
const HTMLQualifiedName& kColgroupTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[26];
const HTMLQualifiedName& kCommandTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[27];
const HTMLQualifiedName& kContentTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[28];
const HTMLQualifiedName& kDataTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[29];
const HTMLQualifiedName& kDatalistTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[30];
const HTMLQualifiedName& kDdTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[31];
const HTMLQualifiedName& kDelTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[32];
const HTMLQualifiedName& kDetailsTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[33];
const HTMLQualifiedName& kDfnTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[34];
const HTMLQualifiedName& kDialogTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[35];
const HTMLQualifiedName& kDirTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[36];
const HTMLQualifiedName& kDivTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[37];
const HTMLQualifiedName& kDlTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[38];
const HTMLQualifiedName& kDtTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[39];
const HTMLQualifiedName& kEmTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[40];
const HTMLQualifiedName& kEmbedTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[41];
const HTMLQualifiedName& kFieldsetTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[42];
const HTMLQualifiedName& kFigcaptionTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[43];
const HTMLQualifiedName& kFigureTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[44];
const HTMLQualifiedName& kFontTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[45];
const HTMLQualifiedName& kFooterTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[46];
const HTMLQualifiedName& kFormTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[47];
const HTMLQualifiedName& kFrameTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[48];
const HTMLQualifiedName& kFramesetTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[49];
const HTMLQualifiedName& kH1Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[50];
const HTMLQualifiedName& kH2Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[51];
const HTMLQualifiedName& kH3Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[52];
const HTMLQualifiedName& kH4Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[53];
const HTMLQualifiedName& kH5Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[54];
const HTMLQualifiedName& kH6Tag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[55];
const HTMLQualifiedName& kHeadTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[56];
const HTMLQualifiedName& kHeaderTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[57];
const HTMLQualifiedName& kHgroupTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[58];
const HTMLQualifiedName& kHrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[59];
const HTMLQualifiedName& kHTMLTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[60];
const HTMLQualifiedName& kITag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[61];
const HTMLQualifiedName& kIFrameTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[62];
const HTMLQualifiedName& kImageTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[63];
const HTMLQualifiedName& kImgTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[64];
const HTMLQualifiedName& kInputTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[65];
const HTMLQualifiedName& kInsTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[66];
const HTMLQualifiedName& kKbdTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[67];
const HTMLQualifiedName& kKeygenTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[68];
const HTMLQualifiedName& kLabelTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[69];
const HTMLQualifiedName& kLayerTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[70];
const HTMLQualifiedName& kLegendTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[71];
const HTMLQualifiedName& kLiTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[72];
const HTMLQualifiedName& kLinkTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[73];
const HTMLQualifiedName& kListingTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[74];
const HTMLQualifiedName& kMainTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[75];
const HTMLQualifiedName& kMapTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[76];
const HTMLQualifiedName& kMarkTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[77];
const HTMLQualifiedName& kMarqueeTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[78];
const HTMLQualifiedName& kMenuTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[79];
const HTMLQualifiedName& kMetaTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[80];
const HTMLQualifiedName& kMeterTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[81];
const HTMLQualifiedName& kNavTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[82];
const HTMLQualifiedName& kNobrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[83];
const HTMLQualifiedName& kNoembedTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[84];
const HTMLQualifiedName& kNoframesTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[85];
const HTMLQualifiedName& kNolayerTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[86];
const HTMLQualifiedName& kNoscriptTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[87];
const HTMLQualifiedName& kObjectTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[88];
const HTMLQualifiedName& kOlTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[89];
const HTMLQualifiedName& kOptgroupTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[90];
const HTMLQualifiedName& kOptionTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[91];
const HTMLQualifiedName& kOutputTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[92];
const HTMLQualifiedName& kPTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[93];
const HTMLQualifiedName& kParamTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[94];
const HTMLQualifiedName& kPictureTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[95];
const HTMLQualifiedName& kPlaintextTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[96];
const HTMLQualifiedName& kPortalTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[97];
const HTMLQualifiedName& kPreTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[98];
const HTMLQualifiedName& kProgressTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[99];
const HTMLQualifiedName& kQTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[100];
const HTMLQualifiedName& kRbTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[101];
const HTMLQualifiedName& kRpTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[102];
const HTMLQualifiedName& kRtTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[103];
const HTMLQualifiedName& kRTCTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[104];
const HTMLQualifiedName& kRubyTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[105];
const HTMLQualifiedName& kSTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[106];
const HTMLQualifiedName& kSampTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[107];
const HTMLQualifiedName& kScriptTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[108];
const HTMLQualifiedName& kSectionTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[109];
const HTMLQualifiedName& kSelectTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[110];
const HTMLQualifiedName& kShadowTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[111];
const HTMLQualifiedName& kSlotTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[112];
const HTMLQualifiedName& kSmallTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[113];
const HTMLQualifiedName& kSourceTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[114];
const HTMLQualifiedName& kSpanTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[115];
const HTMLQualifiedName& kStrikeTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[116];
const HTMLQualifiedName& kStrongTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[117];
const HTMLQualifiedName& kStyleTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[118];
const HTMLQualifiedName& kSubTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[119];
const HTMLQualifiedName& kSummaryTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[120];
const HTMLQualifiedName& kSupTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[121];
const HTMLQualifiedName& kTableTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[122];
const HTMLQualifiedName& kTbodyTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[123];
const HTMLQualifiedName& kTdTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[124];
const HTMLQualifiedName& kTemplateTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[125];
const HTMLQualifiedName& kTextareaTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[126];
const HTMLQualifiedName& kTfootTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[127];
const HTMLQualifiedName& kThTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[128];
const HTMLQualifiedName& kTheadTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[129];
const HTMLQualifiedName& kTimeTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[130];
const HTMLQualifiedName& kTitleTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[131];
const HTMLQualifiedName& kTrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[132];
const HTMLQualifiedName& kTrackTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[133];
const HTMLQualifiedName& kTtTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[134];
const HTMLQualifiedName& kUTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[135];
const HTMLQualifiedName& kUlTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[136];
const HTMLQualifiedName& kVarTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[137];
const HTMLQualifiedName& kVideoTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[138];
const HTMLQualifiedName& kWbrTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[139];
const HTMLQualifiedName& kXmpTag = reinterpret_cast<HTMLQualifiedName*>(&tag_storage)[140];


std::unique_ptr<const HTMLQualifiedName*[]> GetTags() {
  auto tags = std::make_unique<const HTMLQualifiedName*[]>(kTagsCount);
  for (size_t i = 0; i < kTagsCount; ++i)
    tags[i] = reinterpret_cast<HTMLQualifiedName*>(&tag_storage) + i;
  return tags;
}

// Attributes

void* attr_storage[kAttrsCount * ((sizeof(QualifiedName) + sizeof(void *) - 1) / sizeof(void *))];

const QualifiedName& kAbbrAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[0];
const QualifiedName& kAcceptAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[1];
const QualifiedName& kAcceptCharsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[2];
const QualifiedName& kAccesskeyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[3];
const QualifiedName& kActionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[4];
const QualifiedName& kAlignAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[5];
const QualifiedName& kAlinkAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[6];
const QualifiedName& kAllowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[7];
const QualifiedName& kAllowfullscreenAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[8];
const QualifiedName& kAllowpaymentrequestAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[9];
const QualifiedName& kAltAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[10];
const QualifiedName& kArchiveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[11];
const QualifiedName& kAriaActivedescendantAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[12];
const QualifiedName& kAriaAtomicAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[13];
const QualifiedName& kAriaAutocompleteAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[14];
const QualifiedName& kAriaBusyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[15];
const QualifiedName& kAriaCheckedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[16];
const QualifiedName& kAriaColcountAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[17];
const QualifiedName& kAriaColindexAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[18];
const QualifiedName& kAriaColspanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[19];
const QualifiedName& kAriaControlsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[20];
const QualifiedName& kAriaCurrentAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[21];
const QualifiedName& kAriaDescribedbyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[22];
const QualifiedName& kAriaDetailsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[23];
const QualifiedName& kAriaDisabledAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[24];
const QualifiedName& kAriaDropeffectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[25];
const QualifiedName& kAriaErrormessageAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[26];
const QualifiedName& kAriaExpandedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[27];
const QualifiedName& kAriaFlowtoAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[28];
const QualifiedName& kAriaGrabbedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[29];
const QualifiedName& kAriaHaspopupAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[30];
const QualifiedName& kAriaHelpAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[31];
const QualifiedName& kAriaHiddenAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[32];
const QualifiedName& kAriaInvalidAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[33];
const QualifiedName& kAriaKeyshortcutsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[34];
const QualifiedName& kAriaLabelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[35];
const QualifiedName& kAriaLabeledbyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[36];
const QualifiedName& kAriaLabelledbyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[37];
const QualifiedName& kAriaLevelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[38];
const QualifiedName& kAriaLiveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[39];
const QualifiedName& kAriaModalAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[40];
const QualifiedName& kAriaMultilineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[41];
const QualifiedName& kAriaMultiselectableAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[42];
const QualifiedName& kAriaOrientationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[43];
const QualifiedName& kAriaOwnsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[44];
const QualifiedName& kAriaPlaceholderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[45];
const QualifiedName& kAriaPosinsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[46];
const QualifiedName& kAriaPressedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[47];
const QualifiedName& kAriaReadonlyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[48];
const QualifiedName& kAriaRelevantAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[49];
const QualifiedName& kAriaRequiredAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[50];
const QualifiedName& kAriaRoledescriptionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[51];
const QualifiedName& kAriaRowcountAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[52];
const QualifiedName& kAriaRowindexAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[53];
const QualifiedName& kAriaRowspanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[54];
const QualifiedName& kAriaSelectedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[55];
const QualifiedName& kAriaSetsizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[56];
const QualifiedName& kAriaSortAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[57];
const QualifiedName& kAriaValuemaxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[58];
const QualifiedName& kAriaValueminAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[59];
const QualifiedName& kAriaValuenowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[60];
const QualifiedName& kAriaValuetextAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[61];
const QualifiedName& kAsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[62];
const QualifiedName& kAsyncAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[63];
const QualifiedName& kAutocapitalizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[64];
const QualifiedName& kAutocompleteAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[65];
const QualifiedName& kAutocorrectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[66];
const QualifiedName& kAutofocusAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[67];
const QualifiedName& kAutopictureinpictureAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[68];
const QualifiedName& kAutoplayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[69];
const QualifiedName& kAxisAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[70];
const QualifiedName& kBackgroundAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[71];
const QualifiedName& kBehaviorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[72];
const QualifiedName& kBgcolorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[73];
const QualifiedName& kBorderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[74];
const QualifiedName& kBordercolorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[75];
const QualifiedName& kCaptureAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[76];
const QualifiedName& kCellpaddingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[77];
const QualifiedName& kCellspacingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[78];
const QualifiedName& kChallengeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[79];
const QualifiedName& kCharAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[80];
const QualifiedName& kCharoffAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[81];
const QualifiedName& kCharsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[82];
const QualifiedName& kCheckedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[83];
const QualifiedName& kCiteAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[84];
const QualifiedName& kClassAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[85];
const QualifiedName& kClassidAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[86];
const QualifiedName& kClearAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[87];
const QualifiedName& kCodeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[88];
const QualifiedName& kCodebaseAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[89];
const QualifiedName& kCodetypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[90];
const QualifiedName& kColorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[91];
const QualifiedName& kColsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[92];
const QualifiedName& kColspanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[93];
const QualifiedName& kCompactAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[94];
const QualifiedName& kContentAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[95];
const QualifiedName& kContenteditableAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[96];
const QualifiedName& kControlsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[97];
const QualifiedName& kControlslistAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[98];
const QualifiedName& kCoordsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[99];
const QualifiedName& kCrossoriginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[100];
const QualifiedName& kCspAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[101];
const QualifiedName& kDataAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[102];
const QualifiedName& kDatetimeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[103];
const QualifiedName& kDeclareAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[104];
const QualifiedName& kDecodingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[105];
const QualifiedName& kDefaultAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[106];
const QualifiedName& kDeferAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[107];
const QualifiedName& kDirAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[108];
const QualifiedName& kDirectionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[109];
const QualifiedName& kDirnameAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[110];
const QualifiedName& kDisabledAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[111];
const QualifiedName& kDisablepictureinpictureAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[112];
const QualifiedName& kDisableremoteplaybackAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[113];
const QualifiedName& kDownloadAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[114];
const QualifiedName& kDraggableAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[115];
const QualifiedName& kElementtimingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[116];
const QualifiedName& kEnctypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[117];
const QualifiedName& kEndAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[118];
const QualifiedName& kEventAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[119];
const QualifiedName& kExportpartsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[120];
const QualifiedName& kFaceAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[121];
const QualifiedName& kForAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[122];
const QualifiedName& kFormAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[123];
const QualifiedName& kFormactionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[124];
const QualifiedName& kFormenctypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[125];
const QualifiedName& kFormmethodAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[126];
const QualifiedName& kFormnovalidateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[127];
const QualifiedName& kFormtargetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[128];
const QualifiedName& kFrameAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[129];
const QualifiedName& kFrameborderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[130];
const QualifiedName& kHeadersAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[131];
const QualifiedName& kHeightAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[132];
const QualifiedName& kHiddenAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[133];
const QualifiedName& kHighAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[134];
const QualifiedName& kHrefAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[135];
const QualifiedName& kHreflangAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[136];
const QualifiedName& kHreftranslateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[137];
const QualifiedName& kHspaceAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[138];
const QualifiedName& kHttpEquivAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[139];
const QualifiedName& kIdAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[140];
const QualifiedName& kImagesizesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[141];
const QualifiedName& kImagesrcsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[142];
const QualifiedName& kImportanceAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[143];
const QualifiedName& kIncrementalAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[144];
const QualifiedName& kInertAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[145];
const QualifiedName& kInputmodeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[146];
const QualifiedName& kIntegrityAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[147];
const QualifiedName& kIntrinsicsizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[148];
const QualifiedName& kInvisibleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[149];
const QualifiedName& kIsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[150];
const QualifiedName& kIsmapAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[151];
const QualifiedName& kKeytypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[152];
const QualifiedName& kKindAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[153];
const QualifiedName& kLabelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[154];
const QualifiedName& kLangAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[155];
const QualifiedName& kLanguageAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[156];
const QualifiedName& kLeftmarginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[157];
const QualifiedName& kLinkAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[158];
const QualifiedName& kListAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[159];
const QualifiedName& kLoadingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[160];
const QualifiedName& kLongdescAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[161];
const QualifiedName& kLoopAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[162];
const QualifiedName& kLowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[163];
const QualifiedName& kLowsrcAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[164];
const QualifiedName& kManifestAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[165];
const QualifiedName& kMarginheightAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[166];
const QualifiedName& kMarginwidthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[167];
const QualifiedName& kMaxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[168];
const QualifiedName& kMaxlengthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[169];
const QualifiedName& kMayscriptAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[170];
const QualifiedName& kMediaAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[171];
const QualifiedName& kMethodAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[172];
const QualifiedName& kMinAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[173];
const QualifiedName& kMinlengthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[174];
const QualifiedName& kMultipleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[175];
const QualifiedName& kMutedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[176];
const QualifiedName& kNameAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[177];
const QualifiedName& kNohrefAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[178];
const QualifiedName& kNomoduleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[179];
const QualifiedName& kNonceAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[180];
const QualifiedName& kNoresizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[181];
const QualifiedName& kNoshadeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[182];
const QualifiedName& kNovalidateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[183];
const QualifiedName& kNowrapAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[184];
const QualifiedName& kObjectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[185];
const QualifiedName& kOnabortAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[186];
const QualifiedName& kOnactivateinvisibleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[187];
const QualifiedName& kOnafterprintAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[188];
const QualifiedName& kOnanimationendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[189];
const QualifiedName& kOnanimationiterationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[190];
const QualifiedName& kOnanimationstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[191];
const QualifiedName& kOnauxclickAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[192];
const QualifiedName& kOnbeforeactivateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[193];
const QualifiedName& kOnbeforecopyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[194];
const QualifiedName& kOnbeforecutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[195];
const QualifiedName& kOnbeforepasteAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[196];
const QualifiedName& kOnbeforeprintAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[197];
const QualifiedName& kOnbeforeunloadAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[198];
const QualifiedName& kOnblurAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[199];
const QualifiedName& kOncancelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[200];
const QualifiedName& kOncanplayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[201];
const QualifiedName& kOncanplaythroughAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[202];
const QualifiedName& kOnchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[203];
const QualifiedName& kOnclickAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[204];
const QualifiedName& kOncloseAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[205];
const QualifiedName& kOncontextmenuAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[206];
const QualifiedName& kOncopyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[207];
const QualifiedName& kOncuechangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[208];
const QualifiedName& kOncutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[209];
const QualifiedName& kOndblclickAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[210];
const QualifiedName& kOndragAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[211];
const QualifiedName& kOndragendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[212];
const QualifiedName& kOndragenterAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[213];
const QualifiedName& kOndragleaveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[214];
const QualifiedName& kOndragoverAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[215];
const QualifiedName& kOndragstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[216];
const QualifiedName& kOndropAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[217];
const QualifiedName& kOndurationchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[218];
const QualifiedName& kOnemptiedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[219];
const QualifiedName& kOnendedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[220];
const QualifiedName& kOnerrorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[221];
const QualifiedName& kOnfocusAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[222];
const QualifiedName& kOnfocusinAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[223];
const QualifiedName& kOnfocusoutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[224];
const QualifiedName& kOnformdataAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[225];
const QualifiedName& kOngotpointercaptureAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[226];
const QualifiedName& kOnhashchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[227];
const QualifiedName& kOninputAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[228];
const QualifiedName& kOninvalidAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[229];
const QualifiedName& kOnkeydownAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[230];
const QualifiedName& kOnkeypressAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[231];
const QualifiedName& kOnkeyupAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[232];
const QualifiedName& kOnlanguagechangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[233];
const QualifiedName& kOnloadAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[234];
const QualifiedName& kOnloadeddataAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[235];
const QualifiedName& kOnloadedmetadataAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[236];
const QualifiedName& kOnloadstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[237];
const QualifiedName& kOnlostpointercaptureAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[238];
const QualifiedName& kOnmessageAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[239];
const QualifiedName& kOnmessageerrorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[240];
const QualifiedName& kOnmousedownAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[241];
const QualifiedName& kOnmouseenterAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[242];
const QualifiedName& kOnmouseleaveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[243];
const QualifiedName& kOnmousemoveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[244];
const QualifiedName& kOnmouseoutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[245];
const QualifiedName& kOnmouseoverAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[246];
const QualifiedName& kOnmouseupAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[247];
const QualifiedName& kOnmousewheelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[248];
const QualifiedName& kOnofflineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[249];
const QualifiedName& kOnonlineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[250];
const QualifiedName& kOnorientationchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[251];
const QualifiedName& kOnoverscrollAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[252];
const QualifiedName& kOnpagehideAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[253];
const QualifiedName& kOnpageshowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[254];
const QualifiedName& kOnpasteAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[255];
const QualifiedName& kOnpauseAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[256];
const QualifiedName& kOnplayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[257];
const QualifiedName& kOnplayingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[258];
const QualifiedName& kOnpointercancelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[259];
const QualifiedName& kOnpointerdownAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[260];
const QualifiedName& kOnpointerenterAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[261];
const QualifiedName& kOnpointerleaveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[262];
const QualifiedName& kOnpointermoveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[263];
const QualifiedName& kOnpointeroutAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[264];
const QualifiedName& kOnpointeroverAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[265];
const QualifiedName& kOnpointerrawupdateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[266];
const QualifiedName& kOnpointerupAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[267];
const QualifiedName& kOnpopstateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[268];
const QualifiedName& kOnportalactivateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[269];
const QualifiedName& kOnprogressAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[270];
const QualifiedName& kOnratechangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[271];
const QualifiedName& kOnresetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[272];
const QualifiedName& kOnresizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[273];
const QualifiedName& kOnscrollAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[274];
const QualifiedName& kOnscrollendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[275];
const QualifiedName& kOnsearchAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[276];
const QualifiedName& kOnseekedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[277];
const QualifiedName& kOnseekingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[278];
const QualifiedName& kOnselectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[279];
const QualifiedName& kOnselectionchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[280];
const QualifiedName& kOnselectstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[281];
const QualifiedName& kOnshowAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[282];
const QualifiedName& kOnstalledAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[283];
const QualifiedName& kOnstorageAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[284];
const QualifiedName& kOnsubmitAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[285];
const QualifiedName& kOnsuspendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[286];
const QualifiedName& kOntimeupdateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[287];
const QualifiedName& kOntoggleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[288];
const QualifiedName& kOntouchcancelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[289];
const QualifiedName& kOntouchendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[290];
const QualifiedName& kOntouchmoveAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[291];
const QualifiedName& kOntouchstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[292];
const QualifiedName& kOntransitionendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[293];
const QualifiedName& kOnunloadAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[294];
const QualifiedName& kOnvolumechangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[295];
const QualifiedName& kOnwaitingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[296];
const QualifiedName& kOnwebkitanimationendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[297];
const QualifiedName& kOnwebkitanimationiterationAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[298];
const QualifiedName& kOnwebkitanimationstartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[299];
const QualifiedName& kOnwebkitfullscreenchangeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[300];
const QualifiedName& kOnwebkitfullscreenerrorAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[301];
const QualifiedName& kOnwebkittransitionendAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[302];
const QualifiedName& kOnwheelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[303];
const QualifiedName& kOpenAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[304];
const QualifiedName& kOptimumAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[305];
const QualifiedName& kPartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[306];
const QualifiedName& kPatternAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[307];
const QualifiedName& kPingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[308];
const QualifiedName& kPlaceholderAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[309];
const QualifiedName& kPlaysinlineAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[310];
const QualifiedName& kPosterAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[311];
const QualifiedName& kPreloadAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[312];
const QualifiedName& kPseudoAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[313];
const QualifiedName& kReadonlyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[314];
const QualifiedName& kReferrerpolicyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[315];
const QualifiedName& kRelAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[316];
const QualifiedName& kRequiredAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[317];
const QualifiedName& kRevAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[318];
const QualifiedName& kReversedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[319];
const QualifiedName& kRoleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[320];
const QualifiedName& kRowsAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[321];
const QualifiedName& kRowspanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[322];
const QualifiedName& kRulesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[323];
const QualifiedName& kSandboxAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[324];
const QualifiedName& kSchemeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[325];
const QualifiedName& kScopeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[326];
const QualifiedName& kScrollamountAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[327];
const QualifiedName& kScrolldelayAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[328];
const QualifiedName& kScrollingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[329];
const QualifiedName& kSelectAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[330];
const QualifiedName& kSelectedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[331];
const QualifiedName& kShapeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[332];
const QualifiedName& kSizeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[333];
const QualifiedName& kSizesAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[334];
const QualifiedName& kSlotAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[335];
const QualifiedName& kSpanAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[336];
const QualifiedName& kSpellcheckAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[337];
const QualifiedName& kSrcAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[338];
const QualifiedName& kSrcdocAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[339];
const QualifiedName& kSrclangAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[340];
const QualifiedName& kSrcsetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[341];
const QualifiedName& kStandbyAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[342];
const QualifiedName& kStartAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[343];
const QualifiedName& kStepAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[344];
const QualifiedName& kStyleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[345];
const QualifiedName& kSummaryAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[346];
const QualifiedName& kTabindexAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[347];
const QualifiedName& kTargetAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[348];
const QualifiedName& kTextAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[349];
const QualifiedName& kTitleAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[350];
const QualifiedName& kTopmarginAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[351];
const QualifiedName& kTranslateAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[352];
const QualifiedName& kTruespeedAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[353];
const QualifiedName& kTypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[354];
const QualifiedName& kUsemapAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[355];
const QualifiedName& kValignAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[356];
const QualifiedName& kValueAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[357];
const QualifiedName& kValuetypeAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[358];
const QualifiedName& kVersionAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[359];
const QualifiedName& kVlinkAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[360];
const QualifiedName& kVspaceAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[361];
const QualifiedName& kWebkitdirectoryAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[362];
const QualifiedName& kWidthAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[363];
const QualifiedName& kWrapAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[364];



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
  AtomicString ns_uri("http://www.w3.org/1999/xhtml");
  new ((void*)&xhtmlNamespaceURI) AtomicString(ns_uri);

  static const NameEntry kNames[] = {
    { "a", 9778235, 1, 1, 0 },
    { "abbr", 650525, 4, 1, 1 },
    { "accept", 4839857, 6, 0, 1 },
    { "accept-charset", 5192676, 14, 0, 1 },
    { "accesskey", 15931860, 9, 0, 1 },
    { "acronym", 5486176, 7, 1, 0 },
    { "action", 14878034, 6, 0, 1 },
    { "address", 10008206, 7, 1, 0 },
    { "align", 10094397, 5, 0, 1 },
    { "alink", 2408650, 5, 0, 1 },
    { "allow", 545133, 5, 0, 1 },
    { "allowfullscreen", 16375700, 15, 0, 1 },
    { "allowpaymentrequest", 3434431, 19, 0, 1 },
    { "alt", 15335609, 3, 0, 1 },
    { "applet", 7823075, 6, 1, 0 },
    { "archive", 13839011, 7, 0, 1 },
    { "area", 7355486, 4, 1, 0 },
    { "aria-activedescendant", 13338511, 21, 0, 1 },
    { "aria-atomic", 12819054, 11, 0, 1 },
    { "aria-autocomplete", 1968559, 17, 0, 1 },
    { "aria-busy", 75863, 9, 0, 1 },
    { "aria-checked", 1517039, 12, 0, 1 },
    { "aria-colcount", 16595205, 13, 0, 1 },
    { "aria-colindex", 12411497, 13, 0, 1 },
    { "aria-colspan", 14075199, 12, 0, 1 },
    { "aria-controls", 5490937, 13, 0, 1 },
    { "aria-current", 3766836, 12, 0, 1 },
    { "aria-describedby", 5549123, 16, 0, 1 },
    { "aria-details", 1315032, 12, 0, 1 },
    { "aria-disabled", 1389455, 13, 0, 1 },
    { "aria-dropeffect", 6009141, 15, 0, 1 },
    { "aria-errormessage", 8553389, 17, 0, 1 },
    { "aria-expanded", 6946219, 13, 0, 1 },
    { "aria-flowto", 12186959, 11, 0, 1 },
    { "aria-grabbed", 5310651, 12, 0, 1 },
    { "aria-haspopup", 7196359, 13, 0, 1 },
    { "aria-help", 12225580, 9, 0, 1 },
    { "aria-hidden", 7981896, 11, 0, 1 },
    { "aria-invalid", 3505375, 12, 0, 1 },
    { "aria-keyshortcuts", 10812414, 17, 0, 1 },
    { "aria-label", 561329, 10, 0, 1 },
    { "aria-labeledby", 5436988, 14, 0, 1 },
    { "aria-labelledby", 5412329, 15, 0, 1 },
    { "aria-level", 8886396, 10, 0, 1 },
    { "aria-live", 2064917, 9, 0, 1 },
    { "aria-modal", 12602557, 10, 0, 1 },
    { "aria-multiline", 13431022, 14, 0, 1 },
    { "aria-multiselectable", 14347206, 20, 0, 1 },
    { "aria-orientation", 11685540, 16, 0, 1 },
    { "aria-owns", 15671106, 9, 0, 1 },
    { "aria-placeholder", 14483277, 16, 0, 1 },
    { "aria-posinset", 14818088, 13, 0, 1 },
    { "aria-pressed", 8024627, 12, 0, 1 },
    { "aria-readonly", 1588657, 13, 0, 1 },
    { "aria-relevant", 16457375, 13, 0, 1 },
    { "aria-required", 10656135, 13, 0, 1 },
    { "aria-roledescription", 14879786, 20, 0, 1 },
    { "aria-rowcount", 13808306, 13, 0, 1 },
    { "aria-rowindex", 14976311, 13, 0, 1 },
    { "aria-rowspan", 4197864, 12, 0, 1 },
    { "aria-selected", 16608989, 13, 0, 1 },
    { "aria-setsize", 13328899, 12, 0, 1 },
    { "aria-sort", 15568337, 9, 0, 1 },
    { "aria-valuemax", 15306660, 13, 0, 1 },
    { "aria-valuemin", 2814091, 13, 0, 1 },
    { "aria-valuenow", 10189949, 13, 0, 1 },
    { "aria-valuetext", 14438832, 14, 0, 1 },
    { "article", 2968800, 7, 1, 0 },
    { "as", 8588719, 2, 0, 1 },
    { "aside", 10128566, 5, 1, 0 },
    { "async", 2556481, 5, 0, 1 },
    { "audio", 2129307, 5, 1, 0 },
    { "autocapitalize", 15613526, 14, 0, 1 },
    { "autocomplete", 14667434, 12, 0, 1 },
    { "autocorrect", 9366253, 11, 0, 1 },
    { "autofocus", 16282013, 9, 0, 1 },
    { "autopictureinpicture", 11655584, 20, 0, 1 },
    { "autoplay", 12002525, 8, 0, 1 },
    { "axis", 14347904, 4, 0, 1 },
    { "b", 7170995, 1, 1, 0 },
    { "background", 8107606, 10, 0, 1 },
    { "base", 4376626, 4, 1, 0 },
    { "basefont", 5439393, 8, 1, 0 },
    { "bdi", 14809812, 3, 1, 0 },
    { "bdo", 9906743, 3, 1, 0 },
    { "behavior", 11804611, 8, 0, 1 },
    { "bgcolor", 11074228, 7, 0, 1 },
    { "bgsound", 9424179, 7, 1, 0 },
    { "big", 2330122, 3, 1, 0 },
    { "blockquote", 6047050, 10, 1, 0 },
    { "body", 4862692, 4, 1, 0 },
    { "border", 4389816, 6, 0, 1 },
    { "bordercolor", 12757423, 11, 0, 1 },
    { "br", 5574895, 2, 1, 0 },
    { "button", 679691, 6, 1, 0 },
    { "canvas", 10973550, 6, 1, 0 },
    { "caption", 2437650, 7, 1, 0 },
    { "capture", 9991654, 7, 0, 1 },
    { "cellpadding", 3763331, 11, 0, 1 },
    { "cellspacing", 7849745, 11, 0, 1 },
    { "center", 909285, 6, 1, 0 },
    { "challenge", 12755365, 9, 0, 1 },
    { "char", 12296599, 4, 0, 1 },
    { "charoff", 5577617, 7, 0, 1 },
    { "charset", 14273970, 7, 0, 1 },
    { "checked", 10213523, 7, 0, 1 },
    { "cite", 3704129, 4, 1, 1 },
    { "class", 1023741, 5, 0, 1 },
    { "classid", 1789995, 7, 0, 1 },
    { "clear", 12832795, 5, 0, 1 },
    { "code", 11588001, 4, 1, 1 },
    { "codebase", 3375722, 8, 0, 1 },
    { "codetype", 7482920, 8, 0, 1 },
    { "col", 12850806, 3, 1, 0 },
    { "colgroup", 3733719, 8, 1, 0 },
    { "color", 2734929, 5, 0, 1 },
    { "cols", 4921975, 4, 0, 1 },
    { "colspan", 9715319, 7, 0, 1 },
    { "command", 2099501, 7, 1, 0 },
    { "compact", 369367, 7, 0, 1 },
    { "content", 6894765, 7, 1, 1 },
    { "contenteditable", 1577657, 15, 0, 1 },
    { "controls", 3696819, 8, 0, 1 },
    { "controlslist", 1084486, 12, 0, 1 },
    { "coords", 14288829, 6, 0, 1 },
    { "crossorigin", 15142862, 11, 0, 1 },
    { "csp", 10164305, 3, 0, 1 },
    { "data", 5273875, 4, 1, 1 },
    { "datalist", 7058973, 8, 1, 0 },
    { "datetime", 12167257, 8, 0, 1 },
    { "dd", 16480447, 2, 1, 0 },
    { "declare", 13440114, 7, 0, 1 },
    { "decoding", 7847386, 8, 0, 1 },
    { "default", 6674383, 7, 0, 1 },
    { "defer", 13832204, 5, 0, 1 },
    { "del", 2501459, 3, 1, 0 },
    { "details", 4653180, 7, 1, 0 },
    { "dfn", 5168569, 3, 1, 0 },
    { "dialog", 1232842, 6, 1, 0 },
    { "dir", 5122803, 3, 1, 1 },
    { "direction", 16092904, 9, 0, 1 },
    { "dirname", 9899348, 7, 0, 1 },
    { "disabled", 12237545, 8, 0, 1 },
    { "disablepictureinpicture", 9337522, 23, 0, 1 },
    { "disableremoteplayback", 1822732, 21, 0, 1 },
    { "div", 9762591, 3, 1, 0 },
    { "dl", 5117854, 2, 1, 0 },
    { "download", 1050544, 8, 0, 1 },
    { "draggable", 9281278, 9, 0, 1 },
    { "dt", 8177126, 2, 1, 0 },
    { "elementtiming", 15863081, 13, 0, 1 },
    { "em", 2724661, 2, 1, 0 },
    { "embed", 855371, 5, 1, 0 },
    { "enctype", 11388071, 7, 0, 1 },
    { "end", 1590106, 3, 0, 1 },
    { "event", 4205160, 5, 0, 1 },
    { "exportparts", 2387422, 11, 0, 1 },
    { "face", 12427611, 4, 0, 1 },
    { "fieldset", 37097, 8, 1, 0 },
    { "figcaption", 13388641, 10, 1, 0 },
    { "figure", 13776479, 6, 1, 0 },
    { "font", 4588695, 4, 1, 0 },
    { "footer", 13359933, 6, 1, 0 },
    { "for", 4145292, 3, 0, 1 },
    { "form", 10060301, 4, 1, 1 },
    { "formaction", 12667227, 10, 0, 1 },
    { "formenctype", 6334991, 11, 0, 1 },
    { "formmethod", 7653832, 10, 0, 1 },
    { "formnovalidate", 5722173, 14, 0, 1 },
    { "formtarget", 15594141, 10, 0, 1 },
    { "frame", 3408403, 5, 1, 1 },
    { "frameborder", 6035536, 11, 0, 1 },
    { "frameset", 11229107, 8, 1, 0 },
    { "h1", 3953979, 2, 1, 0 },
    { "h2", 9378819, 2, 1, 0 },
    { "h3", 1803164, 2, 1, 0 },
    { "h4", 15343268, 2, 1, 0 },
    { "h5", 8065295, 2, 1, 0 },
    { "h6", 9566891, 2, 1, 0 },
    { "head", 11457121, 4, 1, 0 },
    { "header", 5896178, 6, 1, 0 },
    { "headers", 2627673, 7, 0, 1 },
    { "height", 6697833, 6, 0, 1 },
    { "hgroup", 8927907, 6, 1, 0 },
    { "hidden", 12930326, 6, 0, 1 },
    { "high", 11748844, 4, 0, 1 },
    { "hr", 7182703, 2, 1, 0 },
    { "href", 5797448, 4, 0, 1 },
    { "hreflang", 12582042, 8, 0, 1 },
    { "hreftranslate", 14734657, 13, 0, 1 },
    { "hspace", 4182216, 6, 0, 1 },
    { "html", 7123128, 4, 1, 0 },
    { "http-equiv", 12415310, 10, 0, 1 },
    { "i", 16149244, 1, 1, 0 },
    { "id", 6145549, 2, 0, 1 },
    { "iframe", 16643553, 6, 1, 0 },
    { "image", 10287573, 5, 1, 0 },
    { "imagesizes", 5309580, 10, 0, 1 },
    { "imagesrcset", 10398004, 11, 0, 1 },
    { "img", 11398162, 3, 1, 0 },
    { "importance", 7701440, 10, 0, 1 },
    { "incremental", 9277578, 11, 0, 1 },
    { "inert", 13333395, 5, 0, 1 },
    { "input", 10365436, 5, 1, 0 },
    { "inputmode", 2781876, 9, 0, 1 },
    { "ins", 939786, 3, 1, 0 },
    { "integrity", 8960270, 9, 0, 1 },
    { "intrinsicsize", 6463719, 13, 0, 1 },
    { "invisible", 2501496, 9, 0, 1 },
    { "is", 15617733, 2, 0, 1 },
    { "ismap", 6887213, 5, 0, 1 },
    { "kbd", 8554610, 3, 1, 0 },
    { "keygen", 5603105, 6, 1, 0 },
    { "keytype", 13164152, 7, 0, 1 },
    { "kind", 7022868, 4, 0, 1 },
    { "label", 15092473, 5, 1, 1 },
    { "lang", 3702417, 4, 0, 1 },
    { "language", 4109061, 8, 0, 1 },
    { "layer", 16475212, 5, 1, 0 },
    { "leftmargin", 10359506, 10, 0, 1 },
    { "legend", 16417202, 6, 1, 0 },
    { "li", 11097939, 2, 1, 0 },
    { "link", 7010491, 4, 1, 1 },
    { "list", 15078159, 4, 0, 1 },
    { "listing", 15674586, 7, 1, 0 },
    { "loading", 13228638, 7, 0, 1 },
    { "longdesc", 2363416, 8, 0, 1 },
    { "loop", 12741482, 4, 0, 1 },
    { "low", 9523344, 3, 0, 1 },
    { "lowsrc", 8943146, 6, 0, 1 },
    { "main", 13501767, 4, 1, 0 },
    { "manifest", 3853375, 8, 0, 1 },
    { "map", 16519384, 3, 1, 0 },
    { "marginheight", 14117911, 12, 0, 1 },
    { "marginwidth", 5458369, 11, 0, 1 },
    { "mark", 16508213, 4, 1, 0 },
    { "marquee", 1416619, 7, 1, 0 },
    { "max", 3449166, 3, 0, 1 },
    { "maxlength", 5985164, 9, 0, 1 },
    { "mayscript", 9718095, 9, 0, 1 },
    { "media", 13905581, 5, 0, 1 },
    { "menu", 13428288, 4, 1, 0 },
    { "meta", 14067019, 4, 1, 0 },
    { "meter", 5815470, 5, 1, 0 },
    { "method", 14679268, 6, 0, 1 },
    { "min", 2196278, 3, 0, 1 },
    { "minlength", 4633736, 9, 0, 1 },
    { "multiple", 6185486, 8, 0, 1 },
    { "muted", 11680767, 5, 0, 1 },
    { "name", 8774809, 4, 0, 1 },
    { "nav", 15269619, 3, 1, 0 },
    { "nobr", 419763, 4, 1, 0 },
    { "noembed", 11476379, 7, 1, 0 },
    { "noframes", 13751064, 8, 1, 0 },
    { "nohref", 2672291, 6, 0, 1 },
    { "nolayer", 10430133, 7, 1, 0 },
    { "nomodule", 10903441, 8, 0, 1 },
    { "nonce", 12597381, 5, 0, 1 },
    { "noresize", 11098542, 8, 0, 1 },
    { "noscript", 10168152, 8, 1, 0 },
    { "noshade", 12172860, 7, 0, 1 },
    { "novalidate", 5146510, 10, 0, 1 },
    { "nowrap", 15804466, 6, 0, 1 },
    { "object", 6907086, 6, 1, 1 },
    { "ol", 6672076, 2, 1, 0 },
    { "onabort", 9017557, 7, 0, 1 },
    { "onactivateinvisible", 11186156, 19, 0, 1 },
    { "onafterprint", 575683, 12, 0, 1 },
    { "onanimationend", 15950082, 14, 0, 1 },
    { "onanimationiteration", 6837014, 20, 0, 1 },
    { "onanimationstart", 3893294, 16, 0, 1 },
    { "onauxclick", 12100197, 10, 0, 1 },
    { "onbeforeactivate", 12901563, 16, 0, 1 },
    { "onbeforecopy", 10445229, 12, 0, 1 },
    { "onbeforecut", 7604779, 11, 0, 1 },
    { "onbeforepaste", 10932396, 13, 0, 1 },
    { "onbeforeprint", 9964378, 13, 0, 1 },
    { "onbeforeunload", 10408067, 14, 0, 1 },
    { "onblur", 10264279, 6, 0, 1 },
    { "oncancel", 1433968, 8, 0, 1 },
    { "oncanplay", 11894364, 9, 0, 1 },
    { "oncanplaythrough", 9632525, 16, 0, 1 },
    { "onchange", 1588214, 8, 0, 1 },
    { "onclick", 668060, 7, 0, 1 },
    { "onclose", 76675, 7, 0, 1 },
    { "oncontextmenu", 10957436, 13, 0, 1 },
    { "oncopy", 3498124, 6, 0, 1 },
    { "oncuechange", 8858494, 11, 0, 1 },
    { "oncut", 530518, 5, 0, 1 },
    { "ondblclick", 9484479, 10, 0, 1 },
    { "ondrag", 7755023, 6, 0, 1 },
    { "ondragend", 12737756, 9, 0, 1 },
    { "ondragenter", 7625423, 11, 0, 1 },
    { "ondragleave", 2163828, 11, 0, 1 },
    { "ondragover", 7621126, 10, 0, 1 },
    { "ondragstart", 7563418, 11, 0, 1 },
    { "ondrop", 5167850, 6, 0, 1 },
    { "ondurationchange", 3875418, 16, 0, 1 },
    { "onemptied", 7216733, 9, 0, 1 },
    { "onended", 4168741, 7, 0, 1 },
    { "onerror", 2658286, 7, 0, 1 },
    { "onfocus", 11484753, 7, 0, 1 },
    { "onfocusin", 2970475, 9, 0, 1 },
    { "onfocusout", 4459422, 10, 0, 1 },
    { "onformdata", 10727263, 10, 0, 1 },
    { "ongotpointercapture", 2372412, 19, 0, 1 },
    { "onhashchange", 897163, 12, 0, 1 },
    { "oninput", 7945347, 7, 0, 1 },
    { "oninvalid", 15155464, 9, 0, 1 },
    { "onkeydown", 917683, 9, 0, 1 },
    { "onkeypress", 10628960, 10, 0, 1 },
    { "onkeyup", 7098679, 7, 0, 1 },
    { "onlanguagechange", 1694325, 16, 0, 1 },
    { "onload", 1245164, 6, 0, 1 },
    { "onloadeddata", 6667087, 12, 0, 1 },
    { "onloadedmetadata", 11435152, 16, 0, 1 },
    { "onloadstart", 11661007, 11, 0, 1 },
    { "onlostpointercapture", 802842, 20, 0, 1 },
    { "onmessage", 15511252, 9, 0, 1 },
    { "onmessageerror", 9850211, 14, 0, 1 },
    { "onmousedown", 10902312, 11, 0, 1 },
    { "onmouseenter", 12011136, 12, 0, 1 },
    { "onmouseleave", 9750696, 12, 0, 1 },
    { "onmousemove", 13128910, 11, 0, 1 },
    { "onmouseout", 3672358, 10, 0, 1 },
    { "onmouseover", 5456314, 11, 0, 1 },
    { "onmouseup", 8932826, 9, 0, 1 },
    { "onmousewheel", 8230218, 12, 0, 1 },
    { "onoffline", 8780424, 9, 0, 1 },
    { "ononline", 6361718, 8, 0, 1 },
    { "onorientationchange", 4305565, 19, 0, 1 },
    { "onoverscroll", 3178922, 12, 0, 1 },
    { "onpagehide", 11684100, 10, 0, 1 },
    { "onpageshow", 2047001, 10, 0, 1 },
    { "onpaste", 8282984, 7, 0, 1 },
    { "onpause", 9216789, 7, 0, 1 },
    { "onplay", 4469333, 6, 0, 1 },
    { "onplaying", 6622660, 9, 0, 1 },
    { "onpointercancel", 2324926, 15, 0, 1 },
    { "onpointerdown", 10016179, 13, 0, 1 },
    { "onpointerenter", 10864703, 14, 0, 1 },
    { "onpointerleave", 14255900, 14, 0, 1 },
    { "onpointermove", 9972261, 13, 0, 1 },
    { "onpointerout", 4396030, 12, 0, 1 },
    { "onpointerover", 10266558, 13, 0, 1 },
    { "onpointerrawupdate", 15507866, 18, 0, 1 },
    { "onpointerup", 10289755, 11, 0, 1 },
    { "onpopstate", 5473424, 10, 0, 1 },
    { "onportalactivate", 2282282, 16, 0, 1 },
    { "onprogress", 11307581, 10, 0, 1 },
    { "onratechange", 8724969, 12, 0, 1 },
    { "onreset", 871509, 7, 0, 1 },
    { "onresize", 6999701, 8, 0, 1 },
    { "onscroll", 11456051, 8, 0, 1 },
    { "onscrollend", 6668226, 11, 0, 1 },
    { "onsearch", 13779639, 8, 0, 1 },
    { "onseeked", 15270585, 8, 0, 1 },
    { "onseeking", 1397795, 9, 0, 1 },
    { "onselect", 10837779, 8, 0, 1 },
    { "onselectionchange", 2738107, 17, 0, 1 },
    { "onselectstart", 4928924, 13, 0, 1 },
    { "onshow", 15330334, 6, 0, 1 },
    { "onstalled", 366130, 9, 0, 1 },
    { "onstorage", 3472742, 9, 0, 1 },
    { "onsubmit", 10895898, 8, 0, 1 },
    { "onsuspend", 3306534, 9, 0, 1 },
    { "ontimeupdate", 15260240, 12, 0, 1 },
    { "ontoggle", 14882770, 8, 0, 1 },
    { "ontouchcancel", 11977340, 13, 0, 1 },
    { "ontouchend", 14649050, 10, 0, 1 },
    { "ontouchmove", 3062696, 11, 0, 1 },
    { "ontouchstart", 15650339, 12, 0, 1 },
    { "ontransitionend", 14486006, 15, 0, 1 },
    { "onunload", 265474, 8, 0, 1 },
    { "onvolumechange", 1227173, 14, 0, 1 },
    { "onwaiting", 14930497, 9, 0, 1 },
    { "onwebkitanimationend", 4247475, 20, 0, 1 },
    { "onwebkitanimationiteration", 2350168, 26, 0, 1 },
    { "onwebkitanimationstart", 1438902, 22, 0, 1 },
    { "onwebkitfullscreenchange", 4583393, 24, 0, 1 },
    { "onwebkitfullscreenerror", 16488541, 23, 0, 1 },
    { "onwebkittransitionend", 3568476, 21, 0, 1 },
    { "onwheel", 3280514, 7, 0, 1 },
    { "open", 13703631, 4, 0, 1 },
    { "optgroup", 10180907, 8, 1, 0 },
    { "optimum", 3350287, 7, 0, 1 },
    { "option", 2998548, 6, 1, 0 },
    { "output", 15319621, 6, 1, 0 },
    { "p", 587733, 1, 1, 0 },
    { "param", 15210019, 5, 1, 0 },
    { "part", 10491608, 4, 0, 1 },
    { "pattern", 16283150, 7, 0, 1 },
    { "picture", 7136372, 7, 1, 0 },
    { "ping", 9193756, 4, 0, 1 },
    { "placeholder", 6132349, 11, 0, 1 },
    { "plaintext", 2551274, 9, 1, 0 },
    { "playsinline", 1471917, 11, 0, 1 },
    { "portal", 1666147, 6, 1, 0 },
    { "poster", 2570443, 6, 0, 1 },
    { "pre", 16061734, 3, 1, 0 },
    { "preload", 11887554, 7, 0, 1 },
    { "progress", 11461517, 8, 1, 0 },
    { "pseudo", 6923620, 6, 0, 1 },
    { "q", 12607837, 1, 1, 0 },
    { "rb", 4749743, 2, 1, 0 },
    { "readonly", 4471832, 8, 0, 1 },
    { "referrerpolicy", 13927145, 14, 0, 1 },
    { "rel", 8963158, 3, 0, 1 },
    { "required", 4894573, 8, 0, 1 },
    { "rev", 12217053, 3, 0, 1 },
    { "reversed", 15723650, 8, 0, 1 },
    { "role", 16084934, 4, 0, 1 },
    { "rows", 11770835, 4, 0, 1 },
    { "rowspan", 13630419, 7, 0, 1 },
    { "rp", 4502666, 2, 1, 0 },
    { "rt", 8494892, 2, 1, 0 },
    { "rtc", 4350543, 3, 1, 0 },
    { "ruby", 12793227, 4, 1, 0 },
    { "rules", 8604373, 5, 0, 1 },
    { "s", 11249530, 1, 1, 0 },
    { "samp", 3617274, 4, 1, 0 },
    { "sandbox", 3448190, 7, 0, 1 },
    { "scheme", 3952063, 6, 0, 1 },
    { "scope", 5624816, 5, 0, 1 },
    { "script", 7137273, 6, 1, 0 },
    { "scrollamount", 8309213, 12, 0, 1 },
    { "scrolldelay", 15755012, 11, 0, 1 },
    { "scrolling", 4321742, 9, 0, 1 },
    { "section", 8056235, 7, 1, 0 },
    { "select", 210571, 6, 1, 1 },
    { "selected", 15762609, 8, 0, 1 },
    { "shadow", 1972219, 6, 1, 0 },
    { "shape", 15210140, 5, 0, 1 },
    { "size", 12715024, 4, 0, 1 },
    { "sizes", 6795010, 5, 0, 1 },
    { "slot", 8744197, 4, 1, 1 },
    { "small", 14362904, 5, 1, 0 },
    { "source", 341674, 6, 1, 0 },
    { "span", 11168892, 4, 1, 1 },
    { "spellcheck", 4108424, 10, 0, 1 },
    { "src", 11517827, 3, 0, 1 },
    { "srcdoc", 15297056, 6, 0, 1 },
    { "srclang", 13402710, 7, 0, 1 },
    { "srcset", 6236095, 6, 0, 1 },
    { "standby", 8394231, 7, 0, 1 },
    { "start", 1021290, 5, 0, 1 },
    { "step", 5337026, 4, 0, 1 },
    { "strike", 15072495, 6, 1, 0 },
    { "strong", 13282129, 6, 1, 0 },
    { "style", 10993676, 5, 1, 1 },
    { "sub", 15782866, 3, 1, 0 },
    { "summary", 1148260, 7, 1, 1 },
    { "sup", 8741418, 3, 1, 0 },
    { "tabindex", 10415591, 8, 0, 1 },
    { "table", 8181317, 5, 1, 0 },
    { "target", 1752822, 6, 0, 1 },
    { "tbody", 14028375, 5, 1, 0 },
    { "td", 10309076, 2, 1, 0 },
    { "template", 12693000, 8, 1, 0 },
    { "text", 2784654, 4, 0, 1 },
    { "textarea", 10510497, 8, 1, 0 },
    { "tfoot", 13009441, 5, 1, 0 },
    { "th", 3915297, 2, 1, 0 },
    { "thead", 13349519, 5, 1, 0 },
    { "time", 3114886, 4, 1, 0 },
    { "title", 2337488, 5, 1, 1 },
    { "topmargin", 10843382, 9, 0, 1 },
    { "tr", 16624306, 2, 1, 0 },
    { "track", 10988706, 5, 1, 0 },
    { "translate", 9982484, 9, 0, 1 },
    { "truespeed", 11732619, 9, 0, 1 },
    { "tt", 9170852, 2, 1, 0 },
    { "type", 1916283, 4, 0, 1 },
    { "u", 13317144, 1, 1, 0 },
    { "ul", 12324505, 2, 1, 0 },
    { "usemap", 16643238, 6, 0, 1 },
    { "valign", 8345445, 6, 0, 1 },
    { "value", 10871467, 5, 0, 1 },
    { "valuetype", 4808367, 9, 0, 1 },
    { "var", 9573901, 3, 1, 0 },
    { "version", 8128447, 7, 0, 1 },
    { "video", 16765639, 5, 1, 0 },
    { "vlink", 12743618, 5, 0, 1 },
    { "vspace", 9862276, 6, 0, 1 },
    { "wbr", 8290101, 3, 1, 0 },
    { "webkitdirectory", 1344740, 15, 0, 1 },
    { "width", 12902275, 5, 0, 1 },
    { "wrap", 7601899, 4, 0, 1 },
    { "xmp", 8764488, 3, 1, 0 },
  };

  size_t tag_i = 0;
  size_t attr_i = 0;
  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    if (kNames[i].is_tag) {
      void* address = reinterpret_cast<HTMLQualifiedName*>(&tag_storage) + tag_i;
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

}  // namespace html_names
}  // namespace blink
