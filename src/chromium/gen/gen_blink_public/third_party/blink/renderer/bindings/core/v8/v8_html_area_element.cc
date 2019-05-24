// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_area_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
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
const WrapperTypeInfo v8_html_area_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLAreaElement::DomTemplate,
    nullptr,
    "HTMLAreaElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLAreaElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLAreaElement::wrapper_type_info_ = v8_html_area_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLAreaElement>::value,
    "HTMLAreaElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLAreaElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLAreaElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_area_element_v8_internal {

static void AltAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAltAttr), info.GetIsolate());
}

static void AltAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAltAttr, cpp_value);
}

static void CoordsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCoordsAttr), info.GetIsolate());
}

static void CoordsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCoordsAttr, cpp_value);
}

static void DownloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kDownloadAttr), info.GetIsolate());
}

static void DownloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kDownloadAttr, cpp_value);
}

static void ShapeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kShapeAttr), info.GetIsolate());
}

static void ShapeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kShapeAttr, cpp_value);
}

static void TargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTargetAttr), info.GetIsolate());
}

static void TargetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTargetAttr, cpp_value);
}

static void PingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kPingAttr), info.GetIsolate());
}

static void PingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "ping");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kPingAttr, cpp_value);
}

static void RelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kRelAttr), info.GetIsolate());
}

static void RelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRelAttr, cpp_value);
}

static void RelListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->relList()), impl);
}

static void RelListAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => relList.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "relList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "relList"))
      .ToLocal(&target)) {
    return;
  }
  if (!target->IsObject()) {
    exception_state.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(
          isolate->GetCurrentContext(),
          V8AtomicString(isolate, "value"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void ReferrerPolicyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kReferrerpolicyAttr));

  if (cpp_value.IsEmpty()) {
    ;
  } else if (EqualIgnoringASCIICase(cpp_value, "")) {
    cpp_value = "";
  } else if (EqualIgnoringASCIICase(cpp_value, "no-referrer")) {
    cpp_value = "no-referrer";
  } else if (EqualIgnoringASCIICase(cpp_value, "origin")) {
    cpp_value = "origin";
  } else if (EqualIgnoringASCIICase(cpp_value, "no-referrer-when-downgrade")) {
    cpp_value = "no-referrer-when-downgrade";
  } else if (EqualIgnoringASCIICase(cpp_value, "origin-when-cross-origin")) {
    cpp_value = "origin-when-cross-origin";
  } else if (EqualIgnoringASCIICase(cpp_value, "unsafe-url")) {
    cpp_value = "unsafe-url";
  } else {
    cpp_value = "";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void ReferrerPolicyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kReferrerpolicyAttr, cpp_value);
}

static void NoHrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kNohrefAttr));
}

static void NoHrefAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "noHref");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kNohrefAttr, cpp_value);
}

static void HrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->href(result);

  V8SetReturnValue(info, result);
}

static void HrefAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "href");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setHref(cpp_value, exception_state);
}

static void OriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void ProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->protocol(), info.GetIsolate());
}

static void ProtocolAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "protocol");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setProtocol(cpp_value);
}

static void UsernameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->username(), info.GetIsolate());
}

static void UsernameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "username");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setUsername(cpp_value);
}

static void PasswordAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->password(), info.GetIsolate());
}

static void PasswordAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "password");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPassword(cpp_value);
}

static void HostAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->host(), info.GetIsolate());
}

static void HostAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "host");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setHost(cpp_value);
}

static void HostnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->hostname(), info.GetIsolate());
}

static void HostnameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "hostname");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setHostname(cpp_value);
}

static void PortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->port(), info.GetIsolate());
}

static void PortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "port");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPort(cpp_value);
}

static void PathnameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->pathname(), info.GetIsolate());
}

static void PathnameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "pathname");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPathname(cpp_value);
}

static void SearchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->search(), info.GetIsolate());
}

static void SearchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "search");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSearch(cpp_value);
}

