// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_settings_generated.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#include "internal_settings_generated.h"

#include "third_party/blink/renderer/core/page/page.h"
#include "third_party/blink/renderer/core/frame/settings.h"

namespace blink {

InternalSettingsGenerated::InternalSettingsGenerated(Page* page)
    : page_(page)
    , DOMPasteAllowed_(page->GetSettings().GetDOMPasteAllowed())
    , DontSendKeyEventsToJavascript_(page->GetSettings().GetDontSendKeyEventsToJavascript())
    , HighlightAds_(page->GetSettings().GetHighlightAds())
    , NetworkQuietTimeout_(page->GetSettings().GetNetworkQuietTimeout())
    , accelerated2dCanvasMSAASampleCount_(page->GetSettings().GetAccelerated2dCanvasMSAASampleCount())
    , acceleratedCompositingEnabled_(page->GetSettings().GetAcceleratedCompositingEnabled())
    , accessibilityFontScaleFactor_(page->GetSettings().GetAccessibilityFontScaleFactor())
    , accessibilityPasswordValuesEnabled_(page->GetSettings().GetAccessibilityPasswordValuesEnabled())
    , allowCustomScrollbarInMainFrame_(page->GetSettings().GetAllowCustomScrollbarInMainFrame())
    , allowFileAccessFromFileURLs_(page->GetSettings().GetAllowFileAccessFromFileURLs())
    , allowGeolocationOnInsecureOrigins_(page->GetSettings().GetAllowGeolocationOnInsecureOrigins())
    , allowRunningOfInsecureContent_(page->GetSettings().GetAllowRunningOfInsecureContent())
    , allowScriptsToCloseWindows_(page->GetSettings().GetAllowScriptsToCloseWindows())
    , allowUniversalAccessFromFileURLs_(page->GetSettings().GetAllowUniversalAccessFromFileURLs())
    , alwaysShowContextMenuOnTouch_(page->GetSettings().GetAlwaysShowContextMenuOnTouch())
    , antialiased2dCanvasEnabled_(page->GetSettings().GetAntialiased2dCanvasEnabled())
    , antialiasedClips2dCanvasEnabled_(page->GetSettings().GetAntialiasedClips2dCanvasEnabled())
    , availableHoverTypes_(page->GetSettings().GetAvailableHoverTypes())
    , availablePointerTypes_(page->GetSettings().GetAvailablePointerTypes())
    , barrelButtonForDragEnabled_(page->GetSettings().GetBarrelButtonForDragEnabled())
    , cookieEnabled_(page->GetSettings().GetCookieEnabled())
    , darkModeContrast_(page->GetSettings().GetDarkModeContrast())
    , darkModeGrayscale_(page->GetSettings().GetDarkModeGrayscale())
    , dataSaverHoldbackWebApi_(page->GetSettings().GetDataSaverHoldbackWebApi())
    , defaultFixedFontSize_(page->GetSettings().GetDefaultFixedFontSize())
    , defaultFontSize_(page->GetSettings().GetDefaultFontSize())
    , defaultTextEncodingName_(page->GetSettings().GetDefaultTextEncodingName())
    , defaultVideoPosterURL_(page->GetSettings().GetDefaultVideoPosterURL())
    , deviceScaleAdjustment_(page->GetSettings().GetDeviceScaleAdjustment())
    , disableReadingFromCanvas_(page->GetSettings().GetDisableReadingFromCanvas())
    , disallowFetchForDocWrittenScriptsInMainFrame_(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrame())
    , disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G())
    , disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_(page->GetSettings().GetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections())
    , dnsPrefetchingEnabled_(page->GetSettings().GetDNSPrefetchingEnabled())
    , doHtmlPreloadScanning_(page->GetSettings().GetDoHtmlPreloadScanning())
    , doNotUpdateSelectionOnMutatingSelectionRange_(page->GetSettings().GetDoNotUpdateSelectionOnMutatingSelectionRange())
    , downloadableBinaryFontsEnabled_(page->GetSettings().GetDownloadableBinaryFontsEnabled())
    , embeddedMediaExperienceEnabled_(page->GetSettings().GetEmbeddedMediaExperienceEnabled())
    , forceAndroidOverlayScrollbar_(page->GetSettings().GetForceAndroidOverlayScrollbar())
    , forceMainWorldInitialization_(page->GetSettings().GetForceMainWorldInitialization())
    , forceTouchEventFeatureDetectionForInspector_(page->GetSettings().GetForceTouchEventFeatureDetectionForInspector())
    , forceZeroLayoutHeight_(page->GetSettings().GetForceZeroLayoutHeight())
    , fullscreenSupported_(page->GetSettings().GetFullscreenSupported())
    , hideDownloadUI_(page->GetSettings().GetHideDownloadUI())
    , hideScrollbars_(page->GetSettings().GetHideScrollbars())
    , hyperlinkAuditingEnabled_(page->GetSettings().GetHyperlinkAuditingEnabled())
    , ignoreMainFrameOverflowHiddenQuirk_(page->GetSettings().GetIgnoreMainFrameOverflowHiddenQuirk())
    , imagesEnabled_(page->GetSettings().GetImagesEnabled())
    , immersiveModeEnabled_(page->GetSettings().GetImmersiveModeEnabled())
    , inlineTextBoxAccessibilityEnabled_(page->GetSettings().GetInlineTextBoxAccessibilityEnabled())
    , javaScriptCanAccessClipboard_(page->GetSettings().GetJavaScriptCanAccessClipboard())
    , lazyFrameLoadingDistanceThresholdPx2G_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPx2G())
    , lazyFrameLoadingDistanceThresholdPx3G_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPx3G())
    , lazyFrameLoadingDistanceThresholdPx4G_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPx4G())
    , lazyFrameLoadingDistanceThresholdPxOffline_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPxOffline())
    , lazyFrameLoadingDistanceThresholdPxSlow2G_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPxSlow2G())
    , lazyFrameLoadingDistanceThresholdPxUnknown_(page->GetSettings().GetLazyFrameLoadingDistanceThresholdPxUnknown())
    , lazyImageLoadingDistanceThresholdPx2G_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPx2G())
    , lazyImageLoadingDistanceThresholdPx3G_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPx3G())
    , lazyImageLoadingDistanceThresholdPx4G_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPx4G())
    , lazyImageLoadingDistanceThresholdPxOffline_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPxOffline())
    , lazyImageLoadingDistanceThresholdPxSlow2G_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPxSlow2G())
    , lazyImageLoadingDistanceThresholdPxUnknown_(page->GetSettings().GetLazyImageLoadingDistanceThresholdPxUnknown())
    , lazyLoadEnabled_(page->GetSettings().GetLazyLoadEnabled())
    , loadWithOverviewMode_(page->GetSettings().GetLoadWithOverviewMode())
    , loadsImagesAutomatically_(page->GetSettings().GetLoadsImagesAutomatically())
    , localStorageEnabled_(page->GetSettings().GetLocalStorageEnabled())
    , logDnsPrefetchAndPreconnect_(page->GetSettings().GetLogDnsPrefetchAndPreconnect())
    , logPreload_(page->GetSettings().GetLogPreload())
    , mainFrameClipsContent_(page->GetSettings().GetMainFrameClipsContent())
    , mainFrameResizesAreOrientationChanges_(page->GetSettings().GetMainFrameResizesAreOrientationChanges())
    , maxTouchPoints_(page->GetSettings().GetMaxTouchPoints())
    , mediaControlsEnabled_(page->GetSettings().GetMediaControlsEnabled())
    , mediaTypeOverride_(page->GetSettings().GetMediaTypeOverride())
    , minimumAccelerated2dCanvasSize_(page->GetSettings().GetMinimumAccelerated2dCanvasSize())
    , minimumFontSize_(page->GetSettings().GetMinimumFontSize())
    , minimumLogicalFontSize_(page->GetSettings().GetMinimumLogicalFontSize())
    , mockGestureTapHighlightsEnabled_(page->GetSettings().GetMockGestureTapHighlightsEnabled())
    , multiTargetTapNotificationEnabled_(page->GetSettings().GetMultiTargetTapNotificationEnabled())
    , navigateOnDragDrop_(page->GetSettings().GetNavigateOnDragDrop())
    , navigatorPlatformOverride_(page->GetSettings().GetNavigatorPlatformOverride())
    , offlineWebApplicationCacheEnabled_(page->GetSettings().GetOfflineWebApplicationCacheEnabled())
    , passwordEchoDurationInSeconds_(page->GetSettings().GetPasswordEchoDurationInSeconds())
    , passwordEchoEnabled_(page->GetSettings().GetPasswordEchoEnabled())
    , pictureInPictureEnabled_(page->GetSettings().GetPictureInPictureEnabled())
    , pluginsEnabled_(page->GetSettings().GetPluginsEnabled())
    , preferCompositingToLCDTextEnabled_(page->GetSettings().GetPreferCompositingToLCDTextEnabled())
    , preferHiddenVolumeControls_(page->GetSettings().GetPreferHiddenVolumeControls())
    , prefersReducedMotion_(page->GetSettings().GetPrefersReducedMotion())
    , presentationReceiver_(page->GetSettings().GetPresentationReceiver())
    , presentationRequiresUserGesture_(page->GetSettings().GetPresentationRequiresUserGesture())
    , reportScreenSizeInPhysicalPixelsQuirk_(page->GetSettings().GetReportScreenSizeInPhysicalPixelsQuirk())
    , rubberBandingOnCompositorThread_(page->GetSettings().GetRubberBandingOnCompositorThread())
    , scriptEnabled_(page->GetSettings().GetScriptEnabled())
    , scrollAnimatorEnabled_(page->GetSettings().GetScrollAnimatorEnabled())
    , selectTrailingWhitespaceEnabled_(page->GetSettings().GetSelectTrailingWhitespaceEnabled())
    , selectionIncludesAltImageText_(page->GetSettings().GetSelectionIncludesAltImageText())
    , shouldClearDocumentBackground_(page->GetSettings().GetShouldClearDocumentBackground())
    , shouldPrintBackgrounds_(page->GetSettings().GetShouldPrintBackgrounds())
    , shouldProtectAgainstIpcFlooding_(page->GetSettings().GetShouldProtectAgainstIpcFlooding())
    , shouldRespectImageOrientation_(page->GetSettings().GetShouldRespectImageOrientation())
    , shouldReuseGlobalForUnownedMainFrame_(page->GetSettings().GetShouldReuseGlobalForUnownedMainFrame())
    , showContextMenuOnMouseUp_(page->GetSettings().GetShowContextMenuOnMouseUp())
    , shrinksViewportContentToFit_(page->GetSettings().GetShrinksViewportContentToFit())
    , smartInsertDeleteEnabled_(page->GetSettings().GetSmartInsertDeleteEnabled())
    , smoothScrollForFindEnabled_(page->GetSettings().GetSmoothScrollForFindEnabled())
    , spatialNavigationEnabled_(page->GetSettings().GetSpatialNavigationEnabled())
    , spellCheckEnabledByDefault_(page->GetSettings().GetSpellCheckEnabledByDefault())
    , strictMixedContentChecking_(page->GetSettings().GetStrictMixedContentChecking())
    , strictMixedContentCheckingForPlugin_(page->GetSettings().GetStrictMixedContentCheckingForPlugin())
    , strictPowerfulFeatureRestrictions_(page->GetSettings().GetStrictPowerfulFeatureRestrictions())
    , strictlyBlockBlockableMixedContent_(page->GetSettings().GetStrictlyBlockBlockableMixedContent())
    , supportsMultipleWindows_(page->GetSettings().GetSupportsMultipleWindows())
    , syncXHRInDocumentsEnabled_(page->GetSettings().GetSyncXHRInDocumentsEnabled())
    , textAreasAreResizable_(page->GetSettings().GetTextAreasAreResizable())
    , textTrackBackgroundColor_(page->GetSettings().GetTextTrackBackgroundColor())
    , textTrackFontFamily_(page->GetSettings().GetTextTrackFontFamily())
    , textTrackFontStyle_(page->GetSettings().GetTextTrackFontStyle())
    , textTrackFontVariant_(page->GetSettings().GetTextTrackFontVariant())
    , textTrackMarginPercentage_(page->GetSettings().GetTextTrackMarginPercentage())
    , textTrackTextColor_(page->GetSettings().GetTextTrackTextColor())
    , textTrackTextShadow_(page->GetSettings().GetTextTrackTextShadow())
    , textTrackTextSize_(page->GetSettings().GetTextTrackTextSize())
    , threadedScrollingEnabled_(page->GetSettings().GetThreadedScrollingEnabled())
    , touchAdjustmentEnabled_(page->GetSettings().GetTouchAdjustmentEnabled())
    , touchDragDropEnabled_(page->GetSettings().GetTouchDragDropEnabled())
    , touchEditingEnabled_(page->GetSettings().GetTouchEditingEnabled())
    , useLegacyBackgroundSizeShorthandBehavior_(page->GetSettings().GetUseLegacyBackgroundSizeShorthandBehavior())
    , useSolidColorScrollbars_(page->GetSettings().GetUseSolidColorScrollbars())
    , useWideViewport_(page->GetSettings().GetUseWideViewport())
    , validationMessageTimerMagnification_(page->GetSettings().GetValidationMessageTimerMagnification())
    , viewportEnabled_(page->GetSettings().GetViewportEnabled())
    , viewportMetaEnabled_(page->GetSettings().GetViewportMetaEnabled())
    , viewportMetaMergeContentQuirk_(page->GetSettings().GetViewportMetaMergeContentQuirk())
    , viewportMetaZeroValuesQuirk_(page->GetSettings().GetViewportMetaZeroValuesQuirk())
    , webAppScope_(page->GetSettings().GetWebAppScope())
    , webGL1Enabled_(page->GetSettings().GetWebGL1Enabled())
    , webGL2Enabled_(page->GetSettings().GetWebGL2Enabled())
    , webGLErrorsToConsoleEnabled_(page->GetSettings().GetWebGLErrorsToConsoleEnabled())
    , webSecurityEnabled_(page->GetSettings().GetWebSecurityEnabled())
    , wideViewportQuirkEnabled_(page->GetSettings().GetWideViewportQuirkEnabled())
    , xssAuditorEnabled_(page->GetSettings().GetXSSAuditorEnabled())
{
}

