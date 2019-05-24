// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_RUNTIME_FLAGS_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_RUNTIME_FLAGS_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internal_runtime_flags.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_internal_runtime_flags_wrapper_type_info;

class V8InternalRuntimeFlags {
  STATIC_ONLY(V8InternalRuntimeFlags);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalRuntimeFlags* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalRuntimeFlags>();
  }
  static InternalRuntimeFlags* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_internal_runtime_flags_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void Accelerated2dCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void Accelerated2dCanvasEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AccessibilityObjectModelEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AdTaggingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AllowActivationDelegationAttrEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AllowContentInitiatedDataUrlNavigationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AnimationWorkletEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AsyncClipboardEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AudioOutputDevicesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AudioVideoTracksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AutomationControlledEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AutomationControlledEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AutoPictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AutoplayIgnoresWebAudioEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void AutoplayIgnoresWebAudioEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BackgroundFetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BackgroundVideoTrackOptimizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BadgingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BidiCaretAffinityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlinkGenPropertyTreesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlinkRuntimeCallStatsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BloatedRendererDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BloatedRendererDetectionSkipUptimeCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlobReadMethodsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlockCredentialedSubresourcesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlockingDownloadsInSandboxWithoutUserActivationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BlockMetaSetCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BuiltInModuleAllEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BuiltInModuleInfraEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void BuiltInModuleKvStorageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CacheInlineScriptCodeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CacheStorageAddAllRejectsDuplicatesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CallCaptureListenersAtCapturePhaseAtShadowHostsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void Canvas2dContextLostRestoredEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void Canvas2dFixedRenderingModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void Canvas2dImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void Canvas2dScrollPathIntoViewEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CanvasColorManagementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CanvasHitRegionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CanvasImageSmoothingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ClickRetargettingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ClientPlaceholdersForServerLoFiEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CompositeAfterPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CompositedSelectionUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CompositorTouchActionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ComputedAccessibilityInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ContactsManagerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ContextMenuEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CookieStoreEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CorsRFC1918EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSS3TextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSAdditiveAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSAltTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSBackdropFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSCalcAsIntEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSFocusVisibleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSFontFeatureValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSFontSizeAdjustEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSHexAlphaColorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSIndependentTransformPropertiesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSLayoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSLogicalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSLogicalEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSMaskSourceTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSOffsetPathRayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSOffsetPathRayContainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSOffsetPositionAnchorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSPaintAPIArgumentsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSPartPseudoElementEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSPictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSPseudoIsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSPseudoWhereEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSSnapSizeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSVariables2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSVariables2ImageValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSVariables2TransformValuesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CSSViewportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CustomElementDefaultStyleEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CustomElementsV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void CustomUserTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DatabaseEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DecodeToYUVEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DesktopCaptureDisableLocalEchoControlEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisableHardwareNoiseSuppressionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisplayCutoutAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisplayCutoutAPIEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DisplayLockingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DocumentCookieEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DocumentDomainEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void DocumentWriteEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EditingNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementInternalsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ElementTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EncryptedMediaEncryptionSchemeQueryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EncryptedMediaHdcpPolicyCheckEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EncryptedMediaPersistentUsageRecordSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void EventTimingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExecCommandInJavaScriptEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExpensiveBackgroundTimerThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExperimentalContentSecurityPolicyFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExperimentalIsInputPendingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExperimentalProductivityFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExtendedTextMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ExtraWebGLVideoTextureMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FallbackCursorModeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FastBorderRadiusEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FastFlatTreeTraversalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FastMobileScrollingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FeaturePolicyForSandboxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FeaturePolicyJavaScriptInterfaceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FeaturePolicyReportingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FeaturePolicyVibrateFeatureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FetchMetadataEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FetchMetadataDestinationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FirstContentfulPaintPlusPlusEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FocuslessSpatialNavigationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FocuslessSpatialNavigationEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FontSrcLocalMatchingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForbidSyncXHRInPageDismissalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceOverlayFullscreenVideoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceSynchronousHTMLParsingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ForceTallerSelectPopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FormAssociatedCustomElementsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FormDataEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FractionalMouseEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FractionalScrollOffsetsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void FreezeFramesOnVisibilityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GamepadButtonAxisEventsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void GetDisplayMediaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HeapCompactionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HeapConcurrentMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HeapIncrementalMarkingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HeapIncrementalMarkingStressEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HrefTranslateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HTMLImportsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HTMLImportsOnlyChromeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void HTMLImportsStyleApplicationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IdbObserverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IdbTransactionCommitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IdleDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ImageOrientationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ImplicitRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ImplicitRootScrollerEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InertAttributeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InputMultipleFieldsUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InstalledAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IntersectionObserverV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void InvisibleDOMEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsolatedCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void IsolatedWorldCSPEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void JankTrackingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void JankTrackingSweepLineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void KeyboardFocusableScrollersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LangAttributeAwareFormControlUIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LangClientHintHeaderEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutJankAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutNGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutNGBlockFragmentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutNGFieldsetEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutNGFlexBoxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LayoutNGFragmentCachingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LazyFrameLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LazyFrameVisibleLoadTimeMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LazyImageLoadingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LazyImageVisibleLoadTimeMetricsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LazyInitializeMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LegacyPerformanceMemoryCountersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void LongTaskV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ManualSlottingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaCapabilitiesEncodingInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaCapabilitiesEncryptedMediaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaCaptureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaCaptureDepthVideoKindEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaCastOverlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaControlsExpandGestureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaControlsOverlayPlayButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaControlsOverlayPlayButtonEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaDocumentDownloadButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaEngagementBypassAutoplayPoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaQueryPrefersColorSchemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaQueryShapeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaSessionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaSourceExperimentalEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaSourceNewAbortAndDurationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MediaStreamTrackContentHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MergeBlockingNonBlockingPoolsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MetaColorSchemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MiddleClickAutoscrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MimeHandlerViewInCrossProcessFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MobileLayoutThemeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ModernMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ModuleDedicatedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ModuleServiceWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MojoJSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MojoJSTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MovementXYInBlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void MuteButtonEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NativeFileSystemEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NativeStreamsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NavigatorContentUtilsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NavigatorDeviceMemoryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NavigatorLanguageInInsecureContextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NavigatorLanguageInInsecureContextEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NetInfoDownlinkMaxEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NetworkServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NewRemotePlaybackPipelineEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NoIdleEncodingForWebTestsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NotificationConstructorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NotificationContentImageEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NotificationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void NotificationTriggersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OffMainThreadCSSPaintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OffscreenCanvasEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OffscreenCanvasCommitEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OffscreenCanvasTextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OnDeviceChangeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OrientationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsSampleAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsSampleAPIDependentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsSampleAPIImpliedEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsSampleAPIInvalidOSEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OriginTrialsSampleAPINavigationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OutOfBlinkCorsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OverflowIconsForMediaControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OverlayScrollbarsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OverlayScrollbarsEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OverscrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void OverscrollCustomizationEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PageLifecycleTransitionsOptInEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PageLifecycleTransitionsOptOutEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PagePopupEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaintUnderInvalidationCheckingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaintUnderInvalidationCheckingEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PassiveDocumentEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PassiveDocumentWheelEventListenersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PassPaintVisualRectToCompositorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentAppEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentHandlerChangePaymentMethodEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentMethodChangeEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentRequestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentRequestHasEnrolledInstrumentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentRequestMerchantValidationEventEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PaymentRetryEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PerformanceManagerInstrumentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PerformanceObserverBufferedFlagEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PeriodicBackgroundSyncEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PeriodicBackgroundSyncEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PerMethodCanMakePaymentQuotaEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PermissionDelegationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PermissionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PermissionsRequestRevokeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PictureInPictureEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PictureInPictureEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PictureInPictureAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PictureInPictureV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PictureInPictureV2EnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PointerRawUpdateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PortalsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PostAnimationFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PreciseMemoryInfoEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PredictedEventsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PrefixedVideoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PresentationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PrintBrowserEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PriorityHintsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void PushMessagingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RasterInducingScrollEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ReducedReferrerGranularityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RemotePlaybackEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RemotePlaybackBackendEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RemotePlaybackBackendEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RenderingPipelineThrottlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ResourceLoadSchedulerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RestrictAppCacheToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RestrictDeviceSensorEventsToSecureContextsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RestrictLazyFrameLoadingToDataSaverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RestrictLazyImageLoadingToDataSaverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCAudioJitterBufferMaxPacketsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCAudioJitterBufferRtxHandlingEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCDtlsTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCIceTransportExtensionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCJitterBufferDelayHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCQuicTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCRtpSenderParametersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCSctpTransportEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCStatsRelativePacketArrivalDelayEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCUnifiedPlanEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void RTCUnifiedPlanByDefaultEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScriptedSpeechRecognitionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScriptedSpeechSynthesisEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScriptStreamingOnPreloadEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollAnchorSerializationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollCustomizationEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ScrollTopLeftInteropEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SendBeaconThrowForBlobWithNonSimpleTypeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SendMouseEventsDisabledFormControlsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SensorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SensorExtraClassesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SerialEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetRootScrollerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShadowDOMV0EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShadowPiercingDescendantCombinatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void ShapeDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SharedArrayBufferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SharedWorkerEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SignatureBasedIntegrityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SignedExchangeSubresourcePrefetchEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SkipAdEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SkipTouchEventFilterEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SkipTouchEventFilterEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SmoothScrollJSInterventionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SmsReceiverEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SpeechSynthesisEventCharLengthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StableBlinkFeaturesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StackedCSSPropertyAnimationsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StaleWhileRevalidateEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StorageQuotaDetailsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void StreamsNativeEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TextFragmentIdentifiersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TextUnderlinePositionLeftRightEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TimerThrottlingForBackgroundTabsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TimerThrottlingForHiddenFramesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TouchEventFeatureDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TrackLayoutPassesPerBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TransferableStreamsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TranslateServiceEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void TrustedDOMTypesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnclosedFormControlIsInvalidEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnifiedPointerCaptureInBlinkEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnifiedTouchAdjustmentEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UnoptimizedImagePoliciesEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateHoverFromLayoutChangeAtBeginFrameEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateHoverFromScrollAtBeginFrameEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UpdateHoverFromScrollAtBeginFrameEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserActivationAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserActivationPostMessageTransferEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserActivationSameOriginVisibilityEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserActivationV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void UserAgentClientHintEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void V8IdleTasksEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VideoAutoFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VideoAutoFullscreenEnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VideoFullscreenDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VideoFullscreenOrientationLockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VideoRotateToFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void VisibilityCollapseColumnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WakeLockNavigatorEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WasmCodeCacheEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebAnimationsAPIEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebAnimationsSVGEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebAssemblyThreadsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebAuthEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebBluetoothEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebBluetoothScanningEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebGL2ComputeContextEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebGLDraftExtensionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebGLImageChromiumEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebGPUEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebHIDEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebNFCEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebShareEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebShareV2EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebUSBEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebUSBOnDedicatedWorkersEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebVREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebVTTRegionsEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebXREnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebXRHitTestEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WebXRPlaneDetectionEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WorkerNosniffBlockEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WorkerNosniffWarnEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void WorkerTaskQueueEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void XsltEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalRuntimeFlags> : public NativeValueTraitsBase<InternalRuntimeFlags> {
  static InternalRuntimeFlags* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalRuntimeFlags* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalRuntimeFlags> {
  typedef V8InternalRuntimeFlags Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_RUNTIME_FLAGS_H_
