// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_media_stream_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MediaStream::DomTemplate,
    nullptr,
    "MediaStream",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaStream.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MediaStream::wrapper_type_info_ = v8_media_stream_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MediaStream>::value,
    "MediaStream does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MediaStream::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MediaStream is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace media_stream_v8_internal {

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void ActiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  V8SetReturnValueBool(info, impl->active());
}

static void OnaddtrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaddtrack()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaddtrackAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaddtrack(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnremovetrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onremovetrack()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnremovetrackAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnremovetrack(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnactiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onactive()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnactiveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnactive(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninactiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oninactive()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninactiveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaStream* impl = V8MediaStream::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOninactive(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void GetAudioTracksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getAudioTracks(), info.Holder(), info.GetIsolate()));
}

static void GetVideoTracksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getVideoTracks(), info.Holder(), info.GetIsolate()));
}

static void GetTracksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getTracks(), info.Holder(), info.GetIsolate()));
}

static void GetTrackByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getTrackById", "MediaStream", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> track_id;
  track_id = info[0];
  if (!track_id.Prepare())
    return;

  V8SetReturnValue(info, impl->getTrackById(track_id));
}

static void AddTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaStream", "addTrack");

  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  impl->addTrack(track, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaStream", "removeTrack");

  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  impl->removeTrack(track, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CloneMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MediaStream* impl = V8MediaStream::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  MediaStream* result = impl->clone(script_state);
  V8SetReturnValue(info, result);
}

static void Constructor1(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_ConstructorCallback");

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MediaStream* impl = MediaStream::Create(execution_context);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8MediaStream::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor2(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_ConstructorCallback");

  MediaStream* stream;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToConstruct("MediaStream", "parameter 1 is not of type 'MediaStream'."));
    return;
  }

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MediaStream* impl = MediaStream::Create(execution_context, stream);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8MediaStream::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor3(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "MediaStream");

  HeapVector<Member<MediaStreamTrack>> tracks;
  tracks = NativeValueTraits<IDLSequence<MediaStreamTrack>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MediaStream* impl = MediaStream::Create(execution_context, tracks);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8MediaStream::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "MediaStream");
  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        media_stream_v8_internal::Constructor1(info);
        return;
      }
      break;
    case 1:
      if (V8MediaStream::HasInstance(info[0], info.GetIsolate())) {
        media_stream_v8_internal::Constructor2(info);
        return;
      }
      if (info[0]->IsArray()) {
        media_stream_v8_internal::Constructor3(info);
        return;
      }
      if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exception_state)) {
        media_stream_v8_internal::Constructor3(info);
        return;
      }
      if (exception_state.HadException()) {
        exception_state.RethrowV8Exception(exception_state.GetException());
        return;
      }
      break;
    default:
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(0, info.Length()));
      return;
  }
  exception_state.ThrowTypeError("No matching constructor signature.");
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("MediaStream"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  media_stream_v8_internal::Constructor(info);
}

}  // namespace media_stream_v8_internal

void V8MediaStream::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_id_Getter");

  media_stream_v8_internal::IdAttributeGetter(info);
}

void V8MediaStream::ActiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_active_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8MediaStream_Active_AttributeGetter);

  media_stream_v8_internal::ActiveAttributeGetter(info);
}

void V8MediaStream::OnaddtrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onaddtrack_Getter");

  media_stream_v8_internal::OnaddtrackAttributeGetter(info);
}

void V8MediaStream::OnaddtrackAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onaddtrack_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_v8_internal::OnaddtrackAttributeSetter(v8_value, info);
}

void V8MediaStream::OnremovetrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onremovetrack_Getter");

  media_stream_v8_internal::OnremovetrackAttributeGetter(info);
}

void V8MediaStream::OnremovetrackAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onremovetrack_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_v8_internal::OnremovetrackAttributeSetter(v8_value, info);
}

void V8MediaStream::OnactiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onactive_Getter");

  media_stream_v8_internal::OnactiveAttributeGetter(info);
}

void V8MediaStream::OnactiveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_onactive_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_v8_internal::OnactiveAttributeSetter(v8_value, info);
}

void V8MediaStream::OninactiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_oninactive_Getter");

  media_stream_v8_internal::OninactiveAttributeGetter(info);
}

void V8MediaStream::OninactiveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_oninactive_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_stream_v8_internal::OninactiveAttributeSetter(v8_value, info);
}

void V8MediaStream::GetAudioTracksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_getAudioTracks");

  media_stream_v8_internal::GetAudioTracksMethod(info);
}

void V8MediaStream::GetVideoTracksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_getVideoTracks");

  media_stream_v8_internal::GetVideoTracksMethod(info);
}

void V8MediaStream::GetTracksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_getTracks");

  media_stream_v8_internal::GetTracksMethod(info);
}

void V8MediaStream::GetTrackByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_getTrackById");

  media_stream_v8_internal::GetTrackByIdMethod(info);
}

void V8MediaStream::AddTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_addTrack");

  media_stream_v8_internal::AddTrackMethod(info);
}

void V8MediaStream::RemoveTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_removeTrack");

  media_stream_v8_internal::RemoveTrackMethod(info);
}

void V8MediaStream::CloneMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaStream_clone");

  media_stream_v8_internal::CloneMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MediaStreamAccessors[] = {
    { "id", V8MediaStream::IdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "active", V8MediaStream::ActiveAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaddtrack", V8MediaStream::OnaddtrackAttributeGetterCallback, V8MediaStream::OnaddtrackAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onremovetrack", V8MediaStream::OnremovetrackAttributeGetterCallback, V8MediaStream::OnremovetrackAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onactive", V8MediaStream::OnactiveAttributeGetterCallback, V8MediaStream::OnactiveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninactive", V8MediaStream::OninactiveAttributeGetterCallback, V8MediaStream::OninactiveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8MediaStreamMethods[] = {
    {"getAudioTracks", V8MediaStream::GetAudioTracksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVideoTracks", V8MediaStream::GetVideoTracksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTracks", V8MediaStream::GetTracksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTrackById", V8MediaStream::GetTrackByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTrack", V8MediaStream::AddTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeTrack", V8MediaStream::RemoveTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clone", V8MediaStream::CloneMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MediaStreamTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MediaStream::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8MediaStream::kInternalFieldCount);
  interface_template->SetCallHandler(media_stream_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaStreamAccessors, base::size(kV8MediaStreamAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaStreamMethods, base::size(kV8MediaStreamMethods));

  // Custom signature

  V8MediaStream::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MediaStream::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MediaStream::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MediaStream::GetWrapperTypeInfo()),
      InstallV8MediaStreamTemplate);
}

bool V8MediaStream::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MediaStream::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MediaStream::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MediaStream::GetWrapperTypeInfo(), v8_value);
}

MediaStream* V8MediaStream::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MediaStream* NativeValueTraits<MediaStream>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaStream* native_value = V8MediaStream::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MediaStream"));
  }
  return native_value;
}

}  // namespace blink
