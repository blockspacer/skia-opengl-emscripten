// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_GENERATED_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_GENERATED_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/testing/internal_settings_generated.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

extern const WrapperTypeInfo v8_internal_settings_generated_wrapper_type_info;

class V8InternalSettingsGenerated {
  STATIC_ONLY(V8InternalSettingsGenerated);
 public:
  static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static InternalSettingsGenerated* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<InternalSettingsGenerated>();
  }
  static InternalSettingsGenerated* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_internal_settings_generated_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  static void SetDOMPasteAllowedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDontSendKeyEventsToJavascriptMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetHighlightAdsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetNetworkQuietTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAccelerated2dCanvasMSAASampleCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAcceleratedCompositingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAccessibilityFontScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAccessibilityPasswordValuesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowCustomScrollbarInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowFileAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowGeolocationOnInsecureOriginsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowRunningOfInsecureContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowScriptsToCloseWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAllowUniversalAccessFromFileURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAlwaysShowContextMenuOnTouchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAntialiased2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAntialiasedClips2dCanvasEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAvailableHoverTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetAvailablePointerTypesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetBarrelButtonForDragEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetCookieEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDarkModeContrastMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDarkModeGrayscaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDataSaverHoldbackWebApiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDefaultFixedFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDefaultFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDefaultTextEncodingNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDefaultVideoPosterURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDeviceScaleAdjustmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDisableReadingFromCanvasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDisallowFetchForDocWrittenScriptsInMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnectionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDNSPrefetchingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDoHtmlPreloadScanningMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDoNotUpdateSelectionOnMutatingSelectionRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetDownloadableBinaryFontsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetEmbeddedMediaExperienceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetForceAndroidOverlayScrollbarMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetForceMainWorldInitializationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetForceTouchEventFeatureDetectionForInspectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetForceZeroLayoutHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetFullscreenSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetHideDownloadUIMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetHideScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetHyperlinkAuditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetIgnoreMainFrameOverflowHiddenQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetImagesEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetImmersiveModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetInlineTextBoxAccessibilityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetJavaScriptCanAccessClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPx2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPx3GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPx4GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPxOfflineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPxSlow2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyFrameLoadingDistanceThresholdPxUnknownMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPx2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPx3GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPx4GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPxOfflineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPxSlow2GMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyImageLoadingDistanceThresholdPxUnknownMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLazyLoadEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLoadWithOverviewModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLoadsImagesAutomaticallyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLocalStorageEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLogDnsPrefetchAndPreconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetLogPreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMainFrameClipsContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMainFrameResizesAreOrientationChangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMaxTouchPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMediaControlsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMediaTypeOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMinimumAccelerated2dCanvasSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMinimumFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMinimumLogicalFontSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMockGestureTapHighlightsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetMultiTargetTapNotificationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetNavigateOnDragDropMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetNavigatorPlatformOverrideMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetOfflineWebApplicationCacheEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPasswordEchoDurationInSecondsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPasswordEchoEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPictureInPictureEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPluginsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPreferCompositingToLCDTextEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPreferHiddenVolumeControlsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPrefersReducedMotionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPresentationReceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetPresentationRequiresUserGestureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetReportScreenSizeInPhysicalPixelsQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetRubberBandingOnCompositorThreadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetScriptEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetScrollAnimatorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSelectTrailingWhitespaceEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSelectionIncludesAltImageTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldClearDocumentBackgroundMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldPrintBackgroundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldProtectAgainstIpcFloodingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldRespectImageOrientationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShouldReuseGlobalForUnownedMainFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShowContextMenuOnMouseUpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetShrinksViewportContentToFitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSmartInsertDeleteEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSmoothScrollForFindEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSpatialNavigationEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSpellCheckEnabledByDefaultMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStrictMixedContentCheckingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStrictMixedContentCheckingForPluginMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStrictPowerfulFeatureRestrictionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetStrictlyBlockBlockableMixedContentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSupportsMultipleWindowsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetSyncXHRInDocumentsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextAreasAreResizableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackBackgroundColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackFontFamilyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackFontStyleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackFontVariantMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackMarginPercentageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackTextColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackTextShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTextTrackTextSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetThreadedScrollingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTouchAdjustmentEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTouchDragDropEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetTouchEditingEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetUseLegacyBackgroundSizeShorthandBehaviorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetUseSolidColorScrollbarsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetUseWideViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetValidationMessageTimerMagnificationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportMetaEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportMetaMergeContentQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetViewportMetaZeroValuesQuirkMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWebAppScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWebGL1EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWebGL2EnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWebGLErrorsToConsoleEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWebSecurityEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetWideViewportQuirkEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  static void SetXSSAuditorEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<InternalSettingsGenerated> : public NativeValueTraitsBase<InternalSettingsGenerated> {
  static InternalSettingsGenerated* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  static InternalSettingsGenerated* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<InternalSettingsGenerated> {
  typedef V8InternalSettingsGenerated Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_INTERNAL_SETTINGS_GENERATED_H_
