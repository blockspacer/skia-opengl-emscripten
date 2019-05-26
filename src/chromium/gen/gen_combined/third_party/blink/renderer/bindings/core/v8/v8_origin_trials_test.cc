// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test_dictionary.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/testing/origin_trials_test_partial.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_origin_trials_test_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8OriginTrialsTest::DomTemplate,
    V8OriginTrialsTest::InstallConditionalFeatures,
    "OriginTrialsTest",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OriginTrialsTest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OriginTrialsTest::wrapper_type_info_ = v8_origin_trials_test_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OriginTrialsTest>::value,
    "OriginTrialsTest inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OriginTrialsTest::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OriginTrialsTest is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace origin_trials_test_v8_internal {

static void NormalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->normalAttribute());
}

static void StaticAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticAttribute());
}

static void ThrowingAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "OriginTrialsTest", "throwingAttribute");

  bool cpp_value(impl->throwingAttribute(script_state, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueBool(info, cpp_value);
}

static void UnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->unconditionalAttribute());
}

static void StaticUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticUnconditionalAttribute());
}

static void SecureUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->secureUnconditionalAttribute());
}

static void SecureStaticUnconditionalAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticUnconditionalAttribute());
}

static void SecureAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->secureAttribute());
}

static void SecureStaticAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticAttribute());
}

static void ImpliedAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->impliedAttribute());
}

static void InvalidOSAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, impl->invalidOSAttribute());
}

static void NormalAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, OriginTrialsTestPartial::normalAttributePartial(*impl));
}

static void StaticAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::staticAttributePartial());
}

static void SecureAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(holder);

  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureAttributePartial(*impl));
}

static void SecureStaticAttributePartialAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureStaticAttributePartial());
}

static void NormalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->normalMethod());
}

static void StaticMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticMethod());
}

static void GetDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  OriginTrialsTestDictionary* result = impl->getDictionaryMethod();
  V8SetReturnValue(info, result);
}

static void CheckDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OriginTrialsTest", "checkDictionaryMethod");

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  OriginTrialsTestDictionary* dict;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('dict') is not an object.");
    return;
  }
  dict = NativeValueTraits<OriginTrialsTestDictionary>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->checkDictionaryMethod(dict);
}

static void UnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->unconditionalMethod());
}

static void UnconditionalDictionaryMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OriginTrialsTest", "unconditionalDictionaryMethod");

  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  OriginTrialsTestDictionary* dict;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('dict') is not an object.");
    return;
  }
  dict = NativeValueTraits<OriginTrialsTestDictionary>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->unconditionalDictionaryMethod(dict);
}

static void StaticUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::staticUnconditionalMethod());
}

static void SecureUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->secureUnconditionalMethod());
}

static void SecureStaticUnconditionalMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticUnconditionalMethod());
}

static void SecureMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->secureMethod());
}

static void SecureStaticMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTest::secureStaticMethod());
}

static void NormalMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, OriginTrialsTestPartial::normalMethodPartial(*impl));
}

static void StaticMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::staticMethodPartial());
}

static void SecureMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  OriginTrialsTest* impl = V8OriginTrialsTest::ToImpl(info.Holder());

  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureMethodPartial(*impl));
}

static void SecureStaticMethodPartialMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8SetReturnValueBool(info, OriginTrialsTestPartial::secureStaticMethodPartial());
}

}  // namespace origin_trials_test_v8_internal

void V8OriginTrialsTest::NormalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalAttribute_Getter");

  origin_trials_test_v8_internal::NormalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::StaticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticAttribute_Getter");

  origin_trials_test_v8_internal::StaticAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::ThrowingAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_throwingAttribute_Getter");

  origin_trials_test_v8_internal::ThrowingAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::UnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalAttribute_Getter");

  origin_trials_test_v8_internal::UnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::StaticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticUnconditionalAttribute_Getter");

  origin_trials_test_v8_internal::StaticUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::SecureUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureUnconditionalAttribute_Getter");

  origin_trials_test_v8_internal::SecureUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::SecureStaticUnconditionalAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticUnconditionalAttribute_Getter");

  origin_trials_test_v8_internal::SecureStaticUnconditionalAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::SecureAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureAttribute_Getter");

  origin_trials_test_v8_internal::SecureAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::SecureStaticAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticAttribute_Getter");

  origin_trials_test_v8_internal::SecureStaticAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::ImpliedAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_impliedAttribute_Getter");

  origin_trials_test_v8_internal::ImpliedAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::InvalidOSAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_invalidOSAttribute_Getter");

  origin_trials_test_v8_internal::InvalidOSAttributeAttributeGetter(info);
}

void V8OriginTrialsTest::NormalAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalAttributePartial_Getter");

  origin_trials_test_v8_internal::NormalAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::StaticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticAttributePartial_Getter");

  origin_trials_test_v8_internal::StaticAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::SecureAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureAttributePartial_Getter");

  origin_trials_test_v8_internal::SecureAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::SecureStaticAttributePartialAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticAttributePartial_Getter");

  origin_trials_test_v8_internal::SecureStaticAttributePartialAttributeGetter(info);
}

void V8OriginTrialsTest::NormalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalMethod");

  origin_trials_test_v8_internal::NormalMethodMethod(info);
}

void V8OriginTrialsTest::StaticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticMethod");

  origin_trials_test_v8_internal::StaticMethodMethod(info);
}

void V8OriginTrialsTest::GetDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_getDictionaryMethod");

  origin_trials_test_v8_internal::GetDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::CheckDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_checkDictionaryMethod");

  origin_trials_test_v8_internal::CheckDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::UnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalMethod");

  origin_trials_test_v8_internal::UnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::UnconditionalDictionaryMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_unconditionalDictionaryMethod");

  origin_trials_test_v8_internal::UnconditionalDictionaryMethodMethod(info);
}

void V8OriginTrialsTest::StaticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticUnconditionalMethod");

  origin_trials_test_v8_internal::StaticUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::SecureUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureUnconditionalMethod");

  origin_trials_test_v8_internal::SecureUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::SecureStaticUnconditionalMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticUnconditionalMethod");

  origin_trials_test_v8_internal::SecureStaticUnconditionalMethodMethod(info);
}

void V8OriginTrialsTest::SecureMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureMethod");

  origin_trials_test_v8_internal::SecureMethodMethod(info);
}

void V8OriginTrialsTest::SecureStaticMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticMethod");

  origin_trials_test_v8_internal::SecureStaticMethodMethod(info);
}

void V8OriginTrialsTest::NormalMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_normalMethodPartial");

  origin_trials_test_v8_internal::NormalMethodPartialMethod(info);
}

void V8OriginTrialsTest::StaticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_staticMethodPartial");

  origin_trials_test_v8_internal::StaticMethodPartialMethod(info);
}

void V8OriginTrialsTest::SecureMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureMethodPartial");

  origin_trials_test_v8_internal::SecureMethodPartialMethod(info);
}

void V8OriginTrialsTest::SecureStaticMethodPartialMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OriginTrialsTest_secureStaticMethodPartial");

  origin_trials_test_v8_internal::SecureStaticMethodPartialMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8OriginTrialsTestAccessors[] = {
    { "throwingAttribute", V8OriginTrialsTest::ThrowingAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unconditionalAttribute", V8OriginTrialsTest::UnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "staticUnconditionalAttribute", V8OriginTrialsTest::StaticUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "secureStaticUnconditionalAttribute", V8OriginTrialsTest::SecureStaticUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8OriginTrialsTestMethods[] = {
    {"getDictionaryMethod", V8OriginTrialsTest::GetDictionaryMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkDictionaryMethod", V8OriginTrialsTest::CheckDictionaryMethodMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unconditionalMethod", V8OriginTrialsTest::UnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unconditionalDictionaryMethod", V8OriginTrialsTest::UnconditionalDictionaryMethodMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"staticUnconditionalMethod", V8OriginTrialsTest::StaticUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8OriginTrialsTestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8OriginTrialsTest::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8OriginTrialsTest::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"UNCONDITIONAL_CONSTANT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(99)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(1 == OriginTrialsTest::kConstant, "the value of OriginTrialsTest_kConstant does not match with implementation");
  static_assert(99 == OriginTrialsTest::kUnconditionalConstant, "the value of OriginTrialsTest_kUnconditionalConstant does not match with implementation");
  static_assert(2 == OriginTrialsTestPartial::kConstantPartial, "the value of OriginTrialsTest_kConstantPartial does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OriginTrialsTestAccessors, base::size(kV8OriginTrialsTestAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OriginTrialsTestMethods, base::size(kV8OriginTrialsTestMethods));

  // Custom signature

  V8OriginTrialsTest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8OriginTrialsTest::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIImplied(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8OriginTrialsTest::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kimpliedAttributeConfigurations[] = {
      { "impliedAttribute", V8OriginTrialsTest::ImpliedAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kimpliedAttributeConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIImplied(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallOriginTrialsSampleAPIImplied(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIImplied(ScriptState* script_state) {
  InstallOriginTrialsSampleAPIImplied(script_state, v8::Local<v8::Object>());
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIInvalidOS(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8OriginTrialsTest::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kinvalidOSAttributeConfigurations[] = {
      { "invalidOSAttribute", V8OriginTrialsTest::InvalidOSAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kinvalidOSAttributeConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIInvalidOS(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallOriginTrialsSampleAPIInvalidOS(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPIInvalidOS(ScriptState* script_state) {
  InstallOriginTrialsSampleAPIInvalidOS(script_state, v8::Local<v8::Object>());
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPI(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8OriginTrialsTest::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  static constexpr V8DOMConfiguration::AccessorConfiguration
  knormalAttributeConfigurations[] = {
      { "normalAttribute", V8OriginTrialsTest::NormalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : knormalAttributeConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  knormalAttributePartialConfigurations[] = {
      { "normalAttributePartial", V8OriginTrialsTest::NormalAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : knormalAttributePartialConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    ksecureAttributeConfigurations[] = {
        { "secureAttribute", V8OriginTrialsTest::SecureAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : ksecureAttributeConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    ksecureAttributePartialConfigurations[] = {
        { "secureAttributePartial", V8OriginTrialsTest::SecureAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : ksecureAttributePartialConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    ksecureStaticAttributeConfigurations[] = {
        { "secureStaticAttribute", V8OriginTrialsTest::SecureStaticAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : ksecureStaticAttributeConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::AccessorConfiguration
    ksecureStaticAttributePartialConfigurations[] = {
        { "secureStaticAttributePartial", V8OriginTrialsTest::SecureStaticAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
    };
    for (const auto& config : ksecureStaticAttributePartialConfigurations) {
      V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                          interface, signature, config);
    }
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kstaticAttributeConfigurations[] = {
      { "staticAttribute", V8OriginTrialsTest::StaticAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kstaticAttributeConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kstaticAttributePartialConfigurations[] = {
      { "staticAttributePartial", V8OriginTrialsTest::StaticAttributePartialAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kstaticAttributePartialConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::ConstantConfiguration
  kCONSTANTConfiguration = {"CONSTANT", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)};
  V8DOMConfiguration::InstallConstant(
      isolate, interface, prototype, kCONSTANTConfiguration);
  static constexpr V8DOMConfiguration::ConstantConfiguration
  kCONSTANTPARTIALConfiguration = {"CONSTANT_PARTIAL", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)};
  V8DOMConfiguration::InstallConstant(
      isolate, interface, prototype, kCONSTANTPARTIALConfiguration);
  static constexpr V8DOMConfiguration::MethodConfiguration
  kNormalMethodConfigurations[] = {
      {"normalMethod", V8OriginTrialsTest::NormalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kNormalMethodConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kNormalMethodPartialConfigurations[] = {
      {"normalMethodPartial", V8OriginTrialsTest::NormalMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kNormalMethodPartialConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kSecureMethodConfigurations[] = {
        {"secureMethod", V8OriginTrialsTest::SecureMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kSecureMethodConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kSecureMethodPartialConfigurations[] = {
        {"secureMethodPartial", V8OriginTrialsTest::SecureMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kSecureMethodPartialConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kSecureStaticMethodConfigurations[] = {
        {"secureStaticMethod", V8OriginTrialsTest::SecureStaticMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kSecureStaticMethodConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kSecureStaticMethodPartialConfigurations[] = {
        {"secureStaticMethodPartial", V8OriginTrialsTest::SecureStaticMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kSecureStaticMethodPartialConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kStaticMethodConfigurations[] = {
      {"staticMethod", V8OriginTrialsTest::StaticMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kStaticMethodConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kStaticMethodPartialConfigurations[] = {
      {"staticMethodPartial", V8OriginTrialsTest::StaticMethodPartialMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kStaticMethodPartialConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPI(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8OriginTrialsTest::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallOriginTrialsSampleAPI(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8OriginTrialsTest::InstallOriginTrialsSampleAPI(ScriptState* script_state) {
  InstallOriginTrialsSampleAPI(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8OriginTrialsTest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8OriginTrialsTest::GetWrapperTypeInfo()),
      InstallV8OriginTrialsTestTemplate);
}

bool V8OriginTrialsTest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8OriginTrialsTest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8OriginTrialsTest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8OriginTrialsTest::GetWrapperTypeInfo(), v8_value);
}

OriginTrialsTest* V8OriginTrialsTest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OriginTrialsTest* NativeValueTraits<OriginTrialsTest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OriginTrialsTest* native_value = V8OriginTrialsTest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OriginTrialsTest"));
  }
  return native_value;
}

void V8OriginTrialsTest::InstallConditionalFeatures(
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
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "secureUnconditionalAttribute", V8OriginTrialsTest::SecureUnconditionalAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install secureUnconditionalMethod configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"secureUnconditionalMethod", V8OriginTrialsTest::SecureUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install secureStaticUnconditionalMethod configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"secureStaticUnconditionalMethod", V8OriginTrialsTest::SecureStaticUnconditionalMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
