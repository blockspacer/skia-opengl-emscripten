// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_runtime_flags.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_

#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"

namespace blink {

class InternalRuntimeFlags : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();
 public:
  static InternalRuntimeFlags* create() {
    return MakeGarbageCollected<InternalRuntimeFlags>();
  }

  InternalRuntimeFlags() {}

  // These are reset between web tests from Internals::resetToConsistentState
  // using RuntimeEnabledFeatures::Backup.
  void setAccelerated2dCanvasEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled(isEnabled);
  }
  void setAutomationControlledEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutomationControlledEnabled(isEnabled);
  }
  void setAutoplayIgnoresWebAudioEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled(isEnabled);
  }
  void setCSSLogicalEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetCSSLogicalEnabled(isEnabled);
  }
  void setDisplayCutoutAPIEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetDisplayCutoutAPIEnabled(isEnabled);
  }
  void setFocuslessSpatialNavigationEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetFocuslessSpatialNavigationEnabled(isEnabled);
  }
  void setImplicitRootScrollerEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled(isEnabled);
  }
  void setMediaControlsOverlayPlayButtonEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled(isEnabled);
  }
  void setNavigatorLanguageInInsecureContextEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetNavigatorLanguageInInsecureContextEnabled(isEnabled);
  }
  void setOverlayScrollbarsEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetOverlayScrollbarsEnabled(isEnabled);
  }
  void setOverscrollCustomizationEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetOverscrollCustomizationEnabled(isEnabled);
  }
  void setPaintUnderInvalidationCheckingEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled(isEnabled);
  }
  void setPeriodicBackgroundSyncEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPeriodicBackgroundSyncEnabled(isEnabled);
  }
  void setPictureInPictureEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPictureInPictureEnabled(isEnabled);
  }
  void setPictureInPictureV2Enabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPictureInPictureV2Enabled(isEnabled);
  }
  void setRemotePlaybackBackendEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled(isEnabled);
  }
  void setSkipTouchEventFilterEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetSkipTouchEventFilterEnabled(isEnabled);
  }
  void setUpdateHoverFromLayoutChangeAtBeginFrameEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetUpdateHoverFromLayoutChangeAtBeginFrameEnabled(isEnabled);
  }
  void setUpdateHoverFromScrollAtBeginFrameEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetUpdateHoverFromScrollAtBeginFrameEnabled(isEnabled);
  }
  void setVideoAutoFullscreenEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetVideoAutoFullscreenEnabled(isEnabled);
  }

  bool accelerated2dCanvasEnabled() {
    return RuntimeEnabledFeatures::Accelerated2dCanvasEnabled();
  }
  bool accessibilityObjectModelEnabled() {
    return RuntimeEnabledFeatures::AccessibilityObjectModelEnabled();
  }
  bool adTaggingEnabled() {
    return RuntimeEnabledFeatures::AdTaggingEnabled();
  }
  bool allowActivationDelegationAttrEnabled() {
    return RuntimeEnabledFeatures::AllowActivationDelegationAttrEnabled();
  }
  bool allowContentInitiatedDataUrlNavigationsEnabled() {
    return RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled();
  }
  bool animationWorkletEnabled() {
    return RuntimeEnabledFeatures::AnimationWorkletEnabledByRuntimeFlag();
  }
  bool asyncClipboardEnabled() {
    return RuntimeEnabledFeatures::AsyncClipboardEnabled();
  }
  bool audioOutputDevicesEnabled() {
    return RuntimeEnabledFeatures::AudioOutputDevicesEnabled();
  }
  bool audioVideoTracksEnabled() {
    return RuntimeEnabledFeatures::AudioVideoTracksEnabled();
  }
  bool automationControlledEnabled() {
    return RuntimeEnabledFeatures::AutomationControlledEnabled();
  }
  bool autoPictureInPictureEnabled() {
    return RuntimeEnabledFeatures::AutoPictureInPictureEnabledByRuntimeFlag();
  }
  bool autoplayIgnoresWebAudioEnabled() {
    return RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled();
  }
  bool backgroundFetchEnabled() {
    return RuntimeEnabledFeatures::BackgroundFetchEnabled();
  }
  bool backgroundVideoTrackOptimizationEnabled() {
    return RuntimeEnabledFeatures::BackgroundVideoTrackOptimizationEnabled();
  }
  bool badgingEnabled() {
    return RuntimeEnabledFeatures::BadgingEnabledByRuntimeFlag();
  }
  bool bidiCaretAffinityEnabled() {
    return RuntimeEnabledFeatures::BidiCaretAffinityEnabled();
  }
  bool blinkGenPropertyTreesEnabled() {
    return RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled();
  }
  bool blinkRuntimeCallStatsEnabled() {
    return RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled();
  }
  bool bloatedRendererDetectionEnabled() {
    return RuntimeEnabledFeatures::BloatedRendererDetectionEnabled();
  }
  bool bloatedRendererDetectionSkipUptimeCheckEnabled() {
    return RuntimeEnabledFeatures::BloatedRendererDetectionSkipUptimeCheckEnabled();
  }
  bool blobReadMethodsEnabled() {
    return RuntimeEnabledFeatures::BlobReadMethodsEnabled();
  }
  bool blockCredentialedSubresourcesEnabled() {
    return RuntimeEnabledFeatures::BlockCredentialedSubresourcesEnabled();
  }
  bool blockingDownloadsInSandboxWithoutUserActivationEnabled() {
    return RuntimeEnabledFeatures::BlockingDownloadsInSandboxWithoutUserActivationEnabled();
  }
  bool blockMetaSetCookieEnabled() {
    return RuntimeEnabledFeatures::BlockMetaSetCookieEnabled();
  }
  bool builtInModuleAllEnabled() {
    return RuntimeEnabledFeatures::BuiltInModuleAllEnabled();
  }
  bool builtInModuleInfraEnabled() {
    return RuntimeEnabledFeatures::BuiltInModuleInfraEnabledByRuntimeFlag();
  }
  bool builtInModuleKvStorageEnabled() {
    return RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabledByRuntimeFlag();
  }
  bool cacheInlineScriptCodeEnabled() {
    return RuntimeEnabledFeatures::CacheInlineScriptCodeEnabled();
  }
  bool cacheStorageAddAllRejectsDuplicatesEnabled() {
    return RuntimeEnabledFeatures::CacheStorageAddAllRejectsDuplicatesEnabled();
  }
  bool callCaptureListenersAtCapturePhaseAtShadowHostsEnabled() {
    return RuntimeEnabledFeatures::CallCaptureListenersAtCapturePhaseAtShadowHostsEnabled();
  }
  bool canvas2dContextLostRestoredEnabled() {
    return RuntimeEnabledFeatures::Canvas2dContextLostRestoredEnabled();
  }
  bool canvas2dFixedRenderingModeEnabled() {
    return RuntimeEnabledFeatures::Canvas2dFixedRenderingModeEnabled();
  }
  bool canvas2dImageChromiumEnabled() {
    return RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled();
  }
  bool canvas2dScrollPathIntoViewEnabled() {
    return RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled();
  }
  bool canvasColorManagementEnabled() {
    return RuntimeEnabledFeatures::CanvasColorManagementEnabled();
  }
  bool canvasHitRegionEnabled() {
    return RuntimeEnabledFeatures::CanvasHitRegionEnabled();
  }
  bool canvasImageSmoothingEnabled() {
    return RuntimeEnabledFeatures::CanvasImageSmoothingEnabled();
  }
  bool clickRetargettingEnabled() {
    return RuntimeEnabledFeatures::ClickRetargettingEnabled();
  }
  bool clientPlaceholdersForServerLoFiEnabled() {
    return RuntimeEnabledFeatures::ClientPlaceholdersForServerLoFiEnabled();
  }
  bool compositeAfterPaintEnabled() {
    return RuntimeEnabledFeatures::CompositeAfterPaintEnabled();
  }
  bool compositedSelectionUpdateEnabled() {
    return RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled();
  }
  bool compositorTouchActionEnabled() {
    return RuntimeEnabledFeatures::CompositorTouchActionEnabled();
  }
  bool computedAccessibilityInfoEnabled() {
    return RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled();
  }
  bool contactsManagerEnabled() {
    return RuntimeEnabledFeatures::ContactsManagerEnabledByRuntimeFlag();
  }
  bool contextMenuEnabled() {
    return RuntimeEnabledFeatures::ContextMenuEnabled();
  }
  bool cookieStoreEnabled() {
    return RuntimeEnabledFeatures::CookieStoreEnabledByRuntimeFlag();
  }
  bool corsRFC1918Enabled() {
    return RuntimeEnabledFeatures::CorsRFC1918Enabled();
  }
  bool css3TextEnabled() {
    return RuntimeEnabledFeatures::CSS3TextEnabled();
  }
  bool cssAdditiveAnimationsEnabled() {
    return RuntimeEnabledFeatures::CSSAdditiveAnimationsEnabled();
  }
  bool cssAltTextEnabled() {
    return RuntimeEnabledFeatures::CSSAltTextEnabled();
  }
  bool cssBackdropFilterEnabled() {
    return RuntimeEnabledFeatures::CSSBackdropFilterEnabled();
  }
  bool cssCalcAsIntEnabled() {
    return RuntimeEnabledFeatures::CSSCalcAsIntEnabled();
  }
  bool cssFocusVisibleEnabled() {
    return RuntimeEnabledFeatures::CSSFocusVisibleEnabled();
  }
  bool cssFontFeatureValuesEnabled() {
    return RuntimeEnabledFeatures::CSSFontFeatureValuesEnabled();
  }
  bool cssFontSizeAdjustEnabled() {
    return RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled();
  }
  bool cssHexAlphaColorEnabled() {
    return RuntimeEnabledFeatures::CSSHexAlphaColorEnabled();
  }
  bool cssIndependentTransformPropertiesEnabled() {
    return RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled();
  }
  bool cssLayoutAPIEnabled() {
    return RuntimeEnabledFeatures::CSSLayoutAPIEnabled();
  }
  bool cssLogicalEnabled() {
    return RuntimeEnabledFeatures::CSSLogicalEnabled();
  }
  bool cssMaskSourceTypeEnabled() {
    return RuntimeEnabledFeatures::CSSMaskSourceTypeEnabled();
  }
  bool cssOffsetPathRayEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayEnabled();
  }
  bool cssOffsetPathRayContainEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled();
  }
  bool cssOffsetPositionAnchorEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled();
  }
  bool cssPaintAPIArgumentsEnabled() {
    return RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled();
  }
  bool cssPartPseudoElementEnabled() {
    return RuntimeEnabledFeatures::CSSPartPseudoElementEnabled();
  }
  bool cssPictureInPictureEnabled() {
    return RuntimeEnabledFeatures::CSSPictureInPictureEnabled();
  }
  bool cssPseudoIsEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoIsEnabled();
  }
  bool cssPseudoWhereEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoWhereEnabled();
  }
  bool cssSnapSizeEnabled() {
    return RuntimeEnabledFeatures::CSSSnapSizeEnabled();
  }
  bool cssVariables2Enabled() {
    return RuntimeEnabledFeatures::CSSVariables2Enabled();
  }
  bool cssVariables2ImageValuesEnabled() {
    return RuntimeEnabledFeatures::CSSVariables2ImageValuesEnabled();
  }
  bool cssVariables2TransformValuesEnabled() {
    return RuntimeEnabledFeatures::CSSVariables2TransformValuesEnabled();
  }
  bool cssViewportEnabled() {
    return RuntimeEnabledFeatures::CSSViewportEnabled();
  }
  bool customElementDefaultStyleEnabled() {
    return RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled();
  }
  bool customElementsV0Enabled() {
    return RuntimeEnabledFeatures::CustomElementsV0EnabledByRuntimeFlag();
  }
  bool customUserTimingEnabled() {
    return RuntimeEnabledFeatures::CustomUserTimingEnabled();
  }
  bool databaseEnabled() {
    return RuntimeEnabledFeatures::DatabaseEnabled();
  }
  bool decodeToYUVEnabled() {
    return RuntimeEnabledFeatures::DecodeToYUVEnabled();
  }
  bool desktopCaptureDisableLocalEchoControlEnabled() {
    return RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled();
  }
  bool disableHardwareNoiseSuppressionEnabled() {
    return RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag();
  }
  bool displayCutoutAPIEnabled() {
    return RuntimeEnabledFeatures::DisplayCutoutAPIEnabled();
  }
  bool displayLockingEnabled() {
    return RuntimeEnabledFeatures::DisplayLockingEnabled();
  }
  bool documentCookieEnabled() {
    return RuntimeEnabledFeatures::DocumentCookieEnabled();
  }
  bool documentDomainEnabled() {
    return RuntimeEnabledFeatures::DocumentDomainEnabled();
  }
  bool documentWriteEnabled() {
    return RuntimeEnabledFeatures::DocumentWriteEnabled();
  }
  bool editingNGEnabled() {
    return RuntimeEnabledFeatures::EditingNGEnabled();
  }
  bool elementInternalsEnabled() {
    return RuntimeEnabledFeatures::ElementInternalsEnabled();
  }
  bool elementTimingEnabled() {
    return RuntimeEnabledFeatures::ElementTimingEnabledByRuntimeFlag();
  }
  bool encryptedMediaEncryptionSchemeQueryEnabled() {
    return RuntimeEnabledFeatures::EncryptedMediaEncryptionSchemeQueryEnabled();
  }
  bool encryptedMediaHdcpPolicyCheckEnabled() {
    return RuntimeEnabledFeatures::EncryptedMediaHdcpPolicyCheckEnabled();
  }
  bool encryptedMediaPersistentUsageRecordSessionEnabled() {
    return RuntimeEnabledFeatures::EncryptedMediaPersistentUsageRecordSessionEnabled();
  }
  bool eventTimingEnabled() {
    return RuntimeEnabledFeatures::EventTimingEnabledByRuntimeFlag();
  }
  bool execCommandInJavaScriptEnabled() {
    return RuntimeEnabledFeatures::ExecCommandInJavaScriptEnabled();
  }
  bool expensiveBackgroundTimerThrottlingEnabled() {
    return RuntimeEnabledFeatures::ExpensiveBackgroundTimerThrottlingEnabled();
  }
  bool experimentalContentSecurityPolicyFeaturesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled();
  }
  bool experimentalIsInputPendingEnabled() {
    return RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabledByRuntimeFlag();
  }
  bool experimentalProductivityFeaturesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled();
  }
  bool extendedTextMetricsEnabled() {
    return RuntimeEnabledFeatures::ExtendedTextMetricsEnabled();
  }
  bool extraWebGLVideoTextureMetadataEnabled() {
    return RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled();
  }
  bool fallbackCursorModeEnabled() {
    return RuntimeEnabledFeatures::FallbackCursorModeEnabled();
  }
  bool fastBorderRadiusEnabled() {
    return RuntimeEnabledFeatures::FastBorderRadiusEnabled();
  }
  bool fastFlatTreeTraversalEnabled() {
    return RuntimeEnabledFeatures::FastFlatTreeTraversalEnabled();
  }
  bool fastMobileScrollingEnabled() {
    return RuntimeEnabledFeatures::FastMobileScrollingEnabled();
  }
  bool featurePolicyForSandboxEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyForSandboxEnabled();
  }
  bool featurePolicyJavaScriptInterfaceEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled();
  }
  bool featurePolicyReportingEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyReportingEnabledByRuntimeFlag();
  }
  bool featurePolicyVibrateFeatureEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyVibrateFeatureEnabled();
  }
  bool fetchMetadataEnabled() {
    return RuntimeEnabledFeatures::FetchMetadataEnabled();
  }
  bool fetchMetadataDestinationEnabled() {
    return RuntimeEnabledFeatures::FetchMetadataDestinationEnabled();
  }
  bool fileSystemEnabled() {
    return RuntimeEnabledFeatures::FileSystemEnabled();
  }
  bool firstContentfulPaintPlusPlusEnabled() {
    return RuntimeEnabledFeatures::FirstContentfulPaintPlusPlusEnabled();
  }
  bool focuslessSpatialNavigationEnabled() {
    return RuntimeEnabledFeatures::FocuslessSpatialNavigationEnabled();
  }
  bool fontSrcLocalMatchingEnabled() {
    return RuntimeEnabledFeatures::FontSrcLocalMatchingEnabled();
  }
  bool forbidSyncXHRInPageDismissalEnabled() {
    return RuntimeEnabledFeatures::ForbidSyncXHRInPageDismissalEnabled();
  }
  bool forceOverlayFullscreenVideoEnabled() {
    return RuntimeEnabledFeatures::ForceOverlayFullscreenVideoEnabled();
  }
  bool forceSynchronousHTMLParsingEnabled() {
    return RuntimeEnabledFeatures::ForceSynchronousHTMLParsingEnabled();
  }
  bool forceTallerSelectPopupEnabled() {
    return RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled();
  }
  bool formAssociatedCustomElementsEnabled() {
    return RuntimeEnabledFeatures::FormAssociatedCustomElementsEnabled();
  }
  bool formDataEventEnabled() {
    return RuntimeEnabledFeatures::FormDataEventEnabled();
  }
  bool fractionalMouseEventEnabled() {
    return RuntimeEnabledFeatures::FractionalMouseEventEnabled();
  }
  bool fractionalScrollOffsetsEnabled() {
    return RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled();
  }
  bool freezeFramesOnVisibilityEnabled() {
    return RuntimeEnabledFeatures::FreezeFramesOnVisibilityEnabled();
  }
  bool gamepadButtonAxisEventsEnabled() {
    return RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled();
  }
  bool getDisplayMediaEnabled() {
    return RuntimeEnabledFeatures::GetDisplayMediaEnabled();
  }
  bool heapCompactionEnabled() {
    return RuntimeEnabledFeatures::HeapCompactionEnabled();
  }
  bool heapConcurrentMarkingEnabled() {
    return RuntimeEnabledFeatures::HeapConcurrentMarkingEnabled();
  }
  bool heapIncrementalMarkingEnabled() {
    return RuntimeEnabledFeatures::HeapIncrementalMarkingEnabled();
  }
  bool heapIncrementalMarkingStressEnabled() {
    return RuntimeEnabledFeatures::HeapIncrementalMarkingStressEnabled();
  }
  bool hrefTranslateEnabled() {
    return RuntimeEnabledFeatures::HrefTranslateEnabledByRuntimeFlag();
  }
  bool htmlImportsEnabled() {
    return RuntimeEnabledFeatures::HTMLImportsEnabledByRuntimeFlag();
  }
  bool htmlImportsOnlyChromeEnabled() {
    return RuntimeEnabledFeatures::HTMLImportsOnlyChromeEnabled();
  }
  bool htmlImportsStyleApplicationEnabled() {
    return RuntimeEnabledFeatures::HTMLImportsStyleApplicationEnabled();
  }
  bool idbObserverEnabled() {
    return RuntimeEnabledFeatures::IDBObserverEnabled();
  }
  bool idbTransactionCommitEnabled() {
    return RuntimeEnabledFeatures::IDBTransactionCommitEnabled();
  }
  bool idleDetectionEnabled() {
    return RuntimeEnabledFeatures::IdleDetectionEnabled();
  }
  bool ignoreCrossOriginWindowWhenNamedAccessOnWindowEnabled() {
    return RuntimeEnabledFeatures::IgnoreCrossOriginWindowWhenNamedAccessOnWindowEnabled();
  }
  bool imageOrientationEnabled() {
    return RuntimeEnabledFeatures::ImageOrientationEnabled();
  }
  bool implicitRootScrollerEnabled() {
    return RuntimeEnabledFeatures::ImplicitRootScrollerEnabled();
  }
  bool inertAttributeEnabled() {
    return RuntimeEnabledFeatures::InertAttributeEnabled();
  }
  bool inputMultipleFieldsUIEnabled() {
    return RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled();
  }
  bool installedAppEnabled() {
    return RuntimeEnabledFeatures::InstalledAppEnabledByRuntimeFlag();
  }
  bool intersectionObserverV2Enabled() {
    return RuntimeEnabledFeatures::IntersectionObserverV2Enabled();
  }
  bool invisibleDOMEnabled() {
    return RuntimeEnabledFeatures::InvisibleDOMEnabled();
  }
  bool isolatedCodeCacheEnabled() {
    return RuntimeEnabledFeatures::IsolatedCodeCacheEnabled();
  }
  bool isolatedWorldCSPEnabled() {
    return RuntimeEnabledFeatures::IsolatedWorldCSPEnabled();
  }
  bool jankTrackingEnabled() {
    return RuntimeEnabledFeatures::JankTrackingEnabledByRuntimeFlag();
  }
  bool jankTrackingSweepLineEnabled() {
    return RuntimeEnabledFeatures::JankTrackingSweepLineEnabled();
  }
  bool keyboardFocusableScrollersEnabled() {
    return RuntimeEnabledFeatures::KeyboardFocusableScrollersEnabled();
  }
  bool langAttributeAwareFormControlUIEnabled() {
    return RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled();
  }
  bool langClientHintHeaderEnabled() {
    return RuntimeEnabledFeatures::LangClientHintHeaderEnabled();
  }
  bool layoutJankAPIEnabled() {
    return RuntimeEnabledFeatures::LayoutJankAPIEnabledByRuntimeFlag();
  }
  bool layoutNGEnabled() {
    return RuntimeEnabledFeatures::LayoutNGEnabled();
  }
  bool layoutNGBlockFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled();
  }
  bool layoutNGFieldsetEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFieldsetEnabled();
  }
  bool layoutNGFlexBoxEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFlexBoxEnabled();
  }
  bool layoutNGFragmentCachingEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFragmentCachingEnabled();
  }
  bool lazyFrameLoadingEnabled() {
    return RuntimeEnabledFeatures::LazyFrameLoadingEnabled();
  }
  bool lazyFrameVisibleLoadTimeMetricsEnabled() {
    return RuntimeEnabledFeatures::LazyFrameVisibleLoadTimeMetricsEnabled();
  }
  bool lazyImageLoadingEnabled() {
    return RuntimeEnabledFeatures::LazyImageLoadingEnabled();
  }
  bool lazyImageVisibleLoadTimeMetricsEnabled() {
    return RuntimeEnabledFeatures::LazyImageVisibleLoadTimeMetricsEnabled();
  }
  bool lazyInitializeMediaControlsEnabled() {
    return RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled();
  }
  bool legacyPerformanceMemoryCountersEnabled() {
    return RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabledByRuntimeFlag();
  }
  bool longTaskV2Enabled() {
    return RuntimeEnabledFeatures::LongTaskV2Enabled();
  }
  bool manualSlottingEnabled() {
    return RuntimeEnabledFeatures::ManualSlottingEnabled();
  }
  bool mediaCapabilitiesEncodingInfoEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled();
  }
  bool mediaCapabilitiesEncryptedMediaEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabledByRuntimeFlag();
  }
  bool mediaCaptureEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureEnabled();
  }
  bool mediaCaptureDepthVideoKindEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureDepthVideoKindEnabled();
  }
  bool mediaCastOverlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled();
  }
  bool mediaControlsExpandGestureEnabled() {
    return RuntimeEnabledFeatures::MediaControlsExpandGestureEnabled();
  }
  bool mediaControlsOverlayPlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled();
  }
  bool mediaDocumentDownloadButtonEnabled() {
    return RuntimeEnabledFeatures::MediaDocumentDownloadButtonEnabled();
  }
  bool mediaEngagementBypassAutoplayPoliciesEnabled() {
    return RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled();
  }
  bool mediaQueryPrefersColorSchemeEnabled() {
    return RuntimeEnabledFeatures::MediaQueryPrefersColorSchemeEnabled();
  }
  bool mediaQueryShapeEnabled() {
    return RuntimeEnabledFeatures::MediaQueryShapeEnabled();
  }
  bool mediaSessionEnabled() {
    return RuntimeEnabledFeatures::MediaSessionEnabled();
  }
  bool mediaSourceExperimentalEnabled() {
    return RuntimeEnabledFeatures::MediaSourceExperimentalEnabled();
  }
  bool mediaSourceNewAbortAndDurationEnabled() {
    return RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled();
  }
  bool mediaStreamTrackContentHintEnabled() {
    return RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled();
  }
  bool mergeBlockingNonBlockingPoolsEnabled() {
    return RuntimeEnabledFeatures::MergeBlockingNonBlockingPoolsEnabled();
  }
  bool metaColorSchemeEnabled() {
    return RuntimeEnabledFeatures::MetaColorSchemeEnabled();
  }
  bool middleClickAutoscrollEnabled() {
    return RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled();
  }
  bool mimeHandlerViewInCrossProcessFrameEnabled() {
    return RuntimeEnabledFeatures::MimeHandlerViewInCrossProcessFrameEnabled();
  }
  bool mobileLayoutThemeEnabled() {
    return RuntimeEnabledFeatures::MobileLayoutThemeEnabled();
  }
  bool modernMediaControlsEnabled() {
    return RuntimeEnabledFeatures::ModernMediaControlsEnabled();
  }
  bool moduleDedicatedWorkerEnabled() {
    return RuntimeEnabledFeatures::ModuleDedicatedWorkerEnabled();
  }
  bool moduleServiceWorkerEnabled() {
    return RuntimeEnabledFeatures::ModuleServiceWorkerEnabled();
  }
  bool mojoJSEnabled() {
    return RuntimeEnabledFeatures::MojoJSEnabled();
  }
  bool mojoJSTestEnabled() {
    return RuntimeEnabledFeatures::MojoJSTestEnabled();
  }
  bool movementXYInBlinkEnabled() {
    return RuntimeEnabledFeatures::MovementXYInBlinkEnabled();
  }
  bool muteButtonEnabled() {
    return RuntimeEnabledFeatures::MuteButtonEnabledByRuntimeFlag();
  }
  bool nativeFileSystemEnabled() {
    return RuntimeEnabledFeatures::NativeFileSystemEnabled();
  }
  bool nativeStreamsEnabled() {
    return RuntimeEnabledFeatures::NativeStreamsEnabled();
  }
  bool navigatorContentUtilsEnabled() {
    return RuntimeEnabledFeatures::NavigatorContentUtilsEnabled();
  }
  bool navigatorDeviceMemoryEnabled() {
    return RuntimeEnabledFeatures::NavigatorDeviceMemoryEnabled();
  }
  bool navigatorLanguageInInsecureContextEnabled() {
    return RuntimeEnabledFeatures::NavigatorLanguageInInsecureContextEnabled();
  }
  bool netInfoDownlinkMaxEnabled() {
    return RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled();
  }
  bool networkServiceEnabled() {
    return RuntimeEnabledFeatures::NetworkServiceEnabled();
  }
  bool newRemotePlaybackPipelineEnabled() {
    return RuntimeEnabledFeatures::NewRemotePlaybackPipelineEnabled();
  }
  bool noIdleEncodingForWebTestsEnabled() {
    return RuntimeEnabledFeatures::NoIdleEncodingForWebTestsEnabled();
  }
  bool notificationConstructorEnabled() {
    return RuntimeEnabledFeatures::NotificationConstructorEnabled();
  }
  bool notificationContentImageEnabled() {
    return RuntimeEnabledFeatures::NotificationContentImageEnabled();
  }
  bool notificationsEnabled() {
    return RuntimeEnabledFeatures::NotificationsEnabled();
  }
  bool notificationTriggersEnabled() {
    return RuntimeEnabledFeatures::NotificationTriggersEnabled();
  }
  bool offMainThreadCSSPaintEnabled() {
    return RuntimeEnabledFeatures::OffMainThreadCSSPaintEnabled();
  }
  bool offscreenCanvasEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasEnabled();
  }
  bool offscreenCanvasCommitEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled();
  }
  bool offscreenCanvasTextEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasTextEnabled();
  }
  bool onDeviceChangeEnabled() {
    return RuntimeEnabledFeatures::OnDeviceChangeEnabled();
  }
  bool orientationEventEnabled() {
    return RuntimeEnabledFeatures::OrientationEventEnabled();
  }
  bool originTrialsEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsEnabled();
  }
  bool originTrialsSampleAPIEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIDependentEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIImpliedEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIInvalidOSEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPINavigationEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabledByRuntimeFlag();
  }
  bool outOfBlinkCorsEnabled() {
    return RuntimeEnabledFeatures::OutOfBlinkCorsEnabled();
  }
  bool overflowIconsForMediaControlsEnabled() {
    return RuntimeEnabledFeatures::OverflowIconsForMediaControlsEnabled();
  }
  bool overlayScrollbarsEnabled() {
    return RuntimeEnabledFeatures::OverlayScrollbarsEnabled();
  }
  bool overscrollCustomizationEnabled() {
    return RuntimeEnabledFeatures::OverscrollCustomizationEnabled();
  }
  bool pageLifecycleTransitionsOptInEnabled() {
    return RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabledByRuntimeFlag();
  }
  bool pageLifecycleTransitionsOptOutEnabled() {
    return RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabledByRuntimeFlag();
  }
  bool pagePopupEnabled() {
    return RuntimeEnabledFeatures::PagePopupEnabled();
  }
  bool paintUnderInvalidationCheckingEnabled() {
    return RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled();
  }
  bool passiveDocumentEventListenersEnabled() {
    return RuntimeEnabledFeatures::PassiveDocumentEventListenersEnabled();
  }
  bool passiveDocumentWheelEventListenersEnabled() {
    return RuntimeEnabledFeatures::PassiveDocumentWheelEventListenersEnabled();
  }
  bool passPaintVisualRectToCompositorEnabled() {
    return RuntimeEnabledFeatures::PassPaintVisualRectToCompositorEnabled();
  }
  bool paymentAppEnabled() {
    return RuntimeEnabledFeatures::PaymentAppEnabled();
  }
  bool paymentHandlerChangePaymentMethodEnabled() {
    return RuntimeEnabledFeatures::PaymentHandlerChangePaymentMethodEnabled();
  }
  bool paymentMethodChangeEventEnabled() {
    return RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled();
  }
  bool paymentRequestEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestEnabled();
  }
  bool paymentRequestHasEnrolledInstrumentEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestHasEnrolledInstrumentEnabled();
  }
  bool paymentRequestMerchantValidationEventEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestMerchantValidationEventEnabled();
  }
  bool paymentRetryEnabled() {
    return RuntimeEnabledFeatures::PaymentRetryEnabled();
  }
  bool performanceManagerInstrumentationEnabled() {
    return RuntimeEnabledFeatures::PerformanceManagerInstrumentationEnabled();
  }
  bool performanceObserverBufferedFlagEnabled() {
    return RuntimeEnabledFeatures::PerformanceObserverBufferedFlagEnabled();
  }
  bool periodicBackgroundSyncEnabled() {
    return RuntimeEnabledFeatures::PeriodicBackgroundSyncEnabled();
  }
  bool perMethodCanMakePaymentQuotaEnabled() {
    return RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag();
  }
  bool permissionDelegationEnabled() {
    return RuntimeEnabledFeatures::PermissionDelegationEnabled();
  }
  bool permissionsEnabled() {
    return RuntimeEnabledFeatures::PermissionsEnabled();
  }
  bool permissionsRequestRevokeEnabled() {
    return RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled();
  }
  bool pictureInPictureEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureEnabled();
  }
  bool pictureInPictureAPIEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureAPIEnabled();
  }
  bool pictureInPictureV2Enabled() {
    return RuntimeEnabledFeatures::PictureInPictureV2Enabled();
  }
  bool pointerRawUpdateEnabled() {
    return RuntimeEnabledFeatures::PointerRawUpdateEnabled();
  }
  bool portalsEnabled() {
    return RuntimeEnabledFeatures::PortalsEnabled();
  }
  bool postAnimationFrameEnabled() {
    return RuntimeEnabledFeatures::PostAnimationFrameEnabled();
  }
  bool preciseMemoryInfoEnabled() {
    return RuntimeEnabledFeatures::PreciseMemoryInfoEnabled();
  }
  bool predictedEventsEnabled() {
    return RuntimeEnabledFeatures::PredictedEventsEnabled();
  }
  bool prefixedVideoFullscreenEnabled() {
    return RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled();
  }
  bool presentationEnabled() {
    return RuntimeEnabledFeatures::PresentationEnabled();
  }
  bool printBrowserEnabled() {
    return RuntimeEnabledFeatures::PrintBrowserEnabled();
  }
  bool priorityHintsEnabled() {
    return RuntimeEnabledFeatures::PriorityHintsEnabledByRuntimeFlag();
  }
  bool pushMessagingEnabled() {
    return RuntimeEnabledFeatures::PushMessagingEnabled();
  }
  bool rasterInducingScrollEnabled() {
    return RuntimeEnabledFeatures::RasterInducingScrollEnabled();
  }
  bool reducedReferrerGranularityEnabled() {
    return RuntimeEnabledFeatures::ReducedReferrerGranularityEnabled();
  }
  bool remotePlaybackEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackEnabled();
  }
  bool remotePlaybackBackendEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackBackendEnabled();
  }
  bool renderingPipelineThrottlingEnabled() {
    return RuntimeEnabledFeatures::RenderingPipelineThrottlingEnabled();
  }
  bool resourceLoadSchedulerEnabled() {
    return RuntimeEnabledFeatures::ResourceLoadSchedulerEnabled();
  }
  bool restrictAppCacheToSecureContextsEnabled() {
    return RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled();
  }
  bool restrictDeviceSensorEventsToSecureContextsEnabled() {
    return RuntimeEnabledFeatures::RestrictDeviceSensorEventsToSecureContextsEnabled();
  }
  bool restrictLazyFrameLoadingToDataSaverEnabled() {
    return RuntimeEnabledFeatures::RestrictLazyFrameLoadingToDataSaverEnabled();
  }
  bool restrictLazyImageLoadingToDataSaverEnabled() {
    return RuntimeEnabledFeatures::RestrictLazyImageLoadingToDataSaverEnabled();
  }
  bool rtcAudioJitterBufferMaxPacketsEnabled() {
    return RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag();
  }
  bool rtcAudioJitterBufferRtxHandlingEnabled() {
    return RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabledByRuntimeFlag();
  }
  bool rtcDtlsTransportEnabled() {
    return RuntimeEnabledFeatures::RTCDtlsTransportEnabled();
  }
  bool rtcIceTransportExtensionEnabled() {
    return RuntimeEnabledFeatures::RTCIceTransportExtensionEnabledByRuntimeFlag();
  }
  bool rtcJitterBufferDelayHintEnabled() {
    return RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabledByRuntimeFlag();
  }
  bool rtcQuicTransportEnabled() {
    return RuntimeEnabledFeatures::RTCQuicTransportEnabledByRuntimeFlag();
  }
  bool rtcRtpSenderParametersEnabled() {
    return RuntimeEnabledFeatures::RTCRtpSenderParametersEnabled();
  }
  bool rtcSctpTransportEnabled() {
    return RuntimeEnabledFeatures::RTCSctpTransportEnabled();
  }
  bool rtcStatsRelativePacketArrivalDelayEnabled() {
    return RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag();
  }
  bool rtcUnifiedPlanEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanEnabled();
  }
  bool rtcUnifiedPlanByDefaultEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled();
  }
  bool scriptedSpeechRecognitionEnabled() {
    return RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled();
  }
  bool scriptedSpeechSynthesisEnabled() {
    return RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled();
  }
  bool scriptStreamingOnPreloadEnabled() {
    return RuntimeEnabledFeatures::ScriptStreamingOnPreloadEnabled();
  }
  bool scrollAnchorSerializationEnabled() {
    return RuntimeEnabledFeatures::ScrollAnchorSerializationEnabled();
  }
  bool scrollCustomizationEnabled() {
    return RuntimeEnabledFeatures::ScrollCustomizationEnabled();
  }
  bool scrollTopLeftInteropEnabled() {
    return RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled();
  }
  bool sendBeaconThrowForBlobWithNonSimpleTypeEnabled() {
    return RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled();
  }
  bool sendMouseEventsDisabledFormControlsEnabled() {
    return RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled();
  }
  bool sensorEnabled() {
    return RuntimeEnabledFeatures::SensorEnabled();
  }
  bool sensorExtraClassesEnabled() {
    return RuntimeEnabledFeatures::SensorExtraClassesEnabled();
  }
  bool serialEnabled() {
    return RuntimeEnabledFeatures::SerialEnabled();
  }
  bool setRootScrollerEnabled() {
    return RuntimeEnabledFeatures::SetRootScrollerEnabled();
  }
  bool shadowDOMV0Enabled() {
    return RuntimeEnabledFeatures::ShadowDOMV0EnabledByRuntimeFlag();
  }
  bool shadowPiercingDescendantCombinatorEnabled() {
    return RuntimeEnabledFeatures::ShadowPiercingDescendantCombinatorEnabled();
  }
  bool shapeDetectionEnabled() {
    return RuntimeEnabledFeatures::ShapeDetectionEnabled();
  }
  bool sharedArrayBufferEnabled() {
    return RuntimeEnabledFeatures::SharedArrayBufferEnabled();
  }
  bool sharedWorkerEnabled() {
    return RuntimeEnabledFeatures::SharedWorkerEnabled();
  }
  bool signatureBasedIntegrityEnabled() {
    return RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag();
  }
  bool signedExchangeSubresourcePrefetchEnabled() {
    return RuntimeEnabledFeatures::SignedExchangeSubresourcePrefetchEnabled();
  }
  bool skipAdEnabled() {
    return RuntimeEnabledFeatures::SkipAdEnabledByRuntimeFlag();
  }
  bool skipTouchEventFilterEnabled() {
    return RuntimeEnabledFeatures::SkipTouchEventFilterEnabled();
  }
  bool smoothScrollJSInterventionEnabled() {
    return RuntimeEnabledFeatures::SmoothScrollJSInterventionEnabled();
  }
  bool smsReceiverEnabled() {
    return RuntimeEnabledFeatures::SmsReceiverEnabled();
  }
  bool speechSynthesisEventCharLengthEnabled() {
    return RuntimeEnabledFeatures::SpeechSynthesisEventCharLengthEnabled();
  }
  bool stableBlinkFeaturesEnabled() {
    return RuntimeEnabledFeatures::StableBlinkFeaturesEnabled();
  }
  bool stackedCSSPropertyAnimationsEnabled() {
    return RuntimeEnabledFeatures::StackedCSSPropertyAnimationsEnabled();
  }
  bool staleWhileRevalidateEnabled() {
    return RuntimeEnabledFeatures::StaleWhileRevalidateEnabledByRuntimeFlag();
  }
  bool storageQuotaDetailsEnabled() {
    return RuntimeEnabledFeatures::StorageQuotaDetailsEnabled();
  }
  bool streamsNativeEnabled() {
    return RuntimeEnabledFeatures::StreamsNativeEnabled();
  }
  bool textFragmentIdentifiersEnabled() {
    return RuntimeEnabledFeatures::TextFragmentIdentifiersEnabled();
  }
  bool textUnderlinePositionLeftRightEnabled() {
    return RuntimeEnabledFeatures::TextUnderlinePositionLeftRightEnabled();
  }
  bool timerThrottlingForBackgroundTabsEnabled() {
    return RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled();
  }
  bool timerThrottlingForHiddenFramesEnabled() {
    return RuntimeEnabledFeatures::TimerThrottlingForHiddenFramesEnabled();
  }
  bool touchEventFeatureDetectionEnabled() {
    return RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag();
  }
  bool trackLayoutPassesPerBlockEnabled() {
    return RuntimeEnabledFeatures::TrackLayoutPassesPerBlockEnabled();
  }
  bool transferableStreamsEnabled() {
    return RuntimeEnabledFeatures::TransferableStreamsEnabled();
  }
  bool translateServiceEnabled() {
    return RuntimeEnabledFeatures::TranslateServiceEnabled();
  }
  bool trustedDOMTypesEnabled() {
    return RuntimeEnabledFeatures::TrustedDOMTypesEnabledByRuntimeFlag();
  }
  bool unclosedFormControlIsInvalidEnabled() {
    return RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled();
  }
  bool unifiedPointerCaptureInBlinkEnabled() {
    return RuntimeEnabledFeatures::UnifiedPointerCaptureInBlinkEnabled();
  }
  bool unifiedTouchAdjustmentEnabled() {
    return RuntimeEnabledFeatures::UnifiedTouchAdjustmentEnabled();
  }
  bool unoptimizedImagePoliciesEnabled() {
    return RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabledByRuntimeFlag();
  }
  bool updateHoverFromLayoutChangeAtBeginFrameEnabled() {
    return RuntimeEnabledFeatures::UpdateHoverFromLayoutChangeAtBeginFrameEnabled();
  }
  bool updateHoverFromScrollAtBeginFrameEnabled() {
    return RuntimeEnabledFeatures::UpdateHoverFromScrollAtBeginFrameEnabled();
  }
  bool userActivationAPIEnabled() {
    return RuntimeEnabledFeatures::UserActivationAPIEnabled();
  }
  bool userActivationPostMessageTransferEnabled() {
    return RuntimeEnabledFeatures::UserActivationPostMessageTransferEnabled();
  }
  bool userActivationSameOriginVisibilityEnabled() {
    return RuntimeEnabledFeatures::UserActivationSameOriginVisibilityEnabled();
  }
  bool userActivationV2Enabled() {
    return RuntimeEnabledFeatures::UserActivationV2Enabled();
  }
  bool userAgentClientHintEnabled() {
    return RuntimeEnabledFeatures::UserAgentClientHintEnabled();
  }
  bool v8IdleTasksEnabled() {
    return RuntimeEnabledFeatures::V8IdleTasksEnabled();
  }
  bool videoAutoFullscreenEnabled() {
    return RuntimeEnabledFeatures::VideoAutoFullscreenEnabled();
  }
  bool videoFullscreenDetectionEnabled() {
    return RuntimeEnabledFeatures::VideoFullscreenDetectionEnabled();
  }
  bool videoFullscreenOrientationLockEnabled() {
    return RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled();
  }
  bool videoRotateToFullscreenEnabled() {
    return RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled();
  }
  bool visibilityCollapseColumnEnabled() {
    return RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled();
  }
  bool wakeLockNavigatorEnabled() {
    return RuntimeEnabledFeatures::WakeLockNavigatorEnabled();
  }
  bool wasmCodeCacheEnabled() {
    return RuntimeEnabledFeatures::WasmCodeCacheEnabled();
  }
  bool webAnimationsAPIEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsAPIEnabled();
  }
  bool webAnimationsSVGEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsSVGEnabled();
  }
  bool webAssemblyThreadsEnabled() {
    return RuntimeEnabledFeatures::WebAssemblyThreadsEnabledByRuntimeFlag();
  }
  bool webAuthEnabled() {
    return RuntimeEnabledFeatures::WebAuthEnabled();
  }
  bool webBluetoothEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothEnabled();
  }
  bool webBluetoothScanningEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothScanningEnabled();
  }
  bool webgl2ComputeContextEnabled() {
    return RuntimeEnabledFeatures::WebGL2ComputeContextEnabled();
  }
  bool webglDraftExtensionsEnabled() {
    return RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled();
  }
  bool webglImageChromiumEnabled() {
    return RuntimeEnabledFeatures::WebGLImageChromiumEnabled();
  }
  bool webgpuEnabled() {
    return RuntimeEnabledFeatures::WebGPUEnabled();
  }
  bool webHIDEnabled() {
    return RuntimeEnabledFeatures::WebHIDEnabled();
  }
  bool webNFCEnabled() {
    return RuntimeEnabledFeatures::WebNFCEnabled();
  }
  bool webShareEnabled() {
    return RuntimeEnabledFeatures::WebShareEnabled();
  }
  bool webShareV2Enabled() {
    return RuntimeEnabledFeatures::WebShareV2Enabled();
  }
  bool webUSBEnabled() {
    return RuntimeEnabledFeatures::WebUSBEnabled();
  }
  bool webUSBOnDedicatedWorkersEnabled() {
    return RuntimeEnabledFeatures::WebUSBOnDedicatedWorkersEnabled();
  }
  bool webVREnabled() {
    return RuntimeEnabledFeatures::WebVREnabledByRuntimeFlag();
  }
  bool webVTTRegionsEnabled() {
    return RuntimeEnabledFeatures::WebVTTRegionsEnabled();
  }
  bool webXREnabled() {
    return RuntimeEnabledFeatures::WebXREnabledByRuntimeFlag();
  }
  bool webXRHitTestEnabled() {
    return RuntimeEnabledFeatures::WebXRHitTestEnabled();
  }
  bool webXRPlaneDetectionEnabled() {
    return RuntimeEnabledFeatures::WebXRPlaneDetectionEnabled();
  }
  bool workerNosniffBlockEnabled() {
    return RuntimeEnabledFeatures::WorkerNosniffBlockEnabled();
  }
  bool workerNosniffWarnEnabled() {
    return RuntimeEnabledFeatures::WorkerNosniffWarnEnabled();
  }
  bool workerTaskQueueEnabled() {
    return RuntimeEnabledFeatures::WorkerTaskQueueEnabled();
  }
  bool xsltEnabled() {
    return RuntimeEnabledFeatures::XSLTEnabled();
  }
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_
