// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_type_conversions.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
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
const WrapperTypeInfo v8_type_conversions_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8TypeConversions::DomTemplate,
    nullptr,
    "TypeConversions",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TypeConversions.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TypeConversions::wrapper_type_info_ = v8_type_conversions_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TypeConversions>::value,
    "TypeConversions inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TypeConversions::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TypeConversions is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace type_conversions_v8_internal {

static void TestLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testLong());
}

static void TestLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testLong");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestLong(cpp_value);
}

static void TestEnforceRangeLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testLong());
}

static void TestEnforceRangeLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeLong");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLongEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestLong(cpp_value);
}

static void TestUnsignedLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedLong());
}

static void TestUnsignedLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedLong");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedLong(cpp_value);
}

static void TestEnforceRangeUnsignedLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedLong());
}

static void TestEnforceRangeUnsignedLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedLong");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedLong(cpp_value);
}

static void TestLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testLongLong()));
}

static void TestLongLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testLongLong");

  // Prepare the value to be set.
  int64_t cpp_value = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestLongLong(cpp_value);
}

static void TestEnforceRangeLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testLongLong()));
}

static void TestEnforceRangeLongLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeLongLong");

  // Prepare the value to be set.
  int64_t cpp_value = NativeValueTraits<IDLLongLongEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestLongLong(cpp_value);
}

static void TestUnsignedLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testUnsignedLongLong()));
}

static void TestUnsignedLongLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedLongLong");

  // Prepare the value to be set.
  uint64_t cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedLongLong(cpp_value);
}

static void TestEnforceRangeUnsignedLongLongAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->testUnsignedLongLong()));
}

static void TestEnforceRangeUnsignedLongLongAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedLongLong");

  // Prepare the value to be set.
  uint64_t cpp_value = NativeValueTraits<IDLUnsignedLongLongEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedLongLong(cpp_value);
}

static void TestByteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testByte());
}

static void TestByteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testByte");

  // Prepare the value to be set.
  int8_t cpp_value = NativeValueTraits<IDLByte>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestByte(cpp_value);
}

static void TestEnforceRangeByteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testByte());
}

static void TestEnforceRangeByteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeByte");

  // Prepare the value to be set.
  int8_t cpp_value = NativeValueTraits<IDLByteEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestByte(cpp_value);
}

static void TestOctetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testOctet());
}

static void TestOctetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testOctet");

  // Prepare the value to be set.
  uint8_t cpp_value = NativeValueTraits<IDLOctet>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestOctet(cpp_value);
}

static void TestEnforceRangeOctetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testOctet());
}

static void TestEnforceRangeOctetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeOctet");

  // Prepare the value to be set.
  uint8_t cpp_value = NativeValueTraits<IDLOctetEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestOctet(cpp_value);
}

static void TestShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testShort());
}

static void TestShortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testShort");

  // Prepare the value to be set.
  int16_t cpp_value = NativeValueTraits<IDLShort>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestShort(cpp_value);
}

static void TestEnforceRangeShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueInt(info, impl->testShort());
}

static void TestEnforceRangeShortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeShort");

  // Prepare the value to be set.
  int16_t cpp_value = NativeValueTraits<IDLShortEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestShort(cpp_value);
}

static void TestUnsignedShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedShort());
}

static void TestUnsignedShortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUnsignedShort");

  // Prepare the value to be set.
  uint16_t cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedShort(cpp_value);
}

static void TestEnforceRangeUnsignedShortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->testUnsignedShort());
}

static void TestEnforceRangeUnsignedShortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testEnforceRangeUnsignedShort");

  // Prepare the value to be set.
  uint16_t cpp_value = NativeValueTraits<IDLUnsignedShortEnforceRange>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUnsignedShort(cpp_value);
}

static void TestByteStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueString(info, impl->testByteString(), info.GetIsolate());
}

static void TestByteStringAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testByteString");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestByteString(cpp_value);
}

static void TestUSVStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueString(info, impl->testUSVString(), info.GetIsolate());
}

static void TestUSVStringAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUSVString");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUSVString(cpp_value);
}

static void TestUSVStringOrNullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->testUSVStringOrNull(), info.GetIsolate());
}

static void TestUSVStringOrNullAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  TypeConversions* impl = V8TypeConversions::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "TypeConversions", "testUSVStringOrNull");

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = NativeValueTraits<IDLUSVStringOrNull>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUSVStringOrNull(cpp_value);
}

static void SetTestByteStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestByteString");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> byte_string;
  byte_string = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestByteString(byte_string);
}

static void SetTestByteStringDefaultNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestByteStringDefaultNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  V8StringResource<> byte_string;
  if (!info[0]->IsUndefined()) {
    byte_string = NativeValueTraits<IDLByteString>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    byte_string = nullptr;
  }

  impl->setTestByteString(byte_string);
}

static void SetTestUSVStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVString");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> usv_string;
  usv_string = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUSVString(usv_string);
}

static void SetTestUSVStringDefaultNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVStringDefaultNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  V8StringResource<> usv_string;
  if (!info[0]->IsUndefined()) {
    usv_string = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    usv_string = nullptr;
  }

  impl->setTestUSVString(usv_string);
}

static void SetTestUSVStringOrNullMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "TypeConversions", "setTestUSVStringOrNull");

  TypeConversions* impl = V8TypeConversions::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> usv_string_or_null;
  usv_string_or_null = NativeValueTraits<IDLUSVStringOrNull>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTestUSVStringOrNull(usv_string_or_null);
}

}  // namespace type_conversions_v8_internal

void V8TypeConversions::TestLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLong_Getter");

  type_conversions_v8_internal::TestLongAttributeGetter(info);
}

void V8TypeConversions::TestLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLong_Getter");

  type_conversions_v8_internal::TestEnforceRangeLongAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLong_Getter");

  type_conversions_v8_internal::TestUnsignedLongAttributeGetter(info);
}

void V8TypeConversions::TestUnsignedLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestUnsignedLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeUnsignedLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLong_Getter");

  type_conversions_v8_internal::TestEnforceRangeUnsignedLongAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeUnsignedLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeUnsignedLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLongLong_Getter");

  type_conversions_v8_internal::TestLongLongAttributeGetter(info);
}

void V8TypeConversions::TestLongLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testLongLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestLongLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLongLong_Getter");

  type_conversions_v8_internal::TestEnforceRangeLongLongAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeLongLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeLongLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeLongLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLongLong_Getter");

  type_conversions_v8_internal::TestUnsignedLongLongAttributeGetter(info);
}

void V8TypeConversions::TestUnsignedLongLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedLongLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestUnsignedLongLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeUnsignedLongLongAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLongLong_Getter");

  type_conversions_v8_internal::TestEnforceRangeUnsignedLongLongAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeUnsignedLongLongAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedLongLong_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeUnsignedLongLongAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByte_Getter");

  type_conversions_v8_internal::TestByteAttributeGetter(info);
}

void V8TypeConversions::TestByteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByte_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestByteAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeByteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeByte_Getter");

  type_conversions_v8_internal::TestEnforceRangeByteAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeByteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeByte_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeByteAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testOctet_Getter");

  type_conversions_v8_internal::TestOctetAttributeGetter(info);
}

void V8TypeConversions::TestOctetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testOctet_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestOctetAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeOctetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeOctet_Getter");

  type_conversions_v8_internal::TestEnforceRangeOctetAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeOctetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeOctet_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeOctetAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testShort_Getter");

  type_conversions_v8_internal::TestShortAttributeGetter(info);
}

void V8TypeConversions::TestShortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testShort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestShortAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeShort_Getter");

  type_conversions_v8_internal::TestEnforceRangeShortAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeShortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeShort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeShortAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedShort_Getter");

  type_conversions_v8_internal::TestUnsignedShortAttributeGetter(info);
}

void V8TypeConversions::TestUnsignedShortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUnsignedShort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestUnsignedShortAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestEnforceRangeUnsignedShortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedShort_Getter");

  type_conversions_v8_internal::TestEnforceRangeUnsignedShortAttributeGetter(info);
}

void V8TypeConversions::TestEnforceRangeUnsignedShortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testEnforceRangeUnsignedShort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestEnforceRangeUnsignedShortAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestByteStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByteString_Getter");

  type_conversions_v8_internal::TestByteStringAttributeGetter(info);
}

void V8TypeConversions::TestByteStringAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testByteString_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestByteStringAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestUSVStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVString_Getter");

  type_conversions_v8_internal::TestUSVStringAttributeGetter(info);
}

void V8TypeConversions::TestUSVStringAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVString_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestUSVStringAttributeSetter(v8_value, info);
}

void V8TypeConversions::TestUSVStringOrNullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVStringOrNull_Getter");

  type_conversions_v8_internal::TestUSVStringOrNullAttributeGetter(info);
}

void V8TypeConversions::TestUSVStringOrNullAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_testUSVStringOrNull_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  type_conversions_v8_internal::TestUSVStringOrNullAttributeSetter(v8_value, info);
}

void V8TypeConversions::SetTestByteStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestByteString");

  type_conversions_v8_internal::SetTestByteStringMethod(info);
}