InternalSettingsGenerated::~InternalSettingsGenerated() {}

void InternalSettingsGenerated::resetToConsistentState() {
  page_->GetSettings().SetDOMPasteAllowed(DOMPasteAllowed_);
  page_->GetSettings().SetDontSendKeyEventsToJavascript(DontSendKeyEventsToJavascript_);
  page_->GetSettings().SetHighlightAds(HighlightAds_);
  page_->GetSettings().SetNetworkQuietTimeout(NetworkQuietTimeout_);
  page_->GetSettings().SetAccelerated2dCanvasMSAASampleCount(accelerated2dCanvasMSAASampleCount_);
  page_->GetSettings().SetAcceleratedCompositingEnabled(acceleratedCompositingEnabled_);
  page_->GetSettings().SetAccessibilityFontScaleFactor(accessibilityFontScaleFactor_);
  page_->GetSettings().SetAccessibilityPasswordValuesEnabled(accessibilityPasswordValuesEnabled_);
  page_->GetSettings().SetAllowCustomScrollbarInMainFrame(allowCustomScrollbarInMainFrame_);
  page_->GetSettings().SetAllowFileAccessFromFileURLs(allowFileAccessFromFileURLs_);
  page_->GetSettings().SetAllowGeolocationOnInsecureOrigins(allowGeolocationOnInsecureOrigins_);
  page_->GetSettings().SetAllowRunningOfInsecureContent(allowRunningOfInsecureContent_);
  page_->GetSettings().SetAllowScriptsToCloseWindows(allowScriptsToCloseWindows_);
  page_->GetSettings().SetAllowUniversalAccessFromFileURLs(allowUniversalAccessFromFileURLs_);
  page_->GetSettings().SetAlwaysShowContextMenuOnTouch(alwaysShowContextMenuOnTouch_);
  page_->GetSettings().SetAntialiased2dCanvasEnabled(antialiased2dCanvasEnabled_);
  page_->GetSettings().SetAntialiasedClips2dCanvasEnabled(antialiasedClips2dCanvasEnabled_);
  page_->GetSettings().SetAvailableHoverTypes(availableHoverTypes_);
  page_->GetSettings().SetAvailablePointerTypes(availablePointerTypes_);
  page_->GetSettings().SetBarrelButtonForDragEnabled(barrelButtonForDragEnabled_);
  page_->GetSettings().SetCookieEnabled(cookieEnabled_);
  page_->GetSettings().SetDarkModeContrast(darkModeContrast_);
  page_->GetSettings().SetDarkModeGrayscale(darkModeGrayscale_);
  page_->GetSettings().SetDataSaverHoldbackWebApi(dataSaverHoldbackWebApi_);
  page_->GetSettings().SetDefaultFixedFontSize(defaultFixedFontSize_);
  page_->GetSettings().SetDefaultFontSize(defaultFontSize_);
  page_->GetSettings().SetDefaultTextEncodingName(defaultTextEncodingName_);
  page_->GetSettings().SetDefaultVideoPosterURL(defaultVideoPosterURL_);
  page_->GetSettings().SetDeviceScaleAdjustment(deviceScaleAdjustment_);
  page_->GetSettings().SetDisableReadingFromCanvas(disableReadingFromCanvas_);
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrame(disallowFetchForDocWrittenScriptsInMainFrame_);
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_);
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_);
  page_->GetSettings().SetDNSPrefetchingEnabled(dnsPrefetchingEnabled_);
  page_->GetSettings().SetDoHtmlPreloadScanning(doHtmlPreloadScanning_);
  page_->GetSettings().SetDoNotUpdateSelectionOnMutatingSelectionRange(doNotUpdateSelectionOnMutatingSelectionRange_);
  page_->GetSettings().SetDownloadableBinaryFontsEnabled(downloadableBinaryFontsEnabled_);
  page_->GetSettings().SetEmbeddedMediaExperienceEnabled(embeddedMediaExperienceEnabled_);
  page_->GetSettings().SetForceAndroidOverlayScrollbar(forceAndroidOverlayScrollbar_);
  page_->GetSettings().SetForceMainWorldInitialization(forceMainWorldInitialization_);
  page_->GetSettings().SetForceTouchEventFeatureDetectionForInspector(forceTouchEventFeatureDetectionForInspector_);
  page_->GetSettings().SetForceZeroLayoutHeight(forceZeroLayoutHeight_);
  page_->GetSettings().SetFullscreenSupported(fullscreenSupported_);
  page_->GetSettings().SetHideDownloadUI(hideDownloadUI_);
  page_->GetSettings().SetHideScrollbars(hideScrollbars_);
  page_->GetSettings().SetHyperlinkAuditingEnabled(hyperlinkAuditingEnabled_);
  page_->GetSettings().SetIgnoreMainFrameOverflowHiddenQuirk(ignoreMainFrameOverflowHiddenQuirk_);
  page_->GetSettings().SetImagesEnabled(imagesEnabled_);
  page_->GetSettings().SetImmersiveModeEnabled(immersiveModeEnabled_);
  page_->GetSettings().SetInlineTextBoxAccessibilityEnabled(inlineTextBoxAccessibilityEnabled_);
  page_->GetSettings().SetJavaScriptCanAccessClipboard(javaScriptCanAccessClipboard_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx2G(lazyFrameLoadingDistanceThresholdPx2G_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx3G(lazyFrameLoadingDistanceThresholdPx3G_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx4G(lazyFrameLoadingDistanceThresholdPx4G_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxOffline(lazyFrameLoadingDistanceThresholdPxOffline_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxSlow2G(lazyFrameLoadingDistanceThresholdPxSlow2G_);
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxUnknown(lazyFrameLoadingDistanceThresholdPxUnknown_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx2G(lazyImageLoadingDistanceThresholdPx2G_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx3G(lazyImageLoadingDistanceThresholdPx3G_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx4G(lazyImageLoadingDistanceThresholdPx4G_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxOffline(lazyImageLoadingDistanceThresholdPxOffline_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxSlow2G(lazyImageLoadingDistanceThresholdPxSlow2G_);
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxUnknown(lazyImageLoadingDistanceThresholdPxUnknown_);
  page_->GetSettings().SetLazyLoadEnabled(lazyLoadEnabled_);
  page_->GetSettings().SetLoadWithOverviewMode(loadWithOverviewMode_);
  page_->GetSettings().SetLoadsImagesAutomatically(loadsImagesAutomatically_);
  page_->GetSettings().SetLocalStorageEnabled(localStorageEnabled_);
  page_->GetSettings().SetLogDnsPrefetchAndPreconnect(logDnsPrefetchAndPreconnect_);
  page_->GetSettings().SetLogPreload(logPreload_);
  page_->GetSettings().SetMainFrameClipsContent(mainFrameClipsContent_);
  page_->GetSettings().SetMainFrameResizesAreOrientationChanges(mainFrameResizesAreOrientationChanges_);
  page_->GetSettings().SetMaxTouchPoints(maxTouchPoints_);
  page_->GetSettings().SetMediaControlsEnabled(mediaControlsEnabled_);
  page_->GetSettings().SetMediaTypeOverride(mediaTypeOverride_);
  page_->GetSettings().SetMinimumAccelerated2dCanvasSize(minimumAccelerated2dCanvasSize_);
  page_->GetSettings().SetMinimumFontSize(minimumFontSize_);
  page_->GetSettings().SetMinimumLogicalFontSize(minimumLogicalFontSize_);
  page_->GetSettings().SetMockGestureTapHighlightsEnabled(mockGestureTapHighlightsEnabled_);
  page_->GetSettings().SetMultiTargetTapNotificationEnabled(multiTargetTapNotificationEnabled_);
  page_->GetSettings().SetNavigateOnDragDrop(navigateOnDragDrop_);
  page_->GetSettings().SetNavigatorPlatformOverride(navigatorPlatformOverride_);
  page_->GetSettings().SetOfflineWebApplicationCacheEnabled(offlineWebApplicationCacheEnabled_);
  page_->GetSettings().SetPasswordEchoDurationInSeconds(passwordEchoDurationInSeconds_);
  page_->GetSettings().SetPasswordEchoEnabled(passwordEchoEnabled_);
  page_->GetSettings().SetPictureInPictureEnabled(pictureInPictureEnabled_);
  page_->GetSettings().SetPluginsEnabled(pluginsEnabled_);
  page_->GetSettings().SetPreferCompositingToLCDTextEnabled(preferCompositingToLCDTextEnabled_);
  page_->GetSettings().SetPreferHiddenVolumeControls(preferHiddenVolumeControls_);
  page_->GetSettings().SetPrefersReducedMotion(prefersReducedMotion_);
  page_->GetSettings().SetPresentationReceiver(presentationReceiver_);
  page_->GetSettings().SetPresentationRequiresUserGesture(presentationRequiresUserGesture_);
  page_->GetSettings().SetReportScreenSizeInPhysicalPixelsQuirk(reportScreenSizeInPhysicalPixelsQuirk_);
  page_->GetSettings().SetRubberBandingOnCompositorThread(rubberBandingOnCompositorThread_);
  page_->GetSettings().SetScriptEnabled(scriptEnabled_);
  page_->GetSettings().SetScrollAnimatorEnabled(scrollAnimatorEnabled_);
  page_->GetSettings().SetSelectTrailingWhitespaceEnabled(selectTrailingWhitespaceEnabled_);
  page_->GetSettings().SetSelectionIncludesAltImageText(selectionIncludesAltImageText_);
  page_->GetSettings().SetShouldClearDocumentBackground(shouldClearDocumentBackground_);
  page_->GetSettings().SetShouldPrintBackgrounds(shouldPrintBackgrounds_);
  page_->GetSettings().SetShouldProtectAgainstIpcFlooding(shouldProtectAgainstIpcFlooding_);
  page_->GetSettings().SetShouldRespectImageOrientation(shouldRespectImageOrientation_);
  page_->GetSettings().SetShouldReuseGlobalForUnownedMainFrame(shouldReuseGlobalForUnownedMainFrame_);
  page_->GetSettings().SetShowContextMenuOnMouseUp(showContextMenuOnMouseUp_);
  page_->GetSettings().SetShrinksViewportContentToFit(shrinksViewportContentToFit_);
  page_->GetSettings().SetSmartInsertDeleteEnabled(smartInsertDeleteEnabled_);
  page_->GetSettings().SetSmoothScrollForFindEnabled(smoothScrollForFindEnabled_);
  page_->GetSettings().SetSpatialNavigationEnabled(spatialNavigationEnabled_);
  page_->GetSettings().SetSpellCheckEnabledByDefault(spellCheckEnabledByDefault_);
  page_->GetSettings().SetStrictMixedContentChecking(strictMixedContentChecking_);
  page_->GetSettings().SetStrictMixedContentCheckingForPlugin(strictMixedContentCheckingForPlugin_);
  page_->GetSettings().SetStrictPowerfulFeatureRestrictions(strictPowerfulFeatureRestrictions_);
  page_->GetSettings().SetStrictlyBlockBlockableMixedContent(strictlyBlockBlockableMixedContent_);
  page_->GetSettings().SetSupportsMultipleWindows(supportsMultipleWindows_);
  page_->GetSettings().SetSyncXHRInDocumentsEnabled(syncXHRInDocumentsEnabled_);
  page_->GetSettings().SetTextAreasAreResizable(textAreasAreResizable_);
  page_->GetSettings().SetTextTrackBackgroundColor(textTrackBackgroundColor_);
  page_->GetSettings().SetTextTrackFontFamily(textTrackFontFamily_);
  page_->GetSettings().SetTextTrackFontStyle(textTrackFontStyle_);
  page_->GetSettings().SetTextTrackFontVariant(textTrackFontVariant_);
  page_->GetSettings().SetTextTrackMarginPercentage(textTrackMarginPercentage_);
  page_->GetSettings().SetTextTrackTextColor(textTrackTextColor_);
  page_->GetSettings().SetTextTrackTextShadow(textTrackTextShadow_);
  page_->GetSettings().SetTextTrackTextSize(textTrackTextSize_);
  page_->GetSettings().SetThreadedScrollingEnabled(threadedScrollingEnabled_);
  page_->GetSettings().SetTouchAdjustmentEnabled(touchAdjustmentEnabled_);
  page_->GetSettings().SetTouchDragDropEnabled(touchDragDropEnabled_);
  page_->GetSettings().SetTouchEditingEnabled(touchEditingEnabled_);
  page_->GetSettings().SetUseLegacyBackgroundSizeShorthandBehavior(useLegacyBackgroundSizeShorthandBehavior_);
  page_->GetSettings().SetUseSolidColorScrollbars(useSolidColorScrollbars_);
  page_->GetSettings().SetUseWideViewport(useWideViewport_);
  page_->GetSettings().SetValidationMessageTimerMagnification(validationMessageTimerMagnification_);
  page_->GetSettings().SetViewportEnabled(viewportEnabled_);
  page_->GetSettings().SetViewportMetaEnabled(viewportMetaEnabled_);
  page_->GetSettings().SetViewportMetaMergeContentQuirk(viewportMetaMergeContentQuirk_);
  page_->GetSettings().SetViewportMetaZeroValuesQuirk(viewportMetaZeroValuesQuirk_);
  page_->GetSettings().SetWebAppScope(webAppScope_);
  page_->GetSettings().SetWebGL1Enabled(webGL1Enabled_);
  page_->GetSettings().SetWebGL2Enabled(webGL2Enabled_);
  page_->GetSettings().SetWebGLErrorsToConsoleEnabled(webGLErrorsToConsoleEnabled_);
  page_->GetSettings().SetWebSecurityEnabled(webSecurityEnabled_);
  page_->GetSettings().SetWideViewportQuirkEnabled(wideViewportQuirkEnabled_);
  page_->GetSettings().SetXSSAuditorEnabled(xssAuditorEnabled_);
}

void InternalSettingsGenerated::setDOMPasteAllowed(bool DOMPasteAllowed) {
  page_->GetSettings().SetDOMPasteAllowed(DOMPasteAllowed);
}

void InternalSettingsGenerated::setDontSendKeyEventsToJavascript(bool DontSendKeyEventsToJavascript) {
  page_->GetSettings().SetDontSendKeyEventsToJavascript(DontSendKeyEventsToJavascript);
}

void InternalSettingsGenerated::setHighlightAds(bool HighlightAds) {
  page_->GetSettings().SetHighlightAds(HighlightAds);
}

void InternalSettingsGenerated::setNetworkQuietTimeout(double NetworkQuietTimeout) {
  page_->GetSettings().SetNetworkQuietTimeout(NetworkQuietTimeout);
}

void InternalSettingsGenerated::setAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount) {
  page_->GetSettings().SetAccelerated2dCanvasMSAASampleCount(accelerated2dCanvasMSAASampleCount);
}

void InternalSettingsGenerated::setAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled) {
  page_->GetSettings().SetAcceleratedCompositingEnabled(acceleratedCompositingEnabled);
}

void InternalSettingsGenerated::setAccessibilityFontScaleFactor(double accessibilityFontScaleFactor) {
  page_->GetSettings().SetAccessibilityFontScaleFactor(accessibilityFontScaleFactor);
}

void InternalSettingsGenerated::setAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled) {
  page_->GetSettings().SetAccessibilityPasswordValuesEnabled(accessibilityPasswordValuesEnabled);
}

void InternalSettingsGenerated::setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame) {
  page_->GetSettings().SetAllowCustomScrollbarInMainFrame(allowCustomScrollbarInMainFrame);
}

void InternalSettingsGenerated::setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs) {
  page_->GetSettings().SetAllowFileAccessFromFileURLs(allowFileAccessFromFileURLs);
}

void InternalSettingsGenerated::setAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins) {
  page_->GetSettings().SetAllowGeolocationOnInsecureOrigins(allowGeolocationOnInsecureOrigins);
}

void InternalSettingsGenerated::setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent) {
  page_->GetSettings().SetAllowRunningOfInsecureContent(allowRunningOfInsecureContent);
}

void InternalSettingsGenerated::setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows) {
  page_->GetSettings().SetAllowScriptsToCloseWindows(allowScriptsToCloseWindows);
}

void InternalSettingsGenerated::setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs) {
  page_->GetSettings().SetAllowUniversalAccessFromFileURLs(allowUniversalAccessFromFileURLs);
}

