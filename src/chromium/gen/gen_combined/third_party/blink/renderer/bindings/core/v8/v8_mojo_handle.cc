// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_shared_buffer_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_discard_data_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_duplicate_buffer_handle_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle_signals.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_map_buffer_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_data_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_data_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_message_flags.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_read_message_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watch_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_watcher.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_write_data_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_write_data_result.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo v8_mojo_handle_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MojoHandle::DomTemplate,
    nullptr,
    "MojoHandle",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MojoHandle.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MojoHandle::wrapper_type_info_ = v8_mojo_handle_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, MojoHandle>::value,
    "MojoHandle inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&MojoHandle::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MojoHandle is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace mojo_handle_v8_internal {

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  impl->close();
}

static void WatchMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "watch");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  MojoHandleSignals* signals;
  V8MojoWatchCallback* callback;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('signals') is not an object.");
    return;
  }
  signals = NativeValueTraits<MojoHandleSignals>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    callback = V8MojoWatchCallback::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  MojoWatcher* result = impl->watch(script_state, signals, callback);
  V8SetReturnValue(info, result);
}

static void WriteMessageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "writeMessage");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  ArrayBufferOrArrayBufferView buffer;
  HeapVector<Member<MojoHandle>> handles;
  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[0], buffer, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  handles = NativeValueTraits<IDLSequence<MojoHandle>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->writeMessage(buffer, handles));
}

static void ReadMessageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "readMessage");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  MojoReadMessageFlags* flags;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('flags') is not an object.");
    return;
  }
  flags = NativeValueTraits<MojoReadMessageFlags>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  MojoReadMessageResult* result = impl->readMessage(flags);
  V8SetReturnValue(info, result);
}

static void WriteDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "writeData");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ArrayBufferOrArrayBufferView buffer;
  MojoWriteDataOptions* options;
  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[0], buffer, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MojoWriteDataOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  MojoWriteDataResult* result = impl->writeData(buffer, options);
  V8SetReturnValue(info, result);
}

static void QueryDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  MojoReadDataResult* result = impl->queryData();
  V8SetReturnValue(info, result);
}

static void DiscardDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "discardData");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t num_bytes;
  MojoDiscardDataOptions* options;
  num_bytes = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MojoDiscardDataOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  MojoReadDataResult* result = impl->discardData(num_bytes, options);
  V8SetReturnValue(info, result);
}

static void ReadDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "readData");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ArrayBufferOrArrayBufferView buffer;
  MojoReadDataOptions* options;
  V8ArrayBufferOrArrayBufferView::ToImpl(info.GetIsolate(), info[0], buffer, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MojoReadDataOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  MojoReadDataResult* result = impl->readData(buffer, options);
  V8SetReturnValue(info, result);
}

static void MapBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "mapBuffer");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t offset;
  uint32_t num_bytes;
  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  num_bytes = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  MojoMapBufferResult* result = impl->mapBuffer(offset, num_bytes);
  V8SetReturnValue(info, result);
}

static void DuplicateBufferHandleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MojoHandle", "duplicateBufferHandle");

  MojoHandle* impl = V8MojoHandle::ToImpl(info.Holder());

  MojoDuplicateBufferHandleOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MojoDuplicateBufferHandleOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  MojoCreateSharedBufferResult* result = impl->duplicateBufferHandle(options);
  V8SetReturnValue(info, result);
}

}  // namespace mojo_handle_v8_internal

void V8MojoHandle::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_close");

  mojo_handle_v8_internal::CloseMethod(info);
}

void V8MojoHandle::WatchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_watch");

  mojo_handle_v8_internal::WatchMethod(info);
}

void V8MojoHandle::WriteMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_writeMessage");

  mojo_handle_v8_internal::WriteMessageMethod(info);
}

void V8MojoHandle::ReadMessageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_readMessage");

  mojo_handle_v8_internal::ReadMessageMethod(info);
}

void V8MojoHandle::WriteDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_writeData");

  mojo_handle_v8_internal::WriteDataMethod(info);
}

void V8MojoHandle::QueryDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_queryData");

  mojo_handle_v8_internal::QueryDataMethod(info);
}

void V8MojoHandle::DiscardDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_discardData");

  mojo_handle_v8_internal::DiscardDataMethod(info);
}

void V8MojoHandle::ReadDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_readData");

  mojo_handle_v8_internal::ReadDataMethod(info);
}

void V8MojoHandle::MapBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_mapBuffer");

  mojo_handle_v8_internal::MapBufferMethod(info);
}

void V8MojoHandle::DuplicateBufferHandleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MojoHandle_duplicateBufferHandle");

  mojo_handle_v8_internal::DuplicateBufferHandleMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8MojoHandleMethods[] = {
    {"close", V8MojoHandle::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"watch", V8MojoHandle::WatchMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"writeMessage", V8MojoHandle::WriteMessageMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readMessage", V8MojoHandle::ReadMessageMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"writeData", V8MojoHandle::WriteDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryData", V8MojoHandle::QueryDataMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"discardData", V8MojoHandle::DiscardDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readData", V8MojoHandle::ReadDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mapBuffer", V8MojoHandle::MapBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"duplicateBufferHandle", V8MojoHandle::DuplicateBufferHandleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MojoHandleTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MojoHandle::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8MojoHandle::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MojoHandleMethods, base::size(kV8MojoHandleMethods));

  // Custom signature

  V8MojoHandle::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MojoHandle::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MojoHandle::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MojoHandle::GetWrapperTypeInfo()),
      InstallV8MojoHandleTemplate);
}

bool V8MojoHandle::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MojoHandle::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MojoHandle::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MojoHandle::GetWrapperTypeInfo(), v8_value);
}

MojoHandle* V8MojoHandle::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MojoHandle* NativeValueTraits<MojoHandle>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MojoHandle* native_value = V8MojoHandle::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MojoHandle"));
  }
  return native_value;
}

}  // namespace blink
