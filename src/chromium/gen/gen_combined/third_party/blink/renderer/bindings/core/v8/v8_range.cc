// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_range_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Range::DomTemplate,
    nullptr,
    "Range",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Range.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Range::wrapper_type_info_ = v8_range_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Range>::value,
    "Range inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Range::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Range is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace range_v8_internal {

static void StartContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->startContainer()), impl);
}

static void StartOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->startOffset());
}

static void EndContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->endContainer()), impl);
}

static void EndOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->endOffset());
}

static void CollapsedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueBool(info, impl->collapsed());
}

static void CommonAncestorContainerAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Range* impl = V8Range::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->commonAncestorContainer()), impl);
}

static void SetStartMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setStart");

  Range* impl = V8Range::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setStart(node, offset, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setEnd");

  Range* impl = V8Range::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setEnd(node, offset, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetStartBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setStartBefore");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->setStartBefore(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetStartAfterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setStartAfter");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->setStartAfter(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetEndBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setEndBefore");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->setEndBefore(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetEndAfterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "setEndAfter");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->setEndAfter(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CollapseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "collapse");

  Range* impl = V8Range::ToImpl(info.Holder());

  bool to_start;
  if (!info[0]->IsUndefined()) {
    to_start = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    to_start = false;
  }

  impl->collapse(to_start);
}

static void SelectNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "selectNode");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->selectNode(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SelectNodeContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "selectNodeContents");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->selectNodeContents(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CompareBoundaryPointsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "compareBoundaryPoints");

  Range* impl = V8Range::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint16_t how;
  Range* source_range;
  how = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  source_range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!source_range) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Range'.");
    return;
  }

  int16_t result = impl->compareBoundaryPoints(how, source_range, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void DeleteContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "deleteContents");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  impl->deleteContents(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ExtractContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "extractContents");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  DocumentFragment* result = impl->extractContents(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CloneContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "cloneContents");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  DocumentFragment* result = impl->cloneContents(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void InsertNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "insertNode");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

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

  impl->insertNode(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SurroundContentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "surroundContents");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* new_parent;
  new_parent = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_parent) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  impl->surroundContents(new_parent, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CloneRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Range* impl = V8Range::ToImpl(info.Holder());

  Range* result = impl->cloneRange();
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void DetachMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Range* impl = V8Range::ToImpl(info.Holder());

  impl->detach();
}

static void IsPointInRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "isPointInRange");

  Range* impl = V8Range::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->isPointInRange(node, offset, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void ComparePointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "comparePoint");

  Range* impl = V8Range::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  uint32_t offset;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  int16_t result = impl->comparePoint(node, offset, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void IntersectsNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "intersectsNode");

  Range* impl = V8Range::ToImpl(info.Holder());

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

  bool result = impl->intersectsNode(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void GetClientRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Range* impl = V8Range::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getClientRects());
}

static void GetBoundingClientRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Range* impl = V8Range::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getBoundingClientRect());
}

static void CreateContextualFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "createContextualFragment");
  CEReactionsScope ce_reactions_scope;

  Range* impl = V8Range::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  StringOrTrustedHTML fragment;
  V8StringOrTrustedHTML::ToImpl(info.GetIsolate(), info[0], fragment, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  DocumentFragment* result = impl->createContextualFragment(fragment, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result);
}

static void ExpandMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Range", "expand");

  Range* impl = V8Range::ToImpl(info.Holder());

  V8StringResource<> unit;
  unit = info[0];
  if (!unit.Prepare())
    return;

  impl->expand(unit, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ToStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Range* impl = V8Range::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_ConstructorCallback");

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  Range* impl = Range::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8Range::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("Range"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  range_v8_internal::Constructor(info);
}

}  // namespace range_v8_internal

void V8Range::StartContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_startContainer_Getter");

  range_v8_internal::StartContainerAttributeGetter(info);
}

void V8Range::StartOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_startOffset_Getter");

  range_v8_internal::StartOffsetAttributeGetter(info);
}

void V8Range::EndContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_endContainer_Getter");

  range_v8_internal::EndContainerAttributeGetter(info);
}

void V8Range::EndOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_endOffset_Getter");

  range_v8_internal::EndOffsetAttributeGetter(info);
}

void V8Range::CollapsedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_collapsed_Getter");

  range_v8_internal::CollapsedAttributeGetter(info);
}

void V8Range::CommonAncestorContainerAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_commonAncestorContainer_Getter");

  range_v8_internal::CommonAncestorContainerAttributeGetter(info);
}

void V8Range::SetStartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setStart");

  range_v8_internal::SetStartMethod(info);
}

void V8Range::SetEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setEnd");

  range_v8_internal::SetEndMethod(info);
}

void V8Range::SetStartBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setStartBefore");

  range_v8_internal::SetStartBeforeMethod(info);
}

void V8Range::SetStartAfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setStartAfter");

  range_v8_internal::SetStartAfterMethod(info);
}

void V8Range::SetEndBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setEndBefore");

  range_v8_internal::SetEndBeforeMethod(info);
}

