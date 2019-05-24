// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_application_cache.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
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
const WrapperTypeInfo v8_application_cache_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ApplicationCache::DomTemplate,
    V8ApplicationCache::InstallConditionalFeatures,
    "ApplicationCache",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ApplicationCache.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ApplicationCache::wrapper_type_info_ = v8_application_cache_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ApplicationCache>::value,
    "ApplicationCache inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ApplicationCache::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ApplicationCache is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace application_cache_v8_internal {

static void StatusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->status());
}

static void OncheckingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onchecking()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncheckingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnchecking(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnnoupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onnoupdate()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnnoupdateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnnoupdate(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndownloadingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->ondownloading()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndownloadingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOndownloading(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onprogress()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnprogressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnprogress(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnupdatereadyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onupdateready()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnupdatereadyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnupdateready(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncachedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oncached()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncachedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOncached(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnobsoleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onobsolete()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnobsoleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ApplicationCache* impl = V8ApplicationCache::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnobsolete(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void UpdateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ApplicationCache", "update");

  ApplicationCache* impl = V8ApplicationCache::ToImpl(info.Holder());

  impl->update(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ApplicationCache* impl = V8ApplicationCache::ToImpl(info.Holder());

  impl->abort();
}

static void SwapCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ApplicationCache", "swapCache");

  ApplicationCache* impl = V8ApplicationCache::ToImpl(info.Holder());

  impl->swapCache(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace application_cache_v8_internal

void V8ApplicationCache::StatusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_status_Getter");

  application_cache_v8_internal::StatusAttributeGetter(info);
}

void V8ApplicationCache::OncheckingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onchecking_Getter");

  application_cache_v8_internal::OncheckingAttributeGetter(info);
}

void V8ApplicationCache::OncheckingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onchecking_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OncheckingAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onerror_Getter");

  application_cache_v8_internal::OnerrorAttributeGetter(info);
}

void V8ApplicationCache::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OnnoupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onnoupdate_Getter");

  application_cache_v8_internal::OnnoupdateAttributeGetter(info);
}

void V8ApplicationCache::OnnoupdateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onnoupdate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OnnoupdateAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OndownloadingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_ondownloading_Getter");

  application_cache_v8_internal::OndownloadingAttributeGetter(info);
}

void V8ApplicationCache::OndownloadingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_ondownloading_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OndownloadingAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OnprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onprogress_Getter");

  application_cache_v8_internal::OnprogressAttributeGetter(info);
}

void V8ApplicationCache::OnprogressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onprogress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OnprogressAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OnupdatereadyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onupdateready_Getter");

  application_cache_v8_internal::OnupdatereadyAttributeGetter(info);
}

void V8ApplicationCache::OnupdatereadyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onupdateready_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OnupdatereadyAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OncachedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_oncached_Getter");

  application_cache_v8_internal::OncachedAttributeGetter(info);
}

void V8ApplicationCache::OncachedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_oncached_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OncachedAttributeSetter(v8_value, info);
}

void V8ApplicationCache::OnobsoleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onobsolete_Getter");

  application_cache_v8_internal::OnobsoleteAttributeGetter(info);
}

void V8ApplicationCache::OnobsoleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_onobsolete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  application_cache_v8_internal::OnobsoleteAttributeSetter(v8_value, info);
}

void V8ApplicationCache::UpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_update");

  application_cache_v8_internal::UpdateMethod(info);
}

void V8ApplicationCache::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_abort");

  application_cache_v8_internal::AbortMethod(info);
}

void V8ApplicationCache::SwapCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ApplicationCache_swapCache");

  application_cache_v8_internal::SwapCacheMethod(info);
}

static void InstallV8ApplicationCacheTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ApplicationCache::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8ApplicationCache::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"UNCACHED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"IDLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"CHECKING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"DOWNLOADING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"UPDATEREADY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"OBSOLETE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }

  // Custom signature

  V8ApplicationCache::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ApplicationCache::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ApplicationCache::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ApplicationCache::GetWrapperTypeInfo()),
      InstallV8ApplicationCacheTemplate);
}

bool V8ApplicationCache::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ApplicationCache::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ApplicationCache::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ApplicationCache::GetWrapperTypeInfo(), v8_value);
}

ApplicationCache* V8ApplicationCache::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ApplicationCache* NativeValueTraits<ApplicationCache>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ApplicationCache* native_value = V8ApplicationCache::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ApplicationCache"));
  }
  return native_value;
}

void V8ApplicationCache::InstallConditionalFeatures(
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
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "status", V8ApplicationCache::StatusAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "oncached", V8ApplicationCache::OncachedAttributeGetterCallback, V8ApplicationCache::OncachedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onchecking", V8ApplicationCache::OncheckingAttributeGetterCallback, V8ApplicationCache::OncheckingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "ondownloading", V8ApplicationCache::OndownloadingAttributeGetterCallback, V8ApplicationCache::OndownloadingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onerror", V8ApplicationCache::OnerrorAttributeGetterCallback, V8ApplicationCache::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onnoupdate", V8ApplicationCache::OnnoupdateAttributeGetterCallback, V8ApplicationCache::OnnoupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onobsolete", V8ApplicationCache::OnobsoleteAttributeGetterCallback, V8ApplicationCache::OnobsoleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onprogress", V8ApplicationCache::OnprogressAttributeGetterCallback, V8ApplicationCache::OnprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onupdateready", V8ApplicationCache::OnupdatereadyAttributeGetterCallback, V8ApplicationCache::OnupdatereadyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      {
        // Install update configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"update", V8ApplicationCache::UpdateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      {
        // Install abort configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"abort", V8ApplicationCache::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context || !RuntimeEnabledFeatures::RestrictAppCacheToSecureContextsEnabled()) {
      {
        // Install swapCache configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"swapCache", V8ApplicationCache::SwapCacheMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
