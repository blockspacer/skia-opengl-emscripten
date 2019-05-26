// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_union_types_test.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo v8_union_types_test_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8UnionTypesTest::DomTemplate,
    nullptr,
    "UnionTypesTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in UnionTypesTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& UnionTypesTest::wrapper_type_info_ = v8_union_types_test_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, UnionTypesTest>::value,
    "UnionTypesTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&UnionTypesTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "UnionTypesTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace union_types_test_v8_internal {

static void DoubleOrStringOrStringSequenceAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(holder);

  DoubleOrStringOrStringSequence result;
  impl->doubleOrStringOrStringSequenceAttribute(result);

  V8SetReturnValue(info, result);
}

static void DoubleOrStringOrStringSequenceAttributeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "UnionTypesTest", "doubleOrStringOrStringSequenceAttribute");

  // Prepare the value to be set.
  DoubleOrStringOrStringSequence cpp_value;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDoubleOrStringOrStringSequenceAttribute(cpp_value);
}

static void DoubleOrStringArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrString arg;
  V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void DoubleOrInternalEnumArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrInternalEnumArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrInternalEnum arg;
  V8DoubleOrInternalEnum::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrInternalEnumArg(arg), info.GetIsolate());
}

static void DoubleOrStringDefaultDoubleArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultDoubleArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    arg.SetDouble(3.14);
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void DoubleOrStringDefaultStringArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultStringArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    arg.SetString("foo");
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void DoubleOrStringDefaultNullArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringDefaultNullArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  DoubleOrString arg;
  if (!info[0]->IsUndefined()) {
    V8DoubleOrString::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
  } else {
    /* null default value */;
  }

  V8SetReturnValueString(info, impl->doubleOrStringArg(arg), info.GetIsolate());
}

static void DoubleOrStringSequenceArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringSequenceArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<DoubleOrString> arg;
  arg = NativeValueTraits<IDLSequence<DoubleOrString>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringSequenceArg(arg), info.GetIsolate());
}

static void NodeListOrElementArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "nodeListOrElementArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NodeListOrElement arg;
  V8NodeListOrElement::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->nodeListOrElementArg(arg), info.GetIsolate());
}

static void NodeListOrElementOrNullArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "nodeListOrElementOrNullArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NodeListOrElement arg;
  V8NodeListOrElement::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->nodeListOrElementOrNullArg(arg), info.GetIsolate());
}

static void DoubleOrStringOrStringSequenceArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringOrStringSequenceArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrStringOrStringSequence arg;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringOrStringSequenceArg(arg), info.GetIsolate());
}

static void DoubleOrStringOrStringSequenceNullableArgMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "UnionTypesTest", "doubleOrStringOrStringSequenceNullableArg");

  UnionTypesTest* impl = V8UnionTypesTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrStringOrStringSequence arg;
  V8DoubleOrStringOrStringSequence::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueString(info, impl->doubleOrStringOrStringSequenceArg(arg), info.GetIsolate());
}

}  // namespace union_types_test_v8_internal

void V8UnionTypesTest::DoubleOrStringOrStringSequenceAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceAttribute_Getter");

  union_types_test_v8_internal::DoubleOrStringOrStringSequenceAttributeAttributeGetter(info);
}

void V8UnionTypesTest::DoubleOrStringOrStringSequenceAttributeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceAttribute_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  union_types_test_v8_internal::DoubleOrStringOrStringSequenceAttributeAttributeSetter(v8_value, info);
}

void V8UnionTypesTest::DoubleOrStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringArg");

  union_types_test_v8_internal::DoubleOrStringArgMethod(info);
}

void V8UnionTypesTest::DoubleOrInternalEnumArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrInternalEnumArg");

  union_types_test_v8_internal::DoubleOrInternalEnumArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringDefaultDoubleArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultDoubleArg");

  union_types_test_v8_internal::DoubleOrStringDefaultDoubleArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringDefaultStringArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultStringArg");

  union_types_test_v8_internal::DoubleOrStringDefaultStringArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringDefaultNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringDefaultNullArg");

  union_types_test_v8_internal::DoubleOrStringDefaultNullArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringSequenceArg");

  union_types_test_v8_internal::DoubleOrStringSequenceArgMethod(info);
}

void V8UnionTypesTest::NodeListOrElementArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_nodeListOrElementArg");

  union_types_test_v8_internal::NodeListOrElementArgMethod(info);
}

void V8UnionTypesTest::NodeListOrElementOrNullArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_nodeListOrElementOrNullArg");

  union_types_test_v8_internal::NodeListOrElementOrNullArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringOrStringSequenceArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceArg");

  union_types_test_v8_internal::DoubleOrStringOrStringSequenceArgMethod(info);
}

void V8UnionTypesTest::DoubleOrStringOrStringSequenceNullableArgMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_UnionTypesTest_doubleOrStringOrStringSequenceNullableArg");

  union_types_test_v8_internal::DoubleOrStringOrStringSequenceNullableArgMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8UnionTypesTestAccessors[] = {
    { "doubleOrStringOrStringSequenceAttribute", V8UnionTypesTest::DoubleOrStringOrStringSequenceAttributeAttributeGetterCallback, V8UnionTypesTest::DoubleOrStringOrStringSequenceAttributeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8UnionTypesTestMethods[] = {
    {"doubleOrStringArg", V8UnionTypesTest::DoubleOrStringArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrInternalEnumArg", V8UnionTypesTest::DoubleOrInternalEnumArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultDoubleArg", V8UnionTypesTest::DoubleOrStringDefaultDoubleArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultStringArg", V8UnionTypesTest::DoubleOrStringDefaultStringArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringDefaultNullArg", V8UnionTypesTest::DoubleOrStringDefaultNullArgMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringSequenceArg", V8UnionTypesTest::DoubleOrStringSequenceArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodeListOrElementArg", V8UnionTypesTest::NodeListOrElementArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodeListOrElementOrNullArg", V8UnionTypesTest::NodeListOrElementOrNullArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringOrStringSequenceArg", V8UnionTypesTest::DoubleOrStringOrStringSequenceArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doubleOrStringOrStringSequenceNullableArg", V8UnionTypesTest::DoubleOrStringOrStringSequenceNullableArgMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8UnionTypesTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8UnionTypesTest::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8UnionTypesTest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8UnionTypesTestAccessors, base::size(kV8UnionTypesTestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8UnionTypesTestMethods, base::size(kV8UnionTypesTestMethods));

  // Custom signature

  V8UnionTypesTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8UnionTypesTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8UnionTypesTest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8UnionTypesTest::GetWrapperTypeInfo()),
      InstallV8UnionTypesTestTemplate);
}

bool V8UnionTypesTest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8UnionTypesTest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8UnionTypesTest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8UnionTypesTest::GetWrapperTypeInfo(), v8_value);
}

UnionTypesTest* V8UnionTypesTest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

UnionTypesTest* NativeValueTraits<UnionTypesTest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  UnionTypesTest* native_value = V8UnionTypesTest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "UnionTypesTest"));
  }
  return native_value;
}

}  // namespace blink