void V8Range::SetEndAfterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_setEndAfter");

  range_v8_internal::SetEndAfterMethod(info);
}

void V8Range::CollapseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_collapse");

  range_v8_internal::CollapseMethod(info);
}

void V8Range::SelectNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_selectNode");

  range_v8_internal::SelectNodeMethod(info);
}

void V8Range::SelectNodeContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_selectNodeContents");

  range_v8_internal::SelectNodeContentsMethod(info);
}

void V8Range::CompareBoundaryPointsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_compareBoundaryPoints");

  range_v8_internal::CompareBoundaryPointsMethod(info);
}

void V8Range::DeleteContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_deleteContents");

  range_v8_internal::DeleteContentsMethod(info);
}

void V8Range::ExtractContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_extractContents");

  range_v8_internal::ExtractContentsMethod(info);
}

void V8Range::CloneContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_cloneContents");

  range_v8_internal::CloneContentsMethod(info);
}

void V8Range::InsertNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_insertNode");

  range_v8_internal::InsertNodeMethod(info);
}

void V8Range::SurroundContentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_surroundContents");

  range_v8_internal::SurroundContentsMethod(info);
}

void V8Range::CloneRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_cloneRange");

  range_v8_internal::CloneRangeMethod(info);
}

void V8Range::DetachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_detach");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kRangeDetach);
  range_v8_internal::DetachMethod(info);
}

void V8Range::IsPointInRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_isPointInRange");

  range_v8_internal::IsPointInRangeMethod(info);
}

void V8Range::ComparePointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_comparePoint");

  range_v8_internal::ComparePointMethod(info);
}

void V8Range::IntersectsNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_intersectsNode");

  range_v8_internal::IntersectsNodeMethod(info);
}

void V8Range::GetClientRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_getClientRects");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Range_GetClientRects_Method);
  range_v8_internal::GetClientRectsMethod(info);
}

void V8Range::GetBoundingClientRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_getBoundingClientRect");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8Range_GetBoundingClientRect_Method);
  range_v8_internal::GetBoundingClientRectMethod(info);
}

void V8Range::CreateContextualFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_createContextualFragment");

  range_v8_internal::CreateContextualFragmentMethod(info);
}

void V8Range::ExpandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_expand");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kRangeExpand);
  range_v8_internal::ExpandMethod(info);
}

void V8Range::ToStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Range_toString");

  range_v8_internal::ToStringMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RangeAccessors[] = {
    { "startContainer", V8Range::StartContainerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "startOffset", V8Range::StartOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "endContainer", V8Range::EndContainerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "endOffset", V8Range::EndOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "collapsed", V8Range::CollapsedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "commonAncestorContainer", V8Range::CommonAncestorContainerAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RangeMethods[] = {
    {"setStart", V8Range::SetStartMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEnd", V8Range::SetEndMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStartBefore", V8Range::SetStartBeforeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setStartAfter", V8Range::SetStartAfterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEndBefore", V8Range::SetEndBeforeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEndAfter", V8Range::SetEndAfterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"collapse", V8Range::CollapseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectNode", V8Range::SelectNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectNodeContents", V8Range::SelectNodeContentsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compareBoundaryPoints", V8Range::CompareBoundaryPointsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteContents", V8Range::DeleteContentsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"extractContents", V8Range::ExtractContentsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cloneContents", V8Range::CloneContentsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertNode", V8Range::InsertNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"surroundContents", V8Range::SurroundContentsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cloneRange", V8Range::CloneRangeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"detach", V8Range::DetachMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPointInRange", V8Range::IsPointInRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"comparePoint", V8Range::ComparePointMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"intersectsNode", V8Range::IntersectsNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getClientRects", V8Range::GetClientRectsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBoundingClientRect", V8Range::GetBoundingClientRectMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createContextualFragment", V8Range::CreateContextualFragmentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"expand", V8Range::ExpandMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toString", V8Range::ToStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RangeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Range::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Range::kInternalFieldCount);
  interface_template->SetCallHandler(range_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"START_TO_START", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"START_TO_END", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"END_TO_END", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"END_TO_START", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == Range::kStartToStart, "the value of Range_kStartToStart does not match with implementation");
  static_assert(1 == Range::kStartToEnd, "the value of Range_kStartToEnd does not match with implementation");
  static_assert(2 == Range::kEndToEnd, "the value of Range_kEndToEnd does not match with implementation");
  static_assert(3 == Range::kEndToStart, "the value of Range_kEndToStart does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RangeAccessors, base::size(kV8RangeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RangeMethods, base::size(kV8RangeMethods));

  // Custom signature

  V8Range::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Range::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Range::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Range::GetWrapperTypeInfo()),
      InstallV8RangeTemplate);
}

bool V8Range::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Range::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Range::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Range::GetWrapperTypeInfo(), v8_value);
}

Range* V8Range::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Range* NativeValueTraits<Range>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Range* native_value = V8Range::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Range"));
  }
  return native_value;
}

}  // namespace blink
