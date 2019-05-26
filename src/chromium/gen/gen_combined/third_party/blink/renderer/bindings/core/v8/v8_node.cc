// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_get_root_node_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
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
const WrapperTypeInfo v8_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Node::DomTemplate,
    nullptr,
    "Node",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Node.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Node::wrapper_type_info_ = v8_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Node>::value,
    "Node inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Node::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Node is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace node_v8_internal {

static void NodeTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getNodeType());
}

static void NodeNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueString(info, impl->nodeName(), info.GetIsolate());
}

static void BaseURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueString(info, impl->baseURI(), info.GetIsolate());
}

static void IsConnectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isConnected());
}

static void OwnerDocumentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->ownerDocument()), impl);
}

static void OwnerDocumentAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->ownerDocument()));
}

static void ParentNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->ParentNodeWithCounting()), impl);
}

static void ParentNodeAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->ParentNodeWithCounting()));
}

static void ParentElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->parentElement()), impl);
}

static void ParentElementAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->parentElement()));
}

static void ChildNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->childNodes()), impl);
}

static void ChildNodesAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->childNodes()));
}

static void FirstChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->firstChild()), impl);
}

static void FirstChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->firstChild()));
}

static void LastChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->lastChild()), impl);
}

static void LastChildAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->lastChild()));
}

static void PreviousSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->previousSibling()), impl);
}

static void PreviousSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->previousSibling()));
}

static void NextSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->nextSibling()), impl);
}

static void NextSiblingAttributeGetterForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueForMainWorld(info, WTF::GetPtr(impl->nextSibling()));
}

static void NodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->nodeValue(), info.GetIsolate());
}

static void NodeValueAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Node* impl = V8Node::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setNodeValue(cpp_value);
}

static void TextContentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Node* impl = V8Node::ToImpl(holder);

  StringOrTrustedScript result;
  impl->textContent(result);

  V8SetReturnValue(info, result);
}

static void TextContentAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  Node* impl = V8Node::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "Node", "textContent");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  StringOrTrustedScript cpp_value;
  V8StringOrTrustedScript::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setTextContent(cpp_value, exception_state);
}

static void SetApplyScrollMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "setApplyScroll");

  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8ScrollStateCallback* scroll_state_callback;
  V8StringResource<> native_scroll_behavior;
  if (info[0]->IsFunction()) {
    scroll_state_callback = V8ScrollStateCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  native_scroll_behavior = info[1];
  if (!native_scroll_behavior.Prepare())
    return;
  const char* kValidNativeScrollBehaviorValues[] = {
      "disable-native-scroll",
      "perform-before-native-scroll",
      "perform-after-native-scroll",
  };
  if (!IsValidEnum(native_scroll_behavior, kValidNativeScrollBehaviorValues, base::size(kValidNativeScrollBehaviorValues), "NativeScrollBehavior", exception_state)) {
    return;
  }

  impl->setApplyScroll(scroll_state_callback, native_scroll_behavior);
}

static void SetDistributeScrollMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "setDistributeScroll");

  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8ScrollStateCallback* scroll_state_callback;
  V8StringResource<> native_scroll_behavior;
  if (info[0]->IsFunction()) {
    scroll_state_callback = V8ScrollStateCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  native_scroll_behavior = info[1];
  if (!native_scroll_behavior.Prepare())
    return;
  const char* kValidNativeScrollBehaviorValues[] = {
      "disable-native-scroll",
      "perform-before-native-scroll",
      "perform-after-native-scroll",
  };
  if (!IsValidEnum(native_scroll_behavior, kValidNativeScrollBehaviorValues, base::size(kValidNativeScrollBehaviorValues), "NativeScrollBehavior", exception_state)) {
    return;
  }

  impl->setDistributeScroll(scroll_state_callback, native_scroll_behavior);
}

static void HasChildNodesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->hasChildren());
}

static void GetRootNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "getRootNode");

  Node* impl = V8Node::ToImpl(info.Holder());

  GetRootNodeOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<GetRootNodeOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueFast(info, impl->getRootNode(options), impl);
}

static void NormalizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  impl->normalize();
}

static void CloneNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "cloneNode");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  bool deep;
  if (!info[0]->IsUndefined()) {
    deep = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    deep = false;
  }

  Node* result = impl->cloneNode(deep, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void IsEqualNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isEqualNode", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other_node;
  other_node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other_node && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isEqualNode", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isEqualNode(other_node));
}

static void IsSameNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSameNode", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other_node;
  other_node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other_node && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSameNode", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSameNode(other_node));
}

