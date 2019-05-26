// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_attr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_cdata_section.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_comment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_timeline.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_implementation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element_creation_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element_registration_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_feature_policy.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_set.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_all_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_head_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_filter.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_iterator.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_processing_instruction.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_script_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_svg_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_tree_walker.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_expression.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_ns_resolver.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_xpath_result.h"
#include "third_party/blink/renderer/core/animation/document_animation.h"
#include "third_party/blink/renderer/core/css/font_face_source.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/dom/document_and_element_event_handlers.h"
#include "third_party/blink/renderer/core/dom/document_or_shadow_root.h"
#include "third_party/blink/renderer/core/dom/global_event_handlers.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/non_element_parent_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/document_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/svg/svg_document_extensions.h"
#include "third_party/blink/renderer/core/xml/document_xpath_evaluator.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
WrapperTypeInfo v8_document_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Document::DomTemplate,
    V8Document::InstallConditionalFeatures,
    "Document",
    V8Node::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Document.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Document::wrapper_type_info_ = v8_document_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Document>::value,
    "Document inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Document::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Document is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace document_v8_internal {

static void ImplementationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->implementation()), impl);
}

static void URLAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->urlForBinding(), info.GetIsolate());
}

static void DocumentURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->urlForBinding(), info.GetIsolate());
}

static void CompatModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->compatMode(), info.GetIsolate());
}

static void CharacterSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->characterSet(), info.GetIsolate());
}

static void CharsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->characterSet(), info.GetIsolate());
}

static void InputEncodingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->characterSet(), info.GetIsolate());
}

static void ContentTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->contentType(), info.GetIsolate());
}

static void DoctypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->doctype()), impl);
}

static void DocumentElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->documentElement()), impl);
}

static void RootScrollerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->rootScroller()), impl);
}

static void RootScrollerAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "rootScroller");

  // Prepare the value to be set.
  Element* cpp_value = V8Element::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'Element'.");
    return;
  }

  impl->setRootScroller(cpp_value, exception_state);
}

static void XmlEncodingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->xmlEncoding(), info.GetIsolate());
}

static void XmlVersionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->xmlVersion(), info.GetIsolate());
}

static void XmlVersionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "xmlVersion");

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setXMLVersion(cpp_value, exception_state);
}

static void XmlStandaloneAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, impl->xmlStandalone());
}

static void XmlStandaloneAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "xmlStandalone");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setXMLStandalone(cpp_value, exception_state);
}

static void LocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->location()), impl);
}

static void LocationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => location.href
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "location");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "location"))
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
          V8AtomicString(isolate, "href"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void DomainAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->domain(), info.GetIsolate());
}

static void DomainAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "domain");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDomain(cpp_value, exception_state);
}

static void ReferrerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->referrer(), info.GetIsolate());
}

static void CookieAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "Document", "cookie");

  String cpp_value(impl->cookie(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void CookieAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "cookie");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setCookie(cpp_value, exception_state);
}

static void LastModifiedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->lastModified(), info.GetIsolate());
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->readyState(), info.GetIsolate());
}

static void TitleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->title(), info.GetIsolate());
}

static void TitleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setTitle(cpp_value);
}

static void DirAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->dir(), info.GetIsolate());
}

static void DirAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDir(cpp_value);
}

static void BodyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->body()), impl);
}

static void BodyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "body");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  HTMLElement* cpp_value = V8HTMLElement::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'HTMLElement'.");
    return;
  }

  impl->setBody(cpp_value, exception_state);
}

static void BodyAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->body()));
}

static void BodyAttributeSetterForMainWorld(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "body");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  HTMLElement* cpp_value = V8HTMLElement::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'HTMLElement'.");
    return;
  }

  impl->setBody(cpp_value, exception_state);
}

static void HeadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->head()), impl);
}

static void ImagesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->images()), impl);
}

static void EmbedsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->embeds()), impl);
}

static void PluginsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->embeds()), impl);
}

static void LinksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->links()), impl);
}

static void FormsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->forms()), impl);
}

static void ScriptsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->scripts()), impl);
}

static void CurrentScriptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  HTMLScriptElementOrSVGScriptElement result;
  impl->currentScriptForBinding(result);

  V8SetReturnValue(info, result);
}

static void DefaultViewAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->defaultView()), impl);
}

static void DesignModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->designMode(), info.GetIsolate());
}

static void DesignModeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDesignMode(cpp_value);
}

static void OnreadystatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onreadystatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnreadystatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnreadystatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void AnchorsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->anchors()), impl);
}

static void AppletsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->applets()), impl);
}

static void FgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->fgColor(), info.GetIsolate());
}

static void FgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setFgColor(cpp_value);
}

static void LinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->linkColor(), info.GetIsolate());
}

static void LinkColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLinkColor(cpp_value);
}

static void VlinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->vlinkColor(), info.GetIsolate());
}

static void VlinkColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setVlinkColor(cpp_value);
}

static void AlinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->alinkColor(), info.GetIsolate());
}

static void AlinkColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAlinkColor(cpp_value);
}

static void BgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->bgColor(), info.GetIsolate());
}

static void BgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setBgColor(cpp_value);
}

static void AllAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->all()), impl);
}

static void ScrollingElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->scrollingElement()), impl);
}

static void OnpointerlockchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onpointerlockchange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerlockchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnpointerlockchange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerlockerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onpointerlockerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerlockerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnpointerlockerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void HiddenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, impl->hidden());
}

static void VisibilityStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->visibilityState(), info.GetIsolate());
}

static void WasDiscardedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, impl->wasDiscarded());
}

static void AddressSpaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->addressSpaceForBindings(), info.GetIsolate());
}

static void FeaturePolicyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->featurePolicy()), impl);
}

static void WebkitVisibilityStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueString(info, impl->visibilityState(), info.GetIsolate());
}

static void WebkitHiddenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, impl->hidden());
}

static void OnbeforecopyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforecopy()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforecopyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforecopy(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforecutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforecut()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforecutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforecut(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforepasteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onbeforepaste()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforepasteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnbeforepaste(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnfreezeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onfreeze()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfreezeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnfreeze(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onresume()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresumeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnresume(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsearchAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsearch()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsearchAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsearch(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsecuritypolicyviolationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsecuritypolicyviolation()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsecuritypolicyviolationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsecuritypolicyviolation(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnvisibilitychangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onvisibilitychange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnvisibilitychangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnvisibilitychange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void TimelineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentAnimation::timeline(*impl), impl);
}

static void FontsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, FontFaceSource::fonts(*impl), impl);
}

static void OncopyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentAndElementEventHandlers::oncopy(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncopyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentAndElementEventHandlers::setOncopy(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentAndElementEventHandlers::oncut(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentAndElementEventHandlers::setOncut(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpasteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentAndElementEventHandlers::onpaste(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpasteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentAndElementEventHandlers::setOnpaste(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ActiveElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentOrShadowRoot::activeElement(*impl), impl);
}

static void StyleSheetsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentOrShadowRoot::styleSheets(*impl), impl);
}

static void PointerLockElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentOrShadowRoot::pointerLockElement(*impl), impl);
}

static void FullscreenElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentOrShadowRoot::fullscreenElement(*impl), impl);
}

static void AdoptedStyleSheetsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValue(info, FreezeV8Object(ToV8(DocumentOrShadowRoot::adoptedStyleSheets(*impl), info.Holder(), info.GetIsolate()), info.GetIsolate()));
}

static void AdoptedStyleSheetsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Document", "adoptedStyleSheets");

  // Prepare the value to be set.
  HeapVector<Member<CSSStyleSheet>> cpp_value = NativeValueTraits<IDLSequence<CSSStyleSheet>>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  DocumentOrShadowRoot::setAdoptedStyleSheets(*impl, cpp_value, exception_state);
}

static void OnabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onabort(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnabortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnabort(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnactivateinvisibleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onactivateinvisible(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnactivateinvisibleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnactivateinvisible(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnbeforeactivateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onbeforeactivate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnbeforeactivateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnbeforeactivate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnblurAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onblur(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnblurAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnblur(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oncancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOncancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncanplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oncanplay(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncanplayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplay(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncanplaythroughAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oncanplaythrough(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncanplaythroughAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOncanplaythrough(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onclose(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncloseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnclose(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncontextmenuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oncontextmenu(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncontextmenuAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOncontextmenu(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OncuechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oncuechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncuechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOncuechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndblclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondblclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndblclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndblclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondrag(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrag(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondragend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondragenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondragleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondragover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragoverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndragstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondragstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndragstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndragstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndropAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondrop(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndropAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndrop(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OndurationchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ondurationchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndurationchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOndurationchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnemptiedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onemptied(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnemptiedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnemptied(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnendedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onended(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnendedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnended(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OnfocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onfocus(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnfocus(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnformdataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onformdata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnformdataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnformdata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninputAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oninput(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninputAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOninput(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OninvalidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::oninvalid(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OninvalidAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOninvalid(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeydownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onkeydown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeydownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeydown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeypressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onkeypress(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeypressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeypress(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnkeyupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onkeyup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnkeyupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnkeyup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onload(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnload(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadeddataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onloadeddata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadeddataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadeddata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadedmetadataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onloadedmetadata(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadedmetadataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadedmetadata(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnloadstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onloadstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnloadstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnloadstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousedownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmousedown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousedownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousedown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmouseenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(info.Holder(), info.GetIsolate()))
    return; // Return silently because of [LenientThis].

  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmouseleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [LenientThis]
  // Make sure that info.Holder() really points to an instance if [LenientThis].
  if (!V8Document::HasInstance(holder, isolate))
    return; // Return silently because of [LenientThis].

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousemoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmousemove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousemoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousemove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseoutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmouseout(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseoutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseout(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseoverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmouseover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseoverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmouseupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmouseup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmouseupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmouseup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnmousewheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onmousewheel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmousewheelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnmousewheel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnoverscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onoverscroll(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnoverscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnoverscroll(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpause(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpauseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpause(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onplay(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnplayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplay(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnplayingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onplaying(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnplayingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnplaying(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnprogressAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onprogress(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnprogressAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnprogress(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnratechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onratechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnratechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnratechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onreset(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnreset(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnresizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onresize(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnresizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnresize(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onscroll(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnscroll(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnscrollendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onscrollend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnscrollendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnscrollend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnseekedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onseeked(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnseekedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeked(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnseekingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onseeking(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnseekingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnseeking(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onselect(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselect(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnstalledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onstalled(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnstalledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnstalled(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsubmitAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onsubmit(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsubmitAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsubmit(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsuspendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onsuspend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsuspendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnsuspend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntimeupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontimeupdate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntimeupdateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntimeupdate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntoggleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontoggle(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntoggleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntoggle(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnvolumechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onvolumechange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnvolumechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnvolumechange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwaitingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onwaiting(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwaitingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwaiting(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwheelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onwheel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwheelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnwheel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnauxclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onauxclick(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnauxclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnauxclick(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OngotpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ongotpointercapture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OngotpointercaptureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOngotpointercapture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnlostpointercaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onlostpointercapture(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnlostpointercaptureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnlostpointercapture(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerdownAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerdown(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerdownAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerdown(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointermoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointermove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointermoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointermove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerrawupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerrawupdate(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerrawupdateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerrawupdate(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerupAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerup(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerupAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerup(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointercancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointercancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointercancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointercancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointeroverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerover(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointeroverAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerover(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointeroutAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerout(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointeroutAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerout(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerenterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerenter(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerenterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerenter(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnpointerleaveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onpointerleave(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnpointerleaveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnpointerleave(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchcancelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontouchcancel(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchcancelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchcancel(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontouchend(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchendAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchend(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchmoveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontouchmove(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchmoveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchmove(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntouchstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::ontouchstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntouchstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOntouchstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onselectstart(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectstartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselectstart(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnselectionchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(GlobalEventHandlers::onselectionchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnselectionchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  GlobalEventHandlers::setOnselectionchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ChildrenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::children(*impl), impl);
}

static void ChildrenAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::children(*impl));
}

static void FirstElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::firstElementChild(*impl), impl);
}

static void FirstElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::firstElementChild(*impl));
}

static void LastElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::lastElementChild(*impl), impl);
}

static void LastElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::lastElementChild(*impl));
}

static void ChildElementCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueUnsigned(info, ParentNode::childElementCount(*impl));
}

static void FullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, DocumentFullscreen::fullscreenEnabled(*impl));
}

static void FullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, DocumentFullscreen::fullscreenElement(*impl));
}

static void OnfullscreenchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentFullscreen::onfullscreenchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfullscreenchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentFullscreen::setOnfullscreenchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnfullscreenerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentFullscreen::onfullscreenerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnfullscreenerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentFullscreen::setOnfullscreenerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void WebkitIsFullScreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, DocumentFullscreen::fullscreenElement(*impl));
}

static void WebkitCurrentFullScreenElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentFullscreen::fullscreenElement(*impl), impl);
}

static void WebkitFullscreenEnabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueBool(info, DocumentFullscreen::fullscreenEnabled(*impl));
}

static void WebkitFullscreenElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, DocumentFullscreen::fullscreenElement(*impl), impl);
}

static void OnwebkitfullscreenchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentFullscreen::onwebkitfullscreenchange(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitfullscreenchangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentFullscreen::setOnwebkitfullscreenchange(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnwebkitfullscreenerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  EventListener* cpp_value(DocumentFullscreen::onwebkitfullscreenerror(*impl));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnwebkitfullscreenerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Document* impl = V8Document::ToImpl(holder);

  // Prepare the value to be set.

  DocumentFullscreen::setOnwebkitfullscreenerror(*impl, JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void RootElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Document* impl = V8Document::ToImpl(holder);

  V8SetReturnValueFast(info, SVGDocumentExtensions::rootElement(*impl), impl);
}

static void GetElementsByTagNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByTagName", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> local_name;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByTagName(local_name), impl);
}

static void GetElementsByTagNameNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByTagNameNS", "Document", ExceptionMessages::NotEnoughArguments(2, info.Length())));
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
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByClassName", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> class_names;
  class_names = info[0];
  if (!class_names.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByClassName(class_names), impl);
}

static void CreateElement1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<> local_name;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  Element* result = impl->CreateElementForBinding(local_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateElement1MethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<> local_name;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  Element* result = impl->CreateElementForBinding(local_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void CreateElementNS1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElementNS");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> qualified_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  qualified_name = info[1];
  if (!qualified_name.Prepare())
    return;

  Element* result = impl->createElementNS(namespace_uri, qualified_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateDocumentFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  DocumentFragment* result = impl->createDocumentFragment();
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateTextNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createTextNode", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> data;
  data = info[0];
  if (!data.Prepare())
    return;

  Text* result = impl->createTextNode(data);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateCDATASectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createCDATASection");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> data;
  data = info[0];
  if (!data.Prepare())
    return;

  CDATASection* result = impl->createCDATASection(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateCommentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createComment", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> data;
  data = info[0];
  if (!data.Prepare())
    return;

  Comment* result = impl->createComment(data);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateProcessingInstructionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createProcessingInstruction");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> target;
  V8StringResource<> data;
  target = info[0];
  if (!target.Prepare())
    return;

  data = info[1];
  if (!data.Prepare())
    return;

  ProcessingInstruction* result = impl->createProcessingInstruction(target, data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void ImportNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "importNode");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  bool deep;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    deep = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    deep = false;
  }

  Node* result = impl->importNode(node, deep, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void AdoptNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "adoptNode");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->adoptNode(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateAttributeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createAttribute");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> local_name;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  Attr* result = impl->createAttribute(local_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateAttributeNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createAttributeNS");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> qualified_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  qualified_name = info[1];
  if (!qualified_name.Prepare())
    return;

  Attr* result = impl->createAttributeNS(namespace_uri, qualified_name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createEvent");

  Document* impl = V8Document::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> event_type;
  event_type = info[0];
  if (!event_type.Prepare())
    return;

  Event* result = impl->createEvent(script_state, event_type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  Range* result = impl->createRange();
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateNodeIteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createNodeIterator");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  uint32_t what_to_show;
  V8NodeFilter* filter;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    what_to_show = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    what_to_show = 4294967295u;
  }
  if (!info[2]->IsUndefined()) {
    if (info[2]->IsObject()) {
      filter = V8NodeFilter::Create(info[2].As<v8::Object>());
    } else if (info[2]->IsNullOrUndefined()) {
      filter = nullptr;
    } else {
      exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
      return;
    }
  } else {
    filter = nullptr;
  }

  NodeIterator* result = impl->createNodeIterator(root, what_to_show, filter);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void CreateTreeWalkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createTreeWalker");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  uint32_t what_to_show;
  V8NodeFilter* filter;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    what_to_show = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    what_to_show = 4294967295u;
  }
  if (!info[2]->IsUndefined()) {
    if (info[2]->IsObject()) {
      filter = V8NodeFilter::Create(info[2].As<v8::Object>());
    } else if (info[2]->IsNullOrUndefined()) {
      filter = nullptr;
    } else {
      exception_state.ThrowTypeError("The callback provided as parameter 3 is not an object.");
      return;
    }
  } else {
    filter = nullptr;
  }

  TreeWalker* result = impl->createTreeWalker(root, what_to_show, filter);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValueFast(info, result, impl);
}

static void GetElementsByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByName", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_name;
  element_name = info[0];
  if (!element_name.Prepare())
    return;

  V8SetReturnValueFast(info, impl->getElementsByName(element_name), impl);
}

static void GetElementsByNameMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementsByName", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_name;
  element_name = info[0];
  if (!element_name.Prepare())
    return;

  V8SetReturnValueForMainWorld(info, impl->getElementsByName(element_name));
}

static void Open1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "open");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<> type;
  V8StringResource<> replace;
  if (!info[0]->IsUndefined()) {
    type = info[0];
    if (!type.Prepare())
      return;
  } else {
    type = "text/html";
  }
  if (!info[1]->IsUndefined()) {
    replace = info[1];
    if (!replace.Prepare())
      return;
  } else {
    replace = WTF::g_empty_string;
  }

  Document* result = impl->open(info.GetIsolate(), type, replace, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void Open2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "open");

  Document* impl = V8Document::ToImpl(info.Holder());

  USVStringOrTrustedURL url;
  V8StringResource<> name;
  V8StringResource<> features;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), info[0], url, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  name = info[1];
  if (!name.Prepare())
    return;

  features = info[2];
  if (!features.Prepare())
    return;

  DOMWindow* result = impl->open(info.GetIsolate(), url, name, features, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void OpenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentOpenTwoArgs);
        Open1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentOpenTwoArgs);
        Open1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentOpenTwoArgs);
        Open1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentOpenThreeArgs);
        Open2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "open");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "close");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  impl->close(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Write1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "write");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  Vector<String> text;
  text = ToImplArguments<IDLString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  impl->write(info.GetIsolate(), text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Writeln1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "writeln");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  Vector<String> text;
  text = ToImplArguments<IDLString>(info, 0, exception_state);
  if (exception_state.HadException())
    return;

  impl->writeln(info.GetIsolate(), text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Write2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "write");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  TrustedHTML* text;
  text = V8TrustedHTML::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!text) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'TrustedHTML'.");
    return;
  }

  impl->write(info.GetIsolate(), text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void WriteMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        Write1Method(info);
        return;
      }
      break;
    case 1:
      if (V8TrustedHTML::HasInstance(info[0], info.GetIsolate())) {
        Write2Method(info);
        return;
      }
      if (true) {
        Write1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "write");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Writeln2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "writeln");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  TrustedHTML* text;
  text = V8TrustedHTML::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!text) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'TrustedHTML'.");
    return;
  }

  impl->writeln(info.GetIsolate(), text, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void WritelnMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 0:
      if (true) {
        Writeln1Method(info);
        return;
      }
      break;
    case 1:
      if (V8TrustedHTML::HasInstance(info[0], info.GetIsolate())) {
        Writeln2Method(info);
        return;
      }
      if (true) {
        Writeln1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "writeln");
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void HasFocusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->hasFocus());
}

static void ExecCommandMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "execCommand");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  bool show_ui;
  V8StringResource<> value;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    show_ui = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    show_ui = false;
  }
  if (!info[2]->IsUndefined()) {
    value = info[2];
    if (!value.Prepare())
      return;
  } else {
    value = WTF::g_empty_string;
  }

  bool result = impl->execCommand(command_id, show_ui, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void QueryCommandEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "queryCommandEnabled");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  bool result = impl->queryCommandEnabled(command_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void QueryCommandIndetermMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "queryCommandIndeterm");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  bool result = impl->queryCommandIndeterm(command_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void QueryCommandStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "queryCommandState");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  bool result = impl->queryCommandState(command_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void QueryCommandSupportedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "queryCommandSupported");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  bool result = impl->queryCommandSupported(command_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void QueryCommandValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "queryCommandValue");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> command_id;
  command_id = info[0];
  if (!command_id.Prepare())
    return;

  String result = impl->queryCommandValue(command_id, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void ClearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  impl->clear();
}

static void CaptureEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  impl->captureEvents();
}

static void ReleaseEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  impl->releaseEvents();
}

static void ExitPointerLockMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  impl->exitPointerLock();
}

static void RegisterElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "registerElement");

  Document* impl = V8Document::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  ElementRegistrationOptions* options;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<ElementRegistrationOptions>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->registerElement(script_state, type, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void CreateElement2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<> local_name;
  StringOrElementCreationOptions options;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  V8StringOrElementCreationOptions::ToImpl(info.GetIsolate(), info[1], options, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  Element* result = impl->CreateElementForBinding(local_name, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        CreateElement1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateElement2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CreateElement2MethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<> local_name;
  StringOrElementCreationOptions options;
  local_name = info[0];
  if (!local_name.Prepare())
    return;

  V8StringOrElementCreationOptions::ToImpl(info.GetIsolate(), info[1], options, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  Element* result = impl->CreateElementForBinding(local_name, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void CreateElementMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        CreateElement1MethodForMainWorld(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateElement2MethodForMainWorld(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElement");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CreateElementNS2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElementNS");

  Document* impl = V8Document::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> qualified_name;
  StringOrElementCreationOptions options;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  qualified_name = info[1];
  if (!qualified_name.Prepare())
    return;

  V8StringOrElementCreationOptions::ToImpl(info.GetIsolate(), info[2], options, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  Element* result = impl->createElementNS(namespace_uri, qualified_name, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateElementNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 2:
      if (true) {
        CreateElementNS1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        CreateElementNS2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createElementNS");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CaretRangeFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "caretRangeFromPoint");

  Document* impl = V8Document::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueFast(info, impl->caretRangeFromPoint(x, y), impl);
}

static void GetAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(DocumentAnimation::getAnimations(*impl), info.Holder(), info.GetIsolate()));
}

static void GetSelectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  V8SetReturnValueFast(info, DocumentOrShadowRoot::getSelection(*impl), impl);
}

static void ElementFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "elementFromPoint");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueFast(info, DocumentOrShadowRoot::elementFromPoint(*impl, x, y), impl);
}

static void ElementsFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "elementsFromPoint");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  double x;
  double y;
  x = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, ToV8(DocumentOrShadowRoot::elementsFromPoint(*impl, x, y), info.Holder(), info.GetIsolate()));
}

static void GetElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_id;
  element_id = info[0];
  if (!element_id.Prepare())
    return;

  V8SetReturnValueFast(info, NonElementParentNode::getElementById(*impl, element_id), impl);
}

static void GetElementByIdMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_id;
  element_id = info[0];
  if (!element_id.Prepare())
    return;

  V8SetReturnValueForMainWorld(info, NonElementParentNode::getElementById(*impl, element_id));
}

static void PrependMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "prepend");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "append");
  CEReactionsScope ce_reactions_scope;

  Document* impl = V8Document::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "querySelector");

  Document* impl = V8Document::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "querySelectorAll");

  Document* impl = V8Document::ToImpl(info.Holder());

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

static void ExitFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "exitFullscreen");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Document::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Document* impl = V8Document::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = DocumentFullscreen::exitFullscreen(script_state, *impl);
  V8SetReturnValue(info, result.V8Value());
}

static void WebkitCancelFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  DocumentFullscreen::webkitExitFullscreen(*impl);
}

static void WebkitExitFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  DocumentFullscreen::webkitExitFullscreen(*impl);
}

static void CreateExpressionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "createExpression");

  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> expression;
  XPathNSResolver* resolver;
  expression = info[0];
  if (!expression.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[1]);
    if (!resolver && !IsUndefinedOrNull(info[1])) {
      exception_state.ThrowTypeError("parameter 2 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }

  XPathExpression* result = DocumentXPathEvaluator::createExpression(*impl, expression, resolver, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CreateNSResolverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Document* impl = V8Document::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "Document", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node_resolver;
  node_resolver = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node_resolver) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createNSResolver", "Document", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueFast(info, DocumentXPathEvaluator::createNSResolver(*impl, node_resolver), impl);
}

static void EvaluateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Document", "evaluate");

  Document* impl = V8Document::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> expression;
  Node* context_node;
  XPathNSResolver* resolver;
  uint16_t type;
  ScriptValue in_result;
  expression = info[0];
  if (!expression.Prepare())
    return;

  context_node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!context_node) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    resolver = ToXPathNSResolver(ScriptState::Current(info.GetIsolate()), info[2]);
    if (!resolver && !IsUndefinedOrNull(info[2])) {
      exception_state.ThrowTypeError("parameter 3 is not of type 'XPathNSResolver'.");
      return;
    }
  } else {
    resolver = nullptr;
  }
  if (!info[3]->IsUndefined()) {
    type = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    type = 0u;
  }
  if (!info[4]->IsUndefined()) {
    if (info[4]->IsObject()) {
      in_result = ScriptValue(ScriptState::Current(info.GetIsolate()), info[4]);
    } else if (info[4]->IsNullOrUndefined()) {
      in_result = ScriptValue(ScriptState::Current(info.GetIsolate()), v8::Null(info.GetIsolate()));
    } else {
      exception_state.ThrowTypeError("parameter 5 ('inResult') is not an object.");
      return;
    }
  } else {
    in_result = ScriptValue::CreateNull(script_state);
  }

  XPathResult* result = DocumentXPathEvaluator::evaluate(*impl, expression, context_node, resolver, type, in_result, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ConstructorCallback");

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  Document* impl = Document::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8Document::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("Document"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  document_v8_internal::Constructor(info);
}

}  // namespace document_v8_internal

void V8Document::ImplementationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_implementation_Getter");

  document_v8_internal::ImplementationAttributeGetter(info);
}

void V8Document::URLAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_URL_Getter");

  document_v8_internal::URLAttributeGetter(info);
}

void V8Document::DocumentURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_documentURI_Getter");

  document_v8_internal::DocumentURIAttributeGetter(info);
}

void V8Document::CompatModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_compatMode_Getter");

  document_v8_internal::CompatModeAttributeGetter(info);
}

void V8Document::CharacterSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_characterSet_Getter");

  document_v8_internal::CharacterSetAttributeGetter(info);
}

void V8Document::CharsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_charset_Getter");

  document_v8_internal::CharsetAttributeGetter(info);
}

void V8Document::InputEncodingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_inputEncoding_Getter");

  document_v8_internal::InputEncodingAttributeGetter(info);
}

void V8Document::ContentTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_contentType_Getter");

  document_v8_internal::ContentTypeAttributeGetter(info);
}

void V8Document::DoctypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_doctype_Getter");

  document_v8_internal::DoctypeAttributeGetter(info);
}

void V8Document::DocumentElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_documentElement_Getter");

  document_v8_internal::DocumentElementAttributeGetter(info);
}

void V8Document::RootScrollerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_rootScroller_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_RootScroller_AttributeGetter);

  document_v8_internal::RootScrollerAttributeGetter(info);
}

void V8Document::RootScrollerAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_rootScroller_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8Document_RootScroller_AttributeSetter);

  document_v8_internal::RootScrollerAttributeSetter(v8_value, info);
}

void V8Document::XmlEncodingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_xmlEncoding_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXMLEncoding);

  document_v8_internal::XmlEncodingAttributeGetter(info);
}

void V8Document::XmlVersionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_xmlVersion_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXMLVersion);

  document_v8_internal::XmlVersionAttributeGetter(info);
}

void V8Document::XmlVersionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_xmlVersion_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kDocumentXMLVersion);

  document_v8_internal::XmlVersionAttributeSetter(v8_value, info);
}

void V8Document::XmlStandaloneAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_xmlStandalone_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXMLStandalone);

  document_v8_internal::XmlStandaloneAttributeGetter(info);
}

void V8Document::XmlStandaloneAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_xmlStandalone_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kDocumentXMLStandalone);

  document_v8_internal::XmlStandaloneAttributeSetter(v8_value, info);
}

void V8Document::LocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_location_Getter");

  document_v8_internal::LocationAttributeGetter(info);
}

void V8Document::LocationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_location_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::LocationAttributeSetter(v8_value, info);
}

void V8Document::DomainAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_domain_Getter");

  document_v8_internal::DomainAttributeGetter(info);
}

void V8Document::DomainAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_domain_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::DomainAttributeSetter(v8_value, info);
}

void V8Document::ReferrerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_referrer_Getter");

  document_v8_internal::ReferrerAttributeGetter(info);
}

void V8Document::CookieAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kDocumentCookie_Getter);

  document_v8_internal::CookieAttributeGetter(info);
}

void V8Document::CookieAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kDocumentCookie_Setter);

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::CookieAttributeSetter(v8_value, info);
}

void V8Document::LastModifiedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_lastModified_Getter");

  document_v8_internal::LastModifiedAttributeGetter(info);
}

void V8Document::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_readyState_Getter");

  document_v8_internal::ReadyStateAttributeGetter(info);
}

void V8Document::TitleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_title_Getter");

  document_v8_internal::TitleAttributeGetter(info);
}

void V8Document::TitleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_title_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::TitleAttributeSetter(v8_value, info);
}

void V8Document::DirAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_dir_Getter");

  document_v8_internal::DirAttributeGetter(info);
}

void V8Document::DirAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_dir_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::DirAttributeSetter(v8_value, info);
}

void V8Document::BodyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_body_Getter");

  document_v8_internal::BodyAttributeGetter(info);
}

void V8Document::BodyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_body_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::BodyAttributeSetter(v8_value, info);
}

void V8Document::BodyAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_body_Getter");

  document_v8_internal::BodyAttributeGetterForMainWorld(info);
}

void V8Document::BodyAttributeSetterCallbackForMainWorld(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_body_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::BodyAttributeSetterForMainWorld(v8_value, info);
}

void V8Document::HeadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_head_Getter");

  document_v8_internal::HeadAttributeGetter(info);
}

void V8Document::ImagesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_images_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Images_AttributeGetter);

  document_v8_internal::ImagesAttributeGetter(info);
}

void V8Document::EmbedsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_embeds_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Embeds_AttributeGetter);

  document_v8_internal::EmbedsAttributeGetter(info);
}

void V8Document::PluginsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_plugins_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Plugins_AttributeGetter);

  document_v8_internal::PluginsAttributeGetter(info);
}

void V8Document::LinksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_links_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Links_AttributeGetter);

  document_v8_internal::LinksAttributeGetter(info);
}

void V8Document::FormsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_forms_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Forms_AttributeGetter);

  document_v8_internal::FormsAttributeGetter(info);
}

void V8Document::ScriptsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_scripts_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Scripts_AttributeGetter);

  document_v8_internal::ScriptsAttributeGetter(info);
}

void V8Document::CurrentScriptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_currentScript_Getter");

  document_v8_internal::CurrentScriptAttributeGetter(info);
}

void V8Document::DefaultViewAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_defaultView_Getter");

  document_v8_internal::DefaultViewAttributeGetter(info);
}

void V8Document::DesignModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_designMode_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentDesignMode);

  document_v8_internal::DesignModeAttributeGetter(info);
}

void V8Document::DesignModeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_designMode_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kDocumentDesignMode);

  document_v8_internal::DesignModeAttributeSetter(v8_value, info);
}

void V8Document::OnreadystatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onreadystatechange_Getter");

  document_v8_internal::OnreadystatechangeAttributeGetter(info);
}

void V8Document::OnreadystatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onreadystatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnreadystatechangeAttributeSetter(v8_value, info);
}

void V8Document::AnchorsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_anchors_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Anchors_AttributeGetter);

  document_v8_internal::AnchorsAttributeGetter(info);
}

void V8Document::AppletsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_applets_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Document_Applets_AttributeGetter);

  document_v8_internal::AppletsAttributeGetter(info);
}

void V8Document::FgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fgColor_Getter");

  document_v8_internal::FgColorAttributeGetter(info);
}

void V8Document::FgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::FgColorAttributeSetter(v8_value, info);
}

void V8Document::LinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_linkColor_Getter");

  document_v8_internal::LinkColorAttributeGetter(info);
}

void V8Document::LinkColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_linkColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::LinkColorAttributeSetter(v8_value, info);
}

void V8Document::VlinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_vlinkColor_Getter");

  document_v8_internal::VlinkColorAttributeGetter(info);
}

void V8Document::VlinkColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_vlinkColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::VlinkColorAttributeSetter(v8_value, info);
}

void V8Document::AlinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_alinkColor_Getter");

  document_v8_internal::AlinkColorAttributeGetter(info);
}

void V8Document::AlinkColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_alinkColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::AlinkColorAttributeSetter(v8_value, info);
}

void V8Document::BgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_bgColor_Getter");

  document_v8_internal::BgColorAttributeGetter(info);
}

void V8Document::BgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_bgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::BgColorAttributeSetter(v8_value, info);
}

void V8Document::AllAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_all_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentAll);

  document_v8_internal::AllAttributeGetter(info);
}

void V8Document::ScrollingElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_scrollingElement_Getter");

  document_v8_internal::ScrollingElementAttributeGetter(info);
}

void V8Document::OnpointerlockchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerlockchange_Getter");

  document_v8_internal::OnpointerlockchangeAttributeGetter(info);
}

void V8Document::OnpointerlockchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerlockchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerlockchangeAttributeSetter(v8_value, info);
}

void V8Document::OnpointerlockerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerlockerror_Getter");

  document_v8_internal::OnpointerlockerrorAttributeGetter(info);
}

void V8Document::OnpointerlockerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerlockerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerlockerrorAttributeSetter(v8_value, info);
}

void V8Document::HiddenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_hidden_Getter");

  document_v8_internal::HiddenAttributeGetter(info);
}

void V8Document::VisibilityStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_visibilityState_Getter");

  document_v8_internal::VisibilityStateAttributeGetter(info);
}

void V8Document::WasDiscardedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_wasDiscarded_Getter");

  document_v8_internal::WasDiscardedAttributeGetter(info);
}

void V8Document::AddressSpaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_addressSpace_Getter");

  document_v8_internal::AddressSpaceAttributeGetter(info);
}

void V8Document::FeaturePolicyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_featurePolicy_Getter");

  document_v8_internal::FeaturePolicyAttributeGetter(info);
}

void V8Document::WebkitVisibilityStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitVisibilityState_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedPageVisibility);

  document_v8_internal::WebkitVisibilityStateAttributeGetter(info);
}

void V8Document::WebkitHiddenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitHidden_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedPageVisibility);

  document_v8_internal::WebkitHiddenAttributeGetter(info);
}

void V8Document::OnbeforecopyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforecopy_Getter");

  document_v8_internal::OnbeforecopyAttributeGetter(info);
}

void V8Document::OnbeforecopyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforecopy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnbeforecopyAttributeSetter(v8_value, info);
}

void V8Document::OnbeforecutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforecut_Getter");

  document_v8_internal::OnbeforecutAttributeGetter(info);
}

void V8Document::OnbeforecutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforecut_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnbeforecutAttributeSetter(v8_value, info);
}

void V8Document::OnbeforepasteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforepaste_Getter");

  document_v8_internal::OnbeforepasteAttributeGetter(info);
}

void V8Document::OnbeforepasteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforepaste_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnbeforepasteAttributeSetter(v8_value, info);
}

void V8Document::OnfreezeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfreeze_Getter");

  document_v8_internal::OnfreezeAttributeGetter(info);
}

void V8Document::OnfreezeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfreeze_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnfreezeAttributeSetter(v8_value, info);
}

void V8Document::OnresumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onresume_Getter");

  document_v8_internal::OnresumeAttributeGetter(info);
}

void V8Document::OnresumeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onresume_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnresumeAttributeSetter(v8_value, info);
}

void V8Document::OnsearchAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsearch_Getter");

  document_v8_internal::OnsearchAttributeGetter(info);
}

void V8Document::OnsearchAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsearch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnsearchAttributeSetter(v8_value, info);
}

void V8Document::OnsecuritypolicyviolationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsecuritypolicyviolation_Getter");

  document_v8_internal::OnsecuritypolicyviolationAttributeGetter(info);
}

void V8Document::OnsecuritypolicyviolationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsecuritypolicyviolation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnsecuritypolicyviolationAttributeSetter(v8_value, info);
}

void V8Document::OnvisibilitychangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onvisibilitychange_Getter");

  document_v8_internal::OnvisibilitychangeAttributeGetter(info);
}

void V8Document::OnvisibilitychangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onvisibilitychange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnvisibilitychangeAttributeSetter(v8_value, info);
}

void V8Document::TimelineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_timeline_Getter");

  document_v8_internal::TimelineAttributeGetter(info);
}

void V8Document::FontsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fonts_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentFonts);

  document_v8_internal::FontsAttributeGetter(info);
}

void V8Document::OncopyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncopy_Getter");

  document_v8_internal::OncopyAttributeGetter(info);
}

void V8Document::OncopyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncopy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncopyAttributeSetter(v8_value, info);
}

void V8Document::OncutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncut_Getter");

  document_v8_internal::OncutAttributeGetter(info);
}

void V8Document::OncutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncut_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncutAttributeSetter(v8_value, info);
}

void V8Document::OnpasteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpaste_Getter");

  document_v8_internal::OnpasteAttributeGetter(info);
}

void V8Document::OnpasteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpaste_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpasteAttributeSetter(v8_value, info);
}

void V8Document::ActiveElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_activeElement_Getter");

  document_v8_internal::ActiveElementAttributeGetter(info);
}

void V8Document::StyleSheetsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_styleSheets_Getter");

  document_v8_internal::StyleSheetsAttributeGetter(info);
}

void V8Document::PointerLockElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_pointerLockElement_Getter");

  document_v8_internal::PointerLockElementAttributeGetter(info);
}

void V8Document::FullscreenElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fullscreenElement_Getter");

  document_v8_internal::FullscreenElementAttributeGetter(info);
}

void V8Document::FullscreenElementAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Setter for fullscreenElement is no-op because [LenientSetter] is specified.
}

void V8Document::AdoptedStyleSheetsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_adoptedStyleSheets_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kAdoptedStyleSheets);

  document_v8_internal::AdoptedStyleSheetsAttributeGetter(info);
}

void V8Document::AdoptedStyleSheetsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_adoptedStyleSheets_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kAdoptedStyleSheets);

  document_v8_internal::AdoptedStyleSheetsAttributeSetter(v8_value, info);
}

void V8Document::OnabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onabort_Getter");

  document_v8_internal::OnabortAttributeGetter(info);
}

void V8Document::OnabortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onabort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnabortAttributeSetter(v8_value, info);
}

void V8Document::OnactivateinvisibleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onactivateinvisible_Getter");

  document_v8_internal::OnactivateinvisibleAttributeGetter(info);
}

void V8Document::OnactivateinvisibleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onactivateinvisible_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnactivateinvisibleAttributeSetter(v8_value, info);
}

void V8Document::OnbeforeactivateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforeactivate_Getter");

  document_v8_internal::OnbeforeactivateAttributeGetter(info);
}

void V8Document::OnbeforeactivateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onbeforeactivate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnbeforeactivateAttributeSetter(v8_value, info);
}

void V8Document::OnblurAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onblur_Getter");

  document_v8_internal::OnblurAttributeGetter(info);
}

void V8Document::OnblurAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onblur_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnblurAttributeSetter(v8_value, info);
}

void V8Document::OncancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncancel_Getter");

  document_v8_internal::OncancelAttributeGetter(info);
}

void V8Document::OncancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncancelAttributeSetter(v8_value, info);
}

void V8Document::OncanplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncanplay_Getter");

  document_v8_internal::OncanplayAttributeGetter(info);
}

void V8Document::OncanplayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncanplay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncanplayAttributeSetter(v8_value, info);
}

void V8Document::OncanplaythroughAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncanplaythrough_Getter");

  document_v8_internal::OncanplaythroughAttributeGetter(info);
}

void V8Document::OncanplaythroughAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncanplaythrough_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncanplaythroughAttributeSetter(v8_value, info);
}

void V8Document::OnchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onchange_Getter");

  document_v8_internal::OnchangeAttributeGetter(info);
}

void V8Document::OnchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnchangeAttributeSetter(v8_value, info);
}

void V8Document::OnclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onclick_Getter");

  document_v8_internal::OnclickAttributeGetter(info);
}

void V8Document::OnclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnclickAttributeSetter(v8_value, info);
}

void V8Document::OncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onclose_Getter");

  document_v8_internal::OncloseAttributeGetter(info);
}

void V8Document::OncloseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onclose_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncloseAttributeSetter(v8_value, info);
}

void V8Document::OncontextmenuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncontextmenu_Getter");

  document_v8_internal::OncontextmenuAttributeGetter(info);
}

void V8Document::OncontextmenuAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncontextmenu_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncontextmenuAttributeSetter(v8_value, info);
}

void V8Document::OncuechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncuechange_Getter");

  document_v8_internal::OncuechangeAttributeGetter(info);
}

void V8Document::OncuechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oncuechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OncuechangeAttributeSetter(v8_value, info);
}

void V8Document::OndblclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondblclick_Getter");

  document_v8_internal::OndblclickAttributeGetter(info);
}

void V8Document::OndblclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondblclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndblclickAttributeSetter(v8_value, info);
}

void V8Document::OndragAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondrag_Getter");

  document_v8_internal::OndragAttributeGetter(info);
}

void V8Document::OndragAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondrag_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragAttributeSetter(v8_value, info);
}

void V8Document::OndragendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragend_Getter");

  document_v8_internal::OndragendAttributeGetter(info);
}

void V8Document::OndragendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragendAttributeSetter(v8_value, info);
}

void V8Document::OndragenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragenter_Getter");

  document_v8_internal::OndragenterAttributeGetter(info);
}

void V8Document::OndragenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragenterAttributeSetter(v8_value, info);
}

void V8Document::OndragleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragleave_Getter");

  document_v8_internal::OndragleaveAttributeGetter(info);
}

void V8Document::OndragleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragleaveAttributeSetter(v8_value, info);
}

void V8Document::OndragoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragover_Getter");

  document_v8_internal::OndragoverAttributeGetter(info);
}

void V8Document::OndragoverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragoverAttributeSetter(v8_value, info);
}

void V8Document::OndragstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragstart_Getter");

  document_v8_internal::OndragstartAttributeGetter(info);
}

void V8Document::OndragstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondragstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndragstartAttributeSetter(v8_value, info);
}

void V8Document::OndropAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondrop_Getter");

  document_v8_internal::OndropAttributeGetter(info);
}

void V8Document::OndropAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondrop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndropAttributeSetter(v8_value, info);
}

void V8Document::OndurationchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondurationchange_Getter");

  document_v8_internal::OndurationchangeAttributeGetter(info);
}

void V8Document::OndurationchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ondurationchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OndurationchangeAttributeSetter(v8_value, info);
}

void V8Document::OnemptiedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onemptied_Getter");

  document_v8_internal::OnemptiedAttributeGetter(info);
}

void V8Document::OnemptiedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onemptied_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnemptiedAttributeSetter(v8_value, info);
}

void V8Document::OnendedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onended_Getter");

  document_v8_internal::OnendedAttributeGetter(info);
}

void V8Document::OnendedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onended_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnendedAttributeSetter(v8_value, info);
}

void V8Document::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onerror_Getter");

  document_v8_internal::OnerrorAttributeGetter(info);
}

void V8Document::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8Document::OnfocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfocus_Getter");

  document_v8_internal::OnfocusAttributeGetter(info);
}

void V8Document::OnfocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnfocusAttributeSetter(v8_value, info);
}

void V8Document::OnformdataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onformdata_Getter");

  document_v8_internal::OnformdataAttributeGetter(info);
}

void V8Document::OnformdataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onformdata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnformdataAttributeSetter(v8_value, info);
}

void V8Document::OninputAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oninput_Getter");

  document_v8_internal::OninputAttributeGetter(info);
}

void V8Document::OninputAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oninput_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OninputAttributeSetter(v8_value, info);
}

void V8Document::OninvalidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oninvalid_Getter");

  document_v8_internal::OninvalidAttributeGetter(info);
}

void V8Document::OninvalidAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_oninvalid_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OninvalidAttributeSetter(v8_value, info);
}

void V8Document::OnkeydownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeydown_Getter");

  document_v8_internal::OnkeydownAttributeGetter(info);
}

void V8Document::OnkeydownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeydown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnkeydownAttributeSetter(v8_value, info);
}

void V8Document::OnkeypressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeypress_Getter");

  document_v8_internal::OnkeypressAttributeGetter(info);
}

void V8Document::OnkeypressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeypress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnkeypressAttributeSetter(v8_value, info);
}

void V8Document::OnkeyupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeyup_Getter");

  document_v8_internal::OnkeyupAttributeGetter(info);
}

void V8Document::OnkeyupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onkeyup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnkeyupAttributeSetter(v8_value, info);
}

void V8Document::OnloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onload_Getter");

  document_v8_internal::OnloadAttributeGetter(info);
}

void V8Document::OnloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnloadAttributeSetter(v8_value, info);
}

void V8Document::OnloadeddataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadeddata_Getter");

  document_v8_internal::OnloadeddataAttributeGetter(info);
}

void V8Document::OnloadeddataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadeddata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnloadeddataAttributeSetter(v8_value, info);
}

void V8Document::OnloadedmetadataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadedmetadata_Getter");

  document_v8_internal::OnloadedmetadataAttributeGetter(info);
}

void V8Document::OnloadedmetadataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadedmetadata_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnloadedmetadataAttributeSetter(v8_value, info);
}

void V8Document::OnloadstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadstart_Getter");

  document_v8_internal::OnloadstartAttributeGetter(info);
}

void V8Document::OnloadstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onloadstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnloadstartAttributeSetter(v8_value, info);
}

void V8Document::OnmousedownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousedown_Getter");

  document_v8_internal::OnmousedownAttributeGetter(info);
}

void V8Document::OnmousedownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousedown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmousedownAttributeSetter(v8_value, info);
}

void V8Document::OnmouseenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseenter_Getter");

  document_v8_internal::OnmouseenterAttributeGetter(info);
}

void V8Document::OnmouseenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmouseenterAttributeSetter(v8_value, info);
}

void V8Document::OnmouseleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseleave_Getter");

  document_v8_internal::OnmouseleaveAttributeGetter(info);
}

void V8Document::OnmouseleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmouseleaveAttributeSetter(v8_value, info);
}

void V8Document::OnmousemoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousemove_Getter");

  document_v8_internal::OnmousemoveAttributeGetter(info);
}

void V8Document::OnmousemoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousemove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmousemoveAttributeSetter(v8_value, info);
}

void V8Document::OnmouseoutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseout_Getter");

  document_v8_internal::OnmouseoutAttributeGetter(info);
}

void V8Document::OnmouseoutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmouseoutAttributeSetter(v8_value, info);
}

void V8Document::OnmouseoverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseover_Getter");

  document_v8_internal::OnmouseoverAttributeGetter(info);
}

void V8Document::OnmouseoverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmouseoverAttributeSetter(v8_value, info);
}

void V8Document::OnmouseupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseup_Getter");

  document_v8_internal::OnmouseupAttributeGetter(info);
}

void V8Document::OnmouseupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmouseup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmouseupAttributeSetter(v8_value, info);
}

void V8Document::OnmousewheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousewheel_Getter");

  document_v8_internal::OnmousewheelAttributeGetter(info);
}

void V8Document::OnmousewheelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onmousewheel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnmousewheelAttributeSetter(v8_value, info);
}

void V8Document::OnoverscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onoverscroll_Getter");

  document_v8_internal::OnoverscrollAttributeGetter(info);
}

void V8Document::OnoverscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onoverscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnoverscrollAttributeSetter(v8_value, info);
}

void V8Document::OnpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpause_Getter");

  document_v8_internal::OnpauseAttributeGetter(info);
}

void V8Document::OnpauseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpause_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpauseAttributeSetter(v8_value, info);
}

void V8Document::OnplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onplay_Getter");

  document_v8_internal::OnplayAttributeGetter(info);
}

void V8Document::OnplayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onplay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnplayAttributeSetter(v8_value, info);
}

void V8Document::OnplayingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onplaying_Getter");

  document_v8_internal::OnplayingAttributeGetter(info);
}

void V8Document::OnplayingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onplaying_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnplayingAttributeSetter(v8_value, info);
}

void V8Document::OnprogressAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onprogress_Getter");

  document_v8_internal::OnprogressAttributeGetter(info);
}

void V8Document::OnprogressAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onprogress_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnprogressAttributeSetter(v8_value, info);
}

void V8Document::OnratechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onratechange_Getter");

  document_v8_internal::OnratechangeAttributeGetter(info);
}

void V8Document::OnratechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onratechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnratechangeAttributeSetter(v8_value, info);
}

void V8Document::OnresetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onreset_Getter");

  document_v8_internal::OnresetAttributeGetter(info);
}

void V8Document::OnresetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onreset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnresetAttributeSetter(v8_value, info);
}

void V8Document::OnresizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onresize_Getter");

  document_v8_internal::OnresizeAttributeGetter(info);
}

void V8Document::OnresizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onresize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnresizeAttributeSetter(v8_value, info);
}

void V8Document::OnscrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onscroll_Getter");

  document_v8_internal::OnscrollAttributeGetter(info);
}

void V8Document::OnscrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onscroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnscrollAttributeSetter(v8_value, info);
}

void V8Document::OnscrollendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onscrollend_Getter");

  document_v8_internal::OnscrollendAttributeGetter(info);
}

void V8Document::OnscrollendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onscrollend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnscrollendAttributeSetter(v8_value, info);
}

void V8Document::OnseekedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onseeked_Getter");

  document_v8_internal::OnseekedAttributeGetter(info);
}

void V8Document::OnseekedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onseeked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnseekedAttributeSetter(v8_value, info);
}

void V8Document::OnseekingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onseeking_Getter");

  document_v8_internal::OnseekingAttributeGetter(info);
}

void V8Document::OnseekingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onseeking_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnseekingAttributeSetter(v8_value, info);
}

void V8Document::OnselectAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselect_Getter");

  document_v8_internal::OnselectAttributeGetter(info);
}

void V8Document::OnselectAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselect_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnselectAttributeSetter(v8_value, info);
}

void V8Document::OnstalledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onstalled_Getter");

  document_v8_internal::OnstalledAttributeGetter(info);
}

void V8Document::OnstalledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onstalled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnstalledAttributeSetter(v8_value, info);
}

void V8Document::OnsubmitAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsubmit_Getter");

  document_v8_internal::OnsubmitAttributeGetter(info);
}

void V8Document::OnsubmitAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsubmit_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnsubmitAttributeSetter(v8_value, info);
}

void V8Document::OnsuspendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsuspend_Getter");

  document_v8_internal::OnsuspendAttributeGetter(info);
}

void V8Document::OnsuspendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onsuspend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnsuspendAttributeSetter(v8_value, info);
}

void V8Document::OntimeupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontimeupdate_Getter");

  document_v8_internal::OntimeupdateAttributeGetter(info);
}

void V8Document::OntimeupdateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontimeupdate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntimeupdateAttributeSetter(v8_value, info);
}

void V8Document::OntoggleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontoggle_Getter");

  document_v8_internal::OntoggleAttributeGetter(info);
}

void V8Document::OntoggleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontoggle_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntoggleAttributeSetter(v8_value, info);
}

void V8Document::OnvolumechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onvolumechange_Getter");

  document_v8_internal::OnvolumechangeAttributeGetter(info);
}

void V8Document::OnvolumechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onvolumechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnvolumechangeAttributeSetter(v8_value, info);
}

void V8Document::OnwaitingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwaiting_Getter");

  document_v8_internal::OnwaitingAttributeGetter(info);
}

void V8Document::OnwaitingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwaiting_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnwaitingAttributeSetter(v8_value, info);
}

void V8Document::OnwheelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwheel_Getter");

  document_v8_internal::OnwheelAttributeGetter(info);
}

void V8Document::OnwheelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwheel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnwheelAttributeSetter(v8_value, info);
}

void V8Document::OnauxclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onauxclick_Getter");

  document_v8_internal::OnauxclickAttributeGetter(info);
}

void V8Document::OnauxclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onauxclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnauxclickAttributeSetter(v8_value, info);
}

void V8Document::OngotpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ongotpointercapture_Getter");

  document_v8_internal::OngotpointercaptureAttributeGetter(info);
}

void V8Document::OngotpointercaptureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ongotpointercapture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OngotpointercaptureAttributeSetter(v8_value, info);
}

void V8Document::OnlostpointercaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onlostpointercapture_Getter");

  document_v8_internal::OnlostpointercaptureAttributeGetter(info);
}

void V8Document::OnlostpointercaptureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onlostpointercapture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnlostpointercaptureAttributeSetter(v8_value, info);
}

void V8Document::OnpointerdownAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerdown_Getter");

  document_v8_internal::OnpointerdownAttributeGetter(info);
}

void V8Document::OnpointerdownAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerdown_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerdownAttributeSetter(v8_value, info);
}

void V8Document::OnpointermoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointermove_Getter");

  document_v8_internal::OnpointermoveAttributeGetter(info);
}

void V8Document::OnpointermoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointermove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointermoveAttributeSetter(v8_value, info);
}

void V8Document::OnpointerrawupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerrawupdate_Getter");

  document_v8_internal::OnpointerrawupdateAttributeGetter(info);
}

void V8Document::OnpointerrawupdateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerrawupdate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerrawupdateAttributeSetter(v8_value, info);
}

void V8Document::OnpointerupAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerup_Getter");

  document_v8_internal::OnpointerupAttributeGetter(info);
}

void V8Document::OnpointerupAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerup_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerupAttributeSetter(v8_value, info);
}

void V8Document::OnpointercancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointercancel_Getter");

  document_v8_internal::OnpointercancelAttributeGetter(info);
}

void V8Document::OnpointercancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointercancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointercancelAttributeSetter(v8_value, info);
}

void V8Document::OnpointeroverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerover_Getter");

  document_v8_internal::OnpointeroverAttributeGetter(info);
}

void V8Document::OnpointeroverAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerover_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointeroverAttributeSetter(v8_value, info);
}

void V8Document::OnpointeroutAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerout_Getter");

  document_v8_internal::OnpointeroutAttributeGetter(info);
}

void V8Document::OnpointeroutAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerout_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointeroutAttributeSetter(v8_value, info);
}

void V8Document::OnpointerenterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerenter_Getter");

  document_v8_internal::OnpointerenterAttributeGetter(info);
}

void V8Document::OnpointerenterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerenter_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerenterAttributeSetter(v8_value, info);
}

void V8Document::OnpointerleaveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerleave_Getter");

  document_v8_internal::OnpointerleaveAttributeGetter(info);
}

void V8Document::OnpointerleaveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onpointerleave_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnpointerleaveAttributeSetter(v8_value, info);
}

void V8Document::OntouchcancelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchcancel_Getter");

  document_v8_internal::OntouchcancelAttributeGetter(info);
}

void V8Document::OntouchcancelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchcancel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntouchcancelAttributeSetter(v8_value, info);
}

void V8Document::OntouchendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchend_Getter");

  document_v8_internal::OntouchendAttributeGetter(info);
}

void V8Document::OntouchendAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchend_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntouchendAttributeSetter(v8_value, info);
}

void V8Document::OntouchmoveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchmove_Getter");

  document_v8_internal::OntouchmoveAttributeGetter(info);
}

void V8Document::OntouchmoveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchmove_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntouchmoveAttributeSetter(v8_value, info);
}

void V8Document::OntouchstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchstart_Getter");

  document_v8_internal::OntouchstartAttributeGetter(info);
}

void V8Document::OntouchstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_ontouchstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OntouchstartAttributeSetter(v8_value, info);
}

void V8Document::OnselectstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselectstart_Getter");

  document_v8_internal::OnselectstartAttributeGetter(info);
}

void V8Document::OnselectstartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselectstart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnselectstartAttributeSetter(v8_value, info);
}

void V8Document::OnselectionchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselectionchange_Getter");

  document_v8_internal::OnselectionchangeAttributeGetter(info);
}

void V8Document::OnselectionchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onselectionchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnselectionchangeAttributeSetter(v8_value, info);
}

void V8Document::ChildrenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_children_Getter");

  document_v8_internal::ChildrenAttributeGetter(info);
}

void V8Document::ChildrenAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_children_Getter");

  document_v8_internal::ChildrenAttributeGetterForMainWorld(info);
}

void V8Document::FirstElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_firstElementChild_Getter");

  document_v8_internal::FirstElementChildAttributeGetter(info);
}

void V8Document::FirstElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_firstElementChild_Getter");

  document_v8_internal::FirstElementChildAttributeGetterForMainWorld(info);
}

void V8Document::LastElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_lastElementChild_Getter");

  document_v8_internal::LastElementChildAttributeGetter(info);
}

void V8Document::LastElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_lastElementChild_Getter");

  document_v8_internal::LastElementChildAttributeGetterForMainWorld(info);
}

void V8Document::ChildElementCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_childElementCount_Getter");

  document_v8_internal::ChildElementCountAttributeGetter(info);
}

void V8Document::FullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fullscreenEnabled_Getter");

  document_v8_internal::FullscreenEnabledAttributeGetter(info);
}

void V8Document::FullscreenEnabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Setter for fullscreenEnabled is no-op because [LenientSetter] is specified.
}

void V8Document::FullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_fullscreen_Getter");

  document_v8_internal::FullscreenAttributeGetter(info);
}

void V8Document::FullscreenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  // Setter for fullscreen is no-op because [LenientSetter] is specified.
}

void V8Document::OnfullscreenchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfullscreenchange_Getter");

  document_v8_internal::OnfullscreenchangeAttributeGetter(info);
}

void V8Document::OnfullscreenchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfullscreenchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnfullscreenchangeAttributeSetter(v8_value, info);
}

void V8Document::OnfullscreenerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfullscreenerror_Getter");

  document_v8_internal::OnfullscreenerrorAttributeGetter(info);
}

void V8Document::OnfullscreenerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onfullscreenerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnfullscreenerrorAttributeSetter(v8_value, info);
}

void V8Document::WebkitIsFullScreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitIsFullScreen_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentIsFullscreen);

  document_v8_internal::WebkitIsFullScreenAttributeGetter(info);
}

void V8Document::WebkitCurrentFullScreenElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitCurrentFullScreenElement_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentCurrentFullScreenElement);

  document_v8_internal::WebkitCurrentFullScreenElementAttributeGetter(info);
}

void V8Document::WebkitFullscreenEnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitFullscreenEnabled_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentFullscreenEnabled);

  document_v8_internal::WebkitFullscreenEnabledAttributeGetter(info);
}

void V8Document::WebkitFullscreenElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitFullscreenElement_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentFullscreenElement);

  document_v8_internal::WebkitFullscreenElementAttributeGetter(info);
}

void V8Document::OnwebkitfullscreenchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwebkitfullscreenchange_Getter");

  document_v8_internal::OnwebkitfullscreenchangeAttributeGetter(info);
}

void V8Document::OnwebkitfullscreenchangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwebkitfullscreenchange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnwebkitfullscreenchangeAttributeSetter(v8_value, info);
}

void V8Document::OnwebkitfullscreenerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwebkitfullscreenerror_Getter");

  document_v8_internal::OnwebkitfullscreenerrorAttributeGetter(info);
}

void V8Document::OnwebkitfullscreenerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_onwebkitfullscreenerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  document_v8_internal::OnwebkitfullscreenerrorAttributeSetter(v8_value, info);
}

void V8Document::RootElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_rootElement_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGDocumentRootElement);

  document_v8_internal::RootElementAttributeGetter(info);
}

void V8Document::GetElementsByTagNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementsByTagName");

  document_v8_internal::GetElementsByTagNameMethod(info);
}

void V8Document::GetElementsByTagNameNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementsByTagNameNS");

  document_v8_internal::GetElementsByTagNameNSMethod(info);
}

void V8Document::GetElementsByClassNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementsByClassName");

  document_v8_internal::GetElementsByClassNameMethod(info);
}

void V8Document::CreateDocumentFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createDocumentFragment");

  document_v8_internal::CreateDocumentFragmentMethod(info);
}

void V8Document::CreateTextNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createTextNode");

  document_v8_internal::CreateTextNodeMethod(info);
}

void V8Document::CreateCDATASectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createCDATASection");

  document_v8_internal::CreateCDATASectionMethod(info);
}

void V8Document::CreateCommentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createComment");

  document_v8_internal::CreateCommentMethod(info);
}

void V8Document::CreateProcessingInstructionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createProcessingInstruction");

  document_v8_internal::CreateProcessingInstructionMethod(info);
}

void V8Document::ImportNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_importNode");

  document_v8_internal::ImportNodeMethod(info);
}

void V8Document::AdoptNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_adoptNode");

  document_v8_internal::AdoptNodeMethod(info);
}

void V8Document::CreateAttributeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createAttribute");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentCreateAttribute);
  document_v8_internal::CreateAttributeMethod(info);
}

void V8Document::CreateAttributeNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createAttributeNS");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentCreateAttributeNS);
  document_v8_internal::CreateAttributeNSMethod(info);
}

void V8Document::CreateEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createEvent");

  document_v8_internal::CreateEventMethod(info);
}

void V8Document::CreateRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createRange");

  document_v8_internal::CreateRangeMethod(info);
}

void V8Document::CreateNodeIteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createNodeIterator");

  document_v8_internal::CreateNodeIteratorMethod(info);
}

void V8Document::CreateTreeWalkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createTreeWalker");

  document_v8_internal::CreateTreeWalkerMethod(info);
}

void V8Document::GetElementsByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementsByName");

  document_v8_internal::GetElementsByNameMethod(info);
}

void V8Document::GetElementsByNameMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementsByName");

  document_v8_internal::GetElementsByNameMethodForMainWorld(info);
}

void V8Document::OpenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_open");

  document_v8_internal::OpenMethod(info);
}

void V8Document::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_close");

  document_v8_internal::CloseMethod(info);
}

void V8Document::WriteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_write");

  document_v8_internal::WriteMethod(info);
}

void V8Document::WritelnMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_writeln");

  document_v8_internal::WritelnMethod(info);
}

void V8Document::HasFocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_hasFocus");

  document_v8_internal::HasFocusMethod(info);
}

void V8Document::ExecCommandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_execCommand");

  document_v8_internal::ExecCommandMethod(info);
}

void V8Document::QueryCommandEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_queryCommandEnabled");

  document_v8_internal::QueryCommandEnabledMethod(info);
}

void V8Document::QueryCommandIndetermMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_queryCommandIndeterm");

  document_v8_internal::QueryCommandIndetermMethod(info);
}

void V8Document::QueryCommandStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_queryCommandState");

  document_v8_internal::QueryCommandStateMethod(info);
}

void V8Document::QueryCommandSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_queryCommandSupported");

  document_v8_internal::QueryCommandSupportedMethod(info);
}

void V8Document::QueryCommandValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_queryCommandValue");

  document_v8_internal::QueryCommandValueMethod(info);
}

void V8Document::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_clear");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentClear);
  document_v8_internal::ClearMethod(info);
}

void V8Document::CaptureEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_captureEvents");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentCaptureEvents);
  document_v8_internal::CaptureEventsMethod(info);
}

void V8Document::ReleaseEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_releaseEvents");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentReleaseEvents);
  document_v8_internal::ReleaseEventsMethod(info);
}

void V8Document::ExitPointerLockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_exitPointerLock");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentExitPointerLock);
  document_v8_internal::ExitPointerLockMethod(info);
}

void V8Document::RegisterElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_registerElement");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kDocumentRegisterElement);
  document_v8_internal::RegisterElementMethod(info);
}

void V8Document::CreateElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createElement");

  document_v8_internal::CreateElementMethod(info);
}

void V8Document::CreateElementMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createElement");

  document_v8_internal::CreateElementMethodForMainWorld(info);
}

void V8Document::CreateElementNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createElementNS");

  document_v8_internal::CreateElementNSMethod(info);
}

void V8Document::CaretRangeFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_caretRangeFromPoint");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentCaretRangeFromPoint);
  document_v8_internal::CaretRangeFromPointMethod(info);
}

void V8Document::GetAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getAnimations");

  document_v8_internal::GetAnimationsMethod(info);
}

void V8Document::GetSelectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getSelection");

  document_v8_internal::GetSelectionMethod(info);
}

void V8Document::ElementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_elementFromPoint");

  document_v8_internal::ElementFromPointMethod(info);
}

void V8Document::ElementsFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_elementsFromPoint");

  document_v8_internal::ElementsFromPointMethod(info);
}

void V8Document::GetElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementById");

  document_v8_internal::GetElementByIdMethod(info);
}

void V8Document::GetElementByIdMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_getElementById");

  document_v8_internal::GetElementByIdMethodForMainWorld(info);
}

void V8Document::PrependMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_prepend");

  document_v8_internal::PrependMethod(info);
}

void V8Document::AppendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_append");

  document_v8_internal::AppendMethod(info);
}

void V8Document::QuerySelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_querySelector");

  document_v8_internal::QuerySelectorMethod(info);
}

void V8Document::QuerySelectorAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_querySelectorAll");

  document_v8_internal::QuerySelectorAllMethod(info);
}

void V8Document::ExitFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_exitFullscreen");

  document_v8_internal::ExitFullscreenMethod(info);
}

void V8Document::WebkitCancelFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitCancelFullScreen");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentCancelFullScreen);
  document_v8_internal::WebkitCancelFullScreenMethod(info);
}

void V8Document::WebkitExitFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_webkitExitFullscreen");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDocumentExitFullscreen);
  document_v8_internal::WebkitExitFullscreenMethod(info);
}

void V8Document::CreateExpressionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createExpression");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXPathCreateExpression);
  document_v8_internal::CreateExpressionMethod(info);
}

void V8Document::CreateNSResolverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_createNSResolver");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXPathCreateNSResolver);
  document_v8_internal::CreateNSResolverMethod(info);
}

void V8Document::EvaluateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Document_evaluate");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kDocumentXPathEvaluate);
  document_v8_internal::EvaluateMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DocumentAccessors[] = {
    { "implementation", V8Document::ImplementationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "URL", V8Document::URLAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "documentURI", V8Document::DocumentURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "compatMode", V8Document::CompatModeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "characterSet", V8Document::CharacterSetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "charset", V8Document::CharsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "inputEncoding", V8Document::InputEncodingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "contentType", V8Document::ContentTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "doctype", V8Document::DoctypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "documentElement", V8Document::DocumentElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "xmlEncoding", V8Document::XmlEncodingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "xmlVersion", V8Document::XmlVersionAttributeGetterCallback, V8Document::XmlVersionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "xmlStandalone", V8Document::XmlStandaloneAttributeGetterCallback, V8Document::XmlStandaloneAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "location", V8Document::LocationAttributeGetterCallback, V8Document::LocationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "domain", V8Document::DomainAttributeGetterCallback, V8Document::DomainAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "referrer", V8Document::ReferrerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cookie", V8Document::CookieAttributeGetterCallback, V8Document::CookieAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lastModified", V8Document::LastModifiedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8Document::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "title", V8Document::TitleAttributeGetterCallback, V8Document::TitleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "dir", V8Document::DirAttributeGetterCallback, V8Document::DirAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "body", V8Document::BodyAttributeGetterCallbackForMainWorld, V8Document::BodyAttributeSetterCallbackForMainWorld, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "body", V8Document::BodyAttributeGetterCallback, V8Document::BodyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "head", V8Document::HeadAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "images", V8Document::ImagesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "embeds", V8Document::EmbedsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "plugins", V8Document::PluginsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "links", V8Document::LinksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "forms", V8Document::FormsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scripts", V8Document::ScriptsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentScript", V8Document::CurrentScriptAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultView", V8Document::DefaultViewAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "designMode", V8Document::DesignModeAttributeGetterCallback, V8Document::DesignModeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onreadystatechange", V8Document::OnreadystatechangeAttributeGetterCallback, V8Document::OnreadystatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "anchors", V8Document::AnchorsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "applets", V8Document::AppletsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fgColor", V8Document::FgColorAttributeGetterCallback, V8Document::FgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "linkColor", V8Document::LinkColorAttributeGetterCallback, V8Document::LinkColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "vlinkColor", V8Document::VlinkColorAttributeGetterCallback, V8Document::VlinkColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "alinkColor", V8Document::AlinkColorAttributeGetterCallback, V8Document::AlinkColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8Document::BgColorAttributeGetterCallback, V8Document::BgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "all", V8Document::AllAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollingElement", V8Document::ScrollingElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerlockchange", V8Document::OnpointerlockchangeAttributeGetterCallback, V8Document::OnpointerlockchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerlockerror", V8Document::OnpointerlockerrorAttributeGetterCallback, V8Document::OnpointerlockerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hidden", V8Document::HiddenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibilityState", V8Document::VisibilityStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "wasDiscarded", V8Document::WasDiscardedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitVisibilityState", V8Document::WebkitVisibilityStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitHidden", V8Document::WebkitHiddenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforecopy", V8Document::OnbeforecopyAttributeGetterCallback, V8Document::OnbeforecopyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforecut", V8Document::OnbeforecutAttributeGetterCallback, V8Document::OnbeforecutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onbeforepaste", V8Document::OnbeforepasteAttributeGetterCallback, V8Document::OnbeforepasteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfreeze", V8Document::OnfreezeAttributeGetterCallback, V8Document::OnfreezeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresume", V8Document::OnresumeAttributeGetterCallback, V8Document::OnresumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsearch", V8Document::OnsearchAttributeGetterCallback, V8Document::OnsearchAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsecuritypolicyviolation", V8Document::OnsecuritypolicyviolationAttributeGetterCallback, V8Document::OnsecuritypolicyviolationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onvisibilitychange", V8Document::OnvisibilitychangeAttributeGetterCallback, V8Document::OnvisibilitychangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fonts", V8Document::FontsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncopy", V8Document::OncopyAttributeGetterCallback, V8Document::OncopyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncut", V8Document::OncutAttributeGetterCallback, V8Document::OncutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpaste", V8Document::OnpasteAttributeGetterCallback, V8Document::OnpasteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "activeElement", V8Document::ActiveElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "styleSheets", V8Document::StyleSheetsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pointerLockElement", V8Document::PointerLockElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fullscreenElement", V8Document::FullscreenElementAttributeGetterCallback, V8Document::FullscreenElementAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "adoptedStyleSheets", V8Document::AdoptedStyleSheetsAttributeGetterCallback, V8Document::AdoptedStyleSheetsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onabort", V8Document::OnabortAttributeGetterCallback, V8Document::OnabortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onblur", V8Document::OnblurAttributeGetterCallback, V8Document::OnblurAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncancel", V8Document::OncancelAttributeGetterCallback, V8Document::OncancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncanplay", V8Document::OncanplayAttributeGetterCallback, V8Document::OncanplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncanplaythrough", V8Document::OncanplaythroughAttributeGetterCallback, V8Document::OncanplaythroughAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onchange", V8Document::OnchangeAttributeGetterCallback, V8Document::OnchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onclick", V8Document::OnclickAttributeGetterCallback, V8Document::OnclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onclose", V8Document::OncloseAttributeGetterCallback, V8Document::OncloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncontextmenu", V8Document::OncontextmenuAttributeGetterCallback, V8Document::OncontextmenuAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oncuechange", V8Document::OncuechangeAttributeGetterCallback, V8Document::OncuechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondblclick", V8Document::OndblclickAttributeGetterCallback, V8Document::OndblclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondrag", V8Document::OndragAttributeGetterCallback, V8Document::OndragAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragend", V8Document::OndragendAttributeGetterCallback, V8Document::OndragendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragenter", V8Document::OndragenterAttributeGetterCallback, V8Document::OndragenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragleave", V8Document::OndragleaveAttributeGetterCallback, V8Document::OndragleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragover", V8Document::OndragoverAttributeGetterCallback, V8Document::OndragoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondragstart", V8Document::OndragstartAttributeGetterCallback, V8Document::OndragstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondrop", V8Document::OndropAttributeGetterCallback, V8Document::OndropAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondurationchange", V8Document::OndurationchangeAttributeGetterCallback, V8Document::OndurationchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onemptied", V8Document::OnemptiedAttributeGetterCallback, V8Document::OnemptiedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onended", V8Document::OnendedAttributeGetterCallback, V8Document::OnendedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8Document::OnerrorAttributeGetterCallback, V8Document::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfocus", V8Document::OnfocusAttributeGetterCallback, V8Document::OnfocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninput", V8Document::OninputAttributeGetterCallback, V8Document::OninputAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oninvalid", V8Document::OninvalidAttributeGetterCallback, V8Document::OninvalidAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeydown", V8Document::OnkeydownAttributeGetterCallback, V8Document::OnkeydownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeypress", V8Document::OnkeypressAttributeGetterCallback, V8Document::OnkeypressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onkeyup", V8Document::OnkeyupAttributeGetterCallback, V8Document::OnkeyupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onload", V8Document::OnloadAttributeGetterCallback, V8Document::OnloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadeddata", V8Document::OnloadeddataAttributeGetterCallback, V8Document::OnloadeddataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadedmetadata", V8Document::OnloadedmetadataAttributeGetterCallback, V8Document::OnloadedmetadataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onloadstart", V8Document::OnloadstartAttributeGetterCallback, V8Document::OnloadstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousedown", V8Document::OnmousedownAttributeGetterCallback, V8Document::OnmousedownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseenter", V8Document::OnmouseenterAttributeGetterCallback, V8Document::OnmouseenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseleave", V8Document::OnmouseleaveAttributeGetterCallback, V8Document::OnmouseleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousemove", V8Document::OnmousemoveAttributeGetterCallback, V8Document::OnmousemoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseout", V8Document::OnmouseoutAttributeGetterCallback, V8Document::OnmouseoutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseover", V8Document::OnmouseoverAttributeGetterCallback, V8Document::OnmouseoverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmouseup", V8Document::OnmouseupAttributeGetterCallback, V8Document::OnmouseupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmousewheel", V8Document::OnmousewheelAttributeGetterCallback, V8Document::OnmousewheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpause", V8Document::OnpauseAttributeGetterCallback, V8Document::OnpauseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onplay", V8Document::OnplayAttributeGetterCallback, V8Document::OnplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onplaying", V8Document::OnplayingAttributeGetterCallback, V8Document::OnplayingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onprogress", V8Document::OnprogressAttributeGetterCallback, V8Document::OnprogressAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onratechange", V8Document::OnratechangeAttributeGetterCallback, V8Document::OnratechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onreset", V8Document::OnresetAttributeGetterCallback, V8Document::OnresetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onresize", V8Document::OnresizeAttributeGetterCallback, V8Document::OnresizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onscroll", V8Document::OnscrollAttributeGetterCallback, V8Document::OnscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onseeked", V8Document::OnseekedAttributeGetterCallback, V8Document::OnseekedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onseeking", V8Document::OnseekingAttributeGetterCallback, V8Document::OnseekingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselect", V8Document::OnselectAttributeGetterCallback, V8Document::OnselectAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onstalled", V8Document::OnstalledAttributeGetterCallback, V8Document::OnstalledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsubmit", V8Document::OnsubmitAttributeGetterCallback, V8Document::OnsubmitAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsuspend", V8Document::OnsuspendAttributeGetterCallback, V8Document::OnsuspendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontimeupdate", V8Document::OntimeupdateAttributeGetterCallback, V8Document::OntimeupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontoggle", V8Document::OntoggleAttributeGetterCallback, V8Document::OntoggleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onvolumechange", V8Document::OnvolumechangeAttributeGetterCallback, V8Document::OnvolumechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwaiting", V8Document::OnwaitingAttributeGetterCallback, V8Document::OnwaitingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwheel", V8Document::OnwheelAttributeGetterCallback, V8Document::OnwheelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onauxclick", V8Document::OnauxclickAttributeGetterCallback, V8Document::OnauxclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ongotpointercapture", V8Document::OngotpointercaptureAttributeGetterCallback, V8Document::OngotpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onlostpointercapture", V8Document::OnlostpointercaptureAttributeGetterCallback, V8Document::OnlostpointercaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerdown", V8Document::OnpointerdownAttributeGetterCallback, V8Document::OnpointerdownAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointermove", V8Document::OnpointermoveAttributeGetterCallback, V8Document::OnpointermoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerup", V8Document::OnpointerupAttributeGetterCallback, V8Document::OnpointerupAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointercancel", V8Document::OnpointercancelAttributeGetterCallback, V8Document::OnpointercancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerover", V8Document::OnpointeroverAttributeGetterCallback, V8Document::OnpointeroverAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerout", V8Document::OnpointeroutAttributeGetterCallback, V8Document::OnpointeroutAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerenter", V8Document::OnpointerenterAttributeGetterCallback, V8Document::OnpointerenterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onpointerleave", V8Document::OnpointerleaveAttributeGetterCallback, V8Document::OnpointerleaveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselectstart", V8Document::OnselectstartAttributeGetterCallback, V8Document::OnselectstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onselectionchange", V8Document::OnselectionchangeAttributeGetterCallback, V8Document::OnselectionchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "children", V8Document::ChildrenAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "children", V8Document::ChildrenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "firstElementChild", V8Document::FirstElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "firstElementChild", V8Document::FirstElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "lastElementChild", V8Document::LastElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "lastElementChild", V8Document::LastElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "childElementCount", V8Document::ChildElementCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fullscreenEnabled", V8Document::FullscreenEnabledAttributeGetterCallback, V8Document::FullscreenEnabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fullscreen", V8Document::FullscreenAttributeGetterCallback, V8Document::FullscreenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfullscreenchange", V8Document::OnfullscreenchangeAttributeGetterCallback, V8Document::OnfullscreenchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onfullscreenerror", V8Document::OnfullscreenerrorAttributeGetterCallback, V8Document::OnfullscreenerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitIsFullScreen", V8Document::WebkitIsFullScreenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitCurrentFullScreenElement", V8Document::WebkitCurrentFullScreenElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitFullscreenEnabled", V8Document::WebkitFullscreenEnabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitFullscreenElement", V8Document::WebkitFullscreenElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitfullscreenchange", V8Document::OnwebkitfullscreenchangeAttributeGetterCallback, V8Document::OnwebkitfullscreenchangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onwebkitfullscreenerror", V8Document::OnwebkitfullscreenerrorAttributeGetterCallback, V8Document::OnwebkitfullscreenerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rootElement", V8Document::RootElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DocumentMethods[] = {
    {"getElementsByTagName", V8Document::GetElementsByTagNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByTagNameNS", V8Document::GetElementsByTagNameNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByClassName", V8Document::GetElementsByClassNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDocumentFragment", V8Document::CreateDocumentFragmentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTextNode", V8Document::CreateTextNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createCDATASection", V8Document::CreateCDATASectionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createComment", V8Document::CreateCommentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createProcessingInstruction", V8Document::CreateProcessingInstructionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"importNode", V8Document::ImportNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"adoptNode", V8Document::AdoptNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAttribute", V8Document::CreateAttributeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAttributeNS", V8Document::CreateAttributeNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createEvent", V8Document::CreateEventMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRange", V8Document::CreateRangeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createNodeIterator", V8Document::CreateNodeIteratorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTreeWalker", V8Document::CreateTreeWalkerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementsByName", V8Document::GetElementsByNameMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kMainWorld},
    {"getElementsByName", V8Document::GetElementsByNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"open", V8Document::OpenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8Document::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"write", V8Document::WriteMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"writeln", V8Document::WritelnMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasFocus", V8Document::HasFocusMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"execCommand", V8Document::ExecCommandMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCommandEnabled", V8Document::QueryCommandEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCommandIndeterm", V8Document::QueryCommandIndetermMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCommandState", V8Document::QueryCommandStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCommandSupported", V8Document::QueryCommandSupportedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"queryCommandValue", V8Document::QueryCommandValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8Document::ClearMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"captureEvents", V8Document::CaptureEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"releaseEvents", V8Document::ReleaseEventsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exitPointerLock", V8Document::ExitPointerLockMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createElement", V8Document::CreateElementMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"createElement", V8Document::CreateElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"createElementNS", V8Document::CreateElementNSMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"caretRangeFromPoint", V8Document::CaretRangeFromPointMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelection", V8Document::GetSelectionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementFromPoint", V8Document::ElementFromPointMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementsFromPoint", V8Document::ElementsFromPointMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getElementById", V8Document::GetElementByIdMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"getElementById", V8Document::GetElementByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"prepend", V8Document::PrependMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"append", V8Document::AppendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelector", V8Document::QuerySelectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelectorAll", V8Document::QuerySelectorAllMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"exitFullscreen", V8Document::ExitFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitCancelFullScreen", V8Document::WebkitCancelFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"webkitExitFullscreen", V8Document::WebkitExitFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createExpression", V8Document::CreateExpressionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createNSResolver", V8Document::CreateNSResolverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evaluate", V8Document::EvaluateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8Document::InstallV8DocumentTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Document::GetWrapperTypeInfo()->interface_name, V8Node::DomTemplate(isolate, world), V8Document::kInternalFieldCount);
  interface_template->SetCallHandler(document_v8_internal::ConstructorCallback);
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
      signature, kV8DocumentAccessors, base::size(kV8DocumentAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DocumentMethods, base::size(kV8DocumentMethods));

  // Custom signature
}

void V8Document::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::CorsRFC1918Enabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "addressSpace", V8Document::AddressSpaceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onbeforeactivate", V8Document::OnbeforeactivateAttributeGetterCallback, V8Document::OnbeforeactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "featurePolicy", V8Document::FeaturePolicyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onformdata", V8Document::OnformdataAttributeGetterCallback, V8Document::OnformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onactivateinvisible", V8Document::OnactivateinvisibleAttributeGetterCallback, V8Document::OnactivateinvisibleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onoverscroll", V8Document::OnoverscrollAttributeGetterCallback, V8Document::OnoverscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onscrollend", V8Document::OnscrollendAttributeGetterCallback, V8Document::OnscrollendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PointerRawUpdateEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onpointerrawupdate", V8Document::OnpointerrawupdateAttributeGetterCallback, V8Document::OnpointerrawupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::SetRootScrollerEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "rootScroller", V8Document::RootScrollerAttributeGetterCallback, V8Document::RootScrollerAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "timeline", V8Document::TimelineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
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
          {"getAnimations", V8Document::GetAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8Document::InstallRuntimeEnabledFeatures(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  InstallRuntimeEnabledFeaturesImpl(isolate, world, instance, prototype, interface);

  // Call partial interface's installer.
  install_runtime_enabled_features_function_(isolate, world, instance, prototype, interface);
}

void V8Document::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Document::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::CorsRFC1918Enabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "addressSpace", V8Document::AddressSpaceAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::DisplayLockingEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onbeforeactivate", V8Document::OnbeforeactivateAttributeGetterCallback, V8Document::OnbeforeactivateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FeaturePolicyJavaScriptInterfaceEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "featurePolicy", V8Document::FeaturePolicyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::FormDataEventEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onformdata", V8Document::OnformdataAttributeGetterCallback, V8Document::OnformdataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::InvisibleDOMEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onactivateinvisible", V8Document::OnactivateinvisibleAttributeGetterCallback, V8Document::OnactivateinvisibleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::OverscrollCustomizationEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onoverscroll", V8Document::OnoverscrollAttributeGetterCallback, V8Document::OnoverscrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "onscrollend", V8Document::OnscrollendAttributeGetterCallback, V8Document::OnscrollendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PointerRawUpdateEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "onpointerrawupdate", V8Document::OnpointerrawupdateAttributeGetterCallback, V8Document::OnpointerrawupdateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::SetRootScrollerEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "rootScroller", V8Document::RootScrollerAttributeGetterCallback, V8Document::RootScrollerAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "timeline", V8Document::TimelineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(isolate, world, instance, prototype,
        interface, signature, kConfigurations, base::size(kConfigurations));
  }

  if (RuntimeEnabledFeatures::WebAnimationsAPIEnabled()) {
    {
      // Install getAnimations configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getAnimations", V8Document::GetAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
}

void V8Document::InstallCustomElementsV0(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Document::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::MethodConfiguration
  kRegisterElementConfigurations[] = {
      {"registerElement", V8Document::RegisterElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
  };
  for (const auto& config : kRegisterElementConfigurations) {
    V8DOMConfiguration::InstallMethod(
        isolate, world, instance, prototype,
        interface, signature, config);
  }
}

void V8Document::InstallCustomElementsV0(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Document::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Document::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallCustomElementsV0(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Document::InstallCustomElementsV0(ScriptState* script_state) {
  InstallCustomElementsV0(script_state, v8::Local<v8::Object>());
}

void V8Document::InstallTouchEventFeatureDetection(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8Document::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchcancelConfigurations[] = {
      { "ontouchcancel", V8Document::OntouchcancelAttributeGetterCallback, V8Document::OntouchcancelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchcancelConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchendConfigurations[] = {
      { "ontouchend", V8Document::OntouchendAttributeGetterCallback, V8Document::OntouchendAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchendConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchmoveConfigurations[] = {
      { "ontouchmove", V8Document::OntouchmoveAttributeGetterCallback, V8Document::OntouchmoveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchmoveConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kontouchstartConfigurations[] = {
      { "ontouchstart", V8Document::OntouchstartAttributeGetterCallback, V8Document::OntouchstartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kontouchstartConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8Document::InstallTouchEventFeatureDetection(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8Document::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8Document::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallTouchEventFeatureDetection(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8Document::InstallTouchEventFeatureDetection(ScriptState* script_state) {
  InstallTouchEventFeatureDetection(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8Document::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Document::GetWrapperTypeInfo()),
      V8Document::install_v8_document_template_function_);
}

bool V8Document::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Document::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Document::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Document::GetWrapperTypeInfo(), v8_value);
}

Document* V8Document::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Document* NativeValueTraits<Document>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Document* native_value = V8Document::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Document"));
  }
  return native_value;
}

void V8Document::InstallConditionalFeatures(
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
        context, V8AtomicString(isolate, "append"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "fullscreen"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "prepend"), v8::True(isolate))
        .FromJust();
    prototype_object->CreateDataProperty(
        context, unscopables_symbol, unscopables).FromJust();
  }
}

InstallRuntimeEnabledFeaturesFunction
V8Document::install_runtime_enabled_features_function_ =
    &V8Document::InstallRuntimeEnabledFeaturesImpl;
InstallRuntimeEnabledFeaturesOnTemplateFunction
V8Document::install_runtime_enabled_features_on_template_function_ =
    &V8Document::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8Document::install_v8_document_template_function_ =
    &V8Document::InstallV8DocumentTemplate;

void V8Document::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8Document::install_v8_document_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_function);
  V8Document::install_runtime_enabled_features_function_ =
      install_runtime_enabled_features_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8Document::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8Document::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
