// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document_type.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
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
const WrapperTypeInfo v8_document_type_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DocumentType::DomTemplate,
    V8DocumentType::InstallConditionalFeatures,
    "DocumentType",
    V8Node::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentType.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DocumentType::wrapper_type_info_ = v8_document_type_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DocumentType>::value,
    "DocumentType inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DocumentType::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DocumentType is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace document_type_v8_internal {

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void PublicIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->publicId(), info.GetIsolate());
}

static void SystemIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentType* impl = V8DocumentType::ToImpl(holder);

  V8SetReturnValueString(info, impl->systemId(), info.GetIsolate());
}

static void BeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "before");
  CEReactionsScope ce_reactions_scope;

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "after");
  CEReactionsScope ce_reactions_scope;

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "replaceWith");
  CEReactionsScope ce_reactions_scope;

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentType", "remove");
  CEReactionsScope ce_reactions_scope;

  DocumentType* impl = V8DocumentType::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ChildNode::remove(*impl, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace document_type_v8_internal

void V8DocumentType::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_name_Getter");

  document_type_v8_internal::NameAttributeGetter(info);
}

void V8DocumentType::PublicIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_publicId_Getter");

  document_type_v8_internal::PublicIdAttributeGetter(info);
}

void V8DocumentType::SystemIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_systemId_Getter");

  document_type_v8_internal::SystemIdAttributeGetter(info);
}

void V8DocumentType::BeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_before");

  document_type_v8_internal::BeforeMethod(info);
}

void V8DocumentType::AfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_after");

  document_type_v8_internal::AfterMethod(info);
}

void V8DocumentType::ReplaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_replaceWith");

  document_type_v8_internal::ReplaceWithMethod(info);
}

void V8DocumentType::RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentType_remove");

  document_type_v8_internal::RemoveMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DocumentTypeAccessors[] = {
    { "name", V8DocumentType::NameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "publicId", V8DocumentType::PublicIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "systemId", V8DocumentType::SystemIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DocumentTypeMethods[] = {
    {"before", V8DocumentType::BeforeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"after", V8DocumentType::AfterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceWith", V8DocumentType::ReplaceWithMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8DocumentType::RemoveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DocumentTypeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DocumentType::GetWrapperTypeInfo()->interface_name, V8Node::DomTemplate(isolate, world), V8DocumentType::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DocumentTypeAccessors, base::size(kV8DocumentTypeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DocumentTypeMethods, base::size(kV8DocumentTypeMethods));

  // Custom signature

  V8DocumentType::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DocumentType::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DocumentType::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DocumentType::GetWrapperTypeInfo()),
      InstallV8DocumentTypeTemplate);
}

bool V8DocumentType::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DocumentType::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DocumentType::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DocumentType::GetWrapperTypeInfo(), v8_value);
}

DocumentType* V8DocumentType::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DocumentType* NativeValueTraits<DocumentType>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DocumentType* native_value = V8DocumentType::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DocumentType"));
  }
  return native_value;
}

void V8DocumentType::InstallConditionalFeatures(
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
        context, V8AtomicString(isolate, "before"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "remove"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "replaceWith"), v8::True(isolate))
        .FromJust();
    prototype_object->CreateDataProperty(
        context, unscopables_symbol, unscopables).FromJust();
  }
}

}  // namespace blink
