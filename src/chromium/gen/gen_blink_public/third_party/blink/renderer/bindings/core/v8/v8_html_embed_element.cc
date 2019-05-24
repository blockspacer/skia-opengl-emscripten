// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_embed_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/binding_security.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"
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
const WrapperTypeInfo v8_html_embed_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLEmbedElement::DomTemplate,
    nullptr,
    "HTMLEmbedElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLEmbedElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLEmbedElement::wrapper_type_info_ = v8_html_embed_element_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLEmbedElement>::value,
    "HTMLEmbedElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLEmbedElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLEmbedElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_embed_element_v8_internal {

static void SrcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  StringOrTrustedScriptURL result;
  impl->GetURLAttribute(html_names::kSrcAttr, result);

  V8SetReturnValue(info, result);
}

static void SrcAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLEmbedElement", "src");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  StringOrTrustedScriptURL cpp_value;
  V8StringOrTrustedScriptURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kSrcAttr, cpp_value, exception_state);
}

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTypeAttr), info.GetIsolate());
}

static void TypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTypeAttr, cpp_value);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWidthAttr), info.GetIsolate());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

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

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHeightAttr), info.GetIsolate());
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHeightAttr, cpp_value);
}

static void AlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlignAttr), info.GetIsolate());
}

static void AlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlignAttr, cpp_value);
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetNameAttribute(), info.GetIsolate());
}

static void NameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kNameAttr, cpp_value);
}

static void GetSVGDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLEmbedElement", "getSVGDocument");

  HTMLEmbedElement* impl = V8HTMLEmbedElement::ToImpl(info.Holder());

  if (!BindingSecurity::ShouldAllowAccessTo(
          CurrentDOMWindow(info.GetIsolate()), impl->getSVGDocument(exception_state),
          BindingSecurity::ErrorReportOption::kDoNotReport)) {
    UseCounter::Count(CurrentExecutionContext(info.GetIsolate()),
                      WebFeature::kCrossOriginHTMLEmbedElementGetSVGDocument);
    V8SetReturnValueNull(info);
    return;
  }

  Document* result = impl->getSVGDocument(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, ToV8(impl->contentWindow(), v8::Local<v8::Object>(), info.GetIsolate()).As<v8::Object>(), info.GetIsolate()));
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLEmbedElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLEmbedElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLEmbedElement);
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
  V8HTMLEmbedElement::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    v8::PropertyDescriptor desc(getter_value, true);
    desc.set_enumerable(false);
    desc.set_configurable(true);
    V8SetReturnValue(info, desc);
  }
}

}  // namespace html_embed_element_v8_internal

void V8HTMLEmbedElement::SrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_src_Getter");

  html_embed_element_v8_internal::SrcAttributeGetter(info);
}

void V8HTMLEmbedElement::SrcAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_src_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::SrcAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_type_Getter");

  html_embed_element_v8_internal::TypeAttributeGetter(info);
}

void V8HTMLEmbedElement::TypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_type_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::TypeAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_width_Getter");

  html_embed_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLEmbedElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_height_Getter");

  html_embed_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLEmbedElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_align_Getter");

  html_embed_element_v8_internal::AlignAttributeGetter(info);
}

void V8HTMLEmbedElement::AlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_align_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::AlignAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_name_Getter");

  html_embed_element_v8_internal::NameAttributeGetter(info);
}

void V8HTMLEmbedElement::NameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_name_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_embed_element_v8_internal::NameAttributeSetter(v8_value, info);
}

void V8HTMLEmbedElement::GetSVGDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_getSVGDocument");

  html_embed_element_v8_internal::GetSVGDocumentMethod(info);
}

void V8HTMLEmbedElement::NamedPropertyGetterCallback(
    v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_NamedPropertyGetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  V8HTMLEmbedElement::NamedPropertyGetterCustom(property_name, info);
}

void V8HTMLEmbedElement::NamedPropertySetterCallback(
    v8::Local<v8::Name> name,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_NamedPropertySetter");

  if (!name->IsString())
    return;
  const AtomicString& property_name = ToCoreAtomicString(name.As<v8::String>());

  V8HTMLEmbedElement::NamedPropertySetterCustom(property_name, v8_value, info);
}

void V8HTMLEmbedElement::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLEmbedElement_IndexedPropertyGetter");

  const AtomicString& property_name = AtomicString::Number(index);

  V8HTMLEmbedElement::NamedPropertyGetterCustom(property_name, info);
}

void V8HTMLEmbedElement::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  html_embed_element_v8_internal::NamedPropertyDescriptor(index, info);
}

void V8HTMLEmbedElement::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  const AtomicString& property_name = AtomicString::Number(index);

  V8HTMLEmbedElement::NamedPropertySetterCustom(property_name, v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLEmbedElementAccessors[] = {
    { "src", V8HTMLEmbedElement::SrcAttributeGetterCallback, V8HTMLEmbedElement::SrcAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "type", V8HTMLEmbedElement::TypeAttributeGetterCallback, V8HTMLEmbedElement::TypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLEmbedElement::WidthAttributeGetterCallback, V8HTMLEmbedElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLEmbedElement::HeightAttributeGetterCallback, V8HTMLEmbedElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLEmbedElement::AlignAttributeGetterCallback, V8HTMLEmbedElement::AlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8HTMLEmbedElement::NameAttributeGetterCallback, V8HTMLEmbedElement::NameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLEmbedElementMethods[] = {
    {"getSVGDocument", V8HTMLEmbedElement::GetSVGDocumentMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLEmbedElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLEmbedElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLEmbedElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_embed_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLEmbedElementAccessors, base::size(kV8HTMLEmbedElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLEmbedElementMethods, base::size(kV8HTMLEmbedElementMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8HTMLEmbedElement::IndexedPropertyGetterCallback,
      V8HTMLEmbedElement::IndexedPropertySetterCallback,
      V8HTMLEmbedElement::IndexedPropertyDescriptorCallback,
      nullptr,
      nullptr,
      nullptr,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);
  // Named properties
  v8::NamedPropertyHandlerConfiguration namedPropertyHandlerConfig(V8HTMLEmbedElement::NamedPropertyGetterCallback, V8HTMLEmbedElement::NamedPropertySetterCallback, nullptr, nullptr, nullptr, v8::Local<v8::Value>(), static_cast<v8::PropertyHandlerFlags>(int(v8::PropertyHandlerFlags::kOnlyInterceptStrings)));
  instance_template->SetHandler(namedPropertyHandlerConfig);

  // Custom signature

  V8HTMLEmbedElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLEmbedElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLEmbedElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLEmbedElement::GetWrapperTypeInfo()),
      InstallV8HTMLEmbedElementTemplate);
}

bool V8HTMLEmbedElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLEmbedElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLEmbedElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLEmbedElement::GetWrapperTypeInfo(), v8_value);
}

HTMLEmbedElement* V8HTMLEmbedElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLEmbedElement* NativeValueTraits<HTMLEmbedElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLEmbedElement* native_value = V8HTMLEmbedElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLEmbedElement"));
  }
  return native_value;
}

}  // namespace blink
