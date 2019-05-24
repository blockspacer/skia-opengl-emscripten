// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_input_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
WrapperTypeInfo v8_html_input_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLInputElement::DomTemplate,
    nullptr,
    "HTMLInputElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLInputElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLInputElement::wrapper_type_info_ = v8_html_input_element_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLInputElement>::value,
    "HTMLInputElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLInputElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLInputElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_input_element_v8_internal {

static void AcceptAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAcceptAttr), info.GetIsolate());
}

static void AcceptAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAcceptAttr, cpp_value);
}

static void AltAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAltAttr), info.GetIsolate());
}

static void AltAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAltAttr, cpp_value);
}

static void AutocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->IDLExposedAutofillValue(), info.GetIsolate());
}

static void AutocompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setIDLExposedAutofillValue(cpp_value);
}

static void AutofocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kAutofocusAttr));
}

static void AutofocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "autofocus");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kAutofocusAttr, cpp_value);
}

static void DefaultCheckedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kCheckedAttr));
}

static void DefaultCheckedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "defaultChecked");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kCheckedAttr, cpp_value);
}

static void CheckedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->checked());
}

static void CheckedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "checked");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setChecked(cpp_value);
}

static void DirNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kDirnameAttr), info.GetIsolate());
}

static void DirNameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

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

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kDisabledAttr));
}

static void DisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "disabled");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kDisabledAttr, cpp_value);
}

static void FormAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->formOwner()), impl);
}

static void FilesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->files()), impl);
}

static void FilesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "files");

  // Prepare the value to be set.
  FileList* cpp_value = V8FileList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'FileList'.");
    return;
  }

  impl->setFiles(cpp_value);
}

static void FormActionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->formAction(result);

  V8SetReturnValue(info, result);
}

static void FormActionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "formAction");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setFormAction(cpp_value, exception_state);
}

static void FormEnctypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->formEnctype(), info.GetIsolate());
}

static void FormEnctypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setFormEnctype(cpp_value);
}

static void FormMethodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->formMethod(), info.GetIsolate());
}

static void FormMethodAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setFormMethod(cpp_value);
}

static void FormNoValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kFormnovalidateAttr));
}

static void FormNoValidateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "formNoValidate");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kFormnovalidateAttr, cpp_value);
}

static void FormTargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kFormtargetAttr), info.GetIsolate());
}

static void FormTargetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kFormtargetAttr, cpp_value);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->height());
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "height");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setHeight(cpp_value);
}

static void IndeterminateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->indeterminate());
}

static void IndeterminateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "indeterminate");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setIndeterminate(cpp_value);
}

static void ListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->list()), impl);
}

static void MaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kMaxAttr), info.GetIsolate());
}

static void MaxAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kMaxAttr, cpp_value);
}

static void MaxLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->maxLength());
}

static void MaxLengthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "maxLength");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMaxLength(cpp_value, exception_state);
}

static void MinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kMinAttr), info.GetIsolate());
}

static void MinAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kMinAttr, cpp_value);
}

static void MinLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->minLength());
}

static void MinLengthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "minLength");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMinLength(cpp_value, exception_state);
}

static void MultipleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kMultipleAttr));
}

static void MultipleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "multiple");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kMultipleAttr, cpp_value);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kNameAttr, cpp_value);
}

static void PatternAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kPatternAttr), info.GetIsolate());
}

static void PatternAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kPatternAttr, cpp_value);
}

static void PlaceholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kPlaceholderAttr), info.GetIsolate());
}

static void PlaceholderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

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

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kReadonlyAttr));
}

static void ReadOnlyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "readOnly");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kReadonlyAttr, cpp_value);
}

static void RequiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kRequiredAttr));
}

static void RequiredAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "required");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kRequiredAttr, cpp_value);
}

static void SizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->size());
}

static void SizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "size");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSize(cpp_value, exception_state);
}

static void SrcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->GetURLAttribute(html_names::kSrcAttr, result);

  V8SetReturnValue(info, result);
}

static void SrcAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "src");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kSrcAttr, cpp_value, exception_state);
}

static void StepAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kStepAttr), info.GetIsolate());
}

static void StepAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kStepAttr, cpp_value);
}

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void TypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setType(cpp_value);
}

