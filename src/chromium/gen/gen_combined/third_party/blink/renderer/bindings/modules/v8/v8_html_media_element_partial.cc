// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_media_element_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_keys.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_remote_playback.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/modules/audio_output_devices/html_media_element_audio_output_device.h"
#include "third_party/blink/renderer/modules/encryptedmedia/html_media_element_encrypted_media.h"
#include "third_party/blink/renderer/modules/mediacapturefromelement/html_media_element_capture.h"
#include "third_party/blink/renderer/modules/picture_in_picture/html_element_picture_in_picture.h"
#include "third_party/blink/renderer/modules/remoteplayback/html_media_element_remote_playback.h"
#include "third_party/blink/renderer/modules/srcobject/html_media_element_src_object.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace html_media_element_partial_v8_internal {

static void SinkIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, HTMLMediaElementAudioOutputDevice::sinkId(*impl), info.GetIsolate());
}

static void MediaKeysAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, HTMLMediaElementEncryptedMedia::mediaKeys(*impl), impl);
}

static void OnencryptedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  EventListener* cpp_value(HTMLMediaElementEncryptedMedia::onencrypted(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnencryptedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLMediaElementEncryptedMedia::setOnencrypted(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwaitingforkeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  EventListener* cpp_value(HTMLMediaElementEncryptedMedia::onwaitingforkey(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwaitingforkeyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  // Prepare the value to be set.

  HTMLMediaElementEncryptedMedia::setOnwaitingforkey(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void RemoteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, HTMLMediaElementRemotePlayback::remote(*impl), impl);
}

static void DisableRemotePlaybackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, HTMLMediaElementRemotePlayback::FastHasAttribute(html_names::kDisableremoteplaybackAttr, *impl));
}

static void DisableRemotePlaybackAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "disableRemotePlayback");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  HTMLMediaElementRemotePlayback::SetBooleanAttribute(html_names::kDisableremoteplaybackAttr, *impl, cpp_value);
}

static void SrcObjectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, HTMLMediaElementSrcObject::srcObject(*impl), impl);
}

static void SrcObjectAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "srcObject");

  // Prepare the value to be set.
  MediaStream* cpp_value = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'MediaStream'.");
    return;
  }

  HTMLMediaElementSrcObject::setSrcObject(*impl, cpp_value);
}

static void SetSinkIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "setSinkId");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLMediaElement::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> sink_id;
  sink_id = info[0];
  if (!sink_id.Prepare(exception_state))
    return;

  ScriptPromise result = HTMLMediaElementAudioOutputDevice::setSinkId(script_state, *impl, sink_id);
  V8SetReturnValue(info, result.V8Value());
}

static void SetMediaKeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "setMediaKeys");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLMediaElement::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaKeys* media_keys;
  media_keys = V8MediaKeys::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_keys && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaKeys'.");
    return;
  }

  ScriptPromise result = HTMLMediaElementEncryptedMedia::setMediaKeys(script_state, *impl, media_keys);
  V8SetReturnValue(info, result.V8Value());
}

static void CaptureStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "captureStream");

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MediaStream* result = HTMLMediaElementCapture::captureStream(script_state, *impl, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

}  // namespace html_media_element_partial_v8_internal

void V8HTMLMediaElementPartial::SinkIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_sinkId_Getter");

  html_media_element_partial_v8_internal::SinkIdAttributeGetter(info);
}

void V8HTMLMediaElementPartial::MediaKeysAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_mediaKeys_Getter");

  html_media_element_partial_v8_internal::MediaKeysAttributeGetter(info);
}

void V8HTMLMediaElementPartial::OnencryptedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_onencrypted_Getter");

  html_media_element_partial_v8_internal::OnencryptedAttributeGetter(info);
}

void V8HTMLMediaElementPartial::OnencryptedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_onencrypted_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_partial_v8_internal::OnencryptedAttributeSetter(v8_value, info);
}

void V8HTMLMediaElementPartial::OnwaitingforkeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_onwaitingforkey_Getter");

  html_media_element_partial_v8_internal::OnwaitingforkeyAttributeGetter(info);
}