void V8TypeConversions::SetTestByteStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestByteStringDefaultNull");

  type_conversions_v8_internal::SetTestByteStringDefaultNullMethod(info);
}

void V8TypeConversions::SetTestUSVStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVString");

  type_conversions_v8_internal::SetTestUSVStringMethod(info);
}

void V8TypeConversions::SetTestUSVStringDefaultNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVStringDefaultNull");

  type_conversions_v8_internal::SetTestUSVStringDefaultNullMethod(info);
}

void V8TypeConversions::SetTestUSVStringOrNullMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TypeConversions_setTestUSVStringOrNull");

  type_conversions_v8_internal::SetTestUSVStringOrNullMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8TypeConversionsAccessors[] = {
    { "testLong", V8TypeConversions::TestLongAttributeGetterCallback, V8TypeConversions::TestLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeLong", V8TypeConversions::TestEnforceRangeLongAttributeGetterCallback, V8TypeConversions::TestEnforceRangeLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedLong", V8TypeConversions::TestUnsignedLongAttributeGetterCallback, V8TypeConversions::TestUnsignedLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedLong", V8TypeConversions::TestEnforceRangeUnsignedLongAttributeGetterCallback, V8TypeConversions::TestEnforceRangeUnsignedLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testLongLong", V8TypeConversions::TestLongLongAttributeGetterCallback, V8TypeConversions::TestLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeLongLong", V8TypeConversions::TestEnforceRangeLongLongAttributeGetterCallback, V8TypeConversions::TestEnforceRangeLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedLongLong", V8TypeConversions::TestUnsignedLongLongAttributeGetterCallback, V8TypeConversions::TestUnsignedLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedLongLong", V8TypeConversions::TestEnforceRangeUnsignedLongLongAttributeGetterCallback, V8TypeConversions::TestEnforceRangeUnsignedLongLongAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testByte", V8TypeConversions::TestByteAttributeGetterCallback, V8TypeConversions::TestByteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeByte", V8TypeConversions::TestEnforceRangeByteAttributeGetterCallback, V8TypeConversions::TestEnforceRangeByteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testOctet", V8TypeConversions::TestOctetAttributeGetterCallback, V8TypeConversions::TestOctetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeOctet", V8TypeConversions::TestEnforceRangeOctetAttributeGetterCallback, V8TypeConversions::TestEnforceRangeOctetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testShort", V8TypeConversions::TestShortAttributeGetterCallback, V8TypeConversions::TestShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeShort", V8TypeConversions::TestEnforceRangeShortAttributeGetterCallback, V8TypeConversions::TestEnforceRangeShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testUnsignedShort", V8TypeConversions::TestUnsignedShortAttributeGetterCallback, V8TypeConversions::TestUnsignedShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testEnforceRangeUnsignedShort", V8TypeConversions::TestEnforceRangeUnsignedShortAttributeGetterCallback, V8TypeConversions::TestEnforceRangeUnsignedShortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testByteString", V8TypeConversions::TestByteStringAttributeGetterCallback, V8TypeConversions::TestByteStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testUSVString", V8TypeConversions::TestUSVStringAttributeGetterCallback, V8TypeConversions::TestUSVStringAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "testUSVStringOrNull", V8TypeConversions::TestUSVStringOrNullAttributeGetterCallback, V8TypeConversions::TestUSVStringOrNullAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8TypeConversionsMethods[] = {
    {"setTestByteString", V8TypeConversions::SetTestByteStringMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestByteStringDefaultNull", V8TypeConversions::SetTestByteStringDefaultNullMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVString", V8TypeConversions::SetTestUSVStringMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVStringDefaultNull", V8TypeConversions::SetTestUSVStringDefaultNullMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTestUSVStringOrNull", V8TypeConversions::SetTestUSVStringOrNullMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8TypeConversionsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8TypeConversions::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8TypeConversions::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8TypeConversionsAccessors, base::size(kV8TypeConversionsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8TypeConversionsMethods, base::size(kV8TypeConversionsMethods));

  // Custom signature

  V8TypeConversions::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8TypeConversions::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8TypeConversions::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8TypeConversions::GetWrapperTypeInfo()),
      InstallV8TypeConversionsTemplate);
}

bool V8TypeConversions::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8TypeConversions::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8TypeConversions::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8TypeConversions::GetWrapperTypeInfo(), v8_value);
}

TypeConversions* V8TypeConversions::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TypeConversions* NativeValueTraits<TypeConversions>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TypeConversions* native_value = V8TypeConversions::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TypeConversions"));
  }
  return native_value;
}

}  // namespace blink