static void DefaultValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kValueAttr), info.GetIsolate());
}

static void DefaultValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kValueAttr, cpp_value);
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->value(), info.GetIsolate());
}

static void ValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "value");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValue(cpp_value, exception_state);
}

static void ValueAsDateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueAsDate(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, v8::Date::New(info.GetIsolate()->GetCurrentContext(), cpp_value));
}

static void ValueAsDateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "valueAsDate");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDate>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setValueAsDate(cpp_value, is_null, exception_state);
}

static void ValueAsNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValue(info, impl->valueAsNumber());
}

static void ValueAsNumberAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "valueAsNumber");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setValueAsNumber(cpp_value, exception_state);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->width());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "width");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setWidth(cpp_value);
}

static void WillValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->willValidate());
}

static void ValidityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->validity()), impl);
}

static void ValidationMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->validationMessage(), info.GetIsolate());
}

static void LabelsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->labels()), impl);
}

static void SelectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "HTMLInputElement", "selectionStart");
  bool is_null = false;

  uint32_t cpp_value(impl->selectionStartForBinding(is_null, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void SelectionStartAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "selectionStart");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setSelectionStartForBinding(cpp_value, is_null, exception_state);
}

static void SelectionEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "HTMLInputElement", "selectionEnd");
  bool is_null = false;

  uint32_t cpp_value(impl->selectionEndForBinding(is_null, exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void SelectionEndAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "selectionEnd");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setSelectionEndForBinding(cpp_value, is_null, exception_state);
}

static void SelectionDirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "HTMLInputElement", "selectionDirection");

  String cpp_value(impl->selectionDirectionForBinding(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueStringOrNull(info, cpp_value, info.GetIsolate());
}

static void SelectionDirectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "selectionDirection");

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setSelectionDirectionForBinding(cpp_value, exception_state);
}

static void AlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlignAttr), info.GetIsolate());
}

static void AlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlignAttr, cpp_value);
}

static void UseMapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kUsemapAttr), info.GetIsolate());
}

static void UseMapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kUsemapAttr, cpp_value);
}

static void CaptureAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCaptureAttr), info.GetIsolate());
}

static void CaptureAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCaptureAttr, cpp_value);
}

static void WebkitdirectoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kWebkitdirectoryAttr));
}

static void WebkitdirectoryAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "webkitdirectory");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kWebkitdirectoryAttr, cpp_value);
}

static void IncrementalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kIncrementalAttr));
}

static void IncrementalAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLInputElement", "incremental");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kIncrementalAttr, cpp_value);
}

static void StepUpMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "stepUp");

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  int32_t n;
  if (!info[0]->IsUndefined()) {
    n = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    n = 1;
  }

  impl->stepUp(n, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StepDownMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "stepDown");

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  int32_t n;
  if (!info[0]->IsUndefined()) {
    n = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    n = 1;
  }

  impl->stepDown(n, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CheckValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->checkValidity());
}

static void ReportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->reportValidity());
}

static void SetCustomValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setCustomValidity", "HTMLInputElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> error;
  error = info[0];
  if (!error.Prepare())
    return;

  impl->setCustomValidity(error);
}

static void SelectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

  impl->select();
}

static void SetRangeText1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "setRangeText");

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "setRangeText");

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "setRangeText");
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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLInputElement", "setSelectionRange");

  HTMLInputElement* impl = V8HTMLInputElement::ToImpl(info.Holder());

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
    impl->setSelectionRangeForBinding(start, end, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  direction = info[2];
  if (!direction.Prepare())
    return;

  impl->setSelectionRangeForBinding(start, end, direction, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLInputElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLInputElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLInputElement);
}

}  // namespace html_input_element_v8_internal

void V8HTMLInputElement::AcceptAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_accept_Getter");

  html_input_element_v8_internal::AcceptAttributeGetter(info);
}

void V8HTMLInputElement::AcceptAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_accept_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::AcceptAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::AltAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_alt_Getter");

  html_input_element_v8_internal::AltAttributeGetter(info);
}

void V8HTMLInputElement::AltAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_alt_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::AltAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::AutocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_autocomplete_Getter");

  html_input_element_v8_internal::AutocompleteAttributeGetter(info);
}

