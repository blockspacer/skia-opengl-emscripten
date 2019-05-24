// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_controls_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_radio_node_list.h"
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
const WrapperTypeInfo v8_html_form_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLFormElement::DomTemplate,
    nullptr,
    "HTMLFormElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLFormElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLFormElement::wrapper_type_info_ = v8_html_form_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLFormElement>::value,
    "HTMLFormElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLFormElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLFormElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_form_element_v8_internal {

static void AcceptCharsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAcceptCharsetAttr), info.GetIsolate());
}

static void AcceptCharsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAcceptCharsetAttr, cpp_value);
}

static void ActionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->action(result);

  V8SetReturnValue(info, result);
}

static void ActionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLFormElement", "action");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAction(cpp_value, exception_state);
}

static void AutocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kAutocompleteAttr));

  if (cpp_value.IsEmpty()) {
    cpp_value = "on";
  } else if (EqualIgnoringASCIICase(cpp_value, "on")) {
    cpp_value = "on";
  } else if (EqualIgnoringASCIICase(cpp_value, "off")) {
    cpp_value = "off";
  } else {
    cpp_value = "on";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void AutocompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAutocompleteAttr, cpp_value);
}

static void EnctypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->enctype(), info.GetIsolate());
}

static void EnctypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setEnctype(cpp_value);
}

static void EncodingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->encoding(), info.GetIsolate());
}

static void EncodingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setEncoding(cpp_value);
}

static void MethodAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->method(), info.GetIsolate());
}

static void MethodAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setMethod(cpp_value);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kNameAttr, cpp_value);
}

static void NoValidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kNovalidateAttr));
}

static void NoValidateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLFormElement", "noValidate");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kNovalidateAttr, cpp_value);
}

static void TargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTargetAttr), info.GetIsolate());
}

static void TargetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTargetAttr, cpp_value);
}

static void ElementsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->elements()), impl);
}

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->length());
}

static void SubmitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());

  impl->submitFromJavaScript();
}

static void ResetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  impl->reset();
}

static void CheckValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->checkValidity());
}

static void ReportValidityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->reportValidity());
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLFormElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLFormElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLFormElement);
}

static void NamedPropertyGetter(const AtomicString& name,
                                const v8::PropertyCallbackInfo<v8::Value>& info) {
  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());
  RadioNodeListOrElement result;
  impl->AnonymousNamedGetter(name, result);
  if (result.IsNull())
    return;
  V8SetReturnValue(info, result);
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  HTMLFormElement* impl = V8HTMLFormElement::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  Element* result = impl->item(index);
  V8SetReturnValueFast(info, result, impl);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8HTMLFormElement::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

}  // namespace html_form_element_v8_internal

void V8HTMLFormElement::AcceptCharsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_acceptCharset_Getter");

  html_form_element_v8_internal::AcceptCharsetAttributeGetter(info);
}

void V8HTMLFormElement::AcceptCharsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_acceptCharset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::AcceptCharsetAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::ActionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_action_Getter");

  html_form_element_v8_internal::ActionAttributeGetter(info);
}

void V8HTMLFormElement::ActionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_action_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::ActionAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::AutocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_autocomplete_Getter");

  html_form_element_v8_internal::AutocompleteAttributeGetter(info);
}

void V8HTMLFormElement::AutocompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_autocomplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::AutocompleteAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::EnctypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_enctype_Getter");

  html_form_element_v8_internal::EnctypeAttributeGetter(info);
}

void V8HTMLFormElement::EnctypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_enctype_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::EnctypeAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::EncodingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_encoding_Getter");

  html_form_element_v8_internal::EncodingAttributeGetter(info);
}

void V8HTMLFormElement::EncodingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_encoding_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::EncodingAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::MethodAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_method_Getter");

  html_form_element_v8_internal::MethodAttributeGetter(info);
}

void V8HTMLFormElement::MethodAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_method_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::MethodAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_name_Getter");

  html_form_element_v8_internal::NameAttributeGetter(info);
}

void V8HTMLFormElement::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::NoValidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_noValidate_Getter");

  html_form_element_v8_internal::NoValidateAttributeGetter(info);
}

