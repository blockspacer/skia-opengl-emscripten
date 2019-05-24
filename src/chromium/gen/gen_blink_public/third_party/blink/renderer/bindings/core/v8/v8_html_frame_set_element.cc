// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_frame_set_element.h"

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
const WrapperTypeInfo v8_html_frame_set_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLFrameSetElement::DomTemplate,
    nullptr,
    "HTMLFrameSetElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLFrameSetElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLFrameSetElement::wrapper_type_info_ = v8_html_frame_set_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLFrameSetElement>::value,
    "HTMLFrameSetElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLFrameSetElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLFrameSetElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_frame_set_element_v8_internal {

static void ColsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kColsAttr), info.GetIsolate());
}

static void ColsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kColsAttr, cpp_value);
}

static void RowsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kRowsAttr), info.GetIsolate());
}

static void RowsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRowsAttr, cpp_value);
}

static void OnblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onblur()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnblurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnblur(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onfocus()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnfocus(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onload()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnload(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresize()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresize(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onscroll()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnscroll(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnorientationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onorientationchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnorientationchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnorientationchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnafterprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onafterprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnafterprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnafterprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeprintAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onbeforeprint(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeprintAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeprint(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onbeforeunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnbeforeunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnBeforeUnloadEventHandler));
}

static void OnhashchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onhashchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnhashchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnhashchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnlanguagechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onlanguagechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlanguagechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnlanguagechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onmessage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmessageerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onmessageerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnmessageerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnofflineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onoffline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnofflineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnoffline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnonlineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::ononline(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnonlineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnonline(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpagehideAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpagehide(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpagehideAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpagehide(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpageshowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpageshow(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpageshowAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpageshow(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpopstateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onpopstate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpopstateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnpopstate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnportalactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onportalactivate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnportalactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnportalactivate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onrejectionhandled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnrejectionhandledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnrejectionhandled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnstorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onstorage(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstorageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnstorage(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onunhandledrejection(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunhandledrejectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnunhandledrejection(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnunloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  EventListener* cpp_value(WindowEventHandlers::onunload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnunloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFrameSetElement* impl = V8HTMLFrameSetElement::ToImpl(holder);

  // Prepare the value to be set.

  WindowEventHandlers::setOnunload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLFrameSetElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLFrameSetElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLFrameSetElement);
}

}  // namespace html_frame_set_element_v8_internal

void V8HTMLFrameSetElement::ColsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_cols_Getter");

  html_frame_set_element_v8_internal::ColsAttributeGetter(info);
}

void V8HTMLFrameSetElement::ColsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_cols_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::ColsAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::RowsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_rows_Getter");

  html_frame_set_element_v8_internal::RowsAttributeGetter(info);
}

void V8HTMLFrameSetElement::RowsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_rows_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::RowsAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onblur_Getter");

  html_frame_set_element_v8_internal::OnblurAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnblurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onblur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnblurAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onerror_Getter");

  html_frame_set_element_v8_internal::OnerrorAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onfocus_Getter");

  html_frame_set_element_v8_internal::OnfocusAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnfocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onfocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnfocusAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onload_Getter");

  html_frame_set_element_v8_internal::OnloadAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnloadAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnresizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onresize_Getter");

  html_frame_set_element_v8_internal::OnresizeAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnresizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onresize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnresizeAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onscroll_Getter");

  html_frame_set_element_v8_internal::OnscrollAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnscrollAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnorientationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onorientationchange_Getter");

  html_frame_set_element_v8_internal::OnorientationchangeAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnorientationchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onorientationchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnorientationchangeAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnafterprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onafterprint_Getter");

  html_frame_set_element_v8_internal::OnafterprintAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnafterprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onafterprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnafterprintAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnbeforeprintAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onbeforeprint_Getter");

  html_frame_set_element_v8_internal::OnbeforeprintAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnbeforeprintAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onbeforeprint_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnbeforeprintAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnbeforeunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onbeforeunload_Getter");

  html_frame_set_element_v8_internal::OnbeforeunloadAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnbeforeunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onbeforeunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnbeforeunloadAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnhashchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onhashchange_Getter");

  html_frame_set_element_v8_internal::OnhashchangeAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnhashchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onhashchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnhashchangeAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnlanguagechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onlanguagechange_Getter");

  html_frame_set_element_v8_internal::OnlanguagechangeAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnlanguagechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onlanguagechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnlanguagechangeAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onmessage_Getter");

  html_frame_set_element_v8_internal::OnmessageAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnmessageerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onmessageerror_Getter");

  html_frame_set_element_v8_internal::OnmessageerrorAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnmessageerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onmessageerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnmessageerrorAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnofflineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onoffline_Getter");

  html_frame_set_element_v8_internal::OnofflineAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnofflineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onoffline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnofflineAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnonlineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_ononline_Getter");

  html_frame_set_element_v8_internal::OnonlineAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnonlineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_ononline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnonlineAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnpagehideAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpagehide_Getter");

  html_frame_set_element_v8_internal::OnpagehideAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnpagehideAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpagehide_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnpagehideAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnpageshowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpageshow_Getter");

  html_frame_set_element_v8_internal::OnpageshowAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnpageshowAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpageshow_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnpageshowAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnpopstateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpopstate_Getter");

  html_frame_set_element_v8_internal::OnpopstateAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnpopstateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onpopstate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnpopstateAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnportalactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onportalactivate_Getter");

  html_frame_set_element_v8_internal::OnportalactivateAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnportalactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onportalactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnportalactivateAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onrejectionhandled_Getter");

  html_frame_set_element_v8_internal::OnrejectionhandledAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnrejectionhandledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onrejectionhandled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnrejectionhandledAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnstorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onstorage_Getter");

  html_frame_set_element_v8_internal::OnstorageAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnstorageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onstorage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnstorageAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onunhandledrejection_Getter");

  html_frame_set_element_v8_internal::OnunhandledrejectionAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnunhandledrejectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onunhandledrejection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnunhandledrejectionAttributeSetter(v8_value, info);
}

void V8HTMLFrameSetElement::OnunloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onunload_Getter");

  html_frame_set_element_v8_internal::OnunloadAttributeGetter(info);
}

void V8HTMLFrameSetElement::OnunloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFrameSetElement_onunload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_frame_set_element_v8_internal::OnunloadAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLFrameSetElementAccessors[] = {
    { "cols", V8HTMLFrameSetElement::ColsAttributeGetterCallback, V8HTMLFrameSetElement::ColsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rows", V8HTMLFrameSetElement::RowsAttributeGetterCallback, V8HTMLFrameSetElement::RowsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onblur", V8HTMLFrameSetElement::OnblurAttributeGetterCallback, V8HTMLFrameSetElement::OnblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8HTMLFrameSetElement::OnerrorAttributeGetterCallback, V8HTMLFrameSetElement::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfocus", V8HTMLFrameSetElement::OnfocusAttributeGetterCallback, V8HTMLFrameSetElement::OnfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onload", V8HTMLFrameSetElement::OnloadAttributeGetterCallback, V8HTMLFrameSetElement::OnloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresize", V8HTMLFrameSetElement::OnresizeAttributeGetterCallback, V8HTMLFrameSetElement::OnresizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onscroll", V8HTMLFrameSetElement::OnscrollAttributeGetterCallback, V8HTMLFrameSetElement::OnscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onafterprint", V8HTMLFrameSetElement::OnafterprintAttributeGetterCallback, V8HTMLFrameSetElement::OnafterprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeprint", V8HTMLFrameSetElement::OnbeforeprintAttributeGetterCallback, V8HTMLFrameSetElement::OnbeforeprintAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforeunload", V8HTMLFrameSetElement::OnbeforeunloadAttributeGetterCallback, V8HTMLFrameSetElement::OnbeforeunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onhashchange", V8HTMLFrameSetElement::OnhashchangeAttributeGetterCallback, V8HTMLFrameSetElement::OnhashchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlanguagechange", V8HTMLFrameSetElement::OnlanguagechangeAttributeGetterCallback, V8HTMLFrameSetElement::OnlanguagechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8HTMLFrameSetElement::OnmessageAttributeGetterCallback, V8HTMLFrameSetElement::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessageerror", V8HTMLFrameSetElement::OnmessageerrorAttributeGetterCallback, V8HTMLFrameSetElement::OnmessageerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onoffline", V8HTMLFrameSetElement::OnofflineAttributeGetterCallback, V8HTMLFrameSetElement::OnofflineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ononline", V8HTMLFrameSetElement::OnonlineAttributeGetterCallback, V8HTMLFrameSetElement::OnonlineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpagehide", V8HTMLFrameSetElement::OnpagehideAttributeGetterCallback, V8HTMLFrameSetElement::OnpagehideAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpageshow", V8HTMLFrameSetElement::OnpageshowAttributeGetterCallback, V8HTMLFrameSetElement::OnpageshowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpopstate", V8HTMLFrameSetElement::OnpopstateAttributeGetterCallback, V8HTMLFrameSetElement::OnpopstateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onrejectionhandled", V8HTMLFrameSetElement::OnrejectionhandledAttributeGetterCallback, V8HTMLFrameSetElement::OnrejectionhandledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstorage", V8HTMLFrameSetElement::OnstorageAttributeGetterCallback, V8HTMLFrameSetElement::OnstorageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunhandledrejection", V8HTMLFrameSetElement::OnunhandledrejectionAttributeGetterCallback, V8HTMLFrameSetElement::OnunhandledrejectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onunload", V8HTMLFrameSetElement::OnunloadAttributeGetterCallback, V8HTMLFrameSetElement::OnunloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8HTMLFrameSetElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLFrameSetElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLFrameSetElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_frame_set_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLFrameSetElementAccessors, base::size(kV8HTMLFrameSetElementAccessors));

  // Custom signature

  V8HTMLFrameSetElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLFrameSetElement::InstallRuntimeEnabledFeaturesOnTemplate(
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
        { "onorientationchange", V8HTMLFrameSetElement::OnorientationchangeAttributeGetterCallback, V8HTMLFrameSetElement::OnorientationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PortalsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onportalactivate", V8HTMLFrameSetElement::OnportalactivateAttributeGetterCallback, V8HTMLFrameSetElement::OnportalactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLFrameSetElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLFrameSetElement::GetWrapperTypeInfo()),
      InstallV8HTMLFrameSetElementTemplate);
}

bool V8HTMLFrameSetElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLFrameSetElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLFrameSetElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLFrameSetElement::GetWrapperTypeInfo(), v8_value);
}

HTMLFrameSetElement* V8HTMLFrameSetElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLFrameSetElement* NativeValueTraits<HTMLFrameSetElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLFrameSetElement* native_value = V8HTMLFrameSetElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLFrameSetElement"));
  }
  return native_value;
}

}  // namespace blink
