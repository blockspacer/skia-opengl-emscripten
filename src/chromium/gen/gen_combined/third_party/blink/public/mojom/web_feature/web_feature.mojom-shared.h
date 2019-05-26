// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_FEATURE_WEB_FEATURE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_FEATURE_WEB_FEATURE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class WebFeature : int32_t {
  
  kOBSOLETE_PageDestruction = 0,
  
  kWorkerStart = 4,
  
  kSharedWorkerStart = 5,
  
  kOpenWebDatabase = 10,
  
  kUnprefixedRequestAnimationFrame = 13,
  
  kPrefixedRequestAnimationFrame = 14,
  
  kContentSecurityPolicy = 15,
  
  kContentSecurityPolicyReportOnly = 16,
  
  kPrefixedTransitionEndEvent = 18,
  
  kUnprefixedTransitionEndEvent = 19,
  
  kPrefixedAndUnprefixedTransitionEndEvent = 20,
  
  kAutoFocusAttribute = 21,
  
  kDataListElement = 23,
  
  kFormAttribute = 24,
  
  kIncrementalAttribute = 25,
  
  kInputTypeColor = 26,
  
  kInputTypeDate = 27,
  
  kInputTypeDateTimeFallback = 29,
  
  kInputTypeDateTimeLocal = 30,
  
  kInputTypeEmail = 31,
  
  kInputTypeMonth = 32,
  
  kInputTypeNumber = 33,
  
  kInputTypeRange = 34,
  
  kInputTypeSearch = 35,
  
  kInputTypeTel = 36,
  
  kInputTypeTime = 37,
  
  kInputTypeURL = 38,
  
  kInputTypeWeek = 39,
  
  kInputTypeWeekFallback = 40,
  
  kListAttribute = 41,
  
  kMaxAttribute = 42,
  
  kMinAttribute = 43,
  
  kPatternAttribute = 44,
  
  kPlaceholderAttribute = 45,
  
  kPrefixedDirectoryAttribute = 47,
  
  kRequiredAttribute = 49,
  
  kStepAttribute = 51,
  
  kPageVisits = 52,
  
  kHTMLMarqueeElement = 53,
  
  kReflection = 55,
  
  kPrefixedStorageInfo = 57,
  
  kDeprecatedFlexboxWebContent = 61,
  
  kDeprecatedFlexboxChrome = 62,
  
  kDeprecatedFlexboxChromeExtension = 63,
  
  kWindowEvent = 69,
  
  kContentSecurityPolicyWithBaseElement = 70,
  
  kDocumentClear = 74,
  
  kXMLDocument = 77,
  
  kXSLProcessingInstruction = 78,
  
  kXSLTProcessor = 79,
  
  kSVGSwitchElement = 80,
  
  kDocumentAll = 83,
  
  kFormElement = 84,
  
  kDemotedFormElement = 85,
  
  kSVGAnimationElement = 90,
  
  kLineClamp = 96,
  
  kSubFrameBeforeUnloadRegistered = 97,
  
  kSubFrameBeforeUnloadFired = 98,
  
  kDocumentCreateAttribute = 111,
  
  kDocumentCreateAttributeNS = 112,
  
  kDocumentXMLEncoding = 115,
  
  kDocumentXMLStandalone = 116,
  
  kDocumentXMLVersion = 117,
  
  kNavigatorProductSub = 123,
  
  kNavigatorVendor = 124,
  
  kNavigatorVendorSub = 125,
  
  kPrefixedAnimationEndEvent = 128,
  
  kUnprefixedAnimationEndEvent = 129,
  
  kPrefixedAndUnprefixedAnimationEndEvent = 130,
  
  kPrefixedAnimationStartEvent = 131,
  
  kUnprefixedAnimationStartEvent = 132,
  
  kPrefixedAndUnprefixedAnimationStartEvent = 133,
  
  kPrefixedAnimationIterationEvent = 134,
  
  kUnprefixedAnimationIterationEvent = 135,
  
  kPrefixedAndUnprefixedAnimationIterationEvent = 136,
  
  kEventReturnValue = 137,
  
  kSVGSVGElement = 138,
  
  kDOMSubtreeModifiedEvent = 143,
  
  kDOMNodeInsertedEvent = 144,
  
  kDOMNodeRemovedEvent = 145,
  
  kDOMNodeRemovedFromDocumentEvent = 146,
  
  kDOMNodeInsertedIntoDocumentEvent = 147,
  
  kDOMCharacterDataModifiedEvent = 148,
  
  kPrefixedAudioDecodedByteCount = 164,
  
  kPrefixedVideoDecodedByteCount = 165,
  
  kPrefixedVideoSupportsFullscreen = 166,
  
  kPrefixedVideoDisplayingFullscreen = 167,
  
  kPrefixedVideoEnterFullscreen = 168,
  
  kPrefixedVideoExitFullscreen = 169,
  
  kPrefixedVideoEnterFullScreen = 170,
  
  kPrefixedVideoExitFullScreen = 171,
  
  kPrefixedVideoDecodedFrameCount = 172,
  
  kPrefixedVideoDroppedFrameCount = 173,
  
  kPrefixedElementRequestFullscreen = 176,
  
  kPrefixedElementRequestFullScreen = 177,
  
  kBarPropLocationbar = 178,
  
  kBarPropMenubar = 179,
  
  kBarPropPersonalbar = 180,
  
  kBarPropScrollbars = 181,
  
  kBarPropStatusbar = 182,
  
  kBarPropToolbar = 183,
  
  kInputTypeEmailMultiple = 184,
  
  kInputTypeEmailMaxLength = 185,
  
  kInputTypeEmailMultipleMaxLength = 186,
  
  kInputTypeText = 190,
  
  kInputTypeTextMaxLength = 191,
  
  kInputTypePassword = 192,
  
  kInputTypePasswordMaxLength = 193,
  
  kPrefixedPageVisibility = 196,
  
  kDocumentBeforeUnloadRegistered = 200,
  
  kDocumentBeforeUnloadFired = 201,
  
  kDocumentUnloadRegistered = 202,
  
  kDocumentUnloadFired = 203,
  
  kSVGLocatableNearestViewportElement = 204,
  
  kSVGLocatableFarthestViewportElement = 205,
  
  kSVGPointMatrixTransform = 209,
  
  kDOMFocusInOutEvent = 211,
  
  kFileGetLastModifiedDate = 212,
  
  kHTMLElementInnerText = 213,
  
  kHTMLElementOuterText = 214,
  
  kReplaceDocumentViaJavaScriptURL = 215,
  
  kElementPrefixedMatchesSelector = 217,
  
  kCSSStyleSheetRules = 219,
  
  kCSSStyleSheetAddRule = 220,
  
  kCSSStyleSheetRemoveRule = 221,
  
  kInitMessageEvent = 222,
  
  kPrefixedDevicePixelRatioMediaFeature = 233,
  
  kPrefixedMaxDevicePixelRatioMediaFeature = 234,
  
  kPrefixedMinDevicePixelRatioMediaFeature = 235,
  
  kPrefixedTransform3dMediaFeature = 237,
  
  kPrefixedStorageQuota = 240,
  
  kResetReferrerPolicy = 243,
  
  kCaseInsensitiveAttrSelectorMatch = 244,
  
  kFormNameAccessForImageElement = 246,
  
  kFormNameAccessForPastNamesMap = 247,
  
  kFormAssociationByParser = 248,
  
  kSVGSVGElementInDocument = 250,
  
  kSVGDocumentRootElement = 251,
  
  kDeprecatedWebKitGradient = 260,
  
  kDeprecatedWebKitLinearGradient = 261,
  
  kDeprecatedWebKitRepeatingLinearGradient = 262,
  
  kDeprecatedWebKitRadialGradient = 263,
  
  kDeprecatedWebKitRepeatingRadialGradient = 264,
  
  kTextAutosizing = 274,
  
  kHTMLAnchorElementPingAttribute = 276,
  
  kSVGClassName = 279,
  
  kHTMLMediaElementSeekToFragmentStart = 281,
  
  kHTMLMediaElementPauseAtFragmentEnd = 282,
  
  kPrefixedWindowURL = 283,
  
  kWindowOrientation = 285,
  
  kDocumentCaptureEvents = 287,
  
  kDocumentReleaseEvents = 288,
  
  kWindowCaptureEvents = 289,
  
  kWindowReleaseEvents = 290,
  
  kDocumentXPathCreateExpression = 295,
  
  kDocumentXPathCreateNSResolver = 296,
  
  kDocumentXPathEvaluate = 297,
  
  kAnimationConstructorKeyframeListEffectObjectTiming = 300,
  
  kAnimationConstructorKeyframeListEffectNoTiming = 302,
  
  kPrefixedCancelAnimationFrame = 304,
  
  kNamedNodeMapGetNamedItem = 306,
  
  kNamedNodeMapSetNamedItem = 307,
  
  kNamedNodeMapRemoveNamedItem = 308,
  
  kNamedNodeMapItem = 309,
  
  kNamedNodeMapGetNamedItemNS = 310,
  
  kNamedNodeMapSetNamedItemNS = 311,
  
  kNamedNodeMapRemoveNamedItemNS = 312,
  
  kPrefixedDocumentIsFullscreen = 318,
  
  kPrefixedDocumentCurrentFullScreenElement = 320,
  
  kPrefixedDocumentCancelFullScreen = 321,
  
  kPrefixedDocumentFullscreenEnabled = 322,
  
  kPrefixedDocumentFullscreenElement = 323,
  
  kPrefixedDocumentExitFullscreen = 324,
  
  kSVGForeignObjectElement = 325,
  
  kSelectionSetPosition = 327,
  
  kAnimationFinishEvent = 328,
  
  kSVGSVGElementInXMLDocument = 329,
  
  kEventSrcElement = 343,
  
  kEventCancelBubble = 344,
  
  kEventPath = 345,
  
  kNodeIteratorDetach = 347,
  
  kEventGetReturnValueTrue = 350,
  
  kEventGetReturnValueFalse = 351,
  
  kEventSetReturnValueTrue = 352,
  
  kEventSetReturnValueFalse = 353,
  
  kWindowOffscreenBuffering = 356,
  
  kWindowDefaultStatus = 357,
  
  kWindowDefaultstatus = 358,
  
  kPrefixedTransitionEventConstructor = 361,
  
  kPrefixedMutationObserverConstructor = 362,
  
  kNotificationPermission = 371,
  
  kRangeDetach = 372,
  
  kPrefixedFileRelativePath = 386,
  
  kDocumentCaretRangeFromPoint = 387,
  
  kElementScrollIntoViewIfNeeded = 389,
  
  kRangeExpand = 393,
  
  kHTMLImageElementX = 396,
  
  kHTMLImageElementY = 397,
  
  kSelectionBaseNode = 400,
  
  kSelectionBaseOffset = 401,
  
  kSelectionExtentNode = 402,
  
  kSelectionExtentOffset = 403,
  
  kSelectionType = 404,
  
  kSelectionModify = 405,
  
  kSelectionSetBaseAndExtent = 406,
  
  kSelectionEmpty = 407,
  
  kVTTCue = 409,
  
  kVTTCueRender = 410,
  
  kVTTCueRenderVertical = 411,
  
  kVTTCueRenderSnapToLinesFalse = 412,
  
  kVTTCueRenderLineNotAuto = 413,
  
  kVTTCueRenderPositionNot50 = 414,
  
  kVTTCueRenderSizeNot100 = 415,
  
  kVTTCueRenderAlignNotCenter = 416,
  
  kElementRequestPointerLock = 417,
  
  kVTTCueRenderRtl = 418,
  
  kPostMessageFromSecureToInsecure = 419,
  
  kPostMessageFromInsecureToSecure = 420,
  
  kDocumentExitPointerLock = 421,
  
  kDocumentPointerLockElement = 422,
  
  kPrefixedCursorZoomIn = 424,
  
  kPrefixedCursorZoomOut = 425,
  
  kTextEncoderConstructor = 429,
  
  kTextEncoderEncode = 430,
  
  kTextDecoderConstructor = 431,
  
  kTextDecoderDecode = 432,
  
  kFocusInOutEvent = 433,
  
  kMouseEventMovementX = 434,
  
  kMouseEventMovementY = 435,
  
  kDocumentFonts = 440,
  
  kMixedContentFormsSubmitted = 441,
  
  kFormsSubmitted = 442,
  
  kHTMLImports = 455,
  
  kElementCreateShadowRoot = 456,
  
  kDocumentRegisterElement = 457,
  
  kEditingAppleInterchangeNewline = 458,
  
  kEditingAppleConvertedSpace = 459,
  
  kEditingApplePasteAsQuotation = 460,
  
  kEditingAppleStyleSpanClass = 461,
  
  kHTMLImportsAsyncAttribute = 463,
  
  kXMLHttpRequestSynchronous = 465,
  
  kCSSSelectorPseudoUnresolved = 466,
  
  kCSSSelectorPseudoShadow = 467,
  
  kCSSSelectorPseudoContent = 468,
  
  kCSSSelectorPseudoHost = 469,
  
  kCSSSelectorPseudoHostContext = 470,
  
  kCSSDeepCombinator = 471,
  
  kUseAsm = 473,
  
  kDOMWindowOpen = 475,
  
  kDOMWindowOpenFeatures = 476,
  
  kAspectRatioFlexItem = 479,
  
  kDetailsElement = 480,
  
  kDialogElement = 481,
  
  kMapElement = 482,
  
  kMeterElement = 483,
  
  kProgressElement = 484,
  
  kWheelEventWheelDeltaX = 491,
  
  kWheelEventWheelDeltaY = 492,
  
  kWheelEventWheelDelta = 493,
  
  kSendBeacon = 494,
  
  kSendBeaconQuotaExceeded = 495,
  
  kSVGSMILElementInDocument = 501,
  
  kMouseEventOffsetX = 502,
  
  kMouseEventOffsetY = 503,
  
  kMouseEventX = 504,
  
  kMouseEventY = 505,
  
  kMouseEventFromElement = 506,
  
  kMouseEventToElement = 507,
  
  kRequestFileSystem = 508,
  
  kRequestFileSystemWorker = 509,
  
  kRequestFileSystemSyncWorker = 510,
  
  kSVGStyleElementTitle = 519,
  
  kPictureSourceSrc = 520,
  
  kPicture = 521,
  
  kSizes = 522,
  
  kSrcsetXDescriptor = 523,
  
  kSrcsetWDescriptor = 524,
  
  kSelectionContainsNode = 525,
  
  kXMLExternalResourceLoad = 529,
  
  kMixedContentPrivateHostnameInPublicHostname = 530,
  
  kLegacyProtocolEmbeddedAsSubresource = 531,
  
  kRequestedSubresourceWithEmbeddedCredentials = 532,
  
  kNotificationCreated = 533,
  
  kNotificationClosed = 534,
  
  kNotificationPermissionRequested = 535,
  
  kSRIElementWithMatchingIntegrityAttribute = 540,
  
  kSRIElementWithNonMatchingIntegrityAttribute = 541,
  
  kSRIElementWithUnparsableIntegrityAttribute = 542,
  
  kV8Animation_StartTime_AttributeGetter = 545,
  
  kV8Animation_StartTime_AttributeSetter = 546,
  
  kV8Animation_CurrentTime_AttributeGetter = 547,
  
  kV8Animation_CurrentTime_AttributeSetter = 548,
  
  kV8Animation_PlaybackRate_AttributeGetter = 549,
  
  kV8Animation_PlaybackRate_AttributeSetter = 550,
  
  kV8Animation_PlayState_AttributeGetter = 551,
  
  kV8Animation_Finish_Method = 552,
  
  kV8Animation_Play_Method = 553,
  
  kV8Animation_Pause_Method = 554,
  
  kV8Animation_Reverse_Method = 555,
  
  kBreakIterator = 556,
  
  kScreenOrientationAngle = 557,
  
  kScreenOrientationType = 558,
  
  kScreenOrientationLock = 559,
  
  kScreenOrientationUnlock = 560,
  
  kGeolocationSecureOrigin = 561,
  
  kGeolocationInsecureOrigin = 562,
  
  kNotificationSecureOrigin = 563,
  
  kNotificationInsecureOrigin = 564,
  
  kNotificationShowEvent = 565,
  
  kSVGTransformListConsolidate = 569,
  
  kSVGAnimatedTransformListBaseVal = 570,
  
  kQuotedAnimationName = 571,
  
  kQuotedKeyframesRule = 572,
  
  kSrcsetDroppedCandidate = 573,
  
  kWindowPostMessage = 574,
  
  kRenderRuby = 576,
  
  kScriptElementWithInvalidTypeHasSrc = 578,
  
  kXMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload = 581,
  
  kCSSSelectorPseudoScrollbar = 582,
  
  kCSSSelectorPseudoScrollbarButton = 583,
  
  kCSSSelectorPseudoScrollbarThumb = 584,
  
  kCSSSelectorPseudoScrollbarTrack = 585,
  
  kCSSSelectorPseudoScrollbarTrackPiece = 586,
  
  kLangAttribute = 587,
  
  kLangAttributeOnHTML = 588,
  
  kLangAttributeOnBody = 589,
  
  kLangAttributeDoesNotMatchToUILocale = 590,
  
  kInputTypeSubmit = 591,
  
  kInputTypeSubmitWithValue = 592,
  
  kSetReferrerPolicy = 593,
  
  kTextWholeText = 599,
  
  kNotificationCloseEvent = 603,
  
  kStyleMedia = 606,
  
  kStyleMediaType = 607,
  
  kStyleMediaMatchMedium = 608,
  
  kMixedContentPresent = 609,
  
  kMixedContentBlockable = 610,
  
  kMixedContentAudio = 611,
  
  kMixedContentDownload = 612,
  
  kMixedContentFavicon = 613,
  
  kMixedContentImage = 614,
  
  kMixedContentInternal = 615,
  
  kMixedContentPlugin = 616,
  
  kMixedContentPrefetch = 617,
  
  kMixedContentVideo = 618,
  
  kCSSSelectorPseudoFullScreenAncestor = 628,
  
  kCSSSelectorPseudoFullScreen = 629,
  
  kWebKitCSSMatrix = 630,
  
  kAudioContextCreateAnalyser = 631,
  
  kAudioContextCreateBiquadFilter = 632,
  
  kAudioContextCreateBufferSource = 633,
  
  kAudioContextCreateChannelMerger = 634,
  
  kAudioContextCreateChannelSplitter = 635,
  
  kAudioContextCreateConvolver = 636,
  
  kAudioContextCreateDelay = 637,
  
  kAudioContextCreateDynamicsCompressor = 638,
  
  kAudioContextCreateGain = 639,
  
  kAudioContextCreateMediaElementSource = 640,
  
  kAudioContextCreateMediaStreamDestination = 641,
  
  kAudioContextCreateMediaStreamSource = 642,
  
  kAudioContextCreateOscillator = 643,
  
  kAudioContextCreatePeriodicWave = 645,
  
  kAudioContextCreateScriptProcessor = 646,
  
  kAudioContextCreateStereoPanner = 647,
  
  kAudioContextCreateWaveShaper = 648,
  
  kAudioContextDecodeAudioData = 649,
  
  kAudioContextResume = 650,
  
  kAudioContextSuspend = 651,
  
  kMixedContentInNonHTTPSFrameThatRestrictsMixedContent = 661,
  
  kMixedContentInSecureFrameThatDoesNotRestrictMixedContent = 662,
  
  kMixedContentWebSocket = 663,
  
  kSyntheticKeyframesInCompositedCSSAnimation = 664,
  
  kMixedContentFormPresent = 665,
  
  kGetUserMediaInsecureOrigin = 666,
  
  kGetUserMediaSecureOrigin = 667,
  
  kDeviceMotionInsecureOrigin = 668,
  
  kDeviceMotionSecureOrigin = 669,
  
  kDeviceOrientationInsecureOrigin = 670,
  
  kDeviceOrientationSecureOrigin = 671,
  
  kSandboxViaIFrame = 672,
  
  kSandboxViaCSP = 673,
  
  kBlockedSniffingImageToScript = 674,
  
  kFetch = 675,
  
  kFetchBodyStream = 676,
  
  kXMLHttpRequestAsynchronous = 677,
  
  kWhiteSpacePreFromXMLSpace = 679,
  
  kWhiteSpaceNowrapFromXMLSpace = 680,
  
  kSVGSVGElementForceRedraw = 685,
  
  kSVGSVGElementSuspendRedraw = 686,
  
  kSVGSVGElementUnsuspendRedraw = 687,
  
  kSVGSVGElementUnsuspendRedrawAll = 688,
  
  kAudioContextClose = 689,
  
  kCSSZoomNotEqualToOne = 691,
  
  kClientRectListItem = 694,
  
  kWindowClientInformation = 695,
  
  kWindowFind = 696,
  
  kWindowScreenLeft = 697,
  
  kWindowScreenTop = 698,
  
  kV8Animation_Cancel_Method = 699,
  
  kV8Animation_Onfinish_AttributeGetter = 700,
  
  kV8Animation_Onfinish_AttributeSetter = 701,
  
  kV8Window_WebKitAnimationEvent_ConstructorGetter = 707,
  
  kCryptoGetRandomValues = 710,
  
  kSubtleCryptoEncrypt = 711,
  
  kSubtleCryptoDecrypt = 712,
  
  kSubtleCryptoSign = 713,
  
  kSubtleCryptoVerify = 714,
  
  kSubtleCryptoDigest = 715,
  
  kSubtleCryptoGenerateKey = 716,
  
  kSubtleCryptoImportKey = 717,
  
  kSubtleCryptoExportKey = 718,
  
  kSubtleCryptoDeriveBits = 719,
  
  kSubtleCryptoDeriveKey = 720,
  
  kSubtleCryptoWrapKey = 721,
  
  kSubtleCryptoUnwrapKey = 722,
  
  kCryptoAlgorithmAesCbc = 723,
  
  kCryptoAlgorithmHmac = 724,
  
  kCryptoAlgorithmRsaSsaPkcs1v1_5 = 725,
  
  kCryptoAlgorithmSha1 = 726,
  
  kCryptoAlgorithmSha256 = 727,
  
  kCryptoAlgorithmSha384 = 728,
  
  kCryptoAlgorithmSha512 = 729,
  
  kCryptoAlgorithmAesGcm = 730,
  
  kCryptoAlgorithmRsaOaep = 731,
  
  kCryptoAlgorithmAesCtr = 732,
  
  kCryptoAlgorithmAesKw = 733,
  
  kCryptoAlgorithmRsaPss = 734,
  
  kCryptoAlgorithmEcdsa = 735,
  
  kCryptoAlgorithmEcdh = 736,
  
  kCryptoAlgorithmHkdf = 737,
  
  kCryptoAlgorithmPbkdf2 = 738,
  
  kDocumentSetDomain = 739,
  
  kUpgradeInsecureRequestsEnabled = 740,
  
  kUpgradeInsecureRequestsUpgradedRequest = 741,
  
  kDocumentDesignMode = 742,
  
  kGlobalCacheStorage = 743,
  
  kNetInfo = 744,
  
  kBackgroundSync = 745,
  
  kLegacyConst = 748,
  
  kV8Permissions_Query_Method = 750,
  
  kSVGHrefBaseVal = 758,
  
  kSVGHrefAnimVal = 759,
  
  kV8CSSRuleList_Item_Method = 760,
  
  kV8MediaList_Item_Method = 761,
  
  kV8StyleSheetList_Item_Method = 762,
  
  kStyleSheetListAnonymousNamedGetter = 763,
  
  kAutocapitalizeAttribute = 764,
  
  kFullscreenSecureOrigin = 765,
  
  kFullscreenInsecureOrigin = 766,
  
  kDialogInSandboxedContext = 767,
  
  kSVGSMILAnimationInImageRegardlessOfCache = 768,
  
  kEncryptedMediaSecureOrigin = 770,
  
  kPerformanceFrameTiming = 772,
  
  kV8Element_Animate_Method = 773,
  
  kV8SVGSVGElement_GetElementById_Method = 778,
  
  kV8MessageChannel_Constructor = 780,
  
  kV8MessagePort_PostMessage_Method = 781,
  
  kV8MessagePort_Start_Method = 782,
  
  kV8MessagePort_Close_Method = 783,
  
  kMessagePortsTransferred = 784,
  
  kCSSKeyframesRuleAnonymousIndexedGetter = 785,
  
  kV8Screen_AvailLeft_AttributeGetter = 786,
  
  kV8Screen_AvailTop_AttributeGetter = 787,
  
  kV8SVGFEConvolveMatrixElement_PreserveAlpha_AttributeGetter = 791,
  
  kV8SVGStyleElement_Disabled_AttributeGetter = 798,
  
  kV8SVGStyleElement_Disabled_AttributeSetter = 799,
  
  kInputTypeFileSecureOrigin = 801,
  
  kInputTypeFileInsecureOrigin = 802,
  
  kElementAttachShadow = 804,
  
  kV8SecurityPolicyViolationEvent_DocumentURI_AttributeGetter = 806,
  
  kV8SecurityPolicyViolationEvent_BlockedURI_AttributeGetter = 807,
  
  kV8SecurityPolicyViolationEvent_StatusCode_AttributeGetter = 808,
  
  kHTMLLinkElementDisabled = 809,
  
  kV8HTMLLinkElement_Disabled_AttributeGetter = 810,
  
  kV8HTMLLinkElement_Disabled_AttributeSetter = 811,
  
  kV8HTMLStyleElement_Disabled_AttributeGetter = 812,
  
  kV8HTMLStyleElement_Disabled_AttributeSetter = 813,
  
  kV8DOMError_Constructor = 816,
  
  kV8DOMError_Name_AttributeGetter = 817,
  
  kV8DOMError_Message_AttributeGetter = 818,
  
  kTextInputFired = 830,
  
  kV8TextEvent_Data_AttributeGetter = 831,
  
  kV8TextEvent_InitTextEvent_Method = 832,
  
  kClientHintsDPR = 835,
  
  kClientHintsResourceWidth = 836,
  
  kClientHintsViewportWidth = 837,
  
  kSRIElementIntegrityAttributeButIneligible = 838,
  
  kFormDataAppendNull = 843,
  
  kNonHTMLElementSetAttributeNodeFromHTMLDocumentNameNotLowercase = 845,
  
  kNavigatorVibrate = 850,
  
  kNavigatorVibrateSubFrame = 851,
  
  kV8XPathEvaluator_Constructor = 853,
  
  kV8XPathEvaluator_CreateExpression_Method = 854,
  
  kV8XPathEvaluator_CreateNSResolver_Method = 855,
  
  kV8XPathEvaluator_Evaluate_Method = 856,
  
  kRequestMIDIAccess_ObscuredByFootprinting = 857,
  
  kV8MouseEvent_LayerX_AttributeGetter = 858,
  
  kV8MouseEvent_LayerY_AttributeGetter = 859,
  
  kInnerTextWithShadowTree = 860,
  
  kSelectionToStringWithShadowTree = 861,
  
  kWindowFindWithShadowTree = 862,
  
  kV8CompositionEvent_InitCompositionEvent_Method = 863,
  
  kV8CustomEvent_InitCustomEvent_Method = 864,
  
  kV8DeviceMotionEvent_InitDeviceMotionEvent_Method = 865,
  
  kV8DeviceOrientationEvent_InitDeviceOrientationEvent_Method = 866,
  
  kV8Event_InitEvent_Method = 867,
  
  kV8KeyboardEvent_InitKeyboardEvent_Method = 868,
  
  kV8MouseEvent_InitMouseEvent_Method = 869,
  
  kV8MutationEvent_InitMutationEvent_Method = 870,
  
  kV8StorageEvent_InitStorageEvent_Method = 871,
  
  kV8UIEvent_InitUIEvent_Method = 873,
  
  kRequestFileSystemNonWebbyOrigin = 876,
  
  kV8MemoryInfo_TotalJSHeapSize_AttributeGetter = 879,
  
  kV8MemoryInfo_UsedJSHeapSize_AttributeGetter = 880,
  
  kV8MemoryInfo_JSHeapSizeLimit_AttributeGetter = 881,
  
  kV8Performance_Timing_AttributeGetter = 882,
  
  kV8Performance_Navigation_AttributeGetter = 883,
  
  kV8Performance_Memory_AttributeGetter = 884,
  
  kV8SharedWorker_WorkerStart_AttributeGetter = 885,
  
  kHTMLMediaElementPreloadNone = 892,
  
  kHTMLMediaElementPreloadMetadata = 893,
  
  kHTMLMediaElementPreloadAuto = 894,
  
  kHTMLMediaElementPreloadDefault = 895,
  
  kMixedContentBlockableAllowed = 896,
  
  kPseudoBeforeAfterForInputElement = 897,
  
  kV8Permissions_Revoke_Method = 898,
  
  kLinkRelDnsPrefetch = 899,
  
  kLinkRelPreconnect = 900,
  
  kLinkRelPreload = 901,
  
  kLinkHeaderDnsPrefetch = 902,
  
  kLinkHeaderPreconnect = 903,
  
  kClientHintsMetaAcceptCH = 904,
  
  kHTMLElementDeprecatedWidth = 905,
  
  kClientHintsContentDPR = 906,
  
  kElementAttachShadowOpen = 907,
  
  kElementAttachShadowClosed = 908,
  
  kAudioParamSetValueAtTime = 909,
  
  kAudioParamLinearRampToValueAtTime = 910,
  
  kAudioParamExponentialRampToValueAtTime = 911,
  
  kAudioParamSetTargetAtTime = 912,
  
  kAudioParamSetValueCurveAtTime = 913,
  
  kAudioParamCancelScheduledValues = 914,
  
  kV8Permissions_Request_Method = 915,
  
  kLinkRelPrefetch = 917,
  
  kLinkRelPrerender = 918,
  
  kLinkRelNext = 919,
  
  kCSSValuePrefixedMinContent = 921,
  
  kCSSValuePrefixedMaxContent = 922,
  
  kCSSValuePrefixedFitContent = 923,
  
  kCSSValuePrefixedFillAvailable = 924,
  
  kPresentationDefaultRequest = 926,
  
  kPresentationAvailabilityChangeEventListener = 927,
  
  kPresentationRequestConstructor = 928,
  
  kPresentationRequestStart = 929,
  
  kPresentationRequestReconnect = 930,
  
  kPresentationRequestGetAvailability = 931,
  
  kPresentationRequestConnectionAvailableEventListener = 932,
  
  kPresentationConnectionTerminate = 933,
  
  kPresentationConnectionSend = 934,
  
  kPresentationConnectionMessageEventListener = 936,
  
  kCSSAnimationsStackedNeutralKeyframe = 937,
  
  kReadingCheckedInClickHandler = 938,
  
  kFlexboxIntrinsicSizeAlgorithmIsDifferent = 939,
  
  kHTMLImportsHasStyleSheets = 940,
  
  kNetInfoType = 946,
  
  kNetInfoDownlinkMax = 947,
  
  kNetInfoOnChange = 948,
  
  kNetInfoOnTypeChange = 949,
  
  kV8Window_Alert_Method = 950,
  
  kV8Window_Confirm_Method = 951,
  
  kV8Window_Prompt_Method = 952,
  
  kV8Window_Print_Method = 953,
  
  kV8Window_RequestIdleCallback_Method = 954,
  
  kFlexboxPercentagePaddingVertical = 955,
  
  kFlexboxPercentageMarginVertical = 956,
  
  kCSPSourceWildcardWouldMatchExactHost = 959,
  
  kCredentialManagerGet = 960,
  
  kCredentialManagerGetMediationOptional = 961,
  
  kCredentialManagerGetMediationSilent = 962,
  
  kCredentialManagerStore = 963,
  
  kBlockableMixedContentInSubframeBlocked = 966,
  
  kAddEventListenerThirdArgumentIsObject = 967,
  
  kRemoveEventListenerThirdArgumentIsObject = 968,
  
  kCSSAtRuleCharset = 969,
  
  kCSSAtRuleFontFace = 970,
  
  kCSSAtRuleImport = 971,
  
  kCSSAtRuleKeyframes = 972,
  
  kCSSAtRuleMedia = 973,
  
  kCSSAtRuleNamespace = 974,
  
  kCSSAtRulePage = 975,
  
  kCSSAtRuleSupports = 976,
  
  kCSSAtRuleViewport = 977,
  
  kCSSAtRuleWebkitKeyframes = 978,
  
  kV8HTMLFieldSetElement_Elements_AttributeGetter = 979,
  
  kExternalAddSearchProvider = 981,
  
  kExternalIsSearchProviderInstalled = 982,
  
  kV8Permissions_RequestAll_Method = 983,
  
  kDeviceOrientationAbsoluteInsecureOrigin = 987,
  
  kDeviceOrientationAbsoluteSecureOrigin = 988,
  
  kFontFaceConstructor = 989,
  
  kServiceWorkerControlledPage = 990,
  
  kMeterElementWithMeterAppearance = 993,
  
  kMeterElementWithNoneAppearance = 994,
  
  kSelectionAnchorNode = 997,
  
  kSelectionAnchorOffset = 998,
  
  kSelectionFocusNode = 999,
  
  kSelectionFocusOffset = 1000,
  
  kSelectionIsCollapsed = 1001,
  
  kSelectionRangeCount = 1002,
  
  kSelectionGetRangeAt = 1003,
  
  kSelectionAddRange = 1004,
  
  kSelectionRemoveAllRanges = 1005,
  
  kSelectionCollapse = 1006,
  
  kSelectionCollapseToStart = 1007,
  
  kSelectionCollapseToEnd = 1008,
  
  kSelectionExtend = 1009,
  
  kSelectionSelectAllChildren = 1010,
  
  kSelectionDeleteDromDocument = 1011,
  
  kSelectionDOMString = 1012,
  
  kInputTypeRangeVerticalAppearance = 1013,
  
  kCSSFilterReference = 1014,
  
  kCSSFilterGrayscale = 1015,
  
  kCSSFilterSepia = 1016,
  
  kCSSFilterSaturate = 1017,
  
  kCSSFilterHueRotate = 1018,
  
  kCSSFilterInvert = 1019,
  
  kCSSFilterOpacity = 1020,
  
  kCSSFilterBrightness = 1021,
  
  kCSSFilterContrast = 1022,
  
  kCSSFilterBlur = 1023,
  
  kCSSFilterDropShadow = 1024,
  
  kBackgroundSyncRegister = 1025,
  
  kExecCommandOnInputOrTextarea = 1027,
  
  kV8History_ScrollRestoration_AttributeGetter = 1028,
  
  kV8History_ScrollRestoration_AttributeSetter = 1029,
  
  kSVG1DOMFilter = 1030,
  
  kOfflineAudioContextStartRendering = 1031,
  
  kOfflineAudioContextSuspend = 1032,
  
  kOfflineAudioContextResume = 1033,
  
  kSVG1DOMPaintServer = 1035,
  
  kSVGSVGElementFragmentSVGView = 1036,
  
  kSVGSVGElementFragmentSVGViewElement = 1037,
  
  kPresentationConnectionClose = 1038,
  
  kSVG1DOMShape = 1039,
  
  kSVG1DOMText = 1040,
  
  kRTCPeerConnectionConstructorConstraints = 1041,
  
  kRTCPeerConnectionConstructorCompliant = 1042,
  
  kRTCPeerConnectionCreateOfferLegacyFailureCallback = 1044,
  
  kRTCPeerConnectionCreateOfferLegacyConstraints = 1045,
  
  kRTCPeerConnectionCreateOfferLegacyOfferOptions = 1046,
  
  kRTCPeerConnectionCreateOfferLegacyCompliant = 1047,
  
  kRTCPeerConnectionCreateAnswerLegacyFailureCallback = 1049,
  
  kRTCPeerConnectionCreateAnswerLegacyConstraints = 1050,
  
  kRTCPeerConnectionCreateAnswerLegacyCompliant = 1051,
  
  kRTCPeerConnectionSetLocalDescriptionLegacyNoSuccessCallback = 1052,
  
  kRTCPeerConnectionSetLocalDescriptionLegacyNoFailureCallback = 1053,
  
  kRTCPeerConnectionSetLocalDescriptionLegacyCompliant = 1054,
  
  kRTCPeerConnectionSetRemoteDescriptionLegacyNoSuccessCallback = 1055,
  
  kRTCPeerConnectionSetRemoteDescriptionLegacyNoFailureCallback = 1056,
  
  kRTCPeerConnectionSetRemoteDescriptionLegacyCompliant = 1057,
  
  kRTCPeerConnectionGetStatsLegacyNonCompliant = 1058,
  
  kNodeFilterIsFunction = 1059,
  
  kNodeFilterIsObject = 1060,
  
  kCSSSelectorInternalPseudoListBox = 1062,
  
  kCSSSelectorInternalMediaControlsOverlayCastButton = 1064,
  
  kCSSSelectorInternalPseudoSpatialNavigationFocus = 1065,
  
  kSameOriginTextScript = 1066,
  
  kSameOriginApplicationScript = 1067,
  
  kSameOriginOtherScript = 1068,
  
  kCrossOriginTextScript = 1069,
  
  kCrossOriginApplicationScript = 1070,
  
  kCrossOriginOtherScript = 1071,
  
  kSVG1DOMSVGTests = 1072,
  
  kDisableRemotePlaybackAttribute = 1074,
  
  kV8SloppyMode = 1075,
  
  kV8StrictMode = 1076,
  
  kV8StrongMode = 1077,
  
  kAudioNodeConnectToAudioNode = 1078,
  
  kAudioNodeConnectToAudioParam = 1079,
  
  kAudioNodeDisconnectFromAudioNode = 1080,
  
  kAudioNodeDisconnectFromAudioParam = 1081,
  
  kV8CSSFontFaceRule_Style_AttributeGetter = 1082,
  
  kSelectionCollapseNull = 1083,
  
  kSelectionSetBaseAndExtentNull = 1084,
  
  kV8SVGSVGElement_CreateSVGNumber_Method = 1085,
  
  kV8SVGSVGElement_CreateSVGLength_Method = 1086,
  
  kV8SVGSVGElement_CreateSVGAngle_Method = 1087,
  
  kV8SVGSVGElement_CreateSVGPoint_Method = 1088,
  
  kV8SVGSVGElement_CreateSVGMatrix_Method = 1089,
  
  kV8SVGSVGElement_CreateSVGRect_Method = 1090,
  
  kV8SVGSVGElement_CreateSVGTransform_Method = 1091,
  
  kV8SVGSVGElement_CreateSVGTransformFromMatrix_Method = 1092,
  
  kFormNameAccessForNonDescendantImageElement = 1093,
  
  kV8RegExpPrototypeStickyGetter = 1096,
  
  kV8RegExpPrototypeToString = 1097,
  
  kV8InputDeviceCapabilities_FiresTouchEvents_AttributeGetter = 1098,
  
  kDataElement = 1099,
  
  kTimeElement = 1100,
  
  kSVG1DOMUriReference = 1101,
  
  kSVG1DOMZoomAndPan = 1102,
  
  kV8SVGGraphicsElement_Transform_AttributeGetter = 1103,
  
  kMenuItemElement = 1104,
  
  kMenuItemCloseTag = 1105,
  
  kSVG1DOMMarkerElement = 1106,
  
  kSVG1DOMUseElement = 1107,
  
  kSVG1DOMMaskElement = 1108,
  
  kV8SVGAElement_Target_AttributeGetter = 1109,
  
  kV8SVGClipPathElement_ClipPathUnits_AttributeGetter = 1110,
  
  kSVG1DOMFitToViewBox = 1111,
  
  kSVG1DOMSVGElement = 1114,
  
  kSVG1DOMImageElement = 1115,
  
  kSVG1DOMForeignObjectElement = 1116,
  
  kAudioContextCreateIIRFilter = 1117,
  
  kCSSSelectorPseudoSlotted = 1118,
  
  kMediaDevicesEnumerateDevices = 1119,
  
  kEventComposedPath = 1123,
  
  kLinkHeaderPreload = 1124,
  
  kMouseWheelEvent = 1125,
  
  kWheelEvent = 1126,
  
  kMouseWheelAndWheelEvent = 1127,
  
  kBodyScrollsInAdditionToViewport = 1128,
  
  kDocumentDesignModeEnabeld = 1129,
  
  kContentEditableTrue = 1130,
  
  kContentEditableTrueOnHTML = 1131,
  
  kContentEditablePlainTextOnly = 1132,
  
  kV8RegExpPrototypeUnicodeGetter = 1133,
  
  kV8IntlV8Parse = 1134,
  
  kV8IntlPattern = 1135,
  
  kV8IntlResolved = 1136,
  
  kV8PromiseChain = 1137,
  
  kV8PromiseAccept = 1138,
  
  kV8PromiseDefer = 1139,
  
  kEventComposed = 1140,
  
  kGeolocationInsecureOriginIframe = 1141,
  
  kGeolocationSecureOriginIframe = 1142,
  
  kRequestMIDIAccessIframe_ObscuredByFootprinting = 1143,
  
  kGetUserMediaInsecureOriginIframe = 1144,
  
  kGetUserMediaSecureOriginIframe = 1145,
  
  kElementRequestPointerLockIframe = 1146,
  
  kNotificationAPIInsecureOriginIframe = 1147,
  
  kNotificationAPISecureOriginIframe = 1148,
  
  kWebSocket = 1149,
  
  kMediaStreamConstraintsNameValue = 1150,
  
  kMediaStreamConstraintsFromDictionary = 1151,
  
  kMediaStreamConstraintsConformant = 1152,
  
  kCSSSelectorIndirectAdjacent = 1153,
  
  kCreateImageBitmap = 1156,
  
  kPresentationConnectionConnectEventListener = 1157,
  
  kPresentationConnectionCloseEventListener = 1158,
  
  kPresentationConnectionTerminateEventListener = 1159,
  
  kDocumentCreateEventAnimationEvent = 1162,
  
  kDocumentCreateEventBeforeUnloadEvent = 1166,
  
  kDocumentCreateEventCompositionEvent = 1168,
  
  kDocumentCreateEventDragEvent = 1169,
  
  kDocumentCreateEventErrorEvent = 1170,
  
  kDocumentCreateEventFocusEvent = 1171,
  
  kDocumentCreateEventHashChangeEvent = 1172,
  
  kDocumentCreateEventMutationEvent = 1173,
  
  kDocumentCreateEventPageTransitionEvent = 1174,
  
  kDocumentCreateEventPopStateEvent = 1176,
  
  kDocumentCreateEventTextEvent = 1182,
  
  kDocumentCreateEventTransitionEvent = 1183,
  
  kDocumentCreateEventWheelEvent = 1184,
  
  kDocumentCreateEventTrackEvent = 1186,
  
  kDocumentCreateEventMutationEvents = 1188,
  
  kDocumentCreateEventSVGEvents = 1190,
  
  kDocumentCreateEventDeviceMotionEvent = 1195,
  
  kDocumentCreateEventDeviceOrientationEvent = 1196,
  
  kDocumentCreateEventIDBVersionChangeEvent = 1201,
  
  kDocumentCreateEventStorageEvent = 1221,
  
  kDocumentCreateEventWebGLContextEvent = 1224,
  
  kDocumentCreateEventCloseEvent = 1227,
  
  kDocumentCreateEventKeyboardEvents = 1228,
  
  kHTMLMediaElement = 1229,
  
  kHTMLMediaElementInDocument = 1230,
  
  kHTMLMediaElementControlsAttribute = 1231,
  
  kV8Animation_Oncancel_AttributeGetter = 1233,
  
  kV8Animation_Oncancel_AttributeSetter = 1234,
  
  kV8HTMLCommentInExternalScript = 1235,
  
  kV8HTMLComment = 1236,
  
  kV8SloppyModeBlockScopedFunctionRedefinition = 1237,
  
  kV8ForInInitializer = 1238,
  
  kV8Animation_Id_AttributeGetter = 1239,
  
  kV8Animation_Id_AttributeSetter = 1240,
  
  kApplicationCacheManifestSelectInsecureOrigin = 1245,
  
  kApplicationCacheManifestSelectSecureOrigin = 1246,
  
  kApplicationCacheAPIInsecureOrigin = 1247,
  
  kApplicationCacheAPISecureOrigin = 1248,
  
  kCSSAtRuleApply = 1249,
  
  kCSSSelectorPseudoAny = 1250,
  
  kHTMLLabelElementControlForNonFormAssociatedElement = 1263,
  
  kHTMLMediaElementLoadNetworkEmptyNotPaused = 1265,
  
  kV8Window_WebkitSpeechGrammar_ConstructorGetter = 1267,
  
  kV8Window_WebkitSpeechGrammarList_ConstructorGetter = 1268,
  
  kV8Window_WebkitSpeechRecognition_ConstructorGetter = 1269,
  
  kV8Window_WebkitSpeechRecognitionError_ConstructorGetter = 1270,
  
  kV8Window_WebkitSpeechRecognitionEvent_ConstructorGetter = 1271,
  
  kV8Window_SpeechSynthesis_AttributeGetter = 1272,
  
  kV8IDBFactory_WebkitGetDatabaseNames_Method = 1273,
  
  kScriptPassesCSPDynamic = 1275,
  
  kCSPWithStrictDynamic = 1277,
  
  kScrollAnchored = 1278,
  
  kAddEventListenerFourArguments = 1279,
  
  kRemoveEventListenerFourArguments = 1280,
  
  kSVGCalcModeDiscrete = 1287,
  
  kSVGCalcModeLinear = 1288,
  
  kSVGCalcModePaced = 1289,
  
  kSVGCalcModeSpline = 1290,
  
  kFormSubmissionStarted = 1291,
  
  kFormValidationStarted = 1292,
  
  kFormValidationAbortedSubmission = 1293,
  
  kFormValidationShowedMessage = 1294,
  
  kV8Document_Images_AttributeGetter = 1297,
  
  kV8Document_Embeds_AttributeGetter = 1298,
  
  kV8Document_Plugins_AttributeGetter = 1299,
  
  kV8Document_Links_AttributeGetter = 1300,
  
  kV8Document_Forms_AttributeGetter = 1301,
  
  kV8Document_Scripts_AttributeGetter = 1302,
  
  kV8Document_Anchors_AttributeGetter = 1303,
  
  kV8Document_Applets_AttributeGetter = 1304,
  
  kMediaStreamTrackRemote = 1306,
  
  kV8Node_IsConnected_AttributeGetter = 1307,
  
  kShadowRootDelegatesFocus = 1308,
  
  kMixedShadowRootV0AndV1 = 1309,
  
  kFileAPINativeLineEndings = 1320,
  
  kPointerEventAttributeCount = 1321,
  
  kCompositedReplication = 1322,
  
  kV8DataTransferItem_WebkitGetAsEntry_Method = 1325,
  
  kV8HTMLInputElement_WebkitEntries_AttributeGetter = 1326,
  
  kEntry_Filesystem_AttributeGetter_IsolatedFileSystem = 1327,
  
  kEntry_GetMetadata_Method_IsolatedFileSystem = 1328,
  
  kEntry_MoveTo_Method_IsolatedFileSystem = 1329,
  
  kEntry_CopyTo_Method_IsolatedFileSystem = 1330,
  
  kEntry_Remove_Method_IsolatedFileSystem = 1331,
  
  kEntry_GetParent_Method_IsolatedFileSystem = 1332,
  
  kEntry_ToURL_Method_IsolatedFileSystem = 1333,
  
  kDuring_Microtask_Alert = 1334,
  
  kDuring_Microtask_Confirm = 1335,
  
  kDuring_Microtask_Print = 1336,
  
  kDuring_Microtask_Prompt = 1337,
  
  kDuring_Microtask_SyncXHR = 1338,
  
  kCredentialManagerGetReturnedCredential = 1342,
  
  kGeolocationInsecureOriginDeprecatedNotRemoved = 1343,
  
  kGeolocationInsecureOriginIframeDeprecatedNotRemoved = 1344,
  
  kProgressElementWithNoneAppearance = 1345,
  
  kProgressElementWithProgressBarAppearance = 1346,
  
  kPointerEventAddListenerCount = 1347,
  
  kCSSValueAppearanceNone = 1351,
  
  kCSSValueAppearanceNotNone = 1352,
  
  kCSSValueAppearanceOthers = 1353,
  
  kCSSValueAppearanceButton = 1354,
  
  kCSSValueAppearanceCheckbox = 1356,
  
  kCSSValueAppearanceMenulist = 1357,
  
  kCSSValueAppearanceMenulistButton = 1358,
  
  kCSSValueAppearanceListbox = 1359,
  
  kCSSValueAppearanceRadio = 1360,
  
  kCSSValueAppearanceSearchField = 1361,
  
  kCSSValueAppearanceTextField = 1362,
  
  kAudioContextCreatePannerAutomated = 1363,
  
  kPannerNodeSetPosition = 1364,
  
  kPannerNodeSetOrientation = 1365,
  
  kAudioListenerSetPosition = 1366,
  
  kAudioListenerSetOrientation = 1367,
  
  kIntersectionObserver_Constructor = 1368,
  
  kDurableStoragePersist = 1369,
  
  kDurableStoragePersisted = 1370,
  
  kDurableStorageEstimate = 1371,
  
  kCSSDeepCombinatorAndShadow = 1375,
  
  kOpacityWithPreserve3DQuirk = 1376,
  
  kCSSSelectorPseudoReadOnly = 1377,
  
  kCSSSelectorPseudoReadWrite = 1378,
  
  kCSSSelectorPseudoDefined = 1383,
  
  kRTCPeerConnectionAddIceCandidatePromise = 1384,
  
  kRTCPeerConnectionAddIceCandidateLegacy = 1385,
  
  kRTCIceCandidateDefaultSdpMLineIndex = 1386,
  
  kMediaStreamConstraintsOldAndNew = 1389,
  
  kV8ArrayProtectorDirtied = 1390,
  
  kV8ArraySpeciesModified = 1391,
  
  kV8ArrayPrototypeConstructorModified = 1392,
  
  kV8ArrayInstanceProtoModified = 1393,
  
  kV8ArrayInstanceConstructorModified = 1394,
  
  kV8LegacyFunctionDeclaration = 1395,
  
  kV8RegExpPrototypeSourceGetter = 1396,
  
  kV8RegExpPrototypeOldFlagGetter = 1397,
  
  kV8DecimalWithLeadingZeroInStrictMode = 1398,
  
  kGetUserMediaPrefixed = 1400,
  
  kGetUserMediaLegacy = 1401,
  
  kGetUserMediaPromise = 1402,
  
  kCSSFilterFunctionNoArguments = 1403,
  
  kV8LegacyDateParser = 1404,
  
  kOpenSearchInsecureOriginInsecureTarget = 1405,
  
  kOpenSearchInsecureOriginSecureTarget = 1406,
  
  kOpenSearchSecureOriginInsecureTarget = 1407,
  
  kOpenSearchSecureOriginSecureTarget = 1408,
  
  kRegisterProtocolHandlerSecureOrigin = 1409,
  
  kRegisterProtocolHandlerInsecureOrigin = 1410,
  
  kCrossOriginWindowAlert = 1411,
  
  kCrossOriginWindowConfirm = 1412,
  
  kCrossOriginWindowPrompt = 1413,
  
  kCrossOriginWindowPrint = 1414,
  
  kMediaStreamOnActive = 1415,
  
  kMediaStreamOnInactive = 1416,
  
  kAddEventListenerPassiveTrue = 1417,
  
  kAddEventListenerPassiveFalse = 1418,
  
  kCSPReferrerDirective = 1419,
  
  kElementRequestPointerLockInShadow = 1421,
  
  kShadowRootPointerLockElement = 1422,
  
  kDocumentPointerLockElementInV0Shadow = 1423,
  
  kTextAreaMaxLength = 1424,
  
  kTextAreaMinLength = 1425,
  
  kTopNavigationFromSubFrame = 1426,
  
  kPrefixedElementRequestFullscreenInShadow = 1427,
  
  kMediaSourceAbortRemove = 1428,
  
  kMediaSourceDurationTruncatingBuffered = 1429,
  
  kAudioContextCrossOriginIframe = 1430,
  
  kPointerEventSetCapture = 1431,
  
  kPointerEventDispatch = 1432,
  
  kMIDIMessageEventReceivedTime = 1433,
  
  kSummaryElementWithDisplayBlockAuthorRule = 1434,
  
  kV8MediaStream_Active_AttributeGetter = 1435,
  
  kBeforeInstallPromptEvent = 1436,
  
  kBeforeInstallPromptEventUserChoice = 1437,
  
  kBeforeInstallPromptEventPreventDefault = 1438,
  
  kBeforeInstallPromptEventPrompt = 1439,
  
  kExecCommandAltersHTMLStructure = 1440,
  
  kSecureContextCheckPassed = 1441,
  
  kSecureContextCheckFailed = 1442,
  
  kSecureContextCheckForSandboxedOriginPassed = 1443,
  
  kSecureContextCheckForSandboxedOriginFailed = 1444,
  
  kV8DefineGetterOrSetterWouldThrow = 1445,
  
  kV8FunctionConstructorReturnedUndefined = 1446,
  
  kV8BroadcastChannel_Constructor = 1447,
  
  kV8BroadcastChannel_PostMessage_Method = 1448,
  
  kV8BroadcastChannel_Close_Method = 1449,
  
  kTouchStartFired = 1450,
  
  kMouseDownFired = 1451,
  
  kPointerDownFired = 1452,
  
  kPointerDownFiredForTouch = 1453,
  
  kPointerEventDispatchPointerDown = 1454,
  
  kSVGSMILBeginOrEndEventValue = 1455,
  
  kSVGSMILBeginOrEndSyncbaseValue = 1456,
  
  kSVGSMILElementInsertedAfterLoad = 1457,
  
  kV8VisualViewport_OffsetLeft_AttributeGetter = 1458,
  
  kV8VisualViewport_OffsetTop_AttributeGetter = 1459,
  
  kV8VisualViewport_PageLeft_AttributeGetter = 1460,
  
  kV8VisualViewport_PageTop_AttributeGetter = 1461,
  
  kV8VisualViewport_Width_AttributeGetter = 1462,
  
  kV8VisualViewport_Height_AttributeGetter = 1463,
  
  kV8VisualViewport_Scale_AttributeGetter = 1464,
  
  kVisualViewportScrollFired = 1465,
  
  kVisualViewportResizeFired = 1466,
  
  kNodeGetRootNode = 1467,
  
  kSlotChangeEventAddListener = 1468,
  
  kCSSValueAppearanceButtonForAnchor = 1470,
  
  kCSSValueAppearanceButtonForButton = 1471,
  
  kCSSValueAppearanceButtonForOtherButtons = 1472,
  
  kCSSValueAppearanceTextFieldRendered = 1473,
  
  kCSSValueAppearanceTextFieldForSearch = 1474,
  
  kCSSValueAppearanceTextFieldForTextField = 1475,
  
  kRTCPeerConnectionGetStats = 1476,
  
  kSVGSMILAnimationAppliedEffect = 1477,
  
  kPerformanceResourceTimingSizes = 1478,
  
  kEventSourceDocument = 1479,
  
  kEventSourceWorker = 1480,
  
  kSingleOriginInTimingAllowOrigin = 1481,
  
  kMultipleOriginsInTimingAllowOrigin = 1482,
  
  kStarInTimingAllowOrigin = 1483,
  
  kSVGSMILAdditiveAnimation = 1484,
  
  kSendBeaconWithNonSimpleContentType = 1485,
  
  kChromeLoadTimesRequestTime = 1486,
  
  kChromeLoadTimesStartLoadTime = 1487,
  
  kChromeLoadTimesCommitLoadTime = 1488,
  
  kChromeLoadTimesFinishDocumentLoadTime = 1489,
  
  kChromeLoadTimesFinishLoadTime = 1490,
  
  kChromeLoadTimesFirstPaintTime = 1491,
  
  kChromeLoadTimesFirstPaintAfterLoadTime = 1492,
  
  kChromeLoadTimesNavigationType = 1493,
  
  kChromeLoadTimesWasFetchedViaSpdy = 1494,
  
  kChromeLoadTimesWasNpnNegotiated = 1495,
  
  kChromeLoadTimesNpnNegotiatedProtocol = 1496,
  
  kChromeLoadTimesWasAlternateProtocolAvailable = 1497,
  
  kChromeLoadTimesConnectionInfo = 1498,
  
  kChromeLoadTimesUnknown = 1499,
  
  kSVGViewElement = 1500,
  
  kWebShareShare = 1501,
  
  kAuxclickAddListenerCount = 1502,
  
  kHTMLCanvasElement = 1503,
  
  kSVGSMILAnimationElementTiming = 1504,
  
  kSVGSMILBeginEndAnimationElement = 1505,
  
  kSVGSMILPausing = 1506,
  
  kSVGSMILCurrentTime = 1507,
  
  kHTMLBodyElementOnSelectionChangeAttribute = 1508,
  
  kUsbGetDevices = 1519,
  
  kUsbRequestDevice = 1520,
  
  kUsbDeviceOpen = 1521,
  
  kUsbDeviceClose = 1522,
  
  kUsbDeviceSelectConfiguration = 1523,
  
  kUsbDeviceClaimInterface = 1524,
  
  kUsbDeviceReleaseInterface = 1525,
  
  kUsbDeviceSelectAlternateInterface = 1526,
  
  kUsbDeviceControlTransferIn = 1527,
  
  kUsbDeviceControlTransferOut = 1528,
  
  kUsbDeviceClearHalt = 1529,
  
  kUsbDeviceTransferIn = 1530,
  
  kUsbDeviceTransferOut = 1531,
  
  kUsbDeviceIsochronousTransferIn = 1532,
  
  kUsbDeviceIsochronousTransferOut = 1533,
  
  kUsbDeviceReset = 1534,
  
  kPointerEnterLeaveFired = 1535,
  
  kPointerOverOutFired = 1536,
  
  kDraggableAttribute = 1539,
  
  kCleanScriptElementWithNonce = 1540,
  
  kPotentiallyInjectedScriptElementWithNonce = 1541,
  
  kPendingStylesheetAddedAfterBodyStarted = 1542,
  
  kUntrustedMouseDownEventDispatchedToSelect = 1543,
  
  kBlockedSniffingAudioToScript = 1544,
  
  kBlockedSniffingVideoToScript = 1545,
  
  kBlockedSniffingCSVToScript = 1546,
  
  kMetaSetCookie = 1547,
  
  kMetaRefresh = 1548,
  
  kMetaSetCookieWhenCSPBlocksInlineScript = 1549,
  
  kMetaRefreshWhenCSPBlocksInlineScript = 1550,
  
  kMiddleClickAutoscrollStart = 1551,
  
  kRTCPeerConnectionCreateOfferOptionsOfferToReceive = 1553,
  
  kDragAndDropScrollStart = 1554,
  
  kPresentationConnectionListConnectionAvailableEventListener = 1555,
  
  kWebAudioAutoplayCrossOriginIframe = 1556,
  
  kVRGetDisplays = 1558,
  
  kXSSAuditorBlockedScript = 1581,
  
  kXSSAuditorBlockedEntirePage = 1582,
  
  kXSSAuditorDisabled = 1583,
  
  kXSSAuditorEnabledFilter = 1584,
  
  kXSSAuditorEnabledBlock = 1585,
  
  kXSSAuditorInvalid = 1586,
  
  kTextInputEventOnInput = 1589,
  
  kTextInputEventOnTextArea = 1590,
  
  kTextInputEventOnContentEditable = 1591,
  
  kTextInputEventOnNotNode = 1592,
  
  kWebkitBeforeTextInsertedOnInput = 1593,
  
  kWebkitBeforeTextInsertedOnTextArea = 1594,
  
  kWebkitBeforeTextInsertedOnContentEditable = 1595,
  
  kWebkitBeforeTextInsertedOnNotNode = 1596,
  
  kWebkitEditableContentChangedOnInput = 1597,
  
  kWebkitEditableContentChangedOnTextArea = 1598,
  
  kWebkitEditableContentChangedOnContentEditable = 1599,
  
  kWebkitEditableContentChangedOnNotNode = 1600,
  
  kV8NavigatorUserMediaError_ConstraintName_AttributeGetter = 1601,
  
  kV8HTMLMediaElement_SrcObject_AttributeGetter = 1602,
  
  kV8HTMLMediaElement_SrcObject_AttributeSetter = 1603,
  
  kCreateObjectURLBlob = 1604,
  
  kCreateObjectURLMediaSource = 1605,
  
  kCreateObjectURLMediaStream = 1606,
  
  kLongTaskObserver = 1615,
  
  kCSSOffsetInEffect = 1617,
  
  kVRGetDisplaysInsecureOrigin = 1618,
  
  kVRRequestPresent = 1619,
  
  kVRRequestPresentInsecureOrigin = 1620,
  
  kVRDeprecatedFieldOfView = 1621,
  
  kVideoInCanvas = 1622,
  
  kHiddenAutoplayedVideoInCanvas = 1623,
  
  kOffscreenCanvas = 1624,
  
  kGamepadPose = 1625,
  
  kGamepadHand = 1626,
  
  kGamepadDisplayId = 1627,
  
  kGamepadButtonTouched = 1628,
  
  kGamepadPoseHasOrientation = 1629,
  
  kGamepadPoseHasPosition = 1630,
  
  kGamepadPosePosition = 1631,
  
  kGamepadPoseLinearVelocity = 1632,
  
  kGamepadPoseLinearAcceleration = 1633,
  
  kGamepadPoseOrientation = 1634,
  
  kGamepadPoseAngularVelocity = 1635,
  
  kGamepadPoseAngularAcceleration = 1636,
  
  kV8RTCDataChannel_MaxRetransmitTime_AttributeGetter = 1638,
  
  kV8RTCDataChannel_MaxRetransmits_AttributeGetter = 1639,
  
  kV8RTCDataChannel_Reliable_AttributeGetter = 1640,
  
  kV8RTCPeerConnection_AddStream_Method = 1641,
  
  kV8RTCPeerConnection_CreateDTMFSender_Method = 1642,
  
  kV8RTCPeerConnection_GetLocalStreams_Method = 1643,
  
  kV8RTCPeerConnection_GetRemoteStreams_Method = 1644,
  
  kV8RTCPeerConnection_RemoveStream_Method = 1646,
  
  kRTCPeerConnectionCreateDataChannelMaxRetransmitTime = 1648,
  
  kRTCPeerConnectionCreateDataChannelMaxRetransmits = 1649,
  
  kAudioContextCreateConstantSource = 1650,
  
  kWebAudioConstantSourceNode = 1651,
  
  kLoopbackEmbeddedInSecureContext = 1652,
  
  kLoopbackEmbeddedInNonSecureContext = 1653,
  
  kBlinkMacSystemFont = 1654,
  
  kRTCIceServerURL = 1656,
  
  kRTCIceServerURLs = 1657,
  
  kOffscreenCanvasTransferToImageBitmap2D = 1658,
  
  kOffscreenCanvasTransferToImageBitmapWebGL = 1659,
  
  kOffscreenCanvasCommit2D = 1660,
  
  kOffscreenCanvasCommitWebGL = 1661,
  
  kRTCConfigurationIceTransportPolicy = 1662,
  
  kRTCConfigurationIceTransports = 1664,
  
  kDocumentFullscreenElementInV0Shadow = 1665,
  
  kScriptWithCSPBypassingSchemeParserInserted = 1666,
  
  kScriptWithCSPBypassingSchemeNotParserInserted = 1667,
  
  kDocumentCreateElement2ndArgStringHandling = 1668,
  
  kV8MediaRecorder_Start_Method = 1669,
  
  kWebBluetoothRequestDevice = 1670,
  
  kUnitlessPerspectiveInPerspectiveProperty = 1671,
  
  kUnitlessPerspectiveInTransformProperty = 1672,
  
  kV8RTCSessionDescription_Type_AttributeGetter = 1673,
  
  kV8RTCSessionDescription_Type_AttributeSetter = 1674,
  
  kV8RTCSessionDescription_Sdp_AttributeGetter = 1675,
  
  kV8RTCSessionDescription_Sdp_AttributeSetter = 1676,
  
  kRTCSessionDescriptionInitNoType = 1677,
  
  kRTCSessionDescriptionInitNoSdp = 1678,
  
  kHTMLMediaElementPreloadForcedMetadata = 1679,
  
  kGenericSensorStart = 1680,
  
  kGenericSensorStop = 1681,
  
  kTouchEventPreventedNoTouchAction = 1682,
  
  kTouchEventPreventedForcedDocumentPassiveNoTouchAction = 1683,
  
  kV8Event_StopPropagation_Method = 1684,
  
  kV8Event_StopImmediatePropagation_Method = 1685,
  
  kImageCaptureConstructor = 1686,
  
  kV8Document_RootScroller_AttributeGetter = 1687,
  
  kV8Document_RootScroller_AttributeSetter = 1688,
  
  kCustomElementRegistryDefine = 1689,
  
  kLinkHeaderServiceWorker = 1690,
  
  kCSSFlexibleBox = 1692,
  
  kCSSGridLayout = 1693,
  
  kFullscreenAllowedByOrientationChange = 1696,
  
  kServiceWorkerRespondToNavigationRequestWithRedirectedResponse = 1697,
  
  kV8AudioContext_Constructor = 1698,
  
  kV8OfflineAudioContext_Constructor = 1699,
  
  kAppInstalledEventAddListener = 1700,
  
  kAudioContextGetOutputTimestamp = 1701,
  
  kV8MediaStreamAudioDestinationNode_Constructor = 1702,
  
  kV8AnalyserNode_Constructor = 1703,
  
  kV8AudioBuffer_Constructor = 1704,
  
  kV8AudioBufferSourceNode_Constructor = 1705,
  
  kV8AudioProcessingEvent_Constructor = 1706,
  
  kV8BiquadFilterNode_Constructor = 1707,
  
  kV8ChannelMergerNode_Constructor = 1708,
  
  kV8ChannelSplitterNode_Constructor = 1709,
  
  kV8ConstantSourceNode_Constructor = 1710,
  
  kV8ConvolverNode_Constructor = 1711,
  
  kV8DelayNode_Constructor = 1712,
  
  kV8DynamicsCompressorNode_Constructor = 1713,
  
  kV8GainNode_Constructor = 1714,
  
  kV8IIRFilterNode_Constructor = 1715,
  
  kV8MediaElementAudioSourceNode_Constructor = 1716,
  
  kV8MediaStreamAudioSourceNode_Constructor = 1717,
  
  kV8OfflineAudioCompletionEvent_Constructor = 1718,
  
  kV8OscillatorNode_Constructor = 1719,
  
  kV8PannerNode_Constructor = 1720,
  
  kV8PeriodicWave_Constructor = 1721,
  
  kV8StereoPannerNode_Constructor = 1722,
  
  kV8WaveShaperNode_Constructor = 1723,
  
  kV8Headers_GetAll_Method = 1724,
  
  kNavigatorVibrateEngagementNone = 1725,
  
  kNavigatorVibrateEngagementMinimal = 1726,
  
  kNavigatorVibrateEngagementLow = 1727,
  
  kNavigatorVibrateEngagementMedium = 1728,
  
  kNavigatorVibrateEngagementHigh = 1729,
  
  kNavigatorVibrateEngagementMax = 1730,
  
  kAlertEngagementNone = 1731,
  
  kAlertEngagementMinimal = 1732,
  
  kAlertEngagementLow = 1733,
  
  kAlertEngagementMedium = 1734,
  
  kAlertEngagementHigh = 1735,
  
  kAlertEngagementMax = 1736,
  
  kConfirmEngagementNone = 1737,
  
  kConfirmEngagementMinimal = 1738,
  
  kConfirmEngagementLow = 1739,
  
  kConfirmEngagementMedium = 1740,
  
  kConfirmEngagementHigh = 1741,
  
  kConfirmEngagementMax = 1742,
  
  kPromptEngagementNone = 1743,
  
  kPromptEngagementMinimal = 1744,
  
  kPromptEngagementLow = 1745,
  
  kPromptEngagementMedium = 1746,
  
  kPromptEngagementHigh = 1747,
  
  kPromptEngagementMax = 1748,
  
  kTopNavInSandbox = 1749,
  
  kTopNavInSandboxWithoutGesture = 1750,
  
  kTopNavInSandboxWithPerm = 1751,
  
  kTopNavInSandboxWithPermButNoGesture = 1752,
  
  kReferrerPolicyHeader = 1753,
  
  kHTMLAnchorElementReferrerPolicyAttribute = 1754,
  
  kHTMLIFrameElementReferrerPolicyAttribute = 1755,
  
  kHTMLImageElementReferrerPolicyAttribute = 1756,
  
  kHTMLLinkElementReferrerPolicyAttribute = 1757,
  
  kBaseElement = 1758,
  
  kBaseWithCrossOriginHref = 1759,
  
  kBaseWithDataHref = 1760,
  
  kBaseWithNewlinesInTarget = 1761,
  
  kBaseWithOpenBracketInTarget = 1762,
  
  kBaseWouldBeBlockedByDefaultSrc = 1763,
  
  kV8AssigmentExpressionLHSIsCallInSloppy = 1764,
  
  kV8AssigmentExpressionLHSIsCallInStrict = 1765,
  
  kV8PromiseConstructorReturnedUndefined = 1766,
  
  kFormSubmittedWithUnclosedFormControl = 1767,
  
  kScrollbarUseVerticalScrollbarButton = 1777,
  
  kScrollbarUseVerticalScrollbarThumb = 1778,
  
  kScrollbarUseVerticalScrollbarTrack = 1779,
  
  kScrollbarUseHorizontalScrollbarButton = 1780,
  
  kScrollbarUseHorizontalScrollbarThumb = 1781,
  
  kScrollbarUseHorizontalScrollbarTrack = 1782,
  
  kHTMLTableCellElementColspan = 1783,
  
  kHTMLTableCellElementColspanGreaterThan1000 = 1784,
  
  kHTMLTableCellElementColspanGreaterThan8190 = 1785,
  
  kSelectionAddRangeIntersect = 1786,
  
  kPostMessageFromInsecureToSecureToplevel = 1787,
  
  kV8MediaSession_Metadata_AttributeGetter = 1788,
  
  kV8MediaSession_Metadata_AttributeSetter = 1789,
  
  kV8MediaSession_PlaybackState_AttributeGetter = 1790,
  
  kV8MediaSession_PlaybackState_AttributeSetter = 1791,
  
  kV8MediaSession_SetActionHandler_Method = 1792,
  
  kWebNFCPush = 1793,
  
  kWebNFCCancelPush = 1794,
  
  kWebNFCWatch = 1795,
  
  kWebNFCCancelWatch = 1796,
  
  kAudioParamCancelAndHoldAtTime = 1797,
  
  kCSSValueUserModifyReadOnly = 1798,
  
  kCSSValueUserModifyReadWrite = 1799,
  
  kCSSValueUserModifyReadWritePlaintextOnly = 1800,
  
  kCSSValueOnDemand = 1802,
  
  kServiceWorkerNavigationPreload = 1803,
  
  kFullscreenRequestWithPendingElement = 1804,
  
  kHTMLIFrameElementAllowfullscreenAttributeSetAfterContentLoad = 1805,
  
  kPointerEventSetCaptureOutsideDispatch = 1806,
  
  kNotificationPermissionRequestedInsecureOrigin = 1807,
  
  kV8DeprecatedStorageInfo_QueryUsageAndQuota_Method = 1808,
  
  kV8DeprecatedStorageInfo_RequestQuota_Method = 1809,
  
  kV8DeprecatedStorageQuota_QueryUsageAndQuota_Method = 1810,
  
  kV8DeprecatedStorageQuota_RequestQuota_Method = 1811,
  
  kV8FileReaderSync_Constructor = 1812,
  
  kV8HTMLVideoElement_Poster_AttributeGetter = 1815,
  
  kV8HTMLVideoElement_Poster_AttributeSetter = 1816,
  
  kNotificationPermissionRequestedIframe = 1817,
  
  kPresentationReceiverInsecureOrigin = 1819,
  
  kPresentationReceiverSecureOrigin = 1820,
  
  kPresentationRequestInsecureOrigin = 1821,
  
  kPresentationRequestSecureOrigin = 1822,
  
  kRtcpMuxPolicyNegotiate = 1823,
  
  kDOMClobberedVariableAccessed = 1824,
  
  kHTMLDocumentCreateProcessingInstruction = 1825,
  
  kFetchResponseConstructionWithStream = 1826,
  
  kLocationOrigin = 1827,
  
  kCanvas2DFilter = 1830,
  
  kCanvas2DImageSmoothingQuality = 1831,
  
  kCanvasToBlob = 1832,
  
  kCanvasToDataURL = 1833,
  
  kOffscreenCanvasConvertToBlob = 1834,
  
  kSVGInCanvas2D = 1835,
  
  kSVGInWebGL = 1836,
  
  kSelectionFuncionsChangeFocus = 1837,
  
  kHTMLObjectElementGetter = 1838,
  
  kHTMLObjectElementSetter = 1839,
  
  kHTMLEmbedElementGetter = 1840,
  
  kHTMLEmbedElementSetter = 1841,
  
  kTransformUsesBoxSizeOnSVG = 1842,
  
  kScrollByKeyboardArrowKeys = 1843,
  
  kScrollByKeyboardPageUpDownKeys = 1844,
  
  kScrollByKeyboardHomeEndKeys = 1845,
  
  kScrollByKeyboardSpacebarKey = 1846,
  
  kScrollByTouch = 1847,
  
  kScrollByWheel = 1848,
  
  kScheduledActionIgnored = 1849,
  
  kGetCanvas2DContextAttributes = 1850,
  
  kV8HTMLInputElement_Capture_AttributeGetter = 1851,
  
  kV8HTMLInputElement_Capture_AttributeSetter = 1852,
  
  kHTMLMediaElementControlsListAttribute = 1853,
  
  kHTMLMediaElementControlsListNoDownload = 1854,
  
  kHTMLMediaElementControlsListNoFullscreen = 1855,
  
  kHTMLMediaElementControlsListNoRemotePlayback = 1856,
  
  kPointerEventClickRetargetCausedByCapture = 1857,
  
  kVRDisplayDisplayName = 1861,
  
  kVREyeParametersOffset = 1862,
  
  kVRPoseLinearVelocity = 1863,
  
  kVRPoseLinearAcceleration = 1864,
  
  kVRPoseAngularVelocity = 1865,
  
  kVRPoseAngularAcceleration = 1866,
  
  kCSSOverflowPaged = 1867,
  
  kChildSrcAllowedWorkerThatScriptSrcBlocked = 1868,
  
  kHTMLTableElementPresentationAttributeBackground = 1869,
  
  kV8Navigator_GetInstalledRelatedApps_Method = 1870,
  
  kNamedAccessOnWindow_ChildBrowsingContext = 1871,
  
  kNamedAccessOnWindow_ChildBrowsingContext_CrossOriginNameMismatch = 1872,
  
  kV0CustomElementsRegisterHTMLCustomTag = 1873,
  
  kV0CustomElementsRegisterHTMLTypeExtension = 1874,
  
  kV0CustomElementsRegisterSVGElement = 1875,
  
  kV0CustomElementsCreateCustomTagElement = 1877,
  
  kV0CustomElementsCreateTypeExtensionElement = 1878,
  
  kV0CustomElementsConstruct = 1879,
  
  kV8IDBObserver_Observe_Method = 1880,
  
  kV8IDBObserver_Unobserve_Method = 1881,
  
  kWebBluetoothRemoteCharacteristicGetDescriptor = 1882,
  
  kWebBluetoothRemoteCharacteristicGetDescriptors = 1883,
  
  kWebBluetoothRemoteCharacteristicReadValue = 1884,
  
  kWebBluetoothRemoteCharacteristicWriteValue = 1885,
  
  kWebBluetoothRemoteCharacteristicStartNotifications = 1886,
  
  kWebBluetoothRemoteCharacteristicStopNotifications = 1887,
  
  kWebBluetoothRemoteDescriptorReadValue = 1888,
  
  kWebBluetoothRemoteDescriptorWriteValue = 1889,
  
  kWebBluetoothRemoteServerConnect = 1890,
  
  kWebBluetoothRemoteServerDisconnect = 1891,
  
  kWebBluetoothRemoteServerGetPrimaryService = 1892,
  
  kWebBluetoothRemoteServerGetPrimaryServices = 1893,
  
  kWebBluetoothRemoteServiceGetCharacteristic = 1894,
  
  kWebBluetoothRemoteServiceGetCharacteristics = 1895,
  
  kHTMLContentElement = 1896,
  
  kHTMLShadowElement = 1897,
  
  kHTMLSlotElement = 1898,
  
  kAccelerometerConstructor = 1899,
  
  kAbsoluteOrientationSensorConstructor = 1900,
  
  kAmbientLightSensorConstructor = 1901,
  
  kGenericSensorOnActivate = 1902,
  
  kGenericSensorOnChange = 1903,
  
  kGenericSensorOnError = 1904,
  
  kGenericSensorActivated = 1905,
  
  kGyroscopeConstructor = 1906,
  
  kMagnetometerConstructor = 1907,
  
  kOrientationSensorPopulateMatrix = 1908,
  
  kWindowOpenWithInvalidURL = 1909,
  
  kCrossOriginMainFrameNulledNameAccessed = 1910,
  
  kMenuItemElementIconAttribute = 1911,
  
  kWebkitCSSMatrixSetMatrixValue = 1912,
  
  kWebkitCSSMatrixConstructFromString = 1913,
  
  kCanRequestURLHTTPContainingNewline = 1914,
  
  kGetGamepads = 1916,
  
  kMediaStreamConstraintsAudio = 1918,
  
  kMediaStreamConstraintsAudioUnconstrained = 1919,
  
  kMediaStreamConstraintsVideo = 1920,
  
  kMediaStreamConstraintsVideoUnconstrained = 1921,
  
  kMediaStreamConstraintsWidth = 1922,
  
  kMediaStreamConstraintsHeight = 1923,
  
  kMediaStreamConstraintsAspectRatio = 1924,
  
  kMediaStreamConstraintsFrameRate = 1925,
  
  kMediaStreamConstraintsFacingMode = 1926,
  
  kMediaStreamConstraintsVolume = 1927,
  
  kMediaStreamConstraintsSampleRate = 1928,
  
  kMediaStreamConstraintsSampleSize = 1929,
  
  kMediaStreamConstraintsEchoCancellation = 1930,
  
  kMediaStreamConstraintsLatency = 1931,
  
  kMediaStreamConstraintsChannelCount = 1932,
  
  kMediaStreamConstraintsDeviceIdAudio = 1933,
  
  kMediaStreamConstraintsDeviceIdVideo = 1934,
  
  kMediaStreamConstraintsDisableLocalEcho = 1935,
  
  kMediaStreamConstraintsGroupIdAudio = 1936,
  
  kMediaStreamConstraintsGroupIdVideo = 1937,
  
  kMediaStreamConstraintsVideoKind = 1938,
  
  kMediaStreamConstraintsMediaStreamSourceAudio = 1943,
  
  kMediaStreamConstraintsMediaStreamSourceVideo = 1944,
  
  kMediaStreamConstraintsRenderToAssociatedSink = 1945,
  
  kMediaStreamConstraintsHotwordEnabled = 1946,
  
  kMediaStreamConstraintsGoogEchoCancellation = 1947,
  
  kMediaStreamConstraintsGoogExperimentalEchoCancellation = 1948,
  
  kMediaStreamConstraintsGoogAutoGainControl = 1949,
  
  kMediaStreamConstraintsGoogExperimentalAutoGainControl = 1950,
  
  kMediaStreamConstraintsGoogNoiseSuppression = 1951,
  
  kMediaStreamConstraintsGoogHighpassFilter = 1952,
  
  kMediaStreamConstraintsGoogTypingNoiseDetection = 1953,
  
  kMediaStreamConstraintsGoogExperimentalNoiseSuppression = 1954,
  
  kMediaStreamConstraintsGoogBeamforming = 1955,
  
  kMediaStreamConstraintsGoogArrayGeometry = 1956,
  
  kMediaStreamConstraintsGoogAudioMirroring = 1957,
  
  kMediaStreamConstraintsGoogDAEchoCancellation = 1958,
  
  kMediaStreamConstraintsGoogNoiseReduction = 1959,
  
  kViewportFixedPositionUnderFilter = 1961,
  
  kRequestMIDIAccessWithSysExOption_ObscuredByFootprinting = 1962,
  
  kRequestMIDIAccessIframeWithSysExOption_ObscuredByFootprinting = 1963,
  
  kGamepadAxes = 1964,
  
  kGamepadButtons = 1965,
  
  kDispatchMouseEventOnDisabledFormControl = 1967,
  
  kElementNameDOMInvalidHTMLParserValid = 1968,
  
  kElementNameDOMValidHTMLParserInvalid = 1969,
  
  kGATTServerDisconnectedEvent = 1970,
  
  kAnchorClickDispatchForNonConnectedNode = 1971,
  
  kHTMLParseErrorNestedForm = 1972,
  
  kFontShapingNotDefGlyphObserved = 1973,
  
  kPostMessageOutgoingWouldBeBlockedByConnectSrc = 1974,
  
  kPostMessageIncomingWouldBeBlockedByConnectSrc = 1975,
  
  kPaymentRequestNetworkNameInSupportedMethods = 1976,
  
  kCrossOriginPropertyAccess = 1977,
  
  kCrossOriginPropertyAccessFromOpener = 1978,
  
  kCredentialManagerCreate = 1979,
  
  kFieldEditInSecureContext = 1981,
  
  kFieldEditInNonSecureContext = 1982,
  
  kCredentialManagerGetMediationRequired = 1984,
  
  kNetInfoRtt = 1989,
  
  kNetInfoDownlink = 1990,
  
  kShapeDetection_BarcodeDetectorConstructor = 1991,
  
  kShapeDetection_FaceDetectorConstructor = 1992,
  
  kShapeDetection_TextDetectorConstructor = 1993,
  
  kInertAttribute = 1995,
  
  kPluginInstanceAccessFromIsolatedWorld = 1996,
  
  kPluginInstanceAccessFromMainWorld = 1997,
  
  kShowModalForElementInFullscreenStack = 2000,
  
  kThreeValuedPositionBackground = 2001,
  
  kUnitlessZeroAngleFilter = 2007,
  
  kUnitlessZeroAngleGradient = 2008,
  
  kUnitlessZeroAngleTransform = 2010,
  
  kCredentialManagerPreventSilentAccess = 2012,
  
  kNetInfoEffectiveType = 2013,
  
  kV8SpeechRecognition_Start_Method = 2014,
  
  kTableRowDirectionDifferentFromTable = 2015,
  
  kTableSectionDirectionDifferentFromTable = 2016,
  
  kClientHintsDeviceMemory = 2017,
  
  kCSSRegisterProperty = 2018,
  
  kRelativeOrientationSensorConstructor = 2019,
  
  kSmoothScrollJSInterventionActivated = 2020,
  
  kBudgetAPIGetCost = 2021,
  
  kBudgetAPIGetBudget = 2022,
  
  kCrossOriginMainFrameNulledNonEmptyNameAccessed = 2023,
  
  kDocumentDomainSetWithNonDefaultPort = 2025,
  
  kDocumentDomainSetWithDefaultPort = 2026,
  
  kFeaturePolicyHeader = 2027,
  
  kFeaturePolicyAllowAttribute = 2028,
  
  kMIDIPortOpen = 2029,
  
  kMIDIOutputSend = 2030,
  
  kMIDIMessageEvent = 2031,
  
  kFetchEventIsReload = 2032,
  
  kServiceWorkerClientFrameType = 2033,
  
  kQuirksModeDocument = 2034,
  
  kLimitedQuirksModeDocument = 2035,
  
  kEncryptedMediaCrossOriginIframe = 2036,
  
  kCSSSelectorWebkitMediaControls = 2037,
  
  kCSSSelectorWebkitMediaControlsOverlayEnclosure = 2038,
  
  kCSSSelectorWebkitMediaControlsOverlayPlayButton = 2039,
  
  kCSSSelectorWebkitMediaControlsEnclosure = 2040,
  
  kCSSSelectorWebkitMediaControlsPanel = 2041,
  
  kCSSSelectorWebkitMediaControlsPlayButton = 2042,
  
  kCSSSelectorWebkitMediaControlsCurrentTimeDisplay = 2043,
  
  kCSSSelectorWebkitMediaControlsTimeRemainingDisplay = 2044,
  
  kCSSSelectorWebkitMediaControlsTimeline = 2045,
  
  kCSSSelectorWebkitMediaControlsTimelineContainer = 2046,
  
  kCSSSelectorWebkitMediaControlsMuteButton = 2047,
  
  kCSSSelectorWebkitMediaControlsVolumeSlider = 2048,
  
  kCSSSelectorWebkitMediaControlsFullscreenButton = 2049,
  
  kCSSSelectorWebkitMediaControlsToggleClosedCaptionsButton = 2050,
  
  kLinearAccelerationSensorConstructor = 2051,
  
  kReportUriMultipleEndpoints = 2052,
  
  kReportUriSingleEndpoint = 2053,
  
  kV8ConstructorNonUndefinedPrimitiveReturn = 2054,
  
  kMediaSourceKeyframeTimeGreaterThanDependant = 2060,
  
  kMediaSourceMuxedSequenceMode = 2061,
  
  kPrepareModuleScript = 2062,
  
  kPresentationRequestStartSecureOrigin = 2063,
  
  kPresentationRequestStartInsecureOrigin = 2064,
  
  kPersistentClientHintHeader = 2065,
  
  kStyleSheetListNonNullAnonymousNamedGetter = 2066,
  
  kOffMainThreadFetch = 2067,
  
  kARIAActiveDescendantAttribute = 2069,
  
  kARIAAtomicAttribute = 2070,
  
  kARIAAutocompleteAttribute = 2071,
  
  kARIABusyAttribute = 2072,
  
  kARIACheckedAttribute = 2073,
  
  kARIAColCountAttribute = 2074,
  
  kARIAColIndexAttribute = 2075,
  
  kARIAColSpanAttribute = 2076,
  
  kARIAControlsAttribute = 2077,
  
  kARIACurrentAttribute = 2078,
  
  kARIADescribedByAttribute = 2079,
  
  kARIADetailsAttribute = 2080,
  
  kARIADisabledAttribute = 2081,
  
  kARIADropEffectAttribute = 2082,
  
  kARIAErrorMessageAttribute = 2083,
  
  kARIAExpandedAttribute = 2084,
  
  kARIAFlowToAttribute = 2085,
  
  kARIAGrabbedAttribute = 2086,
  
  kARIAHasPopupAttribute = 2087,
  
  kARIAHelpAttribute = 2088,
  
  kARIAHiddenAttribute = 2089,
  
  kARIAInvalidAttribute = 2090,
  
  kARIAKeyShortcutsAttribute = 2091,
  
  kARIALabelAttribute = 2092,
  
  kARIALabeledByAttribute = 2093,
  
  kARIALabelledByAttribute = 2094,
  
  kARIALevelAttribute = 2095,
  
  kARIALiveAttribute = 2096,
  
  kARIAModalAttribute = 2097,
  
  kARIAMultilineAttribute = 2098,
  
  kARIAMultiselectableAttribute = 2099,
  
  kARIAOrientationAttribute = 2100,
  
  kARIAOwnsAttribute = 2101,
  
  kARIAPlaceholderAttribute = 2102,
  
  kARIAPosInSetAttribute = 2103,
  
  kARIAPressedAttribute = 2104,
  
  kARIAReadOnlyAttribute = 2105,
  
  kARIARelevantAttribute = 2106,
  
  kARIARequiredAttribute = 2107,
  
  kARIARoleDescriptionAttribute = 2108,
  
  kARIARowCountAttribute = 2109,
  
  kARIARowIndexAttribute = 2110,
  
  kARIARowSpanAttribute = 2111,
  
  kARIASelectedAttribute = 2112,
  
  kARIASetSizeAttribute = 2113,
  
  kARIASortAttribute = 2114,
  
  kARIAValueMaxAttribute = 2115,
  
  kARIAValueMinAttribute = 2116,
  
  kARIAValueNowAttribute = 2117,
  
  kARIAValueTextAttribute = 2118,
  
  kV8LabeledExpressionStatement = 2119,
  
  kNavigatorDeviceMemory = 2121,
  
  kFixedWidthTableDistributionChanged = 2122,
  
  kWebkitBoxLayout = 2123,
  
  kWebkitBoxLayoutHorizontal = 2124,
  
  kWebkitBoxLayoutVertical = 2125,
  
  kWebkitBoxAlignNotInitial = 2126,
  
  kWebkitBoxDirectionNotInitial = 2127,
  
  kWebkitBoxLinesNotInitial = 2128,
  
  kWebkitBoxPackNotInitial = 2129,
  
  kWebkitBoxChildFlexNotInitial = 2130,
  
  kWebkitBoxChildFlexGroupNotInitial = 2131,
  
  kWebkitBoxChildOrdinalGroupNotInitial = 2132,
  
  kWebkitBoxNotDefaultOrder = 2133,
  
  kWebkitBoxNoChildren = 2134,
  
  kWebkitBoxOneChild = 2135,
  
  kWebkitBoxOneChildIsLayoutBlockFlowInline = 2136,
  
  kWebkitBoxManyChildren = 2137,
  
  kWebkitBoxLineClamp = 2138,
  
  kWebkitBoxLineClampPercentage = 2139,
  
  kWebkitBoxLineClampNoChildren = 2140,
  
  kWebkitBoxLineClampOneChild = 2141,
  
  kWebkitBoxLineClampOneChildIsLayoutBlockFlowInline = 2142,
  
  kWebkitBoxLineClampManyChildren = 2143,
  
  kWebkitBoxLineClampDoesSomething = 2144,
  
  kFeaturePolicyAllowAttributeDeprecatedSyntax = 2145,
  
  kSuppressHistoryEntryWithoutUserGesture = 2146,
  
  kPerformanceServerTiming = 2157,
  
  kFileReaderResultBeforeCompletion = 2158,
  
  kSyncXhrInPageDismissal = 2159,
  
  kAsyncXhrInPageDismissal = 2160,
  
  kAnimationSetPlaybackRateCompensatorySeek = 2162,
  
  kDeepCombinatorInStaticProfile = 2163,
  
  kPseudoShadowInStaticProfile = 2164,
  
  kSchemeBypassesCSP = 2165,
  
  kInnerSchemeBypassesCSP = 2166,
  
  kSameOriginApplicationOctetStream = 2167,
  
  kSameOriginApplicationXml = 2168,
  
  kSameOriginTextHtml = 2169,
  
  kSameOriginTextPlain = 2170,
  
  kSameOriginTextXml = 2171,
  
  kCrossOriginApplicationOctetStream = 2172,
  
  kCrossOriginApplicationXml = 2173,
  
  kCrossOriginTextHtml = 2174,
  
  kCrossOriginTextPlain = 2175,
  
  kCrossOriginTextXml = 2176,
  
  kSameOriginWorkerApplicationOctetStream = 2177,
  
  kSameOriginWorkerApplicationXml = 2178,
  
  kSameOriginWorkerTextHtml = 2179,
  
  kSameOriginWorkerTextPlain = 2180,
  
  kSameOriginWorkerTextXml = 2181,
  
  kCrossOriginWorkerApplicationOctetStream = 2182,
  
  kCrossOriginWorkerApplicationXml = 2183,
  
  kCrossOriginWorkerTextHtml = 2184,
  
  kCrossOriginWorkerTextPlain = 2185,
  
  kCrossOriginWorkerTextXml = 2186,
  
  kPerformanceObserverForWindow = 2188,
  
  kPerformanceObserverForWorker = 2189,
  
  kPaintTimingObserved = 2190,
  
  kPaintTimingRequested = 2191,
  
  kHTMLMediaElementMediaPlaybackRateOutOfRange = 2192,
  
  kCookieSet = 2194,
  
  kCookieGet = 2195,
  
  kGeolocationDisabledByFeaturePolicy = 2196,
  
  kEncryptedMediaDisabledByFeaturePolicy = 2197,
  
  kBatteryStatusGetBattery = 2198,
  
  kBatteryStatusInsecureOrigin = 2199,
  
  kBatteryStatusCrossOrigin = 2200,
  
  kBatteryStatusSameOriginABA = 2201,
  
  kHasIDClassTagAttribute = 2203,
  
  kHasBeforeOrAfterPseudoElement = 2204,
  
  kShapeOutsideMaybeAffectedInlineSize = 2205,
  
  kShapeOutsideMaybeAffectedInlinePosition = 2206,
  
  kGamepadVibrationActuator = 2207,
  
  kMicrophoneDisabledByFeaturePolicyEstimate = 2208,
  
  kCameraDisabledByFeaturePolicyEstimate = 2209,
  
  kMidiDisabledByFeaturePolicy = 2210,
  
  kGeolocationGetCurrentPosition = 2214,
  
  kGeolocationWatchPosition = 2215,
  
  kDataUriHasOctothorpe = 2216,
  
  kNetInfoSaveData = 2217,
  
  kV8Element_GetClientRects_Method = 2218,
  
  kV8Element_GetBoundingClientRect_Method = 2219,
  
  kV8Range_GetClientRects_Method = 2220,
  
  kV8Range_GetBoundingClientRect_Method = 2221,
  
  kV8ErrorCaptureStackTrace = 2222,
  
  kV8ErrorPrepareStackTrace = 2223,
  
  kV8ErrorStackTraceLimit = 2224,
  
  kPaintWorklet = 2225,
  
  kDocumentPageHideRegistered = 2226,
  
  kDocumentPageHideFired = 2227,
  
  kDocumentPageShowRegistered = 2228,
  
  kDocumentPageShowFired = 2229,
  
  kReplaceCharsetInXHR = 2230,
  
  kLinkRelModulePreload = 2232,
  
  kCSPWithUnsafeEval = 2236,
  
  kWebAssemblyInstantiation = 2237,
  
  kV8IndexAccessor = 2238,
  
  kV8MediaCapabilities_DecodingInfo_Method = 2239,
  
  kV8MediaCapabilities_EncodingInfo_Method = 2240,
  
  kV8MediaCapabilitiesInfo_Supported_AttributeGetter = 2241,
  
  kV8MediaCapabilitiesInfo_Smooth_AttributeGetter = 2242,
  
  kV8MediaCapabilitiesInfo_PowerEfficient_AttributeGetter = 2243,
  
  kWindowEventInV0ShadowTree = 2244,
  
  kWindowOpenRealmMismatch = 2247,
  
  kGridRowTrackPercentIndefiniteHeight = 2248,
  
  kVRGetDisplaysSupportsPresent = 2249,
  
  kDuplicatedAttribute = 2250,
  
  kDuplicatedAttributeForExecutedScript = 2251,
  
  kV8RTCPeerConnection_GetSenders_Method = 2252,
  
  kV8RTCPeerConnection_GetReceivers_Method = 2253,
  
  kV8RTCPeerConnection_AddTrack_Method = 2254,
  
  kV8RTCPeerConnection_RemoveTrack_Method = 2255,
  
  kLocalCSSFile = 2256,
  
  kLocalCSSFileExtensionRejected = 2257,
  
  kUserMediaDisableHardwareNoiseSuppression = 2258,
  
  kCertificateTransparencyRequiredErrorOnResourceLoad = 2259,
  
  kCSSSelectorPseudoWebkitAnyLink = 2260,
  
  kAudioWorkletAddModule = 2261,
  
  kAudioWorkletGlobalScopeRegisterProcessor = 2262,
  
  kAudioWorkletNodeConstructor = 2263,
  
  kHTMLMediaElementEmptyLoadWithFutureData = 2264,
  
  kCSSValueDisplayContents = 2265,
  
  kCSSSelectorPseudoAnyLink = 2266,
  
  kFileAccessedCache = 2267,
  
  kFileAccessedCookies = 2268,
  
  kFileAccessedDatabase = 2269,
  
  kFileAccessedFileSystem = 2270,
  
  kFileAccessedLocalStorage = 2271,
  
  kFileAccessedLocks = 2272,
  
  kFileAccessedServiceWorker = 2273,
  
  kFileAccessedSessionStorage = 2274,
  
  kFileAccessedSharedWorker = 2275,
  
  kV8MediaKeys_GetStatusForPolicy_Method = 2276,
  
  kV8DeoptimizerDisableSpeculation = 2277,
  
  kCSSSelectorCue = 2278,
  
  kCSSSelectorWebkitCalendarPickerIndicator = 2279,
  
  kCSSSelectorWebkitClearButton = 2280,
  
  kCSSSelectorWebkitColorSwatch = 2281,
  
  kCSSSelectorWebkitColorSwatchWrapper = 2282,
  
  kCSSSelectorWebkitDateAndTimeValue = 2283,
  
  kCSSSelectorWebkitDatetimeEdit = 2284,
  
  kCSSSelectorWebkitDatetimeEditAmpmField = 2285,
  
  kCSSSelectorWebkitDatetimeEditDayField = 2286,
  
  kCSSSelectorWebkitDatetimeEditFieldsWrapper = 2287,
  
  kCSSSelectorWebkitDatetimeEditHourField = 2288,
  
  kCSSSelectorWebkitDatetimeEditMillisecondField = 2289,
  
  kCSSSelectorWebkitDatetimeEditMinuteField = 2290,
  
  kCSSSelectorWebkitDatetimeEditMonthField = 2291,
  
  kCSSSelectorWebkitDatetimeEditSecondField = 2292,
  
  kCSSSelectorWebkitDatetimeEditText = 2293,
  
  kCSSSelectorWebkitDatetimeEditWeekField = 2294,
  
  kCSSSelectorWebkitDatetimeEditYearField = 2295,
  
  kCSSSelectorWebkitDetailsMarker = 2296,
  
  kCSSSelectorWebkitFileUploadButton = 2297,
  
  kCSSSelectorWebkitInnerSpinButton = 2298,
  
  kCSSSelectorWebkitInputPlaceholder = 2299,
  
  kCSSSelectorWebkitMediaSliderContainer = 2300,
  
  kCSSSelectorWebkitMediaSliderThumb = 2301,
  
  kCSSSelectorWebkitMediaTextTrackContainer = 2302,
  
  kCSSSelectorWebkitMediaTextTrackDisplay = 2303,
  
  kCSSSelectorWebkitMediaTextTrackRegion = 2304,
  
  kCSSSelectorWebkitMediaTextTrackRegionContainer = 2305,
  
  kCSSSelectorWebkitMeterBar = 2306,
  
  kCSSSelectorWebkitMeterEvenLessGoodValue = 2307,
  
  kCSSSelectorWebkitMeterInnerElement = 2308,
  
  kCSSSelectorWebkitMeterOptimumValue = 2309,
  
  kCSSSelectorWebkitMeterSuboptimumValue = 2310,
  
  kCSSSelectorWebkitProgressBar = 2311,
  
  kCSSSelectorWebkitProgressInnerElement = 2312,
  
  kCSSSelectorWebkitProgressValue = 2313,
  
  kCSSSelectorWebkitSearchCancelButton = 2314,
  
  kCSSSelectorWebkitSliderContainer = 2315,
  
  kCSSSelectorWebkitSliderRunnableTrack = 2316,
  
  kCSSSelectorWebkitSliderThumb = 2317,
  
  kCSSSelectorWebkitTextfieldDecorationContainer = 2318,
  
  kCSSSelectorWebkitUnknownPseudo = 2319,
  
  kFilterAsContainingBlockMayChangeOutput = 2320,
  
  kDispatchMouseUpDownEventOnDisabledFormControl = 2321,
  
  kCSSSelectorPseudoIs = 2322,
  
  kV8RTCRtpSender_ReplaceTrack_Method = 2323,
  
  kInputTypeFileSecureOriginOpenChooser = 2324,
  
  kInputTypeFileInsecureOriginOpenChooser = 2325,
  
  kBasicShapeEllipseNoRadius = 2326,
  
  kBasicShapeEllipseTwoRadius = 2328,
  
  kTemporalInputTypeChooserByTrustedClick = 2329,
  
  kTemporalInputTypeChooserByUntrustedClick = 2330,
  
  kTemporalInputTypeIgnoreUntrustedClick = 2331,
  
  kColorInputTypeChooserByTrustedClick = 2332,
  
  kColorInputTypeChooserByUntrustedClick = 2333,
  
  kCSSTypedOMStylePropertyMap = 2334,
  
  kRTCPeerConnectionWithActiveCsp = 2346,
  
  kImageDecodingAttribute = 2347,
  
  kImageDecodeAPI = 2348,
  
  kV8HTMLElement_Autocapitalize_AttributeGetter = 2349,
  
  kV8HTMLElement_Autocapitalize_AttributeSetter = 2350,
  
  kCSSLegacyAlignment = 2351,
  
  kSRISignatureCheck = 2352,
  
  kSRISignatureSuccess = 2353,
  
  kCSSBasicShape = 2354,
  
  kCSSGradient = 2355,
  
  kCSSPaintFunction = 2356,
  
  kWebkitCrossFade = 2357,
  
  kDisablePictureInPictureAttribute = 2358,
  
  kCertificateTransparencyNonCompliantSubresourceInMainFrame = 2359,
  
  kCertificateTransparencyNonCompliantResourceInSubframe = 2360,
  
  kV8AbortController_Constructor = 2361,
  
  kReplaceCharsetInXHRIgnoringCase = 2362,
  
  kHTMLIFrameElementGestureMedia = 2363,
  
  kWorkletAddModule = 2364,
  
  kAnimationWorkletRegisterAnimator = 2365,
  
  kWorkletAnimationConstructor = 2366,
  
  kScrollTimelineConstructor = 2367,
  
  kAsyncClipboardAPIRead = 2369,
  
  kAsyncClipboardAPIWrite = 2370,
  
  kAsyncClipboardAPIReadText = 2371,
  
  kAsyncClipboardAPIWriteText = 2372,
  
  kOpenerNavigationWithoutGesture = 2373,
  
  kGetComputedStyleWebkitAppearance = 2374,
  
  kV8LockManager_Request_Method = 2375,
  
  kV8LockManager_Query_Method = 2376,
  
  kV8RTCDTMFSender_Track_AttributeGetter = 2378,
  
  kV8RTCDTMFSender_Duration_AttributeGetter = 2379,
  
  kV8RTCDTMFSender_InterToneGap_AttributeGetter = 2380,
  
  kV8RTCRtpSender_Dtmf_AttributeGetter = 2381,
  
  kRTCConstraintEnableDtlsSrtpTrue = 2382,
  
  kRTCConstraintEnableDtlsSrtpFalse = 2383,
  
  kDeprecatedRtcPeerConnectionId = 2384,
  
  kV8PaintWorkletGlobalScope_RegisterPaint_Method = 2385,
  
  kV8PaintWorkletGlobalScope_DevicePixelRatio_AttributeGetter = 2386,
  
  kCSSSelectorPseudoFocus = 2387,
  
  kCSSSelectorPseudoFocusVisible = 2388,
  
  kDistrustedLegacySymantecSubresource = 2389,
  
  kVRDisplayGetFrameData = 2390,
  
  kXMLHttpRequestResponseXML = 2391,
  
  kMessagePortTransferClosedPort = 2392,
  
  kRTCLocalSdpModification = 2393,
  
  kKeyboardApiLock = 2394,
  
  kKeyboardApiUnlock = 2395,
  
  kPPAPIURLRequestStreamToFile = 2396,
  
  kPaymentHandler = 2397,
  
  kPaymentRequestShowWithoutGesture = 2398,
  
  kReadableStreamConstructor = 2399,
  
  kWritableStreamConstructor = 2400,
  
  kTransformStreamConstructor = 2401,
  
  kNegativeBackgroundSize = 2402,
  
  kNegativeMaskSize = 2403,
  
  kClientHintsRtt = 2404,
  
  kClientHintsDownlink = 2405,
  
  kClientHintsEct = 2406,
  
  kCrossOriginHTMLIFrameElementContentDocument = 2407,
  
  kCrossOriginHTMLIFrameElementGetSVGDocument = 2408,
  
  kCrossOriginHTMLEmbedElementGetSVGDocument = 2409,
  
  kCrossOriginHTMLFrameElementContentDocument = 2410,
  
  kCrossOriginHTMLObjectElementContentDocument = 2411,
  
  kCrossOriginHTMLObjectElementGetSVGDocument = 2412,
  
  kNavigatorXR = 2413,
  
  kXRRequestDevice = 2414,
  
  kXRRequestSession = 2415,
  
  kXRSupportsSession = 2416,
  
  kXRSessionGetInputSources = 2417,
  
  kCSSResizeAuto = 2418,
  
  kPrefixedCursorGrab = 2419,
  
  kPrefixedCursorGrabbing = 2420,
  
  kCredentialManagerCreatePublicKeyCredential = 2421,
  
  kCredentialManagerGetPublicKeyCredential = 2422,
  
  kCredentialManagerMakePublicKeyCredentialSuccess = 2423,
  
  kCredentialManagerGetPublicKeyCredentialSuccess = 2424,
  
  kShapeOutsideContentBox = 2425,
  
  kShapeOutsidePaddingBox = 2426,
  
  kShapeOutsideBorderBox = 2427,
  
  kShapeOutsideMarginBox = 2428,
  
  kPerformanceTimeline = 2429,
  
  kUserTiming = 2430,
  
  kCSSSelectorPseudoWhere = 2431,
  
  kKeyboardApiGetLayoutMap = 2432,
  
  kPerformanceResourceTimingInitiatorType = 2434,
  
  kV8ArraySortNoElementsProtector = 2436,
  
  kV8ArrayPrototypeSortJSArrayModifiedPrototype = 2437,
  
  kV8Document_PictureInPictureEnabled_AttributeGetter = 2438,
  
  kV8Document_PictureInPictureElement_AttributeGetter = 2439,
  
  kV8Document_ExitPictureInPicture_Method = 2440,
  
  kV8ShadowRoot_PictureInPictureElement_AttributeGetter = 2441,
  
  kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter = 2442,
  
  kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter = 2443,
  
  kV8HTMLVideoElement_RequestPictureInPicture_Method = 2444,
  
  kEnterPictureInPictureEventListener = 2445,
  
  kLeavePictureInPictureEventListener = 2446,
  
  kV8PictureInPictureWindow_Height_AttributeGetter = 2447,
  
  kV8PictureInPictureWindow_Width_AttributeGetter = 2448,
  
  kPictureInPictureWindowResizeEventListener = 2449,
  
  kV8CookieStore_Delete_Method = 2450,
  
  kV8CookieStore_Get_Method = 2451,
  
  kV8CookieStore_GetAll_Method = 2452,
  
  kV8CookieStore_GetChangeSubscriptions_Method = 2453,
  
  kV8CookieStore_Has_Method = 2454,
  
  kV8CookieStore_Set_Method = 2455,
  
  kV8CookieStore_SubscribeToChanges_Method = 2456,
  
  kV8CookieChangeEvent_Changed_AttributeGetter = 2457,
  
  kV8CookieChangeEvent_Deleted_AttributeGetter = 2458,
  
  kV8ExtendableCookieChangeEvent_Changed_AttributeGetter = 2459,
  
  kV8ExtendableCookieChangeEvent_Deleted_AttributeGetter = 2460,
  
  kShapeOutsideContentBoxDifferentFromMarginBox = 2461,
  
  kShapeOutsidePaddingBoxDifferentFromMarginBox = 2462,
  
  kCSSContainLayoutPositionedDescendants = 2463,
  
  kCanvasConvertToBlob = 2465,
  
  kPolymerV1Detected = 2466,
  
  kPolymerV2Detected = 2467,
  
  kPerformanceEventTimingBuffer = 2468,
  
  kPerformanceEventTimingConstructor = 2469,
  
  kReverseIterateDOMStorage = 2470,
  
  kTextToSpeech_Speak = 2471,
  
  kTextToSpeech_SpeakCrossOrigin = 2472,
  
  kTextToSpeech_SpeakDisallowedByAutoplay = 2473,
  
  kStaleWhileRevalidateEnabled = 2474,
  
  kMediaElementSourceOnOfflineContext = 2475,
  
  kMediaStreamDestinationOnOfflineContext = 2476,
  
  kMediaStreamSourceOnOfflineContext = 2477,
  
  kRTCDataChannelInitMaxRetransmitTime = 2478,
  
  kRTCPeerConnectionCreateDataChannelMaxPacketLifeTime = 2479,
  
  kV8SpeechGrammarList_AddFromUri_Method = 2480,
  
  kV8SpeechRecognitionEvent_Interpretation_AttributeGetter = 2481,
  
  kV8SpeechRecognitionEvent_Emma_AttributeGetter = 2482,
  
  kV8SpeechSynthesis_Speak_Method = 2483,
  
  kLegacySymantecCertMainFrameResource = 2484,
  
  kLegacySymantecCertInSubresource = 2485,
  
  kLegacySymantecCertInSubframeMainResource = 2486,
  
  kEventTimingExplicitlyRequested = 2487,
  
  kCSSEnvironmentVariable = 2488,
  
  kCSSEnvironmentVariable_SafeAreaInsetTop = 2489,
  
  kCSSEnvironmentVariable_SafeAreaInsetLeft = 2490,
  
  kCSSEnvironmentVariable_SafeAreaInsetBottom = 2491,
  
  kCSSEnvironmentVariable_SafeAreaInsetRight = 2492,
  
  kMediaControlsDisplayCutoutGesture = 2493,
  
  kDocumentOpenTwoArgs = 2494,
  
  kDocumentOpenTwoArgsWithReplace = 2495,
  
  kDocumentOpenThreeArgs = 2496,
  
  kV8FunctionTokenOffsetTooLongForToString = 2497,
  
  kServiceWorkerImportScriptNotInstalled = 2498,
  
  kNestedDedicatedWorker = 2499,
  
  kClientHintsMetaAcceptCHLifetime = 2500,
  
  kDOMNodeRemovedEventDelayed = 2501,
  
  kDOMNodeRemovedEventHandlerAccessDetachingNode = 2502,
  
  kDOMNodeRemovedEventListenedAtNonTarget = 2503,
  
  kDOMNodeRemovedFromDocumentEventDelayed = 2504,
  
  kDOMNodeRemovedFromDocumentEventHandlerAccessDetachingNode = 2505,
  
  kDOMNodeRemovedFromDocumentEventListenedAtNonTarget = 2506,
  
  kCSSFillAvailableLogicalWidth = 2507,
  
  kCSSFillAvailableLogicalHeight = 2508,
  
  kPopupOpenWhileFileChooserOpened = 2509,
  
  kCookieStoreAPI = 2510,
  
  kFeaturePolicyJSAPI = 2511,
  
  kV8RTCPeerConnection_GetTransceivers_Method = 2512,
  
  kV8RTCPeerConnection_AddTransceiver_Method = 2513,
  
  kV8RTCRtpTransceiver_Direction_AttributeGetter = 2514,
  
  kV8RTCRtpTransceiver_Direction_AttributeSetter = 2515,
  
  kHTMLLinkElementDisabledByParser = 2516,
  
  kRequestIsHistoryNavigation = 2517,
  
  kAddDocumentLevelPassiveTrueWheelEventListener = 2518,
  
  kAddDocumentLevelPassiveFalseWheelEventListener = 2519,
  
  kAddDocumentLevelPassiveDefaultWheelEventListener = 2520,
  
  kDocumentLevelPassiveDefaultEventListenerPreventedWheel = 2521,
  
  kShapeDetectionAPI = 2522,
  
  kV8SourceBuffer_ChangeType_Method = 2523,
  
  kPPAPIWebSocket = 2524,
  
  kV8MediaStreamTrack_ContentHint_AttributeGetter = 2525,
  
  kV8MediaStreamTrack_ContentHint_AttributeSetter = 2526,
  
  kV8IDBFactory_Open_Method = 2527,
  
  kEvaluateScriptMovedBetweenDocuments = 2528,
  
  kReportingObserver = 2529,
  
  kDeprecationReport = 2530,
  
  kInterventionReport = 2531,
  
  kV8WasmSharedMemory = 2532,
  
  kV8WasmThreadOpcodes = 2533,
  
  kFeaturePolicyReport = 2536,
  
  kV8Window_WebkitRTCPeerConnection_ConstructorGetter = 2537,
  
  kV8Window_WebkitMediaStream_ConstructorGetter = 2538,
  
  kTextEncoderStreamConstructor = 2539,
  
  kTextDecoderStreamConstructor = 2540,
  
  kSignedExchangeInnerResponse = 2541,
  
  kPaymentAddressLanguageCode = 2542,
  
  kDocumentDomainBlockedCrossOriginAccess = 2543,
  
  kDocumentDomainEnabledCrossOriginAccess = 2544,
  
  kSerialGetPorts = 2545,
  
  kSerialRequestPort = 2546,
  
  kSerialPortOpen = 2547,
  
  kSerialPortClose = 2548,
  
  kBackgroundFetchManagerFetch = 2549,
  
  kBackgroundFetchManagerGet = 2550,
  
  kBackgroundFetchManagerGetIds = 2551,
  
  kBackgroundFetchRegistrationAbort = 2552,
  
  kBackgroundFetchRegistrationMatch = 2553,
  
  kBackgroundFetchRegistrationMatchAll = 2554,
  
  kV8AtomicsNotify = 2555,
  
  kV8AtomicsWake = 2556,
  
  kFormDisabledAttributePresent = 2557,
  
  kFormDisabledAttributePresentAndSubmit = 2558,
  
  kCSSValueAppearanceCheckboxRendered = 2559,
  
  kCSSValueAppearanceCheckboxForOthersRendered = 2560,
  
  kCSSValueAppearanceRadioRendered = 2561,
  
  kCSSValueAppearanceRadioForOthersRendered = 2562,
  
  kCSSValueAppearanceInnerSpinButtonRendered = 2563,
  
  kCSSValueAppearanceInnerSpinButtonForOthersRendered = 2564,
  
  kCSSValueAppearanceMenuListRendered = 2565,
  
  kCSSValueAppearanceMenuListForOthersRendered = 2566,
  
  kCSSValueAppearanceProgressBarRendered = 2567,
  
  kCSSValueAppearanceSliderHorizontalRendered = 2568,
  
  kCSSValueAppearanceSliderHorizontalForOthersRendered = 2569,
  
  kCSSValueAppearanceSliderVerticalRendered = 2570,
  
  kCSSValueAppearanceSliderVerticalForOthersRendered = 2571,
  
  kCSSValueAppearanceSliderThumbHorizontalRendered = 2572,
  
  kCSSValueAppearanceSliderThumbHorizontalForOthersRendered = 2573,
  
  kCSSValueAppearanceSliderThumbVerticalRendered = 2574,
  
  kCSSValueAppearanceSliderThumbVerticalForOthersRendered = 2575,
  
  kCSSValueAppearanceSearchFieldRendered = 2576,
  
  kCSSValueAppearanceSearchFieldForOthersRendered = 2577,
  
  kCSSValueAppearanceSearchCancelRendered = 2578,
  
  kCSSValueAppearanceSearchCancelForOthersRendered = 2579,
  
  kCSSValueAppearanceTextAreaRendered = 2580,
  
  kCSSValueAppearanceTextAreaForOthersRendered = 2581,
  
  kCSSValueAppearanceMenuListButtonRendered = 2582,
  
  kCSSValueAppearanceMenuListButtonForOthersRendered = 2583,
  
  kCSSValueAppearancePushButtonRendered = 2584,
  
  kCSSValueAppearancePushButtonForOthersRendered = 2585,
  
  kCSSValueAppearanceSquareButtonRendered = 2586,
  
  kCSSValueAppearanceSquareButtonForOthersRendered = 2587,
  
  kGetComputedStyleForWebkitAppearanceExcludeDevTools = 2588,
  
  kCursorImageLE32x32 = 2589,
  
  kCursorImageGT32x32 = 2590,
  
  kRTCPeerConnectionComplexPlanBSdpUsingDefaultSdpSemantics = 2591,
  
  kResizeObserver_Constructor = 2592,
  
  kCollator = 2593,
  
  kNumberFormat = 2594,
  
  kDateTimeFormat = 2595,
  
  kPluralRules = 2596,
  
  kRelativeTimeFormat = 2597,
  
  kLocale = 2598,
  
  kListFormat = 2599,
  
  kSegmenter = 2600,
  
  kStringLocaleCompare = 2601,
  
  kStringToLocaleUpperCase = 2602,
  
  kStringToLocaleLowerCase = 2603,
  
  kNumberToLocaleString = 2604,
  
  kDateToLocaleString = 2605,
  
  kDateToLocaleDateString = 2606,
  
  kDateToLocaleTimeString = 2607,
  
  kMalformedCSP = 2608,
  
  kV8AttemptOverrideReadOnlyOnPrototypeSloppy = 2609,
  
  kV8AttemptOverrideReadOnlyOnPrototypeStrict = 2610,
  
  kHTMLCanvasElementLowLatency = 2611,
  
  kV8OptimizedFunctionWithOneShotBytecode = 2612,
  
  kSVGGeometryPropertyHasNonZeroUnitlessValue = 2613,
  
  kCSSValueAppearanceNoImplementationSkipBorder = 2614,
  
  kInstantiateModuleScript = 2615,
  
  kDynamicImportModuleScript = 2616,
  
  kHistoryPushState = 2617,
  
  kHistoryReplaceState = 2618,
  
  kGetDisplayMedia = 2619,
  
  kCursorImageGT64x64 = 2620,
  
  kAdClick = 2621,
  
  kUpdateWithoutShippingOptionOnShippingAddressChange = 2622,
  
  kUpdateWithoutShippingOptionOnShippingOptionChange = 2623,
  
  kCSSSelectorEmptyWhitespaceOnlyFail = 2624,
  
  kActivatedImplicitRootScroller = 2625,
  
  kCSSUnknownNamespacePrefixInSelector = 2626,
  
  kPageLifeCycleFreeze = 2627,
  
  kDefaultInCustomIdent = 2628,
  
  kHTMLAnchorElementHrefTranslateAttribute = 2629,
  
  kWebKitUserModifyEffective = 2630,
  
  kPlainTextEditingEffective = 2631,
  
  kLegacyTLSVersionInMainFrameResource = 2634,
  
  kLegacyTLSVersionInSubresource = 2635,
  
  kLegacyTLSVersionInSubframeMainResource = 2636,
  
  kRTCMaxAudioBufferSize = 2637,
  
  kWebKitUserModifyReadWriteEffective = 2638,
  
  kWebKitUserModifyReadOnlyEffective = 2639,
  
  kWebKitUserModifyPlainTextEffective = 2640,
  
  kCSSAtRuleFontFeatureValues = 2641,
  
  kFlexboxSingleLineAlignContent = 2642,
  
  kSignedExchangeInnerResponseInMainFrame = 2643,
  
  kSignedExchangeInnerResponseInSubFrame = 2644,
  
  kV8IDBFactory_Databases_Method = 2648,
  
  kOpenerNavigationDownloadCrossOrigin = 2649,
  
  kV8RegExpMatchIsTrueishOnNonJSRegExp = 2650,
  
  kV8RegExpMatchIsFalseishOnJSRegExp = 2651,
  
  kDownloadInAdFrameWithUserGesture = 2652,
  
  kDownloadInAdFrameWithoutUserGesture = 2653,
  
  kNavigatorAppVersion = 2654,
  
  kNavigatorDoNotTrack = 2655,
  
  kNavigatorHardwareConcurrency = 2656,
  
  kNavigatorLanguage = 2657,
  
  kNavigatorLanguages = 2658,
  
  kNavigatorMaxTouchPoints = 2659,
  
  kNavigatorMimeTypes = 2660,
  
  kNavigatorPlatform = 2661,
  
  kNavigatorPlugins = 2662,
  
  kNavigatorUserAgent = 2663,
  
  kWebBluetoothRequestScan = 2664,
  
  kV8SVGGeometryElement_IsPointInFill_Method = 2665,
  
  kV8SVGGeometryElement_IsPointInStroke_Method = 2666,
  
  kV8SVGGeometryElement_GetTotalLength_Method = 2667,
  
  kV8SVGGeometryElement_GetPointAtLength_Method = 2668,
  
  kOffscreenCanvasTransferToImageBitmap = 2669,
  
  kOffscreenCanvasIsPointInPath = 2670,
  
  kOffscreenCanvasIsPointInStroke = 2671,
  
  kOffscreenCanvasMeasureText = 2672,
  
  kOffscreenCanvasGetImageData = 2673,
  
  kV8SVGTextContentElement_GetComputedTextLength_Method = 2674,
  
  kV8SVGTextContentElement_GetEndPositionOfChar_Method = 2675,
  
  kV8SVGTextContentElement_GetExtentOfChar_Method = 2676,
  
  kV8SVGTextContentElement_GetStartPositionOfChar_Method = 2677,
  
  kV8SVGTextContentElement_GetSubStringLength_Method = 2678,
  
  kV8BatteryManager_ChargingTime_AttributeGetter = 2679,
  
  kV8BatteryManager_Charging_AttributeGetter = 2680,
  
  kV8BatteryManager_DischargingTime_AttributeGetter = 2681,
  
  kV8BatteryManager_Level_AttributeGetter = 2682,
  
  kV8PaintRenderingContext2D_IsPointInPath_Method = 2683,
  
  kV8PaintRenderingContext2D_IsPointInStroke_Method = 2684,
  
  kV8PaymentRequest_CanMakePayment_Method = 2685,
  
  kV8AnalyserNode_GetByteFrequencyData_Method = 2686,
  
  kV8AnalyserNode_GetByteTimeDomainData_Method = 2687,
  
  kV8AnalyserNode_GetFloatFrequencyData_Method = 2688,
  
  kV8AnalyserNode_GetFloatTimeDomainData_Method = 2689,
  
  kV8AudioBuffer_CopyFromChannel_Method = 2690,
  
  kV8AudioBuffer_GetChannelData_Method = 2691,
  
  kWebGLDebugRendererInfo = 2692,
  
  kV8WebGL2ComputeRenderingContext_GetExtension_Method = 2693,
  
  kV8WebGL2ComputeRenderingContext_GetSupportedExtensions_Method = 2694,
  
  kV8WebGL2RenderingContext_GetExtension_Method = 2695,
  
  kV8WebGL2RenderingContext_GetSupportedExtensions_Method = 2696,
  
  kV8WebGLRenderingContext_GetExtension_Method = 2697,
  
  kV8WebGLRenderingContext_GetSupportedExtensions_Method = 2698,
  
  kV8Screen_AvailHeight_AttributeGetter = 2699,
  
  kV8Screen_AvailWidth_AttributeGetter = 2700,
  
  kV8Screen_ColorDepth_AttributeGetter = 2701,
  
  kV8Screen_Height_AttributeGetter = 2702,
  
  kV8Screen_PixelDepth_AttributeGetter = 2703,
  
  kV8Screen_Width_AttributeGetter = 2704,
  
  kWindowInnerWidth = 2705,
  
  kWindowInnerHeight = 2706,
  
  kV8Window_MatchMedia_Method = 2707,
  
  kWindowScrollX = 2708,
  
  kWindowScrollY = 2709,
  
  kWindowPageXOffset = 2710,
  
  kWindowPageYOffset = 2711,
  
  kWindowScreenX = 2712,
  
  kWindowScreenY = 2713,
  
  kWindowOuterHeight = 2714,
  
  kWindowOuterWidth = 2715,
  
  kWindowDevicePixelRatio = 2716,
  
  kCanvasCaptureStream = 2717,
  
  kV8HTMLMediaElement_CanPlayType_Method = 2718,
  
  kHistoryLength = 2719,
  
  kFeaturePolicyReportOnlyHeader = 2720,
  
  kV8PaymentRequest_HasEnrolledInstrument_Method = 2721,
  
  kTrustedTypesEnabled = 2722,
  
  kTrustedTypesCreatePolicy = 2723,
  
  kTrustedTypesDefaultPolicyUsed = 2724,
  
  kTrustedTypesAssignmentError = 2725,
  
  kBadgeSet = 2726,
  
  kBadgeClear = 2727,
  
  kElementTimingExplicitlyRequested = 2728,
  
  kV8HTMLMediaElement_CaptureStream_Method = 2729,
  
  kQuirkyLineBoxBackgroundSize = 2730,
  
  kDirectlyCompositedImage = 2731,
  
  kForbiddenSyncXhrInPageDismissal = 2732,
  
  kV8HTMLVideoElement_AutoPictureInPicture_AttributeGetter = 2733,
  
  kV8HTMLVideoElement_AutoPictureInPicture_AttributeSetter = 2734,
  
  kAutoPictureInPictureAttribute = 2735,
  
  kRTCAudioJitterBufferRtxHandling = 2736,
  
  kWebShareCanShare = 2737,
  
  kPriorityHints = 2738,
  
  kTextAutosizedCrossSiteIframe = 2739,
  
  kV8RTCQuicTransport_Constructor = 2740,
  
  kV8RTCQuicTransport_Transport_AttributeGetter = 2741,
  
  kV8RTCQuicTransport_State_AttributeGetter = 2742,
  
  kV8RTCQuicTransport_GetKey_Method = 2743,
  
  kV8RTCQuicTransport_GetStats_Method = 2744,
  
  kV8RTCQuicTransport_Connect_Method = 2745,
  
  kV8RTCQuicTransport_Listen_Method = 2746,
  
  kV8RTCQuicTransport_Stop_Method = 2747,
  
  kV8RTCQuicTransport_CreateStream_Method = 2748,
  
  kV8RTCIceTransport_Constructor = 2749,
  
  kV8RTCIceTransport_Role_AttributeGetter = 2750,
  
  kV8RTCIceTransport_State_AttributeGetter = 2751,
  
  kV8RTCIceTransport_GatheringState_AttributeGetter = 2752,
  
  kV8RTCIceTransport_GetLocalCandidates_Method = 2753,
  
  kV8RTCIceTransport_GetRemoteCandidates_Method = 2754,
  
  kV8RTCIceTransport_GetSelectedCandidatePair_Method = 2755,
  
  kV8RTCIceTransport_GetLocalParameters_Method = 2756,
  
  kV8RTCIceTransport_GetRemoteParameters_Method = 2757,
  
  kV8RTCQuicStream_Transport_AttributeGetter = 2758,
  
  kV8RTCQuicStream_State_AttributeGetter = 2759,
  
  kV8RTCQuicStream_ReadBufferedAmount_AttributeGetter = 2760,
  
  kV8RTCQuicStream_MaxReadBufferedAmount_AttributeGetter = 2761,
  
  kV8RTCQuicStream_WriteBufferedAmount_AttributeGetter = 2762,
  
  kV8RTCQuicStream_MaxWriteBufferedAmount_AttributeGetter = 2763,
  
  kV8RTCQuicStream_ReadInto_Method = 2764,
  
  kV8RTCQuicStream_Write_Method = 2765,
  
  kV8RTCQuicStream_Reset_Method = 2766,
  
  kV8RTCQuicStream_WaitForWriteBufferedAmountBelow_Method = 2767,
  
  kV8RTCQuicStream_WaitForReadable_Method = 2768,
  
  kHTMLTemplateElement = 2769,
  
  kNoSysexWebMIDIWithoutPermission = 2770,
  
  kNoSysexWebMIDIOnInsecureOrigin = 2771,
  
  kApplicationCacheInstalledButNoManifest = 2772,
  
  kPerMethodCanMakePaymentQuota = 2773,
  
  kCSSValueAppearanceButtonForNonButtonRendered = 2774,
  
  kCSSValueAppearanceButtonForOthersRendered = 2775,
  
  kCustomCursorIntersectsViewport = 2776,
  
  kClientHintsLang = 2777,
  
  kLinkRelPreloadImageSrcset = 2778,
  
  kV8HTMLMediaElement_Remote_AttributeGetter = 2779,
  
  kV8RemotePlayback_WatchAvailability_Method = 2780,
  
  kV8RemotePlayback_Prompt_Method = 2781,
  
  kLayoutJankExplicitlyRequested = 2782,
  
  kMediaSessionSkipAd = 2783,
  
  kAdFrameSizeIntervention = 2784,
  
  kV8UserActivation_HasBeenActive_AttributeGetter = 2785,
  
  kV8UserActivation_IsActive_AttributeGetter = 2786,
  
  kTextEncoderEncodeInto = 2787,
  
  kInvalidBasicCardMethodData = 2788,
  
  kClientHintsUA = 2789,
  
  kClientHintsUAArch = 2790,
  
  kClientHintsUAPlatform = 2791,
  
  kClientHintsUAModel = 2792,
  
  kAnimationFrameCancelledWithinFrame = 2793,
  
  kSchedulingIsInputPending = 2794,
  
  kV8StringNormalize = 2795,
  
  kU2FCryptotokenRegister = 2812,
  
  kU2FCryptotokenSign = 2813,
  
  kCSSValueAppearanceInnerSpinButton = 2814,
  
  kCSSValueAppearanceMeter = 2815,
  
  kCSSValueAppearanceProgressBar = 2816,
  
  kCSSValueAppearanceProgressBarForOthersRendered = 2817,
  
  kCSSValueAppearancePushButton = 2818,
  
  kCSSValueAppearanceSquareButton = 2819,
  
  kCSSValueAppearanceSearchCancel = 2820,
  
  kCSSValueAppearanceTextarea = 2821,
  
  kCSSValueAppearanceTextFieldForOthersRendered = 2822,
  
  kCSSValueAppearanceTextFieldForTemporalRendered = 2823,
  
  kBuiltInModuleKvStorage = 2824,
  
  kBuiltInModuleVirtualScroller = 2825,
  
  kAdClickNavigation = 2826,
  
  kRTCStatsRelativePacketArrivalDelay = 2827,
  
  kCSSSelectorHostContextInSnapshotProfile = 2829,
  
  kCSSSelectorHostContextInLiveProfile = 2830,
  
  kImportMap = 2831,
  
  kRefreshHeader = 2832,
  
  kSearchEventFired = 2833,
  
  kIdleDetectionStart = 2834,
  
  kTargetCurrent = 2835,
  
  kSandboxBackForwardStaysWithinSubtree = 2836,
  
  kSandboxBackForwardAffectsFramesOutsideSubtree = 2837,
  
  kDownloadPrePolicyCheck = 2838,
  
  kDownloadPostPolicyCheck = 2839,
  
  kDownloadInSandboxWithoutUserGesture = 2840,
  
  kReadableStreamGetReader = 2841,
  
  kReadableStreamPipeThrough = 2842,
  
  kReadableStreamPipeTo = 2843,
  
  kCSSStyleSheetReplace = 2844,
  
  kCSSStyleSheetReplaceSync = 2845,
  
  kAdoptedStyleSheets = 2846,
  
  kHTMLImportsOnReverseOriginTrials = 2847,
  
  kElementCreateShadowRootOnReverseOriginTrials = 2848,
  
  kDocumentRegisterElementOnReverseOriginTrials = 2849,
  
  kInputTypeRadio = 2850,
  
  kInputTypeCheckbox = 2851,
  
  kInputTypeImage = 2852,
  
  kInputTypeButton = 2853,
  
  kInputTypeHidden = 2854,
  
  kInputTypeReset = 2855,
  
  kSelectElementSingle = 2856,
  
  kSelectElementMultiple = 2857,
  
  kV8Animation_Effect_AttributeGetter = 2858,
  
  kV8Animation_Effect_AttributeSetter = 2859,
  
  kHidDeviceClose = 2860,
  
  kHidDeviceOpen = 2861,
  
  kHidDeviceReceiveFeatureReport = 2862,
  
  kHidDeviceSendFeatureReport = 2863,
  
  kHidDeviceSendReport = 2864,
  
  kHidGetDevices = 2865,
  
  kHidRequestDevice = 2866,
  
  kV8RTCQuicTransport_MaxDatagramLength_AttributeGetter = 2867,
  
  kV8RTCQuicTransport_ReadyToSendDatagram_Method = 2868,
  
  kV8RTCQuicTransport_SendDatagram_Method = 2869,
  
  kV8RTCQuicTransport_ReceiveDatagrams_Method = 2870,
  
  kCSSValueContainStyle = 2871,
  
  kWebShareSuccessfulContainingFiles = 2872,
  
  kWebShareSuccessfulWithoutFiles = 2873,
  
  kWebShareUnsuccessfulContainingFiles = 2874,
  
  kWebShareUnsuccessfulWithoutFiles = 2875,
  
  kVerticalScrollbarThumbScrollingWithMouse = 2876,
  
  kVerticalScrollbarThumbScrollingWithTouch = 2877,
  
  kHorizontalScrollbarThumbScrollingWithMouse = 2878,
  
  kHorizontalScrollbarThumbScrollingWithTouch = 2879,
  
  kSMSReceiverStart = 2880,
  
  kV8Animation_Pending_AttributeGetter = 2881,
  
  kFocusWithoutUserActivationNotSandboxedNotAdFrame = 2882,
  
  kFocusWithoutUserActivationNotSandboxedAdFrame = 2883,
  
  kFocusWithoutUserActivationSandboxedNotAdFrame = 2884,
  
  kFocusWithoutUserActivationSandboxedAdFrame = 2885,
  
  kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeGetter = 2886,
  
  kV8RTCRtpReceiver_JitterBufferDelayHint_AttributeSetter = 2887,
  
  kMediaCapabilitiesDecodingInfoWithKeySystemConfig = 2888,
  
  kRevertInCustomIdent = 2889,
  
  kUnoptimizedImagePolicies = 2890,
  
  kVTTCueParser = 2891,
  
  kMediaElementTextTrackContainer = 2892,
  
  kMediaElementTextTrackList = 2893,
  
  kNumberOfFeatures,
  kMinValue = 0,
  kMaxValue = 2894,
};

COMPONENT_EXPORT(WEB_FEATURE_MOJO_BINDINGS_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, WebFeature value);
inline bool IsKnownEnumValue(WebFeature value) {
  return internal::WebFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebFeature>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebFeature> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebFeature, ::blink::mojom::WebFeature> {
  static ::blink::mojom::WebFeature ToMojom(::blink::mojom::WebFeature input) { return input; }
  static bool FromMojom(::blink::mojom::WebFeature input, ::blink::mojom::WebFeature* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebFeature>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEB_FEATURE_WEB_FEATURE_MOJOM_SHARED_H_