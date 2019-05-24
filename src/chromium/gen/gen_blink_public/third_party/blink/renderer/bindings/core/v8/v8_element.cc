// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_attr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_display_lock_context.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_fullscreen_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_slot_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyframe_animation_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_named_node_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_into_view_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_to_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_property_map_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Element::DomTemplate,
    V8Element::InstallConditionalFeatures,
    "Element",
    V8Node::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Element.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Element::wrapper_type_info_ = v8_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Element>::value,
    "Element inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Element::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Element is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace element_v8_internal {

static void NamespaceURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->namespaceURI(), info.GetIsolate());
}

static void PrefixAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->prefix(), info.GetIsolate());
}

static void LocalNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueString(info, impl->localName(), info.GetIsolate());
}

static void TagNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueString(info, impl->tagName(), info.GetIsolate());
}

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetIdAttribute(), info.GetIsolate());
}

static void IdAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kIdAttr, cpp_value);
}

static void ClassNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetClassAttribute(), info.GetIsolate());
}

static void ClassNameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kClassAttr, cpp_value);
}

static void ClassListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->classList()), impl);
}

static void ClassListAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => classList.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "classList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "classList"))
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

static void ClassListAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->classList()));
}

static void ClassListAttributeSetterForMainWorld(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => classList.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "classList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "classList"))
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

static void SlotAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kSlotAttr), info.GetIsolate());
}

static void SlotAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kSlotAttr, cpp_value);
}

static void PartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->part()), impl);
}

static void PartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => part.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "part");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "part"))
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

static void PartAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->part()));
}

static void PartAttributeSetterForMainWorld(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => part.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "part");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "part"))
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

static void AttributesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->attributesForBindings()), impl);
}

static void AttributesAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->attributesForBindings()));
}

static void ShadowRootAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->OpenShadowRoot()), impl);
}

static void ShadowRootAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->OpenShadowRoot()));
}

static void AssignedSlotAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->assignedSlotForBinding()), impl);
}

static void InnerHTMLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  StringOrTrustedHTML result;
  impl->innerHTML(result);

  V8SetReturnValue(info, result);
}

static void OuterHTMLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  StringOrTrustedHTML result;
  impl->outerHTML(result);

  V8SetReturnValue(info, result);
}

static void ScrollTopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValue(info, impl->scrollTop());
}

static void ScrollTopAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "scrollTop");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollTop(cpp_value);
}

static void ScrollLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValue(info, impl->scrollLeft());
}

static void ScrollLeftAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Element", "scrollLeft");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollLeft(cpp_value);
}

static void ScrollWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->scrollWidth());
}

static void ScrollHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->scrollHeight());
}

static void ClientTopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->clientTop());
}

static void ClientLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->clientLeft());
}

static void ClientWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->clientWidth());
}

static void ClientHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueInt(info, impl->clientHeight());
}

static void AttributeStyleMapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->attributeStyleMap()), impl);
}

static void ComputedRoleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->computedRole(), info.GetIsolate());
}

static void ComputedNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->computedName(), info.GetIsolate());
}

static void AccessibleNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->accessibleNode()), impl);
}

static void InvisibleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kInvisibleAttr));

  if (cpp_value.IsNull()) {
    ;
  } else if (cpp_value.IsEmpty()) {
    cpp_value = "invisible";
  } else if (EqualIgnoringASCIICase(cpp_value, "static")) {
    cpp_value = "static";
  } else if (EqualIgnoringASCIICase(cpp_value, "invisible")) {
    cpp_value = "invisible";
  } else {
    cpp_value = "invisible";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void InvisibleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kInvisibleAttr, cpp_value);
}

static void OnbeforecopyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforecopy()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforecopyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforecopy(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforecutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforecut()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforecutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforecut(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforepasteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforepaste()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforepasteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforepaste(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsearchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsearch()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsearchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsearch(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void DisplayLockAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->getDisplayLockForBindings()), impl);
}

static void RoleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kRoleAttr), info.GetIsolate());
}

static void RoleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRoleAttr, cpp_value);
}

static void AriaActiveDescendantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaActivedescendantAttr), info.GetIsolate());
}

static void AriaActiveDescendantAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaActivedescendantAttr, cpp_value);
}

static void AriaAtomicAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaAtomicAttr), info.GetIsolate());
}

static void AriaAtomicAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaAtomicAttr, cpp_value);
}

static void AriaAutoCompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaAutocompleteAttr), info.GetIsolate());
}

static void AriaAutoCompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaAutocompleteAttr, cpp_value);
}

static void AriaBusyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaBusyAttr), info.GetIsolate());
}

static void AriaBusyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaBusyAttr, cpp_value);
}

static void AriaCheckedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaCheckedAttr), info.GetIsolate());
}

static void AriaCheckedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaCheckedAttr, cpp_value);
}

static void AriaColCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaColcountAttr), info.GetIsolate());
}

static void AriaColCountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaColcountAttr, cpp_value);
}

static void AriaColIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaColindexAttr), info.GetIsolate());
}

static void AriaColIndexAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaColindexAttr, cpp_value);
}

static void AriaColSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaColspanAttr), info.GetIsolate());
}

static void AriaColSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaColspanAttr, cpp_value);
}

static void AriaControlsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaControlsAttr), info.GetIsolate());
}

static void AriaControlsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaControlsAttr, cpp_value);
}

static void AriaCurrentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaCurrentAttr), info.GetIsolate());
}

static void AriaCurrentAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaCurrentAttr, cpp_value);
}

static void AriaDescribedByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaDescribedbyAttr), info.GetIsolate());
}

static void AriaDescribedByAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaDescribedbyAttr, cpp_value);
}

static void AriaDetailsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaDetailsAttr), info.GetIsolate());
}

static void AriaDetailsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaDetailsAttr, cpp_value);
}

static void AriaDisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaDisabledAttr), info.GetIsolate());
}

static void AriaDisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaDisabledAttr, cpp_value);
}

static void AriaErrorMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaErrormessageAttr), info.GetIsolate());
}

static void AriaErrorMessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaErrormessageAttr, cpp_value);
}

static void AriaExpandedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaExpandedAttr), info.GetIsolate());
}

static void AriaExpandedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaExpandedAttr, cpp_value);
}

static void AriaFlowToAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaFlowtoAttr), info.GetIsolate());
}

static void AriaFlowToAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaFlowtoAttr, cpp_value);
}

static void AriaHasPopupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaHaspopupAttr), info.GetIsolate());
}

static void AriaHasPopupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaHaspopupAttr, cpp_value);
}

static void AriaHiddenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaHiddenAttr), info.GetIsolate());
}

static void AriaHiddenAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaHiddenAttr, cpp_value);
}

static void AriaKeyShortcutsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaKeyshortcutsAttr), info.GetIsolate());
}

static void AriaKeyShortcutsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaKeyshortcutsAttr, cpp_value);
}

static void AriaLabelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaLabelAttr), info.GetIsolate());
}

static void AriaLabelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaLabelAttr, cpp_value);
}

static void AriaLabelledByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaLabelledbyAttr), info.GetIsolate());
}

static void AriaLabelledByAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaLabelledbyAttr, cpp_value);
}

static void AriaLevelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaLevelAttr), info.GetIsolate());
}

static void AriaLevelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaLevelAttr, cpp_value);
}

static void AriaLiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaLiveAttr), info.GetIsolate());
}

static void AriaLiveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaLiveAttr, cpp_value);
}

static void AriaModalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaModalAttr), info.GetIsolate());
}

static void AriaModalAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaModalAttr, cpp_value);
}

static void AriaMultiLineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaMultilineAttr), info.GetIsolate());
}

static void AriaMultiLineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaMultilineAttr, cpp_value);
}

static void AriaMultiSelectableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaMultiselectableAttr), info.GetIsolate());
}

static void AriaMultiSelectableAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaMultiselectableAttr, cpp_value);
}

static void AriaOrientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaOrientationAttr), info.GetIsolate());
}

static void AriaOrientationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaOrientationAttr, cpp_value);
}

static void AriaOwnsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaOwnsAttr), info.GetIsolate());
}

static void AriaOwnsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaOwnsAttr, cpp_value);
}

static void AriaPlaceholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaPlaceholderAttr), info.GetIsolate());
}

static void AriaPlaceholderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaPlaceholderAttr, cpp_value);
}

static void AriaPosInSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaPosinsetAttr), info.GetIsolate());
}

static void AriaPosInSetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaPosinsetAttr, cpp_value);
}

static void AriaPressedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaPressedAttr), info.GetIsolate());
}

static void AriaPressedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaPressedAttr, cpp_value);
}

static void AriaReadOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaReadonlyAttr), info.GetIsolate());
}

static void AriaReadOnlyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaReadonlyAttr, cpp_value);
}

static void AriaRelevantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRelevantAttr), info.GetIsolate());
}

static void AriaRelevantAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRelevantAttr, cpp_value);
}

static void AriaRequiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRequiredAttr), info.GetIsolate());
}

static void AriaRequiredAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRequiredAttr, cpp_value);
}

static void AriaRoleDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRoledescriptionAttr), info.GetIsolate());
}

static void AriaRoleDescriptionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRoledescriptionAttr, cpp_value);
}

static void AriaRowCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRowcountAttr), info.GetIsolate());
}

static void AriaRowCountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRowcountAttr, cpp_value);
}

static void AriaRowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRowindexAttr), info.GetIsolate());
}

static void AriaRowIndexAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRowindexAttr, cpp_value);
}

static void AriaRowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaRowspanAttr), info.GetIsolate());
}

static void AriaRowSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaRowspanAttr, cpp_value);
}

static void AriaSelectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaSetsizeAttr), info.GetIsolate());
}

static void AriaSelectedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaSetsizeAttr, cpp_value);
}

static void AriaSortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaSortAttr), info.GetIsolate());
}

static void AriaSortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaSortAttr, cpp_value);
}

static void AriaValueMaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaValuemaxAttr), info.GetIsolate());
}

static void AriaValueMaxAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaValuemaxAttr, cpp_value);
}

static void AriaValueMinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaValueminAttr), info.GetIsolate());
}

static void AriaValueMinAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaValueminAttr, cpp_value);
}

static void AriaValueNowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaValuenowAttr), info.GetIsolate());
}

static void AriaValueNowAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaValuenowAttr, cpp_value);
}

static void AriaValueTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->FastGetAttribute(html_names::kAriaValuetextAttr), info.GetIsolate());
}

static void AriaValueTextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAriaValuetextAttr, cpp_value);
}

static void PreviousElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, NonDocumentTypeChildNode::previousElementSibling(*impl), impl);
}

static void PreviousElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, NonDocumentTypeChildNode::previousElementSibling(*impl));
}

static void NextElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, NonDocumentTypeChildNode::nextElementSibling(*impl), impl);
}

static void NextElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, NonDocumentTypeChildNode::nextElementSibling(*impl));
}

static void ChildrenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::children(*impl), impl);
}

static void ChildrenAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::children(*impl));
}

static void FirstElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::firstElementChild(*impl), impl);
}

static void FirstElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::firstElementChild(*impl));
}

static void LastElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::lastElementChild(*impl), impl);
}

static void LastElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::lastElementChild(*impl));
}

static void ChildElementCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  V8SetReturnValueUnsigned(info, ParentNode::childElementCount(*impl));
}

static void OnfullscreenchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(ElementFullscreen::onfullscreenchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfullscreenchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  ElementFullscreen::setOnfullscreenchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnfullscreenerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(ElementFullscreen::onfullscreenerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfullscreenerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  ElementFullscreen::setOnfullscreenerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitfullscreenchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(ElementFullscreen::onwebkitfullscreenchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitfullscreenchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  ElementFullscreen::setOnwebkitfullscreenchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitfullscreenerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Element* impl = V8Element::ToImpl(holder);

  EventListener* cpp_value(ElementFullscreen::onwebkitfullscreenerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitfullscreenerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Element* impl = V8Element::ToImpl(holder);

  // Prepare the value to be set.

  ElementFullscreen::setOnwebkitfullscreenerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void SetPointerCaptureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "setPointerCapture");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t pointer_id;
  pointer_id = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPointerCapture(pointer_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ReleasePointerCaptureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "releasePointerCapture");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t pointer_id;
  pointer_id = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->releasePointerCapture(pointer_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void HasPointerCaptureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "hasPointerCapture");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t pointer_id;
  pointer_id = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->hasPointerCapture(pointer_id));
}

static void HasAttributesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->hasAttributes());
}

static void GetAttributeNamesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getAttributeNames(), info.Holder(), info.GetIsolate()));
}

static void GetAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribute", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->getAttribute(name), info.GetIsolate());
}

static void GetAttributeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttributeNS", "Element", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->getAttributeNS(namespace_uri, local_name), info.GetIsolate());
}

static void SetAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "setAttribute");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> name;
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL value;
  name = info[0];
  if (!name.Prepare())
    return;

  V8StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::ToImpl(info.GetIsolate(), info[1], value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(name, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAttributeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "setAttributeNS");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> name;
  StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL value;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  name = info[1];
  if (!name.Prepare())
    return;

  V8StringOrTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrTrustedURL::ToImpl(info.GetIsolate(), info[2], value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttributeNS(namespace_uri, name, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeAttribute", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  impl->removeAttribute(name);
}

static void RemoveAttributeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeAttributeNS", "Element", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  impl->removeAttributeNS(namespace_uri, local_name);
}

static void HasAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("hasAttribute", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  V8SetReturnValueBool(info, impl->hasAttribute(name));
}

static void HasAttributeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("hasAttributeNS", "Element", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueBool(info, impl->hasAttributeNS(namespace_uri, local_name));
}

static void ToggleAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "toggleAttribute");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> qualified_name;
  bool force;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  qualified_name = info[0];
  if (!qualified_name.Prepare())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    bool result = impl->toggleAttribute(qualified_name, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueBool(info, result);
    return;
  }
  force = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->toggleAttribute(qualified_name, force, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void GetAttributeNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttributeNode", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getAttributeNode(name), impl);
}

static void GetAttributeNodeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttributeNodeNS", "Element", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getAttributeNodeNS(namespace_uri, local_name), impl);
}

static void SetAttributeNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "setAttributeNode");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Attr* attr;
  attr = V8Attr::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!attr) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Attr'.");
    return;
  }

  Attr* result = impl->setAttributeNode(attr, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void SetAttributeNodeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "setAttributeNodeNS");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Attr* attr;
  attr = V8Attr::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!attr) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Attr'.");
    return;
  }

  Attr* result = impl->setAttributeNodeNS(attr, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void RemoveAttributeNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "removeAttributeNode");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Attr* attr;
  attr = V8Attr::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!attr) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Attr'.");
    return;
  }

  Attr* result = impl->removeAttributeNode(attr, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void ClosestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "closest");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  Element* result = impl->closest(selectors, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void MatchesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "matches");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  bool result = impl->matches(selectors, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void WebkitMatchesSelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "webkitMatchesSelector");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  bool result = impl->matches(selectors, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void AttachShadowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "attachShadow");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ShadowRootInit* shadow_root_init_dict;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('shadowRootInitDict') is not an object.");
    return;
  }
  shadow_root_init_dict = NativeValueTraits<ShadowRootInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ShadowRoot* result = impl->attachShadow(shadow_root_init_dict, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetElementsByTagNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByTagName", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> local_name;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByTagName(local_name), impl);
}