static void CompareDocumentPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compareDocumentPosition", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other;
  other = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compareDocumentPosition", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->compareDocumentPosition(other));
}

static void ContainsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contains", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* other;
  other = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!other && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contains", "Node", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->contains(other));
}

static void LookupPrefixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lookupPrefix", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->lookupPrefix(namespace_uri), info.GetIsolate());
}

static void LookupNamespaceURIMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lookupNamespaceURI", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> prefix;
  prefix = info[0];
  if (!prefix.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->lookupNamespaceURI(prefix), info.GetIsolate());
}

static void IsDefaultNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Node* impl = V8Node::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isDefaultNamespace", "Node", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isDefaultNamespace(namespace_uri));
}

static void InsertBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "insertBefore");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->insertBefore(node, child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void InsertBeforeMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "insertBefore");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->insertBefore(node, child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void AppendChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "appendChild");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

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

  Node* result = impl->appendChild(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void AppendChildMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "appendChild");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

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

  Node* result = impl->appendChild(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void ReplaceChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "replaceChild");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->replaceChild(node, child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void ReplaceChildMethodForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "replaceChild");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  Node* child;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!child) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  Node* result = impl->replaceChild(node, child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueForMainWorld(info, result);
}

static void RemoveChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Node", "removeChild");
  CEReactionsScope ce_reactions_scope;

  Node* impl = V8Node::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* child;
  child = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->removeChild(child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

}  // namespace node_v8_internal

void V8Node::NodeTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeType_Getter");

  node_v8_internal::NodeTypeAttributeGetter(info);
}

void V8Node::NodeNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeName_Getter);

  node_v8_internal::NodeNameAttributeGetter(info);
}

void V8Node::BaseURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_baseURI_Getter");

  node_v8_internal::BaseURIAttributeGetter(info);
}

void V8Node::IsConnectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isConnected_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Node_IsConnected_AttributeGetter);

  node_v8_internal::IsConnectedAttributeGetter(info);
}

void V8Node::OwnerDocumentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_ownerDocument_Getter");

  node_v8_internal::OwnerDocumentAttributeGetter(info);
}

void V8Node::OwnerDocumentAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_ownerDocument_Getter");

  node_v8_internal::OwnerDocumentAttributeGetterForMainWorld(info);
}

void V8Node::ParentNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentNode_Getter");

  node_v8_internal::ParentNodeAttributeGetter(info);
}

void V8Node::ParentNodeAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentNode_Getter");

  node_v8_internal::ParentNodeAttributeGetterForMainWorld(info);
}

void V8Node::ParentElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentElement_Getter");

  node_v8_internal::ParentElementAttributeGetter(info);
}

void V8Node::ParentElementAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_parentElement_Getter");

  node_v8_internal::ParentElementAttributeGetterForMainWorld(info);
}

void V8Node::ChildNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_childNodes_Getter");

  node_v8_internal::ChildNodesAttributeGetter(info);
}

void V8Node::ChildNodesAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_childNodes_Getter");

  node_v8_internal::ChildNodesAttributeGetterForMainWorld(info);
}

void V8Node::FirstChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_firstChild_Getter");

  node_v8_internal::FirstChildAttributeGetter(info);
}

void V8Node::FirstChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_firstChild_Getter");

  node_v8_internal::FirstChildAttributeGetterForMainWorld(info);
}

void V8Node::LastChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lastChild_Getter");

  node_v8_internal::LastChildAttributeGetter(info);
}

void V8Node::LastChildAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lastChild_Getter");

  node_v8_internal::LastChildAttributeGetterForMainWorld(info);
}

void V8Node::PreviousSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_previousSibling_Getter");

  node_v8_internal::PreviousSiblingAttributeGetter(info);
}

void V8Node::PreviousSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_previousSibling_Getter");

  node_v8_internal::PreviousSiblingAttributeGetterForMainWorld(info);
}

void V8Node::NextSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nextSibling_Getter");

  node_v8_internal::NextSiblingAttributeGetter(info);
}

void V8Node::NextSiblingAttributeGetterCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nextSibling_Getter");

  node_v8_internal::NextSiblingAttributeGetterForMainWorld(info);
}

void V8Node::NodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeValue_Getter");

  node_v8_internal::NodeValueAttributeGetter(info);
}

void V8Node::NodeValueAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_nodeValue_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  node_v8_internal::NodeValueAttributeSetter(v8_value, info);
}

void V8Node::TextContentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_textContent_Getter");

  node_v8_internal::TextContentAttributeGetter(info);
}

