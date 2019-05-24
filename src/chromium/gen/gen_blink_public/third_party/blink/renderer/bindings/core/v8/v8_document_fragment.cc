// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/non_element_parent_node.h"
#include "third_party/blink/renderer/core/dom/parent_node.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"
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
const WrapperTypeInfo v8_document_fragment_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DocumentFragment::DomTemplate,
    V8DocumentFragment::InstallConditionalFeatures,
    "DocumentFragment",
    V8Node::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DocumentFragment.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DocumentFragment::wrapper_type_info_ = v8_document_fragment_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DocumentFragment>::value,
    "DocumentFragment inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DocumentFragment::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DocumentFragment is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace document_fragment_v8_internal {

static void ChildrenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::children(*impl), impl);
}

static void ChildrenAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::children(*impl));
}

static void FirstElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::firstElementChild(*impl), impl);
}

static void FirstElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::firstElementChild(*impl));
}

static void LastElementChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueFast(info, ParentNode::lastElementChild(*impl), impl);
}

static void LastElementChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, ParentNode::lastElementChild(*impl));
}

static void ChildElementCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DocumentFragment* impl = V8DocumentFragment::ToImpl(holder);

  V8SetReturnValueUnsigned(info, ParentNode::childElementCount(*impl));
}

static void GetElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "DocumentFragment", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_id;
  element_id = info[0];
  if (!element_id.Prepare())
    return;

  V8SetReturnValueFast(info, NonElementParentNode::getElementById(*impl, element_id), impl);
}

static void GetElementByIdMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getElementById", "DocumentFragment", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> element_id;
  element_id = info[0];
  if (!element_id.Prepare())
    return;

  V8SetReturnValueForMainWorld(info, NonElementParentNode::getElementById(*impl, element_id));
}

static void PrependMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "prepend");
  CEReactionsScope ce_reactions_scope;

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "append");
  CEReactionsScope ce_reactions_scope;

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "querySelector");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "DocumentFragment", "querySelectorAll");

  DocumentFragment* impl = V8DocumentFragment::ToImpl(info.Holder());

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

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_ConstructorCallback");

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  DocumentFragment* impl = DocumentFragment::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DocumentFragment::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("DocumentFragment"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  document_fragment_v8_internal::Constructor(info);
}

}  // namespace document_fragment_v8_internal

void V8DocumentFragment::ChildrenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_children_Getter");

  document_fragment_v8_internal::ChildrenAttributeGetter(info);
}

void V8DocumentFragment::ChildrenAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_children_Getter");

  document_fragment_v8_internal::ChildrenAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::FirstElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_firstElementChild_Getter");

  document_fragment_v8_internal::FirstElementChildAttributeGetter(info);
}

void V8DocumentFragment::FirstElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_firstElementChild_Getter");

  document_fragment_v8_internal::FirstElementChildAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::LastElementChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_lastElementChild_Getter");

  document_fragment_v8_internal::LastElementChildAttributeGetter(info);
}

void V8DocumentFragment::LastElementChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_lastElementChild_Getter");

  document_fragment_v8_internal::LastElementChildAttributeGetterForMainWorld(info);
}

void V8DocumentFragment::ChildElementCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_childElementCount_Getter");

  document_fragment_v8_internal::ChildElementCountAttributeGetter(info);
}

void V8DocumentFragment::GetElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_getElementById");

  document_fragment_v8_internal::GetElementByIdMethod(info);
}

void V8DocumentFragment::GetElementByIdMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_getElementById");

  document_fragment_v8_internal::GetElementByIdMethodForMainWorld(info);
}

void V8DocumentFragment::PrependMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_prepend");

  document_fragment_v8_internal::PrependMethod(info);
}

void V8DocumentFragment::AppendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_append");

  document_fragment_v8_internal::AppendMethod(info);
}

void V8DocumentFragment::QuerySelectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_querySelector");

  document_fragment_v8_internal::QuerySelectorMethod(info);
}

void V8DocumentFragment::QuerySelectorAllMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DocumentFragment_querySelectorAll");

  document_fragment_v8_internal::QuerySelectorAllMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DocumentFragmentAccessors[] = {
    { "children", V8DocumentFragment::ChildrenAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "children", V8DocumentFragment::ChildrenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "firstElementChild", V8DocumentFragment::FirstElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "firstElementChild", V8DocumentFragment::FirstElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "lastElementChild", V8DocumentFragment::LastElementChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "lastElementChild", V8DocumentFragment::LastElementChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "childElementCount", V8DocumentFragment::ChildElementCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8DocumentFragmentMethods[] = {
    {"getElementById", V8DocumentFragment::GetElementByIdMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"getElementById", V8DocumentFragment::GetElementByIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"prepend", V8DocumentFragment::PrependMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"append", V8DocumentFragment::AppendMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelector", V8DocumentFragment::QuerySelectorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"querySelectorAll", V8DocumentFragment::QuerySelectorAllMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8DocumentFragmentTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DocumentFragment::GetWrapperTypeInfo()->interface_name, V8Node::DomTemplate(isolate, world), V8DocumentFragment::kInternalFieldCount);
  interface_template->SetCallHandler(document_fragment_v8_internal::ConstructorCallback);
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
      signature, kV8DocumentFragmentAccessors, base::size(kV8DocumentFragmentAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DocumentFragmentMethods, base::size(kV8DocumentFragmentMethods));

  // Custom signature

  V8DocumentFragment::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DocumentFragment::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DocumentFragment::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DocumentFragment::GetWrapperTypeInfo()),
      InstallV8DocumentFragmentTemplate);
}

bool V8DocumentFragment::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DocumentFragment::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DocumentFragment::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DocumentFragment::GetWrapperTypeInfo(), v8_value);
}

DocumentFragment* V8DocumentFragment::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DocumentFragment* NativeValueTraits<DocumentFragment>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DocumentFragment* native_value = V8DocumentFragment::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DocumentFragment"));
  }
  return native_value;
}

void V8DocumentFragment::InstallConditionalFeatures(
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
        context, V8AtomicString(isolate, "prepend"), v8::True(isolate))
        .FromJust();
    prototype_object->CreateDataProperty(
        context, unscopables_symbol, unscopables).FromJust();
  }
}

}  // namespace blink
