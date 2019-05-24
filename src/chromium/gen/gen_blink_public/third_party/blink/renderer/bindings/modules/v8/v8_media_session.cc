// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_metadata.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_session_action_handler.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_media_session_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MediaSession::DomTemplate,
    nullptr,
    "MediaSession",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaSession.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MediaSession::wrapper_type_info_ = v8_media_session_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MediaSession>::value,
    "MediaSession inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MediaSession::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MediaSession is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace media_session_v8_internal {

static void MetadataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSession* impl = V8MediaSession::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->metadata()), impl);
}

static void MetadataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSession* impl = V8MediaSession::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "MediaSession", "metadata");

  // Prepare the value to be set.
  MediaMetadata* cpp_value = V8MediaMetadata::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'MediaMetadata'.");
    return;
  }

  impl->setMetadata(cpp_value);
}

static void PlaybackStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSession* impl = V8MediaSession::ToImpl(holder);

  V8SetReturnValueString(info, impl->playbackState(), info.GetIsolate());
}

static void PlaybackStateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSession* impl = V8MediaSession::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "MediaSession", "playbackState");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "none",
      "paused",
      "playing",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "MediaSessionPlaybackState", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setPlaybackState(cpp_value);
}

static void SetActionHandlerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSession", "setActionHandler");

  MediaSession* impl = V8MediaSession::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> action;
  V8MediaSessionActionHandler* handler;
  action = info[0];
  if (!action.Prepare())
    return;
  const char* kValidActionValues[] = {
      "play",
      "pause",
      "previoustrack",
      "nexttrack",
      "seekbackward",
      "seekforward",
      "skipad",
  };
  if (!IsValidEnum(action, kValidActionValues, base::size(kValidActionValues), "MediaSessionAction", exception_state)) {
    return;
  }

  if (info[1]->IsFunction()) {
    handler = V8MediaSessionActionHandler::Create(info[1].As<v8::Function>());
  } else if (info[1]->IsNullOrUndefined()) {
    handler = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  impl->setActionHandler(action, handler, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace media_session_v8_internal

void V8MediaSession::MetadataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSession_metadata_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MediaSession_Metadata_AttributeGetter);

  media_session_v8_internal::MetadataAttributeGetter(info);
}

void V8MediaSession::MetadataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSession_metadata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaSession_Metadata_AttributeSetter);

  media_session_v8_internal::MetadataAttributeSetter(v8_value, info);
}

void V8MediaSession::PlaybackStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSession_playbackState_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MediaSession_PlaybackState_AttributeGetter);

  media_session_v8_internal::PlaybackStateAttributeGetter(info);
}

void V8MediaSession::PlaybackStateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSession_playbackState_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaSession_PlaybackState_AttributeSetter);

  media_session_v8_internal::PlaybackStateAttributeSetter(v8_value, info);
}

void V8MediaSession::SetActionHandlerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSession_setActionHandler");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MediaSession_SetActionHandler_Method);
  media_session_v8_internal::SetActionHandlerMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MediaSessionAccessors[] = {
    { "metadata", V8MediaSession::MetadataAttributeGetterCallback, V8MediaSession::MetadataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "playbackState", V8MediaSession::PlaybackStateAttributeGetterCallback, V8MediaSession::PlaybackStateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8MediaSessionMethods[] = {
    {"setActionHandler", V8MediaSession::SetActionHandlerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MediaSessionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MediaSession::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8MediaSession::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::MediaSessionEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaSessionAccessors, base::size(kV8MediaSessionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaSessionMethods, base::size(kV8MediaSessionMethods));

  // Custom signature

  V8MediaSession::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MediaSession::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::MediaSessionEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8MediaSession::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MediaSession::GetWrapperTypeInfo()),
      InstallV8MediaSessionTemplate);
}

bool V8MediaSession::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MediaSession::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MediaSession::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MediaSession::GetWrapperTypeInfo(), v8_value);
}

MediaSession* V8MediaSession::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MediaSession* NativeValueTraits<MediaSession>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaSession* native_value = V8MediaSession::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MediaSession"));
  }
  return native_value;
}

}  // namespace blink
