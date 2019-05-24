// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_request.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_address.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_details_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_method_data.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_payment_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_payment_request_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PaymentRequest::DomTemplate,
    V8PaymentRequest::InstallConditionalFeatures,
    "PaymentRequest",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PaymentRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PaymentRequest::wrapper_type_info_ = v8_payment_request_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, PaymentRequest>::value,
    "PaymentRequest does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&PaymentRequest::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PaymentRequest is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace payment_request_v8_internal {

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void ShippingAddressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  PaymentAddress* cpp_value(WTF::GetPtr(impl->getShippingAddress()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PaymentRequest#shippingAddress")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ShippingOptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->shippingOption(), info.GetIsolate());
}

static void ShippingTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->shippingType(), info.GetIsolate());
}

static void OnshippingaddresschangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onshippingaddresschange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnshippingaddresschangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnshippingaddresschange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnshippingoptionchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onshippingoptionchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnshippingoptionchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnshippingoptionchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpaymentmethodchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onpaymentmethodchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpaymentmethodchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  PaymentRequest* impl = V8PaymentRequest::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnpaymentmethodchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ShowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaymentRequest", "show");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8PaymentRequest::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  PaymentRequest* impl = V8PaymentRequest::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise details_promise;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptPromise result = impl->show(script_state);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  details_promise = ScriptPromise::Cast(ScriptState::Current(info.GetIsolate()), info[0]);
  if (!details_promise.IsUndefinedOrNull() && !details_promise.IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('detailsPromise') is not an object.");
    return;
  }

  ScriptPromise result = impl->show(script_state, details_promise);
  V8SetReturnValue(info, result.V8Value());
}

static void AbortMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaymentRequest", "abort");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8PaymentRequest::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  PaymentRequest* impl = V8PaymentRequest::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->abort(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void CanMakePaymentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaymentRequest", "canMakePayment");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8PaymentRequest::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  PaymentRequest* impl = V8PaymentRequest::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->canMakePayment(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void HasEnrolledInstrumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "PaymentRequest", "hasEnrolledInstrument");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8PaymentRequest::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  PaymentRequest* impl = V8PaymentRequest::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->hasEnrolledInstrument(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "PaymentRequest");

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HeapVector<Member<PaymentMethodData>> method_data;
  PaymentDetailsInit* details;
  PaymentOptions* options;
  method_data = NativeValueTraits<IDLSequence<PaymentMethodData>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('details') is not an object.");
    return;
  }
  details = NativeValueTraits<PaymentDetailsInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<PaymentOptions>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  PaymentRequest* impl = PaymentRequest::Create(execution_context, method_data, details, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8PaymentRequest::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("PaymentRequest"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  payment_request_v8_internal::Constructor(info);
}

}  // namespace payment_request_v8_internal

void V8PaymentRequest::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_id_Getter");

  payment_request_v8_internal::IdAttributeGetter(info);
}

void V8PaymentRequest::ShippingAddressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_shippingAddress_Getter");

  payment_request_v8_internal::ShippingAddressAttributeGetter(info);
}

void V8PaymentRequest::ShippingOptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_shippingOption_Getter");

  payment_request_v8_internal::ShippingOptionAttributeGetter(info);
}

void V8PaymentRequest::ShippingTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_shippingType_Getter");

  payment_request_v8_internal::ShippingTypeAttributeGetter(info);
}

void V8PaymentRequest::OnshippingaddresschangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onshippingaddresschange_Getter");

  payment_request_v8_internal::OnshippingaddresschangeAttributeGetter(info);
}

void V8PaymentRequest::OnshippingaddresschangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onshippingaddresschange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  payment_request_v8_internal::OnshippingaddresschangeAttributeSetter(v8_value, info);
}

void V8PaymentRequest::OnshippingoptionchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onshippingoptionchange_Getter");

  payment_request_v8_internal::OnshippingoptionchangeAttributeGetter(info);
}

void V8PaymentRequest::OnshippingoptionchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onshippingoptionchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  payment_request_v8_internal::OnshippingoptionchangeAttributeSetter(v8_value, info);
}

void V8PaymentRequest::OnpaymentmethodchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onpaymentmethodchange_Getter");

  payment_request_v8_internal::OnpaymentmethodchangeAttributeGetter(info);
}

void V8PaymentRequest::OnpaymentmethodchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_onpaymentmethodchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  payment_request_v8_internal::OnpaymentmethodchangeAttributeSetter(v8_value, info);
}

void V8PaymentRequest::ShowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_show");

  payment_request_v8_internal::ShowMethod(info);
}

void V8PaymentRequest::AbortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_abort");

  payment_request_v8_internal::AbortMethod(info);
}

void V8PaymentRequest::CanMakePaymentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_canMakePayment");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaymentRequest_CanMakePayment_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaymentRequest_CanMakePayment_Method);
  payment_request_v8_internal::CanMakePaymentMethod(info);
}

void V8PaymentRequest::HasEnrolledInstrumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PaymentRequest_hasEnrolledInstrument");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8PaymentRequest_HasEnrolledInstrument_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8PaymentRequest_HasEnrolledInstrument_Method);
  payment_request_v8_internal::HasEnrolledInstrumentMethod(info);
}

static void InstallV8PaymentRequestTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PaymentRequest::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8PaymentRequest::kInternalFieldCount);
  interface_template->SetCallHandler(payment_request_v8_internal::ConstructorCallback);
  interface_template->SetLength(2);

  if (!RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8PaymentRequest::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PaymentRequest::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::PaymentRequestEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8PaymentRequest::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PaymentRequest::GetWrapperTypeInfo()),
      InstallV8PaymentRequestTemplate);
}

bool V8PaymentRequest::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PaymentRequest::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PaymentRequest::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PaymentRequest::GetWrapperTypeInfo(), v8_value);
}

PaymentRequest* V8PaymentRequest::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PaymentRequest* NativeValueTraits<PaymentRequest>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PaymentRequest* native_value = V8PaymentRequest::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PaymentRequest"));
  }
  return native_value;
}

void V8PaymentRequest::InstallConditionalFeatures(
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
          { "id", V8PaymentRequest::IdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "shippingOption", V8PaymentRequest::ShippingOptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "shippingType", V8PaymentRequest::ShippingTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "shippingAddress", V8PaymentRequest::ShippingAddressAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onshippingaddresschange", V8PaymentRequest::OnshippingaddresschangeAttributeGetterCallback, V8PaymentRequest::OnshippingaddresschangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "onshippingoptionchange", V8PaymentRequest::OnshippingoptionchangeAttributeGetterCallback, V8PaymentRequest::OnshippingoptionchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
      if (RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "onpaymentmethodchange", V8PaymentRequest::OnpaymentmethodchangeAttributeGetterCallback, V8PaymentRequest::OnpaymentmethodchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
    if (is_secure_context) {
      {
        // Install show configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"show", V8PaymentRequest::ShowMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install abort configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"abort", V8PaymentRequest::AbortMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install canMakePayment configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"canMakePayment", V8PaymentRequest::CanMakePaymentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      if (RuntimeEnabledFeatures::PaymentRequestHasEnrolledInstrumentEnabled()) {
        {
          // Install hasEnrolledInstrument configuration
          const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
              {"hasEnrolledInstrument", V8PaymentRequest::HasEnrolledInstrumentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