void V8HTMLFormElement::NoValidateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_noValidate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::NoValidateAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::TargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_target_Getter");

  html_form_element_v8_internal::TargetAttributeGetter(info);
}

void V8HTMLFormElement::TargetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_target_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_form_element_v8_internal::TargetAttributeSetter(v8_value, info);
}

void V8HTMLFormElement::ElementsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_elements_Getter");

  html_form_element_v8_internal::ElementsAttributeGetter(info);
}

void V8HTMLFormElement::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_length_Getter");

  html_form_element_v8_internal::LengthAttributeGetter(info);
}

void V8HTMLFormElement::SubmitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_submit");

  html_form_element_v8_internal::SubmitMethod(info);
}

void V8HTMLFormElement::ResetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_reset");

  html_form_element_v8_internal::ResetMethod(info);
}

void V8HTMLFormElement::CheckValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_checkValidity");

  html_form_element_v8_internal::CheckValidityMethod(info);
}

void V8HTMLFormElement::ReportValidityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_reportValidity");

  html_form_element_v8_internal::ReportValidityMethod(info);
}

void V8HTMLFormElement::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  html_form_element_v8_internal::NamedPropertyGetter(property_name, info);
}

void V8HTMLFormElement::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLFormElement_IndexedPropertyGetter");

  html_form_element_v8_internal::IndexedPropertyGetter(index, info);
}

void V8HTMLFormElement::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  html_form_element_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8HTMLFormElement::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "HTMLFormElement");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8HTMLFormElement::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "HTMLFormElement");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLFormElementAccessors[] = {
    { "acceptCharset", V8HTMLFormElement::AcceptCharsetAttributeGetterCallback, V8HTMLFormElement::AcceptCharsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "action", V8HTMLFormElement::ActionAttributeGetterCallback, V8HTMLFormElement::ActionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8HTMLFormElement::AutocompleteAttributeGetterCallback, V8HTMLFormElement::AutocompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "enctype", V8HTMLFormElement::EnctypeAttributeGetterCallback, V8HTMLFormElement::EnctypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "encoding", V8HTMLFormElement::EncodingAttributeGetterCallback, V8HTMLFormElement::EncodingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "method", V8HTMLFormElement::MethodAttributeGetterCallback, V8HTMLFormElement::MethodAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLFormElement::NameAttributeGetterCallback, V8HTMLFormElement::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "noValidate", V8HTMLFormElement::NoValidateAttributeGetterCallback, V8HTMLFormElement::NoValidateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "target", V8HTMLFormElement::TargetAttributeGetterCallback, V8HTMLFormElement::TargetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "elements", V8HTMLFormElement::ElementsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "length", V8HTMLFormElement::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLFormElementMethods[] = {
    {"submit", V8HTMLFormElement::SubmitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reset", V8HTMLFormElement::ResetMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkValidity", V8HTMLFormElement::CheckValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reportValidity", V8HTMLFormElement::ReportValidityMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLFormElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLFormElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLFormElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_form_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLFormElementAccessors, base::size(kV8HTMLFormElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLFormElementMethods, base::size(kV8HTMLFormElementMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8HTMLFormElement::IndexedPropertyGetterCallback,
      V8HTMLFormElement::IndexedPropertySetterCallback,
      V8HTMLFormElement::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<HTMLFormElement>,
      V8HTMLFormElement::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8HTMLFormElement::NamedPropertyGetterCallback, nullptr, nullptr, nullptr, nullptr, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

  // Custom signature

  V8HTMLFormElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLFormElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLFormElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLFormElement::GetWrapperTypeInfo()),
      InstallV8HTMLFormElementTemplate);
}

bool V8HTMLFormElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLFormElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLFormElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLFormElement::GetWrapperTypeInfo(), v8_value);
}

HTMLFormElement* V8HTMLFormElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLFormElement* NativeValueTraits<HTMLFormElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLFormElement* native_value = V8HTMLFormElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLFormElement"));
  }
  return native_value;
}

}  // namespace blink