void InternalSettingsGenerated::setAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch) {
  page_->GetSettings().SetAlwaysShowContextMenuOnTouch(alwaysShowContextMenuOnTouch);
}

void InternalSettingsGenerated::setAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled) {
  page_->GetSettings().SetAntialiased2dCanvasEnabled(antialiased2dCanvasEnabled);
}

void InternalSettingsGenerated::setAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled) {
  page_->GetSettings().SetAntialiasedClips2dCanvasEnabled(antialiasedClips2dCanvasEnabled);
}

void InternalSettingsGenerated::setAvailableHoverTypes(int availableHoverTypes) {
  page_->GetSettings().SetAvailableHoverTypes(availableHoverTypes);
}

void InternalSettingsGenerated::setAvailablePointerTypes(int availablePointerTypes) {
  page_->GetSettings().SetAvailablePointerTypes(availablePointerTypes);
}

void InternalSettingsGenerated::setBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled) {
  page_->GetSettings().SetBarrelButtonForDragEnabled(barrelButtonForDragEnabled);
}

void InternalSettingsGenerated::setCookieEnabled(bool cookieEnabled) {
  page_->GetSettings().SetCookieEnabled(cookieEnabled);
}

void InternalSettingsGenerated::setDarkModeContrast(double darkModeContrast) {
  page_->GetSettings().SetDarkModeContrast(darkModeContrast);
}

