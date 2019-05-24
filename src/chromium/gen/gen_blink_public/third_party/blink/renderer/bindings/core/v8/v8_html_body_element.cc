// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_body_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/window_event_handlers.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
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
const WrapperTypeInfo v8_html_body_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLBodyElement::DomTemplate,
    nullptr,
    "HTMLBodyElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLBodyElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLBodyElement::wrapper_type_info_ = v8_html_body_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLBodyElement>::value,
    "HTMLBodyElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLBodyElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLBodyElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_body_element_v8_internal {

static void TextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTextAttr), info.GetIsolate());
}

static void TextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTextAttr, cpp_value);
}

static void LinkAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kLinkAttr), info.GetIsolate());
}

static void LinkAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kLinkAttr, cpp_value);
}

static void VLinkAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kVlinkAttr), info.GetIsolate());
}

static void VLinkAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kVlinkAttr, cpp_value);
}

static void ALinkAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlinkAttr), info.GetIsolate());
}

static void ALinkAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlinkAttr, cpp_value);
}

static void BgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBgcolorAttr), info.GetIsolate());
}

static void BgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBgcolorAttr, cpp_value);
}

static void BackgroundAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBackgroundAttr), info.GetIsolate());
}

static void BackgroundAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBackgroundAttr, cpp_value);
}

static void OnblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onblur()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnblurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnblur(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onfocus()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnfocus(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onload()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnload(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresize()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresize(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onscroll()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnscroll(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnorientationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onorientationchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnorientationchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnorientationchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnafterprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onafterprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnafterprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnafterprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onbeforeprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onbeforeunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnBeforeUnloadEventHandler));
}

static void OnhashchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onhashchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnhashchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnhashchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnlanguagechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onlanguagechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlanguagechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnlanguagechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onmessage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onmessageerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessageerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnofflineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onoffline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnofflineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnoffline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnonlineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::ononline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnonlineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnonline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpagehideAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpagehide(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpagehideAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpagehide(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpageshowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpageshow(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpageshowAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpageshow(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpopstateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpopstate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpopstateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpopstate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnportalactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onportalactivate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnportalactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnportalactivate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onrejectionhandled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnrejectionhandledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnrejectionhandled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnstorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onstorage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstorageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnstorage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onunhandledrejection(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunhandledrejectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnunhandledrejection(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLBodyElement* impl = V8HTMLBodyElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLBodyElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLBodyElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLBodyElement);
}

}  // namespace html_body_element_v8_internal

void V8HTMLBodyElement::TextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_text_Getter");

  html_body_element_v8_internal::TextAttributeGetter(info);
}

void V8HTMLBodyElement::TextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_text_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::TextAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::LinkAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_link_Getter");

  html_body_element_v8_internal::LinkAttributeGetter(info);
}

void V8HTMLBodyElement::LinkAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_link_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::LinkAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::VLinkAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_vLink_Getter");

  html_body_element_v8_internal::VLinkAttributeGetter(info);
}

void V8HTMLBodyElement::VLinkAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_vLink_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::VLinkAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::ALinkAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_aLink_Getter");

  html_body_element_v8_internal::ALinkAttributeGetter(info);
}

void V8HTMLBodyElement::ALinkAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_aLink_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::ALinkAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::BgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_bgColor_Getter");

  html_body_element_v8_internal::BgColorAttributeGetter(info);
}

void V8HTMLBodyElement::BgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_bgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::BgColorAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::BackgroundAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_background_Getter");

  html_body_element_v8_internal::BackgroundAttributeGetter(info);
}

void V8HTMLBodyElement::BackgroundAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_background_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::BackgroundAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onblur_Getter");

  html_body_element_v8_internal::OnblurAttributeGetter(info);
}

void V8HTMLBodyElement::OnblurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onblur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnblurAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onerror_Getter");

  html_body_element_v8_internal::OnerrorAttributeGetter(info);
}

void V8HTMLBodyElement::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onfocus_Getter");

  html_body_element_v8_internal::OnfocusAttributeGetter(info);
}

void V8HTMLBodyElement::OnfocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onfocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnfocusAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onload_Getter");

  html_body_element_v8_internal::OnloadAttributeGetter(info);
}

void V8HTMLBodyElement::OnloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnloadAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnresizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onresize_Getter");

  html_body_element_v8_internal::OnresizeAttributeGetter(info);
}

