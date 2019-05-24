// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_error.h"

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
const WrapperTypeInfo v8_sql_error_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SQLError::DomTemplate,
    nullptr,
    "SQLError",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SQLError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SQLError::wrapper_type_info_ = v8_sql_error_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SQLError>::value,
    "SQLError inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SQLError::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SQLError is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace sql_error_v8_internal {

static void CodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SQLError* impl = V8SQLError::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->code());
}

static void MessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SQLError* impl = V8SQLError::ToImpl(holder);

  V8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

}  // namespace sql_error_v8_internal

void V8SQLError::CodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SQLError_code_Getter");

  sql_error_v8_internal::CodeAttributeGetter(info);
}

void V8SQLError::MessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SQLError_message_Getter");

  sql_error_v8_internal::MessageAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SQLErrorAccessors[] = {
    { "code", V8SQLError::CodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "message", V8SQLError::MessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8SQLErrorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SQLError::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SQLError::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"UNKNOWN_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"DATABASE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"VERSION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"TOO_LARGE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"QUOTA_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"SYNTAX_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"CONSTRAINT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
        {"TIMEOUT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == SQLError::kUnknownErr, "the value of SQLError_kUnknownErr does not match with implementation");
  static_assert(1 == SQLError::kDatabaseErr, "the value of SQLError_kDatabaseErr does not match with implementation");
  static_assert(2 == SQLError::kVersionErr, "the value of SQLError_kVersionErr does not match with implementation");
  static_assert(3 == SQLError::kTooLargeErr, "the value of SQLError_kTooLargeErr does not match with implementation");
  static_assert(4 == SQLError::kQuotaErr, "the value of SQLError_kQuotaErr does not match with implementation");
  static_assert(5 == SQLError::kSyntaxErr, "the value of SQLError_kSyntaxErr does not match with implementation");
  static_assert(6 == SQLError::kConstraintErr, "the value of SQLError_kConstraintErr does not match with implementation");
  static_assert(7 == SQLError::kTimeoutErr, "the value of SQLError_kTimeoutErr does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SQLErrorAccessors, base::size(kV8SQLErrorAccessors));

  // Custom signature

  V8SQLError::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SQLError::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SQLError::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SQLError::GetWrapperTypeInfo()),
      InstallV8SQLErrorTemplate);
}

bool V8SQLError::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SQLError::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SQLError::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SQLError::GetWrapperTypeInfo(), v8_value);
}

SQLError* V8SQLError::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SQLError* NativeValueTraits<SQLError>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SQLError* native_value = V8SQLError::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SQLError"));
  }
  return native_value;
}

}  // namespace blink