void V8Node::TextContentAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_textContent_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  node_v8_internal::TextContentAttributeSetter(v8_value, info);
}

void V8Node::SetApplyScrollMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_setApplyScroll");

  node_v8_internal::SetApplyScrollMethod(info);
}

void V8Node::SetDistributeScrollMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_setDistributeScroll");

  node_v8_internal::SetDistributeScrollMethod(info);
}

void V8Node::HasChildNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_hasChildNodes");

  node_v8_internal::HasChildNodesMethod(info);
}

void V8Node::GetRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_getRootNode");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kNodeGetRootNode);
  node_v8_internal::GetRootNodeMethod(info);
}

void V8Node::NormalizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_normalize");

  node_v8_internal::NormalizeMethod(info);
}

void V8Node::CloneNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_cloneNode");

  node_v8_internal::CloneNodeMethod(info);
}

void V8Node::IsEqualNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isEqualNode");

  node_v8_internal::IsEqualNodeMethod(info);
}

void V8Node::IsSameNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isSameNode");

  node_v8_internal::IsSameNodeMethod(info);
}

void V8Node::CompareDocumentPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_compareDocumentPosition");

  node_v8_internal::CompareDocumentPositionMethod(info);
}

void V8Node::ContainsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_contains");

  node_v8_internal::ContainsMethod(info);
}

void V8Node::LookupPrefixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lookupPrefix");

  node_v8_internal::LookupPrefixMethod(info);
}

void V8Node::LookupNamespaceURIMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_lookupNamespaceURI");

  node_v8_internal::LookupNamespaceURIMethod(info);
}

void V8Node::IsDefaultNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_isDefaultNamespace");

  node_v8_internal::IsDefaultNamespaceMethod(info);
}

void V8Node::InsertBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_insertBefore");

  node_v8_internal::InsertBeforeMethod(info);
}

void V8Node::InsertBeforeMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_insertBefore");

  node_v8_internal::InsertBeforeMethodForMainWorld(info);
}

void V8Node::AppendChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeAppendChild);
  node_v8_internal::AppendChildMethod(info);
}

void V8Node::AppendChildMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeAppendChild);
  node_v8_internal::AppendChildMethodForMainWorld(info);
}

void V8Node::ReplaceChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_replaceChild");

  node_v8_internal::ReplaceChildMethod(info);
}

void V8Node::ReplaceChildMethodCallbackForMainWorld(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Node_replaceChild");

  node_v8_internal::ReplaceChildMethodForMainWorld(info);
}