void V8HTMLBodyElement::OnresizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onresize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnresizeAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onscroll_Getter");

  html_body_element_v8_internal::OnscrollAttributeGetter(info);
}

void V8HTMLBodyElement::OnscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnscrollAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnorientationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onorientationchange_Getter");

  html_body_element_v8_internal::OnorientationchangeAttributeGetter(info);
}

void V8HTMLBodyElement::OnorientationchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onorientationchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnorientationchangeAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnafterprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onafterprint_Getter");

  html_body_element_v8_internal::OnafterprintAttributeGetter(info);
}

void V8HTMLBodyElement::OnafterprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onafterprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnafterprintAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnbeforeprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onbeforeprint_Getter");

  html_body_element_v8_internal::OnbeforeprintAttributeGetter(info);
}

void V8HTMLBodyElement::OnbeforeprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onbeforeprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnbeforeprintAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnbeforeunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onbeforeunload_Getter");

  html_body_element_v8_internal::OnbeforeunloadAttributeGetter(info);
}

void V8HTMLBodyElement::OnbeforeunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onbeforeunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnbeforeunloadAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnhashchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onhashchange_Getter");

  html_body_element_v8_internal::OnhashchangeAttributeGetter(info);
}

void V8HTMLBodyElement::OnhashchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onhashchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnhashchangeAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnlanguagechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onlanguagechange_Getter");

  html_body_element_v8_internal::OnlanguagechangeAttributeGetter(info);
}

void V8HTMLBodyElement::OnlanguagechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onlanguagechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnlanguagechangeAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onmessage_Getter");

  html_body_element_v8_internal::OnmessageAttributeGetter(info);
}

void V8HTMLBodyElement::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onmessageerror_Getter");

  html_body_element_v8_internal::OnmessageerrorAttributeGetter(info);
}

void V8HTMLBodyElement::OnmessageerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onmessageerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnmessageerrorAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnofflineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onoffline_Getter");

  html_body_element_v8_internal::OnofflineAttributeGetter(info);
}

void V8HTMLBodyElement::OnofflineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onoffline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnofflineAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnonlineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_ononline_Getter");

  html_body_element_v8_internal::OnonlineAttributeGetter(info);
}

void V8HTMLBodyElement::OnonlineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_ononline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnonlineAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnpagehideAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpagehide_Getter");

  html_body_element_v8_internal::OnpagehideAttributeGetter(info);
}

void V8HTMLBodyElement::OnpagehideAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpagehide_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnpagehideAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnpageshowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpageshow_Getter");

  html_body_element_v8_internal::OnpageshowAttributeGetter(info);
}

void V8HTMLBodyElement::OnpageshowAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpageshow_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnpageshowAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnpopstateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpopstate_Getter");

  html_body_element_v8_internal::OnpopstateAttributeGetter(info);
}

void V8HTMLBodyElement::OnpopstateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onpopstate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnpopstateAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnportalactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onportalactivate_Getter");

  html_body_element_v8_internal::OnportalactivateAttributeGetter(info);
}

void V8HTMLBodyElement::OnportalactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onportalactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnportalactivateAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onrejectionhandled_Getter");

  html_body_element_v8_internal::OnrejectionhandledAttributeGetter(info);
}

void V8HTMLBodyElement::OnrejectionhandledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onrejectionhandled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnrejectionhandledAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnstorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onstorage_Getter");

  html_body_element_v8_internal::OnstorageAttributeGetter(info);
}

void V8HTMLBodyElement::OnstorageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onstorage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnstorageAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onunhandledrejection_Getter");

  html_body_element_v8_internal::OnunhandledrejectionAttributeGetter(info);
}

void V8HTMLBodyElement::OnunhandledrejectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onunhandledrejection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnunhandledrejectionAttributeSetter(v8_value, info);
}

void V8HTMLBodyElement::OnunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onunload_Getter");

  html_body_element_v8_internal::OnunloadAttributeGetter(info);
}