void InternalSettingsGenerated::setDarkModeGrayscale(bool darkModeGrayscale) {
  page_->GetSettings().SetDarkModeGrayscale(darkModeGrayscale);
}

void InternalSettingsGenerated::setDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi) {
  page_->GetSettings().SetDataSaverHoldbackWebApi(dataSaverHoldbackWebApi);
}

void InternalSettingsGenerated::setDefaultFixedFontSize(int defaultFixedFontSize) {
  page_->GetSettings().SetDefaultFixedFontSize(defaultFixedFontSize);
}

void InternalSettingsGenerated::setDefaultFontSize(int defaultFontSize) {
  page_->GetSettings().SetDefaultFontSize(defaultFontSize);
}

void InternalSettingsGenerated::setDefaultTextEncodingName(const String& defaultTextEncodingName) {
  page_->GetSettings().SetDefaultTextEncodingName(defaultTextEncodingName);
}

void InternalSettingsGenerated::setDefaultVideoPosterURL(const String& defaultVideoPosterURL) {
  page_->GetSettings().SetDefaultVideoPosterURL(defaultVideoPosterURL);
}

void InternalSettingsGenerated::setDeviceScaleAdjustment(double deviceScaleAdjustment) {
  page_->GetSettings().SetDeviceScaleAdjustment(deviceScaleAdjustment);
}

