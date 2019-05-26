// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/origin_trial_features_for_modules.cc.tmpl
// by the script generate_origin_trial_features.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/modules/v8/origin_trial_features_for_modules.h"

#include "third_party/blink/renderer/bindings/core/v8/origin_trial_features_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_navigator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_animation_worklet_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_css_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gamepad.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_global_scope.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_compute_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"
#include "third_party/blink/renderer/core/context_features/context_feature_settings.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/frame.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/origin_trial_features.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

namespace {
InstallOriginTrialFeaturesFunction
    g_original_install_origin_trial_features_function = nullptr;
InstallPendingOriginTrialFeatureFunction
    g_original_install_pending_origin_trial_feature_function = nullptr;

void InstallOriginTrialFeaturesForModules(
    const WrapperTypeInfo* wrapper_type_info,
    const ScriptState* script_state,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object) {
  (*g_original_install_origin_trial_features_function)(
      wrapper_type_info, script_state, prototype_object, interface_object);

  ExecutionContext* execution_context = ExecutionContext::From(script_state);
  if (!execution_context)
    return;
  v8::Isolate* isolate = script_state->GetIsolate();
  const DOMWrapperWorld& world = script_state->World();
  // TODO(iclelland): Extract this common code out of OriginTrialFeaturesForCore
  // and OriginTrialFeaturesForModules into a block.
  if (wrapper_type_info == V8AnimationWorkletGlobalScope::GetWrapperTypeInfo()) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (RuntimeEnabledFeatures::AnimationWorkletEnabled(execution_context)) {
      V8AnimationWorkletGlobalScope::InstallAnimationWorklet(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8CSS::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::AnimationWorkletEnabled(execution_context)) {
      V8CSSPartial::InstallAnimationWorklet(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8Gamepad::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::WebVREnabled(execution_context)) {
      V8Gamepad::InstallWebVR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8HTMLVideoElement::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::AutoPictureInPictureEnabled(execution_context)) {
      V8HTMLVideoElementPartial::InstallAutoPictureInPicture(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8Navigator::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::WebVREnabled(execution_context)) {
      V8NavigatorPartial::InstallWebVR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::ContactsManagerEnabled(execution_context)) {
      V8NavigatorPartial::InstallContactsManager(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::WebXREnabled(execution_context)) {
      V8NavigatorPartial::InstallWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::InstalledAppEnabled(execution_context)) {
      V8NavigatorPartial::InstallInstalledApp(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8RTCIceTransport::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::RTCIceTransportExtensionEnabled(execution_context)) {
      V8RTCIceTransport::InstallRTCIceTransportExtension(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8RTCRtpReceiver::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::RtcJitterBufferDelayHintEnabled(execution_context)) {
      V8RTCRtpReceiver::InstallRtcJitterBufferDelayHint(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8ServiceWorkerGlobalScope::GetWrapperTypeInfo()) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (RuntimeEnabledFeatures::TrustedDOMTypesEnabled(execution_context)) {
      V8ServiceWorkerGlobalScope::InstallTrustedDOMTypes(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::CookieStoreEnabled(execution_context)) {
      V8ServiceWorkerGlobalScope::InstallCookieStore(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::WebXREnabled(execution_context)) {
      V8WebGL2ComputeRenderingContext::InstallWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8WebGL2RenderingContext::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::WebXREnabled(execution_context)) {
      V8WebGL2RenderingContext::InstallWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8WebGLRenderingContext::GetWrapperTypeInfo()) {
    if (RuntimeEnabledFeatures::WebXREnabled(execution_context)) {
      V8WebGLRenderingContext::InstallWebXR(
          isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
    }
  }
  if (wrapper_type_info == V8Window::GetWrapperTypeInfo()) {
    v8::Local<v8::Object> instance_object =
        script_state->GetContext()->Global();
    if (RuntimeEnabledFeatures::WebVREnabled(execution_context)) {
      V8WindowPartial::InstallWebVR(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::AnimationWorkletEnabled(execution_context)) {
      V8WindowPartial::InstallAnimationWorklet(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::WebXREnabled(execution_context)) {
      V8WindowPartial::InstallWebXR(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::ContactsManagerEnabled(execution_context)) {
      V8WindowPartial::InstallContactsManager(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::BadgingEnabled(execution_context)) {
      V8WindowPartial::InstallBadging(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::CookieStoreEnabled(execution_context)) {
      V8WindowPartial::InstallCookieStore(
          isolate, world, instance_object, prototype_object, interface_object);
    }
    if (RuntimeEnabledFeatures::RTCQuicTransportEnabled(execution_context)) {
      V8WindowPartial::InstallRTCQuicTransport(
          isolate, world, instance_object, prototype_object, interface_object);
    }
  }
}

void InstallPendingOriginTrialFeatureForModules(
    OriginTrialFeature feature,
    const ScriptState* script_state) {
  (*g_original_install_pending_origin_trial_feature_function)(feature,
                                                             script_state);

  // TODO(iclelland): Extract this common code out of OriginTrialFeaturesForCore
  // and OriginTrialFeaturesForModules into a block.
  v8::Local<v8::Object> prototype_object;
  v8::Local<v8::Function> interface_object;
  v8::Isolate* isolate = script_state->GetIsolate();
  const DOMWrapperWorld& world = script_state->World();
  V8PerContextData* context_data = script_state->PerContextData();
  switch (feature) {
    case OriginTrialFeature::kAnimationWorklet: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8CSS::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8CSSPartial::InstallAnimationWorklet(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      V8AnimationWorkletGlobalScope::InstallAnimationWorklet(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      V8WindowPartial::InstallAnimationWorklet(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      break;
    }
    case OriginTrialFeature::kAutoPictureInPicture: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8HTMLVideoElement::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8HTMLVideoElementPartial::InstallAutoPictureInPicture(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kBadging: {
      V8WindowPartial::InstallBadging(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      break;
    }
    case OriginTrialFeature::kContactsManager: {
      V8WindowPartial::InstallContactsManager(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8Navigator::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8NavigatorPartial::InstallContactsManager(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kCookieStore: {
      V8WindowPartial::InstallCookieStore(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      V8ServiceWorkerGlobalScope::InstallCookieStore(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      break;
    }
    case OriginTrialFeature::kInstalledApp: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8Navigator::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8NavigatorPartial::InstallInstalledApp(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kRTCIceTransportExtension: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8RTCIceTransport::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8RTCIceTransport::InstallRTCIceTransportExtension(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kRTCQuicTransport: {
      V8WindowPartial::InstallRTCQuicTransport(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      break;
    }
    case OriginTrialFeature::kRtcJitterBufferDelayHint: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8RTCRtpReceiver::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8RTCRtpReceiver::InstallRtcJitterBufferDelayHint(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kTrustedDOMTypes: {
      V8ServiceWorkerGlobalScope::InstallTrustedDOMTypes(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      break;
    }
    case OriginTrialFeature::kWebVR: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8Gamepad::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8Gamepad::InstallWebVR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      V8WindowPartial::InstallWebVR(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8Navigator::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8NavigatorPartial::InstallWebVR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    case OriginTrialFeature::kWebXR: {
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8WebGL2RenderingContext::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8WebGL2RenderingContext::InstallWebXR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      V8WindowPartial::InstallWebXR(
          isolate, world, script_state->GetContext()->Global(),
          v8::Local<v8::Object>(), v8::Local<v8::Function>());
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8WebGL2ComputeRenderingContext::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8WebGL2ComputeRenderingContext::InstallWebXR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8WebGLRenderingContext::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8WebGLRenderingContext::InstallWebXR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      if (context_data->GetExistingConstructorAndPrototypeForType(
              V8Navigator::GetWrapperTypeInfo(), &prototype_object, &interface_object)) {
        V8NavigatorPartial::InstallWebXR(
            isolate, world, v8::Local<v8::Object>(), prototype_object, interface_object);
      }
      break;
    }
    default:
      break;
  }
}

}  // namespace

void RegisterInstallOriginTrialFeaturesForModules() {
  RegisterInstallOriginTrialFeaturesForCore();
  g_original_install_origin_trial_features_function =
      SetInstallOriginTrialFeaturesFunction(
          &InstallOriginTrialFeaturesForModules);
  g_original_install_pending_origin_trial_feature_function =
      SetInstallPendingOriginTrialFeatureFunction(
          &InstallPendingOriginTrialFeatureForModules);
}

}  // namespace blink