void V8Node::RemoveChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE(info.GetIsolate(), RuntimeCallStats::CounterId::kNodeRemoveChild);
  node_v8_internal::RemoveChildMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8NodeAccessors[] = {
    { "nodeType", V8Node::NodeTypeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nodeName", V8Node::NodeNameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "baseURI", V8Node::BaseURIAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isConnected", V8Node::IsConnectedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ownerDocument", V8Node::OwnerDocumentAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "ownerDocument", V8Node::OwnerDocumentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "parentNode", V8Node::ParentNodeAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "parentNode", V8Node::ParentNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "parentElement", V8Node::ParentElementAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "parentElement", V8Node::ParentElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "childNodes", V8Node::ChildNodesAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "childNodes", V8Node::ChildNodesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "firstChild", V8Node::FirstChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "firstChild", V8Node::FirstChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "lastChild", V8Node::LastChildAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "lastChild", V8Node::LastChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "previousSibling", V8Node::PreviousSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "previousSibling", V8Node::PreviousSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "nextSibling", V8Node::NextSiblingAttributeGetterCallbackForMainWorld, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kMainWorld },
    { "nextSibling", V8Node::NextSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kNonMainWorlds },
    { "nodeValue", V8Node::NodeValueAttributeGetterCallback, V8Node::NodeValueAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textContent", V8Node::TextContentAttributeGetterCallback, V8Node::TextContentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8NodeMethods[] = {
    {"hasChildNodes", V8Node::HasChildNodesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRootNode", V8Node::GetRootNodeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"normalize", V8Node::NormalizeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cloneNode", V8Node::CloneNodeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEqualNode", V8Node::IsEqualNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSameNode", V8Node::IsSameNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compareDocumentPosition", V8Node::CompareDocumentPositionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"contains", V8Node::ContainsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasNoSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lookupPrefix", V8Node::LookupPrefixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lookupNamespaceURI", V8Node::LookupNamespaceURIMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isDefaultNamespace", V8Node::IsDefaultNamespaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertBefore", V8Node::InsertBeforeMethodCallbackForMainWorld, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"insertBefore", V8Node::InsertBeforeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"appendChild", V8Node::AppendChildMethodCallbackForMainWorld, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"appendChild", V8Node::AppendChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"replaceChild", V8Node::ReplaceChildMethodCallbackForMainWorld, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kMainWorld},
    {"replaceChild", V8Node::ReplaceChildMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kNonMainWorlds},
    {"removeChild", V8Node::RemoveChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8NodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Node::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8Node::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"ELEMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"ATTRIBUTE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"TEXT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"CDATA_SECTION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"ENTITY_REFERENCE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"ENTITY_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
        {"PROCESSING_INSTRUCTION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
        {"COMMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
        {"DOCUMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
        {"DOCUMENT_TYPE_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
        {"DOCUMENT_FRAGMENT_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(11)},
        {"NOTATION_NODE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
        {"DOCUMENT_POSITION_DISCONNECTED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x01)},
        {"DOCUMENT_POSITION_PRECEDING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x02)},
        {"DOCUMENT_POSITION_FOLLOWING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x04)},
        {"DOCUMENT_POSITION_CONTAINS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x08)},
        {"DOCUMENT_POSITION_CONTAINED_BY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x10)},
        {"DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x20)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(1 == Node::kElementNode, "the value of Node_kElementNode does not match with implementation");
  static_assert(2 == Node::kAttributeNode, "the value of Node_kAttributeNode does not match with implementation");
  static_assert(3 == Node::kTextNode, "the value of Node_kTextNode does not match with implementation");
  static_assert(4 == Node::kCdataSectionNode, "the value of Node_kCdataSectionNode does not match with implementation");
  static_assert(5 == Node::kEntityReferenceNode, "the value of Node_kEntityReferenceNode does not match with implementation");
  static_assert(6 == Node::kEntityNode, "the value of Node_kEntityNode does not match with implementation");
  static_assert(7 == Node::kProcessingInstructionNode, "the value of Node_kProcessingInstructionNode does not match with implementation");
  static_assert(8 == Node::kCommentNode, "the value of Node_kCommentNode does not match with implementation");
  static_assert(9 == Node::kDocumentNode, "the value of Node_kDocumentNode does not match with implementation");
  static_assert(10 == Node::kDocumentTypeNode, "the value of Node_kDocumentTypeNode does not match with implementation");
  static_assert(11 == Node::kDocumentFragmentNode, "the value of Node_kDocumentFragmentNode does not match with implementation");
  static_assert(12 == Node::kNotationNode, "the value of Node_kNotationNode does not match with implementation");
  static_assert(0x01 == Node::kDocumentPositionDisconnected, "the value of Node_kDocumentPositionDisconnected does not match with implementation");
  static_assert(0x02 == Node::kDocumentPositionPreceding, "the value of Node_kDocumentPositionPreceding does not match with implementation");
  static_assert(0x04 == Node::kDocumentPositionFollowing, "the value of Node_kDocumentPositionFollowing does not match with implementation");
  static_assert(0x08 == Node::kDocumentPositionContains, "the value of Node_kDocumentPositionContains does not match with implementation");
  static_assert(0x10 == Node::kDocumentPositionContainedBy, "the value of Node_kDocumentPositionContainedBy does not match with implementation");
  static_assert(0x20 == Node::kDocumentPositionImplementationSpecific, "the value of Node_kDocumentPositionImplementationSpecific does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8NodeAccessors, base::size(kV8NodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8NodeMethods, base::size(kV8NodeMethods));

  // Custom signature

  V8Node::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Node::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    {
      // Install setApplyScroll configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setApplyScroll", V8Node::SetApplyScrollMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    {
      // Install setDistributeScroll configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setDistributeScroll", V8Node::SetDistributeScrollMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8Node::InstallRuntimeEnabledFeatures(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  InstallRuntimeEnabledFeaturesImpl(isolate, world, instance, prototype, interface);
}

void V8Node::InstallRuntimeEnabledFeaturesImpl(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template = V8Node::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);

  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    {
      // Install setApplyScroll configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setApplyScroll", V8Node::SetApplyScrollMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::ScrollCustomizationEnabled()) {
    {
      // Install setDistributeScroll configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"setDistributeScroll", V8Node::SetDistributeScrollMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance, prototype,
            interface, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8Node::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Node::GetWrapperTypeInfo()),
      InstallV8NodeTemplate);
}

bool V8Node::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Node::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Node::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Node::GetWrapperTypeInfo(), v8_value);
}

Node* V8Node::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Node* NativeValueTraits<Node>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Node* native_value = V8Node::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Node"));
  }
  return native_value;
}

}  // namespace blink
