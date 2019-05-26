// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_sequence_test.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
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
const WrapperTypeInfo v8_sequence_test_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SequenceTest::DomTemplate,
    nullptr,
    "SequenceTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SequenceTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SequenceTest::wrapper_type_info_ = v8_sequence_test_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SequenceTest>::value,
    "SequenceTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SequenceTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SequenceTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace sequence_test_v8_internal {

static void IdentityByteStringSequenceSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "identityByteStringSequenceSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<Vector<String>> arg;
  arg = NativeValueTraits<IDLSequence<IDLSequence<IDLByteString>>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, ToV8(impl->identityByteStringSequenceSequence(arg), info.Holder(), info.GetIsolate()));
}

static void IdentityDoubleSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "identityDoubleSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<double> arg;
  arg = NativeValueTraits<IDLSequence<IDLDouble>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, ToV8(impl->identityDoubleSequence(arg), info.Holder(), info.GetIsolate()));
}

static void IdentityFoodEnumSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "identityFoodEnumSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<String> arg;
  arg = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  const char* kValidArgValues[] = {
      "Bread",
      "Spaghetti",
      "Sushi",
  };
  if (!IsValidEnum(arg, kValidArgValues, base::size(kValidArgValues), "FoodEnum", exception_state)) {
    return;
  }

  V8SetReturnValue(info, ToV8(impl->identityFoodEnumSequence(arg), info.Holder(), info.GetIsolate()));
}

static void IdentityLongSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "identityLongSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<int32_t> arg;
  arg = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, ToV8(impl->identityLongSequence(arg), info.Holder(), info.GetIsolate()));
}

static void IdentityOctetSequenceOrNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "identityOctetSequenceOrNull");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  base::Optional<Vector<uint8_t>> arg;
  if (!info[0]->IsNullOrUndefined()) {
    arg = NativeValueTraits<IDLSequence<IDLOctet>>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  }

  base::Optional<Vector<uint8_t>> result = impl->identityOctetSequenceOrNull(arg);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetElementSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getElementSequence(), info.Holder(), info.GetIsolate()));
}

static void SetElementSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "setElementSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<Member<Element>> arg;
  arg = NativeValueTraits<IDLSequence<Element>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setElementSequence(arg);
}

static void UnionReceivedSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SequenceTest", "unionReceivedSequence");

  SequenceTest* impl = V8SequenceTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DoubleOrDoubleSequence arg;
  V8DoubleOrDoubleSequence::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->unionReceivedSequence(arg));
}

}  // namespace sequence_test_v8_internal

void V8SequenceTest::IdentityByteStringSequenceSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_identityByteStringSequenceSequence");

  sequence_test_v8_internal::IdentityByteStringSequenceSequenceMethod(info);
}

void V8SequenceTest::IdentityDoubleSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_identityDoubleSequence");

  sequence_test_v8_internal::IdentityDoubleSequenceMethod(info);
}

void V8SequenceTest::IdentityFoodEnumSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_identityFoodEnumSequence");

  sequence_test_v8_internal::IdentityFoodEnumSequenceMethod(info);
}

void V8SequenceTest::IdentityLongSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_identityLongSequence");

  sequence_test_v8_internal::IdentityLongSequenceMethod(info);
}

void V8SequenceTest::IdentityOctetSequenceOrNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_identityOctetSequenceOrNull");

  sequence_test_v8_internal::IdentityOctetSequenceOrNullMethod(info);
}

void V8SequenceTest::GetElementSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_getElementSequence");

  sequence_test_v8_internal::GetElementSequenceMethod(info);
}

void V8SequenceTest::SetElementSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_setElementSequence");

  sequence_test_v8_internal::SetElementSequenceMethod(info);
}

void V8SequenceTest::UnionReceivedSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SequenceTest_unionReceivedSequence");

  sequence_test_v8_internal::UnionReceivedSequenceMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8SequenceTestMethods[] = {
    {"identityByteStringSequenceSequence", V8SequenceTest::IdentityByteStringSequenceSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"identityDoubleSequence", V8SequenceTest::IdentityDoubleSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"identityFoodEnumSequence", V8SequenceTest::IdentityFoodEnumSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"identityLongSequence", V8SequenceTest::IdentityLongSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"identityOctetSequenceOrNull", V8SequenceTest::IdentityOctetSequenceOrNullMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementSequence", V8SequenceTest::GetElementSequenceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setElementSequence", V8SequenceTest::SetElementSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unionReceivedSequence", V8SequenceTest::UnionReceivedSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SequenceTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SequenceTest::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SequenceTest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SequenceTestMethods, base::size(kV8SequenceTestMethods));

  // Custom signature

  V8SequenceTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SequenceTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SequenceTest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SequenceTest::GetWrapperTypeInfo()),
      InstallV8SequenceTestTemplate);
}

bool V8SequenceTest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SequenceTest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SequenceTest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SequenceTest::GetWrapperTypeInfo(), v8_value);
}

SequenceTest* V8SequenceTest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SequenceTest* NativeValueTraits<SequenceTest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SequenceTest* native_value = V8SequenceTest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SequenceTest"));
  }
  return native_value;
}

}  // namespace blink
