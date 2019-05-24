// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_reader.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_readable_stream_default_reader_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ReadableStreamDefaultReader::DomTemplate,
    nullptr,
    "ReadableStreamDefaultReader",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ReadableStreamDefaultReader.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ReadableStreamDefaultReader::wrapper_type_info_ = v8_readable_stream_default_reader_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ReadableStreamDefaultReader>::value,
    "ReadableStreamDefaultReader inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ReadableStreamDefaultReader::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ReadableStreamDefaultReader is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace readable_stream_default_reader_v8_internal {

static void ClosedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // This attribute returns a Promise.
  // Per https://heycam.github.io/webidl/#dfn-attribute-getter, all exceptions
  // must be turned into a Promise rejection.
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "ReadableStreamDefaultReader", "closed");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // Returning a Promise type requires us to disable some of V8's type checks,
  // so we have to manually check that info.Holder() really points to an
  // instance of the type.
  if (!V8ReadableStreamDefaultReader::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }

  v8::Local<v8::Object> holder = info.Holder();

  ReadableStreamDefaultReader* impl = V8ReadableStreamDefaultReader::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8SetReturnValue(info, impl->closed(script_state).V8Value());
}

static void CancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ReadableStreamDefaultReader", "cancel");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ReadableStreamDefaultReader::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ReadableStreamDefaultReader* impl = V8ReadableStreamDefaultReader::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue reason;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptPromise result = impl->cancel(script_state);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  reason = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->cancel(script_state, reason);
  V8SetReturnValue(info, result.V8Value());
}

static void ReadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ReadableStreamDefaultReader", "read");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ReadableStreamDefaultReader::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ReadableStreamDefaultReader* impl = V8ReadableStreamDefaultReader::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->read(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void ReleaseLockMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ReadableStreamDefaultReader", "releaseLock");

  ReadableStreamDefaultReader* impl = V8ReadableStreamDefaultReader::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->releaseLock(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "ReadableStreamDefaultReader");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ReadableStream* stream;
  stream = V8ReadableStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ReadableStream'.");
    return;
  }

  ReadableStreamDefaultReader* impl = ReadableStreamDefaultReader::Create(script_state, stream, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8ReadableStreamDefaultReader::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("ReadableStreamDefaultReader"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  readable_stream_default_reader_v8_internal::Constructor(info);
}

}  // namespace readable_stream_default_reader_v8_internal

void V8ReadableStreamDefaultReader::ClosedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_closed_Getter");

  readable_stream_default_reader_v8_internal::ClosedAttributeGetter(info);
}

void V8ReadableStreamDefaultReader::CancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_cancel");

  readable_stream_default_reader_v8_internal::CancelMethod(info);
}

void V8ReadableStreamDefaultReader::ReadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_read");

  readable_stream_default_reader_v8_internal::ReadMethod(info);
}

void V8ReadableStreamDefaultReader::ReleaseLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultReader_releaseLock");

  readable_stream_default_reader_v8_internal::ReleaseLockMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ReadableStreamDefaultReaderAccessors[] = {
    { "closed", V8ReadableStreamDefaultReader::ClosedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ReadableStreamDefaultReaderMethods[] = {
    {"cancel", V8ReadableStreamDefaultReader::CancelMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"read", V8ReadableStreamDefaultReader::ReadMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"releaseLock", V8ReadableStreamDefaultReader::ReleaseLockMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ReadableStreamDefaultReaderTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ReadableStreamDefaultReader::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ReadableStreamDefaultReader::kInternalFieldCount);
  interface_template->SetCallHandler(readable_stream_default_reader_v8_internal::ConstructorCallback);
  interface_template->SetLength(1);

  if (!RuntimeEnabledFeatures::StreamsNativeEnabled()) {
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
      signature, kV8ReadableStreamDefaultReaderAccessors, base::size(kV8ReadableStreamDefaultReaderAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ReadableStreamDefaultReaderMethods, base::size(kV8ReadableStreamDefaultReaderMethods));

  // Custom signature

  V8ReadableStreamDefaultReader::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ReadableStreamDefaultReader::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::StreamsNativeEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8ReadableStreamDefaultReader::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ReadableStreamDefaultReader::GetWrapperTypeInfo()),
      InstallV8ReadableStreamDefaultReaderTemplate);
}

bool V8ReadableStreamDefaultReader::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ReadableStreamDefaultReader::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ReadableStreamDefaultReader::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ReadableStreamDefaultReader::GetWrapperTypeInfo(), v8_value);
}

ReadableStreamDefaultReader* V8ReadableStreamDefaultReader::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ReadableStreamDefaultReader* NativeValueTraits<ReadableStreamDefaultReader>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ReadableStreamDefaultReader* native_value = V8ReadableStreamDefaultReader::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ReadableStreamDefaultReader"));
  }
  return native_value;
}

}  // namespace blink
