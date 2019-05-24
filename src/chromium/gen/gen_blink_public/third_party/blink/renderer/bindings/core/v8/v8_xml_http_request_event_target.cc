// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xml_http_request_event_target.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
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
const WrapperTypeInfo v8_xml_http_request_event_target_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XMLHttpRequestEventTarget::DomTemplate,
    nullptr,
    "XMLHttpRequestEventTarget",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLHttpRequestEventTarget.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XMLHttpRequestEventTarget::wrapper_type_info_ = v8_xml_http_request_event_target_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XMLHttpRequestEventTarget>::value,
    "XMLHttpRequestEventTarget inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XMLHttpRequestEventTarget::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XMLHttpRequestEventTarget is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xml_http_request_event_target_v8_internal {

static void OnloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onloadstart()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnloadstart(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onprogress()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnprogressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnprogress(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onabort()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnabort(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onload()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnload(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntimeoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->ontimeout()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntimeoutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOntimeout(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onloadend()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  XMLHttpRequestEventTarget* impl = V8XMLHttpRequestEventTarget::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnloadend(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

}  // namespace xml_http_request_event_target_v8_internal

void V8XMLHttpRequestEventTarget::OnloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadstart_Getter");

  xml_http_request_event_target_v8_internal::OnloadstartAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnloadstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnloadstartAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OnprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onprogress_Getter");

  xml_http_request_event_target_v8_internal::OnprogressAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnprogressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onprogress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnprogressAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onabort_Getter");

  xml_http_request_event_target_v8_internal::OnabortAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnabortAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onerror_Getter");

  xml_http_request_event_target_v8_internal::OnerrorAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OnloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onload_Getter");

  xml_http_request_event_target_v8_internal::OnloadAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnloadAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OntimeoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_ontimeout_Getter");

  xml_http_request_event_target_v8_internal::OntimeoutAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OntimeoutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_ontimeout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OntimeoutAttributeSetter(v8_value, info);
}

void V8XMLHttpRequestEventTarget::OnloadendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadend_Getter");

  xml_http_request_event_target_v8_internal::OnloadendAttributeGetter(info);
}

void V8XMLHttpRequestEventTarget::OnloadendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XMLHttpRequestEventTarget_onloadend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  xml_http_request_event_target_v8_internal::OnloadendAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8XMLHttpRequestEventTargetAccessors[] = {
    { "onloadstart", V8XMLHttpRequestEventTarget::OnloadstartAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnloadstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8XMLHttpRequestEventTarget::OnprogressAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8XMLHttpRequestEventTarget::OnabortAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8XMLHttpRequestEventTarget::OnerrorAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onload", V8XMLHttpRequestEventTarget::OnloadAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontimeout", V8XMLHttpRequestEventTarget::OntimeoutAttributeGetterCallback, V8XMLHttpRequestEventTarget::OntimeoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadend", V8XMLHttpRequestEventTarget::OnloadendAttributeGetterCallback, V8XMLHttpRequestEventTarget::OnloadendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8XMLHttpRequestEventTargetTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XMLHttpRequestEventTarget::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8XMLHttpRequestEventTarget::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XMLHttpRequestEventTargetAccessors, base::size(kV8XMLHttpRequestEventTargetAccessors));

  // Custom signature

  V8XMLHttpRequestEventTarget::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XMLHttpRequestEventTarget::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8XMLHttpRequestEventTarget::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XMLHttpRequestEventTarget::GetWrapperTypeInfo()),
      InstallV8XMLHttpRequestEventTargetTemplate);
}

bool V8XMLHttpRequestEventTarget::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XMLHttpRequestEventTarget::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XMLHttpRequestEventTarget::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XMLHttpRequestEventTarget::GetWrapperTypeInfo(), v8_value);
}

XMLHttpRequestEventTarget* V8XMLHttpRequestEventTarget::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XMLHttpRequestEventTarget* NativeValueTraits<XMLHttpRequestEventTarget>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XMLHttpRequestEventTarget* native_value = V8XMLHttpRequestEventTarget::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XMLHttpRequestEventTarget"));
  }
  return native_value;
}

}  // namespace blink
