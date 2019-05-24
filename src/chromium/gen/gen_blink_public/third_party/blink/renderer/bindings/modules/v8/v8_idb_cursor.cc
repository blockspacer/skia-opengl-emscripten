// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_cursor.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_index.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_object_store.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_idb_request.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_idb_cursor_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8IDBCursor::DomTemplate,
    nullptr,
    "IDBCursor",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in IDBCursor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& IDBCursor::wrapper_type_info_ = v8_idb_cursor_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, IDBCursor>::value,
    "IDBCursor inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&IDBCursor::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "IDBCursor is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace idb_cursor_v8_internal {

static void SourceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBCursor* impl = V8IDBCursor::ToImpl(holder);

  IDBObjectStoreOrIDBIndex result;
  impl->source(result);

  V8SetReturnValue(info, result);
}

static void DirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBCursor* impl = V8IDBCursor::ToImpl(holder);

  V8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void KeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBCursor* impl = V8IDBCursor::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "IDBCursor#Key");
  if (!static_cast<const IDBCursor*>(impl)->isKeyDirty()) {
    v8::Local<v8::Value> v8_value;
    if (property_symbol.GetOrUndefined(holder).ToLocal(&v8_value) && !v8_value->IsUndefined()) {
      V8SetReturnValue(info, v8_value);
      return;
    }
  }

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue cpp_value(impl->key(script_state));

  // [CachedAttribute]
  v8::Local<v8::Value> v8_value(cpp_value.V8Value());
  property_symbol.Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PrimaryKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBCursor* impl = V8IDBCursor::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "IDBCursor#PrimaryKey");
  if (!static_cast<const IDBCursor*>(impl)->isPrimaryKeyDirty()) {
    v8::Local<v8::Value> v8_value;
    if (property_symbol.GetOrUndefined(holder).ToLocal(&v8_value) && !v8_value->IsUndefined()) {
      V8SetReturnValue(info, v8_value);
      return;
    }
  }

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue cpp_value(impl->primaryKey(script_state));

  // [CachedAttribute]
  v8::Local<v8::Value> v8_value(cpp_value.V8Value());
  property_symbol.Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RequestAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  IDBCursor* impl = V8IDBCursor::ToImpl(holder);

  IDBRequest* cpp_value(WTF::GetPtr(impl->request()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#IDBCursor#request")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void AdvanceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBCursor", "advance");

  IDBCursor* impl = V8IDBCursor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t count;
  count = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->advance(count, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ContinueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBCursor", "continue");

  IDBCursor* impl = V8IDBCursor::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue key;
  key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  impl->Continue(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ContinuePrimaryKeyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBCursor", "continuePrimaryKey");

  IDBCursor* impl = V8IDBCursor::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  ScriptValue key;
  ScriptValue primary_key;
  key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  primary_key = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  impl->continuePrimaryKey(script_state, key, primary_key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void UpdateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBCursor", "update");

  IDBCursor* impl = V8IDBCursor::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue value;
  value = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  IDBRequest* result = impl->update(script_state, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void DeleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "IDBCursor", "delete");

  IDBCursor* impl = V8IDBCursor::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  IDBRequest* result = impl->Delete(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

}  // namespace idb_cursor_v8_internal

void V8IDBCursor::SourceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_source_Getter");

  idb_cursor_v8_internal::SourceAttributeGetter(info);
}

void V8IDBCursor::DirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_direction_Getter");

  idb_cursor_v8_internal::DirectionAttributeGetter(info);
}

void V8IDBCursor::KeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_key_Getter");

  idb_cursor_v8_internal::KeyAttributeGetter(info);
}

void V8IDBCursor::PrimaryKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_primaryKey_Getter");

  idb_cursor_v8_internal::PrimaryKeyAttributeGetter(info);
}

void V8IDBCursor::RequestAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_request_Getter");

  idb_cursor_v8_internal::RequestAttributeGetter(info);
}

void V8IDBCursor::AdvanceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_advance");

  idb_cursor_v8_internal::AdvanceMethod(info);
}

void V8IDBCursor::ContinueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_continue");

  idb_cursor_v8_internal::ContinueMethod(info);
}

void V8IDBCursor::ContinuePrimaryKeyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_continuePrimaryKey");

  idb_cursor_v8_internal::ContinuePrimaryKeyMethod(info);
}

void V8IDBCursor::UpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_update");

  idb_cursor_v8_internal::UpdateMethod(info);
}

void V8IDBCursor::DeleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_IDBCursor_delete");

  idb_cursor_v8_internal::DeleteMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8IDBCursorAccessors[] = {
    { "source", V8IDBCursor::SourceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "direction", V8IDBCursor::DirectionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "key", V8IDBCursor::KeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "primaryKey", V8IDBCursor::PrimaryKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "request", V8IDBCursor::RequestAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8IDBCursorMethods[] = {
    {"advance", V8IDBCursor::AdvanceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"continue", V8IDBCursor::ContinueMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"continuePrimaryKey", V8IDBCursor::ContinuePrimaryKeyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"update", V8IDBCursor::UpdateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"delete", V8IDBCursor::DeleteMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8IDBCursorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8IDBCursor::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8IDBCursor::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBCursorAccessors, base::size(kV8IDBCursorAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IDBCursorMethods, base::size(kV8IDBCursorMethods));

  // Custom signature

  V8IDBCursor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8IDBCursor::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8IDBCursor::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8IDBCursor::GetWrapperTypeInfo()),
      InstallV8IDBCursorTemplate);
}

bool V8IDBCursor::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8IDBCursor::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8IDBCursor::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8IDBCursor::GetWrapperTypeInfo(), v8_value);
}

IDBCursor* V8IDBCursor::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

IDBCursor* NativeValueTraits<IDBCursor>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IDBCursor* native_value = V8IDBCursor::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "IDBCursor"));
  }
  return native_value;
}

}  // namespace blink
