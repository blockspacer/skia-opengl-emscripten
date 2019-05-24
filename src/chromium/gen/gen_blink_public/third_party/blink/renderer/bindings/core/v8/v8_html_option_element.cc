// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_option_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_form_element.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_html_option_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLOptionElement::DomTemplate,
    nullptr,
    "HTMLOptionElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLOptionElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLOptionElement::wrapper_type_info_ = v8_html_option_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLOptionElement>::value,
    "HTMLOptionElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLOptionElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLOptionElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_option_element_v8_internal {

static void DisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kDisabledAttr));
}

static void DisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLOptionElement", "disabled");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kDisabledAttr, cpp_value);
}

static void FormAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->form()), impl);
}

static void LabelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->label(), info.GetIsolate());
}

static void LabelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLabel(cpp_value);
}

static void DefaultSelectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kSelectedAttr));
}

static void DefaultSelectedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLOptionElement", "defaultSelected");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kSelectedAttr, cpp_value);
}

static void SelectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->selectedForBinding());
}

static void SelectedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLOptionElement", "selected");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setSelectedForBinding(cpp_value);
}

static void ValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->value(), info.GetIsolate());
}

static void ValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValue(cpp_value);
}

static void TextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->text(), info.GetIsolate());
}

static void TextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setText(cpp_value);
}

static void IndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLOptionElement* impl = V8HTMLOptionElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->index());
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLOptionElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLOptionElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLOptionElement);
}

}  // namespace html_option_element_v8_internal

void V8HTMLOptionElement::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_disabled_Getter");

  html_option_element_v8_internal::DisabledAttributeGetter(info);
}

void V8HTMLOptionElement::DisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_disabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::DisabledAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::FormAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_form_Getter");

  html_option_element_v8_internal::FormAttributeGetter(info);
}

void V8HTMLOptionElement::LabelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_label_Getter");

  html_option_element_v8_internal::LabelAttributeGetter(info);
}

void V8HTMLOptionElement::LabelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_label_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::LabelAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::DefaultSelectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_defaultSelected_Getter");

  html_option_element_v8_internal::DefaultSelectedAttributeGetter(info);
}

void V8HTMLOptionElement::DefaultSelectedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_defaultSelected_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::DefaultSelectedAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::SelectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_selected_Getter");

  html_option_element_v8_internal::SelectedAttributeGetter(info);
}

void V8HTMLOptionElement::SelectedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_selected_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::SelectedAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::ValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_value_Getter");

  html_option_element_v8_internal::ValueAttributeGetter(info);
}

void V8HTMLOptionElement::ValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_value_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::ValueAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::TextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_text_Getter");

  html_option_element_v8_internal::TextAttributeGetter(info);
}

void V8HTMLOptionElement::TextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_text_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_option_element_v8_internal::TextAttributeSetter(v8_value, info);
}

