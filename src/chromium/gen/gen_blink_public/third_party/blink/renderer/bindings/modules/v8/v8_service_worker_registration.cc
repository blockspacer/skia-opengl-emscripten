// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker_registration.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_get_notification_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_push_manager.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sync_manager.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/modules/background_fetch/service_worker_registration_background_fetch.h"
#include "third_party/blink/renderer/modules/background_sync/service_worker_registration_sync.h"
#include "third_party/blink/renderer/modules/notifications/service_worker_registration_notifications.h"
#include "third_party/blink/renderer/modules/payments/payment_app_service_worker_registration.h"
#include "third_party/blink/renderer/modules/push_messaging/service_worker_registration_push.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
const WrapperTypeInfo v8_service_worker_registration_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ServiceWorkerRegistration::DomTemplate,
    V8ServiceWorkerRegistration::InstallConditionalFeatures,
    "ServiceWorkerRegistration",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ServiceWorkerRegistration.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ServiceWorkerRegistration::wrapper_type_info_ = v8_service_worker_registration_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, ServiceWorkerRegistration>::value,
    "ServiceWorkerRegistration does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&ServiceWorkerRegistration::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ServiceWorkerRegistration is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace service_worker_registration_v8_internal {

static void InstallingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  ServiceWorker* cpp_value(WTF::GetPtr(impl->installing()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#installing")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WaitingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  ServiceWorker* cpp_value(WTF::GetPtr(impl->waiting()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#waiting")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ActiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  ServiceWorker* cpp_value(WTF::GetPtr(impl->active()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#active")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NavigationPreloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  NavigationPreloadManager* cpp_value(WTF::GetPtr(impl->navigationPreload()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#navigationPreload")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ScopeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  V8SetReturnValueString(info, impl->scope(), info.GetIsolate());
}

static void UpdateViaCacheAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  V8SetReturnValueString(info, impl->updateViaCache(), info.GetIsolate());
}

static void OnupdatefoundAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onupdatefound()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnupdatefoundAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnupdatefound(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void BackgroundFetchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  BackgroundFetchManager* cpp_value(ServiceWorkerRegistrationBackgroundFetch::backgroundFetch(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#backgroundFetch")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SyncAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  SyncManager* cpp_value(ServiceWorkerRegistrationSync::sync(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#sync")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PaymentManagerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  PaymentManager* cpp_value(PaymentAppServiceWorkerRegistration::paymentManager(script_state, *impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#paymentManager")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PushManagerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(holder);

  PushManager* cpp_value(ServiceWorkerRegistrationPush::pushManager(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ServiceWorkerRegistration#pushManager")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void UpdateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerRegistration", "update");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerRegistration::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->update(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void UnregisterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerRegistration", "unregister");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerRegistration::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->unregister(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void ShowNotificationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerRegistration", "showNotification");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerRegistration::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> title;
  NotificationOptions* options;
  title = info[0];
  if (!title.Prepare(exception_state))
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<NotificationOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = ServiceWorkerRegistrationNotifications::showNotification(script_state, *impl, title, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void GetNotificationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ServiceWorkerRegistration", "getNotifications");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ServiceWorkerRegistration::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ServiceWorkerRegistration* impl = V8ServiceWorkerRegistration::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  GetNotificationOptions* filter;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('filter') is not an object.");
    return;
  }
  filter = NativeValueTraits<GetNotificationOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = ServiceWorkerRegistrationNotifications::getNotifications(script_state, *impl, filter);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace service_worker_registration_v8_internal

void V8ServiceWorkerRegistration::InstallingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_installing_Getter");

  service_worker_registration_v8_internal::InstallingAttributeGetter(info);
}

void V8ServiceWorkerRegistration::WaitingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_waiting_Getter");

  service_worker_registration_v8_internal::WaitingAttributeGetter(info);
}

void V8ServiceWorkerRegistration::ActiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_active_Getter");

  service_worker_registration_v8_internal::ActiveAttributeGetter(info);
}

void V8ServiceWorkerRegistration::NavigationPreloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_navigationPreload_Getter");

  service_worker_registration_v8_internal::NavigationPreloadAttributeGetter(info);
}

void V8ServiceWorkerRegistration::ScopeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_scope_Getter");

  service_worker_registration_v8_internal::ScopeAttributeGetter(info);
}

void V8ServiceWorkerRegistration::UpdateViaCacheAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_updateViaCache_Getter");

  service_worker_registration_v8_internal::UpdateViaCacheAttributeGetter(info);
}

void V8ServiceWorkerRegistration::OnupdatefoundAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_onupdatefound_Getter");

  service_worker_registration_v8_internal::OnupdatefoundAttributeGetter(info);
}

void V8ServiceWorkerRegistration::OnupdatefoundAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_onupdatefound_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  service_worker_registration_v8_internal::OnupdatefoundAttributeSetter(v8_value, info);
}

void V8ServiceWorkerRegistration::BackgroundFetchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_backgroundFetch_Getter");

  service_worker_registration_v8_internal::BackgroundFetchAttributeGetter(info);
}

void V8ServiceWorkerRegistration::SyncAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_sync_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kBackgroundSync);

  service_worker_registration_v8_internal::SyncAttributeGetter(info);
}

void V8ServiceWorkerRegistration::PaymentManagerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_paymentManager_Getter");

  service_worker_registration_v8_internal::PaymentManagerAttributeGetter(info);
}

void V8ServiceWorkerRegistration::PushManagerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_pushManager_Getter");

  service_worker_registration_v8_internal::PushManagerAttributeGetter(info);
}

void V8ServiceWorkerRegistration::UpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_update");

  service_worker_registration_v8_internal::UpdateMethod(info);
}

void V8ServiceWorkerRegistration::UnregisterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_unregister");

  service_worker_registration_v8_internal::UnregisterMethod(info);
}

void V8ServiceWorkerRegistration::ShowNotificationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_showNotification");

  service_worker_registration_v8_internal::ShowNotificationMethod(info);
}

void V8ServiceWorkerRegistration::GetNotificationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ServiceWorkerRegistration_getNotifications");

  service_worker_registration_v8_internal::GetNotificationsMethod(info);
}

static void InstallV8ServiceWorkerRegistrationTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ServiceWorkerRegistration::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8ServiceWorkerRegistration::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8ServiceWorkerRegistration::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ServiceWorkerRegistration::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ServiceWorkerRegistration::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ServiceWorkerRegistration::GetWrapperTypeInfo()),
      InstallV8ServiceWorkerRegistrationTemplate);
}

bool V8ServiceWorkerRegistration::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ServiceWorkerRegistration::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ServiceWorkerRegistration::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ServiceWorkerRegistration::GetWrapperTypeInfo(), v8_value);
}

ServiceWorkerRegistration* V8ServiceWorkerRegistration::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ServiceWorkerRegistration* NativeValueTraits<ServiceWorkerRegistration>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ServiceWorkerRegistration* native_value = V8ServiceWorkerRegistration::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ServiceWorkerRegistration"));
  }
  return native_value;
}

void V8ServiceWorkerRegistration::InstallConditionalFeatures(
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
          { "scope", V8ServiceWorkerRegistration::ScopeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "updateViaCache", V8ServiceWorkerRegistration::UpdateViaCacheAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "active", V8ServiceWorkerRegistration::ActiveAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "installing", V8ServiceWorkerRegistration::InstallingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "navigationPreload", V8ServiceWorkerRegistration::NavigationPreloadAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "sync", V8ServiceWorkerRegistration::SyncAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "waiting", V8ServiceWorkerRegistration::WaitingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onupdatefound", V8ServiceWorkerRegistration::OnupdatefoundAttributeGetterCallback, V8ServiceWorkerRegistration::OnupdatefoundAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
      if (RuntimeEnabledFeatures::BackgroundFetchEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "backgroundFetch", V8ServiceWorkerRegistration::BackgroundFetchAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::PaymentAppEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "paymentManager", V8ServiceWorkerRegistration::PaymentManagerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
      if (RuntimeEnabledFeatures::PushMessagingEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "pushManager", V8ServiceWorkerRegistration::PushManagerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
    if (is_secure_context) {
      {
        // Install update configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"update", V8ServiceWorkerRegistration::UpdateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install unregister configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"unregister", V8ServiceWorkerRegistration::UnregisterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::NotificationsEnabled()) {
        {
          // Install showNotification configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"showNotification", V8ServiceWorkerRegistration::ShowNotificationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
          };
          for (const auto& config : kConfigurations) {
            V8DOMConfiguration::InstallMethod(
                isolate, world, instance_object, prototype_object,
                interface_object, signature, config);
          }
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::NotificationsEnabled()) {
        {
          // Install getNotifications configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"getNotifications", V8ServiceWorkerRegistration::GetNotificationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
}

}  // namespace blink
