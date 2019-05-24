// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_disjoint_timer_query.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_timer_query_ext.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_ext_disjoint_timer_query_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8EXTDisjointTimerQuery::DomTemplate,
    nullptr,
    "EXTDisjointTimerQuery",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in EXTDisjointTimerQuery.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& EXTDisjointTimerQuery::wrapper_type_info_ = v8_ext_disjoint_timer_query_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, EXTDisjointTimerQuery>::value,
    "EXTDisjointTimerQuery inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&EXTDisjointTimerQuery::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "EXTDisjointTimerQuery is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ext_disjoint_timer_query_v8_internal {

static void CreateQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createQueryEXT());
}

static void DeleteQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQueryEXT", "EXTDisjointTimerQuery", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTimerQueryEXT* query;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQueryEXT", "EXTDisjointTimerQuery", "parameter 1 is not of type 'WebGLTimerQueryEXT'."));
    return;
  }

  impl->deleteQueryEXT(query);
}

static void IsQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQueryEXT", "EXTDisjointTimerQuery", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTimerQueryEXT* query;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQueryEXT", "EXTDisjointTimerQuery", "parameter 1 is not of type 'WebGLTimerQueryEXT'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isQueryEXT(query));
}

static void BeginQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "beginQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTimerQueryEXT* query;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  impl->beginQueryEXT(target, query);
}

static void EndQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "endQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->endQueryEXT(target);
}

static void QueryCounterEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "queryCounterEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLTimerQueryEXT* query;
  uint32_t target;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->queryCounterEXT(query, target);
}

static void GetQueryEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "getQueryEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getQueryEXT(script_state, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetQueryObjectEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQuery", "getQueryObjectEXT");

  EXTDisjointTimerQuery* impl = V8EXTDisjointTimerQuery::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLTimerQueryEXT* query;
  uint32_t pname;
  query = V8WebGLTimerQueryEXT::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLTimerQueryEXT'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getQueryObjectEXT(script_state, query, pname);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace ext_disjoint_timer_query_v8_internal

void V8EXTDisjointTimerQuery::CreateQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_createQueryEXT");

  ext_disjoint_timer_query_v8_internal::CreateQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::DeleteQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_deleteQueryEXT");

  ext_disjoint_timer_query_v8_internal::DeleteQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::IsQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_isQueryEXT");

  ext_disjoint_timer_query_v8_internal::IsQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::BeginQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_beginQueryEXT");

  ext_disjoint_timer_query_v8_internal::BeginQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::EndQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_endQueryEXT");

  ext_disjoint_timer_query_v8_internal::EndQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::QueryCounterEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_queryCounterEXT");

  ext_disjoint_timer_query_v8_internal::QueryCounterEXTMethod(info);
}

void V8EXTDisjointTimerQuery::GetQueryEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_getQueryEXT");

  ext_disjoint_timer_query_v8_internal::GetQueryEXTMethod(info);
}

void V8EXTDisjointTimerQuery::GetQueryObjectEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQuery_getQueryObjectEXT");

  ext_disjoint_timer_query_v8_internal::GetQueryObjectEXTMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8EXTDisjointTimerQueryMethods[] = {
    {"createQueryEXT", V8EXTDisjointTimerQuery::CreateQueryEXTMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteQueryEXT", V8EXTDisjointTimerQuery::DeleteQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isQueryEXT", V8EXTDisjointTimerQuery::IsQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginQueryEXT", V8EXTDisjointTimerQuery::BeginQueryEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endQueryEXT", V8EXTDisjointTimerQuery::EndQueryEXTMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCounterEXT", V8EXTDisjointTimerQuery::QueryCounterEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryEXT", V8EXTDisjointTimerQuery::GetQueryEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryObjectEXT", V8EXTDisjointTimerQuery::GetQueryObjectEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8EXTDisjointTimerQueryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8EXTDisjointTimerQuery::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8EXTDisjointTimerQuery::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"QUERY_COUNTER_BITS_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8864)},
        {"CURRENT_QUERY_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8865)},
        {"QUERY_RESULT_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8866)},
        {"QUERY_RESULT_AVAILABLE_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8867)},
        {"TIME_ELAPSED_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88BF)},
        {"TIMESTAMP_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E28)},
        {"GPU_DISJOINT_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8FBB)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8EXTDisjointTimerQueryMethods, base::size(kV8EXTDisjointTimerQueryMethods));

  // Custom signature

  V8EXTDisjointTimerQuery::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8EXTDisjointTimerQuery::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8EXTDisjointTimerQuery::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8EXTDisjointTimerQuery::GetWrapperTypeInfo()),
      InstallV8EXTDisjointTimerQueryTemplate);
}

bool V8EXTDisjointTimerQuery::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8EXTDisjointTimerQuery::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8EXTDisjointTimerQuery::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8EXTDisjointTimerQuery::GetWrapperTypeInfo(), v8_value);
}

EXTDisjointTimerQuery* V8EXTDisjointTimerQuery::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

EXTDisjointTimerQuery* NativeValueTraits<EXTDisjointTimerQuery>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EXTDisjointTimerQuery* native_value = V8EXTDisjointTimerQuery::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "EXTDisjointTimerQuery"));
  }
  return native_value;
}

}  // namespace blink
