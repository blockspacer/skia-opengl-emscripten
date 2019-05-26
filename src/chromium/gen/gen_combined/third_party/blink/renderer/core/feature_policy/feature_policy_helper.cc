// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/feature_policy_helper.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/feature_policy/feature_policy_features.json5
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#include "third_party/blink/renderer/core/feature_policy/feature_policy_helper.h"

#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

namespace {

const char kAccelerometerPolicyName[] = "accelerometer";
const char kAmbientLightSensorPolicyName[] = "ambient-light-sensor";
const char kAutoplayPolicyName[] = "autoplay";
const char kCameraPolicyName[] = "camera";
const char kDocumentDomainPolicyName[] = "document-domain";
const char kDocumentWritePolicyName[] = "document-write";
const char kDownloadsWithoutUserActivationPolicyName[] = "downloads-without-user-activation";
const char kEncryptedMediaPolicyName[] = "encrypted-media";
const char kExecutionWhileOutOfViewportPolicyName[] = "execution-while-out-of-viewport";
const char kExecutionWhileNotRenderedPolicyName[] = "execution-while-not-rendered";
const char kFontDisplayPolicyName[] = "font-display-late-swap";
const char kFormSubmissionPolicyName[] = "forms";
const char kFullscreenPolicyName[] = "fullscreen";
const char kFrobulatePolicyName[] = "frobulate";
const char kGeolocationPolicyName[] = "geolocation";
const char kGyroscopePolicyName[] = "gyroscope";
const char kHidPolicyName[] = "hid";
const char kIdleDetectionPolicyName[] = "idle-detection";
const char kLayoutAnimationsPolicyName[] = "layout-animations";
const char kLazyLoadPolicyName[] = "lazyload";
const char kLoadingFrameDefaultEagerPolicyName[] = "loading-frame-default-eager";
const char kMagnetometerPolicyName[] = "magnetometer";
const char kMicrophonePolicyName[] = "microphone";
const char kMidiFeaturePolicyName[] = "midi";
const char kModalsPolicyName[] = "modals";
const char kOrientationLockPolicyName[] = "orientation-lock";
const char kOversizedImagesPolicyName[] = "oversized-images";
const char kPaymentPolicyName[] = "payment";
const char kPictureInPicturePolicyName[] = "picture-in-picture";
const char kPointerLockPolicyName[] = "pointer-lock";
const char kPopupsPolicyName[] = "popups";
const char kPresentationPolicyName[] = "presentation";
const char kScriptPolicyName[] = "scripts";
const char kSerialPolicyName[] = "serial";
const char kSpeakerPolicyName[] = "speaker";
const char kSyncScriptPolicyName[] = "sync-script";
const char kSyncXHRPolicyName[] = "sync-xhr";
const char kTopNavigationPolicyName[] = "top-navigation";
const char kUnoptimizedLosslessImagesPolicyName[] = "unoptimized-lossless-images";
const char kUnoptimizedLosslessImagesStrictPolicyName[] = "unoptimized-lossless-images-strict";
const char kUnoptimizedLossyImagesPolicyName[] = "unoptimized-lossy-images";
const char kUnsizedMediaPolicyName[] = "unsized-media";
const char kUsbPolicyName[] = "usb";
const char kVerticalScrollPolicyName[] = "vertical-scroll";
const char kWakeLockPolicyName[] = "wake-lock";

}  // namespace

