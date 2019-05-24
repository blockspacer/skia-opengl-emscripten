// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_capabilities.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_constraints.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_track_settings.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track_content_hint.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_media_stream_track_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MediaStreamTrack::DomTemplate,
    nullptr,
    "MediaStreamTrack",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaStreamTrack.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MediaStreamTrack::wrapper_type_info_ = v8_media_stream_track_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MediaStreamTrack>::value,
    "MediaStreamTrack does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MediaStreamTrack::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MediaStreamTrack is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace media_stream_track_v8_internal {

static void KindAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueString(info, impl->kind(), info.GetIsolate());
}

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void LabelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueString(info, impl->label(), info.GetIsolate());
}

static void EnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueBool(info, impl->enabled());
}

static void EnabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "MediaStreamTrack", "enabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setEnabled(cpp_value);
}

static void MutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueBool(info, impl->muted());
}

static void OnmuteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmute()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmuteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmute(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunmuteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onunmute()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunmuteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnunmute(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void OnendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onended()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnended(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ContentHintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  V8SetReturnValueString(info, MediaStreamTrackContentHint::contentHint(*impl), info.GetIsolate());
}

static void ContentHintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  MediaStreamTrackContentHint::setContentHint(*impl, cpp_value);
}

static void CloneMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MediaStreamTrack* result = impl->clone(script_state);
  V8SetReturnValue(info, result);
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->stopTrack(execution_context);
}

static void GetCapabilitiesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  MediaTrackCapabilities* result = impl->getCapabilities();
  V8SetReturnValue(info, result);
}

static void GetConstraintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  MediaTrackConstraints* result = impl->getConstraints();
  V8SetReturnValue(info, result);
}

static void GetSettingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  MediaTrackSettings* result = impl->getSettings();
  V8SetReturnValue(info, result);
}

static void ApplyConstraintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaStreamTrack", "applyConstraints");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8MediaStreamTrack::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  MediaStreamTrack* impl = V8MediaStreamTrack::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MediaTrackConstraints* constraints;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('constraints') is not an object.");
    return;
  }
  constraints = NativeValueTraits<MediaTrackConstraints>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->applyConstraints(script_state, constraints);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace media_stream_track_v8_internal

void V8MediaStreamTrack::KindAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_kind_Getter");

  media_stream_track_v8_internal::KindAttributeGetter(info);
}

void V8MediaStreamTrack::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_id_Getter");

  media_stream_track_v8_internal::IdAttributeGetter(info);
}

void V8MediaStreamTrack::LabelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_label_Getter");

  media_stream_track_v8_internal::LabelAttributeGetter(info);
}

void V8MediaStreamTrack::EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_enabled_Getter");

  media_stream_track_v8_internal::EnabledAttributeGetter(info);
}

void V8MediaStreamTrack::EnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_enabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_track_v8_internal::EnabledAttributeSetter(v8_value, info);
}

void V8MediaStreamTrack::MutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_muted_Getter");

  media_stream_track_v8_internal::MutedAttributeGetter(info);
}

void V8MediaStreamTrack::OnmuteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onmute_Getter");

  media_stream_track_v8_internal::OnmuteAttributeGetter(info);
}

void V8MediaStreamTrack::OnmuteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onmute_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_track_v8_internal::OnmuteAttributeSetter(v8_value, info);
}

void V8MediaStreamTrack::OnunmuteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onunmute_Getter");

  media_stream_track_v8_internal::OnunmuteAttributeGetter(info);
}

void V8MediaStreamTrack::OnunmuteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onunmute_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_track_v8_internal::OnunmuteAttributeSetter(v8_value, info);
}

void V8MediaStreamTrack::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_readyState_Getter");

  media_stream_track_v8_internal::ReadyStateAttributeGetter(info);
}

void V8MediaStreamTrack::OnendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onended_Getter");

  media_stream_track_v8_internal::OnendedAttributeGetter(info);
}

void V8MediaStreamTrack::OnendedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_onended_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_track_v8_internal::OnendedAttributeSetter(v8_value, info);
}

void V8MediaStreamTrack::ContentHintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_contentHint_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MediaStreamTrack_ContentHint_AttributeGetter);

  media_stream_track_v8_internal::ContentHintAttributeGetter(info);
}

void V8MediaStreamTrack::ContentHintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_contentHint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8MediaStreamTrack_ContentHint_AttributeSetter);

  media_stream_track_v8_internal::ContentHintAttributeSetter(v8_value, info);
}

void V8MediaStreamTrack::CloneMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_clone");

  media_stream_track_v8_internal::CloneMethod(info);
}

void V8MediaStreamTrack::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_stop");

  media_stream_track_v8_internal::StopMethod(info);
}

void V8MediaStreamTrack::GetCapabilitiesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_getCapabilities");

  media_stream_track_v8_internal::GetCapabilitiesMethod(info);
}

void V8MediaStreamTrack::GetConstraintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_getConstraints");

  media_stream_track_v8_internal::GetConstraintsMethod(info);
}

void V8MediaStreamTrack::GetSettingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_getSettings");

  media_stream_track_v8_internal::GetSettingsMethod(info);
}

void V8MediaStreamTrack::ApplyConstraintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStreamTrack_applyConstraints");

  media_stream_track_v8_internal::ApplyConstraintsMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MediaStreamTrackAccessors[] = {
    { "kind", V8MediaStreamTrack::KindAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "id", V8MediaStreamTrack::IdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "label", V8MediaStreamTrack::LabelAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "enabled", V8MediaStreamTrack::EnabledAttributeGetterCallback, V8MediaStreamTrack::EnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "muted", V8MediaStreamTrack::MutedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmute", V8MediaStreamTrack::OnmuteAttributeGetterCallback, V8MediaStreamTrack::OnmuteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunmute", V8MediaStreamTrack::OnunmuteAttributeGetterCallback, V8MediaStreamTrack::OnunmuteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8MediaStreamTrack::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onended", V8MediaStreamTrack::OnendedAttributeGetterCallback, V8MediaStreamTrack::OnendedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8MediaStreamTrackMethods[] = {
    {"clone", V8MediaStreamTrack::CloneMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8MediaStreamTrack::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCapabilities", V8MediaStreamTrack::GetCapabilitiesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getConstraints", V8MediaStreamTrack::GetConstraintsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSettings", V8MediaStreamTrack::GetSettingsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"applyConstraints", V8MediaStreamTrack::ApplyConstraintsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MediaStreamTrackTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MediaStreamTrack::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8MediaStreamTrack::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaStreamTrackAccessors, base::size(kV8MediaStreamTrackAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaStreamTrackMethods, base::size(kV8MediaStreamTrackMethods));

  // Custom signature

  V8MediaStreamTrack::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MediaStreamTrack::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::MediaStreamTrackContentHintEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "contentHint", V8MediaStreamTrack::ContentHintAttributeGetterCallback, V8MediaStreamTrack::ContentHintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8MediaStreamTrack::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MediaStreamTrack::GetWrapperTypeInfo()),
      InstallV8MediaStreamTrackTemplate);
}

bool V8MediaStreamTrack::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MediaStreamTrack::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MediaStreamTrack::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MediaStreamTrack::GetWrapperTypeInfo(), v8_value);
}

MediaStreamTrack* V8MediaStreamTrack::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MediaStreamTrack* NativeValueTraits<MediaStreamTrack>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaStreamTrack* native_value = V8MediaStreamTrack::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MediaStreamTrack"));
  }
  return native_value;
}

}  // namespace blink