static void GetElementsByTagNameNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByTagNameNS", "Element", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByTagNameNS(namespace_uri, local_name), impl);
}

static void GetElementsByClassNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByClassName", "Element", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> class_names;
  class_names = info[0];
  if (!class_names.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByClassName(class_names), impl);
}

static void InsertAdjacentElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "insertAdjacentElement");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> where;
  Element* element;
  where = info[0];
  if (!where.Prepare())
    return;

  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Element'.");
    return;
  }

  Element* result = impl->insertAdjacentElement(where, element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void InsertAdjacentTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "insertAdjacentText");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> where;
  V8StringResource<> data;
  where = info[0];
  if (!where.Prepare())
    return;

  data = info[1];
  if (!data.Prepare())
    return;

  impl->insertAdjacentText(where, data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void InsertAdjacentHTMLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "insertAdjacentHTML");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> position;
  StringOrTrustedHTML text;
  position = info[0];
  if (!position.Prepare())
    return;

  V8StringOrTrustedHTML::ToImpl(info.GetIsolate(), info[1], text, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->insertAdjacentHTML(position, text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RequestPointerLockMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  impl->requestPointerLock();
}

static void GetClientRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getClientRects(), impl);
}

static void GetBoundingClientRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getBoundingClientRect(), impl);
}

static void ScrollIntoViewMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollIntoView");

  Element* impl = V8Element::ToImpl(info.Holder());

  ScrollIntoViewOptionsOrBoolean arg;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->scrollIntoView();
    return;
  }
  V8ScrollIntoViewOptionsOrBoolean::ToImpl(info.GetIsolate(), info[0], arg, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollIntoView(arg);
}

static void Scroll1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scroll");

  Element* impl = V8Element::ToImpl(info.Holder());

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(options);
}

static void Scroll2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scroll");

  Element* impl = V8Element::ToImpl(info.Holder());

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(x, y);
}

static void ScrollMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        Scroll1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        Scroll1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        Scroll2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scroll");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ScrollTo1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollTo");

  Element* impl = V8Element::ToImpl(info.Holder());

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(options);
}

static void ScrollTo2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollTo");

  Element* impl = V8Element::ToImpl(info.Holder());

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollTo(x, y);
}

static void ScrollToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        ScrollTo1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ScrollTo1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        ScrollTo2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollTo");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ScrollBy1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollBy");

  Element* impl = V8Element::ToImpl(info.Holder());

  ScrollToOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ScrollToOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollBy(options);
}

static void ScrollBy2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollBy");

  Element* impl = V8Element::ToImpl(info.Holder());

  double x;
  double y;
  x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollBy(x, y);
}

static void ScrollByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 0:
      if (true) {
        ScrollBy1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ScrollBy1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        ScrollBy2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollBy");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ScrollIntoViewIfNeededMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "scrollIntoViewIfNeeded");

  Element* impl = V8Element::ToImpl(info.Holder());

  bool center_if_needed;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->scrollIntoViewIfNeeded();
    return;
  }
  center_if_needed = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->scrollIntoViewIfNeeded(center_if_needed);
}

static void CreateShadowRootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "createShadowRoot");

  Element* impl = V8Element::ToImpl(info.Holder());

  ShadowRoot* result = impl->createShadowRoot(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetDestinationInsertionPointsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->getDestinationInsertionPoints(), impl);
}

static void AnimateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "animate");

  Element* impl = V8Element::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue keyframes;
  UnrestrictedDoubleOrKeyframeAnimationOptions options;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (info[0]->IsObject()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);
  } else if (info[0]->IsNullOrUndefined()) {
    keyframes = ScriptValue(ScriptState::Current(info.GetIsolate()), v8::Null(info.GetIsolate()));
  } else {
    exception_state.ThrowTypeError("parameter 1 ('keyframes') is not an object.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    Animation* result = ElementAnimation::animate(script_state, *impl, keyframes, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueFast(info, result, impl);
    return;
  }
  V8UnrestrictedDoubleOrKeyframeAnimationOptions::ToImpl(info.GetIsolate(), info[1], options, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  Animation* result = ElementAnimation::animate(script_state, *impl, keyframes, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(ElementAnimation::getAnimations(*impl), info.Holder(), info.GetIsolate()));
}

static void ComputedStyleMapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Element* impl = V8Element::ToImpl(info.Holder());

  V8SetReturnValueFast(info, ElementComputedStyleMap::computedStyleMap(*impl), impl);
}

static void BeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "before");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  ChildNode::before(*impl, nodes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AfterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "after");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  ChildNode::after(*impl, nodes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ReplaceWithMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "replaceWith");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  ChildNode::replaceWith(*impl, nodes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "remove");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ChildNode::remove(*impl, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PrependMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "prepend");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  ParentNode::prepend(*impl, nodes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AppendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "append");
  CEReactionsScope ce_reactions_scope;

  Element* impl = V8Element::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  HeapVector<NodeOrString> nodes;
  nodes = ToImplArguments<NodeOrString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  ParentNode::append(*impl, nodes, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void QuerySelectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "querySelector");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  Element* result = ParentNode::querySelector(*impl, selectors, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void QuerySelectorAllMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "querySelectorAll");

  Element* impl = V8Element::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> selectors;
  selectors = info[0];
  if (!selectors.Prepare())
    return;

  NodeList* result = ParentNode::querySelectorAll(*impl, selectors, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void RequestFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "requestFullscreen");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Element::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Element* impl = V8Element::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  FullscreenOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<FullscreenOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = ElementFullscreen::requestFullscreen(script_state, *impl, options);
  V8SetReturnValue(info, result.V8Value());
}

static void WebkitRequestFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "webkitRequestFullScreen");

  Element* impl = V8Element::ToImpl(info.Holder());

  FullscreenOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<FullscreenOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ElementFullscreen::webkitRequestFullscreen(*impl, options);
}

static void WebkitRequestFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Element", "webkitRequestFullscreen");

  Element* impl = V8Element::ToImpl(info.Holder());

  FullscreenOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<FullscreenOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ElementFullscreen::webkitRequestFullscreen(*impl, options);
}

}  // namespace element_v8_internal

void V8Element::NamespaceURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_namespaceURI_Getter");

  element_v8_internal::NamespaceURIAttributeGetter(info);
}

void V8Element::PrefixAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_prefix_Getter");

  element_v8_internal::PrefixAttributeGetter(info);
}

void V8Element::LocalNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_localName_Getter");

  element_v8_internal::LocalNameAttributeGetter(info);
}

void V8Element::TagNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_tagName_Getter");

  element_v8_internal::TagNameAttributeGetter(info);
}

void V8Element::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_id_Getter");

  element_v8_internal::IdAttributeGetter(info);
}

void V8Element::IdAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_id_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::IdAttributeSetter(v8_value, info);
}

void V8Element::ClassNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_className_Getter");

  element_v8_internal::ClassNameAttributeGetter(info);
}

void V8Element::ClassNameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_className_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::ClassNameAttributeSetter(v8_value, info);
}

void V8Element::ClassListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_classList_Getter");

  element_v8_internal::ClassListAttributeGetter(info);
}

void V8Element::ClassListAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_classList_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::ClassListAttributeSetter(v8_value, info);
}

void V8Element::ClassListAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_classList_Getter");

  element_v8_internal::ClassListAttributeGetterForMainWorld(info);
}

void V8Element::ClassListAttributeSetterCallbackForMainWorld(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_classList_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::ClassListAttributeSetterForMainWorld(v8_value, info);
}

void V8Element::SlotAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_slot_Getter");

  element_v8_internal::SlotAttributeGetter(info);
}

void V8Element::SlotAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_slot_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::SlotAttributeSetter(v8_value, info);
}

void V8Element::PartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_part_Getter");

  element_v8_internal::PartAttributeGetter(info);
}

void V8Element::PartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_part_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::PartAttributeSetter(v8_value, info);
}

void V8Element::PartAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_part_Getter");

  element_v8_internal::PartAttributeGetterForMainWorld(info);
}

void V8Element::PartAttributeSetterCallbackForMainWorld(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_part_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::PartAttributeSetterForMainWorld(v8_value, info);
}

void V8Element::AttributesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_attributes_Getter");

  element_v8_internal::AttributesAttributeGetter(info);
}

void V8Element::AttributesAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_attributes_Getter");

  element_v8_internal::AttributesAttributeGetterForMainWorld(info);
}

void V8Element::ShadowRootAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_shadowRoot_Getter");

  element_v8_internal::ShadowRootAttributeGetter(info);
}

void V8Element::ShadowRootAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_shadowRoot_Getter");

  element_v8_internal::ShadowRootAttributeGetterForMainWorld(info);
}

void V8Element::AssignedSlotAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_assignedSlot_Getter");

  element_v8_internal::AssignedSlotAttributeGetter(info);
}

void V8Element::InnerHTMLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kElementInnerHTML_Getter);

  element_v8_internal::InnerHTMLAttributeGetter(info);
}

void V8Element::InnerHTMLAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kElementInnerHTML_Setter);

  v8::Local<v8::Value> v8_value = info[0];

  V8Element::InnerHTMLAttributeSetterCustom(v8_value, info);
}

void V8Element::OuterHTMLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_outerHTML_Getter");

  element_v8_internal::OuterHTMLAttributeGetter(info);
}

void V8Element::OuterHTMLAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_outerHTML_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  V8Element::OuterHTMLAttributeSetterCustom(v8_value, info);
}

void V8Element::ScrollTopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollTop_Getter");

  element_v8_internal::ScrollTopAttributeGetter(info);
}

void V8Element::ScrollTopAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollTop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::ScrollTopAttributeSetter(v8_value, info);
}

void V8Element::ScrollLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollLeft_Getter");

  element_v8_internal::ScrollLeftAttributeGetter(info);
}

void V8Element::ScrollLeftAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollLeft_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::ScrollLeftAttributeSetter(v8_value, info);
}

void V8Element::ScrollWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollWidth_Getter");

  element_v8_internal::ScrollWidthAttributeGetter(info);
}

void V8Element::ScrollHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollHeight_Getter");

  element_v8_internal::ScrollHeightAttributeGetter(info);
}

void V8Element::ClientTopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_clientTop_Getter");

  element_v8_internal::ClientTopAttributeGetter(info);
}

void V8Element::ClientLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_clientLeft_Getter");

  element_v8_internal::ClientLeftAttributeGetter(info);
}

void V8Element::ClientWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_clientWidth_Getter");

  element_v8_internal::ClientWidthAttributeGetter(info);
}

void V8Element::ClientHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_clientHeight_Getter");

  element_v8_internal::ClientHeightAttributeGetter(info);
}

void V8Element::AttributeStyleMapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_attributeStyleMap_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSTypedOMStylePropertyMap);

  element_v8_internal::AttributeStyleMapAttributeGetter(info);
}

void V8Element::ComputedRoleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_computedRole_Getter");

  element_v8_internal::ComputedRoleAttributeGetter(info);
}

void V8Element::ComputedNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_computedName_Getter");

  element_v8_internal::ComputedNameAttributeGetter(info);
}

void V8Element::AccessibleNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_accessibleNode_Getter");

  element_v8_internal::AccessibleNodeAttributeGetter(info);
}

void V8Element::InvisibleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_invisible_Getter");

  element_v8_internal::InvisibleAttributeGetter(info);
}

void V8Element::InvisibleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_invisible_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::InvisibleAttributeSetter(v8_value, info);
}

void V8Element::OnbeforecopyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforecopy_Getter");

  element_v8_internal::OnbeforecopyAttributeGetter(info);
}

void V8Element::OnbeforecopyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforecopy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnbeforecopyAttributeSetter(v8_value, info);
}

void V8Element::OnbeforecutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforecut_Getter");

  element_v8_internal::OnbeforecutAttributeGetter(info);
}

void V8Element::OnbeforecutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforecut_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnbeforecutAttributeSetter(v8_value, info);
}

void V8Element::OnbeforepasteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforepaste_Getter");

  element_v8_internal::OnbeforepasteAttributeGetter(info);
}

void V8Element::OnbeforepasteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onbeforepaste_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnbeforepasteAttributeSetter(v8_value, info);
}

void V8Element::OnsearchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onsearch_Getter");

  element_v8_internal::OnsearchAttributeGetter(info);
}

void V8Element::OnsearchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onsearch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnsearchAttributeSetter(v8_value, info);
}

void V8Element::DisplayLockAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_displayLock_Getter");

  element_v8_internal::DisplayLockAttributeGetter(info);
}

void V8Element::RoleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_role_Getter");

  element_v8_internal::RoleAttributeGetter(info);
}

void V8Element::RoleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_role_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::RoleAttributeSetter(v8_value, info);
}

void V8Element::AriaActiveDescendantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaActiveDescendant_Getter");

  element_v8_internal::AriaActiveDescendantAttributeGetter(info);
}

void V8Element::AriaActiveDescendantAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaActiveDescendant_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaActiveDescendantAttributeSetter(v8_value, info);
}

void V8Element::AriaAtomicAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaAtomic_Getter");

  element_v8_internal::AriaAtomicAttributeGetter(info);
}

void V8Element::AriaAtomicAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaAtomic_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaAtomicAttributeSetter(v8_value, info);
}

void V8Element::AriaAutoCompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaAutoComplete_Getter");

  element_v8_internal::AriaAutoCompleteAttributeGetter(info);
}

void V8Element::AriaAutoCompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaAutoComplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaAutoCompleteAttributeSetter(v8_value, info);
}

void V8Element::AriaBusyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaBusy_Getter");

  element_v8_internal::AriaBusyAttributeGetter(info);
}

void V8Element::AriaBusyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaBusy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaBusyAttributeSetter(v8_value, info);
}

void V8Element::AriaCheckedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaChecked_Getter");

  element_v8_internal::AriaCheckedAttributeGetter(info);
}

void V8Element::AriaCheckedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaChecked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaCheckedAttributeSetter(v8_value, info);
}

void V8Element::AriaColCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColCount_Getter");

  element_v8_internal::AriaColCountAttributeGetter(info);
}

void V8Element::AriaColCountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColCount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaColCountAttributeSetter(v8_value, info);
}

void V8Element::AriaColIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColIndex_Getter");

  element_v8_internal::AriaColIndexAttributeGetter(info);
}

void V8Element::AriaColIndexAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColIndex_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaColIndexAttributeSetter(v8_value, info);
}

void V8Element::AriaColSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColSpan_Getter");

  element_v8_internal::AriaColSpanAttributeGetter(info);
}

void V8Element::AriaColSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaColSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaColSpanAttributeSetter(v8_value, info);
}

void V8Element::AriaControlsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaControls_Getter");

  element_v8_internal::AriaControlsAttributeGetter(info);
}

void V8Element::AriaControlsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaControls_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaControlsAttributeSetter(v8_value, info);
}

void V8Element::AriaCurrentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaCurrent_Getter");

  element_v8_internal::AriaCurrentAttributeGetter(info);
}

void V8Element::AriaCurrentAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaCurrent_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaCurrentAttributeSetter(v8_value, info);
}

void V8Element::AriaDescribedByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDescribedBy_Getter");

  element_v8_internal::AriaDescribedByAttributeGetter(info);
}

void V8Element::AriaDescribedByAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDescribedBy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaDescribedByAttributeSetter(v8_value, info);
}