static void HashAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->hash(), info.GetIsolate());
}

static void HashAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLAreaElement", "hash");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setHash(cpp_value);
}

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLAreaElement", "toString");
  CEReactionsScope ce_reactions_scope;

  HTMLAreaElement* impl = V8HTMLAreaElement::ToImpl(info.Holder());

  String result = impl->href(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLAreaElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLAreaElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLAreaElement);
}

}  // namespace html_area_element_v8_internal

void V8HTMLAreaElement::AltAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_alt_Getter");

  html_area_element_v8_internal::AltAttributeGetter(info);
}

void V8HTMLAreaElement::AltAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_alt_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::AltAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::CoordsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_coords_Getter");

  html_area_element_v8_internal::CoordsAttributeGetter(info);
}

void V8HTMLAreaElement::CoordsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_coords_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::CoordsAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::DownloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_download_Getter");

  html_area_element_v8_internal::DownloadAttributeGetter(info);
}

void V8HTMLAreaElement::DownloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_download_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::DownloadAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::ShapeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_shape_Getter");

  html_area_element_v8_internal::ShapeAttributeGetter(info);
}

void V8HTMLAreaElement::ShapeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_shape_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::ShapeAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::TargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_target_Getter");

  html_area_element_v8_internal::TargetAttributeGetter(info);
}

void V8HTMLAreaElement::TargetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_target_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::TargetAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::PingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_ping_Getter");

  html_area_element_v8_internal::PingAttributeGetter(info);
}

void V8HTMLAreaElement::PingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_ping_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::PingAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::RelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_rel_Getter");

  html_area_element_v8_internal::RelAttributeGetter(info);
}

void V8HTMLAreaElement::RelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_rel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::RelAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::RelListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_relList_Getter");

  html_area_element_v8_internal::RelListAttributeGetter(info);
}

void V8HTMLAreaElement::RelListAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_relList_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::RelListAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::ReferrerPolicyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_referrerPolicy_Getter");

  html_area_element_v8_internal::ReferrerPolicyAttributeGetter(info);
}

void V8HTMLAreaElement::ReferrerPolicyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_referrerPolicy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::ReferrerPolicyAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::NoHrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_noHref_Getter");

  html_area_element_v8_internal::NoHrefAttributeGetter(info);
}

void V8HTMLAreaElement::NoHrefAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_noHref_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::NoHrefAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::HrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_href_Getter");

  html_area_element_v8_internal::HrefAttributeGetter(info);
}

void V8HTMLAreaElement::HrefAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_href_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::HrefAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::OriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_origin_Getter");

  html_area_element_v8_internal::OriginAttributeGetter(info);
}

void V8HTMLAreaElement::ProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_protocol_Getter");

  html_area_element_v8_internal::ProtocolAttributeGetter(info);
}

void V8HTMLAreaElement::ProtocolAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_protocol_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::ProtocolAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::UsernameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_username_Getter");

  html_area_element_v8_internal::UsernameAttributeGetter(info);
}

void V8HTMLAreaElement::UsernameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_username_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::UsernameAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::PasswordAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_password_Getter");

  html_area_element_v8_internal::PasswordAttributeGetter(info);
}

void V8HTMLAreaElement::PasswordAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_password_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::PasswordAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::HostAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_host_Getter");

  html_area_element_v8_internal::HostAttributeGetter(info);
}

void V8HTMLAreaElement::HostAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_host_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::HostAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::HostnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_hostname_Getter");

  html_area_element_v8_internal::HostnameAttributeGetter(info);
}

void V8HTMLAreaElement::HostnameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_hostname_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::HostnameAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::PortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_port_Getter");

  html_area_element_v8_internal::PortAttributeGetter(info);
}

void V8HTMLAreaElement::PortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_port_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::PortAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::PathnameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_pathname_Getter");

  html_area_element_v8_internal::PathnameAttributeGetter(info);
}

