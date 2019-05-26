// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_record_test.h"

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
const WrapperTypeInfo v8_record_test_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RecordTest::DomTemplate,
    nullptr,
    "RecordTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RecordTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RecordTest::wrapper_type_info_ = v8_record_test_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RecordTest>::value,
    "RecordTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RecordTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RecordTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace record_test_v8_internal {

static void SetStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setStringLongRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, int32_t>> arg;
  arg = NativeValueTraits<IDLRecord<IDLString, IDLLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setStringLongRecord(arg);
}

static void GetStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getStringLongRecord(), info.Holder(), info.GetIsolate()));
}

static void SetNullableStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setNullableStringLongRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  base::Optional<Vector<std::pair<String, int32_t>>> arg;
  if (!info[0]->IsNullOrUndefined()) {
    arg = NativeValueTraits<IDLRecord<IDLString, IDLLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  }

  impl->setNullableStringLongRecord(arg);
}

static void GetNullableStringLongRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  base::Optional<Vector<std::pair<String, int32_t>>> result = impl->getNullableStringLongRecord();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void SetByteStringByteStringRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setByteStringByteStringRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, String>> arg;
  arg = NativeValueTraits<IDLRecord<IDLByteString, IDLByteString>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setByteStringByteStringRecord(arg);
}

static void SetStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setStringElementRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<std::pair<String, Member<Element>>> arg;
  arg = NativeValueTraits<IDLRecord<IDLString, Element>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setStringElementRecord(arg);
}

static void GetStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getStringElementRecord(), info.Holder(), info.GetIsolate()));
}

static void SetUSVStringUSVStringBooleanRecordRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setUSVStringUSVStringBooleanRecordRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<std::pair<String, Vector<std::pair<String, bool>>>> arg;
  arg = NativeValueTraits<IDLRecord<IDLUSVString, IDLRecord<IDLUSVString, IDLBoolean>>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setUSVStringUSVStringBooleanRecordRecord(arg);
}

static void GetUSVStringUSVStringBooleanRecordRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getUSVStringUSVStringBooleanRecordRecord(), info.Holder(), info.GetIsolate()));
}

static void ReturnStringByteStringSequenceRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->returnStringByteStringSequenceRecord(), info.Holder(), info.GetIsolate()));
}

static void UnionReceivedARecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "unionReceivedARecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  BooleanOrByteStringByteStringRecord arg;
  V8BooleanOrByteStringByteStringRecord::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->unionReceivedARecord(arg));
}

static void SetFloatOrStringElementRecordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RecordTest", "setFloatOrStringElementRecord");

  RecordTest* impl = V8RecordTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  FloatOrStringElementRecord arg;
  V8FloatOrStringElementRecord::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFloatOrStringElementRecord(arg);
}

}  // namespace record_test_v8_internal

void V8RecordTest::SetStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setStringLongRecord");

  record_test_v8_internal::SetStringLongRecordMethod(info);
}

void V8RecordTest::GetStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getStringLongRecord");

  record_test_v8_internal::GetStringLongRecordMethod(info);
}

void V8RecordTest::SetNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setNullableStringLongRecord");

  record_test_v8_internal::SetNullableStringLongRecordMethod(info);
}

void V8RecordTest::GetNullableStringLongRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getNullableStringLongRecord");

  record_test_v8_internal::GetNullableStringLongRecordMethod(info);
}

void V8RecordTest::SetByteStringByteStringRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setByteStringByteStringRecord");

  record_test_v8_internal::SetByteStringByteStringRecordMethod(info);
}

void V8RecordTest::SetStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setStringElementRecord");

  record_test_v8_internal::SetStringElementRecordMethod(info);
}

void V8RecordTest::GetStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getStringElementRecord");

  record_test_v8_internal::GetStringElementRecordMethod(info);
}

void V8RecordTest::SetUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setUSVStringUSVStringBooleanRecordRecord");

  record_test_v8_internal::SetUSVStringUSVStringBooleanRecordRecordMethod(info);
}

void V8RecordTest::GetUSVStringUSVStringBooleanRecordRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_getUSVStringUSVStringBooleanRecordRecord");

  record_test_v8_internal::GetUSVStringUSVStringBooleanRecordRecordMethod(info);
}

void V8RecordTest::ReturnStringByteStringSequenceRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_returnStringByteStringSequenceRecord");

  record_test_v8_internal::ReturnStringByteStringSequenceRecordMethod(info);
}

void V8RecordTest::UnionReceivedARecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_unionReceivedARecord");

  record_test_v8_internal::UnionReceivedARecordMethod(info);
}

void V8RecordTest::SetFloatOrStringElementRecordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RecordTest_setFloatOrStringElementRecord");

  record_test_v8_internal::SetFloatOrStringElementRecordMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8RecordTestMethods[] = {
    {"setStringLongRecord", V8RecordTest::SetStringLongRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStringLongRecord", V8RecordTest::GetStringLongRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setNullableStringLongRecord", V8RecordTest::SetNullableStringLongRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getNullableStringLongRecord", V8RecordTest::GetNullableStringLongRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setByteStringByteStringRecord", V8RecordTest::SetByteStringByteStringRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStringElementRecord", V8RecordTest::SetStringElementRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStringElementRecord", V8RecordTest::GetStringElementRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUSVStringUSVStringBooleanRecordRecord", V8RecordTest::SetUSVStringUSVStringBooleanRecordRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUSVStringUSVStringBooleanRecordRecord", V8RecordTest::GetUSVStringUSVStringBooleanRecordRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"returnStringByteStringSequenceRecord", V8RecordTest::ReturnStringByteStringSequenceRecordMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unionReceivedARecord", V8RecordTest::UnionReceivedARecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFloatOrStringElementRecord", V8RecordTest::SetFloatOrStringElementRecordMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RecordTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RecordTest::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8RecordTest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RecordTestMethods, base::size(kV8RecordTestMethods));

  // Custom signature

  V8RecordTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RecordTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8RecordTest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RecordTest::GetWrapperTypeInfo()),
      InstallV8RecordTestTemplate);
}

bool V8RecordTest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RecordTest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RecordTest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RecordTest::GetWrapperTypeInfo(), v8_value);
}

RecordTest* V8RecordTest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RecordTest* NativeValueTraits<RecordTest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RecordTest* native_value = V8RecordTest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RecordTest"));
  }
  return native_value;
}

}  // namespace blink
