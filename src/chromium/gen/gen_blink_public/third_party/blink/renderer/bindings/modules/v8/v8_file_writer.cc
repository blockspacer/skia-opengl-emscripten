// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_writer.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
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
const WrapperTypeInfo v8_file_writer_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8FileWriter::DomTemplate,
    nullptr,
    "FileWriter",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FileWriter.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& FileWriter::wrapper_type_info_ = v8_file_writer_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, FileWriter>::value,
    "FileWriter does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&FileWriter::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "FileWriter is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace file_writer_v8_internal {

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getReadyState());
}

static void ErrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  DOMException* cpp_value(WTF::GetPtr(impl->error()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#FileWriter#error")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PositionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->position()));
}

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->length()));
}

static void OnwritestartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onwritestart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwritestartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnwritestart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onprogress()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnprogressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnprogress(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwriteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onwrite()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwriteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnwrite(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onabort()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnabort(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnwriteendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onwriteend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwriteendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  FileWriter* impl = V8FileWriter::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnwriteend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void WriteMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "FileWriter", "write");

  FileWriter* impl = V8FileWriter::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Blob* data;
  data = V8Blob::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Blob'.");
    return;
  }

  impl->write(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SeekMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "FileWriter", "seek");

  FileWriter* impl = V8FileWriter::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int64_t position;
  position = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->seek(position, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TruncateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "FileWriter", "truncate");

  FileWriter* impl = V8FileWriter::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int64_t size;
  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->truncate(size, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "FileWriter", "abort");

  FileWriter* impl = V8FileWriter::ToImpl(info.Holder());

  impl->abort(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace file_writer_v8_internal

void V8FileWriter::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_readyState_Getter");

  file_writer_v8_internal::ReadyStateAttributeGetter(info);
}

void V8FileWriter::ErrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_error_Getter");

  file_writer_v8_internal::ErrorAttributeGetter(info);
}

void V8FileWriter::PositionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_position_Getter");

  file_writer_v8_internal::PositionAttributeGetter(info);
}

void V8FileWriter::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_length_Getter");

  file_writer_v8_internal::LengthAttributeGetter(info);
}

void V8FileWriter::OnwritestartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwritestart_Getter");

  file_writer_v8_internal::OnwritestartAttributeGetter(info);
}

void V8FileWriter::OnwritestartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwritestart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnwritestartAttributeSetter(v8_value, info);
}

void V8FileWriter::OnprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onprogress_Getter");

  file_writer_v8_internal::OnprogressAttributeGetter(info);
}

void V8FileWriter::OnprogressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onprogress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnprogressAttributeSetter(v8_value, info);
}

void V8FileWriter::OnwriteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwrite_Getter");

  file_writer_v8_internal::OnwriteAttributeGetter(info);
}

void V8FileWriter::OnwriteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwrite_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnwriteAttributeSetter(v8_value, info);
}

void V8FileWriter::OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onabort_Getter");

  file_writer_v8_internal::OnabortAttributeGetter(info);
}

void V8FileWriter::OnabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnabortAttributeSetter(v8_value, info);
}

void V8FileWriter::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onerror_Getter");

  file_writer_v8_internal::OnerrorAttributeGetter(info);
}

void V8FileWriter::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8FileWriter::OnwriteendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwriteend_Getter");

  file_writer_v8_internal::OnwriteendAttributeGetter(info);
}

void V8FileWriter::OnwriteendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_onwriteend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  file_writer_v8_internal::OnwriteendAttributeSetter(v8_value, info);
}

void V8FileWriter::WriteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_write");

  file_writer_v8_internal::WriteMethod(info);
}

void V8FileWriter::SeekMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_seek");

  file_writer_v8_internal::SeekMethod(info);
}

void V8FileWriter::TruncateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_truncate");

  file_writer_v8_internal::TruncateMethod(info);
}

void V8FileWriter::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FileWriter_abort");

  file_writer_v8_internal::AbortMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8FileWriterAccessors[] = {
    { "readyState", V8FileWriter::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "error", V8FileWriter::ErrorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "position", V8FileWriter::PositionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "length", V8FileWriter::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwritestart", V8FileWriter::OnwritestartAttributeGetterCallback, V8FileWriter::OnwritestartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8FileWriter::OnprogressAttributeGetterCallback, V8FileWriter::OnprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwrite", V8FileWriter::OnwriteAttributeGetterCallback, V8FileWriter::OnwriteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8FileWriter::OnabortAttributeGetterCallback, V8FileWriter::OnabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8FileWriter::OnerrorAttributeGetterCallback, V8FileWriter::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwriteend", V8FileWriter::OnwriteendAttributeGetterCallback, V8FileWriter::OnwriteendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8FileWriterMethods[] = {
    {"write", V8FileWriter::WriteMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"seek", V8FileWriter::SeekMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"truncate", V8FileWriter::TruncateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"abort", V8FileWriter::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8FileWriterTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8FileWriter::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8FileWriter::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"INIT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"WRITING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"DONE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == FileWriter::kInit, "the value of FileWriter_kInit does not match with implementation");
  static_assert(1 == FileWriter::kWriting, "the value of FileWriter_kWriting does not match with implementation");
  static_assert(2 == FileWriter::kDone, "the value of FileWriter_kDone does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8FileWriterAccessors, base::size(kV8FileWriterAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8FileWriterMethods, base::size(kV8FileWriterMethods));

  // Custom signature

  V8FileWriter::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8FileWriter::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8FileWriter::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8FileWriter::GetWrapperTypeInfo()),
      InstallV8FileWriterTemplate);
}

bool V8FileWriter::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8FileWriter::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8FileWriter::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8FileWriter::GetWrapperTypeInfo(), v8_value);
}

FileWriter* V8FileWriter::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

FileWriter* NativeValueTraits<FileWriter>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FileWriter* native_value = V8FileWriter::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "FileWriter"));
  }
  return native_value;
}

}  // namespace blink
