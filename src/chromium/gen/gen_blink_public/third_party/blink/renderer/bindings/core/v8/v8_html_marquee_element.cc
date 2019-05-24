// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_marquee_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
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
const WrapperTypeInfo v8_html_marquee_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLMarqueeElement::DomTemplate,
    nullptr,
    "HTMLMarqueeElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLMarqueeElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLMarqueeElement::wrapper_type_info_ = v8_html_marquee_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLMarqueeElement>::value,
    "HTMLMarqueeElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLMarqueeElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLMarqueeElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_marquee_element_v8_internal {

static void BehaviorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBehaviorAttr), info.GetIsolate());
}

static void BehaviorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBehaviorAttr, cpp_value);
}

static void BgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBgcolorAttr), info.GetIsolate());
}

static void BgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBgcolorAttr, cpp_value);
}

static void DirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kDirectionAttr), info.GetIsolate());
}

static void DirectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kDirectionAttr, cpp_value);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHeightAttr), info.GetIsolate());
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHeightAttr, cpp_value);
}

static void HspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kHspaceAttr))));
}

static void HspaceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "hspace");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kHspaceAttr, cpp_value);
}

static void LoopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->loop());
}

static void LoopAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "loop");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLoop(cpp_value, exception_state);
}

static void ScrollAmountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->scrollAmount());
}

static void ScrollAmountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "scrollAmount");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollAmount(cpp_value);
}

static void ScrollDelayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->scrollDelay());
}

static void ScrollDelayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "scrollDelay");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollDelay(cpp_value);
}

static void TrueSpeedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kTruespeedAttr));
}

static void TrueSpeedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "trueSpeed");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kTruespeedAttr, cpp_value);
}

static void VspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kVspaceAttr))));
}

static void VspaceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMarqueeElement", "vspace");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kVspaceAttr, cpp_value);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWidthAttr), info.GetIsolate());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kWidthAttr, cpp_value);
}

static void StartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(info.Holder());

  impl->start();
}

static void StopMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMarqueeElement* impl = V8HTMLMarqueeElement::ToImpl(info.Holder());

  impl->stop();
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLMarqueeElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLMarqueeElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLMarqueeElement);
}

}  // namespace html_marquee_element_v8_internal

void V8HTMLMarqueeElement::BehaviorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_behavior_Getter");

  html_marquee_element_v8_internal::BehaviorAttributeGetter(info);
}

void V8HTMLMarqueeElement::BehaviorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_behavior_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::BehaviorAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::BgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_bgColor_Getter");

  html_marquee_element_v8_internal::BgColorAttributeGetter(info);
}

void V8HTMLMarqueeElement::BgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_bgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::BgColorAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::DirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_direction_Getter");

  html_marquee_element_v8_internal::DirectionAttributeGetter(info);
}

void V8HTMLMarqueeElement::DirectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_direction_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::DirectionAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_height_Getter");

  html_marquee_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLMarqueeElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::HspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_hspace_Getter");

  html_marquee_element_v8_internal::HspaceAttributeGetter(info);
}

void V8HTMLMarqueeElement::HspaceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_hspace_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::HspaceAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::LoopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_loop_Getter");

  html_marquee_element_v8_internal::LoopAttributeGetter(info);
}

void V8HTMLMarqueeElement::LoopAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_loop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::LoopAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::ScrollAmountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollAmount_Getter");

  html_marquee_element_v8_internal::ScrollAmountAttributeGetter(info);
}

void V8HTMLMarqueeElement::ScrollAmountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollAmount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::ScrollAmountAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::ScrollDelayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollDelay_Getter");

  html_marquee_element_v8_internal::ScrollDelayAttributeGetter(info);
}

void V8HTMLMarqueeElement::ScrollDelayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_scrollDelay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::ScrollDelayAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::TrueSpeedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_trueSpeed_Getter");

  html_marquee_element_v8_internal::TrueSpeedAttributeGetter(info);
}

void V8HTMLMarqueeElement::TrueSpeedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_trueSpeed_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::TrueSpeedAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::VspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_vspace_Getter");

  html_marquee_element_v8_internal::VspaceAttributeGetter(info);
}

void V8HTMLMarqueeElement::VspaceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_vspace_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::VspaceAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_width_Getter");

  html_marquee_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLMarqueeElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_marquee_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLMarqueeElement::StartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_start");

  html_marquee_element_v8_internal::StartMethod(info);
}

void V8HTMLMarqueeElement::StopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMarqueeElement_stop");

  html_marquee_element_v8_internal::StopMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLMarqueeElementAccessors[] = {
    { "behavior", V8HTMLMarqueeElement::BehaviorAttributeGetterCallback, V8HTMLMarqueeElement::BehaviorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8HTMLMarqueeElement::BgColorAttributeGetterCallback, V8HTMLMarqueeElement::BgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "direction", V8HTMLMarqueeElement::DirectionAttributeGetterCallback, V8HTMLMarqueeElement::DirectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLMarqueeElement::HeightAttributeGetterCallback, V8HTMLMarqueeElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hspace", V8HTMLMarqueeElement::HspaceAttributeGetterCallback, V8HTMLMarqueeElement::HspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loop", V8HTMLMarqueeElement::LoopAttributeGetterCallback, V8HTMLMarqueeElement::LoopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollAmount", V8HTMLMarqueeElement::ScrollAmountAttributeGetterCallback, V8HTMLMarqueeElement::ScrollAmountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollDelay", V8HTMLMarqueeElement::ScrollDelayAttributeGetterCallback, V8HTMLMarqueeElement::ScrollDelayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "trueSpeed", V8HTMLMarqueeElement::TrueSpeedAttributeGetterCallback, V8HTMLMarqueeElement::TrueSpeedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "vspace", V8HTMLMarqueeElement::VspaceAttributeGetterCallback, V8HTMLMarqueeElement::VspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLMarqueeElement::WidthAttributeGetterCallback, V8HTMLMarqueeElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLMarqueeElementMethods[] = {
    {"start", V8HTMLMarqueeElement::StartMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stop", V8HTMLMarqueeElement::StopMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLMarqueeElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLMarqueeElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLMarqueeElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_marquee_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLMarqueeElementAccessors, base::size(kV8HTMLMarqueeElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLMarqueeElementMethods, base::size(kV8HTMLMarqueeElementMethods));

  // Custom signature

  V8HTMLMarqueeElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLMarqueeElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLMarqueeElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLMarqueeElement::GetWrapperTypeInfo()),
      InstallV8HTMLMarqueeElementTemplate);
}

bool V8HTMLMarqueeElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLMarqueeElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLMarqueeElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLMarqueeElement::GetWrapperTypeInfo(), v8_value);
}

HTMLMarqueeElement* V8HTMLMarqueeElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLMarqueeElement* NativeValueTraits<HTMLMarqueeElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLMarqueeElement* native_value = V8HTMLMarqueeElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLMarqueeElement"));
  }
  return native_value;
}

}  // namespace blink