void V8HTMLBodyElement::OnunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLBodyElement_onunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_body_element_v8_internal::OnunloadAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLBodyElementAccessors[] = {
    { "text", V8HTMLBodyElement::TextAttributeGetterCallback, V8HTMLBodyElement::TextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "link", V8HTMLBodyElement::LinkAttributeGetterCallback, V8HTMLBodyElement::LinkAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "vLink", V8HTMLBodyElement::VLinkAttributeGetterCallback, V8HTMLBodyElement::VLinkAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "aLink", V8HTMLBodyElement::ALinkAttributeGetterCallback, V8HTMLBodyElement::ALinkAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8HTMLBodyElement::BgColorAttributeGetterCallback, V8HTMLBodyElement::BgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "background", V8HTMLBodyElement::BackgroundAttributeGetterCallback, V8HTMLBodyElement::BackgroundAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onblur", V8HTMLBodyElement::OnblurAttributeGetterCallback, V8HTMLBodyElement::OnblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8HTMLBodyElement::OnerrorAttributeGetterCallback, V8HTMLBodyElement::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfocus", V8HTMLBodyElement::OnfocusAttributeGetterCallback, V8HTMLBodyElement::OnfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onload", V8HTMLBodyElement::OnloadAttributeGetterCallback, V8HTMLBodyElement::OnloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresize", V8HTMLBodyElement::OnresizeAttributeGetterCallback, V8HTMLBodyElement::OnresizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onscroll", V8HTMLBodyElement::OnscrollAttributeGetterCallback, V8HTMLBodyElement::OnscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onafterprint", V8HTMLBodyElement::OnafterprintAttributeGetterCallback, V8HTMLBodyElement::OnafterprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeprint", V8HTMLBodyElement::OnbeforeprintAttributeGetterCallback, V8HTMLBodyElement::OnbeforeprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeunload", V8HTMLBodyElement::OnbeforeunloadAttributeGetterCallback, V8HTMLBodyElement::OnbeforeunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onhashchange", V8HTMLBodyElement::OnhashchangeAttributeGetterCallback, V8HTMLBodyElement::OnhashchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlanguagechange", V8HTMLBodyElement::OnlanguagechangeAttributeGetterCallback, V8HTMLBodyElement::OnlanguagechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8HTMLBodyElement::OnmessageAttributeGetterCallback, V8HTMLBodyElement::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8HTMLBodyElement::OnmessageerrorAttributeGetterCallback, V8HTMLBodyElement::OnmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onoffline", V8HTMLBodyElement::OnofflineAttributeGetterCallback, V8HTMLBodyElement::OnofflineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ononline", V8HTMLBodyElement::OnonlineAttributeGetterCallback, V8HTMLBodyElement::OnonlineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpagehide", V8HTMLBodyElement::OnpagehideAttributeGetterCallback, V8HTMLBodyElement::OnpagehideAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpageshow", V8HTMLBodyElement::OnpageshowAttributeGetterCallback, V8HTMLBodyElement::OnpageshowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpopstate", V8HTMLBodyElement::OnpopstateAttributeGetterCallback, V8HTMLBodyElement::OnpopstateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onrejectionhandled", V8HTMLBodyElement::OnrejectionhandledAttributeGetterCallback, V8HTMLBodyElement::OnrejectionhandledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstorage", V8HTMLBodyElement::OnstorageAttributeGetterCallback, V8HTMLBodyElement::OnstorageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunhandledrejection", V8HTMLBodyElement::OnunhandledrejectionAttributeGetterCallback, V8HTMLBodyElement::OnunhandledrejectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunload", V8HTMLBodyElement::OnunloadAttributeGetterCallback, V8HTMLBodyElement::OnunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8HTMLBodyElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLBodyElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLBodyElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_body_element_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLBodyElementAccessors, base::size(kV8HTMLBodyElementAccessors));

  // Custom signature

  V8HTMLBodyElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLBodyElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::OrientationEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onorientationchange", V8HTMLBodyElement::OnorientationchangeAttributeGetterCallback, V8HTMLBodyElement::OnorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onportalactivate", V8HTMLBodyElement::OnportalactivateAttributeGetterCallback, V8HTMLBodyElement::OnportalactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLBodyElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLBodyElement::GetWrapperTypeInfo()),
      InstallV8HTMLBodyElementTemplate);
}

bool V8HTMLBodyElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLBodyElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLBodyElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLBodyElement::GetWrapperTypeInfo(), v8_value);
}

HTMLBodyElement* V8HTMLBodyElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLBodyElement* NativeValueTraits<HTMLBodyElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLBodyElement* native_value = V8HTMLBodyElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLBodyElement"));
  }
  return native_value;
}

}  // namespace blink
