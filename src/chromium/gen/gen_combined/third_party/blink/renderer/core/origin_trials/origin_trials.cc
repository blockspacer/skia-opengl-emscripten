// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/origin_trials.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"

#include "third_party/blink/renderer/core/origin_trials/origin_trial_context.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"

namespace blink {

using TrialToFeaturesMap = HashMap<String, Vector<OriginTrialFeature>>;

namespace {

const TrialToFeaturesMap& GetTrialToFeaturesMap() {
  // The object needs to be thread-safe because service workers can call this
  // function as well.
  DEFINE_THREAD_SAFE_STATIC_LOCAL(TrialToFeaturesMap, trial_to_features_map, ());
  if (trial_to_features_map.IsEmpty()) {
    trial_to_features_map.Set("PageLifecycleTransitionsOptOut",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kPageLifecycleTransitionsOptOut,  }));
    trial_to_features_map.Set("StaleWhileRevalidate",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kStaleWhileRevalidate,  }));
    trial_to_features_map.Set("FeaturePolicyReporting",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kFeaturePolicyReporting,  }));
    trial_to_features_map.Set("MuteButton",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kMuteButton,  }));
    trial_to_features_map.Set("InstalledApp",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kInstalledApp,  }));
    trial_to_features_map.Set("PageLifecycleTransitionsOptIn",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kPageLifecycleTransitionsOptIn,  }));
    trial_to_features_map.Set("BuiltInModuleKvStorage",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kBuiltInModuleKvStorage,  }));
    trial_to_features_map.Set("PerMethodCanMakePaymentQuota",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kPerMethodCanMakePaymentQuota,  }));
    trial_to_features_map.Set("WebComponentsV0",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kCustomElementsV0,OriginTrialFeature::kHTMLImports,OriginTrialFeature::kShadowDOMV0,  }));
    trial_to_features_map.Set("DisableHardwareNoiseSuppression",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kDisableHardwareNoiseSuppression,  }));
    trial_to_features_map.Set("Frobulate",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kOriginTrialsSampleAPI,  }));
    trial_to_features_map.Set("HrefTranslate",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kHrefTranslate,  }));
    trial_to_features_map.Set("PriorityHints",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kPriorityHints,  }));
    trial_to_features_map.Set("TrustedDOMTypes",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kTrustedDOMTypes,  }));
    trial_to_features_map.Set("RtcJitterBufferDelayHint",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kRtcJitterBufferDelayHint,  }));
    trial_to_features_map.Set("LegacyPerformanceMemoryCounters",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kLegacyPerformanceMemoryCounters,  }));
    trial_to_features_map.Set("RtcAudioJitterBufferMaxPackets",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kRtcAudioJitterBufferMaxPackets,  }));
    trial_to_features_map.Set("SkipAd",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kSkipAd,  }));
    trial_to_features_map.Set("ContactsManager",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kContactsManager,  }));
    trial_to_features_map.Set("AutoPictureInPicture",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kAutoPictureInPicture,  }));
    trial_to_features_map.Set("SignatureBasedIntegrity",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kSignatureBasedIntegrity,  }));
    trial_to_features_map.Set("FrobulateImplied",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kOriginTrialsSampleAPIImplied,  }));
    trial_to_features_map.Set("RTCQuicTransport",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kRTCIceTransportExtension,OriginTrialFeature::kRTCQuicTransport,  }));
    trial_to_features_map.Set("ForceTouchEventFeatureDetectionForInspector",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kTouchEventFeatureDetection,  }));
    trial_to_features_map.Set("MediaCapabilitiesEncryptedMedia",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kMediaCapabilitiesEncryptedMedia,  }));
    trial_to_features_map.Set("WebXRDeviceM73",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kWebXR,  }));
    trial_to_features_map.Set("CookieStore",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kCookieStore,  }));
    trial_to_features_map.Set("FrobulateInvalidOS",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kOriginTrialsSampleAPIInvalidOS,  }));
    trial_to_features_map.Set("WebVR1.1M62",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kWebVR,  }));
    trial_to_features_map.Set("WebAssemblyThreads",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kWebAssemblyThreads,  }));
    trial_to_features_map.Set("EventTiming",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kEventTiming,  }));
    trial_to_features_map.Set("ExperimentalIsInputPending",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kExperimentalIsInputPending,  }));
    trial_to_features_map.Set("RtcAudioJitterBufferRtxHandling",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kRtcAudioJitterBufferRtxHandling,  }));
    trial_to_features_map.Set("ElementTimingImages",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kElementTiming,  }));
    trial_to_features_map.Set("AnimationWorklet",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kAnimationWorklet,  }));
    trial_to_features_map.Set("RTCStatsRelativePacketArrivalDelay",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kRTCStatsRelativePacketArrivalDelay,  }));
    trial_to_features_map.Set("FrobulateNavigation",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kOriginTrialsSampleAPINavigation,  }));
    trial_to_features_map.Set("Badging",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kBadging,  }));
    trial_to_features_map.Set("BuiltInModuleInfra",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kBuiltInModuleInfra,  }));
    trial_to_features_map.Set("UnoptimizedImagePolicies",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kUnoptimizedImagePolicies,  }));
    trial_to_features_map.Set("LayoutJankAPI",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kJankTracking,OriginTrialFeature::kLayoutJankAPI,  }));
    // For testing
    trial_to_features_map.Set("This trial does not exist",
                              Vector<OriginTrialFeature>({OriginTrialFeature::kNonExisting}));
  }
  return trial_to_features_map;
}

} // namespace

