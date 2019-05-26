// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_callback_function_test.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_div_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_enum_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_interface_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_receiver_object_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_sequence_callback.h"
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
const WrapperTypeInfo v8_callback_function_test_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CallbackFunctionTest::DomTemplate,
    nullptr,
    "CallbackFunctionTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CallbackFunctionTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CallbackFunctionTest::wrapper_type_info_ = v8_callback_function_test_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CallbackFunctionTest>::value,
    "CallbackFunctionTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CallbackFunctionTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CallbackFunctionTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace callback_function_test_v8_internal {

static void TestCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8TestCallback* callback;
  V8StringResource<> message_1;
  V8StringResource<> message_2;
  if (info[0]->IsFunction()) {
    callback = V8TestCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  message_1 = info[1];
  if (!message_1.Prepare())
    return;

  message_2 = info[2];
  if (!message_2.Prepare())
    return;

  String result = impl->testCallback(callback, message_1, message_2, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void TestNullableCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testNullableCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8TestCallback* callback;
  V8StringResource<> message_1;
  V8StringResource<> message_2;
  if (info[0]->IsFunction()) {
    callback = V8TestCallback::Create(info[0].As<v8::Function>());
  } else if (info[0]->IsNullOrUndefined()) {
    callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  message_1 = info[1];
  if (!message_1.Prepare())
    return;

  message_2 = info[2];
  if (!message_2.Prepare())
    return;

  String result = impl->testNullableCallback(callback, message_1, message_2, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void TestInterfaceCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testInterfaceCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestInterfaceCallback* callback;
  HTMLDivElement* div_element;
  if (info[0]->IsFunction()) {
    callback = V8TestInterfaceCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  div_element = V8HTMLDivElement::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!div_element) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'HTMLDivElement'.");
    return;
  }

  impl->testInterfaceCallback(callback, div_element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TestReceiverObjectCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testReceiverObjectCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8TestReceiverObjectCallback* callback;
  if (info[0]->IsFunction()) {
    callback = V8TestReceiverObjectCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  impl->testReceiverObjectCallback(callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TestSequenceCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testSequenceCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestSequenceCallback* callback;
  Vector<int32_t> numbers;
  if (info[0]->IsFunction()) {
    callback = V8TestSequenceCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  numbers = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  Vector<String> result = impl->testSequenceCallback(callback, numbers, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void TestEnumCallbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CallbackFunctionTest", "testEnumCallback");

  CallbackFunctionTest* impl = V8CallbackFunctionTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8TestEnumCallback* callback;
  V8StringResource<> enum_value;
  if (info[0]->IsFunction()) {
    callback = V8TestEnumCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  enum_value = info[1];
  if (!enum_value.Prepare())
    return;
  const char* kValidEnum_valueValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(enum_value, kValidEnum_valueValues, base::size(kValidEnum_valueValues), "InternalEnum", exception_state)) {
    return;
  }

  impl->testEnumCallback(callback, enum_value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace callback_function_test_v8_internal

void V8CallbackFunctionTest::TestCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testCallback");

  callback_function_test_v8_internal::TestCallbackMethod(info);
}

void V8CallbackFunctionTest::TestNullableCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testNullableCallback");

  callback_function_test_v8_internal::TestNullableCallbackMethod(info);
}

void V8CallbackFunctionTest::TestInterfaceCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testInterfaceCallback");

  callback_function_test_v8_internal::TestInterfaceCallbackMethod(info);
}

void V8CallbackFunctionTest::TestReceiverObjectCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testReceiverObjectCallback");

  callback_function_test_v8_internal::TestReceiverObjectCallbackMethod(info);
}

void V8CallbackFunctionTest::TestSequenceCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testSequenceCallback");

  callback_function_test_v8_internal::TestSequenceCallbackMethod(info);
}

void V8CallbackFunctionTest::TestEnumCallbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CallbackFunctionTest_testEnumCallback");

  callback_function_test_v8_internal::TestEnumCallbackMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8CallbackFunctionTestMethods[] = {
    {"testCallback", V8CallbackFunctionTest::TestCallbackMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testNullableCallback", V8CallbackFunctionTest::TestNullableCallbackMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testInterfaceCallback", V8CallbackFunctionTest::TestInterfaceCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testReceiverObjectCallback", V8CallbackFunctionTest::TestReceiverObjectCallbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testSequenceCallback", V8CallbackFunctionTest::TestSequenceCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"testEnumCallback", V8CallbackFunctionTest::TestEnumCallbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CallbackFunctionTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CallbackFunctionTest::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CallbackFunctionTest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CallbackFunctionTestMethods, base::size(kV8CallbackFunctionTestMethods));

  // Custom signature

  V8CallbackFunctionTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CallbackFunctionTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CallbackFunctionTest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CallbackFunctionTest::GetWrapperTypeInfo()),
      InstallV8CallbackFunctionTestTemplate);
}

bool V8CallbackFunctionTest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CallbackFunctionTest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CallbackFunctionTest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CallbackFunctionTest::GetWrapperTypeInfo(), v8_value);
}

CallbackFunctionTest* V8CallbackFunctionTest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CallbackFunctionTest* NativeValueTraits<CallbackFunctionTest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CallbackFunctionTest* native_value = V8CallbackFunctionTest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CallbackFunctionTest"));
  }
  return native_value;
}

}  // namespace blink
