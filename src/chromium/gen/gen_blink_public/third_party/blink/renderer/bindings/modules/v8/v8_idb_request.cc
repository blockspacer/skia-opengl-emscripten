// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_transaction.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_idb_request_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8IDBRequest::DomTemplate,
    nullptr,
    "IDBRequest",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& IDBRequest::wrapper_type_info_ = v8_idb_request_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, IDBRequest>::value,
    "IDBRequest does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&IDBRequest::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "IDBRequest is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace idb_request_v8_internal {

static void ResultAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "IDBRequest#Result");
  if (!static_cast<const IDBRequest*>(impl)->isResultDirty()) {
    v8::Local<v8::Value> v8_value;
    if (property_symbol.GetOrUndefined(holder).ToLocal(&v8_value) && !v8_value->IsUndefined()) {
      V8SetReturnValue(info, v8_value);
      return;
    }
  }

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "IDBRequest", "result");

  ScriptValue cpp_value(impl->result(script_state, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // [CachedAttribute]
  v8::Local<v8::Value> v8_value(cpp_value.V8Value());
  property_symbol.Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ErrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "IDBRequest", "error");

  DOMException* cpp_value(impl->error(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBRequest#error")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SourceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  IDBObjectStoreOrIDBIndexOrIDBCursor result;
  impl->source(script_state, result);

  V8SetReturnValue(info, result);
}

static void TransactionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  IDBTransaction* cpp_value(WTF::GetPtr(impl->transaction()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBRequest#transaction")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void OnsuccessAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsuccess()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsuccessAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsuccess(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  IDBRequest* impl = V8IDBRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

}  // namespace idb_request_v8_internal

void V8IDBRequest::ResultAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_result_Getter");

  idb_request_v8_internal::ResultAttributeGetter(info);
}

void V8IDBRequest::ErrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_error_Getter");

  idb_request_v8_internal::ErrorAttributeGetter(info);
}

void V8IDBRequest::SourceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_source_Getter");

  idb_request_v8_internal::SourceAttributeGetter(info);
}

void V8IDBRequest::TransactionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_transaction_Getter");

  idb_request_v8_internal::TransactionAttributeGetter(info);
}

void V8IDBRequest::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_readyState_Getter");

  idb_request_v8_internal::ReadyStateAttributeGetter(info);
}

void V8IDBRequest::OnsuccessAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_onsuccess_Getter");

  idb_request_v8_internal::OnsuccessAttributeGetter(info);
}

void V8IDBRequest::OnsuccessAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_onsuccess_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_request_v8_internal::OnsuccessAttributeSetter(v8_value, info);
}

void V8IDBRequest::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_onerror_Getter");

  idb_request_v8_internal::OnerrorAttributeGetter(info);
}

void V8IDBRequest::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBRequest_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  idb_request_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8IDBRequestAccessors[] = {
    { "result", V8IDBRequest::ResultAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "error", V8IDBRequest::ErrorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "source", V8IDBRequest::SourceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "transaction", V8IDBRequest::TransactionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8IDBRequest::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsuccess", V8IDBRequest::OnsuccessAttributeGetterCallback, V8IDBRequest::OnsuccessAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8IDBRequest::OnerrorAttributeGetterCallback, V8IDBRequest::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8IDBRequestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8IDBRequest::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8IDBRequest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBRequestAccessors, base::size(kV8IDBRequestAccessors));

  // Custom signature

  V8IDBRequest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8IDBRequest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8IDBRequest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8IDBRequest::GetWrapperTypeInfo()),
      InstallV8IDBRequestTemplate);
}

bool V8IDBRequest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8IDBRequest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8IDBRequest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8IDBRequest::GetWrapperTypeInfo(), v8_value);
}

IDBRequest* V8IDBRequest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

IDBRequest* NativeValueTraits<IDBRequest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBRequest* native_value = V8IDBRequest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "IDBRequest"));
  }
  return native_value;
}

}  // namespace blink
