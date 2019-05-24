// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_css_style_value_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSStyleValue::DomTemplate,
    V8CSSStyleValue::InstallConditionalFeatures,
    "CSSStyleValue",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSStyleValue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSStyleValue::wrapper_type_info_ = v8_css_style_value_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSStyleValue>::value,
    "CSSStyleValue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSStyleValue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSStyleValue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_style_value_v8_internal {

static void ParseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleValue", "parse");

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> property;
  V8StringResource<> css_text;
  property = info[0];
  if (!property.Prepare())
    return;

  css_text = info[1];
  if (!css_text.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForCurrentRealm(info);
  CSSStyleValue* result = CSSStyleValue::parse(execution_context, property, css_text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void ParseAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSStyleValue", "parseAll");

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> property;
  V8StringResource<> css_text;
  property = info[0];
  if (!property.Prepare())
    return;

  css_text = info[1];
  if (!css_text.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForCurrentRealm(info);
  HeapVector<Member<CSSStyleValue>> result = CSSStyleValue::parseAll(execution_context, property, css_text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CSSStyleValue* impl = V8CSSStyleValue::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

}  // namespace css_style_value_v8_internal

void V8CSSStyleValue::ParseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleValue_parse");

  css_style_value_v8_internal::ParseMethod(info);
}

void V8CSSStyleValue::ParseAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleValue_parseAll");

  css_style_value_v8_internal::ParseAllMethod(info);
}

void V8CSSStyleValue::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSStyleValue_toString");

  css_style_value_v8_internal::ToStringMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8CSSStyleValueMethods[] = {
    {"toString", V8CSSStyleValue::ToStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CSSStyleValueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSStyleValue::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CSSStyleValue::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSStyleValueMethods, base::size(kV8CSSStyleValueMethods));

  // Custom signature

  V8CSSStyleValue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSStyleValue::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSStyleValue::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSStyleValue::GetWrapperTypeInfo()),
      InstallV8CSSStyleValueTemplate);
}

bool V8CSSStyleValue::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSStyleValue::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSStyleValue::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSStyleValue::GetWrapperTypeInfo(), v8_value);
}

CSSStyleValue* V8CSSStyleValue::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSStyleValue* NativeValueTraits<CSSStyleValue>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSStyleValue* native_value = V8CSSStyleValue::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSStyleValue"));
  }
  return native_value;
}

void V8CSSStyleValue::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (execution_context && (execution_context->IsDocument())) {
      {
        // Install parse configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"parse", V8CSSStyleValue::ParseMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (execution_context && (execution_context->IsDocument())) {
      {
        // Install parseAll configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"parseAll", V8CSSStyleValue::ParseAllMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

}  // namespace blink
