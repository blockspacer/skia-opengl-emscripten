// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WebFeature value) {
  switch(value) {
    case WebFeature::kOBSOLETE_PageDestruction:
      return os << "WebFeature::kOBSOLETE_PageDestruction";
    case WebFeature::kWorkerStart:
      return os << "WebFeature::kWorkerStart";
    case WebFeature::kSharedWorkerStart:
      return os << "WebFeature::kSharedWorkerStart";
    case WebFeature::kOpenWebDatabase:
      return os << "WebFeature::kOpenWebDatabase";
    case WebFeature::kUnprefixedRequestAnimationFrame:
      return os << "WebFeature::kUnprefixedRequestAnimationFrame";
    case WebFeature::kPrefixedRequestAnimationFrame:
      return os << "WebFeature::kPrefixedRequestAnimationFrame";
    case WebFeature::kContentSecurityPolicy:
      return os << "WebFeature::kContentSecurityPolicy";
    case WebFeature::kContentSecurityPolicyReportOnly:
      return os << "WebFeature::kContentSecurityPolicyReportOnly";
    case WebFeature::kPrefixedTransitionEndEvent:
      return os << "WebFeature::kPrefixedTransitionEndEvent";
    case WebFeature::kUnprefixedTransitionEndEvent:
      return os << "WebFeature::kUnprefixedTransitionEndEvent";
    case WebFeature::kPrefixedAndUnprefixedTransitionEndEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedTransitionEndEvent";
    case WebFeature::kAutoFocusAttribute:
      return os << "WebFeature::kAutoFocusAttribute";
    case WebFeature::kDataListElement:
      return os << "WebFeature::kDataListElement";
    case WebFeature::kFormAttribute:
      return os << "WebFeature::kFormAttribute";
    case WebFeature::kIncrementalAttribute:
      return os << "WebFeature::kIncrementalAttribute";
    case WebFeature::kInputTypeColor:
      return os << "WebFeature::kInputTypeColor";
    case WebFeature::kInputTypeDate:
      return os << "WebFeature::kInputTypeDate";
    case WebFeature::kInputTypeDateTimeFallback:
      return os << "WebFeature::kInputTypeDateTimeFallback";
    case WebFeature::kInputTypeDateTimeLocal:
      return os << "WebFeature::kInputTypeDateTimeLocal";
    case WebFeature::kInputTypeEmail:
      return os << "WebFeature::kInputTypeEmail";
    case WebFeature::kInputTypeMonth:
      return os << "WebFeature::kInputTypeMonth";
    case WebFeature::kInputTypeNumber:
      return os << "WebFeature::kInputTypeNumber";
    case WebFeature::kInputTypeRange:
      return os << "WebFeature::kInputTypeRange";
    case WebFeature::kInputTypeSearch:
      return os << "WebFeature::kInputTypeSearch";
    case WebFeature::kInputTypeTel:
      return os << "WebFeature::kInputTypeTel";
    case WebFeature::kInputTypeTime:
      return os << "WebFeature::kInputTypeTime";
    case WebFeature::kInputTypeURL:
      return os << "WebFeature::kInputTypeURL";
    case WebFeature::kInputTypeWeek:
      return os << "WebFeature::kInputTypeWeek";
    case WebFeature::kInputTypeWeekFallback:
      return os << "WebFeature::kInputTypeWeekFallback";
    case WebFeature::kListAttribute:
      return os << "WebFeature::kListAttribute";
    case WebFeature::kMaxAttribute:
      return os << "WebFeature::kMaxAttribute";
    case WebFeature::kMinAttribute:
      return os << "WebFeature::kMinAttribute";
    case WebFeature::kPatternAttribute:
      return os << "WebFeature::kPatternAttribute";
    case WebFeature::kPlaceholderAttribute:
      return os << "WebFeature::kPlaceholderAttribute";
    case WebFeature::kPrefixedDirectoryAttribute:
      return os << "WebFeature::kPrefixedDirectoryAttribute";
    case WebFeature::kRequiredAttribute:
      return os << "WebFeature::kRequiredAttribute";
    case WebFeature::kStepAttribute:
      return os << "WebFeature::kStepAttribute";
    case WebFeature::kPageVisits:
      return os << "WebFeature::kPageVisits";
    case WebFeature::kHTMLMarqueeElement:
      return os << "WebFeature::kHTMLMarqueeElement";
    case WebFeature::kReflection:
      return os << "WebFeature::kReflection";
    case WebFeature::kPrefixedStorageInfo:
      return os << "WebFeature::kPrefixedStorageInfo";
    case WebFeature::kDeprecatedFlexboxWebContent:
      return os << "WebFeature::kDeprecatedFlexboxWebContent";
    case WebFeature::kDeprecatedFlexboxChrome:
      return os << "WebFeature::kDeprecatedFlexboxChrome";
    case WebFeature::kDeprecatedFlexboxChromeExtension:
      return os << "WebFeature::kDeprecatedFlexboxChromeExtension";
    case WebFeature::kWindowEvent:
      return os << "WebFeature::kWindowEvent";
    case WebFeature::kContentSecurityPolicyWithBaseElement:
      return os << "WebFeature::kContentSecurityPolicyWithBaseElement";
    case WebFeature::kDocumentClear:
      return os << "WebFeature::kDocumentClear";
    case WebFeature::kXMLDocument:
      return os << "WebFeature::kXMLDocument";
    case WebFeature::kXSLProcessingInstruction:
      return os << "WebFeature::kXSLProcessingInstruction";
    case WebFeature::kXSLTProcessor:
      return os << "WebFeature::kXSLTProcessor";
    case WebFeature::kSVGSwitchElement:
      return os << "WebFeature::kSVGSwitchElement";
    case WebFeature::kDocumentAll:
      return os << "WebFeature::kDocumentAll";
    case WebFeature::kFormElement:
      return os << "WebFeature::kFormElement";
    case WebFeature::kDemotedFormElement:
      return os << "WebFeature::kDemotedFormElement";
    case WebFeature::kSVGAnimationElement:
      return os << "WebFeature::kSVGAnimationElement";
    case WebFeature::kLineClamp:
      return os << "WebFeature::kLineClamp";
    case WebFeature::kSubFrameBeforeUnloadRegistered:
      return os << "WebFeature::kSubFrameBeforeUnloadRegistered";
    case WebFeature::kSubFrameBeforeUnloadFired:
      return os << "WebFeature::kSubFrameBeforeUnloadFired";
    case WebFeature::kDocumentCreateAttribute:
      return os << "WebFeature::kDocumentCreateAttribute";
    case WebFeature::kDocumentCreateAttributeNS:
      return os << "WebFeature::kDocumentCreateAttributeNS";
    case WebFeature::kDocumentXMLEncoding:
      return os << "WebFeature::kDocumentXMLEncoding";
    case WebFeature::kDocumentXMLStandalone:
      return os << "WebFeature::kDocumentXMLStandalone";
    case WebFeature::kDocumentXMLVersion:
      return os << "WebFeature::kDocumentXMLVersion";
    case WebFeature::kNavigatorProductSub:
      return os << "WebFeature::kNavigatorProductSub";
    case WebFeature::kNavigatorVendor:
      return os << "WebFeature::kNavigatorVendor";
    case WebFeature::kNavigatorVendorSub:
      return os << "WebFeature::kNavigatorVendorSub";
    case WebFeature::kPrefixedAnimationEndEvent:
      return os << "WebFeature::kPrefixedAnimationEndEvent";
    case WebFeature::kUnprefixedAnimationEndEvent:
      return os << "WebFeature::kUnprefixedAnimationEndEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationEndEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationEndEvent";
    case WebFeature::kPrefixedAnimationStartEvent:
      return os << "WebFeature::kPrefixedAnimationStartEvent";
    case WebFeature::kUnprefixedAnimationStartEvent:
      return os << "WebFeature::kUnprefixedAnimationStartEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationStartEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationStartEvent";
    case WebFeature::kPrefixedAnimationIterationEvent:
      return os << "WebFeature::kPrefixedAnimationIterationEvent";
    case WebFeature::kUnprefixedAnimationIterationEvent:
      return os << "WebFeature::kUnprefixedAnimationIterationEvent";
    case WebFeature::kPrefixedAndUnprefixedAnimationIterationEvent:
      return os << "WebFeature::kPrefixedAndUnprefixedAnimationIterationEvent";
    case WebFeature::kEventReturnValue:
      return os << "WebFeature::kEventReturnValue";
    case WebFeature::kSVGSVGElement:
      return os << "WebFeature::kSVGSVGElement";
    case WebFeature::kDOMSubtreeModifiedEvent:
      return os << "WebFeature::kDOMSubtreeModifiedEvent";
    case WebFeature::kDOMNodeInsertedEvent:
      return os << "WebFeature::kDOMNodeInsertedEvent";
    case WebFeature::kDOMNodeRemovedEvent:
      return os << "WebFeature::kDOMNodeRemovedEvent";
    case WebFeature::kDOMNodeRemovedFromDocumentEvent:
      return os << "WebFeature::kDOMNodeRemovedFromDocumentEvent";
    case WebFeature::kDOMNodeInsertedIntoDocumentEvent:
      return os << "WebFeature::kDOMNodeInsertedIntoDocumentEvent";
    case WebFeature::kDOMCharacterDataModifiedEvent:
      return os << "WebFeature::kDOMCharacterDataModifiedEvent";
    case WebFeature::kPrefixedAudioDecodedByteCount:
      return os << "WebFeature::kPrefixedAudioDecodedByteCount";
    case WebFeature::kPrefixedVideoDecodedByteCount:
      return os << "WebFeature::kPrefixedVideoDecodedByteCount";
    case WebFeature::kPrefixedVideoSupportsFullscreen:
      return os << "WebFeature::kPrefixedVideoSupportsFullscreen";
    case WebFeature::kPrefixedVideoDisplayingFullscreen:
      return os << "WebFeature::kPrefixedVideoDisplayingFullscreen";
    case WebFeature::kPrefixedVideoEnterFullscreen:
      return os << "WebFeature::kPrefixedVideoEnterFullscreen";
    case WebFeature::kPrefixedVideoExitFullscreen:
      return os << "WebFeature::kPrefixedVideoExitFullscreen";
    case WebFeature::kPrefixedVideoEnterFullScreen:
      return os << "WebFeature::kPrefixedVideoEnterFullScreen";
    case WebFeature::kPrefixedVideoExitFullScreen:
      return os << "WebFeature::kPrefixedVideoExitFullScreen";
    case WebFeature::kPrefixedVideoDecodedFrameCount:
      return os << "WebFeature::kPrefixedVideoDecodedFrameCount";
    case WebFeature::kPrefixedVideoDroppedFrameCount:
      return os << "WebFeature::kPrefixedVideoDroppedFrameCount";
    case WebFeature::kPrefixedElementRequestFullscreen:
      return os << "WebFeature::kPrefixedElementRequestFullscreen";
    case WebFeature::kPrefixedElementRequestFullScreen:
      return os << "WebFeature::kPrefixedElementRequestFullScreen";
    case WebFeature::kBarPropLocationbar:
      return os << "WebFeature::kBarPropLocationbar";
    case WebFeature::kBarPropMenubar:
      return os << "WebFeature::kBarPropMenubar";
    case WebFeature::kBarPropPersonalbar:
      return os << "WebFeature::kBarPropPersonalbar";
    case WebFeature::kBarPropScrollbars:
      return os << "WebFeature::kBarPropScrollbars";
    case WebFeature::kBarPropStatusbar:
      return os << "WebFeature::kBarPropStatusbar";
    case WebFeature::kBarPropToolbar:
      return os << "WebFeature::kBarPropToolbar";
    case WebFeature::kInputTypeEmailMultiple:
      return os << "WebFeature::kInputTypeEmailMultiple";
    case WebFeature::kInputTypeEmailMaxLength:
      return os << "WebFeature::kInputTypeEmailMaxLength";
    case WebFeature::kInputTypeEmailMultipleMaxLength:
      return os << "WebFeature::kInputTypeEmailMultipleMaxLength";
    case WebFeature::kInputTypeText:
      return os << "WebFeature::kInputTypeText";
    case WebFeature::kInputTypeTextMaxLength:
      return os << "WebFeature::kInputTypeTextMaxLength";
    case WebFeature::kInputTypePassword:
      return os << "WebFeature::kInputTypePassword";
    case WebFeature::kInputTypePasswordMaxLength:
      return os << "WebFeature::kInputTypePasswordMaxLength";
    case WebFeature::kPrefixedPageVisibility:
      return os << "WebFeature::kPrefixedPageVisibility";
    case WebFeature::kDocumentBeforeUnloadRegistered:
      return os << "WebFeature::kDocumentBeforeUnloadRegistered";
    case WebFeature::kDocumentBeforeUnloadFired:
      return os << "WebFeature::kDocumentBeforeUnloadFired";
    case WebFeature::kDocumentUnloadRegistered:
      return os << "WebFeature::kDocumentUnloadRegistered";
    case WebFeature::kDocumentUnloadFired:
      return os << "WebFeature::kDocumentUnloadFired";
    case WebFeature::kSVGLocatableNearestViewportElement:
      return os << "WebFeature::kSVGLocatableNearestViewportElement";
    case WebFeature::kSVGLocatableFarthestViewportElement:
      return os << "WebFeature::kSVGLocatableFarthestViewportElement";
    case WebFeature::kSVGPointMatrixTransform:
      return os << "WebFeature::kSVGPointMatrixTransform";
    case WebFeature::kDOMFocusInOutEvent:
      return os << "WebFeature::kDOMFocusInOutEvent";
    case WebFeature::kFileGetLastModifiedDate:
      return os << "WebFeature::kFileGetLastModifiedDate";
    case WebFeature::kHTMLElementInnerText:
      return os << "WebFeature::kHTMLElementInnerText";
    case WebFeature::kHTMLElementOuterText:
      return os << "WebFeature::kHTMLElementOuterText";
    case WebFeature::kReplaceDocumentViaJavaScriptURL:
      return os << "WebFeature::kReplaceDocumentViaJavaScriptURL";
    case WebFeature::kElementPrefixedMatchesSelector:
      return os << "WebFeature::kElementPrefixedMatchesSelector";
    case WebFeature::kCSSStyleSheetRules:
      return os << "WebFeature::kCSSStyleSheetRules";
    case WebFeature::kCSSStyleSheetAddRule:
      return os << "WebFeature::kCSSStyleSheetAddRule";
    case WebFeature::kCSSStyleSheetRemoveRule:
      return os << "WebFeature::kCSSStyleSheetRemoveRule";
    case WebFeature::kInitMessageEvent:
      return os << "WebFeature::kInitMessageEvent";
    case WebFeature::kPrefixedDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedMaxDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedMaxDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedMinDevicePixelRatioMediaFeature:
      return os << "WebFeature::kPrefixedMinDevicePixelRatioMediaFeature";
    case WebFeature::kPrefixedTransform3dMediaFeature:
      return os << "WebFeature::kPrefixedTransform3dMediaFeature";
    case WebFeature::kPrefixedStorageQuota:
      return os << "WebFeature::kPrefixedStorageQuota";
    case WebFeature::kResetReferrerPolicy:
      return os << "WebFeature::kResetReferrerPolicy";
    case WebFeature::kCaseInsensitiveAttrSelectorMatch:
      return os << "WebFeature::kCaseInsensitiveAttrSelectorMatch";
    case WebFeature::kFormNameAccessForImageElement:
      return os << "WebFeature::kFormNameAccessForImageElement";
    case WebFeature::kFormNameAccessForPastNamesMap:
      return os << "WebFeature::kFormNameAccessForPastNamesMap";
    case WebFeature::kFormAssociationByParser:
      return os << "WebFeature::kFormAssociationByParser";
    case WebFeature::kSVGSVGElementInDocument:
      return os << "WebFeature::kSVGSVGElementInDocument";
    case WebFeature::kSVGDocumentRootElement:
      return os << "WebFeature::kSVGDocumentRootElement";
    case WebFeature::kDeprecatedWebKitGradient:
      return os << "WebFeature::kDeprecatedWebKitGradient";
    case WebFeature::kDeprecatedWebKitLinearGradient:
      return os << "WebFeature::kDeprecatedWebKitLinearGradient";
    case WebFeature::kDeprecatedWebKitRepeatingLinearGradient:
      return os << "WebFeature::kDeprecatedWebKitRepeatingLinearGradient";
    case WebFeature::kDeprecatedWebKitRadialGradient:
      return os << "WebFeature::kDeprecatedWebKitRadialGradient";
    case WebFeature::kDeprecatedWebKitRepeatingRadialGradient:
      return os << "WebFeature::kDeprecatedWebKitRepeatingRadialGradient";
    case WebFeature::kTextAutosizing:
      return os << "WebFeature::kTextAutosizing";
    case WebFeature::kHTMLAnchorElementPingAttribute:
      return os << "WebFeature::kHTMLAnchorElementPingAttribute";
    case WebFeature::kSVGClassName:
      return os << "WebFeature::kSVGClassName";
    case WebFeature::kHTMLMediaElementSeekToFragmentStart:
      return os << "WebFeature::kHTMLMediaElementSeekToFragmentStart";
    case WebFeature::kHTMLMediaElementPauseAtFragmentEnd:
      return os << "WebFeature::kHTMLMediaElementPauseAtFragmentEnd";
    case WebFeature::kPrefixedWindowURL:
      return os << "WebFeature::kPrefixedWindowURL";
    case WebFeature::kWindowOrientation:
      return os << "WebFeature::kWindowOrientation";
    case WebFeature::kDocumentCaptureEvents:
      return os << "WebFeature::kDocumentCaptureEvents";
    case WebFeature::kDocumentReleaseEvents:
      return os << "WebFeature::kDocumentReleaseEvents";
    case WebFeature::kWindowCaptureEvents:
      return os << "WebFeature::kWindowCaptureEvents";
    case WebFeature::kWindowReleaseEvents:
      return os << "WebFeature::kWindowReleaseEvents";
    case WebFeature::kDocumentXPathCreateExpression:
      return os << "WebFeature::kDocumentXPathCreateExpression";
    case WebFeature::kDocumentXPathCreateNSResolver:
      return os << "WebFeature::kDocumentXPathCreateNSResolver";
    case WebFeature::kDocumentXPathEvaluate:
      return os << "WebFeature::kDocumentXPathEvaluate";
    case WebFeature::kAnimationConstructorKeyframeListEffectObjectTiming:
      return os << "WebFeature::kAnimationConstructorKeyframeListEffectObjectTiming";
    case WebFeature::kAnimationConstructorKeyframeListEffectNoTiming:
      return os << "WebFeature::kAnimationConstructorKeyframeListEffectNoTiming";
    case WebFeature::kPrefixedCancelAnimationFrame:
      return os << "WebFeature::kPrefixedCancelAnimationFrame";
    case WebFeature::kNamedNodeMapGetNamedItem:
      return os << "WebFeature::kNamedNodeMapGetNamedItem";
    case WebFeature::kNamedNodeMapSetNamedItem:
      return os << "WebFeature::kNamedNodeMapSetNamedItem";
    case WebFeature::kNamedNodeMapRemoveNamedItem:
      return os << "WebFeature::kNamedNodeMapRemoveNamedItem";
    case WebFeature::kNamedNodeMapItem:
      return os << "WebFeature::kNamedNodeMapItem";
    case WebFeature::kNamedNodeMapGetNamedItemNS:
      return os << "WebFeature::kNamedNodeMapGetNamedItemNS";
    case WebFeature::kNamedNodeMapSetNamedItemNS:
      return os << "WebFeature::kNamedNodeMapSetNamedItemNS";
    case WebFeature::kNamedNodeMapRemoveNamedItemNS:
      return os << "WebFeature::kNamedNodeMapRemoveNamedItemNS";
    case WebFeature::kPrefixedDocumentIsFullscreen:
      return os << "WebFeature::kPrefixedDocumentIsFullscreen";
    case WebFeature::kPrefixedDocumentCurrentFullScreenElement:
      return os << "WebFeature::kPrefixedDocumentCurrentFullScreenElement";
    case WebFeature::kPrefixedDocumentCancelFullScreen:
      return os << "WebFeature::kPrefixedDocumentCancelFullScreen";
    case WebFeature::kPrefixedDocumentFullscreenEnabled:
      return os << "WebFeature::kPrefixedDocumentFullscreenEnabled";
    case WebFeature::kPrefixedDocumentFullscreenElement:
      return os << "WebFeature::kPrefixedDocumentFullscreenElement";
    case WebFeature::kPrefixedDocumentExitFullscreen:
      return os << "WebFeature::kPrefixedDocumentExitFullscreen";
    case WebFeature::kSVGForeignObjectElement:
      return os << "WebFeature::kSVGForeignObjectElement";
    case WebFeature::kSelectionSetPosition:
      return os << "WebFeature::kSelectionSetPosition";
    case WebFeature::kAnimationFinishEvent:
      return os << "WebFeature::kAnimationFinishEvent";
    case WebFeature::kSVGSVGElementInXMLDocument:
      return os << "WebFeature::kSVGSVGElementInXMLDocument";
    case WebFeature::kEventSrcElement:
      return os << "WebFeature::kEventSrcElement";
    case WebFeature::kEventCancelBubble:
      return os << "WebFeature::kEventCancelBubble";
    case WebFeature::kEventPath:
      return os << "WebFeature::kEventPath";
    case WebFeature::kNodeIteratorDetach:
      return os << "WebFeature::kNodeIteratorDetach";
    case WebFeature::kEventGetReturnValueTrue:
      return os << "WebFeature::kEventGetReturnValueTrue";
    case WebFeature::kEventGetReturnValueFalse:
      return os << "WebFeature::kEventGetReturnValueFalse";
    case WebFeature::kEventSetReturnValueTrue:
      return os << "WebFeature::kEventSetReturnValueTrue";
    case WebFeature::kEventSetReturnValueFalse:
      return os << "WebFeature::kEventSetReturnValueFalse";
    case WebFeature::kWindowOffscreenBuffering:
      return os << "WebFeature::kWindowOffscreenBuffering";
    case WebFeature::kWindowDefaultStatus:
      return os << "WebFeature::kWindowDefaultStatus";
    case WebFeature::kWindowDefaultstatus:
      return os << "WebFeature::kWindowDefaultstatus";
    case WebFeature::kPrefixedTransitionEventConstructor:
      return os << "WebFeature::kPrefixedTransitionEventConstructor";
    case WebFeature::kPrefixedMutationObserverConstructor:
      return os << "WebFeature::kPrefixedMutationObserverConstructor";
    case WebFeature::kNotificationPermission:
      return os << "WebFeature::kNotificationPermission";
    case WebFeature::kRangeDetach:
      return os << "WebFeature::kRangeDetach";
    case WebFeature::kPrefixedFileRelativePath:
      return os << "WebFeature::kPrefixedFileRelativePath";
    case WebFeature::kDocumentCaretRangeFromPoint:
      return os << "WebFeature::kDocumentCaretRangeFromPoint";
    case WebFeature::kElementScrollIntoViewIfNeeded:
      return os << "WebFeature::kElementScrollIntoViewIfNeeded";
    case WebFeature::kRangeExpand:
      return os << "WebFeature::kRangeExpand";
    case WebFeature::kHTMLImageElementX:
      return os << "WebFeature::kHTMLImageElementX";
    case WebFeature::kHTMLImageElementY:
      return os << "WebFeature::kHTMLImageElementY";
    case WebFeature::kSelectionBaseNode:
      return os << "WebFeature::kSelectionBaseNode";
    case WebFeature::kSelectionBaseOffset:
      return os << "WebFeature::kSelectionBaseOffset";
    case WebFeature::kSelectionExtentNode:
      return os << "WebFeature::kSelectionExtentNode";
    case WebFeature::kSelectionExtentOffset:
      return os << "WebFeature::kSelectionExtentOffset";
    case WebFeature::kSelectionType:
      return os << "WebFeature::kSelectionType";
    case WebFeature::kSelectionModify:
      return os << "WebFeature::kSelectionModify";
    case WebFeature::kSelectionSetBaseAndExtent:
      return os << "WebFeature::kSelectionSetBaseAndExtent";
    case WebFeature::kSelectionEmpty:
      return os << "WebFeature::kSelectionEmpty";
    case WebFeature::kVTTCue:
      return os << "WebFeature::kVTTCue";
    case WebFeature::kVTTCueRender:
      return os << "WebFeature::kVTTCueRender";
    case WebFeature::kVTTCueRenderVertical:
      return os << "WebFeature::kVTTCueRenderVertical";
    case WebFeature::kVTTCueRenderSnapToLinesFalse:
      return os << "WebFeature::kVTTCueRenderSnapToLinesFalse";
    case WebFeature::kVTTCueRenderLineNotAuto:
      return os << "WebFeature::kVTTCueRenderLineNotAuto";
    case WebFeature::kVTTCueRenderPositionNot50:
      return os << "WebFeature::kVTTCueRenderPositionNot50";
    case WebFeature::kVTTCueRenderSizeNot100:
      return os << "WebFeature::kVTTCueRenderSizeNot100";
    case WebFeature::kVTTCueRenderAlignNotCenter:
      return os << "WebFeature::kVTTCueRenderAlignNotCenter";
    case WebFeature::kElementRequestPointerLock:
      return os << "WebFeature::kElementRequestPointerLock";
    case WebFeature::kVTTCueRenderRtl:
      return os << "WebFeature::kVTTCueRenderRtl";
    case WebFeature::kPostMessageFromSecureToInsecure:
      return os << "WebFeature::kPostMessageFromSecureToInsecure";
    case WebFeature::kPostMessageFromInsecureToSecure:
      return os << "WebFeature::kPostMessageFromInsecureToSecure";
    case WebFeature::kDocumentExitPointerLock:
      return os << "WebFeature::kDocumentExitPointerLock";
    case WebFeature::kDocumentPointerLockElement:
      return os << "WebFeature::kDocumentPointerLockElement";
    case WebFeature::kPrefixedCursorZoomIn:
      return os << "WebFeature::kPrefixedCursorZoomIn";
    case WebFeature::kPrefixedCursorZoomOut:
      return os << "WebFeature::kPrefixedCursorZoomOut";
    case WebFeature::kTextEncoderConstructor:
      return os << "WebFeature::kTextEncoderConstructor";
    case WebFeature::kTextEncoderEncode:
      return os << "WebFeature::kTextEncoderEncode";
    case WebFeature::kTextDecoderConstructor:
      return os << "WebFeature::kTextDecoderConstructor";
    case WebFeature::kTextDecoderDecode:
      return os << "WebFeature::kTextDecoderDecode";
    case WebFeature::kFocusInOutEvent:
      return os << "WebFeature::kFocusInOutEvent";
    case WebFeature::kMouseEventMovementX:
      return os << "WebFeature::kMouseEventMovementX";
    case WebFeature::kMouseEventMovementY:
      return os << "WebFeature::kMouseEventMovementY";
    case WebFeature::kDocumentFonts:
      return os << "WebFeature::kDocumentFonts";
    case WebFeature::kMixedContentFormsSubmitted:
      return os << "WebFeature::kMixedContentFormsSubmitted";
    case WebFeature::kFormsSubmitted:
      return os << "WebFeature::kFormsSubmitted";
    case WebFeature::kHTMLImports:
      return os << "WebFeature::kHTMLImports";
    case WebFeature::kElementCreateShadowRoot:
      return os << "WebFeature::kElementCreateShadowRoot";
    case WebFeature::kDocumentRegisterElement:
      return os << "WebFeature::kDocumentRegisterElement";
    case WebFeature::kEditingAppleInterchangeNewline:
      return os << "WebFeature::kEditingAppleInterchangeNewline";
    case WebFeature::kEditingAppleConvertedSpace:
      return os << "WebFeature::kEditingAppleConvertedSpace";
    case WebFeature::kEditingApplePasteAsQuotation:
      return os << "WebFeature::kEditingApplePasteAsQuotation";
    case WebFeature::kEditingAppleStyleSpanClass:
      return os << "WebFeature::kEditingAppleStyleSpanClass";
    case WebFeature::kHTMLImportsAsyncAttribute:
      return os << "WebFeature::kHTMLImportsAsyncAttribute";
    case WebFeature::kXMLHttpRequestSynchronous:
      return os << "WebFeature::kXMLHttpRequestSynchronous";
    case WebFeature::kCSSSelectorPseudoUnresolved:
      return os << "WebFeature::kCSSSelectorPseudoUnresolved";
    case WebFeature::kCSSSelectorPseudoShadow:
      return os << "WebFeature::kCSSSelectorPseudoShadow";
    case WebFeature::kCSSSelectorPseudoContent:
      return os << "WebFeature::kCSSSelectorPseudoContent";
    case WebFeature::kCSSSelectorPseudoHost:
      return os << "WebFeature::kCSSSelectorPseudoHost";
    case WebFeature::kCSSSelectorPseudoHostContext:
      return os << "WebFeature::kCSSSelectorPseudoHostContext";
    case WebFeature::kCSSDeepCombinator:
      return os << "WebFeature::kCSSDeepCombinator";
    case WebFeature::kUseAsm:
      return os << "WebFeature::kUseAsm";
    case WebFeature::kDOMWindowOpen:
      return os << "WebFeature::kDOMWindowOpen";
    case WebFeature::kDOMWindowOpenFeatures:
      return os << "WebFeature::kDOMWindowOpenFeatures";
    case WebFeature::kAspectRatioFlexItem:
      return os << "WebFeature::kAspectRatioFlexItem";
    case WebFeature::kDetailsElement:
      return os << "WebFeature::kDetailsElement";
    case WebFeature::kDialogElement:
      return os << "WebFeature::kDialogElement";
    case WebFeature::kMapElement:
      return os << "WebFeature::kMapElement";
    case WebFeature::kMeterElement:
      return os << "WebFeature::kMeterElement";
    case WebFeature::kProgressElement:
      return os << "WebFeature::kProgressElement";
    case WebFeature::kWheelEventWheelDeltaX:
      return os << "WebFeature::kWheelEventWheelDeltaX";
    case WebFeature::kWheelEventWheelDeltaY:
      return os << "WebFeature::kWheelEventWheelDeltaY";
    case WebFeature::kWheelEventWheelDelta:
      return os << "WebFeature::kWheelEventWheelDelta";
    case WebFeature::kSendBeacon:
      return os << "WebFeature::kSendBeacon";
    case WebFeature::kSendBeaconQuotaExceeded:
      return os << "WebFeature::kSendBeaconQuotaExceeded";
    case WebFeature::kSVGSMILElementInDocument:
      return os << "WebFeature::kSVGSMILElementInDocument";
    case WebFeature::kMouseEventOffsetX:
      return os << "WebFeature::kMouseEventOffsetX";
    case WebFeature::kMouseEventOffsetY:
      return os << "WebFeature::kMouseEventOffsetY";
    case WebFeature::kMouseEventX:
      return os << "WebFeature::kMouseEventX";
    case WebFeature::kMouseEventY:
      return os << "WebFeature::kMouseEventY";
    case WebFeature::kMouseEventFromElement:
      return os << "WebFeature::kMouseEventFromElement";
    case WebFeature::kMouseEventToElement:
      return os << "WebFeature::kMouseEventToElement";
    case WebFeature::kRequestFileSystem:
      return os << "WebFeature::kRequestFileSystem";
    case WebFeature::kRequestFileSystemWorker:
      return os << "WebFeature::kRequestFileSystemWorker";
    case WebFeature::kRequestFileSystemSyncWorker:
      return os << "WebFeature::kRequestFileSystemSyncWorker";
    case WebFeature::kSVGStyleElementTitle:
      return os << "WebFeature::kSVGStyleElementTitle";
    case WebFeature::kPictureSourceSrc:
      return os << "WebFeature::kPictureSourceSrc";
    case WebFeature::kPicture:
      return os << "WebFeature::kPicture";
    case WebFeature::kSizes:
      return os << "WebFeature::kSizes";
    case WebFeature::kSrcsetXDescriptor:
      return os << "WebFeature::kSrcsetXDescriptor";
    case WebFeature::kSrcsetWDescriptor:
      return os << "WebFeature::kSrcsetWDescriptor";
    case WebFeature::kSelectionContainsNode:
      return os << "WebFeature::kSelectionContainsNode";
    case WebFeature::kXMLExternalResourceLoad:
      return os << "WebFeature::kXMLExternalResourceLoad";
    case WebFeature::kMixedContentPrivateHostnameInPublicHostname:
      return os << "WebFeature::kMixedContentPrivateHostnameInPublicHostname";
    case WebFeature::kLegacyProtocolEmbeddedAsSubresource:
      return os << "WebFeature::kLegacyProtocolEmbeddedAsSubresource";
    case WebFeature::kRequestedSubresourceWithEmbeddedCredentials:
      return os << "WebFeature::kRequestedSubresourceWithEmbeddedCredentials";
    case WebFeature::kNotificationCreated:
      return os << "WebFeature::kNotificationCreated";
    case WebFeature::kNotificationClosed:
      return os << "WebFeature::kNotificationClosed";
    case WebFeature::kNotificationPermissionRequested:
      return os << "WebFeature::kNotificationPermissionRequested";
    case WebFeature::kSRIElementWithMatchingIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithMatchingIntegrityAttribute";
    case WebFeature::kSRIElementWithNonMatchingIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithNonMatchingIntegrityAttribute";
    case WebFeature::kSRIElementWithUnparsableIntegrityAttribute:
      return os << "WebFeature::kSRIElementWithUnparsableIntegrityAttribute";
    case WebFeature::kV8Animation_StartTime_AttributeGetter:
      return os << "WebFeature::kV8Animation_StartTime_AttributeGetter";
    case WebFeature::kV8Animation_StartTime_AttributeSetter:
      return os << "WebFeature::kV8Animation_StartTime_AttributeSetter";
    case WebFeature::kV8Animation_CurrentTime_AttributeGetter:
      return os << "WebFeature::kV8Animation_CurrentTime_AttributeGetter";
    case WebFeature::kV8Animation_CurrentTime_AttributeSetter:
      return os << "WebFeature::kV8Animation_CurrentTime_AttributeSetter";
    case WebFeature::kV8Animation_PlaybackRate_AttributeGetter:
      return os << "WebFeature::kV8Animation_PlaybackRate_AttributeGetter";
    case WebFeature::kV8Animation_PlaybackRate_AttributeSetter:
      return os << "WebFeature::kV8Animation_PlaybackRate_AttributeSetter";
    case WebFeature::kV8Animation_PlayState_AttributeGetter:
      return os << "WebFeature::kV8Animation_PlayState_AttributeGetter";
    case WebFeature::kV8Animation_Finish_Method:
      return os << "WebFeature::kV8Animation_Finish_Method";
    case WebFeature::kV8Animation_Play_Method:
      return os << "WebFeature::kV8Animation_Play_Method";
    case WebFeature::kV8Animation_Pause_Method:
      return os << "WebFeature::kV8Animation_Pause_Method";
    case WebFeature::kV8Animation_Reverse_Method:
      return os << "WebFeature::kV8Animation_Reverse_Method";
    case WebFeature::kBreakIterator:
      return os << "WebFeature::kBreakIterator";
    case WebFeature::kScreenOrientationAngle:
      return os << "WebFeature::kScreenOrientationAngle";
    case WebFeature::kScreenOrientationType:
      return os << "WebFeature::kScreenOrientationType";
    case WebFeature::kScreenOrientationLock:
      return os << "WebFeature::kScreenOrientationLock";
    case WebFeature::kScreenOrientationUnlock:
      return os << "WebFeature::kScreenOrientationUnlock";
    case WebFeature::kGeolocationSecureOrigin:
      return os << "WebFeature::kGeolocationSecureOrigin";
    case WebFeature::kGeolocationInsecureOrigin:
      return os << "WebFeature::kGeolocationInsecureOrigin";
    case WebFeature::kNotificationSecureOrigin:
      return os << "WebFeature::kNotificationSecureOrigin";
    case WebFeature::kNotificationInsecureOrigin:
      return os << "WebFeature::kNotificationInsecureOrigin";
    case WebFeature::kNotificationShowEvent:
      return os << "WebFeature::kNotificationShowEvent";
    case WebFeature::kSVGTransformListConsolidate:
      return os << "WebFeature::kSVGTransformListConsolidate";
    case WebFeature::kSVGAnimatedTransformListBaseVal:
      return os << "WebFeature::kSVGAnimatedTransformListBaseVal";
    case WebFeature::kQuotedAnimationName:
      return os << "WebFeature::kQuotedAnimationName";
    case WebFeature::kQuotedKeyframesRule:
      return os << "WebFeature::kQuotedKeyframesRule";
    case WebFeature::kSrcsetDroppedCandidate:
      return os << "WebFeature::kSrcsetDroppedCandidate";
    case WebFeature::kWindowPostMessage:
      return os << "WebFeature::kWindowPostMessage";
    case WebFeature::kRenderRuby:
      return os << "WebFeature::kRenderRuby";
    case WebFeature::kScriptElementWithInvalidTypeHasSrc:
      return os << "WebFeature::kScriptElementWithInvalidTypeHasSrc";
    case WebFeature::kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload:
      return os << "WebFeature::kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload";
    case WebFeature::kCSSSelectorPseudoScrollbar:
      return os << "WebFeature::kCSSSelectorPseudoScrollbar";
    case WebFeature::kCSSSelectorPseudoScrollbarButton:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarButton";
    case WebFeature::kCSSSelectorPseudoScrollbarThumb:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarThumb";
    case WebFeature::kCSSSelectorPseudoScrollbarTrack:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarTrack";
    case WebFeature::kCSSSelectorPseudoScrollbarTrackPiece:
      return os << "WebFeature::kCSSSelectorPseudoScrollbarTrackPiece";
    case WebFeature::kLangAttribute:
      return os << "WebFeature::kLangAttribute";
    case WebFeature::kLangAttributeOnHTML:
      return os << "WebFeature::kLangAttributeOnHTML";
    case WebFeature::kLangAttributeOnBody:
      return os << "WebFeature::kLangAttributeOnBody";
    case WebFeature::kLangAttributeDoesNotMatchToUILocale:
      return os << "WebFeature::kLangAttributeDoesNotMatchToUILocale";
    case WebFeature::kInputTypeSubmit:
      return os << "WebFeature::kInputTypeSubmit";
    case WebFeature::kInputTypeSubmitWithValue:
      return os << "WebFeature::kInputTypeSubmitWithValue";
    case WebFeature::kSetReferrerPolicy:
      return os << "WebFeature::kSetReferrerPolicy";
    case WebFeature::kTextWholeText:
      return os << "WebFeature::kTextWholeText";
    case WebFeature::kNotificationCloseEvent:
      return os << "WebFeature::kNotificationCloseEvent";
    case WebFeature::kStyleMedia:
      return os << "WebFeature::kStyleMedia";
    case WebFeature::kStyleMediaType:
      return os << "WebFeature::kStyleMediaType";
    case WebFeature::kStyleMediaMatchMedium:
      return os << "WebFeature::kStyleMediaMatchMedium";
    case WebFeature::kMixedContentPresent:
      return os << "WebFeature::kMixedContentPresent";
    case WebFeature::kMixedContentBlockable:
      return os << "WebFeature::kMixedContentBlockable";
    case WebFeature::kMixedContentAudio:
      return os << "WebFeature::kMixedContentAudio";
    case WebFeature::kMixedContentDownload:
      return os << "WebFeature::kMixedContentDownload";
    case WebFeature::kMixedContentFavicon:
      return os << "WebFeature::kMixedContentFavicon";
    case WebFeature::kMixedContentImage:
      return os << "WebFeature::kMixedContentImage";
    case WebFeature::kMixedContentInternal:
      return os << "WebFeature::kMixedContentInternal";
    case WebFeature::kMixedContentPlugin:
      return os << "WebFeature::kMixedContentPlugin";
    case WebFeature::kMixedContentPrefetch:
      return os << "WebFeature::kMixedContentPrefetch";
    case WebFeature::kMixedContentVideo:
      return os << "WebFeature::kMixedContentVideo";
    case WebFeature::kCSSSelectorPseudoFullScreenAncestor:
      return os << "WebFeature::kCSSSelectorPseudoFullScreenAncestor";
    case WebFeature::kCSSSelectorPseudoFullScreen:
      return os << "WebFeature::kCSSSelectorPseudoFullScreen";
    case WebFeature::kWebKitCSSMatrix:
      return os << "WebFeature::kWebKitCSSMatrix";
    case WebFeature::kAudioContextCreateAnalyser:
      return os << "WebFeature::kAudioContextCreateAnalyser";
    case WebFeature::kAudioContextCreateBiquadFilter:
      return os << "WebFeature::kAudioContextCreateBiquadFilter";
    case WebFeature::kAudioContextCreateBufferSource:
      return os << "WebFeature::kAudioContextCreateBufferSource";
    case WebFeature::kAudioContextCreateChannelMerger:
      return os << "WebFeature::kAudioContextCreateChannelMerger";
    case WebFeature::kAudioContextCreateChannelSplitter:
      return os << "WebFeature::kAudioContextCreateChannelSplitter";
    case WebFeature::kAudioContextCreateConvolver:
      return os << "WebFeature::kAudioContextCreateConvolver";
    case WebFeature::kAudioContextCreateDelay:
      return os << "WebFeature::kAudioContextCreateDelay";
    case WebFeature::kAudioContextCreateDynamicsCompressor:
      return os << "WebFeature::kAudioContextCreateDynamicsCompressor";
    case WebFeature::kAudioContextCreateGain:
      return os << "WebFeature::kAudioContextCreateGain";
    case WebFeature::kAudioContextCreateMediaElementSource:
      return os << "WebFeature::kAudioContextCreateMediaElementSource";
    case WebFeature::kAudioContextCreateMediaStreamDestination:
      return os << "WebFeature::kAudioContextCreateMediaStreamDestination";
    case WebFeature::kAudioContextCreateMediaStreamSource:
      return os << "WebFeature::kAudioContextCreateMediaStreamSource";
    case WebFeature::kAudioContextCreateOscillator:
      return os << "WebFeature::kAudioContextCreateOscillator";
    case WebFeature::kAudioContextCreatePeriodicWave:
      return os << "WebFeature::kAudioContextCreatePeriodicWave";
    case WebFeature::kAudioContextCreateScriptProcessor:
      return os << "WebFeature::kAudioContextCreateScriptProcessor";
    case WebFeature::kAudioContextCreateStereoPanner:
      return os << "WebFeature::kAudioContextCreateStereoPanner";
    case WebFeature::kAudioContextCreateWaveShaper:
      return os << "WebFeature::kAudioContextCreateWaveShaper";
    case WebFeature::kAudioContextDecodeAudioData:
      return os << "WebFeature::kAudioContextDecodeAudioData";
    case WebFeature::kAudioContextResume:
      return os << "WebFeature::kAudioContextResume";
    case WebFeature::kAudioContextSuspend:
      return os << "WebFeature::kAudioContextSuspend";
    case WebFeature::kMixedContentInNonHTTPSFrameThatRestrictsMixedContent:
      return os << "WebFeature::kMixedContentInNonHTTPSFrameThatRestrictsMixedContent";
    case WebFeature::kMixedContentInSecureFrameThatDoesNotRestrictMixedContent:
      return os << "WebFeature::kMixedContentInSecureFrameThatDoesNotRestrictMixedContent";
    case WebFeature::kMixedContentWebSocket:
      return os << "WebFeature::kMixedContentWebSocket";
    case WebFeature::kSyntheticKeyframesInCompositedCSSAnimation:
      return os << "WebFeature::kSyntheticKeyframesInCompositedCSSAnimation";
    case WebFeature::kMixedContentFormPresent:
      return os << "WebFeature::kMixedContentFormPresent";
    case WebFeature::kGetUserMediaInsecureOrigin:
      return os << "WebFeature::kGetUserMediaInsecureOrigin";
    case WebFeature::kGetUserMediaSecureOrigin:
      return os << "WebFeature::kGetUserMediaSecureOrigin";
    case WebFeature::kDeviceMotionInsecureOrigin:
      return os << "WebFeature::kDeviceMotionInsecureOrigin";
    case WebFeature::kDeviceMotionSecureOrigin:
      return os << "WebFeature::kDeviceMotionSecureOrigin";
    case WebFeature::kDeviceOrientationInsecureOrigin:
      return os << "WebFeature::kDeviceOrientationInsecureOrigin";
    case WebFeature::kDeviceOrientationSecureOrigin:
      return os << "WebFeature::kDeviceOrientationSecureOrigin";
    case WebFeature::kSandboxViaIFrame:
      return os << "WebFeature::kSandboxViaIFrame";
    case WebFeature::kSandboxViaCSP:
      return os << "WebFeature::kSandboxViaCSP";
    case WebFeature::kBlockedSniffingImageToScript:
      return os << "WebFeature::kBlockedSniffingImageToScript";
    case WebFeature::kFetch:
      return os << "WebFeature::kFetch";
    case WebFeature::kFetchBodyStream:
      return os << "WebFeature::kFetchBodyStream";
    case WebFeature::kXMLHttpRequestAsynchronous:
      return os << "WebFeature::kXMLHttpRequestAsynchronous";
    case WebFeature::kWhiteSpacePreFromXMLSpace:
      return os << "WebFeature::kWhiteSpacePreFromXMLSpace";
    case WebFeature::kWhiteSpaceNowrapFromXMLSpace:
      return os << "WebFeature::kWhiteSpaceNowrapFromXMLSpace";
    case WebFeature::kSVGSVGElementForceRedraw:
      return os << "WebFeature::kSVGSVGElementForceRedraw";
    case WebFeature::kSVGSVGElementSuspendRedraw:
      return os << "WebFeature::kSVGSVGElementSuspendRedraw";
    case WebFeature::kSVGSVGElementUnsuspendRedraw:
      return os << "WebFeature::kSVGSVGElementUnsuspendRedraw";
    case WebFeature::kSVGSVGElementUnsuspendRedrawAll:
      return os << "WebFeature::kSVGSVGElementUnsuspendRedrawAll";
    case WebFeature::kAudioContextClose:
      return os << "WebFeature::kAudioContextClose";
    case WebFeature::kCSSZoomNotEqualToOne:
      return os << "WebFeature::kCSSZoomNotEqualToOne";
    case WebFeature::kClientRectListItem:
      return os << "WebFeature::kClientRectListItem";
    case WebFeature::kWindowClientInformation:
      return os << "WebFeature::kWindowClientInformation";
    case WebFeature::kWindowFind:
      return os << "WebFeature::kWindowFind";
    case WebFeature::kWindowScreenLeft:
      return os << "WebFeature::kWindowScreenLeft";
    case WebFeature::kWindowScreenTop:
      return os << "WebFeature::kWindowScreenTop";
    case WebFeature::kV8Animation_Cancel_Method:
      return os << "WebFeature::kV8Animation_Cancel_Method";
    case WebFeature::kV8Animation_Onfinish_AttributeGetter:
      return os << "WebFeature::kV8Animation_Onfinish_AttributeGetter";
    case WebFeature::kV8Animation_Onfinish_AttributeSetter:
      return os << "WebFeature::kV8Animation_Onfinish_AttributeSetter";
    case WebFeature::kV8Window_WebKitAnimationEvent_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebKitAnimationEvent_ConstructorGetter";
    case WebFeature::kCryptoGetRandomValues:
      return os << "WebFeature::kCryptoGetRandomValues";
    case WebFeature::kSubtleCryptoEncrypt:
      return os << "WebFeature::kSubtleCryptoEncrypt";
    case WebFeature::kSubtleCryptoDecrypt:
      return os << "WebFeature::kSubtleCryptoDecrypt";
    case WebFeature::kSubtleCryptoSign:
      return os << "WebFeature::kSubtleCryptoSign";
    case WebFeature::kSubtleCryptoVerify:
      return os << "WebFeature::kSubtleCryptoVerify";
    case WebFeature::kSubtleCryptoDigest:
      return os << "WebFeature::kSubtleCryptoDigest";
    case WebFeature::kSubtleCryptoGenerateKey:
      return os << "WebFeature::kSubtleCryptoGenerateKey";
    case WebFeature::kSubtleCryptoImportKey:
      return os << "WebFeature::kSubtleCryptoImportKey";
    case WebFeature::kSubtleCryptoExportKey:
      return os << "WebFeature::kSubtleCryptoExportKey";
    case WebFeature::kSubtleCryptoDeriveBits:
      return os << "WebFeature::kSubtleCryptoDeriveBits";
    case WebFeature::kSubtleCryptoDeriveKey:
      return os << "WebFeature::kSubtleCryptoDeriveKey";
    case WebFeature::kSubtleCryptoWrapKey:
      return os << "WebFeature::kSubtleCryptoWrapKey";
    case WebFeature::kSubtleCryptoUnwrapKey:
      return os << "WebFeature::kSubtleCryptoUnwrapKey";
    case WebFeature::kCryptoAlgorithmAesCbc:
      return os << "WebFeature::kCryptoAlgorithmAesCbc";
    case WebFeature::kCryptoAlgorithmHmac:
      return os << "WebFeature::kCryptoAlgorithmHmac";
    case WebFeature::kCryptoAlgorithmRsaSsaPkcs1v1_5:
      return os << "WebFeature::kCryptoAlgorithmRsaSsaPkcs1v1_5";
    case WebFeature::kCryptoAlgorithmSha1:
      return os << "WebFeature::kCryptoAlgorithmSha1";
    case WebFeature::kCryptoAlgorithmSha256:
      return os << "WebFeature::kCryptoAlgorithmSha256";
    case WebFeature::kCryptoAlgorithmSha384:
      return os << "WebFeature::kCryptoAlgorithmSha384";
    case WebFeature::kCryptoAlgorithmSha512:
      return os << "WebFeature::kCryptoAlgorithmSha512";
    case WebFeature::kCryptoAlgorithmAesGcm:
      return os << "WebFeature::kCryptoAlgorithmAesGcm";
    case WebFeature::kCryptoAlgorithmRsaOaep:
      return os << "WebFeature::kCryptoAlgorithmRsaOaep";
    case WebFeature::kCryptoAlgorithmAesCtr:
      return os << "WebFeature::kCryptoAlgorithmAesCtr";
    case WebFeature::kCryptoAlgorithmAesKw:
      return os << "WebFeature::kCryptoAlgorithmAesKw";
    case WebFeature::kCryptoAlgorithmRsaPss:
      return os << "WebFeature::kCryptoAlgorithmRsaPss";
    case WebFeature::kCryptoAlgorithmEcdsa:
      return os << "WebFeature::kCryptoAlgorithmEcdsa";
    case WebFeature::kCryptoAlgorithmEcdh:
      return os << "WebFeature::kCryptoAlgorithmEcdh";
    case WebFeature::kCryptoAlgorithmHkdf:
      return os << "WebFeature::kCryptoAlgorithmHkdf";
    case WebFeature::kCryptoAlgorithmPbkdf2:
      return os << "WebFeature::kCryptoAlgorithmPbkdf2";
    case WebFeature::kDocumentSetDomain:
      return os << "WebFeature::kDocumentSetDomain";
    case WebFeature::kUpgradeInsecureRequestsEnabled:
      return os << "WebFeature::kUpgradeInsecureRequestsEnabled";
    case WebFeature::kUpgradeInsecureRequestsUpgradedRequest:
      return os << "WebFeature::kUpgradeInsecureRequestsUpgradedRequest";
    case WebFeature::kDocumentDesignMode:
      return os << "WebFeature::kDocumentDesignMode";
    case WebFeature::kGlobalCacheStorage:
      return os << "WebFeature::kGlobalCacheStorage";
    case WebFeature::kNetInfo:
      return os << "WebFeature::kNetInfo";
    case WebFeature::kBackgroundSync:
      return os << "WebFeature::kBackgroundSync";
    case WebFeature::kLegacyConst:
      return os << "WebFeature::kLegacyConst";
    case WebFeature::kV8Permissions_Query_Method:
      return os << "WebFeature::kV8Permissions_Query_Method";
    case WebFeature::kSVGHrefBaseVal:
      return os << "WebFeature::kSVGHrefBaseVal";
    case WebFeature::kSVGHrefAnimVal:
      return os << "WebFeature::kSVGHrefAnimVal";
    case WebFeature::kV8CSSRuleList_Item_Method:
      return os << "WebFeature::kV8CSSRuleList_Item_Method";
    case WebFeature::kV8MediaList_Item_Method:
      return os << "WebFeature::kV8MediaList_Item_Method";
    case WebFeature::kV8StyleSheetList_Item_Method:
      return os << "WebFeature::kV8StyleSheetList_Item_Method";
    case WebFeature::kStyleSheetListAnonymousNamedGetter:
      return os << "WebFeature::kStyleSheetListAnonymousNamedGetter";
    case WebFeature::kAutocapitalizeAttribute:
      return os << "WebFeature::kAutocapitalizeAttribute";
    case WebFeature::kFullscreenSecureOrigin:
      return os << "WebFeature::kFullscreenSecureOrigin";
    case WebFeature::kFullscreenInsecureOrigin:
      return os << "WebFeature::kFullscreenInsecureOrigin";
    case WebFeature::kDialogInSandboxedContext:
      return os << "WebFeature::kDialogInSandboxedContext";
    case WebFeature::kSVGSMILAnimationInImageRegardlessOfCache:
      return os << "WebFeature::kSVGSMILAnimationInImageRegardlessOfCache";
    case WebFeature::kEncryptedMediaSecureOrigin:
      return os << "WebFeature::kEncryptedMediaSecureOrigin";
    case WebFeature::kPerformanceFrameTiming:
      return os << "WebFeature::kPerformanceFrameTiming";
    case WebFeature::kV8Element_Animate_Method:
      return os << "WebFeature::kV8Element_Animate_Method";
    case WebFeature::kV8SVGSVGElement_GetElementById_Method:
      return os << "WebFeature::kV8SVGSVGElement_GetElementById_Method";
    case WebFeature::kV8MessageChannel_Constructor:
      return os << "WebFeature::kV8MessageChannel_Constructor";
    case WebFeature::kV8MessagePort_PostMessage_Method:
      return os << "WebFeature::kV8MessagePort_PostMessage_Method";
    case WebFeature::kV8MessagePort_Start_Method:
      return os << "WebFeature::kV8MessagePort_Start_Method";
    case WebFeature::kV8MessagePort_Close_Method:
      return os << "WebFeature::kV8MessagePort_Close_Method";
    case WebFeature::kMessagePortsTransferred:
      return os << "WebFeature::kMessagePortsTransferred";
    case WebFeature::kCSSKeyframesRuleAnonymousIndexedGetter:
      return os << "WebFeature::kCSSKeyframesRuleAnonymousIndexedGetter";
    case WebFeature::kV8Screen_AvailLeft_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailLeft_AttributeGetter";
    case WebFeature::kV8Screen_AvailTop_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailTop_AttributeGetter";
    case WebFeature::kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter:
      return os << "WebFeature::kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter";
    case WebFeature::kV8SVGStyleElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8SVGStyleElement_Disabled_AttributeGetter";
    case WebFeature::kV8SVGStyleElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8SVGStyleElement_Disabled_AttributeSetter";
    case WebFeature::kInputTypeFileSecureOrigin:
      return os << "WebFeature::kInputTypeFileSecureOrigin";
    case WebFeature::kInputTypeFileInsecureOrigin:
      return os << "WebFeature::kInputTypeFileInsecureOrigin";
    case WebFeature::kElementAttachShadow:
      return os << "WebFeature::kElementAttachShadow";
    case WebFeature::kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter";
    case WebFeature::kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter";
    case WebFeature::kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter:
      return os << "WebFeature::kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter";
    case WebFeature::kHTMLLinkElementDisabled:
      return os << "WebFeature::kHTMLLinkElementDisabled";
    case WebFeature::kV8HTMLLinkElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8HTMLLinkElement_Disabled_AttributeGetter";
    case WebFeature::kV8HTMLLinkElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8HTMLLinkElement_Disabled_AttributeSetter";
    case WebFeature::kV8HTMLStyleElement_Disabled_AttributeGetter:
      return os << "WebFeature::kV8HTMLStyleElement_Disabled_AttributeGetter";
    case WebFeature::kV8HTMLStyleElement_Disabled_AttributeSetter:
      return os << "WebFeature::kV8HTMLStyleElement_Disabled_AttributeSetter";
    case WebFeature::kV8DOMError_Constructor:
      return os << "WebFeature::kV8DOMError_Constructor";
    case WebFeature::kV8DOMError_Name_AttributeGetter:
      return os << "WebFeature::kV8DOMError_Name_AttributeGetter";
    case WebFeature::kV8DOMError_Message_AttributeGetter:
      return os << "WebFeature::kV8DOMError_Message_AttributeGetter";
    case WebFeature::kTextInputFired:
      return os << "WebFeature::kTextInputFired";
    case WebFeature::kV8TextEvent_Data_AttributeGetter:
      return os << "WebFeature::kV8TextEvent_Data_AttributeGetter";
    case WebFeature::kV8TextEvent_InitTextEvent_Method:
      return os << "WebFeature::kV8TextEvent_InitTextEvent_Method";
    case WebFeature::kClientHintsDPR:
      return os << "WebFeature::kClientHintsDPR";
    case WebFeature::kClientHintsResourceWidth:
      return os << "WebFeature::kClientHintsResourceWidth";
    case WebFeature::kClientHintsViewportWidth:
      return os << "WebFeature::kClientHintsViewportWidth";
    case WebFeature::kSRIElementIntegrityAttributeButIneligible:
      return os << "WebFeature::kSRIElementIntegrityAttributeButIneligible";
    case WebFeature::kFormDataAppendNull:
      return os << "WebFeature::kFormDataAppendNull";
    case WebFeature::kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase:
      return os << "WebFeature::kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase";
    case WebFeature::kNavigatorVibrate:
      return os << "WebFeature::kNavigatorVibrate";
    case WebFeature::kNavigatorVibrateSubFrame:
      return os << "WebFeature::kNavigatorVibrateSubFrame";
    case WebFeature::kV8XPathEvaluator_Constructor:
      return os << "WebFeature::kV8XPathEvaluator_Constructor";
    case WebFeature::kV8XPathEvaluator_CreateExpression_Method:
      return os << "WebFeature::kV8XPathEvaluator_CreateExpression_Method";
    case WebFeature::kV8XPathEvaluator_CreateNSResolver_Method:
      return os << "WebFeature::kV8XPathEvaluator_CreateNSResolver_Method";
    case WebFeature::kV8XPathEvaluator_Evaluate_Method:
      return os << "WebFeature::kV8XPathEvaluator_Evaluate_Method";
    case WebFeature::kRequestMIDIAccess_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccess_ObscuredByFootprinting";
    case WebFeature::kV8MouseEvent_LayerX_AttributeGetter:
      return os << "WebFeature::kV8MouseEvent_LayerX_AttributeGetter";
    case WebFeature::kV8MouseEvent_LayerY_AttributeGetter:
      return os << "WebFeature::kV8MouseEvent_LayerY_AttributeGetter";
    case WebFeature::kInnerTextWithShadowTree:
      return os << "WebFeature::kInnerTextWithShadowTree";
    case WebFeature::kSelectionToStringWithShadowTree:
      return os << "WebFeature::kSelectionToStringWithShadowTree";
    case WebFeature::kWindowFindWithShadowTree:
      return os << "WebFeature::kWindowFindWithShadowTree";
    case WebFeature::kV8CompositionEvent_InitCompositionEvent_Method:
      return os << "WebFeature::kV8CompositionEvent_InitCompositionEvent_Method";
    case WebFeature::kV8CustomEvent_InitCustomEvent_Method:
      return os << "WebFeature::kV8CustomEvent_InitCustomEvent_Method";
    case WebFeature::kV8DeviceMotionEvent_InitDeviceMotionEvent_Method:
      return os << "WebFeature::kV8DeviceMotionEvent_InitDeviceMotionEvent_Method";
    case WebFeature::kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method:
      return os << "WebFeature::kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method";
    case WebFeature::kV8Event_InitEvent_Method:
      return os << "WebFeature::kV8Event_InitEvent_Method";
    case WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method:
      return os << "WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method";
    case WebFeature::kV8MouseEvent_InitMouseEvent_Method:
      return os << "WebFeature::kV8MouseEvent_InitMouseEvent_Method";
    case WebFeature::kV8MutationEvent_InitMutationEvent_Method:
      return os << "WebFeature::kV8MutationEvent_InitMutationEvent_Method";
    case WebFeature::kV8StorageEvent_InitStorageEvent_Method:
      return os << "WebFeature::kV8StorageEvent_InitStorageEvent_Method";
    case WebFeature::kV8UIEvent_InitUIEvent_Method:
      return os << "WebFeature::kV8UIEvent_InitUIEvent_Method";
    case WebFeature::kRequestFileSystemNonWebbyOrigin:
      return os << "WebFeature::kRequestFileSystemNonWebbyOrigin";
    case WebFeature::kV8MemoryInfo_TotalJSHeapSize_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_TotalJSHeapSize_AttributeGetter";
    case WebFeature::kV8MemoryInfo_UsedJSHeapSize_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_UsedJSHeapSize_AttributeGetter";
    case WebFeature::kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter:
      return os << "WebFeature::kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter";
    case WebFeature::kV8Performance_Timing_AttributeGetter:
      return os << "WebFeature::kV8Performance_Timing_AttributeGetter";
    case WebFeature::kV8Performance_Navigation_AttributeGetter:
      return os << "WebFeature::kV8Performance_Navigation_AttributeGetter";
    case WebFeature::kV8Performance_Memory_AttributeGetter:
      return os << "WebFeature::kV8Performance_Memory_AttributeGetter";
    case WebFeature::kV8SharedWorker_WorkerStart_AttributeGetter:
      return os << "WebFeature::kV8SharedWorker_WorkerStart_AttributeGetter";
    case WebFeature::kHTMLMediaElementPreloadNone:
      return os << "WebFeature::kHTMLMediaElementPreloadNone";
    case WebFeature::kHTMLMediaElementPreloadMetadata:
      return os << "WebFeature::kHTMLMediaElementPreloadMetadata";
    case WebFeature::kHTMLMediaElementPreloadAuto:
      return os << "WebFeature::kHTMLMediaElementPreloadAuto";
    case WebFeature::kHTMLMediaElementPreloadDefault:
      return os << "WebFeature::kHTMLMediaElementPreloadDefault";
    case WebFeature::kMixedContentBlockableAllowed:
      return os << "WebFeature::kMixedContentBlockableAllowed";
    case WebFeature::kPseudoBeforeAfterForInputElement:
      return os << "WebFeature::kPseudoBeforeAfterForInputElement";
    case WebFeature::kV8Permissions_Revoke_Method:
      return os << "WebFeature::kV8Permissions_Revoke_Method";
    case WebFeature::kLinkRelDnsPrefetch:
      return os << "WebFeature::kLinkRelDnsPrefetch";
    case WebFeature::kLinkRelPreconnect:
      return os << "WebFeature::kLinkRelPreconnect";
    case WebFeature::kLinkRelPreload:
      return os << "WebFeature::kLinkRelPreload";
    case WebFeature::kLinkHeaderDnsPrefetch:
      return os << "WebFeature::kLinkHeaderDnsPrefetch";
    case WebFeature::kLinkHeaderPreconnect:
      return os << "WebFeature::kLinkHeaderPreconnect";
    case WebFeature::kClientHintsMetaAcceptCH:
      return os << "WebFeature::kClientHintsMetaAcceptCH";
    case WebFeature::kHTMLElementDeprecatedWidth:
      return os << "WebFeature::kHTMLElementDeprecatedWidth";
    case WebFeature::kClientHintsContentDPR:
      return os << "WebFeature::kClientHintsContentDPR";
    case WebFeature::kElementAttachShadowOpen:
      return os << "WebFeature::kElementAttachShadowOpen";
    case WebFeature::kElementAttachShadowClosed:
      return os << "WebFeature::kElementAttachShadowClosed";
    case WebFeature::kAudioParamSetValueAtTime:
      return os << "WebFeature::kAudioParamSetValueAtTime";
    case WebFeature::kAudioParamLinearRampToValueAtTime:
      return os << "WebFeature::kAudioParamLinearRampToValueAtTime";
    case WebFeature::kAudioParamExponentialRampToValueAtTime:
      return os << "WebFeature::kAudioParamExponentialRampToValueAtTime";
    case WebFeature::kAudioParamSetTargetAtTime:
      return os << "WebFeature::kAudioParamSetTargetAtTime";
    case WebFeature::kAudioParamSetValueCurveAtTime:
      return os << "WebFeature::kAudioParamSetValueCurveAtTime";
    case WebFeature::kAudioParamCancelScheduledValues:
      return os << "WebFeature::kAudioParamCancelScheduledValues";
    case WebFeature::kV8Permissions_Request_Method:
      return os << "WebFeature::kV8Permissions_Request_Method";
    case WebFeature::kLinkRelPrefetch:
      return os << "WebFeature::kLinkRelPrefetch";
    case WebFeature::kLinkRelPrerender:
      return os << "WebFeature::kLinkRelPrerender";
    case WebFeature::kLinkRelNext:
      return os << "WebFeature::kLinkRelNext";
    case WebFeature::kCSSValuePrefixedMinContent:
      return os << "WebFeature::kCSSValuePrefixedMinContent";
    case WebFeature::kCSSValuePrefixedMaxContent:
      return os << "WebFeature::kCSSValuePrefixedMaxContent";
    case WebFeature::kCSSValuePrefixedFitContent:
      return os << "WebFeature::kCSSValuePrefixedFitContent";
    case WebFeature::kCSSValuePrefixedFillAvailable:
      return os << "WebFeature::kCSSValuePrefixedFillAvailable";
    case WebFeature::kPresentationDefaultRequest:
      return os << "WebFeature::kPresentationDefaultRequest";
    case WebFeature::kPresentationAvailabilityChangeEventListener:
      return os << "WebFeature::kPresentationAvailabilityChangeEventListener";
    case WebFeature::kPresentationRequestConstructor:
      return os << "WebFeature::kPresentationRequestConstructor";
    case WebFeature::kPresentationRequestStart:
      return os << "WebFeature::kPresentationRequestStart";
    case WebFeature::kPresentationRequestReconnect:
      return os << "WebFeature::kPresentationRequestReconnect";
    case WebFeature::kPresentationRequestGetAvailability:
      return os << "WebFeature::kPresentationRequestGetAvailability";
    case WebFeature::kPresentationRequestConnectionAvailableEventListener:
      return os << "WebFeature::kPresentationRequestConnectionAvailableEventListener";
    case WebFeature::kPresentationConnectionTerminate:
      return os << "WebFeature::kPresentationConnectionTerminate";
    case WebFeature::kPresentationConnectionSend:
      return os << "WebFeature::kPresentationConnectionSend";
    case WebFeature::kPresentationConnectionMessageEventListener:
      return os << "WebFeature::kPresentationConnectionMessageEventListener";
    case WebFeature::kCSSAnimationsStackedNeutralKeyframe:
      return os << "WebFeature::kCSSAnimationsStackedNeutralKeyframe";
    case WebFeature::kReadingCheckedInClickHandler:
      return os << "WebFeature::kReadingCheckedInClickHandler";
    case WebFeature::kFlexboxIntrinsicSizeAlgorithmIsDifferent:
      return os << "WebFeature::kFlexboxIntrinsicSizeAlgorithmIsDifferent";
    case WebFeature::kHTMLImportsHasStyleSheets:
      return os << "WebFeature::kHTMLImportsHasStyleSheets";
    case WebFeature::kNetInfoType:
      return os << "WebFeature::kNetInfoType";
    case WebFeature::kNetInfoDownlinkMax:
      return os << "WebFeature::kNetInfoDownlinkMax";
    case WebFeature::kNetInfoOnChange:
      return os << "WebFeature::kNetInfoOnChange";
    case WebFeature::kNetInfoOnTypeChange:
      return os << "WebFeature::kNetInfoOnTypeChange";
    case WebFeature::kV8Window_Alert_Method:
      return os << "WebFeature::kV8Window_Alert_Method";
    case WebFeature::kV8Window_Confirm_Method:
      return os << "WebFeature::kV8Window_Confirm_Method";
    case WebFeature::kV8Window_Prompt_Method:
      return os << "WebFeature::kV8Window_Prompt_Method";
    case WebFeature::kV8Window_Print_Method:
      return os << "WebFeature::kV8Window_Print_Method";
    case WebFeature::kV8Window_RequestIdleCallback_Method:
      return os << "WebFeature::kV8Window_RequestIdleCallback_Method";
    case WebFeature::kFlexboxPercentagePaddingVertical:
      return os << "WebFeature::kFlexboxPercentagePaddingVertical";
    case WebFeature::kFlexboxPercentageMarginVertical:
      return os << "WebFeature::kFlexboxPercentageMarginVertical";
    case WebFeature::kCSPSourceWildcardWouldMatchExactHost:
      return os << "WebFeature::kCSPSourceWildcardWouldMatchExactHost";
    case WebFeature::kCredentialManagerGet:
      return os << "WebFeature::kCredentialManagerGet";
    case WebFeature::kCredentialManagerGetMediationOptional:
      return os << "WebFeature::kCredentialManagerGetMediationOptional";
    case WebFeature::kCredentialManagerGetMediationSilent:
      return os << "WebFeature::kCredentialManagerGetMediationSilent";
    case WebFeature::kCredentialManagerStore:
      return os << "WebFeature::kCredentialManagerStore";
    case WebFeature::kBlockableMixedContentInSubframeBlocked:
      return os << "WebFeature::kBlockableMixedContentInSubframeBlocked";
    case WebFeature::kAddEventListenerThirdArgumentIsObject:
      return os << "WebFeature::kAddEventListenerThirdArgumentIsObject";
    case WebFeature::kRemoveEventListenerThirdArgumentIsObject:
      return os << "WebFeature::kRemoveEventListenerThirdArgumentIsObject";
    case WebFeature::kCSSAtRuleCharset:
      return os << "WebFeature::kCSSAtRuleCharset";
    case WebFeature::kCSSAtRuleFontFace:
      return os << "WebFeature::kCSSAtRuleFontFace";
    case WebFeature::kCSSAtRuleImport:
      return os << "WebFeature::kCSSAtRuleImport";
    case WebFeature::kCSSAtRuleKeyframes:
      return os << "WebFeature::kCSSAtRuleKeyframes";
    case WebFeature::kCSSAtRuleMedia:
      return os << "WebFeature::kCSSAtRuleMedia";
    case WebFeature::kCSSAtRuleNamespace:
      return os << "WebFeature::kCSSAtRuleNamespace";
    case WebFeature::kCSSAtRulePage:
      return os << "WebFeature::kCSSAtRulePage";
    case WebFeature::kCSSAtRuleSupports:
      return os << "WebFeature::kCSSAtRuleSupports";
    case WebFeature::kCSSAtRuleViewport:
      return os << "WebFeature::kCSSAtRuleViewport";
    case WebFeature::kCSSAtRuleWebkitKeyframes:
      return os << "WebFeature::kCSSAtRuleWebkitKeyframes";
    case WebFeature::kV8HTMLFieldSetElement_Elements_AttributeGetter:
      return os << "WebFeature::kV8HTMLFieldSetElement_Elements_AttributeGetter";
    case WebFeature::kExternalAddSearchProvider:
      return os << "WebFeature::kExternalAddSearchProvider";
    case WebFeature::kExternalIsSearchProviderInstalled:
      return os << "WebFeature::kExternalIsSearchProviderInstalled";
    case WebFeature::kV8Permissions_RequestAll_Method:
      return os << "WebFeature::kV8Permissions_RequestAll_Method";
    case WebFeature::kDeviceOrientationAbsoluteInsecureOrigin:
      return os << "WebFeature::kDeviceOrientationAbsoluteInsecureOrigin";
    case WebFeature::kDeviceOrientationAbsoluteSecureOrigin:
      return os << "WebFeature::kDeviceOrientationAbsoluteSecureOrigin";
    case WebFeature::kFontFaceConstructor:
      return os << "WebFeature::kFontFaceConstructor";
    case WebFeature::kServiceWorkerControlledPage:
      return os << "WebFeature::kServiceWorkerControlledPage";
    case WebFeature::kMeterElementWithMeterAppearance:
      return os << "WebFeature::kMeterElementWithMeterAppearance";
    case WebFeature::kMeterElementWithNoneAppearance:
      return os << "WebFeature::kMeterElementWithNoneAppearance";
    case WebFeature::kSelectionAnchorNode:
      return os << "WebFeature::kSelectionAnchorNode";
    case WebFeature::kSelectionAnchorOffset:
      return os << "WebFeature::kSelectionAnchorOffset";
    case WebFeature::kSelectionFocusNode:
      return os << "WebFeature::kSelectionFocusNode";
    case WebFeature::kSelectionFocusOffset:
      return os << "WebFeature::kSelectionFocusOffset";
    case WebFeature::kSelectionIsCollapsed:
      return os << "WebFeature::kSelectionIsCollapsed";
    case WebFeature::kSelectionRangeCount:
      return os << "WebFeature::kSelectionRangeCount";
    case WebFeature::kSelectionGetRangeAt:
      return os << "WebFeature::kSelectionGetRangeAt";
    case WebFeature::kSelectionAddRange:
      return os << "WebFeature::kSelectionAddRange";
    case WebFeature::kSelectionRemoveAllRanges:
      return os << "WebFeature::kSelectionRemoveAllRanges";
    case WebFeature::kSelectionCollapse:
      return os << "WebFeature::kSelectionCollapse";
    case WebFeature::kSelectionCollapseToStart:
      return os << "WebFeature::kSelectionCollapseToStart";
    case WebFeature::kSelectionCollapseToEnd:
      return os << "WebFeature::kSelectionCollapseToEnd";
    case WebFeature::kSelectionExtend:
      return os << "WebFeature::kSelectionExtend";
    case WebFeature::kSelectionSelectAllChildren:
      return os << "WebFeature::kSelectionSelectAllChildren";
    case WebFeature::kSelectionDeleteDromDocument:
      return os << "WebFeature::kSelectionDeleteDromDocument";
    case WebFeature::kSelectionDOMString:
      return os << "WebFeature::kSelectionDOMString";
    case WebFeature::kInputTypeRangeVerticalAppearance:
      return os << "WebFeature::kInputTypeRangeVerticalAppearance";
    case WebFeature::kCSSFilterReference:
      return os << "WebFeature::kCSSFilterReference";
    case WebFeature::kCSSFilterGrayscale:
      return os << "WebFeature::kCSSFilterGrayscale";
    case WebFeature::kCSSFilterSepia:
      return os << "WebFeature::kCSSFilterSepia";
    case WebFeature::kCSSFilterSaturate:
      return os << "WebFeature::kCSSFilterSaturate";
    case WebFeature::kCSSFilterHueRotate:
      return os << "WebFeature::kCSSFilterHueRotate";
    case WebFeature::kCSSFilterInvert:
      return os << "WebFeature::kCSSFilterInvert";
    case WebFeature::kCSSFilterOpacity:
      return os << "WebFeature::kCSSFilterOpacity";
    case WebFeature::kCSSFilterBrightness:
      return os << "WebFeature::kCSSFilterBrightness";
    case WebFeature::kCSSFilterContrast:
      return os << "WebFeature::kCSSFilterContrast";
    case WebFeature::kCSSFilterBlur:
      return os << "WebFeature::kCSSFilterBlur";
    case WebFeature::kCSSFilterDropShadow:
      return os << "WebFeature::kCSSFilterDropShadow";
    case WebFeature::kBackgroundSyncRegister:
      return os << "WebFeature::kBackgroundSyncRegister";
    case WebFeature::kExecCommandOnInputOrTextarea:
      return os << "WebFeature::kExecCommandOnInputOrTextarea";
    case WebFeature::kV8History_ScrollRestoration_AttributeGetter:
      return os << "WebFeature::kV8History_ScrollRestoration_AttributeGetter";
    case WebFeature::kV8History_ScrollRestoration_AttributeSetter:
      return os << "WebFeature::kV8History_ScrollRestoration_AttributeSetter";
    case WebFeature::kSVG1DOMFilter:
      return os << "WebFeature::kSVG1DOMFilter";
    case WebFeature::kOfflineAudioContextStartRendering:
      return os << "WebFeature::kOfflineAudioContextStartRendering";
    case WebFeature::kOfflineAudioContextSuspend:
      return os << "WebFeature::kOfflineAudioContextSuspend";
    case WebFeature::kOfflineAudioContextResume:
      return os << "WebFeature::kOfflineAudioContextResume";
    case WebFeature::kSVG1DOMPaintServer:
      return os << "WebFeature::kSVG1DOMPaintServer";
    case WebFeature::kSVGSVGElementFragmentSVGView:
      return os << "WebFeature::kSVGSVGElementFragmentSVGView";
    case WebFeature::kSVGSVGElementFragmentSVGViewElement:
      return os << "WebFeature::kSVGSVGElementFragmentSVGViewElement";
    case WebFeature::kPresentationConnectionClose:
      return os << "WebFeature::kPresentationConnectionClose";
    case WebFeature::kSVG1DOMShape:
      return os << "WebFeature::kSVG1DOMShape";
    case WebFeature::kSVG1DOMText:
      return os << "WebFeature::kSVG1DOMText";
    case WebFeature::kRTCPeerConnectionConstructorConstraints:
      return os << "WebFeature::kRTCPeerConnectionConstructorConstraints";
    case WebFeature::kRTCPeerConnectionConstructorCompliant:
      return os << "WebFeature::kRTCPeerConnectionConstructorCompliant";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyFailureCallback";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyConstraints:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyConstraints";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyOfferOptions:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyOfferOptions";
    case WebFeature::kRTCPeerConnectionCreateOfferLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferLegacyCompliant";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyFailureCallback";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyConstraints:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyConstraints";
    case WebFeature::kRTCPeerConnectionCreateAnswerLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionCreateAnswerLegacyCompliant";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback";
    case WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionSetLocalDescriptionLegacyCompliant";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback";
    case WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant:
      return os << "WebFeature::kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant";
    case WebFeature::kRTCPeerConnectionGetStatsLegacyNonCompliant:
      return os << "WebFeature::kRTCPeerConnectionGetStatsLegacyNonCompliant";
    case WebFeature::kNodeFilterIsFunction:
      return os << "WebFeature::kNodeFilterIsFunction";
    case WebFeature::kNodeFilterIsObject:
      return os << "WebFeature::kNodeFilterIsObject";
    case WebFeature::kCSSSelectorInternalPseudoListBox:
      return os << "WebFeature::kCSSSelectorInternalPseudoListBox";
    case WebFeature::kCSSSelectorInternalMediaControlsOverlayCastButton:
      return os << "WebFeature::kCSSSelectorInternalMediaControlsOverlayCastButton";
    case WebFeature::kCSSSelectorInternalPseudoSpatialNavigationFocus:
      return os << "WebFeature::kCSSSelectorInternalPseudoSpatialNavigationFocus";
    case WebFeature::kSameOriginTextScript:
      return os << "WebFeature::kSameOriginTextScript";
    case WebFeature::kSameOriginApplicationScript:
      return os << "WebFeature::kSameOriginApplicationScript";
    case WebFeature::kSameOriginOtherScript:
      return os << "WebFeature::kSameOriginOtherScript";
    case WebFeature::kCrossOriginTextScript:
      return os << "WebFeature::kCrossOriginTextScript";
    case WebFeature::kCrossOriginApplicationScript:
      return os << "WebFeature::kCrossOriginApplicationScript";
    case WebFeature::kCrossOriginOtherScript:
      return os << "WebFeature::kCrossOriginOtherScript";
    case WebFeature::kSVG1DOMSVGTests:
      return os << "WebFeature::kSVG1DOMSVGTests";
    case WebFeature::kDisableRemotePlaybackAttribute:
      return os << "WebFeature::kDisableRemotePlaybackAttribute";
    case WebFeature::kV8SloppyMode:
      return os << "WebFeature::kV8SloppyMode";
    case WebFeature::kV8StrictMode:
      return os << "WebFeature::kV8StrictMode";
    case WebFeature::kV8StrongMode:
      return os << "WebFeature::kV8StrongMode";
    case WebFeature::kAudioNodeConnectToAudioNode:
      return os << "WebFeature::kAudioNodeConnectToAudioNode";
    case WebFeature::kAudioNodeConnectToAudioParam:
      return os << "WebFeature::kAudioNodeConnectToAudioParam";
    case WebFeature::kAudioNodeDisconnectFromAudioNode:
      return os << "WebFeature::kAudioNodeDisconnectFromAudioNode";
    case WebFeature::kAudioNodeDisconnectFromAudioParam:
      return os << "WebFeature::kAudioNodeDisconnectFromAudioParam";
    case WebFeature::kV8CSSFontFaceRule_Style_AttributeGetter:
      return os << "WebFeature::kV8CSSFontFaceRule_Style_AttributeGetter";
    case WebFeature::kSelectionCollapseNull:
      return os << "WebFeature::kSelectionCollapseNull";
    case WebFeature::kSelectionSetBaseAndExtentNull:
      return os << "WebFeature::kSelectionSetBaseAndExtentNull";
    case WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGNumber_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGLength_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGLength_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGAngle_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGPoint_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGMatrix_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGRect_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGRect_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGTransform_Method";
    case WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method:
      return os << "WebFeature::kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method";
    case WebFeature::kFormNameAccessForNonDescendantImageElement:
      return os << "WebFeature::kFormNameAccessForNonDescendantImageElement";
    case WebFeature::kV8RegExpPrototypeStickyGetter:
      return os << "WebFeature::kV8RegExpPrototypeStickyGetter";
    case WebFeature::kV8RegExpPrototypeToString:
      return os << "WebFeature::kV8RegExpPrototypeToString";
    case WebFeature::kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter:
      return os << "WebFeature::kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter";
    case WebFeature::kDataElement:
      return os << "WebFeature::kDataElement";
    case WebFeature::kTimeElement:
      return os << "WebFeature::kTimeElement";
    case WebFeature::kSVG1DOMUriReference:
      return os << "WebFeature::kSVG1DOMUriReference";
    case WebFeature::kSVG1DOMZoomAndPan:
      return os << "WebFeature::kSVG1DOMZoomAndPan";
    case WebFeature::kV8SVGGraphicsElement_Transform_AttributeGetter:
      return os << "WebFeature::kV8SVGGraphicsElement_Transform_AttributeGetter";
    case WebFeature::kMenuItemElement:
      return os << "WebFeature::kMenuItemElement";
    case WebFeature::kMenuItemCloseTag:
      return os << "WebFeature::kMenuItemCloseTag";
    case WebFeature::kSVG1DOMMarkerElement:
      return os << "WebFeature::kSVG1DOMMarkerElement";
    case WebFeature::kSVG1DOMUseElement:
      return os << "WebFeature::kSVG1DOMUseElement";
    case WebFeature::kSVG1DOMMaskElement:
      return os << "WebFeature::kSVG1DOMMaskElement";
    case WebFeature::kV8SVGAElement_Target_AttributeGetter:
      return os << "WebFeature::kV8SVGAElement_Target_AttributeGetter";
    case WebFeature::kV8SVGClipPathElement_ClipPathUnits_AttributeGetter:
      return os << "WebFeature::kV8SVGClipPathElement_ClipPathUnits_AttributeGetter";
    case WebFeature::kSVG1DOMFitToViewBox:
      return os << "WebFeature::kSVG1DOMFitToViewBox";
    case WebFeature::kSVG1DOMSVGElement:
      return os << "WebFeature::kSVG1DOMSVGElement";
    case WebFeature::kSVG1DOMImageElement:
      return os << "WebFeature::kSVG1DOMImageElement";
    case WebFeature::kSVG1DOMForeignObjectElement:
      return os << "WebFeature::kSVG1DOMForeignObjectElement";
    case WebFeature::kAudioContextCreateIIRFilter:
      return os << "WebFeature::kAudioContextCreateIIRFilter";
    case WebFeature::kCSSSelectorPseudoSlotted:
      return os << "WebFeature::kCSSSelectorPseudoSlotted";
    case WebFeature::kMediaDevicesEnumerateDevices:
      return os << "WebFeature::kMediaDevicesEnumerateDevices";
    case WebFeature::kEventComposedPath:
      return os << "WebFeature::kEventComposedPath";
    case WebFeature::kLinkHeaderPreload:
      return os << "WebFeature::kLinkHeaderPreload";
    case WebFeature::kMouseWheelEvent:
      return os << "WebFeature::kMouseWheelEvent";
    case WebFeature::kWheelEvent:
      return os << "WebFeature::kWheelEvent";
    case WebFeature::kMouseWheelAndWheelEvent:
      return os << "WebFeature::kMouseWheelAndWheelEvent";
    case WebFeature::kBodyScrollsInAdditionToViewport:
      return os << "WebFeature::kBodyScrollsInAdditionToViewport";
    case WebFeature::kDocumentDesignModeEnabeld:
      return os << "WebFeature::kDocumentDesignModeEnabeld";
    case WebFeature::kContentEditableTrue:
      return os << "WebFeature::kContentEditableTrue";
    case WebFeature::kContentEditableTrueOnHTML:
      return os << "WebFeature::kContentEditableTrueOnHTML";
    case WebFeature::kContentEditablePlainTextOnly:
      return os << "WebFeature::kContentEditablePlainTextOnly";
    case WebFeature::kV8RegExpPrototypeUnicodeGetter:
      return os << "WebFeature::kV8RegExpPrototypeUnicodeGetter";
    case WebFeature::kV8IntlV8Parse:
      return os << "WebFeature::kV8IntlV8Parse";
    case WebFeature::kV8IntlPattern:
      return os << "WebFeature::kV8IntlPattern";
    case WebFeature::kV8IntlResolved:
      return os << "WebFeature::kV8IntlResolved";
    case WebFeature::kV8PromiseChain:
      return os << "WebFeature::kV8PromiseChain";
    case WebFeature::kV8PromiseAccept:
      return os << "WebFeature::kV8PromiseAccept";
    case WebFeature::kV8PromiseDefer:
      return os << "WebFeature::kV8PromiseDefer";
    case WebFeature::kEventComposed:
      return os << "WebFeature::kEventComposed";
    case WebFeature::kGeolocationInsecureOriginIframe:
      return os << "WebFeature::kGeolocationInsecureOriginIframe";
    case WebFeature::kGeolocationSecureOriginIframe:
      return os << "WebFeature::kGeolocationSecureOriginIframe";
    case WebFeature::kRequestMIDIAccessIframe_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessIframe_ObscuredByFootprinting";
    case WebFeature::kGetUserMediaInsecureOriginIframe:
      return os << "WebFeature::kGetUserMediaInsecureOriginIframe";
    case WebFeature::kGetUserMediaSecureOriginIframe:
      return os << "WebFeature::kGetUserMediaSecureOriginIframe";
    case WebFeature::kElementRequestPointerLockIframe:
      return os << "WebFeature::kElementRequestPointerLockIframe";
    case WebFeature::kNotificationAPIInsecureOriginIframe:
      return os << "WebFeature::kNotificationAPIInsecureOriginIframe";
    case WebFeature::kNotificationAPISecureOriginIframe:
      return os << "WebFeature::kNotificationAPISecureOriginIframe";
    case WebFeature::kWebSocket:
      return os << "WebFeature::kWebSocket";
    case WebFeature::kMediaStreamConstraintsNameValue:
      return os << "WebFeature::kMediaStreamConstraintsNameValue";
    case WebFeature::kMediaStreamConstraintsFromDictionary:
      return os << "WebFeature::kMediaStreamConstraintsFromDictionary";
    case WebFeature::kMediaStreamConstraintsConformant:
      return os << "WebFeature::kMediaStreamConstraintsConformant";
    case WebFeature::kCSSSelectorIndirectAdjacent:
      return os << "WebFeature::kCSSSelectorIndirectAdjacent";
    case WebFeature::kCreateImageBitmap:
      return os << "WebFeature::kCreateImageBitmap";
    case WebFeature::kPresentationConnectionConnectEventListener:
      return os << "WebFeature::kPresentationConnectionConnectEventListener";
    case WebFeature::kPresentationConnectionCloseEventListener:
      return os << "WebFeature::kPresentationConnectionCloseEventListener";
    case WebFeature::kPresentationConnectionTerminateEventListener:
      return os << "WebFeature::kPresentationConnectionTerminateEventListener";
    case WebFeature::kDocumentCreateEventAnimationEvent:
      return os << "WebFeature::kDocumentCreateEventAnimationEvent";
    case WebFeature::kDocumentCreateEventBeforeUnloadEvent:
      return os << "WebFeature::kDocumentCreateEventBeforeUnloadEvent";
    case WebFeature::kDocumentCreateEventCompositionEvent:
      return os << "WebFeature::kDocumentCreateEventCompositionEvent";
    case WebFeature::kDocumentCreateEventDragEvent:
      return os << "WebFeature::kDocumentCreateEventDragEvent";
    case WebFeature::kDocumentCreateEventErrorEvent:
      return os << "WebFeature::kDocumentCreateEventErrorEvent";
    case WebFeature::kDocumentCreateEventFocusEvent:
      return os << "WebFeature::kDocumentCreateEventFocusEvent";
    case WebFeature::kDocumentCreateEventHashChangeEvent:
      return os << "WebFeature::kDocumentCreateEventHashChangeEvent";
    case WebFeature::kDocumentCreateEventMutationEvent:
      return os << "WebFeature::kDocumentCreateEventMutationEvent";
    case WebFeature::kDocumentCreateEventPageTransitionEvent:
      return os << "WebFeature::kDocumentCreateEventPageTransitionEvent";
    case WebFeature::kDocumentCreateEventPopStateEvent:
      return os << "WebFeature::kDocumentCreateEventPopStateEvent";
    case WebFeature::kDocumentCreateEventTextEvent:
      return os << "WebFeature::kDocumentCreateEventTextEvent";
    case WebFeature::kDocumentCreateEventTransitionEvent:
      return os << "WebFeature::kDocumentCreateEventTransitionEvent";
    case WebFeature::kDocumentCreateEventWheelEvent:
      return os << "WebFeature::kDocumentCreateEventWheelEvent";
    case WebFeature::kDocumentCreateEventTrackEvent:
      return os << "WebFeature::kDocumentCreateEventTrackEvent";
    case WebFeature::kDocumentCreateEventMutationEvents:
      return os << "WebFeature::kDocumentCreateEventMutationEvents";
    case WebFeature::kDocumentCreateEventSVGEvents:
      return os << "WebFeature::kDocumentCreateEventSVGEvents";
    case WebFeature::kDocumentCreateEventDeviceMotionEvent:
      return os << "WebFeature::kDocumentCreateEventDeviceMotionEvent";
    case WebFeature::kDocumentCreateEventDeviceOrientationEvent:
      return os << "WebFeature::kDocumentCreateEventDeviceOrientationEvent";
    case WebFeature::kDocumentCreateEventIDBVersionChangeEvent:
      return os << "WebFeature::kDocumentCreateEventIDBVersionChangeEvent";
    case WebFeature::kDocumentCreateEventStorageEvent:
      return os << "WebFeature::kDocumentCreateEventStorageEvent";
    case WebFeature::kDocumentCreateEventWebGLContextEvent:
      return os << "WebFeature::kDocumentCreateEventWebGLContextEvent";
    case WebFeature::kDocumentCreateEventCloseEvent:
      return os << "WebFeature::kDocumentCreateEventCloseEvent";
    case WebFeature::kDocumentCreateEventKeyboardEvents:
      return os << "WebFeature::kDocumentCreateEventKeyboardEvents";
    case WebFeature::kHTMLMediaElement:
      return os << "WebFeature::kHTMLMediaElement";
    case WebFeature::kHTMLMediaElementInDocument:
      return os << "WebFeature::kHTMLMediaElementInDocument";
    case WebFeature::kHTMLMediaElementControlsAttribute:
      return os << "WebFeature::kHTMLMediaElementControlsAttribute";
    case WebFeature::kV8Animation_Oncancel_AttributeGetter:
      return os << "WebFeature::kV8Animation_Oncancel_AttributeGetter";
    case WebFeature::kV8Animation_Oncancel_AttributeSetter:
      return os << "WebFeature::kV8Animation_Oncancel_AttributeSetter";
    case WebFeature::kV8HTMLCommentInExternalScript:
      return os << "WebFeature::kV8HTMLCommentInExternalScript";
    case WebFeature::kV8HTMLComment:
      return os << "WebFeature::kV8HTMLComment";
    case WebFeature::kV8SloppyModeBlockScopedFunctionRedefinition:
      return os << "WebFeature::kV8SloppyModeBlockScopedFunctionRedefinition";
    case WebFeature::kV8ForInInitializer:
      return os << "WebFeature::kV8ForInInitializer";
    case WebFeature::kV8Animation_Id_AttributeGetter:
      return os << "WebFeature::kV8Animation_Id_AttributeGetter";
    case WebFeature::kV8Animation_Id_AttributeSetter:
      return os << "WebFeature::kV8Animation_Id_AttributeSetter";
    case WebFeature::kApplicationCacheManifestSelectInsecureOrigin:
      return os << "WebFeature::kApplicationCacheManifestSelectInsecureOrigin";
    case WebFeature::kApplicationCacheManifestSelectSecureOrigin:
      return os << "WebFeature::kApplicationCacheManifestSelectSecureOrigin";
    case WebFeature::kApplicationCacheAPIInsecureOrigin:
      return os << "WebFeature::kApplicationCacheAPIInsecureOrigin";
    case WebFeature::kApplicationCacheAPISecureOrigin:
      return os << "WebFeature::kApplicationCacheAPISecureOrigin";
    case WebFeature::kCSSAtRuleApply:
      return os << "WebFeature::kCSSAtRuleApply";
    case WebFeature::kCSSSelectorPseudoAny:
      return os << "WebFeature::kCSSSelectorPseudoAny";
    case WebFeature::kHTMLLabelElementControlForNonFormAssociatedElement:
      return os << "WebFeature::kHTMLLabelElementControlForNonFormAssociatedElement";
    case WebFeature::kHTMLMediaElementLoadNetworkEmptyNotPaused:
      return os << "WebFeature::kHTMLMediaElementLoadNetworkEmptyNotPaused";
    case WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechGrammar_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechGrammarList_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognition_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognitionError_ConstructorGetter";
    case WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter";
    case WebFeature::kV8Window_SpeechSynthesis_AttributeGetter:
      return os << "WebFeature::kV8Window_SpeechSynthesis_AttributeGetter";
    case WebFeature::kV8IDBFactory_WebkitGetDatabaseNames_Method:
      return os << "WebFeature::kV8IDBFactory_WebkitGetDatabaseNames_Method";
    case WebFeature::kScriptPassesCSPDynamic:
      return os << "WebFeature::kScriptPassesCSPDynamic";
    case WebFeature::kCSPWithStrictDynamic:
      return os << "WebFeature::kCSPWithStrictDynamic";
    case WebFeature::kScrollAnchored:
      return os << "WebFeature::kScrollAnchored";
    case WebFeature::kAddEventListenerFourArguments:
      return os << "WebFeature::kAddEventListenerFourArguments";
    case WebFeature::kRemoveEventListenerFourArguments:
      return os << "WebFeature::kRemoveEventListenerFourArguments";
    case WebFeature::kSVGCalcModeDiscrete:
      return os << "WebFeature::kSVGCalcModeDiscrete";
    case WebFeature::kSVGCalcModeLinear:
      return os << "WebFeature::kSVGCalcModeLinear";
    case WebFeature::kSVGCalcModePaced:
      return os << "WebFeature::kSVGCalcModePaced";
    case WebFeature::kSVGCalcModeSpline:
      return os << "WebFeature::kSVGCalcModeSpline";
    case WebFeature::kFormSubmissionStarted:
      return os << "WebFeature::kFormSubmissionStarted";
    case WebFeature::kFormValidationStarted:
      return os << "WebFeature::kFormValidationStarted";
    case WebFeature::kFormValidationAbortedSubmission:
      return os << "WebFeature::kFormValidationAbortedSubmission";
    case WebFeature::kFormValidationShowedMessage:
      return os << "WebFeature::kFormValidationShowedMessage";
    case WebFeature::kV8Document_Images_AttributeGetter:
      return os << "WebFeature::kV8Document_Images_AttributeGetter";
    case WebFeature::kV8Document_Embeds_AttributeGetter:
      return os << "WebFeature::kV8Document_Embeds_AttributeGetter";
    case WebFeature::kV8Document_Plugins_AttributeGetter:
      return os << "WebFeature::kV8Document_Plugins_AttributeGetter";
    case WebFeature::kV8Document_Links_AttributeGetter:
      return os << "WebFeature::kV8Document_Links_AttributeGetter";
    case WebFeature::kV8Document_Forms_AttributeGetter:
      return os << "WebFeature::kV8Document_Forms_AttributeGetter";
    case WebFeature::kV8Document_Scripts_AttributeGetter:
      return os << "WebFeature::kV8Document_Scripts_AttributeGetter";
    case WebFeature::kV8Document_Anchors_AttributeGetter:
      return os << "WebFeature::kV8Document_Anchors_AttributeGetter";
    case WebFeature::kV8Document_Applets_AttributeGetter:
      return os << "WebFeature::kV8Document_Applets_AttributeGetter";
    case WebFeature::kMediaStreamTrackRemote:
      return os << "WebFeature::kMediaStreamTrackRemote";
    case WebFeature::kV8Node_IsConnected_AttributeGetter:
      return os << "WebFeature::kV8Node_IsConnected_AttributeGetter";
    case WebFeature::kShadowRootDelegatesFocus:
      return os << "WebFeature::kShadowRootDelegatesFocus";
    case WebFeature::kMixedShadowRootV0AndV1:
      return os << "WebFeature::kMixedShadowRootV0AndV1";
    case WebFeature::kFileAPINativeLineEndings:
      return os << "WebFeature::kFileAPINativeLineEndings";
    case WebFeature::kPointerEventAttributeCount:
      return os << "WebFeature::kPointerEventAttributeCount";
    case WebFeature::kCompositedReplication:
      return os << "WebFeature::kCompositedReplication";
    case WebFeature::kV8DataTransferItem_WebkitGetAsEntry_Method:
      return os << "WebFeature::kV8DataTransferItem_WebkitGetAsEntry_Method";
    case WebFeature::kV8HTMLInputElement_WebkitEntries_AttributeGetter:
      return os << "WebFeature::kV8HTMLInputElement_WebkitEntries_AttributeGetter";
    case WebFeature::kEntry_Filesystem_AttributeGetter_IsolatedFileSystem:
      return os << "WebFeature::kEntry_Filesystem_AttributeGetter_IsolatedFileSystem";
    case WebFeature::kEntry_GetMetadata_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_GetMetadata_Method_IsolatedFileSystem";
    case WebFeature::kEntry_MoveTo_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_MoveTo_Method_IsolatedFileSystem";
    case WebFeature::kEntry_CopyTo_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_CopyTo_Method_IsolatedFileSystem";
    case WebFeature::kEntry_Remove_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_Remove_Method_IsolatedFileSystem";
    case WebFeature::kEntry_GetParent_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_GetParent_Method_IsolatedFileSystem";
    case WebFeature::kEntry_ToURL_Method_IsolatedFileSystem:
      return os << "WebFeature::kEntry_ToURL_Method_IsolatedFileSystem";
    case WebFeature::kDuring_Microtask_Alert:
      return os << "WebFeature::kDuring_Microtask_Alert";
    case WebFeature::kDuring_Microtask_Confirm:
      return os << "WebFeature::kDuring_Microtask_Confirm";
    case WebFeature::kDuring_Microtask_Print:
      return os << "WebFeature::kDuring_Microtask_Print";
    case WebFeature::kDuring_Microtask_Prompt:
      return os << "WebFeature::kDuring_Microtask_Prompt";
    case WebFeature::kDuring_Microtask_SyncXHR:
      return os << "WebFeature::kDuring_Microtask_SyncXHR";
    case WebFeature::kCredentialManagerGetReturnedCredential:
      return os << "WebFeature::kCredentialManagerGetReturnedCredential";
    case WebFeature::kGeolocationInsecureOriginDeprecatedNotRemoved:
      return os << "WebFeature::kGeolocationInsecureOriginDeprecatedNotRemoved";
    case WebFeature::kGeolocationInsecureOriginIframeDeprecatedNotRemoved:
      return os << "WebFeature::kGeolocationInsecureOriginIframeDeprecatedNotRemoved";
    case WebFeature::kProgressElementWithNoneAppearance:
      return os << "WebFeature::kProgressElementWithNoneAppearance";
    case WebFeature::kProgressElementWithProgressBarAppearance:
      return os << "WebFeature::kProgressElementWithProgressBarAppearance";
    case WebFeature::kPointerEventAddListenerCount:
      return os << "WebFeature::kPointerEventAddListenerCount";
    case WebFeature::kCSSValueAppearanceNone:
      return os << "WebFeature::kCSSValueAppearanceNone";
    case WebFeature::kCSSValueAppearanceNotNone:
      return os << "WebFeature::kCSSValueAppearanceNotNone";
    case WebFeature::kCSSValueAppearanceOthers:
      return os << "WebFeature::kCSSValueAppearanceOthers";
    case WebFeature::kCSSValueAppearanceButton:
      return os << "WebFeature::kCSSValueAppearanceButton";
    case WebFeature::kCSSValueAppearanceCheckbox:
      return os << "WebFeature::kCSSValueAppearanceCheckbox";
    case WebFeature::kCSSValueAppearanceMenulist:
      return os << "WebFeature::kCSSValueAppearanceMenulist";
    case WebFeature::kCSSValueAppearanceMenulistButton:
      return os << "WebFeature::kCSSValueAppearanceMenulistButton";
    case WebFeature::kCSSValueAppearanceListbox:
      return os << "WebFeature::kCSSValueAppearanceListbox";
    case WebFeature::kCSSValueAppearanceRadio:
      return os << "WebFeature::kCSSValueAppearanceRadio";
    case WebFeature::kCSSValueAppearanceSearchField:
      return os << "WebFeature::kCSSValueAppearanceSearchField";
    case WebFeature::kCSSValueAppearanceTextField:
      return os << "WebFeature::kCSSValueAppearanceTextField";
    case WebFeature::kAudioContextCreatePannerAutomated:
      return os << "WebFeature::kAudioContextCreatePannerAutomated";
    case WebFeature::kPannerNodeSetPosition:
      return os << "WebFeature::kPannerNodeSetPosition";
    case WebFeature::kPannerNodeSetOrientation:
      return os << "WebFeature::kPannerNodeSetOrientation";
    case WebFeature::kAudioListenerSetPosition:
      return os << "WebFeature::kAudioListenerSetPosition";
    case WebFeature::kAudioListenerSetOrientation:
      return os << "WebFeature::kAudioListenerSetOrientation";
    case WebFeature::kIntersectionObserver_Constructor:
      return os << "WebFeature::kIntersectionObserver_Constructor";
    case WebFeature::kDurableStoragePersist:
      return os << "WebFeature::kDurableStoragePersist";
    case WebFeature::kDurableStoragePersisted:
      return os << "WebFeature::kDurableStoragePersisted";
    case WebFeature::kDurableStorageEstimate:
      return os << "WebFeature::kDurableStorageEstimate";
    case WebFeature::kCSSDeepCombinatorAndShadow:
      return os << "WebFeature::kCSSDeepCombinatorAndShadow";
    case WebFeature::kOpacityWithPreserve3DQuirk:
      return os << "WebFeature::kOpacityWithPreserve3DQuirk";
    case WebFeature::kCSSSelectorPseudoReadOnly:
      return os << "WebFeature::kCSSSelectorPseudoReadOnly";
    case WebFeature::kCSSSelectorPseudoReadWrite:
      return os << "WebFeature::kCSSSelectorPseudoReadWrite";
    case WebFeature::kCSSSelectorPseudoDefined:
      return os << "WebFeature::kCSSSelectorPseudoDefined";
    case WebFeature::kRTCPeerConnectionAddIceCandidatePromise:
      return os << "WebFeature::kRTCPeerConnectionAddIceCandidatePromise";
    case WebFeature::kRTCPeerConnectionAddIceCandidateLegacy:
      return os << "WebFeature::kRTCPeerConnectionAddIceCandidateLegacy";
    case WebFeature::kRTCIceCandidateDefaultSdpMLineIndex:
      return os << "WebFeature::kRTCIceCandidateDefaultSdpMLineIndex";
    case WebFeature::kMediaStreamConstraintsOldAndNew:
      return os << "WebFeature::kMediaStreamConstraintsOldAndNew";
    case WebFeature::kV8ArrayProtectorDirtied:
      return os << "WebFeature::kV8ArrayProtectorDirtied";
    case WebFeature::kV8ArraySpeciesModified:
      return os << "WebFeature::kV8ArraySpeciesModified";
    case WebFeature::kV8ArrayPrototypeConstructorModified:
      return os << "WebFeature::kV8ArrayPrototypeConstructorModified";
    case WebFeature::kV8ArrayInstanceProtoModified:
      return os << "WebFeature::kV8ArrayInstanceProtoModified";
    case WebFeature::kV8ArrayInstanceConstructorModified:
      return os << "WebFeature::kV8ArrayInstanceConstructorModified";
    case WebFeature::kV8LegacyFunctionDeclaration:
      return os << "WebFeature::kV8LegacyFunctionDeclaration";
    case WebFeature::kV8RegExpPrototypeSourceGetter:
      return os << "WebFeature::kV8RegExpPrototypeSourceGetter";
    case WebFeature::kV8RegExpPrototypeOldFlagGetter:
      return os << "WebFeature::kV8RegExpPrototypeOldFlagGetter";
    case WebFeature::kV8DecimalWithLeadingZeroInStrictMode:
      return os << "WebFeature::kV8DecimalWithLeadingZeroInStrictMode";
    case WebFeature::kGetUserMediaPrefixed:
      return os << "WebFeature::kGetUserMediaPrefixed";
    case WebFeature::kGetUserMediaLegacy:
      return os << "WebFeature::kGetUserMediaLegacy";
    case WebFeature::kGetUserMediaPromise:
      return os << "WebFeature::kGetUserMediaPromise";
    case WebFeature::kCSSFilterFunctionNoArguments:
      return os << "WebFeature::kCSSFilterFunctionNoArguments";
    case WebFeature::kV8LegacyDateParser:
      return os << "WebFeature::kV8LegacyDateParser";
    case WebFeature::kOpenSearchInsecureOriginInsecureTarget:
      return os << "WebFeature::kOpenSearchInsecureOriginInsecureTarget";
    case WebFeature::kOpenSearchInsecureOriginSecureTarget:
      return os << "WebFeature::kOpenSearchInsecureOriginSecureTarget";
    case WebFeature::kOpenSearchSecureOriginInsecureTarget:
      return os << "WebFeature::kOpenSearchSecureOriginInsecureTarget";
    case WebFeature::kOpenSearchSecureOriginSecureTarget:
      return os << "WebFeature::kOpenSearchSecureOriginSecureTarget";
    case WebFeature::kRegisterProtocolHandlerSecureOrigin:
      return os << "WebFeature::kRegisterProtocolHandlerSecureOrigin";
    case WebFeature::kRegisterProtocolHandlerInsecureOrigin:
      return os << "WebFeature::kRegisterProtocolHandlerInsecureOrigin";
    case WebFeature::kCrossOriginWindowAlert:
      return os << "WebFeature::kCrossOriginWindowAlert";
    case WebFeature::kCrossOriginWindowConfirm:
      return os << "WebFeature::kCrossOriginWindowConfirm";
    case WebFeature::kCrossOriginWindowPrompt:
      return os << "WebFeature::kCrossOriginWindowPrompt";
    case WebFeature::kCrossOriginWindowPrint:
      return os << "WebFeature::kCrossOriginWindowPrint";
    case WebFeature::kMediaStreamOnActive:
      return os << "WebFeature::kMediaStreamOnActive";
    case WebFeature::kMediaStreamOnInactive:
      return os << "WebFeature::kMediaStreamOnInactive";
    case WebFeature::kAddEventListenerPassiveTrue:
      return os << "WebFeature::kAddEventListenerPassiveTrue";
    case WebFeature::kAddEventListenerPassiveFalse:
      return os << "WebFeature::kAddEventListenerPassiveFalse";
    case WebFeature::kCSPReferrerDirective:
      return os << "WebFeature::kCSPReferrerDirective";
    case WebFeature::kElementRequestPointerLockInShadow:
      return os << "WebFeature::kElementRequestPointerLockInShadow";
    case WebFeature::kShadowRootPointerLockElement:
      return os << "WebFeature::kShadowRootPointerLockElement";
    case WebFeature::kDocumentPointerLockElementInV0Shadow:
      return os << "WebFeature::kDocumentPointerLockElementInV0Shadow";
    case WebFeature::kTextAreaMaxLength:
      return os << "WebFeature::kTextAreaMaxLength";
    case WebFeature::kTextAreaMinLength:
      return os << "WebFeature::kTextAreaMinLength";
    case WebFeature::kTopNavigationFromSubFrame:
      return os << "WebFeature::kTopNavigationFromSubFrame";
    case WebFeature::kPrefixedElementRequestFullscreenInShadow:
      return os << "WebFeature::kPrefixedElementRequestFullscreenInShadow";
    case WebFeature::kMediaSourceAbortRemove:
      return os << "WebFeature::kMediaSourceAbortRemove";
    case WebFeature::kMediaSourceDurationTruncatingBuffered:
      return os << "WebFeature::kMediaSourceDurationTruncatingBuffered";
    case WebFeature::kAudioContextCrossOriginIframe:
      return os << "WebFeature::kAudioContextCrossOriginIframe";
    case WebFeature::kPointerEventSetCapture:
      return os << "WebFeature::kPointerEventSetCapture";
    case WebFeature::kPointerEventDispatch:
      return os << "WebFeature::kPointerEventDispatch";
    case WebFeature::kMIDIMessageEventReceivedTime:
      return os << "WebFeature::kMIDIMessageEventReceivedTime";
    case WebFeature::kSummaryElementWithDisplayBlockAuthorRule:
      return os << "WebFeature::kSummaryElementWithDisplayBlockAuthorRule";
    case WebFeature::kV8MediaStream_Active_AttributeGetter:
      return os << "WebFeature::kV8MediaStream_Active_AttributeGetter";
    case WebFeature::kBeforeInstallPromptEvent:
      return os << "WebFeature::kBeforeInstallPromptEvent";
    case WebFeature::kBeforeInstallPromptEventUserChoice:
      return os << "WebFeature::kBeforeInstallPromptEventUserChoice";
    case WebFeature::kBeforeInstallPromptEventPreventDefault:
      return os << "WebFeature::kBeforeInstallPromptEventPreventDefault";
    case WebFeature::kBeforeInstallPromptEventPrompt:
      return os << "WebFeature::kBeforeInstallPromptEventPrompt";
    case WebFeature::kExecCommandAltersHTMLStructure:
      return os << "WebFeature::kExecCommandAltersHTMLStructure";
    case WebFeature::kSecureContextCheckPassed:
      return os << "WebFeature::kSecureContextCheckPassed";
    case WebFeature::kSecureContextCheckFailed:
      return os << "WebFeature::kSecureContextCheckFailed";
    case WebFeature::kSecureContextCheckForSandboxedOriginPassed:
      return os << "WebFeature::kSecureContextCheckForSandboxedOriginPassed";
    case WebFeature::kSecureContextCheckForSandboxedOriginFailed:
      return os << "WebFeature::kSecureContextCheckForSandboxedOriginFailed";
    case WebFeature::kV8DefineGetterOrSetterWouldThrow:
      return os << "WebFeature::kV8DefineGetterOrSetterWouldThrow";
    case WebFeature::kV8FunctionConstructorReturnedUndefined:
      return os << "WebFeature::kV8FunctionConstructorReturnedUndefined";
    case WebFeature::kV8BroadcastChannel_Constructor:
      return os << "WebFeature::kV8BroadcastChannel_Constructor";
    case WebFeature::kV8BroadcastChannel_PostMessage_Method:
      return os << "WebFeature::kV8BroadcastChannel_PostMessage_Method";
    case WebFeature::kV8BroadcastChannel_Close_Method:
      return os << "WebFeature::kV8BroadcastChannel_Close_Method";
    case WebFeature::kTouchStartFired:
      return os << "WebFeature::kTouchStartFired";
    case WebFeature::kMouseDownFired:
      return os << "WebFeature::kMouseDownFired";
    case WebFeature::kPointerDownFired:
      return os << "WebFeature::kPointerDownFired";
    case WebFeature::kPointerDownFiredForTouch:
      return os << "WebFeature::kPointerDownFiredForTouch";
    case WebFeature::kPointerEventDispatchPointerDown:
      return os << "WebFeature::kPointerEventDispatchPointerDown";
    case WebFeature::kSVGSMILBeginOrEndEventValue:
      return os << "WebFeature::kSVGSMILBeginOrEndEventValue";
    case WebFeature::kSVGSMILBeginOrEndSyncbaseValue:
      return os << "WebFeature::kSVGSMILBeginOrEndSyncbaseValue";
    case WebFeature::kSVGSMILElementInsertedAfterLoad:
      return os << "WebFeature::kSVGSMILElementInsertedAfterLoad";
    case WebFeature::kV8VisualViewport_OffsetLeft_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_OffsetLeft_AttributeGetter";
    case WebFeature::kV8VisualViewport_OffsetTop_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_OffsetTop_AttributeGetter";
    case WebFeature::kV8VisualViewport_PageLeft_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_PageLeft_AttributeGetter";
    case WebFeature::kV8VisualViewport_PageTop_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_PageTop_AttributeGetter";
    case WebFeature::kV8VisualViewport_Width_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Width_AttributeGetter";
    case WebFeature::kV8VisualViewport_Height_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Height_AttributeGetter";
    case WebFeature::kV8VisualViewport_Scale_AttributeGetter:
      return os << "WebFeature::kV8VisualViewport_Scale_AttributeGetter";
    case WebFeature::kVisualViewportScrollFired:
      return os << "WebFeature::kVisualViewportScrollFired";
    case WebFeature::kVisualViewportResizeFired:
      return os << "WebFeature::kVisualViewportResizeFired";
    case WebFeature::kNodeGetRootNode:
      return os << "WebFeature::kNodeGetRootNode";
    case WebFeature::kSlotChangeEventAddListener:
      return os << "WebFeature::kSlotChangeEventAddListener";
    case WebFeature::kCSSValueAppearanceButtonForAnchor:
      return os << "WebFeature::kCSSValueAppearanceButtonForAnchor";
    case WebFeature::kCSSValueAppearanceButtonForButton:
      return os << "WebFeature::kCSSValueAppearanceButtonForButton";
    case WebFeature::kCSSValueAppearanceButtonForOtherButtons:
      return os << "WebFeature::kCSSValueAppearanceButtonForOtherButtons";
    case WebFeature::kCSSValueAppearanceTextFieldRendered:
      return os << "WebFeature::kCSSValueAppearanceTextFieldRendered";
    case WebFeature::kCSSValueAppearanceTextFieldForSearch:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForSearch";
    case WebFeature::kCSSValueAppearanceTextFieldForTextField:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForTextField";
    case WebFeature::kRTCPeerConnectionGetStats:
      return os << "WebFeature::kRTCPeerConnectionGetStats";
    case WebFeature::kSVGSMILAnimationAppliedEffect:
      return os << "WebFeature::kSVGSMILAnimationAppliedEffect";
    case WebFeature::kPerformanceResourceTimingSizes:
      return os << "WebFeature::kPerformanceResourceTimingSizes";
    case WebFeature::kEventSourceDocument:
      return os << "WebFeature::kEventSourceDocument";
    case WebFeature::kEventSourceWorker:
      return os << "WebFeature::kEventSourceWorker";
    case WebFeature::kSingleOriginInTimingAllowOrigin:
      return os << "WebFeature::kSingleOriginInTimingAllowOrigin";
    case WebFeature::kMultipleOriginsInTimingAllowOrigin:
      return os << "WebFeature::kMultipleOriginsInTimingAllowOrigin";
    case WebFeature::kStarInTimingAllowOrigin:
      return os << "WebFeature::kStarInTimingAllowOrigin";
    case WebFeature::kSVGSMILAdditiveAnimation:
      return os << "WebFeature::kSVGSMILAdditiveAnimation";
    case WebFeature::kSendBeaconWithNonSimpleContentType:
      return os << "WebFeature::kSendBeaconWithNonSimpleContentType";
    case WebFeature::kChromeLoadTimesRequestTime:
      return os << "WebFeature::kChromeLoadTimesRequestTime";
    case WebFeature::kChromeLoadTimesStartLoadTime:
      return os << "WebFeature::kChromeLoadTimesStartLoadTime";
    case WebFeature::kChromeLoadTimesCommitLoadTime:
      return os << "WebFeature::kChromeLoadTimesCommitLoadTime";
    case WebFeature::kChromeLoadTimesFinishDocumentLoadTime:
      return os << "WebFeature::kChromeLoadTimesFinishDocumentLoadTime";
    case WebFeature::kChromeLoadTimesFinishLoadTime:
      return os << "WebFeature::kChromeLoadTimesFinishLoadTime";
    case WebFeature::kChromeLoadTimesFirstPaintTime:
      return os << "WebFeature::kChromeLoadTimesFirstPaintTime";
    case WebFeature::kChromeLoadTimesFirstPaintAfterLoadTime:
      return os << "WebFeature::kChromeLoadTimesFirstPaintAfterLoadTime";
    case WebFeature::kChromeLoadTimesNavigationType:
      return os << "WebFeature::kChromeLoadTimesNavigationType";
    case WebFeature::kChromeLoadTimesWasFetchedViaSpdy:
      return os << "WebFeature::kChromeLoadTimesWasFetchedViaSpdy";
    case WebFeature::kChromeLoadTimesWasNpnNegotiated:
      return os << "WebFeature::kChromeLoadTimesWasNpnNegotiated";
    case WebFeature::kChromeLoadTimesNpnNegotiatedProtocol:
      return os << "WebFeature::kChromeLoadTimesNpnNegotiatedProtocol";
    case WebFeature::kChromeLoadTimesWasAlternateProtocolAvailable:
      return os << "WebFeature::kChromeLoadTimesWasAlternateProtocolAvailable";
    case WebFeature::kChromeLoadTimesConnectionInfo:
      return os << "WebFeature::kChromeLoadTimesConnectionInfo";
    case WebFeature::kChromeLoadTimesUnknown:
      return os << "WebFeature::kChromeLoadTimesUnknown";
    case WebFeature::kSVGViewElement:
      return os << "WebFeature::kSVGViewElement";
    case WebFeature::kWebShareShare:
      return os << "WebFeature::kWebShareShare";
    case WebFeature::kAuxclickAddListenerCount:
      return os << "WebFeature::kAuxclickAddListenerCount";
    case WebFeature::kHTMLCanvasElement:
      return os << "WebFeature::kHTMLCanvasElement";
    case WebFeature::kSVGSMILAnimationElementTiming:
      return os << "WebFeature::kSVGSMILAnimationElementTiming";
    case WebFeature::kSVGSMILBeginEndAnimationElement:
      return os << "WebFeature::kSVGSMILBeginEndAnimationElement";
    case WebFeature::kSVGSMILPausing:
      return os << "WebFeature::kSVGSMILPausing";
    case WebFeature::kSVGSMILCurrentTime:
      return os << "WebFeature::kSVGSMILCurrentTime";
    case WebFeature::kHTMLBodyElementOnSelectionChangeAttribute:
      return os << "WebFeature::kHTMLBodyElementOnSelectionChangeAttribute";
    case WebFeature::kUsbGetDevices:
      return os << "WebFeature::kUsbGetDevices";
    case WebFeature::kUsbRequestDevice:
      return os << "WebFeature::kUsbRequestDevice";
    case WebFeature::kUsbDeviceOpen:
      return os << "WebFeature::kUsbDeviceOpen";
    case WebFeature::kUsbDeviceClose:
      return os << "WebFeature::kUsbDeviceClose";
    case WebFeature::kUsbDeviceSelectConfiguration:
      return os << "WebFeature::kUsbDeviceSelectConfiguration";
    case WebFeature::kUsbDeviceClaimInterface:
      return os << "WebFeature::kUsbDeviceClaimInterface";
    case WebFeature::kUsbDeviceReleaseInterface:
      return os << "WebFeature::kUsbDeviceReleaseInterface";
    case WebFeature::kUsbDeviceSelectAlternateInterface:
      return os << "WebFeature::kUsbDeviceSelectAlternateInterface";
    case WebFeature::kUsbDeviceControlTransferIn:
      return os << "WebFeature::kUsbDeviceControlTransferIn";
    case WebFeature::kUsbDeviceControlTransferOut:
      return os << "WebFeature::kUsbDeviceControlTransferOut";
    case WebFeature::kUsbDeviceClearHalt:
      return os << "WebFeature::kUsbDeviceClearHalt";
    case WebFeature::kUsbDeviceTransferIn:
      return os << "WebFeature::kUsbDeviceTransferIn";
    case WebFeature::kUsbDeviceTransferOut:
      return os << "WebFeature::kUsbDeviceTransferOut";
    case WebFeature::kUsbDeviceIsochronousTransferIn:
      return os << "WebFeature::kUsbDeviceIsochronousTransferIn";
    case WebFeature::kUsbDeviceIsochronousTransferOut:
      return os << "WebFeature::kUsbDeviceIsochronousTransferOut";
    case WebFeature::kUsbDeviceReset:
      return os << "WebFeature::kUsbDeviceReset";
    case WebFeature::kPointerEnterLeaveFired:
      return os << "WebFeature::kPointerEnterLeaveFired";
    case WebFeature::kPointerOverOutFired:
      return os << "WebFeature::kPointerOverOutFired";
    case WebFeature::kDraggableAttribute:
      return os << "WebFeature::kDraggableAttribute";
    case WebFeature::kCleanScriptElementWithNonce:
      return os << "WebFeature::kCleanScriptElementWithNonce";
    case WebFeature::kPotentiallyInjectedScriptElementWithNonce:
      return os << "WebFeature::kPotentiallyInjectedScriptElementWithNonce";
    case WebFeature::kPendingStylesheetAddedAfterBodyStarted:
      return os << "WebFeature::kPendingStylesheetAddedAfterBodyStarted";
    case WebFeature::kUntrustedMouseDownEventDispatchedToSelect:
      return os << "WebFeature::kUntrustedMouseDownEventDispatchedToSelect";
    case WebFeature::kBlockedSniffingAudioToScript:
      return os << "WebFeature::kBlockedSniffingAudioToScript";
    case WebFeature::kBlockedSniffingVideoToScript:
      return os << "WebFeature::kBlockedSniffingVideoToScript";
    case WebFeature::kBlockedSniffingCSVToScript:
      return os << "WebFeature::kBlockedSniffingCSVToScript";
    case WebFeature::kMetaSetCookie:
      return os << "WebFeature::kMetaSetCookie";
    case WebFeature::kMetaRefresh:
      return os << "WebFeature::kMetaRefresh";
    case WebFeature::kMetaSetCookieWhenCSPBlocksInlineScript:
      return os << "WebFeature::kMetaSetCookieWhenCSPBlocksInlineScript";
    case WebFeature::kMetaRefreshWhenCSPBlocksInlineScript:
      return os << "WebFeature::kMetaRefreshWhenCSPBlocksInlineScript";
    case WebFeature::kMiddleClickAutoscrollStart:
      return os << "WebFeature::kMiddleClickAutoscrollStart";
    case WebFeature::kRTCPeerConnectionCreateOfferOptionsOfferToReceive:
      return os << "WebFeature::kRTCPeerConnectionCreateOfferOptionsOfferToReceive";
    case WebFeature::kDragAndDropScrollStart:
      return os << "WebFeature::kDragAndDropScrollStart";
    case WebFeature::kPresentationConnectionListConnectionAvailableEventListener:
      return os << "WebFeature::kPresentationConnectionListConnectionAvailableEventListener";
    case WebFeature::kWebAudioAutoplayCrossOriginIframe:
      return os << "WebFeature::kWebAudioAutoplayCrossOriginIframe";
    case WebFeature::kVRGetDisplays:
      return os << "WebFeature::kVRGetDisplays";
    case WebFeature::kXSSAuditorBlockedScript:
      return os << "WebFeature::kXSSAuditorBlockedScript";
    case WebFeature::kXSSAuditorBlockedEntirePage:
      return os << "WebFeature::kXSSAuditorBlockedEntirePage";
    case WebFeature::kXSSAuditorDisabled:
      return os << "WebFeature::kXSSAuditorDisabled";
    case WebFeature::kXSSAuditorEnabledFilter:
      return os << "WebFeature::kXSSAuditorEnabledFilter";
    case WebFeature::kXSSAuditorEnabledBlock:
      return os << "WebFeature::kXSSAuditorEnabledBlock";
    case WebFeature::kXSSAuditorInvalid:
      return os << "WebFeature::kXSSAuditorInvalid";
    case WebFeature::kTextInputEventOnInput:
      return os << "WebFeature::kTextInputEventOnInput";
    case WebFeature::kTextInputEventOnTextArea:
      return os << "WebFeature::kTextInputEventOnTextArea";
    case WebFeature::kTextInputEventOnContentEditable:
      return os << "WebFeature::kTextInputEventOnContentEditable";
    case WebFeature::kTextInputEventOnNotNode:
      return os << "WebFeature::kTextInputEventOnNotNode";
    case WebFeature::kWebkitBeforeTextInsertedOnInput:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnInput";
    case WebFeature::kWebkitBeforeTextInsertedOnTextArea:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnTextArea";
    case WebFeature::kWebkitBeforeTextInsertedOnContentEditable:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnContentEditable";
    case WebFeature::kWebkitBeforeTextInsertedOnNotNode:
      return os << "WebFeature::kWebkitBeforeTextInsertedOnNotNode";
    case WebFeature::kWebkitEditableContentChangedOnInput:
      return os << "WebFeature::kWebkitEditableContentChangedOnInput";
    case WebFeature::kWebkitEditableContentChangedOnTextArea:
      return os << "WebFeature::kWebkitEditableContentChangedOnTextArea";
    case WebFeature::kWebkitEditableContentChangedOnContentEditable:
      return os << "WebFeature::kWebkitEditableContentChangedOnContentEditable";
    case WebFeature::kWebkitEditableContentChangedOnNotNode:
      return os << "WebFeature::kWebkitEditableContentChangedOnNotNode";
    case WebFeature::kV8NavigatorUserMediaError_ConstraintName_AttributeGetter:
      return os << "WebFeature::kV8NavigatorUserMediaError_ConstraintName_AttributeGetter";
    case WebFeature::kV8HTMLMediaElement_SrcObject_AttributeGetter:
      return os << "WebFeature::kV8HTMLMediaElement_SrcObject_AttributeGetter";
    case WebFeature::kV8HTMLMediaElement_SrcObject_AttributeSetter:
      return os << "WebFeature::kV8HTMLMediaElement_SrcObject_AttributeSetter";
    case WebFeature::kCreateObjectURLBlob:
      return os << "WebFeature::kCreateObjectURLBlob";
    case WebFeature::kCreateObjectURLMediaSource:
      return os << "WebFeature::kCreateObjectURLMediaSource";
    case WebFeature::kCreateObjectURLMediaStream:
      return os << "WebFeature::kCreateObjectURLMediaStream";
    case WebFeature::kLongTaskObserver:
      return os << "WebFeature::kLongTaskObserver";
    case WebFeature::kCSSOffsetInEffect:
      return os << "WebFeature::kCSSOffsetInEffect";
    case WebFeature::kVRGetDisplaysInsecureOrigin:
      return os << "WebFeature::kVRGetDisplaysInsecureOrigin";
    case WebFeature::kVRRequestPresent:
      return os << "WebFeature::kVRRequestPresent";
    case WebFeature::kVRRequestPresentInsecureOrigin:
      return os << "WebFeature::kVRRequestPresentInsecureOrigin";
    case WebFeature::kVRDeprecatedFieldOfView:
      return os << "WebFeature::kVRDeprecatedFieldOfView";
    case WebFeature::kVideoInCanvas:
      return os << "WebFeature::kVideoInCanvas";
    case WebFeature::kHiddenAutoplayedVideoInCanvas:
      return os << "WebFeature::kHiddenAutoplayedVideoInCanvas";
    case WebFeature::kOffscreenCanvas:
      return os << "WebFeature::kOffscreenCanvas";
    case WebFeature::kGamepadPose:
      return os << "WebFeature::kGamepadPose";
    case WebFeature::kGamepadHand:
      return os << "WebFeature::kGamepadHand";
    case WebFeature::kGamepadDisplayId:
      return os << "WebFeature::kGamepadDisplayId";
    case WebFeature::kGamepadButtonTouched:
      return os << "WebFeature::kGamepadButtonTouched";
    case WebFeature::kGamepadPoseHasOrientation:
      return os << "WebFeature::kGamepadPoseHasOrientation";
    case WebFeature::kGamepadPoseHasPosition:
      return os << "WebFeature::kGamepadPoseHasPosition";
    case WebFeature::kGamepadPosePosition:
      return os << "WebFeature::kGamepadPosePosition";
    case WebFeature::kGamepadPoseLinearVelocity:
      return os << "WebFeature::kGamepadPoseLinearVelocity";
    case WebFeature::kGamepadPoseLinearAcceleration:
      return os << "WebFeature::kGamepadPoseLinearAcceleration";
    case WebFeature::kGamepadPoseOrientation:
      return os << "WebFeature::kGamepadPoseOrientation";
    case WebFeature::kGamepadPoseAngularVelocity:
      return os << "WebFeature::kGamepadPoseAngularVelocity";
    case WebFeature::kGamepadPoseAngularAcceleration:
      return os << "WebFeature::kGamepadPoseAngularAcceleration";
    case WebFeature::kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter";
    case WebFeature::kV8RTCDataChannel_MaxRetransmits_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_MaxRetransmits_AttributeGetter";
    case WebFeature::kV8RTCDataChannel_Reliable_AttributeGetter:
      return os << "WebFeature::kV8RTCDataChannel_Reliable_AttributeGetter";
    case WebFeature::kV8RTCPeerConnection_AddStream_Method:
      return os << "WebFeature::kV8RTCPeerConnection_AddStream_Method";
    case WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method:
      return os << "WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method";
    case WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method";
    case WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method";
    case WebFeature::kV8RTCPeerConnection_RemoveStream_Method:
      return os << "WebFeature::kV8RTCPeerConnection_RemoveStream_Method";
    case WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmitTime:
      return os << "WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmitTime";
    case WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmits:
      return os << "WebFeature::kRTCPeerConnectionCreateDataChannelMaxRetransmits";
    case WebFeature::kAudioContextCreateConstantSource:
      return os << "WebFeature::kAudioContextCreateConstantSource";
    case WebFeature::kWebAudioConstantSourceNode:
      return os << "WebFeature::kWebAudioConstantSourceNode";
    case WebFeature::kLoopbackEmbeddedInSecureContext:
      return os << "WebFeature::kLoopbackEmbeddedInSecureContext";
    case WebFeature::kLoopbackEmbeddedInNonSecureContext:
      return os << "WebFeature::kLoopbackEmbeddedInNonSecureContext";
    case WebFeature::kBlinkMacSystemFont:
      return os << "WebFeature::kBlinkMacSystemFont";
    case WebFeature::kRTCIceServerURL:
      return os << "WebFeature::kRTCIceServerURL";
    case WebFeature::kRTCIceServerURLs:
      return os << "WebFeature::kRTCIceServerURLs";
    case WebFeature::kOffscreenCanvasTransferToImageBitmap2D:
      return os << "WebFeature::kOffscreenCanvasTransferToImageBitmap2D";
    case WebFeature::kOffscreenCanvasTransferToImageBitmapWebGL:
      return os << "WebFeature::kOffscreenCanvasTransferToImageBitmapWebGL";
    case WebFeature::kOffscreenCanvasCommit2D:
      return os << "WebFeature::kOffscreenCanvasCommit2D";
    case WebFeature::kOffscreenCanvasCommitWebGL:
      return os << "WebFeature::kOffscreenCanvasCommitWebGL";
    case WebFeature::kRTCConfigurationIceTransportPolicy:
      return os << "WebFeature::kRTCConfigurationIceTransportPolicy";
    case WebFeature::kRTCConfigurationIceTransports:
      return os << "WebFeature::kRTCConfigurationIceTransports";
    case WebFeature::kDocumentFullscreenElementInV0Shadow:
      return os << "WebFeature::kDocumentFullscreenElementInV0Shadow";
    case WebFeature::kScriptWithCSPBypassingSchemeParserInserted:
      return os << "WebFeature::kScriptWithCSPBypassingSchemeParserInserted";
    case WebFeature::kScriptWithCSPBypassingSchemeNotParserInserted:
      return os << "WebFeature::kScriptWithCSPBypassingSchemeNotParserInserted";
    case WebFeature::kDocumentCreateElement2ndArgStringHandling:
      return os << "WebFeature::kDocumentCreateElement2ndArgStringHandling";
    case WebFeature::kV8MediaRecorder_Start_Method:
      return os << "WebFeature::kV8MediaRecorder_Start_Method";
    case WebFeature::kWebBluetoothRequestDevice:
      return os << "WebFeature::kWebBluetoothRequestDevice";
    case WebFeature::kUnitlessPerspectiveInPerspectiveProperty:
      return os << "WebFeature::kUnitlessPerspectiveInPerspectiveProperty";
    case WebFeature::kUnitlessPerspectiveInTransformProperty:
      return os << "WebFeature::kUnitlessPerspectiveInTransformProperty";
    case WebFeature::kV8RTCSessionDescription_Type_AttributeGetter:
      return os << "WebFeature::kV8RTCSessionDescription_Type_AttributeGetter";
    case WebFeature::kV8RTCSessionDescription_Type_AttributeSetter:
      return os << "WebFeature::kV8RTCSessionDescription_Type_AttributeSetter";
    case WebFeature::kV8RTCSessionDescription_Sdp_AttributeGetter:
      return os << "WebFeature::kV8RTCSessionDescription_Sdp_AttributeGetter";
    case WebFeature::kV8RTCSessionDescription_Sdp_AttributeSetter:
      return os << "WebFeature::kV8RTCSessionDescription_Sdp_AttributeSetter";
    case WebFeature::kRTCSessionDescriptionInitNoType:
      return os << "WebFeature::kRTCSessionDescriptionInitNoType";
    case WebFeature::kRTCSessionDescriptionInitNoSdp:
      return os << "WebFeature::kRTCSessionDescriptionInitNoSdp";
    case WebFeature::kHTMLMediaElementPreloadForcedMetadata:
      return os << "WebFeature::kHTMLMediaElementPreloadForcedMetadata";
    case WebFeature::kGenericSensorStart:
      return os << "WebFeature::kGenericSensorStart";
    case WebFeature::kGenericSensorStop:
      return os << "WebFeature::kGenericSensorStop";
    case WebFeature::kTouchEventPreventedNoTouchAction:
      return os << "WebFeature::kTouchEventPreventedNoTouchAction";
    case WebFeature::kTouchEventPreventedForcedDocumentPassiveNoTouchAction:
      return os << "WebFeature::kTouchEventPreventedForcedDocumentPassiveNoTouchAction";
    case WebFeature::kV8Event_StopPropagation_Method:
      return os << "WebFeature::kV8Event_StopPropagation_Method";
    case WebFeature::kV8Event_StopImmediatePropagation_Method:
      return os << "WebFeature::kV8Event_StopImmediatePropagation_Method";
    case WebFeature::kImageCaptureConstructor:
      return os << "WebFeature::kImageCaptureConstructor";
    case WebFeature::kV8Document_RootScroller_AttributeGetter:
      return os << "WebFeature::kV8Document_RootScroller_AttributeGetter";
    case WebFeature::kV8Document_RootScroller_AttributeSetter:
      return os << "WebFeature::kV8Document_RootScroller_AttributeSetter";
    case WebFeature::kCustomElementRegistryDefine:
      return os << "WebFeature::kCustomElementRegistryDefine";
    case WebFeature::kLinkHeaderServiceWorker:
      return os << "WebFeature::kLinkHeaderServiceWorker";
    case WebFeature::kCSSFlexibleBox:
      return os << "WebFeature::kCSSFlexibleBox";
    case WebFeature::kCSSGridLayout:
      return os << "WebFeature::kCSSGridLayout";
    case WebFeature::kFullscreenAllowedByOrientationChange:
      return os << "WebFeature::kFullscreenAllowedByOrientationChange";
    case WebFeature::kServiceWorkerRespondToNavigationRequestWithRedirectedResponse:
      return os << "WebFeature::kServiceWorkerRespondToNavigationRequestWithRedirectedResponse";
    case WebFeature::kV8AudioContext_Constructor:
      return os << "WebFeature::kV8AudioContext_Constructor";
    case WebFeature::kV8OfflineAudioContext_Constructor:
      return os << "WebFeature::kV8OfflineAudioContext_Constructor";
    case WebFeature::kAppInstalledEventAddListener:
      return os << "WebFeature::kAppInstalledEventAddListener";
    case WebFeature::kAudioContextGetOutputTimestamp:
      return os << "WebFeature::kAudioContextGetOutputTimestamp";
    case WebFeature::kV8MediaStreamAudioDestinationNode_Constructor:
      return os << "WebFeature::kV8MediaStreamAudioDestinationNode_Constructor";
    case WebFeature::kV8AnalyserNode_Constructor:
      return os << "WebFeature::kV8AnalyserNode_Constructor";
    case WebFeature::kV8AudioBuffer_Constructor:
      return os << "WebFeature::kV8AudioBuffer_Constructor";
    case WebFeature::kV8AudioBufferSourceNode_Constructor:
      return os << "WebFeature::kV8AudioBufferSourceNode_Constructor";
    case WebFeature::kV8AudioProcessingEvent_Constructor:
      return os << "WebFeature::kV8AudioProcessingEvent_Constructor";
    case WebFeature::kV8BiquadFilterNode_Constructor:
      return os << "WebFeature::kV8BiquadFilterNode_Constructor";
    case WebFeature::kV8ChannelMergerNode_Constructor:
      return os << "WebFeature::kV8ChannelMergerNode_Constructor";
    case WebFeature::kV8ChannelSplitterNode_Constructor:
      return os << "WebFeature::kV8ChannelSplitterNode_Constructor";
    case WebFeature::kV8ConstantSourceNode_Constructor:
      return os << "WebFeature::kV8ConstantSourceNode_Constructor";
    case WebFeature::kV8ConvolverNode_Constructor:
      return os << "WebFeature::kV8ConvolverNode_Constructor";
    case WebFeature::kV8DelayNode_Constructor:
      return os << "WebFeature::kV8DelayNode_Constructor";
    case WebFeature::kV8DynamicsCompressorNode_Constructor:
      return os << "WebFeature::kV8DynamicsCompressorNode_Constructor";
    case WebFeature::kV8GainNode_Constructor:
      return os << "WebFeature::kV8GainNode_Constructor";
    case WebFeature::kV8IIRFilterNode_Constructor:
      return os << "WebFeature::kV8IIRFilterNode_Constructor";
    case WebFeature::kV8MediaElementAudioSourceNode_Constructor:
      return os << "WebFeature::kV8MediaElementAudioSourceNode_Constructor";
    case WebFeature::kV8MediaStreamAudioSourceNode_Constructor:
      return os << "WebFeature::kV8MediaStreamAudioSourceNode_Constructor";
    case WebFeature::kV8OfflineAudioCompletionEvent_Constructor:
      return os << "WebFeature::kV8OfflineAudioCompletionEvent_Constructor";
    case WebFeature::kV8OscillatorNode_Constructor:
      return os << "WebFeature::kV8OscillatorNode_Constructor";
    case WebFeature::kV8PannerNode_Constructor:
      return os << "WebFeature::kV8PannerNode_Constructor";
    case WebFeature::kV8PeriodicWave_Constructor:
      return os << "WebFeature::kV8PeriodicWave_Constructor";
    case WebFeature::kV8StereoPannerNode_Constructor:
      return os << "WebFeature::kV8StereoPannerNode_Constructor";
    case WebFeature::kV8WaveShaperNode_Constructor:
      return os << "WebFeature::kV8WaveShaperNode_Constructor";
    case WebFeature::kV8Headers_GetAll_Method:
      return os << "WebFeature::kV8Headers_GetAll_Method";
    case WebFeature::kNavigatorVibrateEngagementNone:
      return os << "WebFeature::kNavigatorVibrateEngagementNone";
    case WebFeature::kNavigatorVibrateEngagementMinimal:
      return os << "WebFeature::kNavigatorVibrateEngagementMinimal";
    case WebFeature::kNavigatorVibrateEngagementLow:
      return os << "WebFeature::kNavigatorVibrateEngagementLow";
    case WebFeature::kNavigatorVibrateEngagementMedium:
      return os << "WebFeature::kNavigatorVibrateEngagementMedium";
    case WebFeature::kNavigatorVibrateEngagementHigh:
      return os << "WebFeature::kNavigatorVibrateEngagementHigh";
    case WebFeature::kNavigatorVibrateEngagementMax:
      return os << "WebFeature::kNavigatorVibrateEngagementMax";
    case WebFeature::kAlertEngagementNone:
      return os << "WebFeature::kAlertEngagementNone";
    case WebFeature::kAlertEngagementMinimal:
      return os << "WebFeature::kAlertEngagementMinimal";
    case WebFeature::kAlertEngagementLow:
      return os << "WebFeature::kAlertEngagementLow";
    case WebFeature::kAlertEngagementMedium:
      return os << "WebFeature::kAlertEngagementMedium";
    case WebFeature::kAlertEngagementHigh:
      return os << "WebFeature::kAlertEngagementHigh";
    case WebFeature::kAlertEngagementMax:
      return os << "WebFeature::kAlertEngagementMax";
    case WebFeature::kConfirmEngagementNone:
      return os << "WebFeature::kConfirmEngagementNone";
    case WebFeature::kConfirmEngagementMinimal:
      return os << "WebFeature::kConfirmEngagementMinimal";
    case WebFeature::kConfirmEngagementLow:
      return os << "WebFeature::kConfirmEngagementLow";
    case WebFeature::kConfirmEngagementMedium:
      return os << "WebFeature::kConfirmEngagementMedium";
    case WebFeature::kConfirmEngagementHigh:
      return os << "WebFeature::kConfirmEngagementHigh";
    case WebFeature::kConfirmEngagementMax:
      return os << "WebFeature::kConfirmEngagementMax";
    case WebFeature::kPromptEngagementNone:
      return os << "WebFeature::kPromptEngagementNone";
    case WebFeature::kPromptEngagementMinimal:
      return os << "WebFeature::kPromptEngagementMinimal";
    case WebFeature::kPromptEngagementLow:
      return os << "WebFeature::kPromptEngagementLow";
    case WebFeature::kPromptEngagementMedium:
      return os << "WebFeature::kPromptEngagementMedium";
    case WebFeature::kPromptEngagementHigh:
      return os << "WebFeature::kPromptEngagementHigh";
    case WebFeature::kPromptEngagementMax:
      return os << "WebFeature::kPromptEngagementMax";
    case WebFeature::kTopNavInSandbox:
      return os << "WebFeature::kTopNavInSandbox";
    case WebFeature::kTopNavInSandboxWithoutGesture:
      return os << "WebFeature::kTopNavInSandboxWithoutGesture";
    case WebFeature::kTopNavInSandboxWithPerm:
      return os << "WebFeature::kTopNavInSandboxWithPerm";
    case WebFeature::kTopNavInSandboxWithPermButNoGesture:
      return os << "WebFeature::kTopNavInSandboxWithPermButNoGesture";
    case WebFeature::kReferrerPolicyHeader:
      return os << "WebFeature::kReferrerPolicyHeader";
    case WebFeature::kHTMLAnchorElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLAnchorElementReferrerPolicyAttribute";
    case WebFeature::kHTMLIFrameElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLIFrameElementReferrerPolicyAttribute";
    case WebFeature::kHTMLImageElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLImageElementReferrerPolicyAttribute";
    case WebFeature::kHTMLLinkElementReferrerPolicyAttribute:
      return os << "WebFeature::kHTMLLinkElementReferrerPolicyAttribute";
    case WebFeature::kBaseElement:
      return os << "WebFeature::kBaseElement";
    case WebFeature::kBaseWithCrossOriginHref:
      return os << "WebFeature::kBaseWithCrossOriginHref";
    case WebFeature::kBaseWithDataHref:
      return os << "WebFeature::kBaseWithDataHref";
    case WebFeature::kBaseWithNewlinesInTarget:
      return os << "WebFeature::kBaseWithNewlinesInTarget";
    case WebFeature::kBaseWithOpenBracketInTarget:
      return os << "WebFeature::kBaseWithOpenBracketInTarget";
    case WebFeature::kBaseWouldBeBlockedByDefaultSrc:
      return os << "WebFeature::kBaseWouldBeBlockedByDefaultSrc";
    case WebFeature::kV8AssigmentExpressionLHSIsCallInSloppy:
      return os << "WebFeature::kV8AssigmentExpressionLHSIsCallInSloppy";
    case WebFeature::kV8AssigmentExpressionLHSIsCallInStrict:
      return os << "WebFeature::kV8AssigmentExpressionLHSIsCallInStrict";
    case WebFeature::kV8PromiseConstructorReturnedUndefined:
      return os << "WebFeature::kV8PromiseConstructorReturnedUndefined";
    case WebFeature::kFormSubmittedWithUnclosedFormControl:
      return os << "WebFeature::kFormSubmittedWithUnclosedFormControl";
    case WebFeature::kScrollbarUseVerticalScrollbarButton:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarButton";
    case WebFeature::kScrollbarUseVerticalScrollbarThumb:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarThumb";
    case WebFeature::kScrollbarUseVerticalScrollbarTrack:
      return os << "WebFeature::kScrollbarUseVerticalScrollbarTrack";
    case WebFeature::kScrollbarUseHorizontalScrollbarButton:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarButton";
    case WebFeature::kScrollbarUseHorizontalScrollbarThumb:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarThumb";
    case WebFeature::kScrollbarUseHorizontalScrollbarTrack:
      return os << "WebFeature::kScrollbarUseHorizontalScrollbarTrack";
    case WebFeature::kHTMLTableCellElementColspan:
      return os << "WebFeature::kHTMLTableCellElementColspan";
    case WebFeature::kHTMLTableCellElementColspanGreaterThan1000:
      return os << "WebFeature::kHTMLTableCellElementColspanGreaterThan1000";
    case WebFeature::kHTMLTableCellElementColspanGreaterThan8190:
      return os << "WebFeature::kHTMLTableCellElementColspanGreaterThan8190";
    case WebFeature::kSelectionAddRangeIntersect:
      return os << "WebFeature::kSelectionAddRangeIntersect";
    case WebFeature::kPostMessageFromInsecureToSecureToplevel:
      return os << "WebFeature::kPostMessageFromInsecureToSecureToplevel";
    case WebFeature::kV8MediaSession_Metadata_AttributeGetter:
      return os << "WebFeature::kV8MediaSession_Metadata_AttributeGetter";
    case WebFeature::kV8MediaSession_Metadata_AttributeSetter:
      return os << "WebFeature::kV8MediaSession_Metadata_AttributeSetter";
    case WebFeature::kV8MediaSession_PlaybackState_AttributeGetter:
      return os << "WebFeature::kV8MediaSession_PlaybackState_AttributeGetter";
    case WebFeature::kV8MediaSession_PlaybackState_AttributeSetter:
      return os << "WebFeature::kV8MediaSession_PlaybackState_AttributeSetter";
    case WebFeature::kV8MediaSession_SetActionHandler_Method:
      return os << "WebFeature::kV8MediaSession_SetActionHandler_Method";
    case WebFeature::kWebNFCPush:
      return os << "WebFeature::kWebNFCPush";
    case WebFeature::kWebNFCCancelPush:
      return os << "WebFeature::kWebNFCCancelPush";
    case WebFeature::kWebNFCWatch:
      return os << "WebFeature::kWebNFCWatch";
    case WebFeature::kWebNFCCancelWatch:
      return os << "WebFeature::kWebNFCCancelWatch";
    case WebFeature::kAudioParamCancelAndHoldAtTime:
      return os << "WebFeature::kAudioParamCancelAndHoldAtTime";
    case WebFeature::kCSSValueUserModifyReadOnly:
      return os << "WebFeature::kCSSValueUserModifyReadOnly";
    case WebFeature::kCSSValueUserModifyReadWrite:
      return os << "WebFeature::kCSSValueUserModifyReadWrite";
    case WebFeature::kCSSValueUserModifyReadWritePlaintextOnly:
      return os << "WebFeature::kCSSValueUserModifyReadWritePlaintextOnly";
    case WebFeature::kCSSValueOnDemand:
      return os << "WebFeature::kCSSValueOnDemand";
    case WebFeature::kServiceWorkerNavigationPreload:
      return os << "WebFeature::kServiceWorkerNavigationPreload";
    case WebFeature::kFullscreenRequestWithPendingElement:
      return os << "WebFeature::kFullscreenRequestWithPendingElement";
    case WebFeature::kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad:
      return os << "WebFeature::kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad";
    case WebFeature::kPointerEventSetCaptureOutsideDispatch:
      return os << "WebFeature::kPointerEventSetCaptureOutsideDispatch";
    case WebFeature::kNotificationPermissionRequestedInsecureOrigin:
      return os << "WebFeature::kNotificationPermissionRequestedInsecureOrigin";
    case WebFeature::kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method";
    case WebFeature::kV8DeprecatedStorageInfo_RequestQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageInfo_RequestQuota_Method";
    case WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method";
    case WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method:
      return os << "WebFeature::kV8DeprecatedStorageQuota_RequestQuota_Method";
    case WebFeature::kV8FileReaderSync_Constructor:
      return os << "WebFeature::kV8FileReaderSync_Constructor";
    case WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter:
      return os << "WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter:
      return os << "WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter";
    case WebFeature::kNotificationPermissionRequestedIframe:
      return os << "WebFeature::kNotificationPermissionRequestedIframe";
    case WebFeature::kPresentationReceiverInsecureOrigin:
      return os << "WebFeature::kPresentationReceiverInsecureOrigin";
    case WebFeature::kPresentationReceiverSecureOrigin:
      return os << "WebFeature::kPresentationReceiverSecureOrigin";
    case WebFeature::kPresentationRequestInsecureOrigin:
      return os << "WebFeature::kPresentationRequestInsecureOrigin";
    case WebFeature::kPresentationRequestSecureOrigin:
      return os << "WebFeature::kPresentationRequestSecureOrigin";
    case WebFeature::kRtcpMuxPolicyNegotiate:
      return os << "WebFeature::kRtcpMuxPolicyNegotiate";
    case WebFeature::kDOMClobberedVariableAccessed:
      return os << "WebFeature::kDOMClobberedVariableAccessed";
    case WebFeature::kHTMLDocumentCreateProcessingInstruction:
      return os << "WebFeature::kHTMLDocumentCreateProcessingInstruction";
    case WebFeature::kFetchResponseConstructionWithStream:
      return os << "WebFeature::kFetchResponseConstructionWithStream";
    case WebFeature::kLocationOrigin:
      return os << "WebFeature::kLocationOrigin";
    case WebFeature::kCanvas2DFilter:
      return os << "WebFeature::kCanvas2DFilter";
    case WebFeature::kCanvas2DImageSmoothingQuality:
      return os << "WebFeature::kCanvas2DImageSmoothingQuality";
    case WebFeature::kCanvasToBlob:
      return os << "WebFeature::kCanvasToBlob";
    case WebFeature::kCanvasToDataURL:
      return os << "WebFeature::kCanvasToDataURL";
    case WebFeature::kOffscreenCanvasConvertToBlob:
      return os << "WebFeature::kOffscreenCanvasConvertToBlob";
    case WebFeature::kSVGInCanvas2D:
      return os << "WebFeature::kSVGInCanvas2D";
    case WebFeature::kSVGInWebGL:
      return os << "WebFeature::kSVGInWebGL";
    case WebFeature::kSelectionFuncionsChangeFocus:
      return os << "WebFeature::kSelectionFuncionsChangeFocus";
    case WebFeature::kHTMLObjectElementGetter:
      return os << "WebFeature::kHTMLObjectElementGetter";
    case WebFeature::kHTMLObjectElementSetter:
      return os << "WebFeature::kHTMLObjectElementSetter";
    case WebFeature::kHTMLEmbedElementGetter:
      return os << "WebFeature::kHTMLEmbedElementGetter";
    case WebFeature::kHTMLEmbedElementSetter:
      return os << "WebFeature::kHTMLEmbedElementSetter";
    case WebFeature::kTransformUsesBoxSizeOnSVG:
      return os << "WebFeature::kTransformUsesBoxSizeOnSVG";
    case WebFeature::kScrollByKeyboardArrowKeys:
      return os << "WebFeature::kScrollByKeyboardArrowKeys";
    case WebFeature::kScrollByKeyboardPageUpDownKeys:
      return os << "WebFeature::kScrollByKeyboardPageUpDownKeys";
    case WebFeature::kScrollByKeyboardHomeEndKeys:
      return os << "WebFeature::kScrollByKeyboardHomeEndKeys";
    case WebFeature::kScrollByKeyboardSpacebarKey:
      return os << "WebFeature::kScrollByKeyboardSpacebarKey";
    case WebFeature::kScrollByTouch:
      return os << "WebFeature::kScrollByTouch";
    case WebFeature::kScrollByWheel:
      return os << "WebFeature::kScrollByWheel";
    case WebFeature::kScheduledActionIgnored:
      return os << "WebFeature::kScheduledActionIgnored";
    case WebFeature::kGetCanvas2DContextAttributes:
      return os << "WebFeature::kGetCanvas2DContextAttributes";
    case WebFeature::kV8HTMLInputElement_Capture_AttributeGetter:
      return os << "WebFeature::kV8HTMLInputElement_Capture_AttributeGetter";
    case WebFeature::kV8HTMLInputElement_Capture_AttributeSetter:
      return os << "WebFeature::kV8HTMLInputElement_Capture_AttributeSetter";
    case WebFeature::kHTMLMediaElementControlsListAttribute:
      return os << "WebFeature::kHTMLMediaElementControlsListAttribute";
    case WebFeature::kHTMLMediaElementControlsListNoDownload:
      return os << "WebFeature::kHTMLMediaElementControlsListNoDownload";
    case WebFeature::kHTMLMediaElementControlsListNoFullscreen:
      return os << "WebFeature::kHTMLMediaElementControlsListNoFullscreen";
    case WebFeature::kHTMLMediaElementControlsListNoRemotePlayback:
      return os << "WebFeature::kHTMLMediaElementControlsListNoRemotePlayback";
    case WebFeature::kPointerEventClickRetargetCausedByCapture:
      return os << "WebFeature::kPointerEventClickRetargetCausedByCapture";
    case WebFeature::kVRDisplayDisplayName:
      return os << "WebFeature::kVRDisplayDisplayName";
    case WebFeature::kVREyeParametersOffset:
      return os << "WebFeature::kVREyeParametersOffset";
    case WebFeature::kVRPoseLinearVelocity:
      return os << "WebFeature::kVRPoseLinearVelocity";
    case WebFeature::kVRPoseLinearAcceleration:
      return os << "WebFeature::kVRPoseLinearAcceleration";
    case WebFeature::kVRPoseAngularVelocity:
      return os << "WebFeature::kVRPoseAngularVelocity";
    case WebFeature::kVRPoseAngularAcceleration:
      return os << "WebFeature::kVRPoseAngularAcceleration";
    case WebFeature::kCSSOverflowPaged:
      return os << "WebFeature::kCSSOverflowPaged";
    case WebFeature::kChildSrcAllowedWorkerThatScriptSrcBlocked:
      return os << "WebFeature::kChildSrcAllowedWorkerThatScriptSrcBlocked";
    case WebFeature::kHTMLTableElementPresentationAttributeBackground:
      return os << "WebFeature::kHTMLTableElementPresentationAttributeBackground";
    case WebFeature::kV8Navigator_GetInstalledRelatedApps_Method:
      return os << "WebFeature::kV8Navigator_GetInstalledRelatedApps_Method";
    case WebFeature::kNamedAccessOnWindow_ChildBrowsingContext:
      return os << "WebFeature::kNamedAccessOnWindow_ChildBrowsingContext";
    case WebFeature::kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch:
      return os << "WebFeature::kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch";
    case WebFeature::kV0CustomElementsRegisterHTMLCustomTag:
      return os << "WebFeature::kV0CustomElementsRegisterHTMLCustomTag";
    case WebFeature::kV0CustomElementsRegisterHTMLTypeExtension:
      return os << "WebFeature::kV0CustomElementsRegisterHTMLTypeExtension";
    case WebFeature::kV0CustomElementsRegisterSVGElement:
      return os << "WebFeature::kV0CustomElementsRegisterSVGElement";
    case WebFeature::kV0CustomElementsCreateCustomTagElement:
      return os << "WebFeature::kV0CustomElementsCreateCustomTagElement";
    case WebFeature::kV0CustomElementsCreateTypeExtensionElement:
      return os << "WebFeature::kV0CustomElementsCreateTypeExtensionElement";
    case WebFeature::kV0CustomElementsConstruct:
      return os << "WebFeature::kV0CustomElementsConstruct";
    case WebFeature::kV8IDBObserver_Observe_Method:
      return os << "WebFeature::kV8IDBObserver_Observe_Method";
    case WebFeature::kV8IDBObserver_Unobserve_Method:
      return os << "WebFeature::kV8IDBObserver_Unobserve_Method";
    case WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptor:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptor";
    case WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptors:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicGetDescriptors";
    case WebFeature::kWebBluetoothRemoteCharacteristicReadValue:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicReadValue";
    case WebFeature::kWebBluetoothRemoteCharacteristicWriteValue:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicWriteValue";
    case WebFeature::kWebBluetoothRemoteCharacteristicStartNotifications:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicStartNotifications";
    case WebFeature::kWebBluetoothRemoteCharacteristicStopNotifications:
      return os << "WebFeature::kWebBluetoothRemoteCharacteristicStopNotifications";
    case WebFeature::kWebBluetoothRemoteDescriptorReadValue:
      return os << "WebFeature::kWebBluetoothRemoteDescriptorReadValue";
    case WebFeature::kWebBluetoothRemoteDescriptorWriteValue:
      return os << "WebFeature::kWebBluetoothRemoteDescriptorWriteValue";
    case WebFeature::kWebBluetoothRemoteServerConnect:
      return os << "WebFeature::kWebBluetoothRemoteServerConnect";
    case WebFeature::kWebBluetoothRemoteServerDisconnect:
      return os << "WebFeature::kWebBluetoothRemoteServerDisconnect";
    case WebFeature::kWebBluetoothRemoteServerGetPrimaryService:
      return os << "WebFeature::kWebBluetoothRemoteServerGetPrimaryService";
    case WebFeature::kWebBluetoothRemoteServerGetPrimaryServices:
      return os << "WebFeature::kWebBluetoothRemoteServerGetPrimaryServices";
    case WebFeature::kWebBluetoothRemoteServiceGetCharacteristic:
      return os << "WebFeature::kWebBluetoothRemoteServiceGetCharacteristic";
    case WebFeature::kWebBluetoothRemoteServiceGetCharacteristics:
      return os << "WebFeature::kWebBluetoothRemoteServiceGetCharacteristics";
    case WebFeature::kHTMLContentElement:
      return os << "WebFeature::kHTMLContentElement";
    case WebFeature::kHTMLShadowElement:
      return os << "WebFeature::kHTMLShadowElement";
    case WebFeature::kHTMLSlotElement:
      return os << "WebFeature::kHTMLSlotElement";
    case WebFeature::kAccelerometerConstructor:
      return os << "WebFeature::kAccelerometerConstructor";
    case WebFeature::kAbsoluteOrientationSensorConstructor:
      return os << "WebFeature::kAbsoluteOrientationSensorConstructor";
    case WebFeature::kAmbientLightSensorConstructor:
      return os << "WebFeature::kAmbientLightSensorConstructor";
    case WebFeature::kGenericSensorOnActivate:
      return os << "WebFeature::kGenericSensorOnActivate";
    case WebFeature::kGenericSensorOnChange:
      return os << "WebFeature::kGenericSensorOnChange";
    case WebFeature::kGenericSensorOnError:
      return os << "WebFeature::kGenericSensorOnError";
    case WebFeature::kGenericSensorActivated:
      return os << "WebFeature::kGenericSensorActivated";
    case WebFeature::kGyroscopeConstructor:
      return os << "WebFeature::kGyroscopeConstructor";
    case WebFeature::kMagnetometerConstructor:
      return os << "WebFeature::kMagnetometerConstructor";
    case WebFeature::kOrientationSensorPopulateMatrix:
      return os << "WebFeature::kOrientationSensorPopulateMatrix";
    case WebFeature::kWindowOpenWithInvalidURL:
      return os << "WebFeature::kWindowOpenWithInvalidURL";
    case WebFeature::kCrossOriginMainFrameNulledNameAccessed:
      return os << "WebFeature::kCrossOriginMainFrameNulledNameAccessed";
    case WebFeature::kMenuItemElementIconAttribute:
      return os << "WebFeature::kMenuItemElementIconAttribute";
    case WebFeature::kWebkitCSSMatrixSetMatrixValue:
      return os << "WebFeature::kWebkitCSSMatrixSetMatrixValue";
    case WebFeature::kWebkitCSSMatrixConstructFromString:
      return os << "WebFeature::kWebkitCSSMatrixConstructFromString";
    case WebFeature::kCanRequestURLHTTPContainingNewline:
      return os << "WebFeature::kCanRequestURLHTTPContainingNewline";
    case WebFeature::kGetGamepads:
      return os << "WebFeature::kGetGamepads";
    case WebFeature::kMediaStreamConstraintsAudio:
      return os << "WebFeature::kMediaStreamConstraintsAudio";
    case WebFeature::kMediaStreamConstraintsAudioUnconstrained:
      return os << "WebFeature::kMediaStreamConstraintsAudioUnconstrained";
    case WebFeature::kMediaStreamConstraintsVideo:
      return os << "WebFeature::kMediaStreamConstraintsVideo";
    case WebFeature::kMediaStreamConstraintsVideoUnconstrained:
      return os << "WebFeature::kMediaStreamConstraintsVideoUnconstrained";
    case WebFeature::kMediaStreamConstraintsWidth:
      return os << "WebFeature::kMediaStreamConstraintsWidth";
    case WebFeature::kMediaStreamConstraintsHeight:
      return os << "WebFeature::kMediaStreamConstraintsHeight";
    case WebFeature::kMediaStreamConstraintsAspectRatio:
      return os << "WebFeature::kMediaStreamConstraintsAspectRatio";
    case WebFeature::kMediaStreamConstraintsFrameRate:
      return os << "WebFeature::kMediaStreamConstraintsFrameRate";
    case WebFeature::kMediaStreamConstraintsFacingMode:
      return os << "WebFeature::kMediaStreamConstraintsFacingMode";
    case WebFeature::kMediaStreamConstraintsVolume:
      return os << "WebFeature::kMediaStreamConstraintsVolume";
    case WebFeature::kMediaStreamConstraintsSampleRate:
      return os << "WebFeature::kMediaStreamConstraintsSampleRate";
    case WebFeature::kMediaStreamConstraintsSampleSize:
      return os << "WebFeature::kMediaStreamConstraintsSampleSize";
    case WebFeature::kMediaStreamConstraintsEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsEchoCancellation";
    case WebFeature::kMediaStreamConstraintsLatency:
      return os << "WebFeature::kMediaStreamConstraintsLatency";
    case WebFeature::kMediaStreamConstraintsChannelCount:
      return os << "WebFeature::kMediaStreamConstraintsChannelCount";
    case WebFeature::kMediaStreamConstraintsDeviceIdAudio:
      return os << "WebFeature::kMediaStreamConstraintsDeviceIdAudio";
    case WebFeature::kMediaStreamConstraintsDeviceIdVideo:
      return os << "WebFeature::kMediaStreamConstraintsDeviceIdVideo";
    case WebFeature::kMediaStreamConstraintsDisableLocalEcho:
      return os << "WebFeature::kMediaStreamConstraintsDisableLocalEcho";
    case WebFeature::kMediaStreamConstraintsGroupIdAudio:
      return os << "WebFeature::kMediaStreamConstraintsGroupIdAudio";
    case WebFeature::kMediaStreamConstraintsGroupIdVideo:
      return os << "WebFeature::kMediaStreamConstraintsGroupIdVideo";
    case WebFeature::kMediaStreamConstraintsVideoKind:
      return os << "WebFeature::kMediaStreamConstraintsVideoKind";
    case WebFeature::kMediaStreamConstraintsMediaStreamSourceAudio:
      return os << "WebFeature::kMediaStreamConstraintsMediaStreamSourceAudio";
    case WebFeature::kMediaStreamConstraintsMediaStreamSourceVideo:
      return os << "WebFeature::kMediaStreamConstraintsMediaStreamSourceVideo";
    case WebFeature::kMediaStreamConstraintsRenderToAssociatedSink:
      return os << "WebFeature::kMediaStreamConstraintsRenderToAssociatedSink";
    case WebFeature::kMediaStreamConstraintsHotwordEnabled:
      return os << "WebFeature::kMediaStreamConstraintsHotwordEnabled";
    case WebFeature::kMediaStreamConstraintsGoogEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogAutoGainControl:
      return os << "WebFeature::kMediaStreamConstraintsGoogAutoGainControl";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalAutoGainControl:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalAutoGainControl";
    case WebFeature::kMediaStreamConstraintsGoogNoiseSuppression:
      return os << "WebFeature::kMediaStreamConstraintsGoogNoiseSuppression";
    case WebFeature::kMediaStreamConstraintsGoogHighpassFilter:
      return os << "WebFeature::kMediaStreamConstraintsGoogHighpassFilter";
    case WebFeature::kMediaStreamConstraintsGoogTypingNoiseDetection:
      return os << "WebFeature::kMediaStreamConstraintsGoogTypingNoiseDetection";
    case WebFeature::kMediaStreamConstraintsGoogExperimentalNoiseSuppression:
      return os << "WebFeature::kMediaStreamConstraintsGoogExperimentalNoiseSuppression";
    case WebFeature::kMediaStreamConstraintsGoogBeamforming:
      return os << "WebFeature::kMediaStreamConstraintsGoogBeamforming";
    case WebFeature::kMediaStreamConstraintsGoogArrayGeometry:
      return os << "WebFeature::kMediaStreamConstraintsGoogArrayGeometry";
    case WebFeature::kMediaStreamConstraintsGoogAudioMirroring:
      return os << "WebFeature::kMediaStreamConstraintsGoogAudioMirroring";
    case WebFeature::kMediaStreamConstraintsGoogDAEchoCancellation:
      return os << "WebFeature::kMediaStreamConstraintsGoogDAEchoCancellation";
    case WebFeature::kMediaStreamConstraintsGoogNoiseReduction:
      return os << "WebFeature::kMediaStreamConstraintsGoogNoiseReduction";
    case WebFeature::kViewportFixedPositionUnderFilter:
      return os << "WebFeature::kViewportFixedPositionUnderFilter";
    case WebFeature::kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting";
    case WebFeature::kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting:
      return os << "WebFeature::kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting";
    case WebFeature::kGamepadAxes:
      return os << "WebFeature::kGamepadAxes";
    case WebFeature::kGamepadButtons:
      return os << "WebFeature::kGamepadButtons";
    case WebFeature::kDispatchMouseEventOnDisabledFormControl:
      return os << "WebFeature::kDispatchMouseEventOnDisabledFormControl";
    case WebFeature::kElementNameDOMInvalidHTMLParserValid:
      return os << "WebFeature::kElementNameDOMInvalidHTMLParserValid";
    case WebFeature::kElementNameDOMValidHTMLParserInvalid:
      return os << "WebFeature::kElementNameDOMValidHTMLParserInvalid";
    case WebFeature::kGATTServerDisconnectedEvent:
      return os << "WebFeature::kGATTServerDisconnectedEvent";
    case WebFeature::kAnchorClickDispatchForNonConnectedNode:
      return os << "WebFeature::kAnchorClickDispatchForNonConnectedNode";
    case WebFeature::kHTMLParseErrorNestedForm:
      return os << "WebFeature::kHTMLParseErrorNestedForm";
    case WebFeature::kFontShapingNotDefGlyphObserved:
      return os << "WebFeature::kFontShapingNotDefGlyphObserved";
    case WebFeature::kPostMessageOutgoingWouldBeBlockedByConnectSrc:
      return os << "WebFeature::kPostMessageOutgoingWouldBeBlockedByConnectSrc";
    case WebFeature::kPostMessageIncomingWouldBeBlockedByConnectSrc:
      return os << "WebFeature::kPostMessageIncomingWouldBeBlockedByConnectSrc";
    case WebFeature::kPaymentRequestNetworkNameInSupportedMethods:
      return os << "WebFeature::kPaymentRequestNetworkNameInSupportedMethods";
    case WebFeature::kCrossOriginPropertyAccess:
      return os << "WebFeature::kCrossOriginPropertyAccess";
    case WebFeature::kCrossOriginPropertyAccessFromOpener:
      return os << "WebFeature::kCrossOriginPropertyAccessFromOpener";
    case WebFeature::kCredentialManagerCreate:
      return os << "WebFeature::kCredentialManagerCreate";
    case WebFeature::kFieldEditInSecureContext:
      return os << "WebFeature::kFieldEditInSecureContext";
    case WebFeature::kFieldEditInNonSecureContext:
      return os << "WebFeature::kFieldEditInNonSecureContext";
    case WebFeature::kCredentialManagerGetMediationRequired:
      return os << "WebFeature::kCredentialManagerGetMediationRequired";
    case WebFeature::kNetInfoRtt:
      return os << "WebFeature::kNetInfoRtt";
    case WebFeature::kNetInfoDownlink:
      return os << "WebFeature::kNetInfoDownlink";
    case WebFeature::kShapeDetection_BarcodeDetectorConstructor:
      return os << "WebFeature::kShapeDetection_BarcodeDetectorConstructor";
    case WebFeature::kShapeDetection_FaceDetectorConstructor:
      return os << "WebFeature::kShapeDetection_FaceDetectorConstructor";
    case WebFeature::kShapeDetection_TextDetectorConstructor:
      return os << "WebFeature::kShapeDetection_TextDetectorConstructor";
    case WebFeature::kInertAttribute:
      return os << "WebFeature::kInertAttribute";
    case WebFeature::kPluginInstanceAccessFromIsolatedWorld:
      return os << "WebFeature::kPluginInstanceAccessFromIsolatedWorld";
    case WebFeature::kPluginInstanceAccessFromMainWorld:
      return os << "WebFeature::kPluginInstanceAccessFromMainWorld";
    case WebFeature::kShowModalForElementInFullscreenStack:
      return os << "WebFeature::kShowModalForElementInFullscreenStack";
    case WebFeature::kThreeValuedPositionBackground:
      return os << "WebFeature::kThreeValuedPositionBackground";
    case WebFeature::kUnitlessZeroAngleFilter:
      return os << "WebFeature::kUnitlessZeroAngleFilter";
    case WebFeature::kUnitlessZeroAngleGradient:
      return os << "WebFeature::kUnitlessZeroAngleGradient";
    case WebFeature::kUnitlessZeroAngleTransform:
      return os << "WebFeature::kUnitlessZeroAngleTransform";
    case WebFeature::kCredentialManagerPreventSilentAccess:
      return os << "WebFeature::kCredentialManagerPreventSilentAccess";
    case WebFeature::kNetInfoEffectiveType:
      return os << "WebFeature::kNetInfoEffectiveType";
    case WebFeature::kV8SpeechRecognition_Start_Method:
      return os << "WebFeature::kV8SpeechRecognition_Start_Method";
    case WebFeature::kTableRowDirectionDifferentFromTable:
      return os << "WebFeature::kTableRowDirectionDifferentFromTable";
    case WebFeature::kTableSectionDirectionDifferentFromTable:
      return os << "WebFeature::kTableSectionDirectionDifferentFromTable";
    case WebFeature::kClientHintsDeviceMemory:
      return os << "WebFeature::kClientHintsDeviceMemory";
    case WebFeature::kCSSRegisterProperty:
      return os << "WebFeature::kCSSRegisterProperty";
    case WebFeature::kRelativeOrientationSensorConstructor:
      return os << "WebFeature::kRelativeOrientationSensorConstructor";
    case WebFeature::kSmoothScrollJSInterventionActivated:
      return os << "WebFeature::kSmoothScrollJSInterventionActivated";
    case WebFeature::kBudgetAPIGetCost:
      return os << "WebFeature::kBudgetAPIGetCost";
    case WebFeature::kBudgetAPIGetBudget:
      return os << "WebFeature::kBudgetAPIGetBudget";
    case WebFeature::kCrossOriginMainFrameNulledNonEmptyNameAccessed:
      return os << "WebFeature::kCrossOriginMainFrameNulledNonEmptyNameAccessed";
    case WebFeature::kDocumentDomainSetWithNonDefaultPort:
      return os << "WebFeature::kDocumentDomainSetWithNonDefaultPort";
    case WebFeature::kDocumentDomainSetWithDefaultPort:
      return os << "WebFeature::kDocumentDomainSetWithDefaultPort";
    case WebFeature::kFeaturePolicyHeader:
      return os << "WebFeature::kFeaturePolicyHeader";
    case WebFeature::kFeaturePolicyAllowAttribute:
      return os << "WebFeature::kFeaturePolicyAllowAttribute";
    case WebFeature::kMIDIPortOpen:
      return os << "WebFeature::kMIDIPortOpen";
    case WebFeature::kMIDIOutputSend:
      return os << "WebFeature::kMIDIOutputSend";
    case WebFeature::kMIDIMessageEvent:
      return os << "WebFeature::kMIDIMessageEvent";
    case WebFeature::kFetchEventIsReload:
      return os << "WebFeature::kFetchEventIsReload";
    case WebFeature::kServiceWorkerClientFrameType:
      return os << "WebFeature::kServiceWorkerClientFrameType";
    case WebFeature::kQuirksModeDocument:
      return os << "WebFeature::kQuirksModeDocument";
    case WebFeature::kLimitedQuirksModeDocument:
      return os << "WebFeature::kLimitedQuirksModeDocument";
    case WebFeature::kEncryptedMediaCrossOriginIframe:
      return os << "WebFeature::kEncryptedMediaCrossOriginIframe";
    case WebFeature::kCSSSelectorWebkitMediaControls:
      return os << "WebFeature::kCSSSelectorWebkitMediaControls";
    case WebFeature::kCSSSelectorWebkitMediaControlsOverlayEnclosure:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsOverlayEnclosure";
    case WebFeature::kCSSSelectorWebkitMediaControlsOverlayPlayButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsOverlayPlayButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsEnclosure:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsEnclosure";
    case WebFeature::kCSSSelectorWebkitMediaControlsPanel:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsPanel";
    case WebFeature::kCSSSelectorWebkitMediaControlsPlayButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsPlayButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsCurrentTimeDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsCurrentTimeDisplay";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimeRemainingDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimeRemainingDisplay";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimeline:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimeline";
    case WebFeature::kCSSSelectorWebkitMediaControlsTimelineContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsTimelineContainer";
    case WebFeature::kCSSSelectorWebkitMediaControlsMuteButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsMuteButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsVolumeSlider:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsVolumeSlider";
    case WebFeature::kCSSSelectorWebkitMediaControlsFullscreenButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsFullscreenButton";
    case WebFeature::kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton:
      return os << "WebFeature::kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton";
    case WebFeature::kLinearAccelerationSensorConstructor:
      return os << "WebFeature::kLinearAccelerationSensorConstructor";
    case WebFeature::kReportUriMultipleEndpoints:
      return os << "WebFeature::kReportUriMultipleEndpoints";
    case WebFeature::kReportUriSingleEndpoint:
      return os << "WebFeature::kReportUriSingleEndpoint";
    case WebFeature::kV8ConstructorNonUndefinedPrimitiveReturn:
      return os << "WebFeature::kV8ConstructorNonUndefinedPrimitiveReturn";
    case WebFeature::kMediaSourceKeyframeTimeGreaterThanDependant:
      return os << "WebFeature::kMediaSourceKeyframeTimeGreaterThanDependant";
    case WebFeature::kMediaSourceMuxedSequenceMode:
      return os << "WebFeature::kMediaSourceMuxedSequenceMode";
    case WebFeature::kPrepareModuleScript:
      return os << "WebFeature::kPrepareModuleScript";
    case WebFeature::kPresentationRequestStartSecureOrigin:
      return os << "WebFeature::kPresentationRequestStartSecureOrigin";
    case WebFeature::kPresentationRequestStartInsecureOrigin:
      return os << "WebFeature::kPresentationRequestStartInsecureOrigin";
    case WebFeature::kPersistentClientHintHeader:
      return os << "WebFeature::kPersistentClientHintHeader";
    case WebFeature::kStyleSheetListNonNullAnonymousNamedGetter:
      return os << "WebFeature::kStyleSheetListNonNullAnonymousNamedGetter";
    case WebFeature::kOffMainThreadFetch:
      return os << "WebFeature::kOffMainThreadFetch";
    case WebFeature::kARIAActiveDescendantAttribute:
      return os << "WebFeature::kARIAActiveDescendantAttribute";
    case WebFeature::kARIAAtomicAttribute:
      return os << "WebFeature::kARIAAtomicAttribute";
    case WebFeature::kARIAAutocompleteAttribute:
      return os << "WebFeature::kARIAAutocompleteAttribute";
    case WebFeature::kARIABusyAttribute:
      return os << "WebFeature::kARIABusyAttribute";
    case WebFeature::kARIACheckedAttribute:
      return os << "WebFeature::kARIACheckedAttribute";
    case WebFeature::kARIAColCountAttribute:
      return os << "WebFeature::kARIAColCountAttribute";
    case WebFeature::kARIAColIndexAttribute:
      return os << "WebFeature::kARIAColIndexAttribute";
    case WebFeature::kARIAColSpanAttribute:
      return os << "WebFeature::kARIAColSpanAttribute";
    case WebFeature::kARIAControlsAttribute:
      return os << "WebFeature::kARIAControlsAttribute";
    case WebFeature::kARIACurrentAttribute:
      return os << "WebFeature::kARIACurrentAttribute";
    case WebFeature::kARIADescribedByAttribute:
      return os << "WebFeature::kARIADescribedByAttribute";
    case WebFeature::kARIADetailsAttribute:
      return os << "WebFeature::kARIADetailsAttribute";
    case WebFeature::kARIADisabledAttribute:
      return os << "WebFeature::kARIADisabledAttribute";
    case WebFeature::kARIADropEffectAttribute:
      return os << "WebFeature::kARIADropEffectAttribute";
    case WebFeature::kARIAErrorMessageAttribute:
      return os << "WebFeature::kARIAErrorMessageAttribute";
    case WebFeature::kARIAExpandedAttribute:
      return os << "WebFeature::kARIAExpandedAttribute";
    case WebFeature::kARIAFlowToAttribute:
      return os << "WebFeature::kARIAFlowToAttribute";
    case WebFeature::kARIAGrabbedAttribute:
      return os << "WebFeature::kARIAGrabbedAttribute";
    case WebFeature::kARIAHasPopupAttribute:
      return os << "WebFeature::kARIAHasPopupAttribute";
    case WebFeature::kARIAHelpAttribute:
      return os << "WebFeature::kARIAHelpAttribute";
    case WebFeature::kARIAHiddenAttribute:
      return os << "WebFeature::kARIAHiddenAttribute";
    case WebFeature::kARIAInvalidAttribute:
      return os << "WebFeature::kARIAInvalidAttribute";
    case WebFeature::kARIAKeyShortcutsAttribute:
      return os << "WebFeature::kARIAKeyShortcutsAttribute";
    case WebFeature::kARIALabelAttribute:
      return os << "WebFeature::kARIALabelAttribute";
    case WebFeature::kARIALabeledByAttribute:
      return os << "WebFeature::kARIALabeledByAttribute";
    case WebFeature::kARIALabelledByAttribute:
      return os << "WebFeature::kARIALabelledByAttribute";
    case WebFeature::kARIALevelAttribute:
      return os << "WebFeature::kARIALevelAttribute";
    case WebFeature::kARIALiveAttribute:
      return os << "WebFeature::kARIALiveAttribute";
    case WebFeature::kARIAModalAttribute:
      return os << "WebFeature::kARIAModalAttribute";
    case WebFeature::kARIAMultilineAttribute:
      return os << "WebFeature::kARIAMultilineAttribute";
    case WebFeature::kARIAMultiselectableAttribute:
      return os << "WebFeature::kARIAMultiselectableAttribute";
    case WebFeature::kARIAOrientationAttribute:
      return os << "WebFeature::kARIAOrientationAttribute";
    case WebFeature::kARIAOwnsAttribute:
      return os << "WebFeature::kARIAOwnsAttribute";
    case WebFeature::kARIAPlaceholderAttribute:
      return os << "WebFeature::kARIAPlaceholderAttribute";
    case WebFeature::kARIAPosInSetAttribute:
      return os << "WebFeature::kARIAPosInSetAttribute";
    case WebFeature::kARIAPressedAttribute:
      return os << "WebFeature::kARIAPressedAttribute";
    case WebFeature::kARIAReadOnlyAttribute:
      return os << "WebFeature::kARIAReadOnlyAttribute";
    case WebFeature::kARIARelevantAttribute:
      return os << "WebFeature::kARIARelevantAttribute";
    case WebFeature::kARIARequiredAttribute:
      return os << "WebFeature::kARIARequiredAttribute";
    case WebFeature::kARIARoleDescriptionAttribute:
      return os << "WebFeature::kARIARoleDescriptionAttribute";
    case WebFeature::kARIARowCountAttribute:
      return os << "WebFeature::kARIARowCountAttribute";
    case WebFeature::kARIARowIndexAttribute:
      return os << "WebFeature::kARIARowIndexAttribute";
    case WebFeature::kARIARowSpanAttribute:
      return os << "WebFeature::kARIARowSpanAttribute";
    case WebFeature::kARIASelectedAttribute:
      return os << "WebFeature::kARIASelectedAttribute";
    case WebFeature::kARIASetSizeAttribute:
      return os << "WebFeature::kARIASetSizeAttribute";
    case WebFeature::kARIASortAttribute:
      return os << "WebFeature::kARIASortAttribute";
    case WebFeature::kARIAValueMaxAttribute:
      return os << "WebFeature::kARIAValueMaxAttribute";
    case WebFeature::kARIAValueMinAttribute:
      return os << "WebFeature::kARIAValueMinAttribute";
    case WebFeature::kARIAValueNowAttribute:
      return os << "WebFeature::kARIAValueNowAttribute";
    case WebFeature::kARIAValueTextAttribute:
      return os << "WebFeature::kARIAValueTextAttribute";
    case WebFeature::kV8LabeledExpressionStatement:
      return os << "WebFeature::kV8LabeledExpressionStatement";
    case WebFeature::kNavigatorDeviceMemory:
      return os << "WebFeature::kNavigatorDeviceMemory";
    case WebFeature::kFixedWidthTableDistributionChanged:
      return os << "WebFeature::kFixedWidthTableDistributionChanged";
    case WebFeature::kWebkitBoxLayout:
      return os << "WebFeature::kWebkitBoxLayout";
    case WebFeature::kWebkitBoxLayoutHorizontal:
      return os << "WebFeature::kWebkitBoxLayoutHorizontal";
    case WebFeature::kWebkitBoxLayoutVertical:
      return os << "WebFeature::kWebkitBoxLayoutVertical";
    case WebFeature::kWebkitBoxAlignNotInitial:
      return os << "WebFeature::kWebkitBoxAlignNotInitial";
    case WebFeature::kWebkitBoxDirectionNotInitial:
      return os << "WebFeature::kWebkitBoxDirectionNotInitial";
    case WebFeature::kWebkitBoxLinesNotInitial:
      return os << "WebFeature::kWebkitBoxLinesNotInitial";
    case WebFeature::kWebkitBoxPackNotInitial:
      return os << "WebFeature::kWebkitBoxPackNotInitial";
    case WebFeature::kWebkitBoxChildFlexNotInitial:
      return os << "WebFeature::kWebkitBoxChildFlexNotInitial";
    case WebFeature::kWebkitBoxChildFlexGroupNotInitial:
      return os << "WebFeature::kWebkitBoxChildFlexGroupNotInitial";
    case WebFeature::kWebkitBoxChildOrdinalGroupNotInitial:
      return os << "WebFeature::kWebkitBoxChildOrdinalGroupNotInitial";
    case WebFeature::kWebkitBoxNotDefaultOrder:
      return os << "WebFeature::kWebkitBoxNotDefaultOrder";
    case WebFeature::kWebkitBoxNoChildren:
      return os << "WebFeature::kWebkitBoxNoChildren";
    case WebFeature::kWebkitBoxOneChild:
      return os << "WebFeature::kWebkitBoxOneChild";
    case WebFeature::kWebkitBoxOneChildIsLayoutBlockFlowInline:
      return os << "WebFeature::kWebkitBoxOneChildIsLayoutBlockFlowInline";
    case WebFeature::kWebkitBoxManyChildren:
      return os << "WebFeature::kWebkitBoxManyChildren";
    case WebFeature::kWebkitBoxLineClamp:
      return os << "WebFeature::kWebkitBoxLineClamp";
    case WebFeature::kWebkitBoxLineClampPercentage:
      return os << "WebFeature::kWebkitBoxLineClampPercentage";
    case WebFeature::kWebkitBoxLineClampNoChildren:
      return os << "WebFeature::kWebkitBoxLineClampNoChildren";
    case WebFeature::kWebkitBoxLineClampOneChild:
      return os << "WebFeature::kWebkitBoxLineClampOneChild";
    case WebFeature::kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline:
      return os << "WebFeature::kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline";
    case WebFeature::kWebkitBoxLineClampManyChildren:
      return os << "WebFeature::kWebkitBoxLineClampManyChildren";
    case WebFeature::kWebkitBoxLineClampDoesSomething:
      return os << "WebFeature::kWebkitBoxLineClampDoesSomething";
    case WebFeature::kFeaturePolicyAllowAttributeDeprecatedSyntax:
      return os << "WebFeature::kFeaturePolicyAllowAttributeDeprecatedSyntax";
    case WebFeature::kSuppressHistoryEntryWithoutUserGesture:
      return os << "WebFeature::kSuppressHistoryEntryWithoutUserGesture";
    case WebFeature::kPerformanceServerTiming:
      return os << "WebFeature::kPerformanceServerTiming";
    case WebFeature::kFileReaderResultBeforeCompletion:
      return os << "WebFeature::kFileReaderResultBeforeCompletion";
    case WebFeature::kSyncXhrInPageDismissal:
      return os << "WebFeature::kSyncXhrInPageDismissal";
    case WebFeature::kAsyncXhrInPageDismissal:
      return os << "WebFeature::kAsyncXhrInPageDismissal";
    case WebFeature::kAnimationSetPlaybackRateCompensatorySeek:
      return os << "WebFeature::kAnimationSetPlaybackRateCompensatorySeek";
    case WebFeature::kDeepCombinatorInStaticProfile:
      return os << "WebFeature::kDeepCombinatorInStaticProfile";
    case WebFeature::kPseudoShadowInStaticProfile:
      return os << "WebFeature::kPseudoShadowInStaticProfile";
    case WebFeature::kSchemeBypassesCSP:
      return os << "WebFeature::kSchemeBypassesCSP";
    case WebFeature::kInnerSchemeBypassesCSP:
      return os << "WebFeature::kInnerSchemeBypassesCSP";
    case WebFeature::kSameOriginApplicationOctetStream:
      return os << "WebFeature::kSameOriginApplicationOctetStream";
    case WebFeature::kSameOriginApplicationXml:
      return os << "WebFeature::kSameOriginApplicationXml";
    case WebFeature::kSameOriginTextHtml:
      return os << "WebFeature::kSameOriginTextHtml";
    case WebFeature::kSameOriginTextPlain:
      return os << "WebFeature::kSameOriginTextPlain";
    case WebFeature::kSameOriginTextXml:
      return os << "WebFeature::kSameOriginTextXml";
    case WebFeature::kCrossOriginApplicationOctetStream:
      return os << "WebFeature::kCrossOriginApplicationOctetStream";
    case WebFeature::kCrossOriginApplicationXml:
      return os << "WebFeature::kCrossOriginApplicationXml";
    case WebFeature::kCrossOriginTextHtml:
      return os << "WebFeature::kCrossOriginTextHtml";
    case WebFeature::kCrossOriginTextPlain:
      return os << "WebFeature::kCrossOriginTextPlain";
    case WebFeature::kCrossOriginTextXml:
      return os << "WebFeature::kCrossOriginTextXml";
    case WebFeature::kSameOriginWorkerApplicationOctetStream:
      return os << "WebFeature::kSameOriginWorkerApplicationOctetStream";
    case WebFeature::kSameOriginWorkerApplicationXml:
      return os << "WebFeature::kSameOriginWorkerApplicationXml";
    case WebFeature::kSameOriginWorkerTextHtml:
      return os << "WebFeature::kSameOriginWorkerTextHtml";
    case WebFeature::kSameOriginWorkerTextPlain:
      return os << "WebFeature::kSameOriginWorkerTextPlain";
    case WebFeature::kSameOriginWorkerTextXml:
      return os << "WebFeature::kSameOriginWorkerTextXml";
    case WebFeature::kCrossOriginWorkerApplicationOctetStream:
      return os << "WebFeature::kCrossOriginWorkerApplicationOctetStream";
    case WebFeature::kCrossOriginWorkerApplicationXml:
      return os << "WebFeature::kCrossOriginWorkerApplicationXml";
    case WebFeature::kCrossOriginWorkerTextHtml:
      return os << "WebFeature::kCrossOriginWorkerTextHtml";
    case WebFeature::kCrossOriginWorkerTextPlain:
      return os << "WebFeature::kCrossOriginWorkerTextPlain";
    case WebFeature::kCrossOriginWorkerTextXml:
      return os << "WebFeature::kCrossOriginWorkerTextXml";
    case WebFeature::kPerformanceObserverForWindow:
      return os << "WebFeature::kPerformanceObserverForWindow";
    case WebFeature::kPerformanceObserverForWorker:
      return os << "WebFeature::kPerformanceObserverForWorker";
    case WebFeature::kPaintTimingObserved:
      return os << "WebFeature::kPaintTimingObserved";
    case WebFeature::kPaintTimingRequested:
      return os << "WebFeature::kPaintTimingRequested";
    case WebFeature::kHTMLMediaElementMediaPlaybackRateOutOfRange:
      return os << "WebFeature::kHTMLMediaElementMediaPlaybackRateOutOfRange";
    case WebFeature::kCookieSet:
      return os << "WebFeature::kCookieSet";
    case WebFeature::kCookieGet:
      return os << "WebFeature::kCookieGet";
    case WebFeature::kGeolocationDisabledByFeaturePolicy:
      return os << "WebFeature::kGeolocationDisabledByFeaturePolicy";
    case WebFeature::kEncryptedMediaDisabledByFeaturePolicy:
      return os << "WebFeature::kEncryptedMediaDisabledByFeaturePolicy";
    case WebFeature::kBatteryStatusGetBattery:
      return os << "WebFeature::kBatteryStatusGetBattery";
    case WebFeature::kBatteryStatusInsecureOrigin:
      return os << "WebFeature::kBatteryStatusInsecureOrigin";
    case WebFeature::kBatteryStatusCrossOrigin:
      return os << "WebFeature::kBatteryStatusCrossOrigin";
    case WebFeature::kBatteryStatusSameOriginABA:
      return os << "WebFeature::kBatteryStatusSameOriginABA";
    case WebFeature::kHasIDClassTagAttribute:
      return os << "WebFeature::kHasIDClassTagAttribute";
    case WebFeature::kHasBeforeOrAfterPseudoElement:
      return os << "WebFeature::kHasBeforeOrAfterPseudoElement";
    case WebFeature::kShapeOutsideMaybeAffectedInlineSize:
      return os << "WebFeature::kShapeOutsideMaybeAffectedInlineSize";
    case WebFeature::kShapeOutsideMaybeAffectedInlinePosition:
      return os << "WebFeature::kShapeOutsideMaybeAffectedInlinePosition";
    case WebFeature::kGamepadVibrationActuator:
      return os << "WebFeature::kGamepadVibrationActuator";
    case WebFeature::kMicrophoneDisabledByFeaturePolicyEstimate:
      return os << "WebFeature::kMicrophoneDisabledByFeaturePolicyEstimate";
    case WebFeature::kCameraDisabledByFeaturePolicyEstimate:
      return os << "WebFeature::kCameraDisabledByFeaturePolicyEstimate";
    case WebFeature::kMidiDisabledByFeaturePolicy:
      return os << "WebFeature::kMidiDisabledByFeaturePolicy";
    case WebFeature::kGeolocationGetCurrentPosition:
      return os << "WebFeature::kGeolocationGetCurrentPosition";
    case WebFeature::kGeolocationWatchPosition:
      return os << "WebFeature::kGeolocationWatchPosition";
    case WebFeature::kDataUriHasOctothorpe:
      return os << "WebFeature::kDataUriHasOctothorpe";
    case WebFeature::kNetInfoSaveData:
      return os << "WebFeature::kNetInfoSaveData";
    case WebFeature::kV8Element_GetClientRects_Method:
      return os << "WebFeature::kV8Element_GetClientRects_Method";
    case WebFeature::kV8Element_GetBoundingClientRect_Method:
      return os << "WebFeature::kV8Element_GetBoundingClientRect_Method";
    case WebFeature::kV8Range_GetClientRects_Method:
      return os << "WebFeature::kV8Range_GetClientRects_Method";
    case WebFeature::kV8Range_GetBoundingClientRect_Method:
      return os << "WebFeature::kV8Range_GetBoundingClientRect_Method";
    case WebFeature::kV8ErrorCaptureStackTrace:
      return os << "WebFeature::kV8ErrorCaptureStackTrace";
    case WebFeature::kV8ErrorPrepareStackTrace:
      return os << "WebFeature::kV8ErrorPrepareStackTrace";
    case WebFeature::kV8ErrorStackTraceLimit:
      return os << "WebFeature::kV8ErrorStackTraceLimit";
    case WebFeature::kPaintWorklet:
      return os << "WebFeature::kPaintWorklet";
    case WebFeature::kDocumentPageHideRegistered:
      return os << "WebFeature::kDocumentPageHideRegistered";
    case WebFeature::kDocumentPageHideFired:
      return os << "WebFeature::kDocumentPageHideFired";
    case WebFeature::kDocumentPageShowRegistered:
      return os << "WebFeature::kDocumentPageShowRegistered";
    case WebFeature::kDocumentPageShowFired:
      return os << "WebFeature::kDocumentPageShowFired";
    case WebFeature::kReplaceCharsetInXHR:
      return os << "WebFeature::kReplaceCharsetInXHR";
    case WebFeature::kLinkRelModulePreload:
      return os << "WebFeature::kLinkRelModulePreload";
    case WebFeature::kCSPWithUnsafeEval:
      return os << "WebFeature::kCSPWithUnsafeEval";
    case WebFeature::kWebAssemblyInstantiation:
      return os << "WebFeature::kWebAssemblyInstantiation";
    case WebFeature::kV8IndexAccessor:
      return os << "WebFeature::kV8IndexAccessor";
    case WebFeature::kV8MediaCapabilities_DecodingInfo_Method:
      return os << "WebFeature::kV8MediaCapabilities_DecodingInfo_Method";
    case WebFeature::kV8MediaCapabilities_EncodingInfo_Method:
      return os << "WebFeature::kV8MediaCapabilities_EncodingInfo_Method";
    case WebFeature::kV8MediaCapabilitiesInfo_Supported_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_Supported_AttributeGetter";
    case WebFeature::kV8MediaCapabilitiesInfo_Smooth_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_Smooth_AttributeGetter";
    case WebFeature::kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter:
      return os << "WebFeature::kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter";
    case WebFeature::kWindowEventInV0ShadowTree:
      return os << "WebFeature::kWindowEventInV0ShadowTree";
    case WebFeature::kWindowOpenRealmMismatch:
      return os << "WebFeature::kWindowOpenRealmMismatch";
    case WebFeature::kGridRowTrackPercentIndefiniteHeight:
      return os << "WebFeature::kGridRowTrackPercentIndefiniteHeight";
    case WebFeature::kVRGetDisplaysSupportsPresent:
      return os << "WebFeature::kVRGetDisplaysSupportsPresent";
    case WebFeature::kDuplicatedAttribute:
      return os << "WebFeature::kDuplicatedAttribute";
    case WebFeature::kDuplicatedAttributeForExecutedScript:
      return os << "WebFeature::kDuplicatedAttributeForExecutedScript";
    case WebFeature::kV8RTCPeerConnection_GetSenders_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetSenders_Method";
    case WebFeature::kV8RTCPeerConnection_GetReceivers_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetReceivers_Method";
    case WebFeature::kV8RTCPeerConnection_AddTrack_Method:
      return os << "WebFeature::kV8RTCPeerConnection_AddTrack_Method";
    case WebFeature::kV8RTCPeerConnection_RemoveTrack_Method:
      return os << "WebFeature::kV8RTCPeerConnection_RemoveTrack_Method";
    case WebFeature::kLocalCSSFile:
      return os << "WebFeature::kLocalCSSFile";
    case WebFeature::kLocalCSSFileExtensionRejected:
      return os << "WebFeature::kLocalCSSFileExtensionRejected";
    case WebFeature::kUserMediaDisableHardwareNoiseSuppression:
      return os << "WebFeature::kUserMediaDisableHardwareNoiseSuppression";
    case WebFeature::kCertificateTransparencyRequiredErrorOnResourceLoad:
      return os << "WebFeature::kCertificateTransparencyRequiredErrorOnResourceLoad";
    case WebFeature::kCSSSelectorPseudoWebkitAnyLink:
      return os << "WebFeature::kCSSSelectorPseudoWebkitAnyLink";
    case WebFeature::kAudioWorkletAddModule:
      return os << "WebFeature::kAudioWorkletAddModule";
    case WebFeature::kAudioWorkletGlobalScopeRegisterProcessor:
      return os << "WebFeature::kAudioWorkletGlobalScopeRegisterProcessor";
    case WebFeature::kAudioWorkletNodeConstructor:
      return os << "WebFeature::kAudioWorkletNodeConstructor";
    case WebFeature::kHTMLMediaElementEmptyLoadWithFutureData:
      return os << "WebFeature::kHTMLMediaElementEmptyLoadWithFutureData";
    case WebFeature::kCSSValueDisplayContents:
      return os << "WebFeature::kCSSValueDisplayContents";
    case WebFeature::kCSSSelectorPseudoAnyLink:
      return os << "WebFeature::kCSSSelectorPseudoAnyLink";
    case WebFeature::kFileAccessedCache:
      return os << "WebFeature::kFileAccessedCache";
    case WebFeature::kFileAccessedCookies:
      return os << "WebFeature::kFileAccessedCookies";
    case WebFeature::kFileAccessedDatabase:
      return os << "WebFeature::kFileAccessedDatabase";
    case WebFeature::kFileAccessedFileSystem:
      return os << "WebFeature::kFileAccessedFileSystem";
    case WebFeature::kFileAccessedLocalStorage:
      return os << "WebFeature::kFileAccessedLocalStorage";
    case WebFeature::kFileAccessedLocks:
      return os << "WebFeature::kFileAccessedLocks";
    case WebFeature::kFileAccessedServiceWorker:
      return os << "WebFeature::kFileAccessedServiceWorker";
    case WebFeature::kFileAccessedSessionStorage:
      return os << "WebFeature::kFileAccessedSessionStorage";
    case WebFeature::kFileAccessedSharedWorker:
      return os << "WebFeature::kFileAccessedSharedWorker";
    case WebFeature::kV8MediaKeys_GetStatusForPolicy_Method:
      return os << "WebFeature::kV8MediaKeys_GetStatusForPolicy_Method";
    case WebFeature::kV8DeoptimizerDisableSpeculation:
      return os << "WebFeature::kV8DeoptimizerDisableSpeculation";
    case WebFeature::kCSSSelectorCue:
      return os << "WebFeature::kCSSSelectorCue";
    case WebFeature::kCSSSelectorWebkitCalendarPickerIndicator:
      return os << "WebFeature::kCSSSelectorWebkitCalendarPickerIndicator";
    case WebFeature::kCSSSelectorWebkitClearButton:
      return os << "WebFeature::kCSSSelectorWebkitClearButton";
    case WebFeature::kCSSSelectorWebkitColorSwatch:
      return os << "WebFeature::kCSSSelectorWebkitColorSwatch";
    case WebFeature::kCSSSelectorWebkitColorSwatchWrapper:
      return os << "WebFeature::kCSSSelectorWebkitColorSwatchWrapper";
    case WebFeature::kCSSSelectorWebkitDateAndTimeValue:
      return os << "WebFeature::kCSSSelectorWebkitDateAndTimeValue";
    case WebFeature::kCSSSelectorWebkitDatetimeEdit:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEdit";
    case WebFeature::kCSSSelectorWebkitDatetimeEditAmpmField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditAmpmField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditDayField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditDayField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditFieldsWrapper:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditFieldsWrapper";
    case WebFeature::kCSSSelectorWebkitDatetimeEditHourField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditHourField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMillisecondField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMillisecondField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMinuteField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMinuteField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditMonthField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditMonthField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditSecondField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditSecondField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditText:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditText";
    case WebFeature::kCSSSelectorWebkitDatetimeEditWeekField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditWeekField";
    case WebFeature::kCSSSelectorWebkitDatetimeEditYearField:
      return os << "WebFeature::kCSSSelectorWebkitDatetimeEditYearField";
    case WebFeature::kCSSSelectorWebkitDetailsMarker:
      return os << "WebFeature::kCSSSelectorWebkitDetailsMarker";
    case WebFeature::kCSSSelectorWebkitFileUploadButton:
      return os << "WebFeature::kCSSSelectorWebkitFileUploadButton";
    case WebFeature::kCSSSelectorWebkitInnerSpinButton:
      return os << "WebFeature::kCSSSelectorWebkitInnerSpinButton";
    case WebFeature::kCSSSelectorWebkitInputPlaceholder:
      return os << "WebFeature::kCSSSelectorWebkitInputPlaceholder";
    case WebFeature::kCSSSelectorWebkitMediaSliderContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaSliderContainer";
    case WebFeature::kCSSSelectorWebkitMediaSliderThumb:
      return os << "WebFeature::kCSSSelectorWebkitMediaSliderThumb";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackContainer";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackDisplay:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackDisplay";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackRegion:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackRegion";
    case WebFeature::kCSSSelectorWebkitMediaTextTrackRegionContainer:
      return os << "WebFeature::kCSSSelectorWebkitMediaTextTrackRegionContainer";
    case WebFeature::kCSSSelectorWebkitMeterBar:
      return os << "WebFeature::kCSSSelectorWebkitMeterBar";
    case WebFeature::kCSSSelectorWebkitMeterEvenLessGoodValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterEvenLessGoodValue";
    case WebFeature::kCSSSelectorWebkitMeterInnerElement:
      return os << "WebFeature::kCSSSelectorWebkitMeterInnerElement";
    case WebFeature::kCSSSelectorWebkitMeterOptimumValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterOptimumValue";
    case WebFeature::kCSSSelectorWebkitMeterSuboptimumValue:
      return os << "WebFeature::kCSSSelectorWebkitMeterSuboptimumValue";
    case WebFeature::kCSSSelectorWebkitProgressBar:
      return os << "WebFeature::kCSSSelectorWebkitProgressBar";
    case WebFeature::kCSSSelectorWebkitProgressInnerElement:
      return os << "WebFeature::kCSSSelectorWebkitProgressInnerElement";
    case WebFeature::kCSSSelectorWebkitProgressValue:
      return os << "WebFeature::kCSSSelectorWebkitProgressValue";
    case WebFeature::kCSSSelectorWebkitSearchCancelButton:
      return os << "WebFeature::kCSSSelectorWebkitSearchCancelButton";
    case WebFeature::kCSSSelectorWebkitSliderContainer:
      return os << "WebFeature::kCSSSelectorWebkitSliderContainer";
    case WebFeature::kCSSSelectorWebkitSliderRunnableTrack:
      return os << "WebFeature::kCSSSelectorWebkitSliderRunnableTrack";
    case WebFeature::kCSSSelectorWebkitSliderThumb:
      return os << "WebFeature::kCSSSelectorWebkitSliderThumb";
    case WebFeature::kCSSSelectorWebkitTextfieldDecorationContainer:
      return os << "WebFeature::kCSSSelectorWebkitTextfieldDecorationContainer";
    case WebFeature::kCSSSelectorWebkitUnknownPseudo:
      return os << "WebFeature::kCSSSelectorWebkitUnknownPseudo";
    case WebFeature::kFilterAsContainingBlockMayChangeOutput:
      return os << "WebFeature::kFilterAsContainingBlockMayChangeOutput";
    case WebFeature::kDispatchMouseUpDownEventOnDisabledFormControl:
      return os << "WebFeature::kDispatchMouseUpDownEventOnDisabledFormControl";
    case WebFeature::kCSSSelectorPseudoIs:
      return os << "WebFeature::kCSSSelectorPseudoIs";
    case WebFeature::kV8RTCRtpSender_ReplaceTrack_Method:
      return os << "WebFeature::kV8RTCRtpSender_ReplaceTrack_Method";
    case WebFeature::kInputTypeFileSecureOriginOpenChooser:
      return os << "WebFeature::kInputTypeFileSecureOriginOpenChooser";
    case WebFeature::kInputTypeFileInsecureOriginOpenChooser:
      return os << "WebFeature::kInputTypeFileInsecureOriginOpenChooser";
    case WebFeature::kBasicShapeEllipseNoRadius:
      return os << "WebFeature::kBasicShapeEllipseNoRadius";
    case WebFeature::kBasicShapeEllipseTwoRadius:
      return os << "WebFeature::kBasicShapeEllipseTwoRadius";
    case WebFeature::kTemporalInputTypeChooserByTrustedClick:
      return os << "WebFeature::kTemporalInputTypeChooserByTrustedClick";
    case WebFeature::kTemporalInputTypeChooserByUntrustedClick:
      return os << "WebFeature::kTemporalInputTypeChooserByUntrustedClick";
    case WebFeature::kTemporalInputTypeIgnoreUntrustedClick:
      return os << "WebFeature::kTemporalInputTypeIgnoreUntrustedClick";
    case WebFeature::kColorInputTypeChooserByTrustedClick:
      return os << "WebFeature::kColorInputTypeChooserByTrustedClick";
    case WebFeature::kColorInputTypeChooserByUntrustedClick:
      return os << "WebFeature::kColorInputTypeChooserByUntrustedClick";
    case WebFeature::kCSSTypedOMStylePropertyMap:
      return os << "WebFeature::kCSSTypedOMStylePropertyMap";
    case WebFeature::kRTCPeerConnectionWithActiveCsp:
      return os << "WebFeature::kRTCPeerConnectionWithActiveCsp";
    case WebFeature::kImageDecodingAttribute:
      return os << "WebFeature::kImageDecodingAttribute";
    case WebFeature::kImageDecodeAPI:
      return os << "WebFeature::kImageDecodeAPI";
    case WebFeature::kV8HTMLElement_Autocapitalize_AttributeGetter:
      return os << "WebFeature::kV8HTMLElement_Autocapitalize_AttributeGetter";
    case WebFeature::kV8HTMLElement_Autocapitalize_AttributeSetter:
      return os << "WebFeature::kV8HTMLElement_Autocapitalize_AttributeSetter";
    case WebFeature::kCSSLegacyAlignment:
      return os << "WebFeature::kCSSLegacyAlignment";
    case WebFeature::kSRISignatureCheck:
      return os << "WebFeature::kSRISignatureCheck";
    case WebFeature::kSRISignatureSuccess:
      return os << "WebFeature::kSRISignatureSuccess";
    case WebFeature::kCSSBasicShape:
      return os << "WebFeature::kCSSBasicShape";
    case WebFeature::kCSSGradient:
      return os << "WebFeature::kCSSGradient";
    case WebFeature::kCSSPaintFunction:
      return os << "WebFeature::kCSSPaintFunction";
    case WebFeature::kWebkitCrossFade:
      return os << "WebFeature::kWebkitCrossFade";
    case WebFeature::kDisablePictureInPictureAttribute:
      return os << "WebFeature::kDisablePictureInPictureAttribute";
    case WebFeature::kCertificateTransparencyNonCompliantSubresourceInMainFrame:
      return os << "WebFeature::kCertificateTransparencyNonCompliantSubresourceInMainFrame";
    case WebFeature::kCertificateTransparencyNonCompliantResourceInSubframe:
      return os << "WebFeature::kCertificateTransparencyNonCompliantResourceInSubframe";
    case WebFeature::kV8AbortController_Constructor:
      return os << "WebFeature::kV8AbortController_Constructor";
    case WebFeature::kReplaceCharsetInXHRIgnoringCase:
      return os << "WebFeature::kReplaceCharsetInXHRIgnoringCase";
    case WebFeature::kHTMLIFrameElementGestureMedia:
      return os << "WebFeature::kHTMLIFrameElementGestureMedia";
    case WebFeature::kWorkletAddModule:
      return os << "WebFeature::kWorkletAddModule";
    case WebFeature::kAnimationWorkletRegisterAnimator:
      return os << "WebFeature::kAnimationWorkletRegisterAnimator";
    case WebFeature::kWorkletAnimationConstructor:
      return os << "WebFeature::kWorkletAnimationConstructor";
    case WebFeature::kScrollTimelineConstructor:
      return os << "WebFeature::kScrollTimelineConstructor";
    case WebFeature::kAsyncClipboardAPIRead:
      return os << "WebFeature::kAsyncClipboardAPIRead";
    case WebFeature::kAsyncClipboardAPIWrite:
      return os << "WebFeature::kAsyncClipboardAPIWrite";
    case WebFeature::kAsyncClipboardAPIReadText:
      return os << "WebFeature::kAsyncClipboardAPIReadText";
    case WebFeature::kAsyncClipboardAPIWriteText:
      return os << "WebFeature::kAsyncClipboardAPIWriteText";
    case WebFeature::kOpenerNavigationWithoutGesture:
      return os << "WebFeature::kOpenerNavigationWithoutGesture";
    case WebFeature::kGetComputedStyleWebkitAppearance:
      return os << "WebFeature::kGetComputedStyleWebkitAppearance";
    case WebFeature::kV8LockManager_Request_Method:
      return os << "WebFeature::kV8LockManager_Request_Method";
    case WebFeature::kV8LockManager_Query_Method:
      return os << "WebFeature::kV8LockManager_Query_Method";
    case WebFeature::kV8RTCDTMFSender_Track_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_Track_AttributeGetter";
    case WebFeature::kV8RTCDTMFSender_Duration_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_Duration_AttributeGetter";
    case WebFeature::kV8RTCDTMFSender_InterToneGap_AttributeGetter:
      return os << "WebFeature::kV8RTCDTMFSender_InterToneGap_AttributeGetter";
    case WebFeature::kV8RTCRtpSender_Dtmf_AttributeGetter:
      return os << "WebFeature::kV8RTCRtpSender_Dtmf_AttributeGetter";
    case WebFeature::kRTCConstraintEnableDtlsSrtpTrue:
      return os << "WebFeature::kRTCConstraintEnableDtlsSrtpTrue";
    case WebFeature::kRTCConstraintEnableDtlsSrtpFalse:
      return os << "WebFeature::kRTCConstraintEnableDtlsSrtpFalse";
    case WebFeature::kDeprecatedRtcPeerConnectionId:
      return os << "WebFeature::kDeprecatedRtcPeerConnectionId";
    case WebFeature::kV8PaintWorkletGlobalScope_RegisterPaint_Method:
      return os << "WebFeature::kV8PaintWorkletGlobalScope_RegisterPaint_Method";
    case WebFeature::kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter:
      return os << "WebFeature::kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter";
    case WebFeature::kCSSSelectorPseudoFocus:
      return os << "WebFeature::kCSSSelectorPseudoFocus";
    case WebFeature::kCSSSelectorPseudoFocusVisible:
      return os << "WebFeature::kCSSSelectorPseudoFocusVisible";
    case WebFeature::kDistrustedLegacySymantecSubresource:
      return os << "WebFeature::kDistrustedLegacySymantecSubresource";
    case WebFeature::kVRDisplayGetFrameData:
      return os << "WebFeature::kVRDisplayGetFrameData";
    case WebFeature::kXMLHttpRequestResponseXML:
      return os << "WebFeature::kXMLHttpRequestResponseXML";
    case WebFeature::kMessagePortTransferClosedPort:
      return os << "WebFeature::kMessagePortTransferClosedPort";
    case WebFeature::kRTCLocalSdpModification:
      return os << "WebFeature::kRTCLocalSdpModification";
    case WebFeature::kKeyboardApiLock:
      return os << "WebFeature::kKeyboardApiLock";
    case WebFeature::kKeyboardApiUnlock:
      return os << "WebFeature::kKeyboardApiUnlock";
    case WebFeature::kPPAPIURLRequestStreamToFile:
      return os << "WebFeature::kPPAPIURLRequestStreamToFile";
    case WebFeature::kPaymentHandler:
      return os << "WebFeature::kPaymentHandler";
    case WebFeature::kPaymentRequestShowWithoutGesture:
      return os << "WebFeature::kPaymentRequestShowWithoutGesture";
    case WebFeature::kReadableStreamConstructor:
      return os << "WebFeature::kReadableStreamConstructor";
    case WebFeature::kWritableStreamConstructor:
      return os << "WebFeature::kWritableStreamConstructor";
    case WebFeature::kTransformStreamConstructor:
      return os << "WebFeature::kTransformStreamConstructor";
    case WebFeature::kNegativeBackgroundSize:
      return os << "WebFeature::kNegativeBackgroundSize";
    case WebFeature::kNegativeMaskSize:
      return os << "WebFeature::kNegativeMaskSize";
    case WebFeature::kClientHintsRtt:
      return os << "WebFeature::kClientHintsRtt";
    case WebFeature::kClientHintsDownlink:
      return os << "WebFeature::kClientHintsDownlink";
    case WebFeature::kClientHintsEct:
      return os << "WebFeature::kClientHintsEct";
    case WebFeature::kCrossOriginHTMLIFrameElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLIFrameElementContentDocument";
    case WebFeature::kCrossOriginHTMLIFrameElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLIFrameElementGetSVGDocument";
    case WebFeature::kCrossOriginHTMLEmbedElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLEmbedElementGetSVGDocument";
    case WebFeature::kCrossOriginHTMLFrameElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLFrameElementContentDocument";
    case WebFeature::kCrossOriginHTMLObjectElementContentDocument:
      return os << "WebFeature::kCrossOriginHTMLObjectElementContentDocument";
    case WebFeature::kCrossOriginHTMLObjectElementGetSVGDocument:
      return os << "WebFeature::kCrossOriginHTMLObjectElementGetSVGDocument";
    case WebFeature::kNavigatorXR:
      return os << "WebFeature::kNavigatorXR";
    case WebFeature::kXRRequestDevice:
      return os << "WebFeature::kXRRequestDevice";
    case WebFeature::kXRRequestSession:
      return os << "WebFeature::kXRRequestSession";
    case WebFeature::kXRSupportsSession:
      return os << "WebFeature::kXRSupportsSession";
    case WebFeature::kXRSessionGetInputSources:
      return os << "WebFeature::kXRSessionGetInputSources";
    case WebFeature::kCSSResizeAuto:
      return os << "WebFeature::kCSSResizeAuto";
    case WebFeature::kPrefixedCursorGrab:
      return os << "WebFeature::kPrefixedCursorGrab";
    case WebFeature::kPrefixedCursorGrabbing:
      return os << "WebFeature::kPrefixedCursorGrabbing";
    case WebFeature::kCredentialManagerCreatePublicKeyCredential:
      return os << "WebFeature::kCredentialManagerCreatePublicKeyCredential";
    case WebFeature::kCredentialManagerGetPublicKeyCredential:
      return os << "WebFeature::kCredentialManagerGetPublicKeyCredential";
    case WebFeature::kCredentialManagerMakePublicKeyCredentialSuccess:
      return os << "WebFeature::kCredentialManagerMakePublicKeyCredentialSuccess";
    case WebFeature::kCredentialManagerGetPublicKeyCredentialSuccess:
      return os << "WebFeature::kCredentialManagerGetPublicKeyCredentialSuccess";
    case WebFeature::kShapeOutsideContentBox:
      return os << "WebFeature::kShapeOutsideContentBox";
    case WebFeature::kShapeOutsidePaddingBox:
      return os << "WebFeature::kShapeOutsidePaddingBox";
    case WebFeature::kShapeOutsideBorderBox:
      return os << "WebFeature::kShapeOutsideBorderBox";
    case WebFeature::kShapeOutsideMarginBox:
      return os << "WebFeature::kShapeOutsideMarginBox";
    case WebFeature::kPerformanceTimeline:
      return os << "WebFeature::kPerformanceTimeline";
    case WebFeature::kUserTiming:
      return os << "WebFeature::kUserTiming";
    case WebFeature::kCSSSelectorPseudoWhere:
      return os << "WebFeature::kCSSSelectorPseudoWhere";
    case WebFeature::kKeyboardApiGetLayoutMap:
      return os << "WebFeature::kKeyboardApiGetLayoutMap";
    case WebFeature::kPerformanceResourceTimingInitiatorType:
      return os << "WebFeature::kPerformanceResourceTimingInitiatorType";
    case WebFeature::kV8ArraySortNoElementsProtector:
      return os << "WebFeature::kV8ArraySortNoElementsProtector";
    case WebFeature::kV8ArrayPrototypeSortJSArrayModifiedPrototype:
      return os << "WebFeature::kV8ArrayPrototypeSortJSArrayModifiedPrototype";
    case WebFeature::kV8Document_PictureInPictureEnabled_AttributeGetter:
      return os << "WebFeature::kV8Document_PictureInPictureEnabled_AttributeGetter";
    case WebFeature::kV8Document_PictureInPictureElement_AttributeGetter:
      return os << "WebFeature::kV8Document_PictureInPictureElement_AttributeGetter";
    case WebFeature::kV8Document_ExitPictureInPicture_Method:
      return os << "WebFeature::kV8Document_ExitPictureInPicture_Method";
    case WebFeature::kV8ShadowRoot_PictureInPictureElement_AttributeGetter:
      return os << "WebFeature::kV8ShadowRoot_PictureInPictureElement_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter:
      return os << "WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter:
      return os << "WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter";
    case WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method:
      return os << "WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method";
    case WebFeature::kEnterPictureInPictureEventListener:
      return os << "WebFeature::kEnterPictureInPictureEventListener";
    case WebFeature::kLeavePictureInPictureEventListener:
      return os << "WebFeature::kLeavePictureInPictureEventListener";
    case WebFeature::kV8PictureInPictureWindow_Height_AttributeGetter:
      return os << "WebFeature::kV8PictureInPictureWindow_Height_AttributeGetter";
    case WebFeature::kV8PictureInPictureWindow_Width_AttributeGetter:
      return os << "WebFeature::kV8PictureInPictureWindow_Width_AttributeGetter";
    case WebFeature::kPictureInPictureWindowResizeEventListener:
      return os << "WebFeature::kPictureInPictureWindowResizeEventListener";
    case WebFeature::kV8CookieStore_Delete_Method:
      return os << "WebFeature::kV8CookieStore_Delete_Method";
    case WebFeature::kV8CookieStore_Get_Method:
      return os << "WebFeature::kV8CookieStore_Get_Method";
    case WebFeature::kV8CookieStore_GetAll_Method:
      return os << "WebFeature::kV8CookieStore_GetAll_Method";
    case WebFeature::kV8CookieStore_GetChangeSubscriptions_Method:
      return os << "WebFeature::kV8CookieStore_GetChangeSubscriptions_Method";
    case WebFeature::kV8CookieStore_Has_Method:
      return os << "WebFeature::kV8CookieStore_Has_Method";
    case WebFeature::kV8CookieStore_Set_Method:
      return os << "WebFeature::kV8CookieStore_Set_Method";
    case WebFeature::kV8CookieStore_SubscribeToChanges_Method:
      return os << "WebFeature::kV8CookieStore_SubscribeToChanges_Method";
    case WebFeature::kV8CookieChangeEvent_Changed_AttributeGetter:
      return os << "WebFeature::kV8CookieChangeEvent_Changed_AttributeGetter";
    case WebFeature::kV8CookieChangeEvent_Deleted_AttributeGetter:
      return os << "WebFeature::kV8CookieChangeEvent_Deleted_AttributeGetter";
    case WebFeature::kV8ExtendableCookieChangeEvent_Changed_AttributeGetter:
      return os << "WebFeature::kV8ExtendableCookieChangeEvent_Changed_AttributeGetter";
    case WebFeature::kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter:
      return os << "WebFeature::kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter";
    case WebFeature::kShapeOutsideContentBoxDifferentFromMarginBox:
      return os << "WebFeature::kShapeOutsideContentBoxDifferentFromMarginBox";
    case WebFeature::kShapeOutsidePaddingBoxDifferentFromMarginBox:
      return os << "WebFeature::kShapeOutsidePaddingBoxDifferentFromMarginBox";
    case WebFeature::kCSSContainLayoutPositionedDescendants:
      return os << "WebFeature::kCSSContainLayoutPositionedDescendants";
    case WebFeature::kCanvasConvertToBlob:
      return os << "WebFeature::kCanvasConvertToBlob";
    case WebFeature::kPolymerV1Detected:
      return os << "WebFeature::kPolymerV1Detected";
    case WebFeature::kPolymerV2Detected:
      return os << "WebFeature::kPolymerV2Detected";
    case WebFeature::kPerformanceEventTimingBuffer:
      return os << "WebFeature::kPerformanceEventTimingBuffer";
    case WebFeature::kPerformanceEventTimingConstructor:
      return os << "WebFeature::kPerformanceEventTimingConstructor";
    case WebFeature::kReverseIterateDOMStorage:
      return os << "WebFeature::kReverseIterateDOMStorage";
    case WebFeature::kTextToSpeech_Speak:
      return os << "WebFeature::kTextToSpeech_Speak";
    case WebFeature::kTextToSpeech_SpeakCrossOrigin:
      return os << "WebFeature::kTextToSpeech_SpeakCrossOrigin";
    case WebFeature::kTextToSpeech_SpeakDisallowedByAutoplay:
      return os << "WebFeature::kTextToSpeech_SpeakDisallowedByAutoplay";
    case WebFeature::kStaleWhileRevalidateEnabled:
      return os << "WebFeature::kStaleWhileRevalidateEnabled";
    case WebFeature::kMediaElementSourceOnOfflineContext:
      return os << "WebFeature::kMediaElementSourceOnOfflineContext";
    case WebFeature::kMediaStreamDestinationOnOfflineContext:
      return os << "WebFeature::kMediaStreamDestinationOnOfflineContext";
    case WebFeature::kMediaStreamSourceOnOfflineContext:
      return os << "WebFeature::kMediaStreamSourceOnOfflineContext";
    case WebFeature::kRTCDataChannelInitMaxRetransmitTime:
      return os << "WebFeature::kRTCDataChannelInitMaxRetransmitTime";
    case WebFeature::kRTCPeerConnectionCreateDataChannelMaxPacketLifeTime:
      return os << "WebFeature::kRTCPeerConnectionCreateDataChannelMaxPacketLifeTime";
    case WebFeature::kV8SpeechGrammarList_AddFromUri_Method:
      return os << "WebFeature::kV8SpeechGrammarList_AddFromUri_Method";
    case WebFeature::kV8SpeechRecognitionEvent_Interpretation_AttributeGetter:
      return os << "WebFeature::kV8SpeechRecognitionEvent_Interpretation_AttributeGetter";
    case WebFeature::kV8SpeechRecognitionEvent_Emma_AttributeGetter:
      return os << "WebFeature::kV8SpeechRecognitionEvent_Emma_AttributeGetter";
    case WebFeature::kV8SpeechSynthesis_Speak_Method:
      return os << "WebFeature::kV8SpeechSynthesis_Speak_Method";
    case WebFeature::kLegacySymantecCertMainFrameResource:
      return os << "WebFeature::kLegacySymantecCertMainFrameResource";
    case WebFeature::kLegacySymantecCertInSubresource:
      return os << "WebFeature::kLegacySymantecCertInSubresource";
    case WebFeature::kLegacySymantecCertInSubframeMainResource:
      return os << "WebFeature::kLegacySymantecCertInSubframeMainResource";
    case WebFeature::kEventTimingExplicitlyRequested:
      return os << "WebFeature::kEventTimingExplicitlyRequested";
    case WebFeature::kCSSEnvironmentVariable:
      return os << "WebFeature::kCSSEnvironmentVariable";
    case WebFeature::kCSSEnvironmentVariable_SafeAreaInsetTop:
      return os << "WebFeature::kCSSEnvironmentVariable_SafeAreaInsetTop";
    case WebFeature::kCSSEnvironmentVariable_SafeAreaInsetLeft:
      return os << "WebFeature::kCSSEnvironmentVariable_SafeAreaInsetLeft";
    case WebFeature::kCSSEnvironmentVariable_SafeAreaInsetBottom:
      return os << "WebFeature::kCSSEnvironmentVariable_SafeAreaInsetBottom";
    case WebFeature::kCSSEnvironmentVariable_SafeAreaInsetRight:
      return os << "WebFeature::kCSSEnvironmentVariable_SafeAreaInsetRight";
    case WebFeature::kMediaControlsDisplayCutoutGesture:
      return os << "WebFeature::kMediaControlsDisplayCutoutGesture";
    case WebFeature::kDocumentOpenTwoArgs:
      return os << "WebFeature::kDocumentOpenTwoArgs";
    case WebFeature::kDocumentOpenTwoArgsWithReplace:
      return os << "WebFeature::kDocumentOpenTwoArgsWithReplace";
    case WebFeature::kDocumentOpenThreeArgs:
      return os << "WebFeature::kDocumentOpenThreeArgs";
    case WebFeature::kV8FunctionTokenOffsetTooLongForToString:
      return os << "WebFeature::kV8FunctionTokenOffsetTooLongForToString";
    case WebFeature::kServiceWorkerImportScriptNotInstalled:
      return os << "WebFeature::kServiceWorkerImportScriptNotInstalled";
    case WebFeature::kNestedDedicatedWorker:
      return os << "WebFeature::kNestedDedicatedWorker";
    case WebFeature::kClientHintsMetaAcceptCHLifetime:
      return os << "WebFeature::kClientHintsMetaAcceptCHLifetime";
    case WebFeature::kDOMNodeRemovedEventDelayed:
      return os << "WebFeature::kDOMNodeRemovedEventDelayed";
    case WebFeature::kDOMNodeRemovedEventHandlerAccessDetachingNode:
      return os << "WebFeature::kDOMNodeRemovedEventHandlerAccessDetachingNode";
    case WebFeature::kDOMNodeRemovedEventListenedAtNonTarget:
      return os << "WebFeature::kDOMNodeRemovedEventListenedAtNonTarget";
    case WebFeature::kDOMNodeRemovedFromDocumentEventDelayed:
      return os << "WebFeature::kDOMNodeRemovedFromDocumentEventDelayed";
    case WebFeature::kDOMNodeRemovedFromDocumentEventHandlerAccessDetachingNode:
      return os << "WebFeature::kDOMNodeRemovedFromDocumentEventHandlerAccessDetachingNode";
    case WebFeature::kDOMNodeRemovedFromDocumentEventListenedAtNonTarget:
      return os << "WebFeature::kDOMNodeRemovedFromDocumentEventListenedAtNonTarget";
    case WebFeature::kCSSFillAvailableLogicalWidth:
      return os << "WebFeature::kCSSFillAvailableLogicalWidth";
    case WebFeature::kCSSFillAvailableLogicalHeight:
      return os << "WebFeature::kCSSFillAvailableLogicalHeight";
    case WebFeature::kPopupOpenWhileFileChooserOpened:
      return os << "WebFeature::kPopupOpenWhileFileChooserOpened";
    case WebFeature::kCookieStoreAPI:
      return os << "WebFeature::kCookieStoreAPI";
    case WebFeature::kFeaturePolicyJSAPI:
      return os << "WebFeature::kFeaturePolicyJSAPI";
    case WebFeature::kV8RTCPeerConnection_GetTransceivers_Method:
      return os << "WebFeature::kV8RTCPeerConnection_GetTransceivers_Method";
    case WebFeature::kV8RTCPeerConnection_AddTransceiver_Method:
      return os << "WebFeature::kV8RTCPeerConnection_AddTransceiver_Method";
    case WebFeature::kV8RTCRtpTransceiver_Direction_AttributeGetter:
      return os << "WebFeature::kV8RTCRtpTransceiver_Direction_AttributeGetter";
    case WebFeature::kV8RTCRtpTransceiver_Direction_AttributeSetter:
      return os << "WebFeature::kV8RTCRtpTransceiver_Direction_AttributeSetter";
    case WebFeature::kHTMLLinkElementDisabledByParser:
      return os << "WebFeature::kHTMLLinkElementDisabledByParser";
    case WebFeature::kRequestIsHistoryNavigation:
      return os << "WebFeature::kRequestIsHistoryNavigation";
    case WebFeature::kAddDocumentLevelPassiveTrueWheelEventListener:
      return os << "WebFeature::kAddDocumentLevelPassiveTrueWheelEventListener";
    case WebFeature::kAddDocumentLevelPassiveFalseWheelEventListener:
      return os << "WebFeature::kAddDocumentLevelPassiveFalseWheelEventListener";
    case WebFeature::kAddDocumentLevelPassiveDefaultWheelEventListener:
      return os << "WebFeature::kAddDocumentLevelPassiveDefaultWheelEventListener";
    case WebFeature::kDocumentLevelPassiveDefaultEventListenerPreventedWheel:
      return os << "WebFeature::kDocumentLevelPassiveDefaultEventListenerPreventedWheel";
    case WebFeature::kShapeDetectionAPI:
      return os << "WebFeature::kShapeDetectionAPI";
    case WebFeature::kV8SourceBuffer_ChangeType_Method:
      return os << "WebFeature::kV8SourceBuffer_ChangeType_Method";
    case WebFeature::kPPAPIWebSocket:
      return os << "WebFeature::kPPAPIWebSocket";
    case WebFeature::kV8MediaStreamTrack_ContentHint_AttributeGetter:
      return os << "WebFeature::kV8MediaStreamTrack_ContentHint_AttributeGetter";
    case WebFeature::kV8MediaStreamTrack_ContentHint_AttributeSetter:
      return os << "WebFeature::kV8MediaStreamTrack_ContentHint_AttributeSetter";
    case WebFeature::kV8IDBFactory_Open_Method:
      return os << "WebFeature::kV8IDBFactory_Open_Method";
    case WebFeature::kEvaluateScriptMovedBetweenDocuments:
      return os << "WebFeature::kEvaluateScriptMovedBetweenDocuments";
    case WebFeature::kReportingObserver:
      return os << "WebFeature::kReportingObserver";
    case WebFeature::kDeprecationReport:
      return os << "WebFeature::kDeprecationReport";
    case WebFeature::kInterventionReport:
      return os << "WebFeature::kInterventionReport";
    case WebFeature::kV8WasmSharedMemory:
      return os << "WebFeature::kV8WasmSharedMemory";
    case WebFeature::kV8WasmThreadOpcodes:
      return os << "WebFeature::kV8WasmThreadOpcodes";
    case WebFeature::kFeaturePolicyReport:
      return os << "WebFeature::kFeaturePolicyReport";
    case WebFeature::kV8Window_WebkitRTCPeerConnection_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitRTCPeerConnection_ConstructorGetter";
    case WebFeature::kV8Window_WebkitMediaStream_ConstructorGetter:
      return os << "WebFeature::kV8Window_WebkitMediaStream_ConstructorGetter";
    case WebFeature::kTextEncoderStreamConstructor:
      return os << "WebFeature::kTextEncoderStreamConstructor";
    case WebFeature::kTextDecoderStreamConstructor:
      return os << "WebFeature::kTextDecoderStreamConstructor";
    case WebFeature::kSignedExchangeInnerResponse:
      return os << "WebFeature::kSignedExchangeInnerResponse";
    case WebFeature::kPaymentAddressLanguageCode:
      return os << "WebFeature::kPaymentAddressLanguageCode";
    case WebFeature::kDocumentDomainBlockedCrossOriginAccess:
      return os << "WebFeature::kDocumentDomainBlockedCrossOriginAccess";
    case WebFeature::kDocumentDomainEnabledCrossOriginAccess:
      return os << "WebFeature::kDocumentDomainEnabledCrossOriginAccess";
    case WebFeature::kSerialGetPorts:
      return os << "WebFeature::kSerialGetPorts";
    case WebFeature::kSerialRequestPort:
      return os << "WebFeature::kSerialRequestPort";
    case WebFeature::kSerialPortOpen:
      return os << "WebFeature::kSerialPortOpen";
    case WebFeature::kSerialPortClose:
      return os << "WebFeature::kSerialPortClose";
    case WebFeature::kBackgroundFetchManagerFetch:
      return os << "WebFeature::kBackgroundFetchManagerFetch";
    case WebFeature::kBackgroundFetchManagerGet:
      return os << "WebFeature::kBackgroundFetchManagerGet";
    case WebFeature::kBackgroundFetchManagerGetIds:
      return os << "WebFeature::kBackgroundFetchManagerGetIds";
    case WebFeature::kBackgroundFetchRegistrationAbort:
      return os << "WebFeature::kBackgroundFetchRegistrationAbort";
    case WebFeature::kBackgroundFetchRegistrationMatch:
      return os << "WebFeature::kBackgroundFetchRegistrationMatch";
    case WebFeature::kBackgroundFetchRegistrationMatchAll:
      return os << "WebFeature::kBackgroundFetchRegistrationMatchAll";
    case WebFeature::kV8AtomicsNotify:
      return os << "WebFeature::kV8AtomicsNotify";
    case WebFeature::kV8AtomicsWake:
      return os << "WebFeature::kV8AtomicsWake";
    case WebFeature::kFormDisabledAttributePresent:
      return os << "WebFeature::kFormDisabledAttributePresent";
    case WebFeature::kFormDisabledAttributePresentAndSubmit:
      return os << "WebFeature::kFormDisabledAttributePresentAndSubmit";
    case WebFeature::kCSSValueAppearanceCheckboxRendered:
      return os << "WebFeature::kCSSValueAppearanceCheckboxRendered";
    case WebFeature::kCSSValueAppearanceCheckboxForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceCheckboxForOthersRendered";
    case WebFeature::kCSSValueAppearanceRadioRendered:
      return os << "WebFeature::kCSSValueAppearanceRadioRendered";
    case WebFeature::kCSSValueAppearanceRadioForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceRadioForOthersRendered";
    case WebFeature::kCSSValueAppearanceInnerSpinButtonRendered:
      return os << "WebFeature::kCSSValueAppearanceInnerSpinButtonRendered";
    case WebFeature::kCSSValueAppearanceInnerSpinButtonForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceInnerSpinButtonForOthersRendered";
    case WebFeature::kCSSValueAppearanceMenuListRendered:
      return os << "WebFeature::kCSSValueAppearanceMenuListRendered";
    case WebFeature::kCSSValueAppearanceMenuListForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceMenuListForOthersRendered";
    case WebFeature::kCSSValueAppearanceProgressBarRendered:
      return os << "WebFeature::kCSSValueAppearanceProgressBarRendered";
    case WebFeature::kCSSValueAppearanceSliderHorizontalRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderHorizontalRendered";
    case WebFeature::kCSSValueAppearanceSliderHorizontalForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderHorizontalForOthersRendered";
    case WebFeature::kCSSValueAppearanceSliderVerticalRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderVerticalRendered";
    case WebFeature::kCSSValueAppearanceSliderVerticalForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderVerticalForOthersRendered";
    case WebFeature::kCSSValueAppearanceSliderThumbHorizontalRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderThumbHorizontalRendered";
    case WebFeature::kCSSValueAppearanceSliderThumbHorizontalForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderThumbHorizontalForOthersRendered";
    case WebFeature::kCSSValueAppearanceSliderThumbVerticalRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderThumbVerticalRendered";
    case WebFeature::kCSSValueAppearanceSliderThumbVerticalForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSliderThumbVerticalForOthersRendered";
    case WebFeature::kCSSValueAppearanceSearchFieldRendered:
      return os << "WebFeature::kCSSValueAppearanceSearchFieldRendered";
    case WebFeature::kCSSValueAppearanceSearchFieldForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSearchFieldForOthersRendered";
    case WebFeature::kCSSValueAppearanceSearchCancelRendered:
      return os << "WebFeature::kCSSValueAppearanceSearchCancelRendered";
    case WebFeature::kCSSValueAppearanceSearchCancelForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSearchCancelForOthersRendered";
    case WebFeature::kCSSValueAppearanceTextAreaRendered:
      return os << "WebFeature::kCSSValueAppearanceTextAreaRendered";
    case WebFeature::kCSSValueAppearanceTextAreaForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceTextAreaForOthersRendered";
    case WebFeature::kCSSValueAppearanceMenuListButtonRendered:
      return os << "WebFeature::kCSSValueAppearanceMenuListButtonRendered";
    case WebFeature::kCSSValueAppearanceMenuListButtonForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceMenuListButtonForOthersRendered";
    case WebFeature::kCSSValueAppearancePushButtonRendered:
      return os << "WebFeature::kCSSValueAppearancePushButtonRendered";
    case WebFeature::kCSSValueAppearancePushButtonForOthersRendered:
      return os << "WebFeature::kCSSValueAppearancePushButtonForOthersRendered";
    case WebFeature::kCSSValueAppearanceSquareButtonRendered:
      return os << "WebFeature::kCSSValueAppearanceSquareButtonRendered";
    case WebFeature::kCSSValueAppearanceSquareButtonForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceSquareButtonForOthersRendered";
    case WebFeature::kGetComputedStyleForWebkitAppearanceExcludeDevTools:
      return os << "WebFeature::kGetComputedStyleForWebkitAppearanceExcludeDevTools";
    case WebFeature::kCursorImageLE32x32:
      return os << "WebFeature::kCursorImageLE32x32";
    case WebFeature::kCursorImageGT32x32:
      return os << "WebFeature::kCursorImageGT32x32";
    case WebFeature::kRTCPeerConnectionComplexPlanBSdpUsingDefaultSdpSemantics:
      return os << "WebFeature::kRTCPeerConnectionComplexPlanBSdpUsingDefaultSdpSemantics";
    case WebFeature::kResizeObserver_Constructor:
      return os << "WebFeature::kResizeObserver_Constructor";
    case WebFeature::kCollator:
      return os << "WebFeature::kCollator";
    case WebFeature::kNumberFormat:
      return os << "WebFeature::kNumberFormat";
    case WebFeature::kDateTimeFormat:
      return os << "WebFeature::kDateTimeFormat";
    case WebFeature::kPluralRules:
      return os << "WebFeature::kPluralRules";
    case WebFeature::kRelativeTimeFormat:
      return os << "WebFeature::kRelativeTimeFormat";
    case WebFeature::kLocale:
      return os << "WebFeature::kLocale";
    case WebFeature::kListFormat:
      return os << "WebFeature::kListFormat";
    case WebFeature::kSegmenter:
      return os << "WebFeature::kSegmenter";
    case WebFeature::kStringLocaleCompare:
      return os << "WebFeature::kStringLocaleCompare";
    case WebFeature::kStringToLocaleUpperCase:
      return os << "WebFeature::kStringToLocaleUpperCase";
    case WebFeature::kStringToLocaleLowerCase:
      return os << "WebFeature::kStringToLocaleLowerCase";
    case WebFeature::kNumberToLocaleString:
      return os << "WebFeature::kNumberToLocaleString";
    case WebFeature::kDateToLocaleString:
      return os << "WebFeature::kDateToLocaleString";
    case WebFeature::kDateToLocaleDateString:
      return os << "WebFeature::kDateToLocaleDateString";
    case WebFeature::kDateToLocaleTimeString:
      return os << "WebFeature::kDateToLocaleTimeString";
    case WebFeature::kMalformedCSP:
      return os << "WebFeature::kMalformedCSP";
    case WebFeature::kV8AttemptOverrideReadOnlyOnPrototypeSloppy:
      return os << "WebFeature::kV8AttemptOverrideReadOnlyOnPrototypeSloppy";
    case WebFeature::kV8AttemptOverrideReadOnlyOnPrototypeStrict:
      return os << "WebFeature::kV8AttemptOverrideReadOnlyOnPrototypeStrict";
    case WebFeature::kHTMLCanvasElementLowLatency:
      return os << "WebFeature::kHTMLCanvasElementLowLatency";
    case WebFeature::kV8OptimizedFunctionWithOneShotBytecode:
      return os << "WebFeature::kV8OptimizedFunctionWithOneShotBytecode";
    case WebFeature::kSVGGeometryPropertyHasNonZeroUnitlessValue:
      return os << "WebFeature::kSVGGeometryPropertyHasNonZeroUnitlessValue";
    case WebFeature::kCSSValueAppearanceNoImplementationSkipBorder:
      return os << "WebFeature::kCSSValueAppearanceNoImplementationSkipBorder";
    case WebFeature::kInstantiateModuleScript:
      return os << "WebFeature::kInstantiateModuleScript";
    case WebFeature::kDynamicImportModuleScript:
      return os << "WebFeature::kDynamicImportModuleScript";
    case WebFeature::kHistoryPushState:
      return os << "WebFeature::kHistoryPushState";
    case WebFeature::kHistoryReplaceState:
      return os << "WebFeature::kHistoryReplaceState";
    case WebFeature::kGetDisplayMedia:
      return os << "WebFeature::kGetDisplayMedia";
    case WebFeature::kCursorImageGT64x64:
      return os << "WebFeature::kCursorImageGT64x64";
    case WebFeature::kAdClick:
      return os << "WebFeature::kAdClick";
    case WebFeature::kUpdateWithoutShippingOptionOnShippingAddressChange:
      return os << "WebFeature::kUpdateWithoutShippingOptionOnShippingAddressChange";
    case WebFeature::kUpdateWithoutShippingOptionOnShippingOptionChange:
      return os << "WebFeature::kUpdateWithoutShippingOptionOnShippingOptionChange";
    case WebFeature::kCSSSelectorEmptyWhitespaceOnlyFail:
      return os << "WebFeature::kCSSSelectorEmptyWhitespaceOnlyFail";
    case WebFeature::kActivatedImplicitRootScroller:
      return os << "WebFeature::kActivatedImplicitRootScroller";
    case WebFeature::kCSSUnknownNamespacePrefixInSelector:
      return os << "WebFeature::kCSSUnknownNamespacePrefixInSelector";
    case WebFeature::kPageLifeCycleFreeze:
      return os << "WebFeature::kPageLifeCycleFreeze";
    case WebFeature::kDefaultInCustomIdent:
      return os << "WebFeature::kDefaultInCustomIdent";
    case WebFeature::kHTMLAnchorElementHrefTranslateAttribute:
      return os << "WebFeature::kHTMLAnchorElementHrefTranslateAttribute";
    case WebFeature::kWebKitUserModifyEffective:
      return os << "WebFeature::kWebKitUserModifyEffective";
    case WebFeature::kPlainTextEditingEffective:
      return os << "WebFeature::kPlainTextEditingEffective";
    case WebFeature::kLegacyTLSVersionInMainFrameResource:
      return os << "WebFeature::kLegacyTLSVersionInMainFrameResource";
    case WebFeature::kLegacyTLSVersionInSubresource:
      return os << "WebFeature::kLegacyTLSVersionInSubresource";
    case WebFeature::kLegacyTLSVersionInSubframeMainResource:
      return os << "WebFeature::kLegacyTLSVersionInSubframeMainResource";
    case WebFeature::kRTCMaxAudioBufferSize:
      return os << "WebFeature::kRTCMaxAudioBufferSize";
    case WebFeature::kWebKitUserModifyReadWriteEffective:
      return os << "WebFeature::kWebKitUserModifyReadWriteEffective";
    case WebFeature::kWebKitUserModifyReadOnlyEffective:
      return os << "WebFeature::kWebKitUserModifyReadOnlyEffective";
    case WebFeature::kWebKitUserModifyPlainTextEffective:
      return os << "WebFeature::kWebKitUserModifyPlainTextEffective";
    case WebFeature::kCSSAtRuleFontFeatureValues:
      return os << "WebFeature::kCSSAtRuleFontFeatureValues";
    case WebFeature::kFlexboxSingleLineAlignContent:
      return os << "WebFeature::kFlexboxSingleLineAlignContent";
    case WebFeature::kSignedExchangeInnerResponseInMainFrame:
      return os << "WebFeature::kSignedExchangeInnerResponseInMainFrame";
    case WebFeature::kSignedExchangeInnerResponseInSubFrame:
      return os << "WebFeature::kSignedExchangeInnerResponseInSubFrame";
    case WebFeature::kV8IDBFactory_Databases_Method:
      return os << "WebFeature::kV8IDBFactory_Databases_Method";
    case WebFeature::kOpenerNavigationDownloadCrossOrigin:
      return os << "WebFeature::kOpenerNavigationDownloadCrossOrigin";
    case WebFeature::kV8RegExpMatchIsTrueishOnNonJSRegExp:
      return os << "WebFeature::kV8RegExpMatchIsTrueishOnNonJSRegExp";
    case WebFeature::kV8RegExpMatchIsFalseishOnJSRegExp:
      return os << "WebFeature::kV8RegExpMatchIsFalseishOnJSRegExp";
    case WebFeature::kDownloadInAdFrameWithUserGesture:
      return os << "WebFeature::kDownloadInAdFrameWithUserGesture";
    case WebFeature::kDownloadInAdFrameWithoutUserGesture:
      return os << "WebFeature::kDownloadInAdFrameWithoutUserGesture";
    case WebFeature::kNavigatorAppVersion:
      return os << "WebFeature::kNavigatorAppVersion";
    case WebFeature::kNavigatorDoNotTrack:
      return os << "WebFeature::kNavigatorDoNotTrack";
    case WebFeature::kNavigatorHardwareConcurrency:
      return os << "WebFeature::kNavigatorHardwareConcurrency";
    case WebFeature::kNavigatorLanguage:
      return os << "WebFeature::kNavigatorLanguage";
    case WebFeature::kNavigatorLanguages:
      return os << "WebFeature::kNavigatorLanguages";
    case WebFeature::kNavigatorMaxTouchPoints:
      return os << "WebFeature::kNavigatorMaxTouchPoints";
    case WebFeature::kNavigatorMimeTypes:
      return os << "WebFeature::kNavigatorMimeTypes";
    case WebFeature::kNavigatorPlatform:
      return os << "WebFeature::kNavigatorPlatform";
    case WebFeature::kNavigatorPlugins:
      return os << "WebFeature::kNavigatorPlugins";
    case WebFeature::kNavigatorUserAgent:
      return os << "WebFeature::kNavigatorUserAgent";
    case WebFeature::kWebBluetoothRequestScan:
      return os << "WebFeature::kWebBluetoothRequestScan";
    case WebFeature::kV8SVGGeometryElement_IsPointInFill_Method:
      return os << "WebFeature::kV8SVGGeometryElement_IsPointInFill_Method";
    case WebFeature::kV8SVGGeometryElement_IsPointInStroke_Method:
      return os << "WebFeature::kV8SVGGeometryElement_IsPointInStroke_Method";
    case WebFeature::kV8SVGGeometryElement_GetTotalLength_Method:
      return os << "WebFeature::kV8SVGGeometryElement_GetTotalLength_Method";
    case WebFeature::kV8SVGGeometryElement_GetPointAtLength_Method:
      return os << "WebFeature::kV8SVGGeometryElement_GetPointAtLength_Method";
    case WebFeature::kOffscreenCanvasTransferToImageBitmap:
      return os << "WebFeature::kOffscreenCanvasTransferToImageBitmap";
    case WebFeature::kOffscreenCanvasIsPointInPath:
      return os << "WebFeature::kOffscreenCanvasIsPointInPath";
    case WebFeature::kOffscreenCanvasIsPointInStroke:
      return os << "WebFeature::kOffscreenCanvasIsPointInStroke";
    case WebFeature::kOffscreenCanvasMeasureText:
      return os << "WebFeature::kOffscreenCanvasMeasureText";
    case WebFeature::kOffscreenCanvasGetImageData:
      return os << "WebFeature::kOffscreenCanvasGetImageData";
    case WebFeature::kV8SVGTextContentElement_GetComputedTextLength_Method:
      return os << "WebFeature::kV8SVGTextContentElement_GetComputedTextLength_Method";
    case WebFeature::kV8SVGTextContentElement_GetEndPositionOfChar_Method:
      return os << "WebFeature::kV8SVGTextContentElement_GetEndPositionOfChar_Method";
    case WebFeature::kV8SVGTextContentElement_GetExtentOfChar_Method:
      return os << "WebFeature::kV8SVGTextContentElement_GetExtentOfChar_Method";
    case WebFeature::kV8SVGTextContentElement_GetStartPositionOfChar_Method:
      return os << "WebFeature::kV8SVGTextContentElement_GetStartPositionOfChar_Method";
    case WebFeature::kV8SVGTextContentElement_GetSubStringLength_Method:
      return os << "WebFeature::kV8SVGTextContentElement_GetSubStringLength_Method";
    case WebFeature::kV8BatteryManager_ChargingTime_AttributeGetter:
      return os << "WebFeature::kV8BatteryManager_ChargingTime_AttributeGetter";
    case WebFeature::kV8BatteryManager_Charging_AttributeGetter:
      return os << "WebFeature::kV8BatteryManager_Charging_AttributeGetter";
    case WebFeature::kV8BatteryManager_DischargingTime_AttributeGetter:
      return os << "WebFeature::kV8BatteryManager_DischargingTime_AttributeGetter";
    case WebFeature::kV8BatteryManager_Level_AttributeGetter:
      return os << "WebFeature::kV8BatteryManager_Level_AttributeGetter";
    case WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method:
      return os << "WebFeature::kV8PaintRenderingContext2D_IsPointInPath_Method";
    case WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method:
      return os << "WebFeature::kV8PaintRenderingContext2D_IsPointInStroke_Method";
    case WebFeature::kV8PaymentRequest_CanMakePayment_Method:
      return os << "WebFeature::kV8PaymentRequest_CanMakePayment_Method";
    case WebFeature::kV8AnalyserNode_GetByteFrequencyData_Method:
      return os << "WebFeature::kV8AnalyserNode_GetByteFrequencyData_Method";
    case WebFeature::kV8AnalyserNode_GetByteTimeDomainData_Method:
      return os << "WebFeature::kV8AnalyserNode_GetByteTimeDomainData_Method";
    case WebFeature::kV8AnalyserNode_GetFloatFrequencyData_Method:
      return os << "WebFeature::kV8AnalyserNode_GetFloatFrequencyData_Method";
    case WebFeature::kV8AnalyserNode_GetFloatTimeDomainData_Method:
      return os << "WebFeature::kV8AnalyserNode_GetFloatTimeDomainData_Method";
    case WebFeature::kV8AudioBuffer_CopyFromChannel_Method:
      return os << "WebFeature::kV8AudioBuffer_CopyFromChannel_Method";
    case WebFeature::kV8AudioBuffer_GetChannelData_Method:
      return os << "WebFeature::kV8AudioBuffer_GetChannelData_Method";
    case WebFeature::kWebGLDebugRendererInfo:
      return os << "WebFeature::kWebGLDebugRendererInfo";
    case WebFeature::kV8WebGL2ComputeRenderingContext_GetExtension_Method:
      return os << "WebFeature::kV8WebGL2ComputeRenderingContext_GetExtension_Method";
    case WebFeature::kV8WebGL2ComputeRenderingContext_GetSupportedExtensions_Method:
      return os << "WebFeature::kV8WebGL2ComputeRenderingContext_GetSupportedExtensions_Method";
    case WebFeature::kV8WebGL2RenderingContext_GetExtension_Method:
      return os << "WebFeature::kV8WebGL2RenderingContext_GetExtension_Method";
    case WebFeature::kV8WebGL2RenderingContext_GetSupportedExtensions_Method:
      return os << "WebFeature::kV8WebGL2RenderingContext_GetSupportedExtensions_Method";
    case WebFeature::kV8WebGLRenderingContext_GetExtension_Method:
      return os << "WebFeature::kV8WebGLRenderingContext_GetExtension_Method";
    case WebFeature::kV8WebGLRenderingContext_GetSupportedExtensions_Method:
      return os << "WebFeature::kV8WebGLRenderingContext_GetSupportedExtensions_Method";
    case WebFeature::kV8Screen_AvailHeight_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailHeight_AttributeGetter";
    case WebFeature::kV8Screen_AvailWidth_AttributeGetter:
      return os << "WebFeature::kV8Screen_AvailWidth_AttributeGetter";
    case WebFeature::kV8Screen_ColorDepth_AttributeGetter:
      return os << "WebFeature::kV8Screen_ColorDepth_AttributeGetter";
    case WebFeature::kV8Screen_Height_AttributeGetter:
      return os << "WebFeature::kV8Screen_Height_AttributeGetter";
    case WebFeature::kV8Screen_PixelDepth_AttributeGetter:
      return os << "WebFeature::kV8Screen_PixelDepth_AttributeGetter";
    case WebFeature::kV8Screen_Width_AttributeGetter:
      return os << "WebFeature::kV8Screen_Width_AttributeGetter";
    case WebFeature::kWindowInnerWidth:
      return os << "WebFeature::kWindowInnerWidth";
    case WebFeature::kWindowInnerHeight:
      return os << "WebFeature::kWindowInnerHeight";
    case WebFeature::kV8Window_MatchMedia_Method:
      return os << "WebFeature::kV8Window_MatchMedia_Method";
    case WebFeature::kWindowScrollX:
      return os << "WebFeature::kWindowScrollX";
    case WebFeature::kWindowScrollY:
      return os << "WebFeature::kWindowScrollY";
    case WebFeature::kWindowPageXOffset:
      return os << "WebFeature::kWindowPageXOffset";
    case WebFeature::kWindowPageYOffset:
      return os << "WebFeature::kWindowPageYOffset";
    case WebFeature::kWindowScreenX:
      return os << "WebFeature::kWindowScreenX";
    case WebFeature::kWindowScreenY:
      return os << "WebFeature::kWindowScreenY";
    case WebFeature::kWindowOuterHeight:
      return os << "WebFeature::kWindowOuterHeight";
    case WebFeature::kWindowOuterWidth:
      return os << "WebFeature::kWindowOuterWidth";
    case WebFeature::kWindowDevicePixelRatio:
      return os << "WebFeature::kWindowDevicePixelRatio";
    case WebFeature::kCanvasCaptureStream:
      return os << "WebFeature::kCanvasCaptureStream";
    case WebFeature::kV8HTMLMediaElement_CanPlayType_Method:
      return os << "WebFeature::kV8HTMLMediaElement_CanPlayType_Method";
    case WebFeature::kHistoryLength:
      return os << "WebFeature::kHistoryLength";
    case WebFeature::kFeaturePolicyReportOnlyHeader:
      return os << "WebFeature::kFeaturePolicyReportOnlyHeader";
    case WebFeature::kV8PaymentRequest_HasEnrolledInstrument_Method:
      return os << "WebFeature::kV8PaymentRequest_HasEnrolledInstrument_Method";
    case WebFeature::kTrustedTypesEnabled:
      return os << "WebFeature::kTrustedTypesEnabled";
    case WebFeature::kTrustedTypesCreatePolicy:
      return os << "WebFeature::kTrustedTypesCreatePolicy";
    case WebFeature::kTrustedTypesDefaultPolicyUsed:
      return os << "WebFeature::kTrustedTypesDefaultPolicyUsed";
    case WebFeature::kTrustedTypesAssignmentError:
      return os << "WebFeature::kTrustedTypesAssignmentError";
    case WebFeature::kBadgeSet:
      return os << "WebFeature::kBadgeSet";
    case WebFeature::kBadgeClear:
      return os << "WebFeature::kBadgeClear";
    case WebFeature::kElementTimingExplicitlyRequested:
      return os << "WebFeature::kElementTimingExplicitlyRequested";
    case WebFeature::kV8HTMLMediaElement_CaptureStream_Method:
      return os << "WebFeature::kV8HTMLMediaElement_CaptureStream_Method";
    case WebFeature::kQuirkyLineBoxBackgroundSize:
      return os << "WebFeature::kQuirkyLineBoxBackgroundSize";
    case WebFeature::kDirectlyCompositedImage:
      return os << "WebFeature::kDirectlyCompositedImage";
    case WebFeature::kForbiddenSyncXhrInPageDismissal:
      return os << "WebFeature::kForbiddenSyncXhrInPageDismissal";
    case WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeGetter:
      return os << "WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeGetter";
    case WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeSetter:
      return os << "WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeSetter";
    case WebFeature::kAutoPictureInPictureAttribute:
      return os << "WebFeature::kAutoPictureInPictureAttribute";
    case WebFeature::kRTCAudioJitterBufferRtxHandling:
      return os << "WebFeature::kRTCAudioJitterBufferRtxHandling";
    case WebFeature::kWebShareCanShare:
      return os << "WebFeature::kWebShareCanShare";
    case WebFeature::kPriorityHints:
      return os << "WebFeature::kPriorityHints";
    case WebFeature::kTextAutosizedCrossSiteIframe:
      return os << "WebFeature::kTextAutosizedCrossSiteIframe";
    case WebFeature::kV8RTCQuicTransport_Constructor:
      return os << "WebFeature::kV8RTCQuicTransport_Constructor";
    case WebFeature::kV8RTCQuicTransport_Transport_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicTransport_Transport_AttributeGetter";
    case WebFeature::kV8RTCQuicTransport_State_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicTransport_State_AttributeGetter";
    case WebFeature::kV8RTCQuicTransport_GetKey_Method:
      return os << "WebFeature::kV8RTCQuicTransport_GetKey_Method";
    case WebFeature::kV8RTCQuicTransport_GetStats_Method:
      return os << "WebFeature::kV8RTCQuicTransport_GetStats_Method";
    case WebFeature::kV8RTCQuicTransport_Connect_Method:
      return os << "WebFeature::kV8RTCQuicTransport_Connect_Method";
    case WebFeature::kV8RTCQuicTransport_Listen_Method:
      return os << "WebFeature::kV8RTCQuicTransport_Listen_Method";
    case WebFeature::kV8RTCQuicTransport_Stop_Method:
      return os << "WebFeature::kV8RTCQuicTransport_Stop_Method";
    case WebFeature::kV8RTCQuicTransport_CreateStream_Method:
      return os << "WebFeature::kV8RTCQuicTransport_CreateStream_Method";
    case WebFeature::kV8RTCIceTransport_Constructor:
      return os << "WebFeature::kV8RTCIceTransport_Constructor";
    case WebFeature::kV8RTCIceTransport_Role_AttributeGetter:
      return os << "WebFeature::kV8RTCIceTransport_Role_AttributeGetter";
    case WebFeature::kV8RTCIceTransport_State_AttributeGetter:
      return os << "WebFeature::kV8RTCIceTransport_State_AttributeGetter";
    case WebFeature::kV8RTCIceTransport_GatheringState_AttributeGetter:
      return os << "WebFeature::kV8RTCIceTransport_GatheringState_AttributeGetter";
    case WebFeature::kV8RTCIceTransport_GetLocalCandidates_Method:
      return os << "WebFeature::kV8RTCIceTransport_GetLocalCandidates_Method";
    case WebFeature::kV8RTCIceTransport_GetRemoteCandidates_Method:
      return os << "WebFeature::kV8RTCIceTransport_GetRemoteCandidates_Method";
    case WebFeature::kV8RTCIceTransport_GetSelectedCandidatePair_Method:
      return os << "WebFeature::kV8RTCIceTransport_GetSelectedCandidatePair_Method";
    case WebFeature::kV8RTCIceTransport_GetLocalParameters_Method:
      return os << "WebFeature::kV8RTCIceTransport_GetLocalParameters_Method";
    case WebFeature::kV8RTCIceTransport_GetRemoteParameters_Method:
      return os << "WebFeature::kV8RTCIceTransport_GetRemoteParameters_Method";
    case WebFeature::kV8RTCQuicStream_Transport_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_Transport_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_State_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_State_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_ReadBufferedAmount_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_ReadBufferedAmount_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_MaxReadBufferedAmount_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_MaxReadBufferedAmount_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_WriteBufferedAmount_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_WriteBufferedAmount_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_MaxWriteBufferedAmount_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicStream_MaxWriteBufferedAmount_AttributeGetter";
    case WebFeature::kV8RTCQuicStream_ReadInto_Method:
      return os << "WebFeature::kV8RTCQuicStream_ReadInto_Method";
    case WebFeature::kV8RTCQuicStream_Write_Method:
      return os << "WebFeature::kV8RTCQuicStream_Write_Method";
    case WebFeature::kV8RTCQuicStream_Reset_Method:
      return os << "WebFeature::kV8RTCQuicStream_Reset_Method";
    case WebFeature::kV8RTCQuicStream_WaitForWriteBufferedAmountBelow_Method:
      return os << "WebFeature::kV8RTCQuicStream_WaitForWriteBufferedAmountBelow_Method";
    case WebFeature::kV8RTCQuicStream_WaitForReadable_Method:
      return os << "WebFeature::kV8RTCQuicStream_WaitForReadable_Method";
    case WebFeature::kHTMLTemplateElement:
      return os << "WebFeature::kHTMLTemplateElement";
    case WebFeature::kNoSysexWebMIDIWithoutPermission:
      return os << "WebFeature::kNoSysexWebMIDIWithoutPermission";
    case WebFeature::kNoSysexWebMIDIOnInsecureOrigin:
      return os << "WebFeature::kNoSysexWebMIDIOnInsecureOrigin";
    case WebFeature::kApplicationCacheInstalledButNoManifest:
      return os << "WebFeature::kApplicationCacheInstalledButNoManifest";
    case WebFeature::kPerMethodCanMakePaymentQuota:
      return os << "WebFeature::kPerMethodCanMakePaymentQuota";
    case WebFeature::kCSSValueAppearanceButtonForNonButtonRendered:
      return os << "WebFeature::kCSSValueAppearanceButtonForNonButtonRendered";
    case WebFeature::kCSSValueAppearanceButtonForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceButtonForOthersRendered";
    case WebFeature::kCustomCursorIntersectsViewport:
      return os << "WebFeature::kCustomCursorIntersectsViewport";
    case WebFeature::kClientHintsLang:
      return os << "WebFeature::kClientHintsLang";
    case WebFeature::kLinkRelPreloadImageSrcset:
      return os << "WebFeature::kLinkRelPreloadImageSrcset";
    case WebFeature::kV8HTMLMediaElement_Remote_AttributeGetter:
      return os << "WebFeature::kV8HTMLMediaElement_Remote_AttributeGetter";
    case WebFeature::kV8RemotePlayback_WatchAvailability_Method:
      return os << "WebFeature::kV8RemotePlayback_WatchAvailability_Method";
    case WebFeature::kV8RemotePlayback_Prompt_Method:
      return os << "WebFeature::kV8RemotePlayback_Prompt_Method";
    case WebFeature::kLayoutJankExplicitlyRequested:
      return os << "WebFeature::kLayoutJankExplicitlyRequested";
    case WebFeature::kMediaSessionSkipAd:
      return os << "WebFeature::kMediaSessionSkipAd";
    case WebFeature::kAdFrameSizeIntervention:
      return os << "WebFeature::kAdFrameSizeIntervention";
    case WebFeature::kV8UserActivation_HasBeenActive_AttributeGetter:
      return os << "WebFeature::kV8UserActivation_HasBeenActive_AttributeGetter";
    case WebFeature::kV8UserActivation_IsActive_AttributeGetter:
      return os << "WebFeature::kV8UserActivation_IsActive_AttributeGetter";
    case WebFeature::kTextEncoderEncodeInto:
      return os << "WebFeature::kTextEncoderEncodeInto";
    case WebFeature::kInvalidBasicCardMethodData:
      return os << "WebFeature::kInvalidBasicCardMethodData";
    case WebFeature::kClientHintsUA:
      return os << "WebFeature::kClientHintsUA";
    case WebFeature::kClientHintsUAArch:
      return os << "WebFeature::kClientHintsUAArch";
    case WebFeature::kClientHintsUAPlatform:
      return os << "WebFeature::kClientHintsUAPlatform";
    case WebFeature::kClientHintsUAModel:
      return os << "WebFeature::kClientHintsUAModel";
    case WebFeature::kAnimationFrameCancelledWithinFrame:
      return os << "WebFeature::kAnimationFrameCancelledWithinFrame";
    case WebFeature::kSchedulingIsInputPending:
      return os << "WebFeature::kSchedulingIsInputPending";
    case WebFeature::kV8StringNormalize:
      return os << "WebFeature::kV8StringNormalize";
    case WebFeature::kU2FCryptotokenRegister:
      return os << "WebFeature::kU2FCryptotokenRegister";
    case WebFeature::kU2FCryptotokenSign:
      return os << "WebFeature::kU2FCryptotokenSign";
    case WebFeature::kCSSValueAppearanceInnerSpinButton:
      return os << "WebFeature::kCSSValueAppearanceInnerSpinButton";
    case WebFeature::kCSSValueAppearanceMeter:
      return os << "WebFeature::kCSSValueAppearanceMeter";
    case WebFeature::kCSSValueAppearanceProgressBar:
      return os << "WebFeature::kCSSValueAppearanceProgressBar";
    case WebFeature::kCSSValueAppearanceProgressBarForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceProgressBarForOthersRendered";
    case WebFeature::kCSSValueAppearancePushButton:
      return os << "WebFeature::kCSSValueAppearancePushButton";
    case WebFeature::kCSSValueAppearanceSquareButton:
      return os << "WebFeature::kCSSValueAppearanceSquareButton";
    case WebFeature::kCSSValueAppearanceSearchCancel:
      return os << "WebFeature::kCSSValueAppearanceSearchCancel";
    case WebFeature::kCSSValueAppearanceTextarea:
      return os << "WebFeature::kCSSValueAppearanceTextarea";
    case WebFeature::kCSSValueAppearanceTextFieldForOthersRendered:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForOthersRendered";
    case WebFeature::kCSSValueAppearanceTextFieldForTemporalRendered:
      return os << "WebFeature::kCSSValueAppearanceTextFieldForTemporalRendered";
    case WebFeature::kBuiltInModuleKvStorage:
      return os << "WebFeature::kBuiltInModuleKvStorage";
    case WebFeature::kBuiltInModuleVirtualScroller:
      return os << "WebFeature::kBuiltInModuleVirtualScroller";
    case WebFeature::kAdClickNavigation:
      return os << "WebFeature::kAdClickNavigation";
    case WebFeature::kRTCStatsRelativePacketArrivalDelay:
      return os << "WebFeature::kRTCStatsRelativePacketArrivalDelay";
    case WebFeature::kCSSSelectorHostContextInSnapshotProfile:
      return os << "WebFeature::kCSSSelectorHostContextInSnapshotProfile";
    case WebFeature::kCSSSelectorHostContextInLiveProfile:
      return os << "WebFeature::kCSSSelectorHostContextInLiveProfile";
    case WebFeature::kImportMap:
      return os << "WebFeature::kImportMap";
    case WebFeature::kRefreshHeader:
      return os << "WebFeature::kRefreshHeader";
    case WebFeature::kSearchEventFired:
      return os << "WebFeature::kSearchEventFired";
    case WebFeature::kIdleDetectionStart:
      return os << "WebFeature::kIdleDetectionStart";
    case WebFeature::kTargetCurrent:
      return os << "WebFeature::kTargetCurrent";
    case WebFeature::kSandboxBackForwardStaysWithinSubtree:
      return os << "WebFeature::kSandboxBackForwardStaysWithinSubtree";
    case WebFeature::kSandboxBackForwardAffectsFramesOutsideSubtree:
      return os << "WebFeature::kSandboxBackForwardAffectsFramesOutsideSubtree";
    case WebFeature::kDownloadPrePolicyCheck:
      return os << "WebFeature::kDownloadPrePolicyCheck";
    case WebFeature::kDownloadPostPolicyCheck:
      return os << "WebFeature::kDownloadPostPolicyCheck";
    case WebFeature::kDownloadInSandboxWithoutUserGesture:
      return os << "WebFeature::kDownloadInSandboxWithoutUserGesture";
    case WebFeature::kReadableStreamGetReader:
      return os << "WebFeature::kReadableStreamGetReader";
    case WebFeature::kReadableStreamPipeThrough:
      return os << "WebFeature::kReadableStreamPipeThrough";
    case WebFeature::kReadableStreamPipeTo:
      return os << "WebFeature::kReadableStreamPipeTo";
    case WebFeature::kCSSStyleSheetReplace:
      return os << "WebFeature::kCSSStyleSheetReplace";
    case WebFeature::kCSSStyleSheetReplaceSync:
      return os << "WebFeature::kCSSStyleSheetReplaceSync";
    case WebFeature::kAdoptedStyleSheets:
      return os << "WebFeature::kAdoptedStyleSheets";
    case WebFeature::kHTMLImportsOnReverseOriginTrials:
      return os << "WebFeature::kHTMLImportsOnReverseOriginTrials";
    case WebFeature::kElementCreateShadowRootOnReverseOriginTrials:
      return os << "WebFeature::kElementCreateShadowRootOnReverseOriginTrials";
    case WebFeature::kDocumentRegisterElementOnReverseOriginTrials:
      return os << "WebFeature::kDocumentRegisterElementOnReverseOriginTrials";
    case WebFeature::kInputTypeRadio:
      return os << "WebFeature::kInputTypeRadio";
    case WebFeature::kInputTypeCheckbox:
      return os << "WebFeature::kInputTypeCheckbox";
    case WebFeature::kInputTypeImage:
      return os << "WebFeature::kInputTypeImage";
    case WebFeature::kInputTypeButton:
      return os << "WebFeature::kInputTypeButton";
    case WebFeature::kInputTypeHidden:
      return os << "WebFeature::kInputTypeHidden";
    case WebFeature::kInputTypeReset:
      return os << "WebFeature::kInputTypeReset";
    case WebFeature::kSelectElementSingle:
      return os << "WebFeature::kSelectElementSingle";
    case WebFeature::kSelectElementMultiple:
      return os << "WebFeature::kSelectElementMultiple";
    case WebFeature::kV8Animation_Effect_AttributeGetter:
      return os << "WebFeature::kV8Animation_Effect_AttributeGetter";
    case WebFeature::kV8Animation_Effect_AttributeSetter:
      return os << "WebFeature::kV8Animation_Effect_AttributeSetter";
    case WebFeature::kHidDeviceClose:
      return os << "WebFeature::kHidDeviceClose";
    case WebFeature::kHidDeviceOpen:
      return os << "WebFeature::kHidDeviceOpen";
    case WebFeature::kHidDeviceReceiveFeatureReport:
      return os << "WebFeature::kHidDeviceReceiveFeatureReport";
    case WebFeature::kHidDeviceSendFeatureReport:
      return os << "WebFeature::kHidDeviceSendFeatureReport";
    case WebFeature::kHidDeviceSendReport:
      return os << "WebFeature::kHidDeviceSendReport";
    case WebFeature::kHidGetDevices:
      return os << "WebFeature::kHidGetDevices";
    case WebFeature::kHidRequestDevice:
      return os << "WebFeature::kHidRequestDevice";
    case WebFeature::kV8RTCQuicTransport_MaxDatagramLength_AttributeGetter:
      return os << "WebFeature::kV8RTCQuicTransport_MaxDatagramLength_AttributeGetter";
    case WebFeature::kV8RTCQuicTransport_ReadyToSendDatagram_Method:
      return os << "WebFeature::kV8RTCQuicTransport_ReadyToSendDatagram_Method";
    case WebFeature::kV8RTCQuicTransport_SendDatagram_Method:
      return os << "WebFeature::kV8RTCQuicTransport_SendDatagram_Method";
    case WebFeature::kV8RTCQuicTransport_ReceiveDatagrams_Method:
      return os << "WebFeature::kV8RTCQuicTransport_ReceiveDatagrams_Method";
    case WebFeature::kCSSValueContainStyle:
      return os << "WebFeature::kCSSValueContainStyle";
    case WebFeature::kWebShareSuccessfulContainingFiles:
      return os << "WebFeature::kWebShareSuccessfulContainingFiles";
    case WebFeature::kWebShareSuccessfulWithoutFiles:
      return os << "WebFeature::kWebShareSuccessfulWithoutFiles";
    case WebFeature::kWebShareUnsuccessfulContainingFiles:
      return os << "WebFeature::kWebShareUnsuccessfulContainingFiles";
    case WebFeature::kWebShareUnsuccessfulWithoutFiles:
      return os << "WebFeature::kWebShareUnsuccessfulWithoutFiles";
    case WebFeature::kVerticalScrollbarThumbScrollingWithMouse:
      return os << "WebFeature::kVerticalScrollbarThumbScrollingWithMouse";
    case WebFeature::kVerticalScrollbarThumbScrollingWithTouch:
      return os << "WebFeature::kVerticalScrollbarThumbScrollingWithTouch";
    case WebFeature::kHorizontalScrollbarThumbScrollingWithMouse:
      return os << "WebFeature::kHorizontalScrollbarThumbScrollingWithMouse";
    case WebFeature::kHorizontalScrollbarThumbScrollingWithTouch:
      return os << "WebFeature::kHorizontalScrollbarThumbScrollingWithTouch";
    case WebFeature::kSMSReceiverStart:
      return os << "WebFeature::kSMSReceiverStart";
    case WebFeature::kV8Animation_Pending_AttributeGetter:
      return os << "WebFeature::kV8Animation_Pending_AttributeGetter";
    case WebFeature::kFocusWithoutUserActivationNotSandboxedNotAdFrame:
      return os << "WebFeature::kFocusWithoutUserActivationNotSandboxedNotAdFrame";
    case WebFeature::kFocusWithoutUserActivationNotSandboxedAdFrame:
      return os << "WebFeature::kFocusWithoutUserActivationNotSandboxedAdFrame";
    case WebFeature::kFocusWithoutUserActivationSandboxedNotAdFrame:
      return os << "WebFeature::kFocusWithoutUserActivationSandboxedNotAdFrame";
    case WebFeature::kFocusWithoutUserActivationSandboxedAdFrame:
      return os << "WebFeature::kFocusWithoutUserActivationSandboxedAdFrame";
    case WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeGetter:
      return os << "WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeGetter";
    case WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeSetter:
      return os << "WebFeature::kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeSetter";
    case WebFeature::kMediaCapabilitiesDecodingInfoWithKeySystemConfig:
      return os << "WebFeature::kMediaCapabilitiesDecodingInfoWithKeySystemConfig";
    case WebFeature::kRevertInCustomIdent:
      return os << "WebFeature::kRevertInCustomIdent";
    case WebFeature::kUnoptimizedImagePolicies:
      return os << "WebFeature::kUnoptimizedImagePolicies";
    case WebFeature::kVTTCueParser:
      return os << "WebFeature::kVTTCueParser";
    case WebFeature::kMediaElementTextTrackContainer:
      return os << "WebFeature::kMediaElementTextTrackContainer";
    case WebFeature::kMediaElementTextTrackList:
      return os << "WebFeature::kMediaElementTextTrackList";
    case WebFeature::kNumberOfFeatures:
      return os << "WebFeature::kNumberOfFeatures";
    default:
      return os << "Unknown WebFeature value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif