// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
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
const WrapperTypeInfo v8_xpath_result_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XPathResult::DomTemplate,
    nullptr,
    "XPathResult",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XPathResult.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XPathResult::wrapper_type_info_ = v8_xpath_result_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XPathResult>::value,
    "XPathResult inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XPathResult::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XPathResult is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xpath_result_v8_internal {

static void ResultTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->resultType());
}

static void NumberValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "numberValue");

  double cpp_value(impl->numberValue(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValue(info, cpp_value);
}

static void StringValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "stringValue");

  String cpp_value(impl->stringValue(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void BooleanValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "booleanValue");

  bool cpp_value(impl->booleanValue(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueBool(info, cpp_value);
}

static void SingleNodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "singleNodeValue");

  Node* cpp_value(impl->singleNodeValue(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueFast(info, cpp_value, impl);
}

static void InvalidIteratorStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  V8SetReturnValueBool(info, impl->invalidIteratorState());
}

static void SnapshotLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XPathResult* impl = V8XPathResult::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "XPathResult", "snapshotLength");

  uint32_t cpp_value(impl->snapshotLength(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void IterateNextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathResult", "iterateNext");

  XPathResult* impl = V8XPathResult::ToImpl(info.Holder());

  Node* result = impl->iterateNext(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void SnapshotItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "XPathResult", "snapshotItem");

  XPathResult* impl = V8XPathResult::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  Node* result = impl->snapshotItem(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace xpath_result_v8_internal

void V8XPathResult::ResultTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_resultType_Getter");

  xpath_result_v8_internal::ResultTypeAttributeGetter(info);
}

void V8XPathResult::NumberValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_numberValue_Getter");

  xpath_result_v8_internal::NumberValueAttributeGetter(info);
}

void V8XPathResult::StringValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_stringValue_Getter");

  xpath_result_v8_internal::StringValueAttributeGetter(info);
}

void V8XPathResult::BooleanValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_booleanValue_Getter");

  xpath_result_v8_internal::BooleanValueAttributeGetter(info);
}

void V8XPathResult::SingleNodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_singleNodeValue_Getter");

  xpath_result_v8_internal::SingleNodeValueAttributeGetter(info);
}

void V8XPathResult::InvalidIteratorStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_invalidIteratorState_Getter");

  xpath_result_v8_internal::InvalidIteratorStateAttributeGetter(info);
}

void V8XPathResult::SnapshotLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_snapshotLength_Getter");

  xpath_result_v8_internal::SnapshotLengthAttributeGetter(info);
}

void V8XPathResult::IterateNextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_iterateNext");

  xpath_result_v8_internal::IterateNextMethod(info);
}

void V8XPathResult::SnapshotItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XPathResult_snapshotItem");

  xpath_result_v8_internal::SnapshotItemMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8XPathResultAccessors[] = {
    { "resultType", V8XPathResult::ResultTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "numberValue", V8XPathResult::NumberValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "stringValue", V8XPathResult::StringValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "booleanValue", V8XPathResult::BooleanValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "singleNodeValue", V8XPathResult::SingleNodeValueAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "invalidIteratorState", V8XPathResult::InvalidIteratorStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "snapshotLength", V8XPathResult::SnapshotLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8XPathResultMethods[] = {
    {"iterateNext", V8XPathResult::IterateNextMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"snapshotItem", V8XPathResult::SnapshotItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8XPathResultTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XPathResult::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8XPathResult::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"ANY_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"NUMBER_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"STRING_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"BOOLEAN_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"UNORDERED_NODE_ITERATOR_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"ORDERED_NODE_ITERATOR_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"UNORDERED_NODE_SNAPSHOT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
        {"ORDERED_NODE_SNAPSHOT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
        {"ANY_UNORDERED_NODE_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
        {"FIRST_ORDERED_NODE_TYPE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == XPathResult::kAnyType, "the value of XPathResult_kAnyType does not match with implementation");
  static_assert(1 == XPathResult::kNumberType, "the value of XPathResult_kNumberType does not match with implementation");
  static_assert(2 == XPathResult::kStringType, "the value of XPathResult_kStringType does not match with implementation");
  static_assert(3 == XPathResult::kBooleanType, "the value of XPathResult_kBooleanType does not match with implementation");
  static_assert(4 == XPathResult::kUnorderedNodeIteratorType, "the value of XPathResult_kUnorderedNodeIteratorType does not match with implementation");
  static_assert(5 == XPathResult::kOrderedNodeIteratorType, "the value of XPathResult_kOrderedNodeIteratorType does not match with implementation");
  static_assert(6 == XPathResult::kUnorderedNodeSnapshotType, "the value of XPathResult_kUnorderedNodeSnapshotType does not match with implementation");
  static_assert(7 == XPathResult::kOrderedNodeSnapshotType, "the value of XPathResult_kOrderedNodeSnapshotType does not match with implementation");
  static_assert(8 == XPathResult::kAnyUnorderedNodeType, "the value of XPathResult_kAnyUnorderedNodeType does not match with implementation");
  static_assert(9 == XPathResult::kFirstOrderedNodeType, "the value of XPathResult_kFirstOrderedNodeType does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XPathResultAccessors, base::size(kV8XPathResultAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XPathResultMethods, base::size(kV8XPathResultMethods));

  // Custom signature

  V8XPathResult::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XPathResult::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XPathResult::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XPathResult::GetWrapperTypeInfo()),
      InstallV8XPathResultTemplate);
}

bool V8XPathResult::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XPathResult::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XPathResult::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XPathResult::GetWrapperTypeInfo(), v8_value);
}

XPathResult* V8XPathResult::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XPathResult* NativeValueTraits<XPathResult>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XPathResult* native_value = V8XPathResult::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XPathResult"));
  }
  return native_value;
}

}  // namespace blink
