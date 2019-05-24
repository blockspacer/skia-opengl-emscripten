// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_cue.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_text_track_cue_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8TextTrackCue::DomTemplate,
    nullptr,
    "TextTrackCue",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextTrackCue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TextTrackCue::wrapper_type_info_ = v8_text_track_cue_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TextTrackCue>::value,
    "TextTrackCue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TextTrackCue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TextTrackCue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace text_track_cue_v8_internal {

static void TrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  TextTrack* cpp_value(WTF::GetPtr(impl->track()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#TextTrackCue#track")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void IdAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setId(cpp_value);
}

static void StartTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  V8SetReturnValue(info, impl->startTime());
}

static void StartTimeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TextTrackCue", "startTime");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setStartTime(cpp_value);
}

static void EndTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  V8SetReturnValue(info, impl->endTime());
}

static void EndTimeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TextTrackCue", "endTime");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setEndTime(cpp_value);
}

static void PauseOnExitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  V8SetReturnValueBool(info, impl->pauseOnExit());
}

static void PauseOnExitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TextTrackCue", "pauseOnExit");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPauseOnExit(cpp_value);
}

static void OnenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onenter()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnenter(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnexitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onexit()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnexitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TextTrackCue* impl = V8TextTrackCue::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnexit(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

}  // namespace text_track_cue_v8_internal

void V8TextTrackCue::TrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_track_Getter");

  text_track_cue_v8_internal::TrackAttributeGetter(info);
}

void V8TextTrackCue::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_id_Getter");

  text_track_cue_v8_internal::IdAttributeGetter(info);
}

void V8TextTrackCue::IdAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_id_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::IdAttributeSetter(v8_value, info);
}

void V8TextTrackCue::StartTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_startTime_Getter");

  text_track_cue_v8_internal::StartTimeAttributeGetter(info);
}

void V8TextTrackCue::StartTimeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_startTime_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::StartTimeAttributeSetter(v8_value, info);
}

void V8TextTrackCue::EndTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_endTime_Getter");

  text_track_cue_v8_internal::EndTimeAttributeGetter(info);
}

void V8TextTrackCue::EndTimeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_endTime_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::EndTimeAttributeSetter(v8_value, info);
}

void V8TextTrackCue::PauseOnExitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_pauseOnExit_Getter");

  text_track_cue_v8_internal::PauseOnExitAttributeGetter(info);
}

void V8TextTrackCue::PauseOnExitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_pauseOnExit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::PauseOnExitAttributeSetter(v8_value, info);
}

void V8TextTrackCue::OnenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_onenter_Getter");

  text_track_cue_v8_internal::OnenterAttributeGetter(info);
}

void V8TextTrackCue::OnenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_onenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::OnenterAttributeSetter(v8_value, info);
}

void V8TextTrackCue::OnexitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_onexit_Getter");

  text_track_cue_v8_internal::OnexitAttributeGetter(info);
}

void V8TextTrackCue::OnexitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextTrackCue_onexit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  text_track_cue_v8_internal::OnexitAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8TextTrackCueAccessors[] = {
    { "track", V8TextTrackCue::TrackAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "id", V8TextTrackCue::IdAttributeGetterCallback, V8TextTrackCue::IdAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "startTime", V8TextTrackCue::StartTimeAttributeGetterCallback, V8TextTrackCue::StartTimeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "endTime", V8TextTrackCue::EndTimeAttributeGetterCallback, V8TextTrackCue::EndTimeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pauseOnExit", V8TextTrackCue::PauseOnExitAttributeGetterCallback, V8TextTrackCue::PauseOnExitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onenter", V8TextTrackCue::OnenterAttributeGetterCallback, V8TextTrackCue::OnenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onexit", V8TextTrackCue::OnexitAttributeGetterCallback, V8TextTrackCue::OnexitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8TextTrackCueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8TextTrackCue::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8TextTrackCue::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8TextTrackCueAccessors, base::size(kV8TextTrackCueAccessors));

  // Custom signature

  V8TextTrackCue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8TextTrackCue::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8TextTrackCue::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8TextTrackCue::GetWrapperTypeInfo()),
      InstallV8TextTrackCueTemplate);
}

bool V8TextTrackCue::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8TextTrackCue::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8TextTrackCue::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8TextTrackCue::GetWrapperTypeInfo(), v8_value);
}

TextTrackCue* V8TextTrackCue::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TextTrackCue* NativeValueTraits<TextTrackCue>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TextTrackCue* native_value = V8TextTrackCue::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TextTrackCue"));
  }
  return native_value;
}

}  // namespace blink