// Features which depend on a flag also have the same flag controlling whether
// they are in this map. Features which are shipping as part of an origin trial
// add their feature names to this map unconditionally, as the trial token could
// be added after the HTTP header needs to be parsed. This also means that
// top-level documents which simply want to embed another page which uses an
// origin trial feature, without using the feature themselves, can use feature
// policy to allow use of the feature in subframes (The framed document will
// still require a valid origin trial token to use the feature in this scenario).
const FeatureNameMap& GetDefaultFeatureNameMap() {
  DEFINE_STATIC_LOCAL(FeatureNameMap, default_feature_name_map, ());
  if (default_feature_name_map.IsEmpty()) {
    default_feature_name_map.Set(kAutoplayPolicyName,
                                 mojom::FeaturePolicyFeature::kAutoplay);
    default_feature_name_map.Set(kCameraPolicyName,
                                 mojom::FeaturePolicyFeature::kCamera);
    default_feature_name_map.Set(kEncryptedMediaPolicyName,
                                 mojom::FeaturePolicyFeature::kEncryptedMedia);
    default_feature_name_map.Set(kFullscreenPolicyName,
                                 mojom::FeaturePolicyFeature::kFullscreen);
    default_feature_name_map.Set(kFrobulatePolicyName,
                                 mojom::FeaturePolicyFeature::kFrobulate);
    default_feature_name_map.Set(kGeolocationPolicyName,
                                 mojom::FeaturePolicyFeature::kGeolocation);
    default_feature_name_map.Set(kMicrophonePolicyName,
                                 mojom::FeaturePolicyFeature::kMicrophone);
    default_feature_name_map.Set(kMidiFeaturePolicyName,
                                 mojom::FeaturePolicyFeature::kMidiFeature);
    default_feature_name_map.Set(kOversizedImagesPolicyName,
                                 mojom::FeaturePolicyFeature::kOversizedImages);
    default_feature_name_map.Set(kSpeakerPolicyName,
                                 mojom::FeaturePolicyFeature::kSpeaker);
    default_feature_name_map.Set(kSyncXHRPolicyName,
                                 mojom::FeaturePolicyFeature::kSyncXHR);
    default_feature_name_map.Set(kUnoptimizedLosslessImagesPolicyName,
                                 mojom::FeaturePolicyFeature::kUnoptimizedLosslessImages);
    default_feature_name_map.Set(kUnoptimizedLosslessImagesStrictPolicyName,
                                 mojom::FeaturePolicyFeature::kUnoptimizedLosslessImagesStrict);
    default_feature_name_map.Set(kUnoptimizedLossyImagesPolicyName,
                                 mojom::FeaturePolicyFeature::kUnoptimizedLossyImages);
    // WebVr manually added here. Its declaration should go to
    // 'feature_policy_features.json5' once it is out of the origin trial.
    ASSERT_ORIGIN_TRIAL(WebVR);
    ASSERT_ORIGIN_TRIAL(WebXR);
    default_feature_name_map.Set("vr", mojom::FeaturePolicyFeature::kWebVr);
    if (RuntimeEnabledFeatures::IdleDetectionEnabled()) {
      default_feature_name_map.Set(kIdleDetectionPolicyName,
                                   mojom::FeaturePolicyFeature::kIdleDetection);
    }
    if (RuntimeEnabledFeatures::WakeLockNavigatorEnabled()) {
      default_feature_name_map.Set(kWakeLockPolicyName,
                                   mojom::FeaturePolicyFeature::kWakeLock);
    }
    if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
      default_feature_name_map.Set(kPictureInPicturePolicyName,
                                   mojom::FeaturePolicyFeature::kPictureInPicture);
    }
    if (RuntimeEnabledFeatures::WebHIDEnabled()) {
      default_feature_name_map.Set(kHidPolicyName,
                                   mojom::FeaturePolicyFeature::kHid);
    }
    if (RuntimeEnabledFeatures::PaymentRequestEnabled()) {
      default_feature_name_map.Set(kPaymentPolicyName,
                                   mojom::FeaturePolicyFeature::kPayment);
    }
    if (RuntimeEnabledFeatures::FreezeFramesOnVisibilityEnabled()) {
      default_feature_name_map.Set(kExecutionWhileOutOfViewportPolicyName,
                                   mojom::FeaturePolicyFeature::kExecutionWhileOutOfViewport);
      default_feature_name_map.Set(kExecutionWhileNotRenderedPolicyName,
                                   mojom::FeaturePolicyFeature::kExecutionWhileNotRendered);
    }
    if (RuntimeEnabledFeatures::FeaturePolicyForSandboxEnabled()) {
      default_feature_name_map.Set(kDownloadsWithoutUserActivationPolicyName,
                                   mojom::FeaturePolicyFeature::kDownloadsWithoutUserActivation);
      default_feature_name_map.Set(kFormSubmissionPolicyName,
                                   mojom::FeaturePolicyFeature::kFormSubmission);
      default_feature_name_map.Set(kModalsPolicyName,
                                   mojom::FeaturePolicyFeature::kModals);
      default_feature_name_map.Set(kOrientationLockPolicyName,
                                   mojom::FeaturePolicyFeature::kOrientationLock);
      default_feature_name_map.Set(kPointerLockPolicyName,
                                   mojom::FeaturePolicyFeature::kPointerLock);
      default_feature_name_map.Set(kPopupsPolicyName,
                                   mojom::FeaturePolicyFeature::kPopups);
      default_feature_name_map.Set(kPresentationPolicyName,
                                   mojom::FeaturePolicyFeature::kPresentation);
      default_feature_name_map.Set(kScriptPolicyName,
                                   mojom::FeaturePolicyFeature::kScript);
      default_feature_name_map.Set(kTopNavigationPolicyName,
                                   mojom::FeaturePolicyFeature::kTopNavigation);
    }
    if (RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled()) {
      default_feature_name_map.Set(kDocumentDomainPolicyName,
                                   mojom::FeaturePolicyFeature::kDocumentDomain);
      default_feature_name_map.Set(kDocumentWritePolicyName,
                                   mojom::FeaturePolicyFeature::kDocumentWrite);
      default_feature_name_map.Set(kFontDisplayPolicyName,
                                   mojom::FeaturePolicyFeature::kFontDisplay);
      default_feature_name_map.Set(kLayoutAnimationsPolicyName,
                                   mojom::FeaturePolicyFeature::kLayoutAnimations);
      default_feature_name_map.Set(kLazyLoadPolicyName,
                                   mojom::FeaturePolicyFeature::kLazyLoad);
      default_feature_name_map.Set(kLoadingFrameDefaultEagerPolicyName,
                                   mojom::FeaturePolicyFeature::kLoadingFrameDefaultEager);
      default_feature_name_map.Set(kSyncScriptPolicyName,
                                   mojom::FeaturePolicyFeature::kSyncScript);
      default_feature_name_map.Set(kUnsizedMediaPolicyName,
                                   mojom::FeaturePolicyFeature::kUnsizedMedia);
      default_feature_name_map.Set(kVerticalScrollPolicyName,
                                   mojom::FeaturePolicyFeature::kVerticalScroll);
    }
    if (RuntimeEnabledFeatures::SerialEnabled()) {
      default_feature_name_map.Set(kSerialPolicyName,
                                   mojom::FeaturePolicyFeature::kSerial);
    }
    if (RuntimeEnabledFeatures::SensorEnabled()) {
      default_feature_name_map.Set(kAccelerometerPolicyName,
                                   mojom::FeaturePolicyFeature::kAccelerometer);
      default_feature_name_map.Set(kAmbientLightSensorPolicyName,
                                   mojom::FeaturePolicyFeature::kAmbientLightSensor);
      default_feature_name_map.Set(kGyroscopePolicyName,
                                   mojom::FeaturePolicyFeature::kGyroscope);
      default_feature_name_map.Set(kMagnetometerPolicyName,
                                   mojom::FeaturePolicyFeature::kMagnetometer);
    }
    if (RuntimeEnabledFeatures::WebUSBEnabled()) {
      default_feature_name_map.Set(kUsbPolicyName,
                                   mojom::FeaturePolicyFeature::kUsb);
    }
  }
  return default_feature_name_map;
}

bool DisabledByOriginTrial(const String& feature_name,
                           ExecutionContext* execution_context) {
  if (feature_name == kUnoptimizedLossyImagesPolicyName) {
    return !RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(execution_context);
  }
  if (feature_name == kUnoptimizedLosslessImagesStrictPolicyName) {
    return !RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(execution_context);
  }
  if (feature_name == kFrobulatePolicyName) {
    return !RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(execution_context);
  }
  if (feature_name == kOversizedImagesPolicyName) {
    return !RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(execution_context);
  }
  if (feature_name == kUnoptimizedLosslessImagesPolicyName) {
    return !RuntimeEnabledFeatures::UnoptimizedImagePoliciesEnabled(execution_context);
  }
  return false;
}

}  // namespace blink