void V8HTMLOptionElement::IndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_index_Getter");

  html_option_element_v8_internal::IndexAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLOptionElementAccessors[] = {
    { "disabled", V8HTMLOptionElement::DisabledAttributeGetterCallback, V8HTMLOptionElement::DisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "form", V8HTMLOptionElement::FormAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "label", V8HTMLOptionElement::LabelAttributeGetterCallback, V8HTMLOptionElement::LabelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultSelected", V8HTMLOptionElement::DefaultSelectedAttributeGetterCallback, V8HTMLOptionElement::DefaultSelectedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selected", V8HTMLOptionElement::SelectedAttributeGetterCallback, V8HTMLOptionElement::SelectedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "value", V8HTMLOptionElement::ValueAttributeGetterCallback, V8HTMLOptionElement::ValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "text", V8HTMLOptionElement::TextAttributeGetterCallback, V8HTMLOptionElement::TextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "index", V8HTMLOptionElement::IndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_html_option_element_constructor_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLOptionElementConstructor::DomTemplate,
    nullptr,
    "HTMLOptionElement",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

static void V8HTMLOptionElementConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLOptionElement_ConstructorCallback");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("Option"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "HTMLOptionElement");

  V8StringResource<> data;
  V8StringResource<> value;
  bool default_selected;
  bool selected;
  if (!info[0]->IsUndefined()) {
    data = info[0];
    if (!data.Prepare())
      return;
  } else {
    data = nullptr;
  }
  if (!info[1]->IsUndefined()) {
    value = info[1];
    if (!value.Prepare())
      return;
  } else {
    value = nullptr;
  }
  if (!info[2]->IsUndefined()) {
    default_selected = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    default_selected = false;
  }
  if (!info[3]->IsUndefined()) {
    selected = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    selected = false;
  }

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  HTMLOptionElement* impl = HTMLOptionElement::CreateForJSConstructor(document, data, value, default_selected, selected, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8HTMLOptionElementConstructor::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

v8::Local<v8::FunctionTemplate> V8HTMLOptionElementConstructor::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  static int dom_template_key; // This address is used for a key to look up the dom template.
  V8PerIsolateData* data = V8PerIsolateData::From(isolate);
  v8::Local<v8::FunctionTemplate> result =
      data->FindInterfaceTemplate(world, &dom_template_key);
  if (!result.IsEmpty())
    return result;

  result = v8::FunctionTemplate::New(isolate, V8HTMLOptionElementConstructorCallback);
  v8::Local<v8::ObjectTemplate> instance_template = result->InstanceTemplate();
  instance_template->SetInternalFieldCount(V8HTMLOptionElement::kInternalFieldCount);
  result->SetClassName(V8AtomicString(isolate, "Option"));
  result->Inherit(V8HTMLOptionElement::DomTemplate(isolate, world));
  data->SetInterfaceTemplate(world, &dom_template_key, result);
  return result;
}

void V8HTMLOptionElementConstructor::NamedConstructorAttributeGetter(
    v8::Local<v8::Name> property_name,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Context> creationContext = info.Holder()->CreationContext();
  V8PerContextData* per_context_data = V8PerContextData::From(creationContext);
  if (!per_context_data) {
    // TODO(yukishiino): Return a valid named constructor even after the context is detached
    return;
  }

  v8::Local<v8::Function> named_constructor =
      per_context_data->ConstructorForType(V8HTMLOptionElementConstructor::GetWrapperTypeInfo());

  // Set the prototype of named constructors to the regular constructor.
  auto private_property =
      V8PrivateProperty::GetNamedConstructorInitialized(info.GetIsolate());
  v8::Local<v8::Context> current_context = info.GetIsolate()->GetCurrentContext();
  v8::Local<v8::Value> private_value;

  if (!private_property.GetOrUndefined(named_constructor).ToLocal(&private_value) ||
      private_value->IsUndefined()) {
    v8::Local<v8::Function> interface =
        per_context_data->ConstructorForType(V8HTMLOptionElement::GetWrapperTypeInfo());
    v8::Local<v8::Value> interface_prototype =
        interface->Get(current_context, V8AtomicString(info.GetIsolate(), "prototype"))
        .ToLocalChecked();
    // https://heycam.github.io/webidl/#named-constructors
    // 8. Perform ! DefinePropertyOrThrow(F, "prototype",
    //        PropertyDescriptor{[[Value]]: proto, [[Writable]]: false,
    //                           [[Enumerable]]: false,
    //                           [Configurable]]: false}).
    const v8::PropertyAttribute prototype_attributes =
        static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontEnum | v8::DontDelete);
    bool result = named_constructor->DefineOwnProperty(
        current_context, V8AtomicString(info.GetIsolate(), "prototype"),
        interface_prototype, prototype_attributes).ToChecked();
    CHECK(result);
    private_property.Set(named_constructor, v8::True(info.GetIsolate()));
  }

  V8SetReturnValue(info, named_constructor);
}

static void InstallV8HTMLOptionElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLOptionElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLOptionElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_option_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLOptionElementAccessors, base::size(kV8HTMLOptionElementAccessors));

  // Custom signature

  V8HTMLOptionElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLOptionElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLOptionElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLOptionElement::GetWrapperTypeInfo()),
      InstallV8HTMLOptionElementTemplate);
}

bool V8HTMLOptionElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLOptionElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLOptionElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLOptionElement::GetWrapperTypeInfo(), v8_value);
}

HTMLOptionElement* V8HTMLOptionElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLOptionElement* NativeValueTraits<HTMLOptionElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLOptionElement* native_value = V8HTMLOptionElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLOptionElement"));
  }
  return native_value;
}

}  // namespace blink
