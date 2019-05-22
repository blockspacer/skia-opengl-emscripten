// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features_test_helpers.h.tmpl
// and input files:
//   /home/avakimov_am/skia-opengl-emscripten/src/chromium/third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
#define RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_

#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/assertions.h"

namespace blink {

template <bool (&getter)(), void (&setter)(bool)>
class ScopedRuntimeEnabledFeatureForTest {
 public:
  ScopedRuntimeEnabledFeatureForTest(bool enabled)
      : enabled_(enabled), original_(getter()) {
    setter(enabled);
  }

  ~ScopedRuntimeEnabledFeatureForTest() {
    CHECK_EQ(enabled_, getter());
    setter(original_);
  }

 private:
  bool enabled_;
  bool original_;
};

typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Accelerated2dCanvasEnabled,
    RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled>
    ScopedAccelerated2dCanvasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AccessibilityObjectModelEnabled,
    RuntimeEnabledFeatures::SetAccessibilityObjectModelEnabled>
    ScopedAccessibilityObjectModelForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AdTaggingEnabled,
    RuntimeEnabledFeatures::SetAdTaggingEnabled>
    ScopedAdTaggingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled,
    RuntimeEnabledFeatures::SetAllowActivationDelegationAttrEnabled>
    ScopedAllowActivationDelegationAttrForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled,
    RuntimeEnabledFeatures::SetAllowContentInitiatedDataUrlNavigationsEnabled>
    ScopedAllowContentInitiatedDataUrlNavigationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetAnimationWorkletEnabled>
    ScopedAnimationWorkletForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AsyncClipboardEnabled,
    RuntimeEnabledFeatures::SetAsyncClipboardEnabled>
    ScopedAsyncClipboardForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AudioOutputDevicesEnabled,
    RuntimeEnabledFeatures::SetAudioOutputDevicesEnabled>
    ScopedAudioOutputDevicesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AudioVideoTracksEnabled,
    RuntimeEnabledFeatures::SetAudioVideoTracksEnabled>
    ScopedAudioVideoTracksForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutomationControlledEnabled,
    RuntimeEnabledFeatures::SetAutomationControlledEnabled>
    ScopedAutomationControlledForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutoPictureInPictureEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetAutoPictureInPictureEnabled>
    ScopedAutoPictureInPictureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled,
    RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled>
    ScopedAutoplayIgnoresWebAudioForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BackgroundFetchEnabled,
    RuntimeEnabledFeatures::SetBackgroundFetchEnabled>
    ScopedBackgroundFetchForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled,
    RuntimeEnabledFeatures::SetBackgroundVideoTrackOptimizationEnabled>
    ScopedBackgroundVideoTrackOptimizationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BadgingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetBadgingEnabled>
    ScopedBadgingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BidiCaretAffinityEnabled,
    RuntimeEnabledFeatures::SetBidiCaretAffinityEnabled>
    ScopedBidiCaretAffinityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled,
    RuntimeEnabledFeatures::SetBlinkGenPropertyTreesEnabled>
    ScopedBlinkGenPropertyTreesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled,
    RuntimeEnabledFeatures::SetBlinkRuntimeCallStatsEnabled>
    ScopedBlinkRuntimeCallStatsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BloatedRendererDetectionEnabled,
    RuntimeEnabledFeatures::SetBloatedRendererDetectionEnabled>
    ScopedBloatedRendererDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BloatedRendererDetectionSkipUptimeCheckEnabled,
    RuntimeEnabledFeatures::SetBloatedRendererDetectionSkipUptimeCheckEnabled>
    ScopedBloatedRendererDetectionSkipUptimeCheckForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlobReadMethodsEnabled,
    RuntimeEnabledFeatures::SetBlobReadMethodsEnabled>
    ScopedBlobReadMethodsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled,
    RuntimeEnabledFeatures::SetBlockCredentialedSubresourcesEnabled>
    ScopedBlockCredentialedSubresourcesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockingDownloadsInSandboxWithoutUserActivationEnabled,
    RuntimeEnabledFeatures::SetBlockingDownloadsInSandboxWithoutUserActivationEnabled>
    ScopedBlockingDownloadsInSandboxWithoutUserActivationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BlockMetaSetCookieEnabled,
    RuntimeEnabledFeatures::SetBlockMetaSetCookieEnabled>
    ScopedBlockMetaSetCookieForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BuiltInModuleAllEnabled,
    RuntimeEnabledFeatures::SetBuiltInModuleAllEnabled>
    ScopedBuiltInModuleAllForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BuiltInModuleInfraEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetBuiltInModuleInfraEnabled>
    ScopedBuiltInModuleInfraForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetBuiltInModuleKvStorageEnabled>
    ScopedBuiltInModuleKvStorageForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled,
    RuntimeEnabledFeatures::SetCacheInlineScriptCodeEnabled>
    ScopedCacheInlineScriptCodeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CacheStorageAddAllRejectsDuplicatesEnabled,
    RuntimeEnabledFeatures::SetCacheStorageAddAllRejectsDuplicatesEnabled>
    ScopedCacheStorageAddAllRejectsDuplicatesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabled,
    RuntimeEnabledFeatures::SetCallCaptureListenersAtCapturePhaseAtShadowHostsEnabled>
    ScopedCallCaptureListenersAtCapturePhaseAtShadowHostsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled,
    RuntimeEnabledFeatures::SetCanvas2dContextLostRestoredEnabled>
    ScopedCanvas2dContextLostRestoredForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled,
    RuntimeEnabledFeatures::SetCanvas2dFixedRenderingModeEnabled>
    ScopedCanvas2dFixedRenderingModeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled,
    RuntimeEnabledFeatures::SetCanvas2dImageChromiumEnabled>
    ScopedCanvas2dImageChromiumForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled,
    RuntimeEnabledFeatures::SetCanvas2dScrollPathIntoViewEnabled>
    ScopedCanvas2dScrollPathIntoViewForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasColorManagementEnabled,
    RuntimeEnabledFeatures::SetCanvasColorManagementEnabled>
    ScopedCanvasColorManagementForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasHitRegionEnabled,
    RuntimeEnabledFeatures::SetCanvasHitRegionEnabled>
    ScopedCanvasHitRegionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CanvasImageSmoothingEnabled,
    RuntimeEnabledFeatures::SetCanvasImageSmoothingEnabled>
    ScopedCanvasImageSmoothingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ClickRetargettingEnabled,
    RuntimeEnabledFeatures::SetClickRetargettingEnabled>
    ScopedClickRetargettingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled,
    RuntimeEnabledFeatures::SetClientPlaceholdersForServerLoFiEnabled>
    ScopedClientPlaceholdersForServerLoFiForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositeAfterPaintEnabled,
    RuntimeEnabledFeatures::SetCompositeAfterPaintEnabled>
    ScopedCompositeAfterPaintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled,
    RuntimeEnabledFeatures::SetCompositedSelectionUpdateEnabled>
    ScopedCompositedSelectionUpdateForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CompositorTouchActionEnabled,
    RuntimeEnabledFeatures::SetCompositorTouchActionEnabled>
    ScopedCompositorTouchActionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled,
    RuntimeEnabledFeatures::SetComputedAccessibilityInfoEnabled>
    ScopedComputedAccessibilityInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ContactsManagerEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetContactsManagerEnabled>
    ScopedContactsManagerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ContextMenuEnabled,
    RuntimeEnabledFeatures::SetContextMenuEnabled>
    ScopedContextMenuForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CookieStoreEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetCookieStoreEnabled>
    ScopedCookieStoreForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CorsRFC1918Enabled,
    RuntimeEnabledFeatures::SetCorsRFC1918Enabled>
    ScopedCorsRFC1918ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSS3TextEnabled,
    RuntimeEnabledFeatures::SetCSS3TextEnabled>
    ScopedCSS3TextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled,
    RuntimeEnabledFeatures::SetCSSAdditiveAnimationsEnabled>
    ScopedCSSAdditiveAnimationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSAltTextEnabled,
    RuntimeEnabledFeatures::SetCSSAltTextEnabled>
    ScopedCSSAltTextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSBackdropFilterEnabled,
    RuntimeEnabledFeatures::SetCSSBackdropFilterEnabled>
    ScopedCSSBackdropFilterForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSCalcAsIntEnabled,
    RuntimeEnabledFeatures::SetCSSCalcAsIntEnabled>
    ScopedCSSCalcAsIntForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSFocusVisibleEnabled,
    RuntimeEnabledFeatures::SetCSSFocusVisibleEnabled>
    ScopedCSSFocusVisibleForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled,
    RuntimeEnabledFeatures::SetCSSFontFeatureValuesEnabled>
    ScopedCSSFontFeatureValuesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled,
    RuntimeEnabledFeatures::SetCSSFontSizeAdjustEnabled>
    ScopedCSSFontSizeAdjustForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSHexAlphaColorEnabled,
    RuntimeEnabledFeatures::SetCSSHexAlphaColorEnabled>
    ScopedCSSHexAlphaColorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled,
    RuntimeEnabledFeatures::SetCSSIndependentTransformPropertiesEnabled>
    ScopedCSSIndependentTransformPropertiesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSLayoutAPIEnabled,
    RuntimeEnabledFeatures::SetCSSLayoutAPIEnabled>
    ScopedCSSLayoutAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSLogicalEnabled,
    RuntimeEnabledFeatures::SetCSSLogicalEnabled>
    ScopedCSSLogicalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled,
    RuntimeEnabledFeatures::SetCSSMaskSourceTypeEnabled>
    ScopedCSSMaskSourceTypeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPathRayEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPathRayEnabled>
    ScopedCSSOffsetPathRayForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPathRayContainEnabled>
    ScopedCSSOffsetPathRayContainForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled,
    RuntimeEnabledFeatures::SetCSSOffsetPositionAnchorEnabled>
    ScopedCSSOffsetPositionAnchorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled,
    RuntimeEnabledFeatures::SetCSSPaintAPIArgumentsEnabled>
    ScopedCSSPaintAPIArgumentsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPartPseudoElementEnabled,
    RuntimeEnabledFeatures::SetCSSPartPseudoElementEnabled>
    ScopedCSSPartPseudoElementForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPictureInPictureEnabled,
    RuntimeEnabledFeatures::SetCSSPictureInPictureEnabled>
    ScopedCSSPictureInPictureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPseudoIsEnabled,
    RuntimeEnabledFeatures::SetCSSPseudoIsEnabled>
    ScopedCSSPseudoIsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSPseudoWhereEnabled,
    RuntimeEnabledFeatures::SetCSSPseudoWhereEnabled>
    ScopedCSSPseudoWhereForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSSnapSizeEnabled,
    RuntimeEnabledFeatures::SetCSSSnapSizeEnabled>
    ScopedCSSSnapSizeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSVariables2Enabled,
    RuntimeEnabledFeatures::SetCSSVariables2Enabled>
    ScopedCSSVariables2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSVariables2ImageValuesEnabled,
    RuntimeEnabledFeatures::SetCSSVariables2ImageValuesEnabled>
    ScopedCSSVariables2ImageValuesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSVariables2TransformValuesEnabled,
    RuntimeEnabledFeatures::SetCSSVariables2TransformValuesEnabled>
    ScopedCSSVariables2TransformValuesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CSSViewportEnabled,
    RuntimeEnabledFeatures::SetCSSViewportEnabled>
    ScopedCSSViewportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled,
    RuntimeEnabledFeatures::SetCustomElementDefaultStyleEnabled>
    ScopedCustomElementDefaultStyleForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomElementsV0EnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetCustomElementsV0Enabled>
    ScopedCustomElementsV0ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::CustomUserTimingEnabled,
    RuntimeEnabledFeatures::SetCustomUserTimingEnabled>
    ScopedCustomUserTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DatabaseEnabled,
    RuntimeEnabledFeatures::SetDatabaseEnabled>
    ScopedDatabaseForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DecodeToYUVEnabled,
    RuntimeEnabledFeatures::SetDecodeToYUVEnabled>
    ScopedDecodeToYUVForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled,
    RuntimeEnabledFeatures::SetDesktopCaptureDisableLocalEchoControlEnabled>
    ScopedDesktopCaptureDisableLocalEchoControlForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetDisableHardwareNoiseSuppressionEnabled>
    ScopedDisableHardwareNoiseSuppressionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisplayCutoutAPIEnabled,
    RuntimeEnabledFeatures::SetDisplayCutoutAPIEnabled>
    ScopedDisplayCutoutAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DisplayLockingEnabled,
    RuntimeEnabledFeatures::SetDisplayLockingEnabled>
    ScopedDisplayLockingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentCookieEnabled,
    RuntimeEnabledFeatures::SetDocumentCookieEnabled>
    ScopedDocumentCookieForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentDomainEnabled,
    RuntimeEnabledFeatures::SetDocumentDomainEnabled>
    ScopedDocumentDomainForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::DocumentWriteEnabled,
    RuntimeEnabledFeatures::SetDocumentWriteEnabled>
    ScopedDocumentWriteForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EditingNGEnabled,
    RuntimeEnabledFeatures::SetEditingNGEnabled>
    ScopedEditingNGForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ElementInternalsEnabled,
    RuntimeEnabledFeatures::SetElementInternalsEnabled>
    ScopedElementInternalsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ElementTimingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetElementTimingEnabled>
    ScopedElementTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EncryptedMediaEncryptionSchemeQueryEnabled,
    RuntimeEnabledFeatures::SetEncryptedMediaEncryptionSchemeQueryEnabled>
    ScopedEncryptedMediaEncryptionSchemeQueryForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled,
    RuntimeEnabledFeatures::SetEncryptedMediaHdcpPolicyCheckEnabled>
    ScopedEncryptedMediaHdcpPolicyCheckForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EncryptedMediaPersistentUsageRecordSessionEnabled,
    RuntimeEnabledFeatures::SetEncryptedMediaPersistentUsageRecordSessionEnabled>
    ScopedEncryptedMediaPersistentUsageRecordSessionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::EventTimingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetEventTimingEnabled>
    ScopedEventTimingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled,
    RuntimeEnabledFeatures::SetExecCommandInJavaScriptEnabled>
    ScopedExecCommandInJavaScriptForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled,
    RuntimeEnabledFeatures::SetExpensiveBackgroundTimerThrottlingEnabled>
    ScopedExpensiveBackgroundTimerThrottlingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled,
    RuntimeEnabledFeatures::SetExperimentalContentSecurityPolicyFeaturesEnabled>
    ScopedExperimentalContentSecurityPolicyFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetExperimentalIsInputPendingEnabled>
    ScopedExperimentalIsInputPendingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled,
    RuntimeEnabledFeatures::SetExperimentalProductivityFeaturesEnabled>
    ScopedExperimentalProductivityFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExtendedTextMetricsEnabled,
    RuntimeEnabledFeatures::SetExtendedTextMetricsEnabled>
    ScopedExtendedTextMetricsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled,
    RuntimeEnabledFeatures::SetExtraWebGLVideoTextureMetadataEnabled>
    ScopedExtraWebGLVideoTextureMetadataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FallbackCursorModeEnabled,
    RuntimeEnabledFeatures::SetFallbackCursorModeEnabled>
    ScopedFallbackCursorModeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FastBorderRadiusEnabled,
    RuntimeEnabledFeatures::SetFastBorderRadiusEnabled>
    ScopedFastBorderRadiusForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FastFlatTreeTraversalEnabled,
    RuntimeEnabledFeatures::SetFastFlatTreeTraversalEnabled>
    ScopedFastFlatTreeTraversalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FastMobileScrollingEnabled,
    RuntimeEnabledFeatures::SetFastMobileScrollingEnabled>
    ScopedFastMobileScrollingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyForSandboxEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyForSandboxEnabled>
    ScopedFeaturePolicyForSandboxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyJavaScriptInterfaceEnabled>
    ScopedFeaturePolicyJavaScriptInterfaceForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyReportingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetFeaturePolicyReportingEnabled>
    ScopedFeaturePolicyReportingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled,
    RuntimeEnabledFeatures::SetFeaturePolicyVibrateFeatureEnabled>
    ScopedFeaturePolicyVibrateFeatureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FetchMetadataEnabled,
    RuntimeEnabledFeatures::SetFetchMetadataEnabled>
    ScopedFetchMetadataForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FetchMetadataDestinationEnabled,
    RuntimeEnabledFeatures::SetFetchMetadataDestinationEnabled>
    ScopedFetchMetadataDestinationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FileSystemEnabled,
    RuntimeEnabledFeatures::SetFileSystemEnabled>
    ScopedFileSystemForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FirstContentfulPaintPlusPlusEnabled,
    RuntimeEnabledFeatures::SetFirstContentfulPaintPlusPlusEnabled>
    ScopedFirstContentfulPaintPlusPlusForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FocuslessSpatialNavigationEnabled,
    RuntimeEnabledFeatures::SetFocuslessSpatialNavigationEnabled>
    ScopedFocuslessSpatialNavigationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FontSrcLocalMatchingEnabled,
    RuntimeEnabledFeatures::SetFontSrcLocalMatchingEnabled>
    ScopedFontSrcLocalMatchingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForbidSyncXHRInPageDismissalEnabled,
    RuntimeEnabledFeatures::SetForbidSyncXHRInPageDismissalEnabled>
    ScopedForbidSyncXHRInPageDismissalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled,
    RuntimeEnabledFeatures::SetForceOverlayFullscreenVideoEnabled>
    ScopedForceOverlayFullscreenVideoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForceSynchronousHTMLParsingEnabled,
    RuntimeEnabledFeatures::SetForceSynchronousHTMLParsingEnabled>
    ScopedForceSynchronousHTMLParsingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled,
    RuntimeEnabledFeatures::SetForceTallerSelectPopupEnabled>
    ScopedForceTallerSelectPopupForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FormAssociatedCustomElementsEnabled,
    RuntimeEnabledFeatures::SetFormAssociatedCustomElementsEnabled>
    ScopedFormAssociatedCustomElementsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FormDataEventEnabled,
    RuntimeEnabledFeatures::SetFormDataEventEnabled>
    ScopedFormDataEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FractionalMouseEventEnabled,
    RuntimeEnabledFeatures::SetFractionalMouseEventEnabled>
    ScopedFractionalMouseEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled,
    RuntimeEnabledFeatures::SetFractionalScrollOffsetsEnabled>
    ScopedFractionalScrollOffsetsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::FreezeFramesOnVisibilityEnabled,
    RuntimeEnabledFeatures::SetFreezeFramesOnVisibilityEnabled>
    ScopedFreezeFramesOnVisibilityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled,
    RuntimeEnabledFeatures::SetGamepadButtonAxisEventsEnabled>
    ScopedGamepadButtonAxisEventsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::GetDisplayMediaEnabled,
    RuntimeEnabledFeatures::SetGetDisplayMediaEnabled>
    ScopedGetDisplayMediaForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapCompactionEnabled,
    RuntimeEnabledFeatures::SetHeapCompactionEnabled>
    ScopedHeapCompactionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapConcurrentMarkingEnabled,
    RuntimeEnabledFeatures::SetHeapConcurrentMarkingEnabled>
    ScopedHeapConcurrentMarkingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled,
    RuntimeEnabledFeatures::SetHeapIncrementalMarkingEnabled>
    ScopedHeapIncrementalMarkingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled,
    RuntimeEnabledFeatures::SetHeapIncrementalMarkingStressEnabled>
    ScopedHeapIncrementalMarkingStressForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HrefTranslateEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetHrefTranslateEnabled>
    ScopedHrefTranslateForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HTMLImportsEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetHTMLImportsEnabled>
    ScopedHTMLImportsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HTMLImportsOnlyChromeEnabled,
    RuntimeEnabledFeatures::SetHTMLImportsOnlyChromeEnabled>
    ScopedHTMLImportsOnlyChromeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled,
    RuntimeEnabledFeatures::SetHTMLImportsStyleApplicationEnabled>
    ScopedHTMLImportsStyleApplicationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IDBObserverEnabled,
    RuntimeEnabledFeatures::SetIDBObserverEnabled>
    ScopedIDBObserverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IDBTransactionCommitEnabled,
    RuntimeEnabledFeatures::SetIDBTransactionCommitEnabled>
    ScopedIDBTransactionCommitForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IdleDetectionEnabled,
    RuntimeEnabledFeatures::SetIdleDetectionEnabled>
    ScopedIdleDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled,
    RuntimeEnabledFeatures::SetIgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled>
    ScopedIgnoreCrossOriginWindowWhenNamedAccessOnWindowForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ImageOrientationEnabled,
    RuntimeEnabledFeatures::SetImageOrientationEnabled>
    ScopedImageOrientationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ImplicitRootScrollerEnabled,
    RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled>
    ScopedImplicitRootScrollerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InertAttributeEnabled,
    RuntimeEnabledFeatures::SetInertAttributeEnabled>
    ScopedInertAttributeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled,
    RuntimeEnabledFeatures::SetInputMultipleFieldsUIEnabled>
    ScopedInputMultipleFieldsUIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetInstalledAppEnabled>
    ScopedInstalledAppForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IntersectionObserverV2Enabled,
    RuntimeEnabledFeatures::SetIntersectionObserverV2Enabled>
    ScopedIntersectionObserverV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::InvisibleDOMEnabled,
    RuntimeEnabledFeatures::SetInvisibleDOMEnabled>
    ScopedInvisibleDOMForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IsolatedCodeCacheEnabled,
    RuntimeEnabledFeatures::SetIsolatedCodeCacheEnabled>
    ScopedIsolatedCodeCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::IsolatedWorldCSPEnabled,
    RuntimeEnabledFeatures::SetIsolatedWorldCSPEnabled>
    ScopedIsolatedWorldCSPForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::JankTrackingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetJankTrackingEnabled>
    ScopedJankTrackingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::JankTrackingSweepLineEnabled,
    RuntimeEnabledFeatures::SetJankTrackingSweepLineEnabled>
    ScopedJankTrackingSweepLineForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::KeyboardFocusableScrollersEnabled,
    RuntimeEnabledFeatures::SetKeyboardFocusableScrollersEnabled>
    ScopedKeyboardFocusableScrollersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled,
    RuntimeEnabledFeatures::SetLangAttributeAwareFormControlUIEnabled>
    ScopedLangAttributeAwareFormControlUIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LangClientHintHeaderEnabled,
    RuntimeEnabledFeatures::SetLangClientHintHeaderEnabled>
    ScopedLangClientHintHeaderForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutJankAPIEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetLayoutJankAPIEnabled>
    ScopedLayoutJankAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGEnabled,
    RuntimeEnabledFeatures::SetLayoutNGEnabled>
    ScopedLayoutNGForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled,
    RuntimeEnabledFeatures::SetLayoutNGBlockFragmentationEnabled>
    ScopedLayoutNGBlockFragmentationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGFieldsetEnabled,
    RuntimeEnabledFeatures::SetLayoutNGFieldsetEnabled>
    ScopedLayoutNGFieldsetForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled,
    RuntimeEnabledFeatures::SetLayoutNGFlexBoxEnabled>
    ScopedLayoutNGFlexBoxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled,
    RuntimeEnabledFeatures::SetLayoutNGFragmentCachingEnabled>
    ScopedLayoutNGFragmentCachingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyFrameLoadingEnabled,
    RuntimeEnabledFeatures::SetLazyFrameLoadingEnabled>
    ScopedLazyFrameLoadingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyFrameVisibleLoadTimeMetricsEnabled,
    RuntimeEnabledFeatures::SetLazyFrameVisibleLoadTimeMetricsEnabled>
    ScopedLazyFrameVisibleLoadTimeMetricsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyImageLoadingEnabled,
    RuntimeEnabledFeatures::SetLazyImageLoadingEnabled>
    ScopedLazyImageLoadingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyImageVisibleLoadTimeMetricsEnabled,
    RuntimeEnabledFeatures::SetLazyImageVisibleLoadTimeMetricsEnabled>
    ScopedLazyImageVisibleLoadTimeMetricsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled,
    RuntimeEnabledFeatures::SetLazyInitializeMediaControlsEnabled>
    ScopedLazyInitializeMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetLegacyPerformanceMemoryCountersEnabled>
    ScopedLegacyPerformanceMemoryCountersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::LongTaskV2Enabled,
    RuntimeEnabledFeatures::SetLongTaskV2Enabled>
    ScopedLongTaskV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ManualSlottingEnabled,
    RuntimeEnabledFeatures::SetManualSlottingEnabled>
    ScopedManualSlottingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled,
    RuntimeEnabledFeatures::SetMediaCapabilitiesEncodingInfoEnabled>
    ScopedMediaCapabilitiesEncodingInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetMediaCapabilitiesEncryptedMediaEnabled>
    ScopedMediaCapabilitiesEncryptedMediaForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureEnabled>
    ScopedMediaCaptureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled,
    RuntimeEnabledFeatures::SetMediaCaptureDepthVideoKindEnabled>
    ScopedMediaCaptureDepthVideoKindForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled,
    RuntimeEnabledFeatures::SetMediaCastOverlayButtonEnabled>
    ScopedMediaCastOverlayButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaControlsExpandGestureEnabled,
    RuntimeEnabledFeatures::SetMediaControlsExpandGestureEnabled>
    ScopedMediaControlsExpandGestureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled,
    RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled>
    ScopedMediaControlsOverlayPlayButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled,
    RuntimeEnabledFeatures::SetMediaDocumentDownloadButtonEnabled>
    ScopedMediaDocumentDownloadButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled,
    RuntimeEnabledFeatures::SetMediaEngagementBypassAutoplayPoliciesEnabled>
    ScopedMediaEngagementBypassAutoplayPoliciesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaQueryPrefersColorSchemeEnabled,
    RuntimeEnabledFeatures::SetMediaQueryPrefersColorSchemeEnabled>
    ScopedMediaQueryPrefersColorSchemeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaQueryShapeEnabled,
    RuntimeEnabledFeatures::SetMediaQueryShapeEnabled>
    ScopedMediaQueryShapeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSessionEnabled,
    RuntimeEnabledFeatures::SetMediaSessionEnabled>
    ScopedMediaSessionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSourceExperimentalEnabled,
    RuntimeEnabledFeatures::SetMediaSourceExperimentalEnabled>
    ScopedMediaSourceExperimentalForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled,
    RuntimeEnabledFeatures::SetMediaSourceNewAbortAndDurationEnabled>
    ScopedMediaSourceNewAbortAndDurationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled,
    RuntimeEnabledFeatures::SetMediaStreamTrackContentHintEnabled>
    ScopedMediaStreamTrackContentHintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MergeBlockingNonBlockingPoolsEnabled,
    RuntimeEnabledFeatures::SetMergeBlockingNonBlockingPoolsEnabled>
    ScopedMergeBlockingNonBlockingPoolsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MetaColorSchemeEnabled,
    RuntimeEnabledFeatures::SetMetaColorSchemeEnabled>
    ScopedMetaColorSchemeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled,
    RuntimeEnabledFeatures::SetMiddleClickAutoscrollEnabled>
    ScopedMiddleClickAutoscrollForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MimeHandlerViewInCrossProcessFrameEnabled,
    RuntimeEnabledFeatures::SetMimeHandlerViewInCrossProcessFrameEnabled>
    ScopedMimeHandlerViewInCrossProcessFrameForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MobileLayoutThemeEnabled,
    RuntimeEnabledFeatures::SetMobileLayoutThemeEnabled>
    ScopedMobileLayoutThemeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModernMediaControlsEnabled,
    RuntimeEnabledFeatures::SetModernMediaControlsEnabled>
    ScopedModernMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled,
    RuntimeEnabledFeatures::SetModuleDedicatedWorkerEnabled>
    ScopedModuleDedicatedWorkerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ModuleServiceWorkerEnabled,
    RuntimeEnabledFeatures::SetModuleServiceWorkerEnabled>
    ScopedModuleServiceWorkerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MojoJSEnabled,
    RuntimeEnabledFeatures::SetMojoJSEnabled>
    ScopedMojoJSForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MojoJSTestEnabled,
    RuntimeEnabledFeatures::SetMojoJSTestEnabled>
    ScopedMojoJSTestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MovementXYInBlinkEnabled,
    RuntimeEnabledFeatures::SetMovementXYInBlinkEnabled>
    ScopedMovementXYInBlinkForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::MuteButtonEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetMuteButtonEnabled>
    ScopedMuteButtonForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NativeFileSystemEnabled,
    RuntimeEnabledFeatures::SetNativeFileSystemEnabled>
    ScopedNativeFileSystemForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NativeStreamsEnabled,
    RuntimeEnabledFeatures::SetNativeStreamsEnabled>
    ScopedNativeStreamsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NavigatorContentUtilsEnabled,
    RuntimeEnabledFeatures::SetNavigatorContentUtilsEnabled>
    ScopedNavigatorContentUtilsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled,
    RuntimeEnabledFeatures::SetNavigatorDeviceMemoryEnabled>
    ScopedNavigatorDeviceMemoryForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NavigatorLanguageInInsecureContextEnabled,
    RuntimeEnabledFeatures::SetNavigatorLanguageInInsecureContextEnabled>
    ScopedNavigatorLanguageInInsecureContextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled,
    RuntimeEnabledFeatures::SetNetInfoDownlinkMaxEnabled>
    ScopedNetInfoDownlinkMaxForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NetworkServiceEnabled,
    RuntimeEnabledFeatures::SetNetworkServiceEnabled>
    ScopedNetworkServiceForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled,
    RuntimeEnabledFeatures::SetNewRemotePlaybackPipelineEnabled>
    ScopedNewRemotePlaybackPipelineForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NoIdleEncodingForWebTestsEnabled,
    RuntimeEnabledFeatures::SetNoIdleEncodingForWebTestsEnabled>
    ScopedNoIdleEncodingForWebTestsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationConstructorEnabled,
    RuntimeEnabledFeatures::SetNotificationConstructorEnabled>
    ScopedNotificationConstructorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationContentImageEnabled,
    RuntimeEnabledFeatures::SetNotificationContentImageEnabled>
    ScopedNotificationContentImageForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationsEnabled,
    RuntimeEnabledFeatures::SetNotificationsEnabled>
    ScopedNotificationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::NotificationTriggersEnabled,
    RuntimeEnabledFeatures::SetNotificationTriggersEnabled>
    ScopedNotificationTriggersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffMainThreadCSSPaintEnabled,
    RuntimeEnabledFeatures::SetOffMainThreadCSSPaintEnabled>
    ScopedOffMainThreadCSSPaintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffscreenCanvasEnabled,
    RuntimeEnabledFeatures::SetOffscreenCanvasEnabled>
    ScopedOffscreenCanvasForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled,
    RuntimeEnabledFeatures::SetOffscreenCanvasCommitEnabled>
    ScopedOffscreenCanvasCommitForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OffscreenCanvasTextEnabled,
    RuntimeEnabledFeatures::SetOffscreenCanvasTextEnabled>
    ScopedOffscreenCanvasTextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OnDeviceChangeEnabled,
    RuntimeEnabledFeatures::SetOnDeviceChangeEnabled>
    ScopedOnDeviceChangeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OrientationEventEnabled,
    RuntimeEnabledFeatures::SetOrientationEventEnabled>
    ScopedOrientationEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsEnabled,
    RuntimeEnabledFeatures::SetOriginTrialsEnabled>
    ScopedOriginTrialsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIEnabled>
    ScopedOriginTrialsSampleAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIDependentEnabled>
    ScopedOriginTrialsSampleAPIDependentForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIImpliedEnabled>
    ScopedOriginTrialsSampleAPIImpliedForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPIInvalidOSEnabled>
    ScopedOriginTrialsSampleAPIInvalidOSForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetOriginTrialsSampleAPINavigationEnabled>
    ScopedOriginTrialsSampleAPINavigationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OutOfBlinkCorsEnabled,
    RuntimeEnabledFeatures::SetOutOfBlinkCorsEnabled>
    ScopedOutOfBlinkCorsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled,
    RuntimeEnabledFeatures::SetOverflowIconsForMediaControlsEnabled>
    ScopedOverflowIconsForMediaControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OverlayScrollbarsEnabled,
    RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled>
    ScopedOverlayScrollbarsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::OverscrollCustomizationEnabled,
    RuntimeEnabledFeatures::SetOverscrollCustomizationEnabled>
    ScopedOverscrollCustomizationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetPageLifecycleTransitionsOptInEnabled>
    ScopedPageLifecycleTransitionsOptInForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetPageLifecycleTransitionsOptOutEnabled>
    ScopedPageLifecycleTransitionsOptOutForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PagePopupEnabled,
    RuntimeEnabledFeatures::SetPagePopupEnabled>
    ScopedPagePopupForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled,
    RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled>
    ScopedPaintUnderInvalidationCheckingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled,
    RuntimeEnabledFeatures::SetPassiveDocumentEventListenersEnabled>
    ScopedPassiveDocumentEventListenersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PassiveDocumentWheelEventListenersEnabled,
    RuntimeEnabledFeatures::SetPassiveDocumentWheelEventListenersEnabled>
    ScopedPassiveDocumentWheelEventListenersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled,
    RuntimeEnabledFeatures::SetPassPaintVisualRectToCompositorEnabled>
    ScopedPassPaintVisualRectToCompositorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentAppEnabled,
    RuntimeEnabledFeatures::SetPaymentAppEnabled>
    ScopedPaymentAppForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentHandlerChangePaymentMethodEnabled,
    RuntimeEnabledFeatures::SetPaymentHandlerChangePaymentMethodEnabled>
    ScopedPaymentHandlerChangePaymentMethodForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled,
    RuntimeEnabledFeatures::SetPaymentMethodChangeEventEnabled>
    ScopedPaymentMethodChangeEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRequestEnabled,
    RuntimeEnabledFeatures::SetPaymentRequestEnabled>
    ScopedPaymentRequestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRequestHasEnrolledInstrumentEnabled,
    RuntimeEnabledFeatures::SetPaymentRequestHasEnrolledInstrumentEnabled>
    ScopedPaymentRequestHasEnrolledInstrumentForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRequestMerchantValidationEventEnabled,
    RuntimeEnabledFeatures::SetPaymentRequestMerchantValidationEventEnabled>
    ScopedPaymentRequestMerchantValidationEventForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PaymentRetryEnabled,
    RuntimeEnabledFeatures::SetPaymentRetryEnabled>
    ScopedPaymentRetryForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PerformanceManagerInstrumentationEnabled,
    RuntimeEnabledFeatures::SetPerformanceManagerInstrumentationEnabled>
    ScopedPerformanceManagerInstrumentationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PerformanceObserverBufferedFlagEnabled,
    RuntimeEnabledFeatures::SetPerformanceObserverBufferedFlagEnabled>
    ScopedPerformanceObserverBufferedFlagForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PeriodicBackgroundSyncEnabled,
    RuntimeEnabledFeatures::SetPeriodicBackgroundSyncEnabled>
    ScopedPeriodicBackgroundSyncForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetPerMethodCanMakePaymentQuotaEnabled>
    ScopedPerMethodCanMakePaymentQuotaForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionDelegationEnabled,
    RuntimeEnabledFeatures::SetPermissionDelegationEnabled>
    ScopedPermissionDelegationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionsEnabled,
    RuntimeEnabledFeatures::SetPermissionsEnabled>
    ScopedPermissionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled,
    RuntimeEnabledFeatures::SetPermissionsRequestRevokeEnabled>
    ScopedPermissionsRequestRevokeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PictureInPictureEnabled,
    RuntimeEnabledFeatures::SetPictureInPictureEnabled>
    ScopedPictureInPictureForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PictureInPictureAPIEnabled,
    RuntimeEnabledFeatures::SetPictureInPictureAPIEnabled>
    ScopedPictureInPictureAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PictureInPictureV2Enabled,
    RuntimeEnabledFeatures::SetPictureInPictureV2Enabled>
    ScopedPictureInPictureV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PointerRawUpdateEnabled,
    RuntimeEnabledFeatures::SetPointerRawUpdateEnabled>
    ScopedPointerRawUpdateForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PortalsEnabled,
    RuntimeEnabledFeatures::SetPortalsEnabled>
    ScopedPortalsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PostAnimationFrameEnabled,
    RuntimeEnabledFeatures::SetPostAnimationFrameEnabled>
    ScopedPostAnimationFrameForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PreciseMemoryInfoEnabled,
    RuntimeEnabledFeatures::SetPreciseMemoryInfoEnabled>
    ScopedPreciseMemoryInfoForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PredictedEventsEnabled,
    RuntimeEnabledFeatures::SetPredictedEventsEnabled>
    ScopedPredictedEventsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled,
    RuntimeEnabledFeatures::SetPrefixedVideoFullscreenEnabled>
    ScopedPrefixedVideoFullscreenForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PresentationEnabled,
    RuntimeEnabledFeatures::SetPresentationEnabled>
    ScopedPresentationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PrintBrowserEnabled,
    RuntimeEnabledFeatures::SetPrintBrowserEnabled>
    ScopedPrintBrowserForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PriorityHintsEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetPriorityHintsEnabled>
    ScopedPriorityHintsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::PushMessagingEnabled,
    RuntimeEnabledFeatures::SetPushMessagingEnabled>
    ScopedPushMessagingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RasterInducingScrollEnabled,
    RuntimeEnabledFeatures::SetRasterInducingScrollEnabled>
    ScopedRasterInducingScrollForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled,
    RuntimeEnabledFeatures::SetReducedReferrerGranularityEnabled>
    ScopedReducedReferrerGranularityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RemotePlaybackEnabled,
    RuntimeEnabledFeatures::SetRemotePlaybackEnabled>
    ScopedRemotePlaybackForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RemotePlaybackBackendEnabled,
    RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled>
    ScopedRemotePlaybackBackendForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled,
    RuntimeEnabledFeatures::SetRenderingPipelineThrottlingEnabled>
    ScopedRenderingPipelineThrottlingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled,
    RuntimeEnabledFeatures::SetResourceLoadSchedulerEnabled>
    ScopedResourceLoadSchedulerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled,
    RuntimeEnabledFeatures::SetRestrictAppCacheToSecureContextsEnabled>
    ScopedRestrictAppCacheToSecureContextsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictDeviceSensorEventsToSecureContextsEnabled,
    RuntimeEnabledFeatures::SetRestrictDeviceSensorEventsToSecureContextsEnabled>
    ScopedRestrictDeviceSensorEventsToSecureContextsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictLazyFrameLoadingToDataSaverEnabled,
    RuntimeEnabledFeatures::SetRestrictLazyFrameLoadingToDataSaverEnabled>
    ScopedRestrictLazyFrameLoadingToDataSaverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RestrictLazyImageLoadingToDataSaverEnabled,
    RuntimeEnabledFeatures::SetRestrictLazyImageLoadingToDataSaverEnabled>
    ScopedRestrictLazyImageLoadingToDataSaverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRtcAudioJitterBufferMaxPacketsEnabled>
    ScopedRtcAudioJitterBufferMaxPacketsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRtcAudioJitterBufferRtxHandlingEnabled>
    ScopedRtcAudioJitterBufferRtxHandlingForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCDtlsTransportEnabled,
    RuntimeEnabledFeatures::SetRTCDtlsTransportEnabled>
    ScopedRTCDtlsTransportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCIceTransportExtensionEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRTCIceTransportExtensionEnabled>
    ScopedRTCIceTransportExtensionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRtcJitterBufferDelayHintEnabled>
    ScopedRtcJitterBufferDelayHintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCQuicTransportEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRTCQuicTransportEnabled>
    ScopedRTCQuicTransportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled,
    RuntimeEnabledFeatures::SetRTCRtpSenderParametersEnabled>
    ScopedRTCRtpSenderParametersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCSctpTransportEnabled,
    RuntimeEnabledFeatures::SetRTCSctpTransportEnabled>
    ScopedRTCSctpTransportForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetRTCStatsRelativePacketArrivalDelayEnabled>
    ScopedRTCStatsRelativePacketArrivalDelayForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCUnifiedPlanEnabled,
    RuntimeEnabledFeatures::SetRTCUnifiedPlanEnabled>
    ScopedRTCUnifiedPlanForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled,
    RuntimeEnabledFeatures::SetRTCUnifiedPlanByDefaultEnabled>
    ScopedRTCUnifiedPlanByDefaultForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled,
    RuntimeEnabledFeatures::SetScriptedSpeechRecognitionEnabled>
    ScopedScriptedSpeechRecognitionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled,
    RuntimeEnabledFeatures::SetScriptedSpeechSynthesisEnabled>
    ScopedScriptedSpeechSynthesisForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScriptStreamingOnPreloadEnabled,
    RuntimeEnabledFeatures::SetScriptStreamingOnPreloadEnabled>
    ScopedScriptStreamingOnPreloadForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled,
    RuntimeEnabledFeatures::SetScrollAnchorSerializationEnabled>
    ScopedScrollAnchorSerializationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollCustomizationEnabled,
    RuntimeEnabledFeatures::SetScrollCustomizationEnabled>
    ScopedScrollCustomizationForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled,
    RuntimeEnabledFeatures::SetScrollTopLeftInteropEnabled>
    ScopedScrollTopLeftInteropForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled,
    RuntimeEnabledFeatures::SetSendBeaconThrowForBlobWithNonSimpleTypeEnabled>
    ScopedSendBeaconThrowForBlobWithNonSimpleTypeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled,
    RuntimeEnabledFeatures::SetSendMouseEventsDisabledFormControlsEnabled>
    ScopedSendMouseEventsDisabledFormControlsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SensorEnabled,
    RuntimeEnabledFeatures::SetSensorEnabled>
    ScopedSensorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SensorExtraClassesEnabled,
    RuntimeEnabledFeatures::SetSensorExtraClassesEnabled>
    ScopedSensorExtraClassesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SerialEnabled,
    RuntimeEnabledFeatures::SetSerialEnabled>
    ScopedSerialForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SetRootScrollerEnabled,
    RuntimeEnabledFeatures::SetSetRootScrollerEnabled>
    ScopedSetRootScrollerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShadowDOMV0EnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetShadowDOMV0Enabled>
    ScopedShadowDOMV0ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled,
    RuntimeEnabledFeatures::SetShadowPiercingDescendantCombinatorEnabled>
    ScopedShadowPiercingDescendantCombinatorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::ShapeDetectionEnabled,
    RuntimeEnabledFeatures::SetShapeDetectionEnabled>
    ScopedShapeDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SharedArrayBufferEnabled,
    RuntimeEnabledFeatures::SetSharedArrayBufferEnabled>
    ScopedSharedArrayBufferForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SharedWorkerEnabled,
    RuntimeEnabledFeatures::SetSharedWorkerEnabled>
    ScopedSharedWorkerForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetSignatureBasedIntegrityEnabled>
    ScopedSignatureBasedIntegrityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SignedExchangeSubresourcePrefetchEnabled,
    RuntimeEnabledFeatures::SetSignedExchangeSubresourcePrefetchEnabled>
    ScopedSignedExchangeSubresourcePrefetchForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SkipAdEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetSkipAdEnabled>
    ScopedSkipAdForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SkipTouchEventFilterEnabled,
    RuntimeEnabledFeatures::SetSkipTouchEventFilterEnabled>
    ScopedSkipTouchEventFilterForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled,
    RuntimeEnabledFeatures::SetSmoothScrollJSInterventionEnabled>
    ScopedSmoothScrollJSInterventionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SmsReceiverEnabled,
    RuntimeEnabledFeatures::SetSmsReceiverEnabled>
    ScopedSmsReceiverForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::SpeechSynthesisEventCharLengthEnabled,
    RuntimeEnabledFeatures::SetSpeechSynthesisEventCharLengthEnabled>
    ScopedSpeechSynthesisEventCharLengthForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StableBlinkFeaturesEnabled,
    RuntimeEnabledFeatures::SetStableBlinkFeaturesEnabled>
    ScopedStableBlinkFeaturesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled,
    RuntimeEnabledFeatures::SetStackedCSSPropertyAnimationsEnabled>
    ScopedStackedCSSPropertyAnimationsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StaleWhileRevalidateEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetStaleWhileRevalidateEnabled>
    ScopedStaleWhileRevalidateForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StorageQuotaDetailsEnabled,
    RuntimeEnabledFeatures::SetStorageQuotaDetailsEnabled>
    ScopedStorageQuotaDetailsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::StreamsNativeEnabled,
    RuntimeEnabledFeatures::SetStreamsNativeEnabled>
    ScopedStreamsNativeForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TextFragmentIdentifiersEnabled,
    RuntimeEnabledFeatures::SetTextFragmentIdentifiersEnabled>
    ScopedTextFragmentIdentifiersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TextUnderlinePositionLeftRightEnabled,
    RuntimeEnabledFeatures::SetTextUnderlinePositionLeftRightEnabled>
    ScopedTextUnderlinePositionLeftRightForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled,
    RuntimeEnabledFeatures::SetTimerThrottlingForBackgroundTabsEnabled>
    ScopedTimerThrottlingForBackgroundTabsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled,
    RuntimeEnabledFeatures::SetTimerThrottlingForHiddenFramesEnabled>
    ScopedTimerThrottlingForHiddenFramesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetTouchEventFeatureDetectionEnabled>
    ScopedTouchEventFeatureDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled,
    RuntimeEnabledFeatures::SetTrackLayoutPassesPerBlockEnabled>
    ScopedTrackLayoutPassesPerBlockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TransferableStreamsEnabled,
    RuntimeEnabledFeatures::SetTransferableStreamsEnabled>
    ScopedTransferableStreamsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TranslateServiceEnabled,
    RuntimeEnabledFeatures::SetTranslateServiceEnabled>
    ScopedTranslateServiceForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::TrustedDOMTypesEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetTrustedDOMTypesEnabled>
    ScopedTrustedDOMTypesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled,
    RuntimeEnabledFeatures::SetUnclosedFormControlIsInvalidEnabled>
    ScopedUnclosedFormControlIsInvalidForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnifiedPointerCaptureInBlinkEnabled,
    RuntimeEnabledFeatures::SetUnifiedPointerCaptureInBlinkEnabled>
    ScopedUnifiedPointerCaptureInBlinkForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled,
    RuntimeEnabledFeatures::SetUnifiedTouchAdjustmentEnabled>
    ScopedUnifiedTouchAdjustmentForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetUnoptimizedImagePoliciesEnabled>
    ScopedUnoptimizedImagePoliciesForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UpdateHoverFromLayoutChangeAtBeginFrameEnabled,
    RuntimeEnabledFeatures::SetUpdateHoverFromLayoutChangeAtBeginFrameEnabled>
    ScopedUpdateHoverFromLayoutChangeAtBeginFrameForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UpdateHoverFromScrollAtBeginFrameEnabled,
    RuntimeEnabledFeatures::SetUpdateHoverFromScrollAtBeginFrameEnabled>
    ScopedUpdateHoverFromScrollAtBeginFrameForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserActivationAPIEnabled,
    RuntimeEnabledFeatures::SetUserActivationAPIEnabled>
    ScopedUserActivationAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserActivationPostMessageTransferEnabled,
    RuntimeEnabledFeatures::SetUserActivationPostMessageTransferEnabled>
    ScopedUserActivationPostMessageTransferForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserActivationSameOriginVisibilityEnabled,
    RuntimeEnabledFeatures::SetUserActivationSameOriginVisibilityEnabled>
    ScopedUserActivationSameOriginVisibilityForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserActivationV2Enabled,
    RuntimeEnabledFeatures::SetUserActivationV2Enabled>
    ScopedUserActivationV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::UserAgentClientHintEnabled,
    RuntimeEnabledFeatures::SetUserAgentClientHintEnabled>
    ScopedUserAgentClientHintForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::V8IdleTasksEnabled,
    RuntimeEnabledFeatures::SetV8IdleTasksEnabled>
    ScopedV8IdleTasksForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoAutoFullscreenEnabled,
    RuntimeEnabledFeatures::SetVideoAutoFullscreenEnabled>
    ScopedVideoAutoFullscreenForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled,
    RuntimeEnabledFeatures::SetVideoFullscreenDetectionEnabled>
    ScopedVideoFullscreenDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled,
    RuntimeEnabledFeatures::SetVideoFullscreenOrientationLockEnabled>
    ScopedVideoFullscreenOrientationLockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled,
    RuntimeEnabledFeatures::SetVideoRotateToFullscreenEnabled>
    ScopedVideoRotateToFullscreenForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled,
    RuntimeEnabledFeatures::SetVisibilityCollapseColumnEnabled>
    ScopedVisibilityCollapseColumnForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WakeLockNavigatorEnabled,
    RuntimeEnabledFeatures::SetWakeLockNavigatorEnabled>
    ScopedWakeLockNavigatorForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WasmCodeCacheEnabled,
    RuntimeEnabledFeatures::SetWasmCodeCacheEnabled>
    ScopedWasmCodeCacheForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAnimationsAPIEnabled,
    RuntimeEnabledFeatures::SetWebAnimationsAPIEnabled>
    ScopedWebAnimationsAPIForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAnimationsSVGEnabled,
    RuntimeEnabledFeatures::SetWebAnimationsSVGEnabled>
    ScopedWebAnimationsSVGForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAssemblyThreadsEnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebAssemblyThreadsEnabled>
    ScopedWebAssemblyThreadsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebAuthEnabled,
    RuntimeEnabledFeatures::SetWebAuthEnabled>
    ScopedWebAuthForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebBluetoothEnabled,
    RuntimeEnabledFeatures::SetWebBluetoothEnabled>
    ScopedWebBluetoothForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebBluetoothScanningEnabled,
    RuntimeEnabledFeatures::SetWebBluetoothScanningEnabled>
    ScopedWebBluetoothScanningForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGL2ComputeContextEnabled,
    RuntimeEnabledFeatures::SetWebGL2ComputeContextEnabled>
    ScopedWebGL2ComputeContextForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled,
    RuntimeEnabledFeatures::SetWebGLDraftExtensionsEnabled>
    ScopedWebGLDraftExtensionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGLImageChromiumEnabled,
    RuntimeEnabledFeatures::SetWebGLImageChromiumEnabled>
    ScopedWebGLImageChromiumForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebGPUEnabled,
    RuntimeEnabledFeatures::SetWebGPUEnabled>
    ScopedWebGPUForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebHIDEnabled,
    RuntimeEnabledFeatures::SetWebHIDEnabled>
    ScopedWebHIDForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebNFCEnabled,
    RuntimeEnabledFeatures::SetWebNFCEnabled>
    ScopedWebNFCForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebShareEnabled,
    RuntimeEnabledFeatures::SetWebShareEnabled>
    ScopedWebShareForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebShareV2Enabled,
    RuntimeEnabledFeatures::SetWebShareV2Enabled>
    ScopedWebShareV2ForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebUSBEnabled,
    RuntimeEnabledFeatures::SetWebUSBEnabled>
    ScopedWebUSBForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebUSBOnDedicatedWorkersEnabled,
    RuntimeEnabledFeatures::SetWebUSBOnDedicatedWorkersEnabled>
    ScopedWebUSBOnDedicatedWorkersForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebVREnabled>
    ScopedWebVRForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebVTTRegionsEnabled,
    RuntimeEnabledFeatures::SetWebVTTRegionsEnabled>
    ScopedWebVTTRegionsForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag,
    RuntimeEnabledFeatures::SetWebXREnabled>
    ScopedWebXRForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXRHitTestEnabled,
    RuntimeEnabledFeatures::SetWebXRHitTestEnabled>
    ScopedWebXRHitTestForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled,
    RuntimeEnabledFeatures::SetWebXRPlaneDetectionEnabled>
    ScopedWebXRPlaneDetectionForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkerNosniffBlockEnabled,
    RuntimeEnabledFeatures::SetWorkerNosniffBlockEnabled>
    ScopedWorkerNosniffBlockForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkerNosniffWarnEnabled,
    RuntimeEnabledFeatures::SetWorkerNosniffWarnEnabled>
    ScopedWorkerNosniffWarnForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::WorkerTaskQueueEnabled,
    RuntimeEnabledFeatures::SetWorkerTaskQueueEnabled>
    ScopedWorkerTaskQueueForTest;
typedef ScopedRuntimeEnabledFeatureForTest<
    RuntimeEnabledFeatures::XSLTEnabled,
    RuntimeEnabledFeatures::SetXSLTEnabled>
    ScopedXSLTForTest;
}  // namespace blink

#endif  // RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
