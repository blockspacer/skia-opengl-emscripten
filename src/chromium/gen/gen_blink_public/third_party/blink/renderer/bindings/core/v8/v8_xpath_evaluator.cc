// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_evaluator.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_ns_resolver.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo v8_xpath_evaluator_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XPathEvaluator::DomTemplate,
    nullptr,
    "XPathEvaluator",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathEvaluator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XPathEvaluator::wrapper_type_info_ = v8_xpath_evaluator_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XPathEvaluator>::value,
    "XPathEvaluator inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XPathEvaluator::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XPathEvaluator is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xpath_evaluator_v8_internal {

static void CreateExpressionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathEvaluator", "createExpression");

  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> expression;
  XPathNSResolver* resolver;
  expression = info[0];
  if (!expression.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[1]);
    if (!resolver && !IsUndefinedOrNull(info[1])) {
      exception_state.ThrowTypeError("parameter 2 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }

  XPathExpression* result = impl->createExpression(expression, resolver, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateNSResolverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "XPathEvaluator", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node_resolver;
  node_resolver = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node_resolver) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "XPathEvaluator", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->createNSResolver(node_resolver));
}

static void EvaluateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathEvaluator", "evaluate");

  XPathEvaluator* impl = V8XPathEvaluator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> expression;
  Node* context_node;
  XPathNSResolver* resolver;
  uint16_t type;
  ScriptValue in_result;
  expression = info[0];
  if (!expression.Prepare())
    return;

  context_node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!context_node) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[2]);
    if (!resolver && !IsUndefinedOrNull(info[2])) {
      exception_state.ThrowTypeError("parameter 3 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }
  if (!info[3]->IsUndefined()) {
    type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    type = 0u;
  }
  if (!info[4]->IsUndefined()) {
    if (info[4]->IsObject()) {
      in_result = ScriptValue(ScriptState::Current(info.GetIsolate()), info[4]);
    } else if (info[4]->IsNullOrUndefined()) {
      in_result = ScriptValue(ScriptState::Current(info.GetIsolate()), v8::Null(info.GetIsolate()));
    } else {
      exception_state.ThrowTypeError("parameter 5 ('inResult') is not an object.");
      return;
    }
  } else {
    in_result = ScriptValue::CreateNull(script_state);
  }

  XPathResult* result = impl->evaluate(expression, context_node, resolver, type, in_result, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_ConstructorCallback");

  XPathEvaluator* impl = XPathEvaluator::Create();
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8XPathEvaluator::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8XPathEvaluator_Constructor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("XPathEvaluator"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  xpath_evaluator_v8_internal::Constructor(info);
}

}  // namespace xpath_evaluator_v8_internal

void V8XPathEvaluator::CreateExpressionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_createExpression");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8XPathEvaluator_CreateExpression_Method);
  xpath_evaluator_v8_internal::CreateExpressionMethod(info);
}

void V8XPathEvaluator::CreateNSResolverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_createNSResolver");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8XPathEvaluator_CreateNSResolver_Method);
  xpath_evaluator_v8_internal::CreateNSResolverMethod(info);
}

void V8XPathEvaluator::EvaluateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathEvaluator_evaluate");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8XPathEvaluator_Evaluate_Method);
  xpath_evaluator_v8_internal::EvaluateMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8XPathEvaluatorMethods[] = {
    {"createExpression", V8XPathEvaluator::CreateExpressionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createNSResolver", V8XPathEvaluator::CreateNSResolverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evaluate", V8XPathEvaluator::EvaluateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8XPathEvaluatorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XPathEvaluator::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8XPathEvaluator::kInternalFieldCount);
  interface_template->SetCallHandler(xpath_evaluator_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XPathEvaluatorMethods, base::size(kV8XPathEvaluatorMethods));

  // Custom signature

  V8XPathEvaluator::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XPathEvaluator::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XPathEvaluator::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XPathEvaluator::GetWrapperTypeInfo()),
      InstallV8XPathEvaluatorTemplate);
}

bool V8XPathEvaluator::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XPathEvaluator::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XPathEvaluator::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XPathEvaluator::GetWrapperTypeInfo(), v8_value);
}

XPathEvaluator* V8XPathEvaluator::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XPathEvaluator* NativeValueTraits<XPathEvaluator>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XPathEvaluator* native_value = V8XPathEvaluator::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XPathEvaluator"));
  }
  return native_value;
}

}  // namespace blink