void V8HTMLAreaElement::PathnameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_pathname_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::PathnameAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::SearchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_search_Getter");

  html_area_element_v8_internal::SearchAttributeGetter(info);
}

void V8HTMLAreaElement::SearchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_search_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::SearchAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::HashAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_hash_Getter");

  html_area_element_v8_internal::HashAttributeGetter(info);
}

void V8HTMLAreaElement::HashAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_hash_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_area_element_v8_internal::HashAttributeSetter(v8_value, info);
}

void V8HTMLAreaElement::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLAreaElement_toString");

  html_area_element_v8_internal::ToStringMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLAreaElementAccessors[] = {
    { "alt", V8HTMLAreaElement::AltAttributeGetterCallback, V8HTMLAreaElement::AltAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "coords", V8HTMLAreaElement::CoordsAttributeGetterCallback, V8HTMLAreaElement::CoordsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "download", V8HTMLAreaElement::DownloadAttributeGetterCallback, V8HTMLAreaElement::DownloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shape", V8HTMLAreaElement::ShapeAttributeGetterCallback, V8HTMLAreaElement::ShapeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "target", V8HTMLAreaElement::TargetAttributeGetterCallback, V8HTMLAreaElement::TargetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ping", V8HTMLAreaElement::PingAttributeGetterCallback, V8HTMLAreaElement::PingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rel", V8HTMLAreaElement::RelAttributeGetterCallback, V8HTMLAreaElement::RelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "relList", V8HTMLAreaElement::RelListAttributeGetterCallback, V8HTMLAreaElement::RelListAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "referrerPolicy", V8HTMLAreaElement::ReferrerPolicyAttributeGetterCallback, V8HTMLAreaElement::ReferrerPolicyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "noHref", V8HTMLAreaElement::NoHrefAttributeGetterCallback, V8HTMLAreaElement::NoHrefAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "href", V8HTMLAreaElement::HrefAttributeGetterCallback, V8HTMLAreaElement::HrefAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "origin", V8HTMLAreaElement::OriginAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "protocol", V8HTMLAreaElement::ProtocolAttributeGetterCallback, V8HTMLAreaElement::ProtocolAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "username", V8HTMLAreaElement::UsernameAttributeGetterCallback, V8HTMLAreaElement::UsernameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "password", V8HTMLAreaElement::PasswordAttributeGetterCallback, V8HTMLAreaElement::PasswordAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "host", V8HTMLAreaElement::HostAttributeGetterCallback, V8HTMLAreaElement::HostAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hostname", V8HTMLAreaElement::HostnameAttributeGetterCallback, V8HTMLAreaElement::HostnameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "port", V8HTMLAreaElement::PortAttributeGetterCallback, V8HTMLAreaElement::PortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pathname", V8HTMLAreaElement::PathnameAttributeGetterCallback, V8HTMLAreaElement::PathnameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "search", V8HTMLAreaElement::SearchAttributeGetterCallback, V8HTMLAreaElement::SearchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hash", V8HTMLAreaElement::HashAttributeGetterCallback, V8HTMLAreaElement::HashAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLAreaElementMethods[] = {
    {"toString", V8HTMLAreaElement::ToStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLAreaElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLAreaElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLAreaElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_area_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLAreaElementAccessors, base::size(kV8HTMLAreaElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLAreaElementMethods, base::size(kV8HTMLAreaElementMethods));

  // Custom signature

  V8HTMLAreaElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLAreaElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLAreaElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLAreaElement::GetWrapperTypeInfo()),
      InstallV8HTMLAreaElementTemplate);
}

bool V8HTMLAreaElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLAreaElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLAreaElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLAreaElement::GetWrapperTypeInfo(), v8_value);
}

HTMLAreaElement* V8HTMLAreaElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLAreaElement* NativeValueTraits<HTMLAreaElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLAreaElement* native_value = V8HTMLAreaElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLAreaElement"));
  }
  return native_value;
}

}  // namespace blink