void V8HTMLInputElement::AutocompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_autocomplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::AutocompleteAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::AutofocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_autofocus_Getter");

  html_input_element_v8_internal::AutofocusAttributeGetter(info);
}

void V8HTMLInputElement::AutofocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_autofocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::AutofocusAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::DefaultCheckedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_defaultChecked_Getter");

  html_input_element_v8_internal::DefaultCheckedAttributeGetter(info);
}

void V8HTMLInputElement::DefaultCheckedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_defaultChecked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::DefaultCheckedAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::CheckedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_checked_Getter");

  html_input_element_v8_internal::CheckedAttributeGetter(info);
}

void V8HTMLInputElement::CheckedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_checked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::CheckedAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::DirNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_dirName_Getter");

  html_input_element_v8_internal::DirNameAttributeGetter(info);
}

void V8HTMLInputElement::DirNameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_dirName_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::DirNameAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_disabled_Getter");

  html_input_element_v8_internal::DisabledAttributeGetter(info);
}

void V8HTMLInputElement::DisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_disabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::DisabledAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_form_Getter");

  html_input_element_v8_internal::FormAttributeGetter(info);
}

void V8HTMLInputElement::FilesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_files_Getter");

  html_input_element_v8_internal::FilesAttributeGetter(info);
}

void V8HTMLInputElement::FilesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_files_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FilesAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormActionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formAction_Getter");

  html_input_element_v8_internal::FormActionAttributeGetter(info);
}

void V8HTMLInputElement::FormActionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formAction_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FormActionAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormEnctypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formEnctype_Getter");

  html_input_element_v8_internal::FormEnctypeAttributeGetter(info);
}

void V8HTMLInputElement::FormEnctypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formEnctype_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FormEnctypeAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormMethodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formMethod_Getter");

  html_input_element_v8_internal::FormMethodAttributeGetter(info);
}

void V8HTMLInputElement::FormMethodAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formMethod_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FormMethodAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormNoValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formNoValidate_Getter");

  html_input_element_v8_internal::FormNoValidateAttributeGetter(info);
}

void V8HTMLInputElement::FormNoValidateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formNoValidate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FormNoValidateAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::FormTargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formTarget_Getter");

  html_input_element_v8_internal::FormTargetAttributeGetter(info);
}

void V8HTMLInputElement::FormTargetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_formTarget_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::FormTargetAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_height_Getter");

  html_input_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLInputElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::IndeterminateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_indeterminate_Getter");

  html_input_element_v8_internal::IndeterminateAttributeGetter(info);
}

void V8HTMLInputElement::IndeterminateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_indeterminate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::IndeterminateAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::ListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_list_Getter");

  html_input_element_v8_internal::ListAttributeGetter(info);
}

void V8HTMLInputElement::MaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_max_Getter");

  html_input_element_v8_internal::MaxAttributeGetter(info);
}

void V8HTMLInputElement::MaxAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_max_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::MaxAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::MaxLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_maxLength_Getter");

  html_input_element_v8_internal::MaxLengthAttributeGetter(info);
}

void V8HTMLInputElement::MaxLengthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_maxLength_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::MaxLengthAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::MinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_min_Getter");

  html_input_element_v8_internal::MinAttributeGetter(info);
}

void V8HTMLInputElement::MinAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_min_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::MinAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::MinLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_minLength_Getter");

  html_input_element_v8_internal::MinLengthAttributeGetter(info);
}

void V8HTMLInputElement::MinLengthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_minLength_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::MinLengthAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::MultipleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_multiple_Getter");

  html_input_element_v8_internal::MultipleAttributeGetter(info);
}

void V8HTMLInputElement::MultipleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_multiple_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::MultipleAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_name_Getter");

  html_input_element_v8_internal::NameAttributeGetter(info);
}

void V8HTMLInputElement::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::PatternAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_pattern_Getter");

  html_input_element_v8_internal::PatternAttributeGetter(info);
}

void V8HTMLInputElement::PatternAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_pattern_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::PatternAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::PlaceholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_placeholder_Getter");

  html_input_element_v8_internal::PlaceholderAttributeGetter(info);
}

