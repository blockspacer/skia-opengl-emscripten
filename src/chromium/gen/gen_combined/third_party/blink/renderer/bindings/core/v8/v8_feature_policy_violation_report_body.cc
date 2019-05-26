// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_feature_policy_violation_report_body.h"

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
const WrapperTypeInfo v8_feature_policy_violation_report_body_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8FeaturePolicyViolationReportBody::DomTemplate,
    nullptr,
    "FeaturePolicyViolationReportBody",
    V8ReportBody::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in FeaturePolicyViolationReportBody.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& FeaturePolicyViolationReportBody::wrapper_type_info_ = v8_feature_policy_violation_report_body_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, FeaturePolicyViolationReportBody>::value,
    "FeaturePolicyViolationReportBody inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&FeaturePolicyViolationReportBody::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "FeaturePolicyViolationReportBody is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace feature_policy_violation_report_body_v8_internal {

static void FeatureIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  V8SetReturnValueString(info, impl->featureId(), info.GetIsolate());
}

static void SourceFileAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->sourceFile(), info.GetIsolate());
}

static void LineNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->lineNumber(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void ColumnNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->columnNumber(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void DispositionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  V8SetReturnValueString(info, impl->disposition(), info.GetIsolate());
}

static void MessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  FeaturePolicyViolationReportBody* impl = V8FeaturePolicyViolationReportBody::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->message(), info.GetIsolate());
}

}  // namespace feature_policy_violation_report_body_v8_internal

void V8FeaturePolicyViolationReportBody::FeatureIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_featureId_Getter");

  feature_policy_violation_report_body_v8_internal::FeatureIdAttributeGetter(info);
}

void V8FeaturePolicyViolationReportBody::SourceFileAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_sourceFile_Getter");

  feature_policy_violation_report_body_v8_internal::SourceFileAttributeGetter(info);
}

void V8FeaturePolicyViolationReportBody::LineNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_lineNumber_Getter");

  feature_policy_violation_report_body_v8_internal::LineNumberAttributeGetter(info);
}

void V8FeaturePolicyViolationReportBody::ColumnNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_columnNumber_Getter");

  feature_policy_violation_report_body_v8_internal::ColumnNumberAttributeGetter(info);
}

void V8FeaturePolicyViolationReportBody::DispositionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_disposition_Getter");

  feature_policy_violation_report_body_v8_internal::DispositionAttributeGetter(info);
}

void V8FeaturePolicyViolationReportBody::MessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_FeaturePolicyViolationReportBody_message_Getter");

  feature_policy_violation_report_body_v8_internal::MessageAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8FeaturePolicyViolationReportBodyAccessors[] = {
    { "featureId", V8FeaturePolicyViolationReportBody::FeatureIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sourceFile", V8FeaturePolicyViolationReportBody::SourceFileAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lineNumber", V8FeaturePolicyViolationReportBody::LineNumberAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "columnNumber", V8FeaturePolicyViolationReportBody::ColumnNumberAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disposition", V8FeaturePolicyViolationReportBody::DispositionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "message", V8FeaturePolicyViolationReportBody::MessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8FeaturePolicyViolationReportBodyTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8FeaturePolicyViolationReportBody::GetWrapperTypeInfo()->interface_name, V8ReportBody::DomTemplate(isolate, world), V8FeaturePolicyViolationReportBody::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8FeaturePolicyViolationReportBodyAccessors, base::size(kV8FeaturePolicyViolationReportBodyAccessors));

  // Custom signature

  V8FeaturePolicyViolationReportBody::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8FeaturePolicyViolationReportBody::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8FeaturePolicyViolationReportBody::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8FeaturePolicyViolationReportBody::GetWrapperTypeInfo()),
      InstallV8FeaturePolicyViolationReportBodyTemplate);
}

bool V8FeaturePolicyViolationReportBody::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8FeaturePolicyViolationReportBody::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8FeaturePolicyViolationReportBody::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8FeaturePolicyViolationReportBody::GetWrapperTypeInfo(), v8_value);
}

FeaturePolicyViolationReportBody* V8FeaturePolicyViolationReportBody::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

FeaturePolicyViolationReportBody* NativeValueTraits<FeaturePolicyViolationReportBody>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FeaturePolicyViolationReportBody* native_value = V8FeaturePolicyViolationReportBody::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "FeaturePolicyViolationReportBody"));
  }
  return native_value;
}

}  // namespace blink
