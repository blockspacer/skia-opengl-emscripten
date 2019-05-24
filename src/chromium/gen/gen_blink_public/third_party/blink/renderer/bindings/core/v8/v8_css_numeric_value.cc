// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_math_sum.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
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
const WrapperTypeInfo v8_css_numeric_value_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSNumericValue::DomTemplate,
    V8CSSNumericValue::InstallConditionalFeatures,
    "CSSNumericValue",
    V8CSSStyleValue::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSNumericValue.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSNumericValue::wrapper_type_info_ = v8_css_numeric_value_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSNumericValue>::value,
    "CSSNumericValue inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSNumericValue::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSNumericValue is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_numeric_value_v8_internal {

static void AddMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "add");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->add(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void SubMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "sub");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->sub(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void MulMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "mul");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->mul(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void DivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "div");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->div(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void MinMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "min");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->min(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void MaxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "max");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSNumericValue* result = impl->max(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void EqualsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "equals");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  HeapVector<DoubleOrCSSNumericValue> values;
  values = ToImplArguments<DoubleOrCSSNumericValue>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->equals(values));
}

static void ToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "to");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> unit;
  unit = info[0];
  if (!unit.Prepare())
    return;

  CSSUnitValue* result = impl->to(unit, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void ToSumMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "toSum");

  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  Vector<String> units;
  units = ToImplArguments<IDLString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  CSSMathSum* result = impl->toSum(units, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void TypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CSSNumericValue* impl = V8CSSNumericValue::ToImpl(info.Holder());

  CSSNumericType* result = impl->type();
  V8SetReturnValue(info, result);
}

static void ParseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSSNumericValue", "parse");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> css_text;
  css_text = info[0];
  if (!css_text.Prepare())
    return;

  CSSNumericValue* result = CSSNumericValue::parse(css_text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

}  // namespace css_numeric_value_v8_internal

void V8CSSNumericValue::AddMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_add");

  css_numeric_value_v8_internal::AddMethod(info);
}

void V8CSSNumericValue::SubMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_sub");

  css_numeric_value_v8_internal::SubMethod(info);
}

void V8CSSNumericValue::MulMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_mul");

  css_numeric_value_v8_internal::MulMethod(info);
}

void V8CSSNumericValue::DivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_div");

  css_numeric_value_v8_internal::DivMethod(info);
}

void V8CSSNumericValue::MinMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_min");

  css_numeric_value_v8_internal::MinMethod(info);
}

void V8CSSNumericValue::MaxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_max");

  css_numeric_value_v8_internal::MaxMethod(info);
}

void V8CSSNumericValue::EqualsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_equals");

  css_numeric_value_v8_internal::EqualsMethod(info);
}

void V8CSSNumericValue::ToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_to");

  css_numeric_value_v8_internal::ToMethod(info);
}

void V8CSSNumericValue::ToSumMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_toSum");

  css_numeric_value_v8_internal::ToSumMethod(info);
}

void V8CSSNumericValue::TypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_type");

  css_numeric_value_v8_internal::TypeMethod(info);
}

void V8CSSNumericValue::ParseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericValue_parse");

  css_numeric_value_v8_internal::ParseMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8CSSNumericValueMethods[] = {
    {"add", V8CSSNumericValue::AddMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sub", V8CSSNumericValue::SubMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mul", V8CSSNumericValue::MulMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"div", V8CSSNumericValue::DivMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"min", V8CSSNumericValue::MinMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"max", V8CSSNumericValue::MaxMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"equals", V8CSSNumericValue::EqualsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"to", V8CSSNumericValue::ToMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toSum", V8CSSNumericValue::ToSumMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"type", V8CSSNumericValue::TypeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CSSNumericValueTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSNumericValue::GetWrapperTypeInfo()->interface_name, V8CSSStyleValue::DomTemplate(isolate, world), V8CSSNumericValue::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSNumericValueMethods, base::size(kV8CSSNumericValueMethods));

  // Custom signature

  V8CSSNumericValue::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSNumericValue::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSNumericValue::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSNumericValue::GetWrapperTypeInfo()),
      InstallV8CSSNumericValueTemplate);
}

bool V8CSSNumericValue::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSNumericValue::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSNumericValue::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSNumericValue::GetWrapperTypeInfo(), v8_value);
}

CSSNumericValue* V8CSSNumericValue::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSNumericValue* NativeValueTraits<CSSNumericValue>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSNumericValue* native_value = V8CSSNumericValue::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSNumericValue"));
  }
  return native_value;
}

void V8CSSNumericValue::InstallConditionalFeatures(
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
            {"parse", V8CSSNumericValue::ParseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
