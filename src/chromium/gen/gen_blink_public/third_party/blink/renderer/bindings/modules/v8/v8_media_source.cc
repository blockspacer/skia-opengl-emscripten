// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_source.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_media_source_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MediaSource::DomTemplate,
    nullptr,
    "MediaSource",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaSource.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MediaSource::wrapper_type_info_ = v8_media_source_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MediaSource>::value,
    "MediaSource does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MediaSource::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MediaSource is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace media_source_v8_internal {

static void SourceBuffersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  SourceBufferList* cpp_value(WTF::GetPtr(impl->sourceBuffers()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#MediaSource#sourceBuffers")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ActiveSourceBuffersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  SourceBufferList* cpp_value(WTF::GetPtr(impl->activeSourceBuffers()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#MediaSource#activeSourceBuffers")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void DurationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  V8SetReturnValue(info, impl->duration());
}

static void DurationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "MediaSource", "duration");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDuration(cpp_value, exception_state);
}

static void OnsourceopenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsourceopen()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsourceopenAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsourceopen(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsourceendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsourceended()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsourceendedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsourceended(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsourcecloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsourceclose()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsourcecloseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsourceclose(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  MediaSource* impl = V8MediaSource::ToImpl(holder);

  V8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void AddSourceBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSource", "addSourceBuffer");

  MediaSource* impl = V8MediaSource::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  SourceBuffer* result = impl->addSourceBuffer(type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void RemoveSourceBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSource", "removeSourceBuffer");

  MediaSource* impl = V8MediaSource::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SourceBuffer* buffer;
  buffer = V8SourceBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SourceBuffer'.");
    return;
  }

  impl->removeSourceBuffer(buffer, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EndOfStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSource", "endOfStream");

  MediaSource* impl = V8MediaSource::ToImpl(info.Holder());

  V8StringResource<> error;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->endOfStream(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  error = info[0];
  if (!error.Prepare())
    return;
  const char* kValidErrorValues[] = {
      "network",
      "decode",
  };
  if (!IsValidEnum(error, kValidErrorValues, base::size(kValidErrorValues), "EndOfStreamError", exception_state)) {
    return;
  }

  impl->endOfStream(error, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetLiveSeekableRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSource", "setLiveSeekableRange");

  MediaSource* impl = V8MediaSource::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double start;
  double end;
  start = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  end = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setLiveSeekableRange(start, end, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ClearLiveSeekableRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MediaSource", "clearLiveSeekableRange");

  MediaSource* impl = V8MediaSource::ToImpl(info.Holder());

  impl->clearLiveSeekableRange(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void IsTypeSupportedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTypeSupported", "MediaSource", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  V8SetReturnValueBool(info, MediaSource::isTypeSupported(type));
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_ConstructorCallback");

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  MediaSource* impl = MediaSource::Create(execution_context);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8MediaSource::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("MediaSource"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  media_source_v8_internal::Constructor(info);
}

}  // namespace media_source_v8_internal

void V8MediaSource::SourceBuffersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_sourceBuffers_Getter");

  media_source_v8_internal::SourceBuffersAttributeGetter(info);
}

void V8MediaSource::ActiveSourceBuffersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_activeSourceBuffers_Getter");

  media_source_v8_internal::ActiveSourceBuffersAttributeGetter(info);
}

void V8MediaSource::DurationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_duration_Getter");

  media_source_v8_internal::DurationAttributeGetter(info);
}

void V8MediaSource::DurationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_duration_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_source_v8_internal::DurationAttributeSetter(v8_value, info);
}

void V8MediaSource::OnsourceopenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceopen_Getter");

  media_source_v8_internal::OnsourceopenAttributeGetter(info);
}

void V8MediaSource::OnsourceopenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceopen_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_source_v8_internal::OnsourceopenAttributeSetter(v8_value, info);
}

void V8MediaSource::OnsourceendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceended_Getter");

  media_source_v8_internal::OnsourceendedAttributeGetter(info);
}

void V8MediaSource::OnsourceendedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceended_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_source_v8_internal::OnsourceendedAttributeSetter(v8_value, info);
}

void V8MediaSource::OnsourcecloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceclose_Getter");

  media_source_v8_internal::OnsourcecloseAttributeGetter(info);
}

void V8MediaSource::OnsourcecloseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_onsourceclose_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  media_source_v8_internal::OnsourcecloseAttributeSetter(v8_value, info);
}

void V8MediaSource::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_readyState_Getter");

  media_source_v8_internal::ReadyStateAttributeGetter(info);
}

void V8MediaSource::AddSourceBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_addSourceBuffer");

  media_source_v8_internal::AddSourceBufferMethod(info);
}

void V8MediaSource::RemoveSourceBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_removeSourceBuffer");

  media_source_v8_internal::RemoveSourceBufferMethod(info);
}

void V8MediaSource::EndOfStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_endOfStream");

  media_source_v8_internal::EndOfStreamMethod(info);
}

void V8MediaSource::SetLiveSeekableRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_setLiveSeekableRange");

  media_source_v8_internal::SetLiveSeekableRangeMethod(info);
}

void V8MediaSource::ClearLiveSeekableRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_clearLiveSeekableRange");

  media_source_v8_internal::ClearLiveSeekableRangeMethod(info);
}

void V8MediaSource::IsTypeSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MediaSource_isTypeSupported");

  media_source_v8_internal::IsTypeSupportedMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8MediaSourceAccessors[] = {
    { "sourceBuffers", V8MediaSource::SourceBuffersAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "activeSourceBuffers", V8MediaSource::ActiveSourceBuffersAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "duration", V8MediaSource::DurationAttributeGetterCallback, V8MediaSource::DurationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsourceopen", V8MediaSource::OnsourceopenAttributeGetterCallback, V8MediaSource::OnsourceopenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsourceended", V8MediaSource::OnsourceendedAttributeGetterCallback, V8MediaSource::OnsourceendedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsourceclose", V8MediaSource::OnsourcecloseAttributeGetterCallback, V8MediaSource::OnsourcecloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8MediaSource::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8MediaSourceMethods[] = {
    {"addSourceBuffer", V8MediaSource::AddSourceBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeSourceBuffer", V8MediaSource::RemoveSourceBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endOfStream", V8MediaSource::EndOfStreamMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLiveSeekableRange", V8MediaSource::SetLiveSeekableRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearLiveSeekableRange", V8MediaSource::ClearLiveSeekableRangeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTypeSupported", V8MediaSource::IsTypeSupportedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MediaSourceTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MediaSource::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8MediaSource::kInternalFieldCount);
  interface_template->SetCallHandler(media_source_v8_internal::ConstructorCallback);
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
      signature, kV8MediaSourceAccessors, base::size(kV8MediaSourceAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MediaSourceMethods, base::size(kV8MediaSourceMethods));

  // Custom signature

  V8MediaSource::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MediaSource::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MediaSource::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MediaSource::GetWrapperTypeInfo()),
      InstallV8MediaSourceTemplate);
}

bool V8MediaSource::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MediaSource::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MediaSource::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MediaSource::GetWrapperTypeInfo(), v8_value);
}

MediaSource* V8MediaSource::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MediaSource* NativeValueTraits<MediaSource>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaSource* native_value = V8MediaSource::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MediaSource"));
  }
  return native_value;
}

}  // namespace blink