void V8Element::AriaDetailsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDetails_Getter");

  element_v8_internal::AriaDetailsAttributeGetter(info);
}

void V8Element::AriaDetailsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDetails_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaDetailsAttributeSetter(v8_value, info);
}

void V8Element::AriaDisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDisabled_Getter");

  element_v8_internal::AriaDisabledAttributeGetter(info);
}

void V8Element::AriaDisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaDisabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaDisabledAttributeSetter(v8_value, info);
}

void V8Element::AriaErrorMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaErrorMessage_Getter");

  element_v8_internal::AriaErrorMessageAttributeGetter(info);
}

void V8Element::AriaErrorMessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaErrorMessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaErrorMessageAttributeSetter(v8_value, info);
}

void V8Element::AriaExpandedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaExpanded_Getter");

  element_v8_internal::AriaExpandedAttributeGetter(info);
}

void V8Element::AriaExpandedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaExpanded_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaExpandedAttributeSetter(v8_value, info);
}

void V8Element::AriaFlowToAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaFlowTo_Getter");

  element_v8_internal::AriaFlowToAttributeGetter(info);
}

void V8Element::AriaFlowToAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaFlowTo_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaFlowToAttributeSetter(v8_value, info);
}

void V8Element::AriaHasPopupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaHasPopup_Getter");

  element_v8_internal::AriaHasPopupAttributeGetter(info);
}

void V8Element::AriaHasPopupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaHasPopup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaHasPopupAttributeSetter(v8_value, info);
}

void V8Element::AriaHiddenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaHidden_Getter");

  element_v8_internal::AriaHiddenAttributeGetter(info);
}

void V8Element::AriaHiddenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaHidden_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaHiddenAttributeSetter(v8_value, info);
}

void V8Element::AriaKeyShortcutsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaKeyShortcuts_Getter");

  element_v8_internal::AriaKeyShortcutsAttributeGetter(info);
}

void V8Element::AriaKeyShortcutsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaKeyShortcuts_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaKeyShortcutsAttributeSetter(v8_value, info);
}

void V8Element::AriaLabelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLabel_Getter");

  element_v8_internal::AriaLabelAttributeGetter(info);
}

void V8Element::AriaLabelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLabel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaLabelAttributeSetter(v8_value, info);
}

void V8Element::AriaLabelledByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLabelledBy_Getter");

  element_v8_internal::AriaLabelledByAttributeGetter(info);
}

void V8Element::AriaLabelledByAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLabelledBy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaLabelledByAttributeSetter(v8_value, info);
}

void V8Element::AriaLevelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLevel_Getter");

  element_v8_internal::AriaLevelAttributeGetter(info);
}

void V8Element::AriaLevelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLevel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaLevelAttributeSetter(v8_value, info);
}

void V8Element::AriaLiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLive_Getter");

  element_v8_internal::AriaLiveAttributeGetter(info);
}

void V8Element::AriaLiveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaLive_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaLiveAttributeSetter(v8_value, info);
}

void V8Element::AriaModalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaModal_Getter");

  element_v8_internal::AriaModalAttributeGetter(info);
}

void V8Element::AriaModalAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaModal_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaModalAttributeSetter(v8_value, info);
}

void V8Element::AriaMultiLineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaMultiLine_Getter");

  element_v8_internal::AriaMultiLineAttributeGetter(info);
}

void V8Element::AriaMultiLineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaMultiLine_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaMultiLineAttributeSetter(v8_value, info);
}

void V8Element::AriaMultiSelectableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaMultiSelectable_Getter");

  element_v8_internal::AriaMultiSelectableAttributeGetter(info);
}

void V8Element::AriaMultiSelectableAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaMultiSelectable_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaMultiSelectableAttributeSetter(v8_value, info);
}

void V8Element::AriaOrientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaOrientation_Getter");

  element_v8_internal::AriaOrientationAttributeGetter(info);
}

void V8Element::AriaOrientationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaOrientation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaOrientationAttributeSetter(v8_value, info);
}

void V8Element::AriaOwnsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaOwns_Getter");

  element_v8_internal::AriaOwnsAttributeGetter(info);
}

void V8Element::AriaOwnsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaOwns_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaOwnsAttributeSetter(v8_value, info);
}

void V8Element::AriaPlaceholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPlaceholder_Getter");

  element_v8_internal::AriaPlaceholderAttributeGetter(info);
}

void V8Element::AriaPlaceholderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPlaceholder_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaPlaceholderAttributeSetter(v8_value, info);
}

void V8Element::AriaPosInSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPosInSet_Getter");

  element_v8_internal::AriaPosInSetAttributeGetter(info);
}

void V8Element::AriaPosInSetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPosInSet_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaPosInSetAttributeSetter(v8_value, info);
}

void V8Element::AriaPressedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPressed_Getter");

  element_v8_internal::AriaPressedAttributeGetter(info);
}

void V8Element::AriaPressedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaPressed_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaPressedAttributeSetter(v8_value, info);
}

void V8Element::AriaReadOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaReadOnly_Getter");

  element_v8_internal::AriaReadOnlyAttributeGetter(info);
}

void V8Element::AriaReadOnlyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaReadOnly_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaReadOnlyAttributeSetter(v8_value, info);
}

void V8Element::AriaRelevantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRelevant_Getter");

  element_v8_internal::AriaRelevantAttributeGetter(info);
}

void V8Element::AriaRelevantAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRelevant_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRelevantAttributeSetter(v8_value, info);
}

void V8Element::AriaRequiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRequired_Getter");

  element_v8_internal::AriaRequiredAttributeGetter(info);
}

void V8Element::AriaRequiredAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRequired_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRequiredAttributeSetter(v8_value, info);
}

void V8Element::AriaRoleDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRoleDescription_Getter");

  element_v8_internal::AriaRoleDescriptionAttributeGetter(info);
}

void V8Element::AriaRoleDescriptionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRoleDescription_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRoleDescriptionAttributeSetter(v8_value, info);
}

void V8Element::AriaRowCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowCount_Getter");

  element_v8_internal::AriaRowCountAttributeGetter(info);
}

void V8Element::AriaRowCountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowCount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRowCountAttributeSetter(v8_value, info);
}

void V8Element::AriaRowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowIndex_Getter");

  element_v8_internal::AriaRowIndexAttributeGetter(info);
}

void V8Element::AriaRowIndexAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowIndex_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRowIndexAttributeSetter(v8_value, info);
}

void V8Element::AriaRowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowSpan_Getter");

  element_v8_internal::AriaRowSpanAttributeGetter(info);
}

void V8Element::AriaRowSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaRowSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaRowSpanAttributeSetter(v8_value, info);
}

void V8Element::AriaSelectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaSelected_Getter");

  element_v8_internal::AriaSelectedAttributeGetter(info);
}

void V8Element::AriaSelectedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaSelected_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaSelectedAttributeSetter(v8_value, info);
}

void V8Element::AriaSortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaSort_Getter");

  element_v8_internal::AriaSortAttributeGetter(info);
}

void V8Element::AriaSortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaSort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaSortAttributeSetter(v8_value, info);
}

void V8Element::AriaValueMaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueMax_Getter");

  element_v8_internal::AriaValueMaxAttributeGetter(info);
}

void V8Element::AriaValueMaxAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueMax_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaValueMaxAttributeSetter(v8_value, info);
}

void V8Element::AriaValueMinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueMin_Getter");

  element_v8_internal::AriaValueMinAttributeGetter(info);
}

void V8Element::AriaValueMinAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueMin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaValueMinAttributeSetter(v8_value, info);
}

void V8Element::AriaValueNowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueNow_Getter");

  element_v8_internal::AriaValueNowAttributeGetter(info);
}

void V8Element::AriaValueNowAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueNow_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaValueNowAttributeSetter(v8_value, info);
}

