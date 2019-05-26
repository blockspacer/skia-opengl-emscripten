// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_settings_generated.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_SETTINGS_GENERATED_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_SETTINGS_GENERATED_H_

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Page;

class InternalSettingsGenerated : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();

 public:
  explicit InternalSettingsGenerated(Page*);
  virtual ~InternalSettingsGenerated();
  void resetToConsistentState();
  void setDOMPasteAllowed(bool DOMPasteAllowed);
  void setDontSendKeyEventsToJavascript(bool DontSendKeyEventsToJavascript);
  void setHighlightAds(bool HighlightAds);
  void setNetworkQuietTimeout(double NetworkQuietTimeout);
  void setAccelerated2dCanvasMSAASampleCount(int accelerated2dCanvasMSAASampleCount);
  void setAcceleratedCompositingEnabled(bool acceleratedCompositingEnabled);
  void setAccessibilityFontScaleFactor(double accessibilityFontScaleFactor);
  void setAccessibilityPasswordValuesEnabled(bool accessibilityPasswordValuesEnabled);
  void setAllowCustomScrollbarInMainFrame(bool allowCustomScrollbarInMainFrame);
  void setAllowFileAccessFromFileURLs(bool allowFileAccessFromFileURLs);
  void setAllowGeolocationOnInsecureOrigins(bool allowGeolocationOnInsecureOrigins);
  void setAllowRunningOfInsecureContent(bool allowRunningOfInsecureContent);
  void setAllowScriptsToCloseWindows(bool allowScriptsToCloseWindows);
  void setAllowUniversalAccessFromFileURLs(bool allowUniversalAccessFromFileURLs);
  void setAlwaysShowContextMenuOnTouch(bool alwaysShowContextMenuOnTouch);
  void setAntialiased2dCanvasEnabled(bool antialiased2dCanvasEnabled);
  void setAntialiasedClips2dCanvasEnabled(bool antialiasedClips2dCanvasEnabled);
  void setAvailableHoverTypes(int availableHoverTypes);
  void setAvailablePointerTypes(int availablePointerTypes);
  void setBarrelButtonForDragEnabled(bool barrelButtonForDragEnabled);
  void setCookieEnabled(bool cookieEnabled);
  void setDarkModeContrast(double darkModeContrast);
  void setDarkModeGrayscale(bool darkModeGrayscale);
  void setDataSaverHoldbackWebApi(bool dataSaverHoldbackWebApi);
  void setDefaultFixedFontSize(int defaultFixedFontSize);
  void setDefaultFontSize(int defaultFontSize);
  void setDefaultTextEncodingName(const String& defaultTextEncodingName);
  void setDefaultVideoPosterURL(const String& defaultVideoPosterURL);
  void setDeviceScaleAdjustment(double deviceScaleAdjustment);
  void setDisableReadingFromCanvas(bool disableReadingFromCanvas);
  void setDisallowFetchForDocWrittenScriptsInMainFrame(bool disallowFetchForDocWrittenScriptsInMainFrame);
  void setDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G);
  void setDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections);
  void setDNSPrefetchingEnabled(bool dnsPrefetchingEnabled);
  void setDoHtmlPreloadScanning(bool doHtmlPreloadScanning);
  void setDoNotUpdateSelectionOnMutatingSelectionRange(bool doNotUpdateSelectionOnMutatingSelectionRange);
  void setDownloadableBinaryFontsEnabled(bool downloadableBinaryFontsEnabled);
  void setEmbeddedMediaExperienceEnabled(bool embeddedMediaExperienceEnabled);
  void setForceAndroidOverlayScrollbar(bool forceAndroidOverlayScrollbar);
  void setForceMainWorldInitialization(bool forceMainWorldInitialization);
  void setForceTouchEventFeatureDetectionForInspector(bool forceTouchEventFeatureDetectionForInspector);
  void setForceZeroLayoutHeight(bool forceZeroLayoutHeight);
  void setFullscreenSupported(bool fullscreenSupported);
  void setHideDownloadUI(bool hideDownloadUI);
  void setHideScrollbars(bool hideScrollbars);
  void setHyperlinkAuditingEnabled(bool hyperlinkAuditingEnabled);
  void setIgnoreMainFrameOverflowHiddenQuirk(bool ignoreMainFrameOverflowHiddenQuirk);
  void setImagesEnabled(bool imagesEnabled);
  void setImmersiveModeEnabled(bool immersiveModeEnabled);
  void setInlineTextBoxAccessibilityEnabled(bool inlineTextBoxAccessibilityEnabled);
  void setJavaScriptCanAccessClipboard(bool javaScriptCanAccessClipboard);
  void setLazyFrameLoadingDistanceThresholdPx2G(int lazyFrameLoadingDistanceThresholdPx2G);
  void setLazyFrameLoadingDistanceThresholdPx3G(int lazyFrameLoadingDistanceThresholdPx3G);
  void setLazyFrameLoadingDistanceThresholdPx4G(int lazyFrameLoadingDistanceThresholdPx4G);
  void setLazyFrameLoadingDistanceThresholdPxOffline(int lazyFrameLoadingDistanceThresholdPxOffline);
  void setLazyFrameLoadingDistanceThresholdPxSlow2G(int lazyFrameLoadingDistanceThresholdPxSlow2G);
  void setLazyFrameLoadingDistanceThresholdPxUnknown(int lazyFrameLoadingDistanceThresholdPxUnknown);
  void setLazyImageLoadingDistanceThresholdPx2G(int lazyImageLoadingDistanceThresholdPx2G);
  void setLazyImageLoadingDistanceThresholdPx3G(int lazyImageLoadingDistanceThresholdPx3G);
  void setLazyImageLoadingDistanceThresholdPx4G(int lazyImageLoadingDistanceThresholdPx4G);
  void setLazyImageLoadingDistanceThresholdPxOffline(int lazyImageLoadingDistanceThresholdPxOffline);
  void setLazyImageLoadingDistanceThresholdPxSlow2G(int lazyImageLoadingDistanceThresholdPxSlow2G);
  void setLazyImageLoadingDistanceThresholdPxUnknown(int lazyImageLoadingDistanceThresholdPxUnknown);
  void setLazyLoadEnabled(bool lazyLoadEnabled);
  void setLoadWithOverviewMode(bool loadWithOverviewMode);
  void setLoadsImagesAutomatically(bool loadsImagesAutomatically);
  void setLocalStorageEnabled(bool localStorageEnabled);
  void setLogDnsPrefetchAndPreconnect(bool logDnsPrefetchAndPreconnect);
  void setLogPreload(bool logPreload);
  void setMainFrameClipsContent(bool mainFrameClipsContent);
  void setMainFrameResizesAreOrientationChanges(bool mainFrameResizesAreOrientationChanges);
  void setMaxTouchPoints(int maxTouchPoints);
  void setMediaControlsEnabled(bool mediaControlsEnabled);
  void setMediaTypeOverride(const String& mediaTypeOverride);
  void setMinimumAccelerated2dCanvasSize(int minimumAccelerated2dCanvasSize);
  void setMinimumFontSize(int minimumFontSize);
  void setMinimumLogicalFontSize(int minimumLogicalFontSize);
  void setMockGestureTapHighlightsEnabled(bool mockGestureTapHighlightsEnabled);
  void setMultiTargetTapNotificationEnabled(bool multiTargetTapNotificationEnabled);
  void setNavigateOnDragDrop(bool navigateOnDragDrop);
  void setNavigatorPlatformOverride(const String& navigatorPlatformOverride);
  void setOfflineWebApplicationCacheEnabled(bool offlineWebApplicationCacheEnabled);
  void setPasswordEchoDurationInSeconds(double passwordEchoDurationInSeconds);
  void setPasswordEchoEnabled(bool passwordEchoEnabled);
  void setPictureInPictureEnabled(bool pictureInPictureEnabled);
  void setPluginsEnabled(bool pluginsEnabled);
  void setPreferCompositingToLCDTextEnabled(bool preferCompositingToLCDTextEnabled);
  void setPreferHiddenVolumeControls(bool preferHiddenVolumeControls);
  void setPrefersReducedMotion(bool prefersReducedMotion);
  void setPresentationReceiver(bool presentationReceiver);
  void setPresentationRequiresUserGesture(bool presentationRequiresUserGesture);
  void setReportScreenSizeInPhysicalPixelsQuirk(bool reportScreenSizeInPhysicalPixelsQuirk);
  void setRubberBandingOnCompositorThread(bool rubberBandingOnCompositorThread);
  void setScriptEnabled(bool scriptEnabled);
  void setScrollAnimatorEnabled(bool scrollAnimatorEnabled);
  void setSelectTrailingWhitespaceEnabled(bool selectTrailingWhitespaceEnabled);
  void setSelectionIncludesAltImageText(bool selectionIncludesAltImageText);
  void setShouldClearDocumentBackground(bool shouldClearDocumentBackground);
  void setShouldPrintBackgrounds(bool shouldPrintBackgrounds);
  void setShouldProtectAgainstIpcFlooding(bool shouldProtectAgainstIpcFlooding);
  void setShouldRespectImageOrientation(bool shouldRespectImageOrientation);
  void setShouldReuseGlobalForUnownedMainFrame(bool shouldReuseGlobalForUnownedMainFrame);
  void setShowContextMenuOnMouseUp(bool showContextMenuOnMouseUp);
  void setShrinksViewportContentToFit(bool shrinksViewportContentToFit);
  void setSmartInsertDeleteEnabled(bool smartInsertDeleteEnabled);
  void setSmoothScrollForFindEnabled(bool smoothScrollForFindEnabled);
  void setSpatialNavigationEnabled(bool spatialNavigationEnabled);
  void setSpellCheckEnabledByDefault(bool spellCheckEnabledByDefault);
  void setStrictMixedContentChecking(bool strictMixedContentChecking);
  void setStrictMixedContentCheckingForPlugin(bool strictMixedContentCheckingForPlugin);
  void setStrictPowerfulFeatureRestrictions(bool strictPowerfulFeatureRestrictions);
  void setStrictlyBlockBlockableMixedContent(bool strictlyBlockBlockableMixedContent);
  void setSupportsMultipleWindows(bool supportsMultipleWindows);
  void setSyncXHRInDocumentsEnabled(bool syncXHRInDocumentsEnabled);
  void setTextAreasAreResizable(bool textAreasAreResizable);
  void setTextTrackBackgroundColor(const String& textTrackBackgroundColor);
  void setTextTrackFontFamily(const String& textTrackFontFamily);
  void setTextTrackFontStyle(const String& textTrackFontStyle);
  void setTextTrackFontVariant(const String& textTrackFontVariant);
  void setTextTrackMarginPercentage(double textTrackMarginPercentage);
  void setTextTrackTextColor(const String& textTrackTextColor);
  void setTextTrackTextShadow(const String& textTrackTextShadow);
  void setTextTrackTextSize(const String& textTrackTextSize);
  void setThreadedScrollingEnabled(bool threadedScrollingEnabled);
  void setTouchAdjustmentEnabled(bool touchAdjustmentEnabled);
  void setTouchDragDropEnabled(bool touchDragDropEnabled);
  void setTouchEditingEnabled(bool touchEditingEnabled);
  void setUseLegacyBackgroundSizeShorthandBehavior(bool useLegacyBackgroundSizeShorthandBehavior);
  void setUseSolidColorScrollbars(bool useSolidColorScrollbars);
  void setUseWideViewport(bool useWideViewport);
  void setValidationMessageTimerMagnification(int validationMessageTimerMagnification);
  void setViewportEnabled(bool viewportEnabled);
  void setViewportMetaEnabled(bool viewportMetaEnabled);
  void setViewportMetaMergeContentQuirk(bool viewportMetaMergeContentQuirk);
  void setViewportMetaZeroValuesQuirk(bool viewportMetaZeroValuesQuirk);
  void setWebAppScope(const String& webAppScope);
  void setWebGL1Enabled(bool webGL1Enabled);
  void setWebGL2Enabled(bool webGL2Enabled);
  void setWebGLErrorsToConsoleEnabled(bool webGLErrorsToConsoleEnabled);
  void setWebSecurityEnabled(bool webSecurityEnabled);
  void setWideViewportQuirkEnabled(bool wideViewportQuirkEnabled);
  void setXSSAuditorEnabled(bool xssAuditorEnabled);

  void Trace(Visitor*) override;

 private:
  Member<Page> page_;

  bool DOMPasteAllowed_;
  bool DontSendKeyEventsToJavascript_;
  bool HighlightAds_;
  double NetworkQuietTimeout_;
  int accelerated2dCanvasMSAASampleCount_;
  bool acceleratedCompositingEnabled_;
  double accessibilityFontScaleFactor_;
  bool accessibilityPasswordValuesEnabled_;
  bool allowCustomScrollbarInMainFrame_;
  bool allowFileAccessFromFileURLs_;
  bool allowGeolocationOnInsecureOrigins_;
  bool allowRunningOfInsecureContent_;
  bool allowScriptsToCloseWindows_;
  bool allowUniversalAccessFromFileURLs_;
  bool alwaysShowContextMenuOnTouch_;
  bool antialiased2dCanvasEnabled_;
  bool antialiasedClips2dCanvasEnabled_;
  int availableHoverTypes_;
  int availablePointerTypes_;
  bool barrelButtonForDragEnabled_;
  bool cookieEnabled_;
  double darkModeContrast_;
  bool darkModeGrayscale_;
  bool dataSaverHoldbackWebApi_;
  int defaultFixedFontSize_;
  int defaultFontSize_;
  String defaultTextEncodingName_;
  String defaultVideoPosterURL_;
  double deviceScaleAdjustment_;
  bool disableReadingFromCanvas_;
  bool disallowFetchForDocWrittenScriptsInMainFrame_;
  bool disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G_;
  bool disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections_;
  bool dnsPrefetchingEnabled_;
  bool doHtmlPreloadScanning_;
  bool doNotUpdateSelectionOnMutatingSelectionRange_;
  bool downloadableBinaryFontsEnabled_;
  bool embeddedMediaExperienceEnabled_;
  bool forceAndroidOverlayScrollbar_;
  bool forceMainWorldInitialization_;
  bool forceTouchEventFeatureDetectionForInspector_;
  bool forceZeroLayoutHeight_;
  bool fullscreenSupported_;
  bool hideDownloadUI_;
  bool hideScrollbars_;
  bool hyperlinkAuditingEnabled_;
  bool ignoreMainFrameOverflowHiddenQuirk_;
  bool imagesEnabled_;
  bool immersiveModeEnabled_;
  bool inlineTextBoxAccessibilityEnabled_;
  bool javaScriptCanAccessClipboard_;
  int lazyFrameLoadingDistanceThresholdPx2G_;
  int lazyFrameLoadingDistanceThresholdPx3G_;
  int lazyFrameLoadingDistanceThresholdPx4G_;
  int lazyFrameLoadingDistanceThresholdPxOffline_;
  int lazyFrameLoadingDistanceThresholdPxSlow2G_;
  int lazyFrameLoadingDistanceThresholdPxUnknown_;
  int lazyImageLoadingDistanceThresholdPx2G_;
  int lazyImageLoadingDistanceThresholdPx3G_;
  int lazyImageLoadingDistanceThresholdPx4G_;
  int lazyImageLoadingDistanceThresholdPxOffline_;
  int lazyImageLoadingDistanceThresholdPxSlow2G_;
  int lazyImageLoadingDistanceThresholdPxUnknown_;
  bool lazyLoadEnabled_;
  bool loadWithOverviewMode_;
  bool loadsImagesAutomatically_;
  bool localStorageEnabled_;
  bool logDnsPrefetchAndPreconnect_;
  bool logPreload_;
  bool mainFrameClipsContent_;
  bool mainFrameResizesAreOrientationChanges_;
  int maxTouchPoints_;
  bool mediaControlsEnabled_;
  String mediaTypeOverride_;
  int minimumAccelerated2dCanvasSize_;
  int minimumFontSize_;
  int minimumLogicalFontSize_;
  bool mockGestureTapHighlightsEnabled_;
  bool multiTargetTapNotificationEnabled_;
  bool navigateOnDragDrop_;
  String navigatorPlatformOverride_;
  bool offlineWebApplicationCacheEnabled_;
  double passwordEchoDurationInSeconds_;
  bool passwordEchoEnabled_;
  bool pictureInPictureEnabled_;
  bool pluginsEnabled_;
  bool preferCompositingToLCDTextEnabled_;
  bool preferHiddenVolumeControls_;
  bool prefersReducedMotion_;
  bool presentationReceiver_;
  bool presentationRequiresUserGesture_;
  bool reportScreenSizeInPhysicalPixelsQuirk_;
  bool rubberBandingOnCompositorThread_;
  bool scriptEnabled_;
  bool scrollAnimatorEnabled_;
  bool selectTrailingWhitespaceEnabled_;
  bool selectionIncludesAltImageText_;
  bool shouldClearDocumentBackground_;
  bool shouldPrintBackgrounds_;
  bool shouldProtectAgainstIpcFlooding_;
  bool shouldRespectImageOrientation_;
  bool shouldReuseGlobalForUnownedMainFrame_;
  bool showContextMenuOnMouseUp_;
  bool shrinksViewportContentToFit_;
  bool smartInsertDeleteEnabled_;
  bool smoothScrollForFindEnabled_;
  bool spatialNavigationEnabled_;
  bool spellCheckEnabledByDefault_;
  bool strictMixedContentChecking_;
  bool strictMixedContentCheckingForPlugin_;
  bool strictPowerfulFeatureRestrictions_;
  bool strictlyBlockBlockableMixedContent_;
  bool supportsMultipleWindows_;
  bool syncXHRInDocumentsEnabled_;
  bool textAreasAreResizable_;
  String textTrackBackgroundColor_;
  String textTrackFontFamily_;
  String textTrackFontStyle_;
  String textTrackFontVariant_;
  double textTrackMarginPercentage_;
  String textTrackTextColor_;
  String textTrackTextShadow_;
  String textTrackTextSize_;
  bool threadedScrollingEnabled_;
  bool touchAdjustmentEnabled_;
  bool touchDragDropEnabled_;
  bool touchEditingEnabled_;
  bool useLegacyBackgroundSizeShorthandBehavior_;
  bool useSolidColorScrollbars_;
  bool useWideViewport_;
  int validationMessageTimerMagnification_;
  bool viewportEnabled_;
  bool viewportMetaEnabled_;
  bool viewportMetaMergeContentQuirk_;
  bool viewportMetaZeroValuesQuirk_;
  String webAppScope_;
  bool webGL1Enabled_;
  bool webGL2Enabled_;
  bool webGLErrorsToConsoleEnabled_;
  bool webSecurityEnabled_;
  bool wideViewportQuirkEnabled_;
  bool xssAuditorEnabled_;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_SETTINGS_GENERATED_H_