void V8HTMLMediaElementPartial::OnwaitingforkeyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_onwaitingforkey_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_partial_v8_internal::OnwaitingforkeyAttributeSetter(v8_value, info);
}

void V8HTMLMediaElementPartial::RemoteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_remote_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLMediaElement_Remote_AttributeGetter);

  html_media_element_partial_v8_internal::RemoteAttributeGetter(info);
}

void V8HTMLMediaElementPartial::DisableRemotePlaybackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_disableRemotePlayback_Getter");

  html_media_element_partial_v8_internal::DisableRemotePlaybackAttributeGetter(info);
}

void V8HTMLMediaElementPartial::DisableRemotePlaybackAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_disableRemotePlayback_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_partial_v8_internal::DisableRemotePlaybackAttributeSetter(v8_value, info);
}

void V8HTMLMediaElementPartial::SrcObjectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_srcObject_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLMediaElement_SrcObject_AttributeGetter);

  html_media_element_partial_v8_internal::SrcObjectAttributeGetter(info);
}

void V8HTMLMediaElementPartial::SrcObjectAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_srcObject_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLMediaElement_SrcObject_AttributeSetter);

  html_media_element_partial_v8_internal::SrcObjectAttributeSetter(v8_value, info);
}

void V8HTMLMediaElementPartial::SetSinkIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_setSinkId");

  html_media_element_partial_v8_internal::SetSinkIdMethod(info);
}

void V8HTMLMediaElementPartial::SetMediaKeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_setMediaKeys");

  html_media_element_partial_v8_internal::SetMediaKeysMethod(info);
}

void V8HTMLMediaElementPartial::CaptureStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_captureStream");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLMediaElement_CaptureStream_Method);
  html_media_element_partial_v8_internal::CaptureStreamMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLMediaElementAccessors[] = {
    { "onencrypted", V8HTMLMediaElementPartial::OnencryptedAttributeGetterCallback, V8HTMLMediaElementPartial::OnencryptedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwaitingforkey", V8HTMLMediaElementPartial::OnwaitingforkeyAttributeGetterCallback, V8HTMLMediaElementPartial::OnwaitingforkeyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "srcObject", V8HTMLMediaElementPartial::SrcObjectAttributeGetterCallback, V8HTMLMediaElementPartial::SrcObjectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLMediaElementMethods[] = {
    {"captureStream", V8HTMLMediaElementPartial::CaptureStreamMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLMediaElementPartial::InstallV8HTMLMediaElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8HTMLMediaElement::InstallV8HTMLMediaElementTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLMediaElementAccessors, base::size(kV8HTMLMediaElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLMediaElementMethods, base::size(kV8HTMLMediaElementMethods));

  // Custom signature

  V8HTMLMediaElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLMediaElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8HTMLMediaElement::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AudioOutputDevicesEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "sinkId", V8HTMLMediaElementPartial::SinkIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::RemotePlaybackEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "remote", V8HTMLMediaElementPartial::RemoteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "disableRemotePlayback", V8HTMLMediaElementPartial::DisableRemotePlaybackAttributeGetterCallback, V8HTMLMediaElementPartial::DisableRemotePlaybackAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::AudioOutputDevicesEnabled()) {
    {
      // Install setSinkId configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setSinkId", V8HTMLMediaElementPartial::SetSinkIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8HTMLMediaElementPartial::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());
  V8HTMLMediaElement::InstallConditionalFeatures(
      context, world, instance_object, prototype_object, interface_object, interface_template);

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "mediaKeys", V8HTMLMediaElementPartial::MediaKeysAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install setMediaKeys configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"setMediaKeys", V8HTMLMediaElementPartial::SetMediaKeysMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

void V8HTMLMediaElementPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8HTMLMediaElement::UpdateWrapperTypeInfo(
      &V8HTMLMediaElementPartial::InstallV8HTMLMediaElementTemplate,
      nullptr,
      &V8HTMLMediaElementPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      V8HTMLMediaElementPartial::InstallConditionalFeatures);
}

}  // namespace blink