void V8Element::AriaValueTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueText_Getter");

  element_v8_internal::AriaValueTextAttributeGetter(info);
}

void V8Element::AriaValueTextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_ariaValueText_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::AriaValueTextAttributeSetter(v8_value, info);
}

void V8Element::PreviousElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_previousElementSibling_Getter");

  element_v8_internal::PreviousElementSiblingAttributeGetter(info);
}

void V8Element::PreviousElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_previousElementSibling_Getter");

  element_v8_internal::PreviousElementSiblingAttributeGetterForMainWorld(info);
}

void V8Element::NextElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_nextElementSibling_Getter");

  element_v8_internal::NextElementSiblingAttributeGetter(info);
}

void V8Element::NextElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_nextElementSibling_Getter");

  element_v8_internal::NextElementSiblingAttributeGetterForMainWorld(info);
}

void V8Element::ChildrenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_children_Getter");

  element_v8_internal::ChildrenAttributeGetter(info);
}

void V8Element::ChildrenAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_children_Getter");

  element_v8_internal::ChildrenAttributeGetterForMainWorld(info);
}

void V8Element::FirstElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_firstElementChild_Getter");

  element_v8_internal::FirstElementChildAttributeGetter(info);
}

void V8Element::FirstElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_firstElementChild_Getter");

  element_v8_internal::FirstElementChildAttributeGetterForMainWorld(info);
}

void V8Element::LastElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_lastElementChild_Getter");

  element_v8_internal::LastElementChildAttributeGetter(info);
}

void V8Element::LastElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_lastElementChild_Getter");

  element_v8_internal::LastElementChildAttributeGetterForMainWorld(info);
}

void V8Element::ChildElementCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_childElementCount_Getter");

  element_v8_internal::ChildElementCountAttributeGetter(info);
}

void V8Element::OnfullscreenchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onfullscreenchange_Getter");

  element_v8_internal::OnfullscreenchangeAttributeGetter(info);
}

void V8Element::OnfullscreenchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onfullscreenchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnfullscreenchangeAttributeSetter(v8_value, info);
}

void V8Element::OnfullscreenerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onfullscreenerror_Getter");

  element_v8_internal::OnfullscreenerrorAttributeGetter(info);
}

void V8Element::OnfullscreenerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onfullscreenerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnfullscreenerrorAttributeSetter(v8_value, info);
}

void V8Element::OnwebkitfullscreenchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onwebkitfullscreenchange_Getter");

  element_v8_internal::OnwebkitfullscreenchangeAttributeGetter(info);
}

void V8Element::OnwebkitfullscreenchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onwebkitfullscreenchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnwebkitfullscreenchangeAttributeSetter(v8_value, info);
}

void V8Element::OnwebkitfullscreenerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onwebkitfullscreenerror_Getter");

  element_v8_internal::OnwebkitfullscreenerrorAttributeGetter(info);
}

void V8Element::OnwebkitfullscreenerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_onwebkitfullscreenerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  element_v8_internal::OnwebkitfullscreenerrorAttributeSetter(v8_value, info);
}

void V8Element::SetPointerCaptureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_setPointerCapture");

  element_v8_internal::SetPointerCaptureMethod(info);
}

void V8Element::ReleasePointerCaptureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_releasePointerCapture");

  element_v8_internal::ReleasePointerCaptureMethod(info);
}

void V8Element::HasPointerCaptureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_hasPointerCapture");

  element_v8_internal::HasPointerCaptureMethod(info);
}

void V8Element::HasAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_hasAttributes");

  element_v8_internal::HasAttributesMethod(info);
}

void V8Element::GetAttributeNamesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAttributeNames");

  element_v8_internal::GetAttributeNamesMethod(info);
}

void V8Element::GetAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAttribute");

  element_v8_internal::GetAttributeMethod(info);
}

void V8Element::GetAttributeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAttributeNS");

  element_v8_internal::GetAttributeNSMethod(info);
}

void V8Element::SetAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_setAttribute");

  element_v8_internal::SetAttributeMethod(info);
}

void V8Element::SetAttributeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_setAttributeNS");

  element_v8_internal::SetAttributeNSMethod(info);
}

void V8Element::RemoveAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_removeAttribute");

  element_v8_internal::RemoveAttributeMethod(info);
}

void V8Element::RemoveAttributeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_removeAttributeNS");

  element_v8_internal::RemoveAttributeNSMethod(info);
}

void V8Element::HasAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_hasAttribute");

  element_v8_internal::HasAttributeMethod(info);
}

void V8Element::HasAttributeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_hasAttributeNS");

  element_v8_internal::HasAttributeNSMethod(info);
}

void V8Element::ToggleAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_toggleAttribute");

  element_v8_internal::ToggleAttributeMethod(info);
}

void V8Element::GetAttributeNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAttributeNode");

  element_v8_internal::GetAttributeNodeMethod(info);
}

void V8Element::GetAttributeNodeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAttributeNodeNS");

  element_v8_internal::GetAttributeNodeNSMethod(info);
}

void V8Element::SetAttributeNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_setAttributeNode");

  element_v8_internal::SetAttributeNodeMethod(info);
}

void V8Element::SetAttributeNodeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_setAttributeNodeNS");

  element_v8_internal::SetAttributeNodeNSMethod(info);
}

void V8Element::RemoveAttributeNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_removeAttributeNode");

  element_v8_internal::RemoveAttributeNodeMethod(info);
}

void V8Element::ClosestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_closest");

  element_v8_internal::ClosestMethod(info);
}

void V8Element::MatchesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_matches");

  element_v8_internal::MatchesMethod(info);
}

void V8Element::WebkitMatchesSelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_webkitMatchesSelector");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementPrefixedMatchesSelector);
  element_v8_internal::WebkitMatchesSelectorMethod(info);
}

void V8Element::AttachShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_attachShadow");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementAttachShadow);
  element_v8_internal::AttachShadowMethod(info);
}

void V8Element::GetElementsByTagNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getElementsByTagName");

  element_v8_internal::GetElementsByTagNameMethod(info);
}

void V8Element::GetElementsByTagNameNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getElementsByTagNameNS");

  element_v8_internal::GetElementsByTagNameNSMethod(info);
}

void V8Element::GetElementsByClassNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getElementsByClassName");

  element_v8_internal::GetElementsByClassNameMethod(info);
}

void V8Element::InsertAdjacentElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_insertAdjacentElement");

  element_v8_internal::InsertAdjacentElementMethod(info);
}

void V8Element::InsertAdjacentTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_insertAdjacentText");

  element_v8_internal::InsertAdjacentTextMethod(info);
}

void V8Element::InsertAdjacentHTMLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_insertAdjacentHTML");

  element_v8_internal::InsertAdjacentHTMLMethod(info);
}

void V8Element::RequestPointerLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_requestPointerLock");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementRequestPointerLock);
  element_v8_internal::RequestPointerLockMethod(info);
}

void V8Element::GetClientRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getClientRects");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Element_GetClientRects_Method);
  element_v8_internal::GetClientRectsMethod(info);
}

void V8Element::GetBoundingClientRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kElementGetBoundingClientRect);
  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Element_GetBoundingClientRect_Method);
  element_v8_internal::GetBoundingClientRectMethod(info);
}

void V8Element::ScrollIntoViewMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollIntoView");

  element_v8_internal::ScrollIntoViewMethod(info);
}

void V8Element::ScrollMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scroll");

  element_v8_internal::ScrollMethod(info);
}

void V8Element::ScrollToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollTo");

  element_v8_internal::ScrollToMethod(info);
}

void V8Element::ScrollByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollBy");

  element_v8_internal::ScrollByMethod(info);
}

void V8Element::ScrollIntoViewIfNeededMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_scrollIntoViewIfNeeded");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kElementScrollIntoViewIfNeeded);
  element_v8_internal::ScrollIntoViewIfNeededMethod(info);
}

void V8Element::CreateShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_createShadowRoot");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kElementCreateShadowRoot);
  element_v8_internal::CreateShadowRootMethod(info);
}

void V8Element::GetDestinationInsertionPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getDestinationInsertionPoints");

  element_v8_internal::GetDestinationInsertionPointsMethod(info);
}

void V8Element::AnimateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_animate");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Element_Animate_Method);
  element_v8_internal::AnimateMethod(info);
}

void V8Element::GetAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_getAnimations");

  element_v8_internal::GetAnimationsMethod(info);
}

void V8Element::ComputedStyleMapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_computedStyleMap");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSTypedOMStylePropertyMap);
  element_v8_internal::ComputedStyleMapMethod(info);
}

void V8Element::BeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_before");

  element_v8_internal::BeforeMethod(info);
}

void V8Element::AfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_after");

  element_v8_internal::AfterMethod(info);
}

void V8Element::ReplaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_replaceWith");

  element_v8_internal::ReplaceWithMethod(info);
}

void V8Element::RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_remove");

  element_v8_internal::RemoveMethod(info);
}

void V8Element::PrependMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_prepend");

  element_v8_internal::PrependMethod(info);
}

void V8Element::AppendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_append");

  element_v8_internal::AppendMethod(info);
}

void V8Element::QuerySelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_querySelector");

  element_v8_internal::QuerySelectorMethod(info);
}

void V8Element::QuerySelectorAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_querySelectorAll");

  element_v8_internal::QuerySelectorAllMethod(info);
}

void V8Element::RequestFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_requestFullscreen");

  element_v8_internal::RequestFullscreenMethod(info);
}

void V8Element::WebkitRequestFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_webkitRequestFullScreen");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedElementRequestFullScreen);
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Element.webkitRequestFullScreen", info);
  }
  element_v8_internal::WebkitRequestFullScreenMethod(info);
}