void InternalSettingsGenerated::setDisableReadingFromCanvas(bool disableReadingFromCanvas) {
  page_->GetSettings().SetDisableReadingFromCanvas(disableReadingFromCanvas);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame) {
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrame(disallowFetchForDocWrittenScriptsInMainFrame);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G) {
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
}

void InternalSettingsGenerated::setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections) {
  page_->GetSettings().SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
}

void InternalSettingsGenerated::setDNSPrefetchingEnabled(bool dnsPrefetchingEnabled) {
  page_->GetSettings().SetDNSPrefetchingEnabled(dnsPrefetchingEnabled);
}

void InternalSettingsGenerated::setDoHtmlPreloadScanning(bool doHtmlPreloadScanning) {
  page_->GetSettings().SetDoHtmlPreloadScanning(doHtmlPreloadScanning);
}

void InternalSettingsGenerated::setDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange) {
  page_->GetSettings().SetDoNotUpdateSelectionOnMutatingSelectionRange(doNotUpdateSelectionOnMutatingSelectionRange);
}

void InternalSettingsGenerated::setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled) {
  page_->GetSettings().SetDownloadableBinaryFontsEnabled(downloadableBinaryFontsEnabled);
}

void InternalSettingsGenerated::setEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled) {
  page_->GetSettings().SetEmbeddedMediaExperienceEnabled(embeddedMediaExperienceEnabled);
}