void V8HTMLInputElement::PlaceholderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_placeholder_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::PlaceholderAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::ReadOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_readOnly_Getter");

  html_input_element_v8_internal::ReadOnlyAttributeGetter(info);
}

void V8HTMLInputElement::ReadOnlyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_readOnly_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::ReadOnlyAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::RequiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_required_Getter");

  html_input_element_v8_internal::RequiredAttributeGetter(info);
}

void V8HTMLInputElement::RequiredAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_required_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::RequiredAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::SizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_size_Getter");

  html_input_element_v8_internal::SizeAttributeGetter(info);
}

void V8HTMLInputElement::SizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_size_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::SizeAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::SrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_src_Getter");

  html_input_element_v8_internal::SrcAttributeGetter(info);
}

void V8HTMLInputElement::SrcAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_src_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::SrcAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::StepAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_step_Getter");

  html_input_element_v8_internal::StepAttributeGetter(info);
}

void V8HTMLInputElement::StepAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_step_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::StepAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_type_Getter");

  html_input_element_v8_internal::TypeAttributeGetter(info);
}

void V8HTMLInputElement::TypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_type_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::TypeAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::DefaultValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_defaultValue_Getter");

  html_input_element_v8_internal::DefaultValueAttributeGetter(info);
}

void V8HTMLInputElement::DefaultValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_defaultValue_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::DefaultValueAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_value_Getter");

  html_input_element_v8_internal::ValueAttributeGetter(info);
}

void V8HTMLInputElement::ValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_value_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::ValueAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::ValueAsDateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_valueAsDate_Getter");

  html_input_element_v8_internal::ValueAsDateAttributeGetter(info);
}

void V8HTMLInputElement::ValueAsDateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_valueAsDate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::ValueAsDateAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::ValueAsNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_valueAsNumber_Getter");

  html_input_element_v8_internal::ValueAsNumberAttributeGetter(info);
}

void V8HTMLInputElement::ValueAsNumberAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_valueAsNumber_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::ValueAsNumberAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_width_Getter");

  html_input_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLInputElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::WillValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_willValidate_Getter");

  html_input_element_v8_internal::WillValidateAttributeGetter(info);
}

void V8HTMLInputElement::ValidityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_validity_Getter");

  html_input_element_v8_internal::ValidityAttributeGetter(info);
}

void V8HTMLInputElement::ValidationMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_validationMessage_Getter");

  html_input_element_v8_internal::ValidationMessageAttributeGetter(info);
}

void V8HTMLInputElement::LabelsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_labels_Getter");

  html_input_element_v8_internal::LabelsAttributeGetter(info);
}

void V8HTMLInputElement::SelectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionStart_Getter");

  html_input_element_v8_internal::SelectionStartAttributeGetter(info);
}

void V8HTMLInputElement::SelectionStartAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionStart_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::SelectionStartAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::SelectionEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionEnd_Getter");

  html_input_element_v8_internal::SelectionEndAttributeGetter(info);
}

void V8HTMLInputElement::SelectionEndAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionEnd_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::SelectionEndAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::SelectionDirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionDirection_Getter");

  html_input_element_v8_internal::SelectionDirectionAttributeGetter(info);
}

void V8HTMLInputElement::SelectionDirectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_selectionDirection_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::SelectionDirectionAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_align_Getter");

  html_input_element_v8_internal::AlignAttributeGetter(info);
}

void V8HTMLInputElement::AlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_align_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::AlignAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::UseMapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_useMap_Getter");

  html_input_element_v8_internal::UseMapAttributeGetter(info);
}

void V8HTMLInputElement::UseMapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_useMap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_input_element_v8_internal::UseMapAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::CaptureAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_capture_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLInputElement_Capture_AttributeGetter);

  html_input_element_v8_internal::CaptureAttributeGetter(info);
}

void V8HTMLInputElement::CaptureAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_capture_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLInputElement_Capture_AttributeSetter);

  html_input_element_v8_internal::CaptureAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::WebkitdirectoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_webkitdirectory_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedDirectoryAttribute);

  html_input_element_v8_internal::WebkitdirectoryAttributeGetter(info);
}

