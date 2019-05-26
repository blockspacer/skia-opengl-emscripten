// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/web_origin_trials.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "third_party/blink/public/web/web_origin_trials.h"

#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/public/platform/web_string.h"
#include "third_party/blink/public/web/web_document.h"

namespace blink {

bool WebOriginTrials::isTrialEnabled(const WebDocument* web_document, const WebString& trial) {
  if (!web_document) return false;
  if (!origin_trials::IsTrialValid(trial))
    return false;
  const Vector<OriginTrialFeature>& features = origin_trials::FeaturesForTrial(trial);
  for (OriginTrialFeature feature : features) {
    switch (feature) {
      case OriginTrialFeature::kAnimationWorklet:
        if (!RuntimeEnabledFeatures::AnimationWorkletEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kAutoPictureInPicture:
        if (!RuntimeEnabledFeatures::AutoPictureInPictureEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kBadging:
        if (!RuntimeEnabledFeatures::BadgingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kBuiltInModuleInfra:
        if (!RuntimeEnabledFeatures::BuiltInModuleInfraEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kBuiltInModuleKvStorage:
        if (!RuntimeEnabledFeatures::BuiltInModuleKvStorageEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kContactsManager:
        if (!RuntimeEnabledFeatures::ContactsManagerEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kCookieStore:
        if (!RuntimeEnabledFeatures::CookieStoreEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kCustomElementsV0:
        if (!RuntimeEnabledFeatures::CustomElementsV0Enabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kDisableHardwareNoiseSuppression:
        if (!RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kElementTiming:
        if (!RuntimeEnabledFeatures::ElementTimingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kEventTiming:
        if (!RuntimeEnabledFeatures::EventTimingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kExperimentalIsInputPending:
        if (!RuntimeEnabledFeatures::ExperimentalIsInputPendingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kFeaturePolicyReporting:
        if (!RuntimeEnabledFeatures::FeaturePolicyReportingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kHrefTranslate:
        if (!RuntimeEnabledFeatures::HrefTranslateEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kHTMLImports:
        if (!RuntimeEnabledFeatures::HTMLImportsEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kInstalledApp:
        if (!RuntimeEnabledFeatures::InstalledAppEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kJankTracking:
        if (!RuntimeEnabledFeatures::JankTrackingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kLayoutJankAPI:
        if (!RuntimeEnabledFeatures::LayoutJankAPIEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kLegacyPerformanceMemoryCounters:
        if (!RuntimeEnabledFeatures::LegacyPerformanceMemoryCountersEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kMediaCapabilitiesEncryptedMedia:
        if (!RuntimeEnabledFeatures::MediaCapabilitiesEncryptedMediaEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kMuteButton:
        if (!RuntimeEnabledFeatures::MuteButtonEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kOriginTrialsSampleAPI:
        if (!RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kOriginTrialsSampleAPIImplied:
        if (!RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kOriginTrialsSampleAPIInvalidOS:
        if (!RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kOriginTrialsSampleAPINavigation:
        if (!RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kPageLifecycleTransitionsOptIn:
        if (!RuntimeEnabledFeatures::PageLifecycleTransitionsOptInEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kPageLifecycleTransitionsOptOut:
        if (!RuntimeEnabledFeatures::PageLifecycleTransitionsOptOutEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kPerMethodCanMakePaymentQuota:
        if (!RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kPriorityHints:
        if (!RuntimeEnabledFeatures::PriorityHintsEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRtcAudioJitterBufferMaxPackets:
        if (!RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRtcAudioJitterBufferRtxHandling:
        if (!RuntimeEnabledFeatures::RtcAudioJitterBufferRtxHandlingEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRTCIceTransportExtension:
        if (!RuntimeEnabledFeatures::RTCIceTransportExtensionEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRtcJitterBufferDelayHint:
        if (!RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRTCQuicTransport:
        if (!RuntimeEnabledFeatures::RTCQuicTransportEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kRTCStatsRelativePacketArrivalDelay:
        if (!RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kShadowDOMV0:
        if (!RuntimeEnabledFeatures::ShadowDOMV0Enabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kSignatureBasedIntegrity:
        if (!RuntimeEnabledFeatures::SignatureBasedIntegrityEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kSkipAd:
        if (!RuntimeEnabledFeatures::SkipAdEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kStaleWhileRevalidate:
        if (!RuntimeEnabledFeatures::StaleWhileRevalidateEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kTouchEventFeatureDetection:
        if (!RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kTrustedDOMTypes:
        if (!RuntimeEnabledFeatures::TrustedDOMTypesEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kUnoptimizedImagePolicies:
        if (!RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kWebAssemblyThreads:
        if (!RuntimeEnabledFeatures::WebAssemblyThreadsEnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kWebVR:
        if (!RuntimeEnabledFeatures::WebVREnabled(*web_document))
          return false;
        break;
      case OriginTrialFeature::kWebXR:
        if (!RuntimeEnabledFeatures::WebXREnabled(*web_document))
          return false;
        break;
      default:
        break;
    }
  }
  return true;
}


} // namespace blink