void InternalSettingsGenerated::setForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar) {
  page_->GetSettings().SetForceAndroidOverlayScrollbar(forceAndroidOverlayScrollbar);
}

void InternalSettingsGenerated::setForceMainWorldInitialization(bool forceMainWorldInitialization) {
  page_->GetSettings().SetForceMainWorldInitialization(forceMainWorldInitialization);
}

void InternalSettingsGenerated::setForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector) {
  page_->GetSettings().SetForceTouchEventFeatureDetectionForInspector(forceTouchEventFeatureDetectionForInspector);
}

void InternalSettingsGenerated::setForceZeroLayoutHeight(bool forceZeroLayoutHeight) {
  page_->GetSettings().SetForceZeroLayoutHeight(forceZeroLayoutHeight);
}

void InternalSettingsGenerated::setFullscreenSupported(bool fullscreenSupported) {
  page_->GetSettings().SetFullscreenSupported(fullscreenSupported);
}

void InternalSettingsGenerated::setHideDownloadUI(bool hideDownloadUI) {
  page_->GetSettings().SetHideDownloadUI(hideDownloadUI);
}

void InternalSettingsGenerated::setHideScrollbars(bool hideScrollbars) {
  page_->GetSettings().SetHideScrollbars(hideScrollbars);
}

void InternalSettingsGenerated::setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled) {
  page_->GetSettings().SetHyperlinkAuditingEnabled(hyperlinkAuditingEnabled);
}

void InternalSettingsGenerated::setIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk) {
  page_->GetSettings().SetIgnoreMainFrameOverflowHiddenQuirk(ignoreMainFrameOverflowHiddenQuirk);
}

void InternalSettingsGenerated::setImagesEnabled(bool imagesEnabled) {
  page_->GetSettings().SetImagesEnabled(imagesEnabled);
}

void InternalSettingsGenerated::setImmersiveModeEnabled(bool immersiveModeEnabled) {
  page_->GetSettings().SetImmersiveModeEnabled(immersiveModeEnabled);
}

void InternalSettingsGenerated::setInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled) {
  page_->GetSettings().SetInlineTextBoxAccessibilityEnabled(inlineTextBoxAccessibilityEnabled);
}

void InternalSettingsGenerated::setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard) {
  page_->GetSettings().SetJavaScriptCanAccessClipboard(javaScriptCanAccessClipboard);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPx2G(int lazyFrameLoadingDistanceThresholdPx2G) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx2G(lazyFrameLoadingDistanceThresholdPx2G);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPx3G(int lazyFrameLoadingDistanceThresholdPx3G) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx3G(lazyFrameLoadingDistanceThresholdPx3G);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPx4G(int lazyFrameLoadingDistanceThresholdPx4G) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPx4G(lazyFrameLoadingDistanceThresholdPx4G);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPxOffline(int lazyFrameLoadingDistanceThresholdPxOffline) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxOffline(lazyFrameLoadingDistanceThresholdPxOffline);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPxSlow2G(int lazyFrameLoadingDistanceThresholdPxSlow2G) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxSlow2G(lazyFrameLoadingDistanceThresholdPxSlow2G);
}

void InternalSettingsGenerated::setLazyFrameLoadingDistanceThresholdPxUnknown(int lazyFrameLoadingDistanceThresholdPxUnknown) {
  page_->GetSettings().SetLazyFrameLoadingDistanceThresholdPxUnknown(lazyFrameLoadingDistanceThresholdPxUnknown);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPx2G(int lazyImageLoadingDistanceThresholdPx2G) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx2G(lazyImageLoadingDistanceThresholdPx2G);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPx3G(int lazyImageLoadingDistanceThresholdPx3G) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx3G(lazyImageLoadingDistanceThresholdPx3G);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPx4G(int lazyImageLoadingDistanceThresholdPx4G) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPx4G(lazyImageLoadingDistanceThresholdPx4G);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPxOffline(int lazyImageLoadingDistanceThresholdPxOffline) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxOffline(lazyImageLoadingDistanceThresholdPxOffline);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPxSlow2G(int lazyImageLoadingDistanceThresholdPxSlow2G) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxSlow2G(lazyImageLoadingDistanceThresholdPxSlow2G);
}

void InternalSettingsGenerated::setLazyImageLoadingDistanceThresholdPxUnknown(int lazyImageLoadingDistanceThresholdPxUnknown) {
  page_->GetSettings().SetLazyImageLoadingDistanceThresholdPxUnknown(lazyImageLoadingDistanceThresholdPxUnknown);
}

void InternalSettingsGenerated::setLazyLoadEnabled(bool lazyLoadEnabled) {
  page_->GetSettings().SetLazyLoadEnabled(lazyLoadEnabled);
}

void InternalSettingsGenerated::setLoadWithOverviewMode(bool loadWithOverviewMode) {
  page_->GetSettings().SetLoadWithOverviewMode(loadWithOverviewMode);
}

void InternalSettingsGenerated::setLoadsImagesAutomatically(bool loadsImagesAutomatically) {
  page_->GetSettings().SetLoadsImagesAutomatically(loadsImagesAutomatically);
}

void InternalSettingsGenerated::setLocalStorageEnabled(bool localStorageEnabled) {
  page_->GetSettings().SetLocalStorageEnabled(localStorageEnabled);
}

void InternalSettingsGenerated::setLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect) {
  page_->GetSettings().SetLogDnsPrefetchAndPreconnect(logDnsPrefetchAndPreconnect);
}

void InternalSettingsGenerated::setLogPreload(bool logPreload) {
  page_->GetSettings().SetLogPreload(logPreload);
}

void InternalSettingsGenerated::setMainFrameClipsContent(bool mainFrameClipsContent) {
  page_->GetSettings().SetMainFrameClipsContent(mainFrameClipsContent);
}