void V8HTMLInputElement::WebkitdirectoryAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_webkitdirectory_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedDirectoryAttribute);

  html_input_element_v8_internal::WebkitdirectoryAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::IncrementalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_incremental_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kIncrementalAttribute);

  html_input_element_v8_internal::IncrementalAttributeGetter(info);
}

void V8HTMLInputElement::IncrementalAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_incremental_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kIncrementalAttribute);

  html_input_element_v8_internal::IncrementalAttributeSetter(v8_value, info);
}

void V8HTMLInputElement::StepUpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_stepUp");

  html_input_element_v8_internal::StepUpMethod(info);
}

void V8HTMLInputElement::StepDownMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_stepDown");

  html_input_element_v8_internal::StepDownMethod(info);
}

void V8HTMLInputElement::CheckValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_checkValidity");

  html_input_element_v8_internal::CheckValidityMethod(info);
}

void V8HTMLInputElement::ReportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_reportValidity");

  html_input_element_v8_internal::ReportValidityMethod(info);
}

void V8HTMLInputElement::SetCustomValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_setCustomValidity");

  html_input_element_v8_internal::SetCustomValidityMethod(info);
}

void V8HTMLInputElement::SelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_select");

  html_input_element_v8_internal::SelectMethod(info);
}

void V8HTMLInputElement::SetRangeTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_setRangeText");

  html_input_element_v8_internal::SetRangeTextMethod(info);
}

void V8HTMLInputElement::SetSelectionRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLInputElement_setSelectionRange");

  html_input_element_v8_internal::SetSelectionRangeMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLInputElementAccessors[] = {
    { "accept", V8HTMLInputElement::AcceptAttributeGetterCallback, V8HTMLInputElement::AcceptAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "alt", V8HTMLInputElement::AltAttributeGetterCallback, V8HTMLInputElement::AltAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8HTMLInputElement::AutocompleteAttributeGetterCallback, V8HTMLInputElement::AutocompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autofocus", V8HTMLInputElement::AutofocusAttributeGetterCallback, V8HTMLInputElement::AutofocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultChecked", V8HTMLInputElement::DefaultCheckedAttributeGetterCallback, V8HTMLInputElement::DefaultCheckedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "checked", V8HTMLInputElement::CheckedAttributeGetterCallback, V8HTMLInputElement::CheckedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "dirName", V8HTMLInputElement::DirNameAttributeGetterCallback, V8HTMLInputElement::DirNameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8HTMLInputElement::DisabledAttributeGetterCallback, V8HTMLInputElement::DisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "form", V8HTMLInputElement::FormAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "files", V8HTMLInputElement::FilesAttributeGetterCallback, V8HTMLInputElement::FilesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formAction", V8HTMLInputElement::FormActionAttributeGetterCallback, V8HTMLInputElement::FormActionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formEnctype", V8HTMLInputElement::FormEnctypeAttributeGetterCallback, V8HTMLInputElement::FormEnctypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formMethod", V8HTMLInputElement::FormMethodAttributeGetterCallback, V8HTMLInputElement::FormMethodAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formNoValidate", V8HTMLInputElement::FormNoValidateAttributeGetterCallback, V8HTMLInputElement::FormNoValidateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "formTarget", V8HTMLInputElement::FormTargetAttributeGetterCallback, V8HTMLInputElement::FormTargetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLInputElement::HeightAttributeGetterCallback, V8HTMLInputElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "indeterminate", V8HTMLInputElement::IndeterminateAttributeGetterCallback, V8HTMLInputElement::IndeterminateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "list", V8HTMLInputElement::ListAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "max", V8HTMLInputElement::MaxAttributeGetterCallback, V8HTMLInputElement::MaxAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "maxLength", V8HTMLInputElement::MaxLengthAttributeGetterCallback, V8HTMLInputElement::MaxLengthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "min", V8HTMLInputElement::MinAttributeGetterCallback, V8HTMLInputElement::MinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "minLength", V8HTMLInputElement::MinLengthAttributeGetterCallback, V8HTMLInputElement::MinLengthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiple", V8HTMLInputElement::MultipleAttributeGetterCallback, V8HTMLInputElement::MultipleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLInputElement::NameAttributeGetterCallback, V8HTMLInputElement::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pattern", V8HTMLInputElement::PatternAttributeGetterCallback, V8HTMLInputElement::PatternAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8HTMLInputElement::PlaceholderAttributeGetterCallback, V8HTMLInputElement::PlaceholderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8HTMLInputElement::ReadOnlyAttributeGetterCallback, V8HTMLInputElement::ReadOnlyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "required", V8HTMLInputElement::RequiredAttributeGetterCallback, V8HTMLInputElement::RequiredAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "size", V8HTMLInputElement::SizeAttributeGetterCallback, V8HTMLInputElement::SizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "src", V8HTMLInputElement::SrcAttributeGetterCallback, V8HTMLInputElement::SrcAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "step", V8HTMLInputElement::StepAttributeGetterCallback, V8HTMLInputElement::StepAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "type", V8HTMLInputElement::TypeAttributeGetterCallback, V8HTMLInputElement::TypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultValue", V8HTMLInputElement::DefaultValueAttributeGetterCallback, V8HTMLInputElement::DefaultValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "value", V8HTMLInputElement::ValueAttributeGetterCallback, V8HTMLInputElement::ValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueAsDate", V8HTMLInputElement::ValueAsDateAttributeGetterCallback, V8HTMLInputElement::ValueAsDateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueAsNumber", V8HTMLInputElement::ValueAsNumberAttributeGetterCallback, V8HTMLInputElement::ValueAsNumberAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLInputElement::WidthAttributeGetterCallback, V8HTMLInputElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "willValidate", V8HTMLInputElement::WillValidateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validity", V8HTMLInputElement::ValidityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "validationMessage", V8HTMLInputElement::ValidationMessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "labels", V8HTMLInputElement::LabelsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionStart", V8HTMLInputElement::SelectionStartAttributeGetterCallback, V8HTMLInputElement::SelectionStartAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionEnd", V8HTMLInputElement::SelectionEndAttributeGetterCallback, V8HTMLInputElement::SelectionEndAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selectionDirection", V8HTMLInputElement::SelectionDirectionAttributeGetterCallback, V8HTMLInputElement::SelectionDirectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLInputElement::AlignAttributeGetterCallback, V8HTMLInputElement::AlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "useMap", V8HTMLInputElement::UseMapAttributeGetterCallback, V8HTMLInputElement::UseMapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitdirectory", V8HTMLInputElement::WebkitdirectoryAttributeGetterCallback, V8HTMLInputElement::WebkitdirectoryAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "incremental", V8HTMLInputElement::IncrementalAttributeGetterCallback, V8HTMLInputElement::IncrementalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLInputElementMethods[] = {
    {"stepUp", V8HTMLInputElement::StepUpMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stepDown", V8HTMLInputElement::StepDownMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkValidity", V8HTMLInputElement::CheckValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reportValidity", V8HTMLInputElement::ReportValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCustomValidity", V8HTMLInputElement::SetCustomValidityMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"select", V8HTMLInputElement::SelectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRangeText", V8HTMLInputElement::SetRangeTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSelectionRange", V8HTMLInputElement::SetSelectionRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLInputElement::InstallV8HTMLInputElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLInputElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLInputElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_input_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLInputElementAccessors, base::size(kV8HTMLInputElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLInputElementMethods, base::size(kV8HTMLInputElementMethods));

  // Custom signature
}

void V8HTMLInputElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::MediaCaptureEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "capture", V8HTMLInputElement::CaptureAttributeGetterCallback, V8HTMLInputElement::CaptureAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLInputElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLInputElement::GetWrapperTypeInfo()),
      V8HTMLInputElement::install_v8_html_input_element_template_function_);
}

bool V8HTMLInputElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLInputElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLInputElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLInputElement::GetWrapperTypeInfo(), v8_value);
}

HTMLInputElement* V8HTMLInputElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLInputElement* NativeValueTraits<HTMLInputElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLInputElement* native_value = V8HTMLInputElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLInputElement"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLInputElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLInputElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8HTMLInputElement::install_v8_html_input_element_template_function_ =
    &V8HTMLInputElement::InstallV8HTMLInputElementTemplate;

void V8HTMLInputElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLInputElement::install_v8_html_input_element_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLInputElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLInputElement::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