bool origin_trials::IsTrialValid(const String& trial_name) {
  return GetTrialToFeaturesMap().Contains(trial_name);
}


const Vector<OriginTrialFeature>& origin_trials::FeaturesForTrial(const String& trial_name) {
  DCHECK(IsTrialValid(trial_name));
  return GetTrialToFeaturesMap().find(trial_name)->value;
}


Vector<OriginTrialFeature> origin_trials::GetImpliedFeatures(OriginTrialFeature feature) {
  if (feature == OriginTrialFeature::kOriginTrialsSampleAPI) {
    Vector<OriginTrialFeature> implied_features = {OriginTrialFeature::kOriginTrialsSampleAPIImplied,};
    return implied_features;
  }
  if (feature == OriginTrialFeature::kBuiltInModuleKvStorage) {
    Vector<OriginTrialFeature> implied_features = {OriginTrialFeature::kBuiltInModuleInfra,};
    return implied_features;
  }
  if (feature == OriginTrialFeature::kLayoutJankAPI) {
    Vector<OriginTrialFeature> implied_features = {OriginTrialFeature::kJankTracking,};
    return implied_features;
  }
  if (feature == OriginTrialFeature::kOriginTrialsSampleAPIInvalidOS) {
    Vector<OriginTrialFeature> implied_features = {OriginTrialFeature::kOriginTrialsSampleAPIImplied,};
    return implied_features;
  }
  return Vector<OriginTrialFeature>();
}


bool origin_trials::FeatureEnabledForOS(OriginTrialFeature feature) {
  switch (feature) {
    case OriginTrialFeature::kAnimationWorklet:
      return true;
    case OriginTrialFeature::kAutoPictureInPicture:
      return true;
    case OriginTrialFeature::kBadging:
      return true;
    case OriginTrialFeature::kBuiltInModuleInfra:
      return true;
    case OriginTrialFeature::kBuiltInModuleKvStorage:
      return true;
    case OriginTrialFeature::kContactsManager:
      return true;
    case OriginTrialFeature::kCookieStore:
      return true;
    case OriginTrialFeature::kCustomElementsV0:
      return true;
    case OriginTrialFeature::kDisableHardwareNoiseSuppression:
      return true;
    case OriginTrialFeature::kElementTiming:
      return true;
    case OriginTrialFeature::kEventTiming:
      return true;
    case OriginTrialFeature::kExperimentalIsInputPending:
      return true;
    case OriginTrialFeature::kFeaturePolicyReporting:
      return true;
    case OriginTrialFeature::kHrefTranslate:
      return true;
    case OriginTrialFeature::kHTMLImports:
      return true;
    case OriginTrialFeature::kInstalledApp:
      return true;
    case OriginTrialFeature::kJankTracking:
      return true;
    case OriginTrialFeature::kLayoutJankAPI:
      return true;
    case OriginTrialFeature::kLegacyPerformanceMemoryCounters:
      return true;
    case OriginTrialFeature::kMediaCapabilitiesEncryptedMedia:
      return true;
    case OriginTrialFeature::kMuteButton:
      return true;
    case OriginTrialFeature::kOriginTrialsSampleAPI:
      return true;
    case OriginTrialFeature::kOriginTrialsSampleAPIImplied:
      return true;
    case OriginTrialFeature::kOriginTrialsSampleAPIInvalidOS:
#if defined(OS_INVALID)
      return true;
#else
      return false;
#endif
    case OriginTrialFeature::kOriginTrialsSampleAPINavigation:
      return true;
    case OriginTrialFeature::kPageLifecycleTransitionsOptIn:
      return true;
    case OriginTrialFeature::kPageLifecycleTransitionsOptOut:
      return true;
    case OriginTrialFeature::kPerMethodCanMakePaymentQuota:
      return true;
    case OriginTrialFeature::kPriorityHints:
      return true;
    case OriginTrialFeature::kRtcAudioJitterBufferMaxPackets:
      return true;
    case OriginTrialFeature::kRtcAudioJitterBufferRtxHandling:
      return true;
    case OriginTrialFeature::kRTCIceTransportExtension:
      return true;
    case OriginTrialFeature::kRtcJitterBufferDelayHint:
      return true;
    case OriginTrialFeature::kRTCQuicTransport:
      return true;
    case OriginTrialFeature::kRTCStatsRelativePacketArrivalDelay:
      return true;
    case OriginTrialFeature::kShadowDOMV0:
      return true;
    case OriginTrialFeature::kSignatureBasedIntegrity:
      return true;
    case OriginTrialFeature::kSkipAd:
      return true;
    case OriginTrialFeature::kStaleWhileRevalidate:
      return true;
    case OriginTrialFeature::kTouchEventFeatureDetection:
      return true;
    case OriginTrialFeature::kTrustedDOMTypes:
      return true;
    case OriginTrialFeature::kUnoptimizedImagePolicies:
      return true;
    case OriginTrialFeature::kWebAssemblyThreads:
      return true;
    case OriginTrialFeature::kWebVR:
      return true;
    case OriginTrialFeature::kWebXR:
      return true;
    // For testing
    case OriginTrialFeature::kNonExisting:
      return true;
  }
}

} // namespace blink