void InternalSettingsGenerated::setMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges) {
  page_->GetSettings().SetMainFrameResizesAreOrientationChanges(mainFrameResizesAreOrientationChanges);
}

void InternalSettingsGenerated::setMaxTouchPoints(int maxTouchPoints) {
  page_->GetSettings().SetMaxTouchPoints(maxTouchPoints);
}

void InternalSettingsGenerated::setMediaControlsEnabled(bool mediaControlsEnabled) {
  page_->GetSettings().SetMediaControlsEnabled(mediaControlsEnabled);
}

void InternalSettingsGenerated::setMediaTypeOverride(const String& mediaTypeOverride) {
  page_->GetSettings().SetMediaTypeOverride(mediaTypeOverride);
}

void InternalSettingsGenerated::setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize) {
  page_->GetSettings().SetMinimumAccelerated2dCanvasSize(minimumAccelerated2dCanvasSize);
}

void InternalSettingsGenerated::setMinimumFontSize(int minimumFontSize) {
  page_->GetSettings().SetMinimumFontSize(minimumFontSize);
}

void InternalSettingsGenerated::setMinimumLogicalFontSize(int minimumLogicalFontSize) {
  page_->GetSettings().SetMinimumLogicalFontSize(minimumLogicalFontSize);
}

void InternalSettingsGenerated::setMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled) {
  page_->GetSettings().SetMockGestureTapHighlightsEnabled(mockGestureTapHighlightsEnabled);
}

void InternalSettingsGenerated::setMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled) {
  page_->GetSettings().SetMultiTargetTapNotificationEnabled(multiTargetTapNotificationEnabled);
}

void InternalSettingsGenerated::setNavigateOnDragDrop(bool navigateOnDragDrop) {
  page_->GetSettings().SetNavigateOnDragDrop(navigateOnDragDrop);
}

void InternalSettingsGenerated::setNavigatorPlatformOverride(const String& navigatorPlatformOverride) {
  page_->GetSettings().SetNavigatorPlatformOverride(navigatorPlatformOverride);
}

void InternalSettingsGenerated::setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled) {
  page_->GetSettings().SetOfflineWebApplicationCacheEnabled(offlineWebApplicationCacheEnabled);
}

void InternalSettingsGenerated::setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds) {
  page_->GetSettings().SetPasswordEchoDurationInSeconds(passwordEchoDurationInSeconds);
}

void InternalSettingsGenerated::setPasswordEchoEnabled(bool passwordEchoEnabled) {
  page_->GetSettings().SetPasswordEchoEnabled(passwordEchoEnabled);
}

void InternalSettingsGenerated::setPictureInPictureEnabled(bool pictureInPictureEnabled) {
  page_->GetSettings().SetPictureInPictureEnabled(pictureInPictureEnabled);
}

void InternalSettingsGenerated::setPluginsEnabled(bool pluginsEnabled) {
  page_->GetSettings().SetPluginsEnabled(pluginsEnabled);
}

void InternalSettingsGenerated::setPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled) {
  page_->GetSettings().SetPreferCompositingToLCDTextEnabled(preferCompositingToLCDTextEnabled);
}

void InternalSettingsGenerated::setPreferHiddenVolumeControls(bool preferHiddenVolumeControls) {
  page_->GetSettings().SetPreferHiddenVolumeControls(preferHiddenVolumeControls);
}

void InternalSettingsGenerated::setPrefersReducedMotion(bool prefersReducedMotion) {
  page_->GetSettings().SetPrefersReducedMotion(prefersReducedMotion);
}

void InternalSettingsGenerated::setPresentationReceiver(bool presentationReceiver) {
  page_->GetSettings().SetPresentationReceiver(presentationReceiver);
}

void InternalSettingsGenerated::setPresentationRequiresUserGesture(bool presentationRequiresUserGesture) {
  page_->GetSettings().SetPresentationRequiresUserGesture(presentationRequiresUserGesture);
}

void InternalSettingsGenerated::setReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk) {
  page_->GetSettings().SetReportScreenSizeInPhysicalPixelsQuirk(reportScreenSizeInPhysicalPixelsQuirk);
}

void InternalSettingsGenerated::setRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread) {
  page_->GetSettings().SetRubberBandingOnCompositorThread(rubberBandingOnCompositorThread);
}

void InternalSettingsGenerated::setScriptEnabled(bool scriptEnabled) {
  page_->GetSettings().SetScriptEnabled(scriptEnabled);
}

void InternalSettingsGenerated::setScrollAnimatorEnabled(bool scrollAnimatorEnabled) {
  page_->GetSettings().SetScrollAnimatorEnabled(scrollAnimatorEnabled);
}

void InternalSettingsGenerated::setSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled) {
  page_->GetSettings().SetSelectTrailingWhitespaceEnabled(selectTrailingWhitespaceEnabled);
}

void InternalSettingsGenerated::setSelectionIncludesAltImageText(bool selectionIncludesAltImageText) {
  page_->GetSettings().SetSelectionIncludesAltImageText(selectionIncludesAltImageText);
}

void InternalSettingsGenerated::setShouldClearDocumentBackground(bool shouldClearDocumentBackground) {
  page_->GetSettings().SetShouldClearDocumentBackground(shouldClearDocumentBackground);
}

void InternalSettingsGenerated::setShouldPrintBackgrounds(bool shouldPrintBackgrounds) {
  page_->GetSettings().SetShouldPrintBackgrounds(shouldPrintBackgrounds);
}

void InternalSettingsGenerated::setShouldProtectAgainstIpcFlooding(bool shouldProtectAgainstIpcFlooding) {
  page_->GetSettings().SetShouldProtectAgainstIpcFlooding(shouldProtectAgainstIpcFlooding);
}

void InternalSettingsGenerated::setShouldRespectImageOrientation(bool shouldRespectImageOrientation) {
  page_->GetSettings().SetShouldRespectImageOrientation(shouldRespectImageOrientation);
}

void InternalSettingsGenerated::setShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame) {
  page_->GetSettings().SetShouldReuseGlobalForUnownedMainFrame(shouldReuseGlobalForUnownedMainFrame);
}

void InternalSettingsGenerated::setShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp) {
  page_->GetSettings().SetShowContextMenuOnMouseUp(showContextMenuOnMouseUp);
}

void InternalSettingsGenerated::setShrinksViewportContentToFit(bool shrinksViewportContentToFit) {
  page_->GetSettings().SetShrinksViewportContentToFit(shrinksViewportContentToFit);
}

void InternalSettingsGenerated::setSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled) {
  page_->GetSettings().SetSmartInsertDeleteEnabled(smartInsertDeleteEnabled);
}

void InternalSettingsGenerated::setSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled) {
  page_->GetSettings().SetSmoothScrollForFindEnabled(smoothScrollForFindEnabled);
}

