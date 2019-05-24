// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_object_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_html_object_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLObjectElement::DomTemplate,
    nullptr,
    "HTMLObjectElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLObjectElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLObjectElement::wrapper_type_info_ = v8_html_object_element_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLObjectElement>::value,
    "HTMLObjectElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLObjectElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLObjectElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_object_element_v8_internal {

static void DataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  StringOrTrustedScriptURL result;
  impl->GetURLAttribute(html_names::kDataAttr, result);

  V8SetReturnValue(info, result);
}

static void DataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLObjectElement", "data");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  StringOrTrustedScriptURL cpp_value;
  V8StringOrTrustedScriptURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kDataAttr, cpp_value, exception_state);
}

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTypeAttr), info.GetIsolate());
}

static void TypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTypeAttr, cpp_value);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kNameAttr, cpp_value);
}

static void UseMapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kUsemapAttr), info.GetIsolate());
}

static void UseMapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kUsemapAttr, cpp_value);
}

static void FormAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->formOwner()), impl);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWidthAttr), info.GetIsolate());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kWidthAttr, cpp_value);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHeightAttr), info.GetIsolate());
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHeightAttr, cpp_value);
}

static void ContentDocumentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  // Perform a security check for the returned object.
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "HTMLObjectElement", "contentDocument");
  if (!BindingSecurity::ShouldAllowAccessTo(CurrentDOMWindow(info.GetIsolate()), WTF::GetPtr(impl->contentDocument()), BindingSecurity::ErrorReportOption::kDoNotReport)) {
    UseCounter::Count(CurrentExecutionContext(info.GetIsolate()),
                      WebFeature::kCrossOriginHTMLObjectElementContentDocument);
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, ToV8(WTF::GetPtr(impl->contentDocument()), ToV8(impl->contentWindow(), v8::Local<v8::Object>(), info.GetIsolate()).As<v8::Object>(), info.GetIsolate()));
}

static void ContentWindowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->contentWindow()), impl);
}

static void WillValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->willValidate());
}

static void ValidityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->validity()), impl);
}

static void ValidationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void AlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlignAttr), info.GetIsolate());
}

static void AlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlignAttr, cpp_value);
}

static void ArchiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kArchiveAttr), info.GetIsolate());
}

static void ArchiveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kArchiveAttr, cpp_value);
}

static void CodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCodeAttr), info.GetIsolate());
}

static void CodeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCodeAttr, cpp_value);
}

static void DeclareAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kDeclareAttr));
}

static void DeclareAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLObjectElement", "declare");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kDeclareAttr, cpp_value);
}

static void HspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kHspaceAttr))));
}

static void HspaceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLObjectElement", "hspace");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kHspaceAttr, cpp_value);
}

static void StandbyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kStandbyAttr), info.GetIsolate());
}

static void StandbyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kStandbyAttr, cpp_value);
}

static void VspaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kVspaceAttr))));
}

static void VspaceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLObjectElement", "vspace");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kVspaceAttr, cpp_value);
}

static void CodeBaseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  StringOrTrustedScriptURL result;
  impl->GetURLAttribute(html_names::kCodebaseAttr, result);

  V8SetReturnValue(info, result);
}

static void CodeBaseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLObjectElement", "codeBase");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  StringOrTrustedScriptURL cpp_value;
  V8StringOrTrustedScriptURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kCodebaseAttr, cpp_value, exception_state);
}

static void CodeTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCodetypeAttr), info.GetIsolate());
}

static void CodeTypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCodetypeAttr, cpp_value);
}

static void BorderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBorderAttr), info.GetIsolate());
}

static void BorderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBorderAttr, cpp_value);
}

static void GetSVGDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLObjectElement", "getSVGDocument");

  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(info.Holder());

  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl->getSVGDocument(exception_state),
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    UseCounter::Count(CurrentExecutionContext(info.GetIsolate()),
                      WebFeature::kCrossOriginHTMLObjectElementGetSVGDocument);
    V8SetReturnValueNull(info);
    return;
  }

  Document* result = impl->getSVGDocument(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, ToV8(impl->contentWindow(), v8::Local<v8::Object>(), info.GetIsolate()).As<v8::Object>(), info.GetIsolate()));
}

static void CheckValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->checkValidity());
}

static void ReportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->reportValidity());
}

static void SetCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLObjectElement* impl = V8HTMLObjectElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setCustomValidity", "HTMLObjectElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> error;
  error = info[0];
  if (!error.Prepare())
    return;

  impl->setCustomValidity(error);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLObjectElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLObjectElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLObjectElement);
}

static void NamedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // This function is called when an IDL interface supports named properties
  // but not indexed properties. When a numeric property is queried, V8 calls
  // indexedPropertyDescriptorCallback(), which calls this function.

  // This IDL interface defines a [NotEnumerable] getter. We need to do
  // something similar to indexedPropertyDescriptor(): call
  // indexedPropertyGetterCallback, let it end up calling the named property
  // getter and, if all goes well, we create a v8::PropertyDescriptor with the
  // right values.
  V8HTMLObjectElement::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    v8::PropertyDescriptor desc(getter_value, true);
    desc.set_enumerable(false);
    desc.set_configurable(true);
    V8SetReturnValue(info, desc);
  }
}

}  // namespace html_object_element_v8_internal

void V8HTMLObjectElement::DataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_data_Getter");

  html_object_element_v8_internal::DataAttributeGetter(info);
}

void V8HTMLObjectElement::DataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_data_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::DataAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_type_Getter");

  html_object_element_v8_internal::TypeAttributeGetter(info);
}

void V8HTMLObjectElement::TypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_type_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::TypeAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_name_Getter");

  html_object_element_v8_internal::NameAttributeGetter(info);
}

void V8HTMLObjectElement::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::UseMapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_useMap_Getter");

  html_object_element_v8_internal::UseMapAttributeGetter(info);
}

void V8HTMLObjectElement::UseMapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_useMap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::UseMapAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::FormAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_form_Getter");

  html_object_element_v8_internal::FormAttributeGetter(info);
}

void V8HTMLObjectElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_width_Getter");

  html_object_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLObjectElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_height_Getter");

  html_object_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLObjectElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::ContentDocumentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_contentDocument_Getter");

  html_object_element_v8_internal::ContentDocumentAttributeGetter(info);
}

void V8HTMLObjectElement::ContentWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_contentWindow_Getter");

  html_object_element_v8_internal::ContentWindowAttributeGetter(info);
}

void V8HTMLObjectElement::WillValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_willValidate_Getter");

  html_object_element_v8_internal::WillValidateAttributeGetter(info);
}

void V8HTMLObjectElement::ValidityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_validity_Getter");

  html_object_element_v8_internal::ValidityAttributeGetter(info);
}

void V8HTMLObjectElement::ValidationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_validationMessage_Getter");

  html_object_element_v8_internal::ValidationMessageAttributeGetter(info);
}

void V8HTMLObjectElement::AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_align_Getter");

  html_object_element_v8_internal::AlignAttributeGetter(info);
}

void V8HTMLObjectElement::AlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_align_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::AlignAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::ArchiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_archive_Getter");

  html_object_element_v8_internal::ArchiveAttributeGetter(info);
}

void V8HTMLObjectElement::ArchiveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_archive_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::ArchiveAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::CodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_code_Getter");

  html_object_element_v8_internal::CodeAttributeGetter(info);
}

void V8HTMLObjectElement::CodeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_code_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::CodeAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::DeclareAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_declare_Getter");

  html_object_element_v8_internal::DeclareAttributeGetter(info);
}

void V8HTMLObjectElement::DeclareAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_declare_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::DeclareAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::HspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_hspace_Getter");

  html_object_element_v8_internal::HspaceAttributeGetter(info);
}

void V8HTMLObjectElement::HspaceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_hspace_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::HspaceAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::StandbyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_standby_Getter");

  html_object_element_v8_internal::StandbyAttributeGetter(info);
}

void V8HTMLObjectElement::StandbyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_standby_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::StandbyAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::VspaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_vspace_Getter");

  html_object_element_v8_internal::VspaceAttributeGetter(info);
}

void V8HTMLObjectElement::VspaceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_vspace_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::VspaceAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::CodeBaseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_codeBase_Getter");

  html_object_element_v8_internal::CodeBaseAttributeGetter(info);
}

void V8HTMLObjectElement::CodeBaseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_codeBase_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::CodeBaseAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::CodeTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_codeType_Getter");

  html_object_element_v8_internal::CodeTypeAttributeGetter(info);
}

void V8HTMLObjectElement::CodeTypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_codeType_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::CodeTypeAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::BorderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_border_Getter");

  html_object_element_v8_internal::BorderAttributeGetter(info);
}

void V8HTMLObjectElement::BorderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_border_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_object_element_v8_internal::BorderAttributeSetter(v8_value, info);
}

void V8HTMLObjectElement::GetSVGDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_getSVGDocument");

  html_object_element_v8_internal::GetSVGDocumentMethod(info);
}

void V8HTMLObjectElement::CheckValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_checkValidity");

  html_object_element_v8_internal::CheckValidityMethod(info);
}

void V8HTMLObjectElement::ReportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_reportValidity");

  html_object_element_v8_internal::ReportValidityMethod(info);
}

void V8HTMLObjectElement::SetCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_setCustomValidity");

  html_object_element_v8_internal::SetCustomValidityMethod(info);
}

void V8HTMLObjectElement::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  V8HTMLObjectElement::NamedPropertyGetterCustom(property_name, info);
}

void V8HTMLObjectElement::NamedPropertySetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  V8HTMLObjectElement::NamedPropertySetterCustom(property_name, v8_value, info);
}

void V8HTMLObjectElement::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLObjectElement_IndexedPropertyGetter");

  const AtomicString& property_name = AtomicString::Number(index);

  V8HTMLObjectElement::NamedPropertyGetterCustom(property_name, info);
}

void V8HTMLObjectElement::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  html_object_element_v8_internal::NamedPropertyDescriptor(index, info);
}

void V8HTMLObjectElement::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  V8HTMLObjectElement::NamedPropertySetterCustom(property_name, v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLObjectElementAccessors[] = {
    { "data", V8HTMLObjectElement::DataAttributeGetterCallback, V8HTMLObjectElement::DataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "type", V8HTMLObjectElement::TypeAttributeGetterCallback, V8HTMLObjectElement::TypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLObjectElement::NameAttributeGetterCallback, V8HTMLObjectElement::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "useMap", V8HTMLObjectElement::UseMapAttributeGetterCallback, V8HTMLObjectElement::UseMapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "form", V8HTMLObjectElement::FormAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLObjectElement::WidthAttributeGetterCallback, V8HTMLObjectElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLObjectElement::HeightAttributeGetterCallback, V8HTMLObjectElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "contentDocument", V8HTMLObjectElement::ContentDocumentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "contentWindow", V8HTMLObjectElement::ContentWindowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "willValidate", V8HTMLObjectElement::WillValidateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validity", V8HTMLObjectElement::ValidityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validationMessage", V8HTMLObjectElement::ValidationMessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLObjectElement::AlignAttributeGetterCallback, V8HTMLObjectElement::AlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "archive", V8HTMLObjectElement::ArchiveAttributeGetterCallback, V8HTMLObjectElement::ArchiveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "code", V8HTMLObjectElement::CodeAttributeGetterCallback, V8HTMLObjectElement::CodeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "declare", V8HTMLObjectElement::DeclareAttributeGetterCallback, V8HTMLObjectElement::DeclareAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hspace", V8HTMLObjectElement::HspaceAttributeGetterCallback, V8HTMLObjectElement::HspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "standby", V8HTMLObjectElement::StandbyAttributeGetterCallback, V8HTMLObjectElement::StandbyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "vspace", V8HTMLObjectElement::VspaceAttributeGetterCallback, V8HTMLObjectElement::VspaceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "codeBase", V8HTMLObjectElement::CodeBaseAttributeGetterCallback, V8HTMLObjectElement::CodeBaseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "codeType", V8HTMLObjectElement::CodeTypeAttributeGetterCallback, V8HTMLObjectElement::CodeTypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "border", V8HTMLObjectElement::BorderAttributeGetterCallback, V8HTMLObjectElement::BorderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLObjectElementMethods[] = {
    {"getSVGDocument", V8HTMLObjectElement::GetSVGDocumentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkValidity", V8HTMLObjectElement::CheckValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reportValidity", V8HTMLObjectElement::ReportValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCustomValidity", V8HTMLObjectElement::SetCustomValidityMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLObjectElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLObjectElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLObjectElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_object_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLObjectElementAccessors, base::size(kV8HTMLObjectElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLObjectElementMethods, base::size(kV8HTMLObjectElementMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8HTMLObjectElement::IndexedPropertyGetterCallback,
      V8HTMLObjectElement::IndexedPropertySetterCallback,
      V8HTMLObjectElement::IndexedPropertyDescriptorCallback,
      nullptr,
      nullptr,
      nullptr,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8HTMLObjectElement::NamedPropertyGetterCallback, V8HTMLObjectElement::NamedPropertySetterCallback, nullptr, nullptr, nullptr, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Custom signature

  V8HTMLObjectElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLObjectElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLObjectElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLObjectElement::GetWrapperTypeInfo()),
      InstallV8HTMLObjectElementTemplate);
}

bool V8HTMLObjectElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLObjectElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLObjectElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLObjectElement::GetWrapperTypeInfo(), v8_value);
}

HTMLObjectElement* V8HTMLObjectElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLObjectElement* NativeValueTraits<HTMLObjectElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLObjectElement* native_value = V8HTMLObjectElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLObjectElement"));
  }
  return native_value;
}

}  // namespace blink
