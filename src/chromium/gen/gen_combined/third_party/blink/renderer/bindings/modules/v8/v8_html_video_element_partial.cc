// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_playback_quality.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/modules/audio_output_devices/html_media_element_audio_output_device.h"
#include "third_party/blink/renderer/modules/encryptedmedia/html_media_element_encrypted_media.h"
#include "third_party/blink/renderer/modules/mediacapturefromelement/html_media_element_capture.h"
#include "third_party/blink/renderer/modules/mediasource/html_video_element_media_source.h"
#include "third_party/blink/renderer/modules/picture_in_picture/html_element_picture_in_picture.h"
#include "third_party/blink/renderer/modules/picture_in_picture/html_video_element_picture_in_picture.h"
#include "third_party/blink/renderer/modules/remoteplayback/html_media_element_remote_playback.h"
#include "third_party/blink/renderer/modules/srcobject/html_media_element_src_object.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace html_video_element_partial_v8_internal {

static void OnenterpictureinpictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  EventListener* cpp_value(HTMLVideoElementPictureInPicture::onenterpictureinpicture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnenterpictureinpictureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLVideoElementPictureInPicture::setOnenterpictureinpicture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnleavepictureinpictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  EventListener* cpp_value(HTMLVideoElementPictureInPicture::onleavepictureinpicture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnleavepictureinpictureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLVideoElementPictureInPicture::setOnleavepictureinpicture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void AutoPictureInPictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, HTMLVideoElementPictureInPicture::FastHasAttribute(html_names::kAutopictureinpictureAttr, *impl));
}

static void AutoPictureInPictureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "autoPictureInPicture");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  HTMLVideoElementPictureInPicture::SetBooleanAttribute(html_names::kAutopictureinpictureAttr, *impl, cpp_value);
}

static void DisablePictureInPictureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, HTMLVideoElementPictureInPicture::FastHasAttribute(html_names::kDisablepictureinpictureAttr, *impl));
}

static void DisablePictureInPictureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "disablePictureInPicture");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  HTMLVideoElementPictureInPicture::SetBooleanAttribute(html_names::kDisablepictureinpictureAttr, *impl, cpp_value);
}

static void GetVideoPlaybackQualityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, HTMLVideoElementMediaSource::getVideoPlaybackQuality(*impl), impl);
}

static void RequestPictureInPictureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLVideoElement", "requestPictureInPicture");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLVideoElement::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = HTMLVideoElementPictureInPicture::requestPictureInPicture(script_state, *impl);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace html_video_element_partial_v8_internal

void V8HTMLVideoElementPartial::OnenterpictureinpictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onenterpictureinpicture_Getter");

  html_video_element_partial_v8_internal::OnenterpictureinpictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::OnenterpictureinpictureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onenterpictureinpicture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_partial_v8_internal::OnenterpictureinpictureAttributeSetter(v8_value, info);
}

void V8HTMLVideoElementPartial::OnleavepictureinpictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onleavepictureinpicture_Getter");

  html_video_element_partial_v8_internal::OnleavepictureinpictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::OnleavepictureinpictureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_onleavepictureinpicture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_partial_v8_internal::OnleavepictureinpictureAttributeSetter(v8_value, info);
}

void V8HTMLVideoElementPartial::AutoPictureInPictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_autoPictureInPicture_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeGetter);

  html_video_element_partial_v8_internal::AutoPictureInPictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::AutoPictureInPictureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_autoPictureInPicture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_AutoPictureInPicture_AttributeSetter);

  html_video_element_partial_v8_internal::AutoPictureInPictureAttributeSetter(v8_value, info);
}

void V8HTMLVideoElementPartial::DisablePictureInPictureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_disablePictureInPicture_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeGetter);

  html_video_element_partial_v8_internal::DisablePictureInPictureAttributeGetter(info);
}

void V8HTMLVideoElementPartial::DisablePictureInPictureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_disablePictureInPicture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_DisablePictureInPicture_AttributeSetter);

  html_video_element_partial_v8_internal::DisablePictureInPictureAttributeSetter(v8_value, info);
}

void V8HTMLVideoElementPartial::GetVideoPlaybackQualityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_getVideoPlaybackQuality");

  html_video_element_partial_v8_internal::GetVideoPlaybackQualityMethod(info);
}

void V8HTMLVideoElementPartial::RequestPictureInPictureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_requestPictureInPicture");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLVideoElement_RequestPictureInPicture_Method);
  html_video_element_partial_v8_internal::RequestPictureInPictureMethod(info);
}

void V8HTMLVideoElementPartial::InstallV8HTMLVideoElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8HTMLVideoElement::InstallV8HTMLVideoElementTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "disablePictureInPicture", V8HTMLVideoElementPartial::DisablePictureInPictureAttributeGetterCallback, V8HTMLVideoElementPartial::DisablePictureInPictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onenterpictureinpicture", V8HTMLVideoElementPartial::OnenterpictureinpictureAttributeGetterCallback, V8HTMLVideoElementPartial::OnenterpictureinpictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onleavepictureinpicture", V8HTMLVideoElementPartial::OnleavepictureinpictureAttributeGetterCallback, V8HTMLVideoElementPartial::OnleavepictureinpictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::MediaSourceExperimentalEnabled()) {
    {
      // Install getVideoPlaybackQuality configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getVideoPlaybackQuality", V8HTMLVideoElementPartial::GetVideoPlaybackQualityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PictureInPictureAPIEnabled()) {
    {
      // Install requestPictureInPicture configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"requestPictureInPicture", V8HTMLVideoElementPartial::RequestPictureInPictureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8HTMLVideoElementPartial::InstallAutoPictureInPicture(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8HTMLVideoElement::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kautoPictureInPictureConfigurations[] = {
      { "autoPictureInPicture", V8HTMLVideoElementPartial::AutoPictureInPictureAttributeGetterCallback, V8HTMLVideoElementPartial::AutoPictureInPictureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kautoPictureInPictureConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8HTMLVideoElementPartial::InstallAutoPictureInPicture(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8HTMLVideoElement::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8HTMLVideoElement::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallAutoPictureInPicture(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8HTMLVideoElementPartial::InstallAutoPictureInPicture(ScriptState* script_state) {
  InstallAutoPictureInPicture(script_state, v8::Local<v8::Object>());
}

void V8HTMLVideoElementPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8HTMLVideoElement::UpdateWrapperTypeInfo(
      &V8HTMLVideoElementPartial::InstallV8HTMLVideoElementTemplate,
      nullptr,
      &V8HTMLVideoElementPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink
