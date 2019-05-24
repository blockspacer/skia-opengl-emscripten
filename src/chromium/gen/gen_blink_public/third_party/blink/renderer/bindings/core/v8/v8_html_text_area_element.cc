// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_text_area_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo v8_html_text_area_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLTextAreaElement::DomTemplate,
    nullptr,
    "HTMLTextAreaElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTextAreaElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTextAreaElement::wrapper_type_info_ = v8_html_text_area_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLTextAreaElement>::value,
    "HTMLTextAreaElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLTextAreaElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLTextAreaElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_text_area_element_v8_internal {

static void AutocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->IDLExposedAutofillValue(), info.GetIsolate());
}

static void AutocompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setIDLExposedAutofillValue(cpp_value);
}

static void AutofocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kAutofocusAttr));
}

static void AutofocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "autofocus");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kAutofocusAttr, cpp_value);
}

static void ColsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->cols());
}

static void ColsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "cols");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setCols(cpp_value);
}

static void DirNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kDirnameAttr), info.GetIsolate());
}

static void DirNameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kDirnameAttr, cpp_value);
}

static void DisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kDisabledAttr));
}

static void DisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "disabled");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kDisabledAttr, cpp_value);
}

static void FormAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->formOwner()), impl);
}

static void MaxLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->maxLength());
}

static void MaxLengthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "maxLength");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMaxLength(cpp_value, exception_state);
}

static void MinLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->minLength());
}

static void MinLengthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "minLength");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMinLength(cpp_value, exception_state);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kNameAttr, cpp_value);
}

static void PlaceholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kPlaceholderAttr), info.GetIsolate());
}

static void PlaceholderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kPlaceholderAttr, cpp_value);
}

static void ReadOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kReadonlyAttr));
}

static void ReadOnlyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "readOnly");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kReadonlyAttr, cpp_value);
}

static void RequiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kRequiredAttr));
}

static void RequiredAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "required");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kRequiredAttr, cpp_value);
}

static void RowsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->rows());
}

static void RowsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "rows");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRows(cpp_value);
}

static void WrapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWrapAttr), info.GetIsolate());
}

static void WrapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kWrapAttr, cpp_value);
}

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void DefaultValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->defaultValue(), info.GetIsolate());
}

static void DefaultValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setDefaultValue(cpp_value);
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->value(), info.GetIsolate());
}

static void ValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValue(cpp_value);
}

static void TextLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->textLength());
}

static void WillValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->willValidate());
}

static void ValidityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->validity()), impl);
}

static void ValidationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void LabelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->labels()), impl);
}

static void SelectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->selectionStart());
}

static void SelectionStartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "selectionStart");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSelectionStart(cpp_value);
}

static void SelectionEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->selectionEnd());
}

static void SelectionEndAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTextAreaElement", "selectionEnd");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSelectionEnd(cpp_value);
}

static void SelectionDirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->selectionDirection(), info.GetIsolate());
}

static void SelectionDirectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setSelectionDirection(cpp_value);
}

static void CheckValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->checkValidity());
}

static void ReportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->reportValidity());
}

static void SetCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setCustomValidity", "HTMLTextAreaElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> error;
  error = info[0];
  if (!error.Prepare())
    return;

  impl->setCustomValidity(error);
}

static void SelectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  impl->select();
}

static void SetRangeText1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTextAreaElement", "setRangeText");

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  V8StringResource<> replacement;
  replacement = info[0];
  if (!replacement.Prepare())
    return;

  impl->setRangeText(replacement, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetRangeText2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTextAreaElement", "setRangeText");

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  V8StringResource<> replacement;
  uint32_t start;
  uint32_t end;
  V8StringResource<> selection_mode;
  replacement = info[0];
  if (!replacement.Prepare())
    return;

  start = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  end = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    selection_mode = info[3];
    if (!selection_mode.Prepare())
      return;
    const char* kValidSelectionModeValues[] = {
        "select",
        "start",
        "end",
        "preserve",
    };
    if (!IsValidEnum(selection_mode, kValidSelectionModeValues, base::size(kValidSelectionModeValues), "SelectionMode", exception_state)) {
      return;
    }
  } else {
    selection_mode = "preserve";
  }

  impl->setRangeText(replacement, start, end, selection_mode, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetRangeTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 1:
      if (true) {
        SetRangeText1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        SetRangeText2Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        SetRangeText2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTextAreaElement", "setRangeText");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 3, 4]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetSelectionRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTextAreaElement", "setSelectionRange");

  HTMLTextAreaElement* impl = V8HTMLTextAreaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t start;
  uint32_t end;
  V8StringResource<> direction;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  start = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  end = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 2)) {
    impl->setSelectionRangeForBinding(start, end);
    return;
  }
  direction = info[2];
  if (!direction.Prepare())
    return;

  impl->setSelectionRangeForBinding(start, end, direction);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLTextAreaElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLTextAreaElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLTextAreaElement);
}

}  // namespace html_text_area_element_v8_internal

void V8HTMLTextAreaElement::AutocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_autocomplete_Getter");

  html_text_area_element_v8_internal::AutocompleteAttributeGetter(info);
}

void V8HTMLTextAreaElement::AutocompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_autocomplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::AutocompleteAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::AutofocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_autofocus_Getter");

  html_text_area_element_v8_internal::AutofocusAttributeGetter(info);
}

void V8HTMLTextAreaElement::AutofocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_autofocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::AutofocusAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::ColsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_cols_Getter");

  html_text_area_element_v8_internal::ColsAttributeGetter(info);
}

void V8HTMLTextAreaElement::ColsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_cols_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::ColsAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::DirNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_dirName_Getter");

  html_text_area_element_v8_internal::DirNameAttributeGetter(info);
}

void V8HTMLTextAreaElement::DirNameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_dirName_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::DirNameAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_disabled_Getter");

  html_text_area_element_v8_internal::DisabledAttributeGetter(info);
}

void V8HTMLTextAreaElement::DisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_disabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::DisabledAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::FormAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_form_Getter");

  html_text_area_element_v8_internal::FormAttributeGetter(info);
}

void V8HTMLTextAreaElement::MaxLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_maxLength_Getter");

  html_text_area_element_v8_internal::MaxLengthAttributeGetter(info);
}

void V8HTMLTextAreaElement::MaxLengthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_maxLength_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::MaxLengthAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::MinLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_minLength_Getter");

  html_text_area_element_v8_internal::MinLengthAttributeGetter(info);
}

void V8HTMLTextAreaElement::MinLengthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_minLength_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::MinLengthAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_name_Getter");

  html_text_area_element_v8_internal::NameAttributeGetter(info);
}

void V8HTMLTextAreaElement::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::PlaceholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_placeholder_Getter");

  html_text_area_element_v8_internal::PlaceholderAttributeGetter(info);
}

void V8HTMLTextAreaElement::PlaceholderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_placeholder_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::PlaceholderAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::ReadOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_readOnly_Getter");

  html_text_area_element_v8_internal::ReadOnlyAttributeGetter(info);
}

void V8HTMLTextAreaElement::ReadOnlyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_readOnly_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::ReadOnlyAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::RequiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_required_Getter");

  html_text_area_element_v8_internal::RequiredAttributeGetter(info);
}

void V8HTMLTextAreaElement::RequiredAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_required_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::RequiredAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::RowsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_rows_Getter");

  html_text_area_element_v8_internal::RowsAttributeGetter(info);
}

void V8HTMLTextAreaElement::RowsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_rows_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::RowsAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::WrapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_wrap_Getter");

  html_text_area_element_v8_internal::WrapAttributeGetter(info);
}

void V8HTMLTextAreaElement::WrapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_wrap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::WrapAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_type_Getter");

  html_text_area_element_v8_internal::TypeAttributeGetter(info);
}

void V8HTMLTextAreaElement::DefaultValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_defaultValue_Getter");

  html_text_area_element_v8_internal::DefaultValueAttributeGetter(info);
}

void V8HTMLTextAreaElement::DefaultValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_defaultValue_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::DefaultValueAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_value_Getter");

  html_text_area_element_v8_internal::ValueAttributeGetter(info);
}

void V8HTMLTextAreaElement::ValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_value_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::ValueAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::TextLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_textLength_Getter");

  html_text_area_element_v8_internal::TextLengthAttributeGetter(info);
}

void V8HTMLTextAreaElement::WillValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_willValidate_Getter");

  html_text_area_element_v8_internal::WillValidateAttributeGetter(info);
}

void V8HTMLTextAreaElement::ValidityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_validity_Getter");

  html_text_area_element_v8_internal::ValidityAttributeGetter(info);
}

void V8HTMLTextAreaElement::ValidationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_validationMessage_Getter");

  html_text_area_element_v8_internal::ValidationMessageAttributeGetter(info);
}

void V8HTMLTextAreaElement::LabelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_labels_Getter");

  html_text_area_element_v8_internal::LabelsAttributeGetter(info);
}

void V8HTMLTextAreaElement::SelectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionStart_Getter");

  html_text_area_element_v8_internal::SelectionStartAttributeGetter(info);
}

void V8HTMLTextAreaElement::SelectionStartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionStart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::SelectionStartAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::SelectionEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionEnd_Getter");

  html_text_area_element_v8_internal::SelectionEndAttributeGetter(info);
}

void V8HTMLTextAreaElement::SelectionEndAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionEnd_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::SelectionEndAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::SelectionDirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionDirection_Getter");

  html_text_area_element_v8_internal::SelectionDirectionAttributeGetter(info);
}

void V8HTMLTextAreaElement::SelectionDirectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_selectionDirection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_text_area_element_v8_internal::SelectionDirectionAttributeSetter(v8_value, info);
}

void V8HTMLTextAreaElement::CheckValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_checkValidity");

  html_text_area_element_v8_internal::CheckValidityMethod(info);
}

void V8HTMLTextAreaElement::ReportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_reportValidity");

  html_text_area_element_v8_internal::ReportValidityMethod(info);
}

void V8HTMLTextAreaElement::SetCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_setCustomValidity");

  html_text_area_element_v8_internal::SetCustomValidityMethod(info);
}

void V8HTMLTextAreaElement::SelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_select");

  html_text_area_element_v8_internal::SelectMethod(info);
}

void V8HTMLTextAreaElement::SetRangeTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_setRangeText");

  html_text_area_element_v8_internal::SetRangeTextMethod(info);
}

void V8HTMLTextAreaElement::SetSelectionRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTextAreaElement_setSelectionRange");

  html_text_area_element_v8_internal::SetSelectionRangeMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLTextAreaElementAccessors[] = {
    { "autocomplete", V8HTMLTextAreaElement::AutocompleteAttributeGetterCallback, V8HTMLTextAreaElement::AutocompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autofocus", V8HTMLTextAreaElement::AutofocusAttributeGetterCallback, V8HTMLTextAreaElement::AutofocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cols", V8HTMLTextAreaElement::ColsAttributeGetterCallback, V8HTMLTextAreaElement::ColsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "dirName", V8HTMLTextAreaElement::DirNameAttributeGetterCallback, V8HTMLTextAreaElement::DirNameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8HTMLTextAreaElement::DisabledAttributeGetterCallback, V8HTMLTextAreaElement::DisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "form", V8HTMLTextAreaElement::FormAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxLength", V8HTMLTextAreaElement::MaxLengthAttributeGetterCallback, V8HTMLTextAreaElement::MaxLengthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "minLength", V8HTMLTextAreaElement::MinLengthAttributeGetterCallback, V8HTMLTextAreaElement::MinLengthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLTextAreaElement::NameAttributeGetterCallback, V8HTMLTextAreaElement::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8HTMLTextAreaElement::PlaceholderAttributeGetterCallback, V8HTMLTextAreaElement::PlaceholderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8HTMLTextAreaElement::ReadOnlyAttributeGetterCallback, V8HTMLTextAreaElement::ReadOnlyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "required", V8HTMLTextAreaElement::RequiredAttributeGetterCallback, V8HTMLTextAreaElement::RequiredAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rows", V8HTMLTextAreaElement::RowsAttributeGetterCallback, V8HTMLTextAreaElement::RowsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "wrap", V8HTMLTextAreaElement::WrapAttributeGetterCallback, V8HTMLTextAreaElement::WrapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "type", V8HTMLTextAreaElement::TypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultValue", V8HTMLTextAreaElement::DefaultValueAttributeGetterCallback, V8HTMLTextAreaElement::DefaultValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "value", V8HTMLTextAreaElement::ValueAttributeGetterCallback, V8HTMLTextAreaElement::ValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textLength", V8HTMLTextAreaElement::TextLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "willValidate", V8HTMLTextAreaElement::WillValidateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validity", V8HTMLTextAreaElement::ValidityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validationMessage", V8HTMLTextAreaElement::ValidationMessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "labels", V8HTMLTextAreaElement::LabelsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionStart", V8HTMLTextAreaElement::SelectionStartAttributeGetterCallback, V8HTMLTextAreaElement::SelectionStartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionEnd", V8HTMLTextAreaElement::SelectionEndAttributeGetterCallback, V8HTMLTextAreaElement::SelectionEndAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionDirection", V8HTMLTextAreaElement::SelectionDirectionAttributeGetterCallback, V8HTMLTextAreaElement::SelectionDirectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLTextAreaElementMethods[] = {
    {"checkValidity", V8HTMLTextAreaElement::CheckValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reportValidity", V8HTMLTextAreaElement::ReportValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCustomValidity", V8HTMLTextAreaElement::SetCustomValidityMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"select", V8HTMLTextAreaElement::SelectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRangeText", V8HTMLTextAreaElement::SetRangeTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSelectionRange", V8HTMLTextAreaElement::SetSelectionRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLTextAreaElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLTextAreaElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLTextAreaElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_text_area_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLTextAreaElementAccessors, base::size(kV8HTMLTextAreaElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLTextAreaElementMethods, base::size(kV8HTMLTextAreaElementMethods));

  // Custom signature

  V8HTMLTextAreaElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLTextAreaElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLTextAreaElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLTextAreaElement::GetWrapperTypeInfo()),
      InstallV8HTMLTextAreaElementTemplate);
}

bool V8HTMLTextAreaElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLTextAreaElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLTextAreaElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLTextAreaElement::GetWrapperTypeInfo(), v8_value);
}

HTMLTextAreaElement* V8HTMLTextAreaElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLTextAreaElement* NativeValueTraits<HTMLTextAreaElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLTextAreaElement* native_value = V8HTMLTextAreaElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLTextAreaElement"));
  }
  return native_value;
}

}  // namespace blink
