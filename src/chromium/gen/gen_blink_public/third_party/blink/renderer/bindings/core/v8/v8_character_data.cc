// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_character_data.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/core/dom/child_node.h"
#include "third_party/blink/renderer/core/dom/non_document_type_child_node.h"
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
const WrapperTypeInfo v8_character_data_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CharacterData::DomTemplate,
    V8CharacterData::InstallConditionalFeatures,
    "CharacterData",
    V8Node::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CharacterData.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CharacterData::wrapper_type_info_ = v8_character_data_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CharacterData>::value,
    "CharacterData inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CharacterData::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CharacterData is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace character_data_v8_internal {

static void DataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueString(info, impl->data(), info.GetIsolate());
}

static void DataAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setData(cpp_value);
}

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void PreviousElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueFast(info, NonDocumentTypeChildNode::previousElementSibling(*impl), impl);
}

static void PreviousElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, NonDocumentTypeChildNode::previousElementSibling(*impl));
}

static void NextElementSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueFast(info, NonDocumentTypeChildNode::nextElementSibling(*impl), impl);
}

static void NextElementSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CharacterData* impl = V8CharacterData::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, NonDocumentTypeChildNode::nextElementSibling(*impl));
}

static void SubstringDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "substringData");

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t offset;
  uint32_t count;
  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->substringData(offset, count, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void AppendDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("appendData", "CharacterData", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> data;
  data = info[0];
  if (!data.Prepare())
    return;

  impl->appendData(data);
}

static void InsertDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "insertData");

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t offset;
  V8StringResource<> data;
  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  data = info[1];
  if (!data.Prepare())
    return;

  impl->insertData(offset, data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DeleteDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "deleteData");

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t offset;
  uint32_t count;
  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->deleteData(offset, count, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ReplaceDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "replaceData");

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t offset;
  uint32_t count;
  V8StringResource<> data;
  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  data = info[2];
  if (!data.Prepare())
    return;

  impl->replaceData(offset, count, data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void BeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "before");
  CEReactionsScope ce_reactions_scope;

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "after");
  CEReactionsScope ce_reactions_scope;

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "replaceWith");
  CEReactionsScope ce_reactions_scope;

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CharacterData", "remove");
  CEReactionsScope ce_reactions_scope;

  CharacterData* impl = V8CharacterData::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ChildNode::remove(*impl, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace character_data_v8_internal

void V8CharacterData::DataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_data_Getter");

  character_data_v8_internal::DataAttributeGetter(info);
}

void V8CharacterData::DataAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_data_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  character_data_v8_internal::DataAttributeSetter(v8_value, info);
}

void V8CharacterData::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_length_Getter");

  character_data_v8_internal::LengthAttributeGetter(info);
}

void V8CharacterData::PreviousElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_previousElementSibling_Getter");

  character_data_v8_internal::PreviousElementSiblingAttributeGetter(info);
}

void V8CharacterData::PreviousElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_previousElementSibling_Getter");

  character_data_v8_internal::PreviousElementSiblingAttributeGetterForMainWorld(info);
}

void V8CharacterData::NextElementSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_nextElementSibling_Getter");

  character_data_v8_internal::NextElementSiblingAttributeGetter(info);
}

void V8CharacterData::NextElementSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_nextElementSibling_Getter");

  character_data_v8_internal::NextElementSiblingAttributeGetterForMainWorld(info);
}

void V8CharacterData::SubstringDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_substringData");

  character_data_v8_internal::SubstringDataMethod(info);
}

void V8CharacterData::AppendDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_appendData");

  character_data_v8_internal::AppendDataMethod(info);
}

void V8CharacterData::InsertDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_insertData");

  character_data_v8_internal::InsertDataMethod(info);
}

void V8CharacterData::DeleteDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_deleteData");

  character_data_v8_internal::DeleteDataMethod(info);
}

void V8CharacterData::ReplaceDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_replaceData");

  character_data_v8_internal::ReplaceDataMethod(info);
}

void V8CharacterData::BeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_before");

  character_data_v8_internal::BeforeMethod(info);
}

void V8CharacterData::AfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_after");

  character_data_v8_internal::AfterMethod(info);
}

void V8CharacterData::ReplaceWithMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_replaceWith");

  character_data_v8_internal::ReplaceWithMethod(info);
}

void V8CharacterData::RemoveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CharacterData_remove");

  character_data_v8_internal::RemoveMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CharacterDataAccessors[] = {
    { "data", V8CharacterData::DataAttributeGetterCallback, V8CharacterData::DataAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "length", V8CharacterData::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "previousElementSibling", V8CharacterData::PreviousElementSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "previousElementSibling", V8CharacterData::PreviousElementSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "nextElementSibling", V8CharacterData::NextElementSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "nextElementSibling", V8CharacterData::NextElementSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8CharacterDataMethods[] = {
    {"substringData", V8CharacterData::SubstringDataMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"appendData", V8CharacterData::AppendDataMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertData", V8CharacterData::InsertDataMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteData", V8CharacterData::DeleteDataMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceData", V8CharacterData::ReplaceDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"before", V8CharacterData::BeforeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"after", V8CharacterData::AfterMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceWith", V8CharacterData::ReplaceWithMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"remove", V8CharacterData::RemoveMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8CharacterDataTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CharacterData::GetWrapperTypeInfo()->interface_name, V8Node::DomTemplate(isolate, world), V8CharacterData::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CharacterDataAccessors, base::size(kV8CharacterDataAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CharacterDataMethods, base::size(kV8CharacterDataMethods));

  // Custom signature

  V8CharacterData::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CharacterData::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CharacterData::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CharacterData::GetWrapperTypeInfo()),
      InstallV8CharacterDataTemplate);
}

bool V8CharacterData::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CharacterData::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CharacterData::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CharacterData::GetWrapperTypeInfo(), v8_value);
}

CharacterData* V8CharacterData::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CharacterData* NativeValueTraits<CharacterData>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CharacterData* native_value = V8CharacterData::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CharacterData"));
  }
  return native_value;
}

void V8CharacterData::InstallConditionalFeatures(
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