void InternalSettingsGenerated::setSpatialNavigationEnabled(bool spatialNavigationEnabled) {
  page_->GetSettings().SetSpatialNavigationEnabled(spatialNavigationEnabled);
}

void InternalSettingsGenerated::setSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault) {
  page_->GetSettings().SetSpellCheckEnabledByDefault(spellCheckEnabledByDefault);
}

void InternalSettingsGenerated::setStrictMixedContentChecking(bool strictMixedContentChecking) {
  page_->GetSettings().SetStrictMixedContentChecking(strictMixedContentChecking);
}

void InternalSettingsGenerated::setStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin) {
  page_->GetSettings().SetStrictMixedContentCheckingForPlugin(strictMixedContentCheckingForPlugin);
}

void InternalSettingsGenerated::setStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions) {
  page_->GetSettings().SetStrictPowerfulFeatureRestrictions(strictPowerfulFeatureRestrictions);
}

void InternalSettingsGenerated::setStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent) {
  page_->GetSettings().SetStrictlyBlockBlockableMixedContent(strictlyBlockBlockableMixedContent);
}

void InternalSettingsGenerated::setSupportsMultipleWindows(bool supportsMultipleWindows) {
  page_->GetSettings().SetSupportsMultipleWindows(supportsMultipleWindows);
}

void InternalSettingsGenerated::setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled) {
  page_->GetSettings().SetSyncXHRInDocumentsEnabled(syncXHRInDocumentsEnabled);
}

void InternalSettingsGenerated::setTextAreasAreResizable(bool textAreasAreResizable) {
  page_->GetSettings().SetTextAreasAreResizable(textAreasAreResizable);
}

void InternalSettingsGenerated::setTextTrackBackgroundColor(const String& textTrackBackgroundColor) {
  page_->GetSettings().SetTextTrackBackgroundColor(textTrackBackgroundColor);
}

void InternalSettingsGenerated::setTextTrackFontFamily(const String& textTrackFontFamily) {
  page_->GetSettings().SetTextTrackFontFamily(textTrackFontFamily);
}

void InternalSettingsGenerated::setTextTrackFontStyle(const String& textTrackFontStyle) {
  page_->GetSettings().SetTextTrackFontStyle(textTrackFontStyle);
}

void InternalSettingsGenerated::setTextTrackFontVariant(const String& textTrackFontVariant) {
  page_->GetSettings().SetTextTrackFontVariant(textTrackFontVariant);
}

void InternalSettingsGenerated::setTextTrackMarginPercentage(double textTrackMarginPercentage) {
  page_->GetSettings().SetTextTrackMarginPercentage(textTrackMarginPercentage);
}

void InternalSettingsGenerated::setTextTrackTextColor(const String& textTrackTextColor) {
  page_->GetSettings().SetTextTrackTextColor(textTrackTextColor);
}

void InternalSettingsGenerated::setTextTrackTextShadow(const String& textTrackTextShadow) {
  page_->GetSettings().SetTextTrackTextShadow(textTrackTextShadow);
}

void InternalSettingsGenerated::setTextTrackTextSize(const String& textTrackTextSize) {
  page_->GetSettings().SetTextTrackTextSize(textTrackTextSize);
}

void InternalSettingsGenerated::setThreadedScrollingEnabled(bool threadedScrollingEnabled) {
  page_->GetSettings().SetThreadedScrollingEnabled(threadedScrollingEnabled);
}

void InternalSettingsGenerated::setTouchAdjustmentEnabled(bool touchAdjustmentEnabled) {
  page_->GetSettings().SetTouchAdjustmentEnabled(touchAdjustmentEnabled);
}

void InternalSettingsGenerated::setTouchDragDropEnabled(bool touchDragDropEnabled) {
  page_->GetSettings().SetTouchDragDropEnabled(touchDragDropEnabled);
}

void InternalSettingsGenerated::setTouchEditingEnabled(bool touchEditingEnabled) {
  page_->GetSettings().SetTouchEditingEnabled(touchEditingEnabled);
}

void InternalSettingsGenerated::setUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior) {
  page_->GetSettings().SetUseLegacyBackgroundSizeShorthandBehavior(useLegacyBackgroundSizeShorthandBehavior);
}

void InternalSettingsGenerated::setUseSolidColorScrollbars(bool useSolidColorScrollbars) {
  page_->GetSettings().SetUseSolidColorScrollbars(useSolidColorScrollbars);
}

void InternalSettingsGenerated::setUseWideViewport(bool useWideViewport) {
  page_->GetSettings().SetUseWideViewport(useWideViewport);
}

void InternalSettingsGenerated::setValidationMessageTimerMagnification(int validationMessageTimerMagnification) {
  page_->GetSettings().SetValidationMessageTimerMagnification(validationMessageTimerMagnification);
}

void InternalSettingsGenerated::setViewportEnabled(bool viewportEnabled) {
  page_->GetSettings().SetViewportEnabled(viewportEnabled);
}

void InternalSettingsGenerated::setViewportMetaEnabled(bool viewportMetaEnabled) {
  page_->GetSettings().SetViewportMetaEnabled(viewportMetaEnabled);
}

void InternalSettingsGenerated::setViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk) {
  page_->GetSettings().SetViewportMetaMergeContentQuirk(viewportMetaMergeContentQuirk);
}

void InternalSettingsGenerated::setViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk) {
  page_->GetSettings().SetViewportMetaZeroValuesQuirk(viewportMetaZeroValuesQuirk);
}

void InternalSettingsGenerated::setWebAppScope(const String& webAppScope) {
  page_->GetSettings().SetWebAppScope(webAppScope);
}

void InternalSettingsGenerated::setWebGL1Enabled(bool webGL1Enabled) {
  page_->GetSettings().SetWebGL1Enabled(webGL1Enabled);
}

void InternalSettingsGenerated::setWebGL2Enabled(bool webGL2Enabled) {
  page_->GetSettings().SetWebGL2Enabled(webGL2Enabled);
}

void InternalSettingsGenerated::setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled) {
  page_->GetSettings().SetWebGLErrorsToConsoleEnabled(webGLErrorsToConsoleEnabled);
}

void InternalSettingsGenerated::setWebSecurityEnabled(bool webSecurityEnabled) {
  page_->GetSettings().SetWebSecurityEnabled(webSecurityEnabled);
}

void InternalSettingsGenerated::setWideViewportQuirkEnabled(bool wideViewportQuirkEnabled) {
  page_->GetSettings().SetWideViewportQuirkEnabled(wideViewportQuirkEnabled);
}

void InternalSettingsGenerated::setXSSAuditorEnabled(bool xssAuditorEnabled) {
  page_->GetSettings().SetXSSAuditorEnabled(xssAuditorEnabled);
}

void InternalSettingsGenerated::Trace(Visitor* visitor) {
  visitor->Trace(page_);
  ScriptWrappable::Trace(visitor);
}

} // namespace blink