void V8Element::WebkitRequestFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Element_webkitRequestFullscreen");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedElementRequestFullscreen);
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("Element.webkitRequestFullscreen", info);
  }
  element_v8_internal::WebkitRequestFullscreenMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ElementAccessors[] = {
    { "namespaceURI", V8Element::NamespaceURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "prefix", V8Element::PrefixAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "localName", V8Element::LocalNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "tagName", V8Element::TagNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "id", V8Element::IdAttributeGetterCallback, V8Element::IdAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "className", V8Element::ClassNameAttributeGetterCallback, V8Element::ClassNameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "classList", V8Element::ClassListAttributeGetterCallbackForMainWorld, V8Element::ClassListAttributeSetterCallbackForMainWorld, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "classList", V8Element::ClassListAttributeGetterCallback, V8Element::ClassListAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "slot", V8Element::SlotAttributeGetterCallback, V8Element::SlotAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "attributes", V8Element::AttributesAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "attributes", V8Element::AttributesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "shadowRoot", V8Element::ShadowRootAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "shadowRoot", V8Element::ShadowRootAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "assignedSlot", V8Element::AssignedSlotAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "innerHTML", V8Element::InnerHTMLAttributeGetterCallback, V8Element::InnerHTMLAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "outerHTML", V8Element::OuterHTMLAttributeGetterCallback, V8Element::OuterHTMLAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollTop", V8Element::ScrollTopAttributeGetterCallback, V8Element::ScrollTopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollLeft", V8Element::ScrollLeftAttributeGetterCallback, V8Element::ScrollLeftAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollWidth", V8Element::ScrollWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollHeight", V8Element::ScrollHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientTop", V8Element::ClientTopAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientLeft", V8Element::ClientLeftAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientWidth", V8Element::ClientWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "clientHeight", V8Element::ClientHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "attributeStyleMap", V8Element::AttributeStyleMapAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforecopy", V8Element::OnbeforecopyAttributeGetterCallback, V8Element::OnbeforecopyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforecut", V8Element::OnbeforecutAttributeGetterCallback, V8Element::OnbeforecutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforepaste", V8Element::OnbeforepasteAttributeGetterCallback, V8Element::OnbeforepasteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsearch", V8Element::OnsearchAttributeGetterCallback, V8Element::OnsearchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "previousElementSibling", V8Element::PreviousElementSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "previousElementSibling", V8Element::PreviousElementSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "nextElementSibling", V8Element::NextElementSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "nextElementSibling", V8Element::NextElementSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "children", V8Element::ChildrenAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "children", V8Element::ChildrenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "firstElementChild", V8Element::FirstElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "firstElementChild", V8Element::FirstElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "lastElementChild", V8Element::LastElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "lastElementChild", V8Element::LastElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "childElementCount", V8Element::ChildElementCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfullscreenchange", V8Element::OnfullscreenchangeAttributeGetterCallback, V8Element::OnfullscreenchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfullscreenerror", V8Element::OnfullscreenerrorAttributeGetterCallback, V8Element::OnfullscreenerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitfullscreenchange", V8Element::OnwebkitfullscreenchangeAttributeGetterCallback, V8Element::OnwebkitfullscreenchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitfullscreenerror", V8Element::OnwebkitfullscreenerrorAttributeGetterCallback, V8Element::OnwebkitfullscreenerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ElementMethods[] = {
    {"setPointerCapture", V8Element::SetPointerCaptureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"releasePointerCapture", V8Element::ReleasePointerCaptureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasPointerCapture", V8Element::HasPointerCaptureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasAttributes", V8Element::HasAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttributeNames", V8Element::GetAttributeNamesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttribute", V8Element::GetAttributeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttributeNS", V8Element::GetAttributeNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAttribute", V8Element::SetAttributeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAttributeNS", V8Element::SetAttributeNSMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeAttribute", V8Element::RemoveAttributeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeAttributeNS", V8Element::RemoveAttributeNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasAttribute", V8Element::HasAttributeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasAttributeNS", V8Element::HasAttributeNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toggleAttribute", V8Element::ToggleAttributeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttributeNode", V8Element::GetAttributeNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttributeNodeNS", V8Element::GetAttributeNodeNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAttributeNode", V8Element::SetAttributeNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAttributeNodeNS", V8Element::SetAttributeNodeNSMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeAttributeNode", V8Element::RemoveAttributeNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"closest", V8Element::ClosestMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"matches", V8Element::MatchesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitMatchesSelector", V8Element::WebkitMatchesSelectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"attachShadow", V8Element::AttachShadowMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByTagName", V8Element::GetElementsByTagNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByTagNameNS", V8Element::GetElementsByTagNameNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByClassName", V8Element::GetElementsByClassNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertAdjacentElement", V8Element::InsertAdjacentElementMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertAdjacentText", V8Element::InsertAdjacentTextMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertAdjacentHTML", V8Element::InsertAdjacentHTMLMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestPointerLock", V8Element::RequestPointerLockMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getClientRects", V8Element::GetClientRectsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBoundingClientRect", V8Element::GetBoundingClientRectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollIntoView", V8Element::ScrollIntoViewMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scroll", V8Element::ScrollMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollTo", V8Element::ScrollToMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollBy", V8Element::ScrollByMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollIntoViewIfNeeded", V8Element::ScrollIntoViewIfNeededMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"animate", V8Element::AnimateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"computedStyleMap", V8Element::ComputedStyleMapMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"before", V8Element::BeforeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"after", V8Element::AfterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceWith", V8Element::ReplaceWithMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8Element::RemoveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"prepend", V8Element::PrependMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"append", V8Element::AppendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelector", V8Element::QuerySelectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelectorAll", V8Element::QuerySelectorAllMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"requestFullscreen", V8Element::RequestFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitRequestFullScreen", V8Element::WebkitRequestFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitRequestFullscreen", V8Element::WebkitRequestFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Element::GetWrapperTypeInfo()->interface_name, V8Node::DomTemplate(isolate, world), V8Element::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ElementAccessors, base::size(kV8ElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ElementMethods, base::size(kV8ElementMethods));

  // Custom signature

  V8Element::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Element::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "accessibleNode", V8Element::AccessibleNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaActiveDescendant", V8Element::AriaActiveDescendantAttributeGetterCallback, V8Element::AriaActiveDescendantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaAtomic", V8Element::AriaAtomicAttributeGetterCallback, V8Element::AriaAtomicAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaAutoComplete", V8Element::AriaAutoCompleteAttributeGetterCallback, V8Element::AriaAutoCompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaBusy", V8Element::AriaBusyAttributeGetterCallback, V8Element::AriaBusyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaChecked", V8Element::AriaCheckedAttributeGetterCallback, V8Element::AriaCheckedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaColCount", V8Element::AriaColCountAttributeGetterCallback, V8Element::AriaColCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaColIndex", V8Element::AriaColIndexAttributeGetterCallback, V8Element::AriaColIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaColSpan", V8Element::AriaColSpanAttributeGetterCallback, V8Element::AriaColSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaControls", V8Element::AriaControlsAttributeGetterCallback, V8Element::AriaControlsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaCurrent", V8Element::AriaCurrentAttributeGetterCallback, V8Element::AriaCurrentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaDescribedBy", V8Element::AriaDescribedByAttributeGetterCallback, V8Element::AriaDescribedByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaDetails", V8Element::AriaDetailsAttributeGetterCallback, V8Element::AriaDetailsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaDisabled", V8Element::AriaDisabledAttributeGetterCallback, V8Element::AriaDisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaErrorMessage", V8Element::AriaErrorMessageAttributeGetterCallback, V8Element::AriaErrorMessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaExpanded", V8Element::AriaExpandedAttributeGetterCallback, V8Element::AriaExpandedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaFlowTo", V8Element::AriaFlowToAttributeGetterCallback, V8Element::AriaFlowToAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaHasPopup", V8Element::AriaHasPopupAttributeGetterCallback, V8Element::AriaHasPopupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaHidden", V8Element::AriaHiddenAttributeGetterCallback, V8Element::AriaHiddenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaKeyShortcuts", V8Element::AriaKeyShortcutsAttributeGetterCallback, V8Element::AriaKeyShortcutsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaLabel", V8Element::AriaLabelAttributeGetterCallback, V8Element::AriaLabelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaLabelledBy", V8Element::AriaLabelledByAttributeGetterCallback, V8Element::AriaLabelledByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaLevel", V8Element::AriaLevelAttributeGetterCallback, V8Element::AriaLevelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaLive", V8Element::AriaLiveAttributeGetterCallback, V8Element::AriaLiveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaModal", V8Element::AriaModalAttributeGetterCallback, V8Element::AriaModalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaMultiLine", V8Element::AriaMultiLineAttributeGetterCallback, V8Element::AriaMultiLineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaMultiSelectable", V8Element::AriaMultiSelectableAttributeGetterCallback, V8Element::AriaMultiSelectableAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaOrientation", V8Element::AriaOrientationAttributeGetterCallback, V8Element::AriaOrientationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaOwns", V8Element::AriaOwnsAttributeGetterCallback, V8Element::AriaOwnsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaPlaceholder", V8Element::AriaPlaceholderAttributeGetterCallback, V8Element::AriaPlaceholderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaPosInSet", V8Element::AriaPosInSetAttributeGetterCallback, V8Element::AriaPosInSetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaPressed", V8Element::AriaPressedAttributeGetterCallback, V8Element::AriaPressedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaReadOnly", V8Element::AriaReadOnlyAttributeGetterCallback, V8Element::AriaReadOnlyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRelevant", V8Element::AriaRelevantAttributeGetterCallback, V8Element::AriaRelevantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRequired", V8Element::AriaRequiredAttributeGetterCallback, V8Element::AriaRequiredAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRoleDescription", V8Element::AriaRoleDescriptionAttributeGetterCallback, V8Element::AriaRoleDescriptionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRowCount", V8Element::AriaRowCountAttributeGetterCallback, V8Element::AriaRowCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRowIndex", V8Element::AriaRowIndexAttributeGetterCallback, V8Element::AriaRowIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaRowSpan", V8Element::AriaRowSpanAttributeGetterCallback, V8Element::AriaRowSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaSelected", V8Element::AriaSelectedAttributeGetterCallback, V8Element::AriaSelectedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaSort", V8Element::AriaSortAttributeGetterCallback, V8Element::AriaSortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaValueMax", V8Element::AriaValueMaxAttributeGetterCallback, V8Element::AriaValueMaxAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaValueMin", V8Element::AriaValueMinAttributeGetterCallback, V8Element::AriaValueMinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaValueNow", V8Element::AriaValueNowAttributeGetterCallback, V8Element::AriaValueNowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "ariaValueText", V8Element::AriaValueTextAttributeGetterCallback, V8Element::AriaValueTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "role", V8Element::RoleAttributeGetterCallback, V8Element::RoleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::CSSPartPseudoElementEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "part", V8Element::PartAttributeGetterCallbackForMainWorld, V8Element::PartAttributeSetterCallbackForMainWorld, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
        { "part", V8Element::PartAttributeGetterCallback, V8Element::PartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "computedName", V8Element::ComputedNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "computedRole", V8Element::ComputedRoleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "displayLock", V8Element::DisplayLockAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "invisible", V8Element::InvisibleAttributeGetterCallback, V8Element::InvisibleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    {
      // Install getAnimations configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getAnimations", V8Element::GetAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8Element::InstallShadowDOMV0(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Element::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::MethodConfiguration
  kCreateShadowRootConfigurations[] = {
      {"createShadowRoot", V8Element::CreateShadowRootMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kCreateShadowRootConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::MethodConfiguration
  kGetDestinationInsertionPointsConfigurations[] = {
      {"getDestinationInsertionPoints", V8Element::GetDestinationInsertionPointsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kGetDestinationInsertionPointsConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8Element::InstallShadowDOMV0(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Element::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Element::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallShadowDOMV0(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Element::InstallShadowDOMV0(ScriptState* script_state) {
  InstallShadowDOMV0(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8Element::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Element::GetWrapperTypeInfo()),
      InstallV8ElementTemplate);
}

bool V8Element::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Element::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Element::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Element::GetWrapperTypeInfo(), v8_value);
}

Element* V8Element::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Element* NativeValueTraits<Element>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Element* native_value = V8Element::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Element"));
  }
  return native_value;
}

void V8Element::InstallConditionalFeatures(
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

  if (!prototype_object.IsEmpty()) {
    v8::Local<v8::Name> unscopables_symbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopables;
    bool has_unscopables;
    if (prototype_object->HasOwnProperty(context, unscopables_symbol)
        .To(&has_unscopables) && has_unscopables) {
      unscopables = prototype_object->Get(context, unscopables_symbol)
                    .ToLocalChecked().As<v8::Object>();
    } else {
      // Web IDL 3.6.3. Interface prototype object
      // https://heycam.github.io/webidl/#create-an-interface-prototype-object
      // step 8.1. Let unscopableObject be the result of performing
      //   ! ObjectCreate(null).
      unscopables = v8::Object::New(isolate);
      unscopables->SetPrototype(context, v8::Null(isolate)).ToChecked();
    }
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "after"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "append"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "before"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "prepend"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "remove"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "replaceWith"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "slot"), v8::True(isolate))
        .FromJust();
    prototype_object->CreateDataProperty(
        context, unscopables_symbol, unscopables).FromJust();
  }
}

}  // namespace blink
