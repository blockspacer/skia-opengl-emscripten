// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_accessible_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
const WrapperTypeInfo v8_accessible_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8AccessibleNode::DomTemplate,
    nullptr,
    "AccessibleNode",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AccessibleNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& AccessibleNode::wrapper_type_info_ = v8_accessible_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, AccessibleNode>::value,
    "AccessibleNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&AccessibleNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "AccessibleNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace accessible_node_v8_internal {

static void ActiveDescendantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->activeDescendant()), impl);
}

static void ActiveDescendantAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "activeDescendant");

  // Prepare the value to be set.
  AccessibleNode* cpp_value = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setActiveDescendant(cpp_value);
}

static void AtomicAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->atomic(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void AtomicAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "atomic");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setAtomic(cpp_value, is_null);
}

static void AutocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->autocomplete(), info.GetIsolate());
}

static void AutocompleteAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAutocomplete(cpp_value);
}

static void BusyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->busy(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void BusyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "busy");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setBusy(cpp_value, is_null);
}

static void CheckedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->checked(), info.GetIsolate());
}

static void CheckedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setChecked(cpp_value);
}

static void ColCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->colCount(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void ColCountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colCount");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setColCount(cpp_value, is_null);
}

static void ColIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->colIndex(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void ColIndexAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colIndex");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setColIndex(cpp_value, is_null);
}

static void ColSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->colSpan(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void ColSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "colSpan");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setColSpan(cpp_value, is_null);
}

static void ControlsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->controls()), impl);
}

static void ControlsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "controls");

  // Prepare the value to be set.
  AccessibleNodeList* cpp_value = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setControls(cpp_value);
}

static void CurrentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->current(), info.GetIsolate());
}

static void CurrentAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setCurrent(cpp_value);
}

static void DescribedByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->describedBy()), impl);
}

static void DescribedByAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "describedBy");

  // Prepare the value to be set.
  AccessibleNodeList* cpp_value = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setDescribedBy(cpp_value);
}

static void DetailsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->details()), impl);
}

static void DetailsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "details");

  // Prepare the value to be set.
  AccessibleNode* cpp_value = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setDetails(cpp_value);
}

static void DisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->disabled(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void DisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "disabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setDisabled(cpp_value, is_null);
}

static void ErrorMessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->errorMessage()), impl);
}

static void ErrorMessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "errorMessage");

  // Prepare the value to be set.
  AccessibleNode* cpp_value = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNode'.");
    return;
  }

  impl->setErrorMessage(cpp_value);
}

static void ExpandedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->expanded(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ExpandedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "expanded");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setExpanded(cpp_value, is_null);
}

static void FlowToAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->flowTo()), impl);
}

static void FlowToAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "flowTo");

  // Prepare the value to be set.
  AccessibleNodeList* cpp_value = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setFlowTo(cpp_value);
}

static void HasPopUpAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->hasPopUp(), info.GetIsolate());
}

static void HasPopUpAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setHasPopUp(cpp_value);
}

static void HiddenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->hidden(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void HiddenAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "hidden");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setHidden(cpp_value, is_null);
}

static void InvalidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->invalid(), info.GetIsolate());
}

static void InvalidAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setInvalid(cpp_value);
}

static void KeyShortcutsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->keyShortcuts(), info.GetIsolate());
}

static void KeyShortcutsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setKeyShortcuts(cpp_value);
}

static void LabelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->label(), info.GetIsolate());
}

static void LabelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLabel(cpp_value);
}

static void LabeledByAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->labeledBy()), impl);
}

static void LabeledByAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "labeledBy");

  // Prepare the value to be set.
  AccessibleNodeList* cpp_value = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setLabeledBy(cpp_value);
}

static void LevelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->level(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void LevelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "level");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setLevel(cpp_value, is_null);
}

static void LiveAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->live(), info.GetIsolate());
}

static void LiveAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setLive(cpp_value);
}

static void ModalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->modal(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ModalAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "modal");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setModal(cpp_value, is_null);
}

static void MultilineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->multiline(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void MultilineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "multiline");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setMultiline(cpp_value, is_null);
}

static void MultiselectableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->multiselectable(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void MultiselectableAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "multiselectable");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setMultiselectable(cpp_value, is_null);
}

static void OrientationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->orientation(), info.GetIsolate());
}

static void OrientationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setOrientation(cpp_value);
}

static void OwnsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->owns()), impl);
}

static void OwnsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "owns");

  // Prepare the value to be set.
  AccessibleNodeList* cpp_value = V8AccessibleNodeList::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'AccessibleNodeList'.");
    return;
  }

  impl->setOwns(cpp_value);
}

static void PlaceholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->placeholder(), info.GetIsolate());
}

static void PlaceholderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setPlaceholder(cpp_value);
}

static void PosInSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->posInSet(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void PosInSetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "posInSet");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setPosInSet(cpp_value, is_null);
}

static void PressedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->pressed(), info.GetIsolate());
}

static void PressedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setPressed(cpp_value);
}

static void ReadOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->readOnly(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ReadOnlyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "readOnly");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setReadOnly(cpp_value, is_null);
}

static void RelevantAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->relevant(), info.GetIsolate());
}

static void RelevantAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setRelevant(cpp_value);
}

static void RequiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->required(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void RequiredAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "required");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setRequired(cpp_value, is_null);
}

static void RoleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->role(), info.GetIsolate());
}

static void RoleAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setRole(cpp_value);
}

static void RoleDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->roleDescription(), info.GetIsolate());
}

static void RoleDescriptionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setRoleDescription(cpp_value);
}

static void RowCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->rowCount(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void RowCountAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowCount");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setRowCount(cpp_value, is_null);
}

static void RowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->rowIndex(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void RowIndexAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowIndex");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setRowIndex(cpp_value, is_null);
}

static void RowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->rowSpan(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void RowSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "rowSpan");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setRowSpan(cpp_value, is_null);
}

static void SelectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->selected(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void SelectedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "selected");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setSelected(cpp_value, is_null);
}

static void SetSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->setSize(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void SetSizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "setSize");

  // Prepare the value to be set.
  int32_t cpp_value = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setSetSize(cpp_value, is_null);
}

static void SortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->sort(), info.GetIsolate());
}

static void SortAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setSort(cpp_value);
}

static void ValueMaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueMax(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void ValueMaxAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueMax");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setValueMax(cpp_value, is_null);
}

static void ValueMinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueMin(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void ValueMinAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueMin");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setValueMin(cpp_value, is_null);
}

static void ValueNowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueNow(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void ValueNowAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "AccessibleNode", "valueNow");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  bool is_null = IsUndefinedOrNull(v8_value);
  impl->setValueNow(cpp_value, is_null);
}

static void ValueTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->valueText(), info.GetIsolate());
}

static void ValueTextAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setValueText(cpp_value);
}

static void OnaccessibleclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessibleclick()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessibleclickAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibleclick(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaccessiblecontextmenuAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessiblecontextmenu()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessiblecontextmenuAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblecontextmenu(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaccessibledecrementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessibledecrement()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessibledecrementAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibledecrement(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaccessiblefocusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessiblefocus()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessiblefocusAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblefocus(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaccessibleincrementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessibleincrement()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessibleincrementAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessibleincrement(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaccessiblescrollintoviewAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaccessiblescrollintoview()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaccessiblescrollintoviewAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaccessiblescrollintoview(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ChildNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  AccessibleNode* impl = V8AccessibleNode::ToImpl(holder);

  AccessibleNodeList* cpp_value(WTF::GetPtr(impl->childNodes()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#AccessibleNode#childNodes")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void AppendChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AccessibleNode", "appendChild");

  AccessibleNode* impl = V8AccessibleNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  AccessibleNode* child;
  child = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AccessibleNode'.");
    return;
  }

  impl->appendChild(child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "AccessibleNode", "removeChild");

  AccessibleNode* impl = V8AccessibleNode::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  AccessibleNode* child;
  child = V8AccessibleNode::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!child) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'AccessibleNode'.");
    return;
  }

  impl->removeChild(child, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_ConstructorCallback");

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  AccessibleNode* impl = AccessibleNode::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8AccessibleNode::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("AccessibleNode"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  accessible_node_v8_internal::Constructor(info);
}

}  // namespace accessible_node_v8_internal

void V8AccessibleNode::ActiveDescendantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_activeDescendant_Getter");

  accessible_node_v8_internal::ActiveDescendantAttributeGetter(info);
}

void V8AccessibleNode::ActiveDescendantAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_activeDescendant_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ActiveDescendantAttributeSetter(v8_value, info);
}

void V8AccessibleNode::AtomicAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_atomic_Getter");

  accessible_node_v8_internal::AtomicAttributeGetter(info);
}

void V8AccessibleNode::AtomicAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_atomic_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::AtomicAttributeSetter(v8_value, info);
}

void V8AccessibleNode::AutocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_autocomplete_Getter");

  accessible_node_v8_internal::AutocompleteAttributeGetter(info);
}

void V8AccessibleNode::AutocompleteAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_autocomplete_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::AutocompleteAttributeSetter(v8_value, info);
}

void V8AccessibleNode::BusyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_busy_Getter");

  accessible_node_v8_internal::BusyAttributeGetter(info);
}

void V8AccessibleNode::BusyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_busy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::BusyAttributeSetter(v8_value, info);
}

void V8AccessibleNode::CheckedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_checked_Getter");

  accessible_node_v8_internal::CheckedAttributeGetter(info);
}

void V8AccessibleNode::CheckedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_checked_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::CheckedAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ColCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colCount_Getter");

  accessible_node_v8_internal::ColCountAttributeGetter(info);
}

void V8AccessibleNode::ColCountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colCount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ColCountAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ColIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colIndex_Getter");

  accessible_node_v8_internal::ColIndexAttributeGetter(info);
}

void V8AccessibleNode::ColIndexAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colIndex_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ColIndexAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ColSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colSpan_Getter");

  accessible_node_v8_internal::ColSpanAttributeGetter(info);
}

void V8AccessibleNode::ColSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_colSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ColSpanAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ControlsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_controls_Getter");

  accessible_node_v8_internal::ControlsAttributeGetter(info);
}

void V8AccessibleNode::ControlsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_controls_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ControlsAttributeSetter(v8_value, info);
}

void V8AccessibleNode::CurrentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_current_Getter");

  accessible_node_v8_internal::CurrentAttributeGetter(info);
}

void V8AccessibleNode::CurrentAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_current_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::CurrentAttributeSetter(v8_value, info);
}

void V8AccessibleNode::DescribedByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_describedBy_Getter");

  accessible_node_v8_internal::DescribedByAttributeGetter(info);
}

void V8AccessibleNode::DescribedByAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_describedBy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::DescribedByAttributeSetter(v8_value, info);
}

void V8AccessibleNode::DetailsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_details_Getter");

  accessible_node_v8_internal::DetailsAttributeGetter(info);
}

void V8AccessibleNode::DetailsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_details_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::DetailsAttributeSetter(v8_value, info);
}

void V8AccessibleNode::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_disabled_Getter");

  accessible_node_v8_internal::DisabledAttributeGetter(info);
}

void V8AccessibleNode::DisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_disabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::DisabledAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ErrorMessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_errorMessage_Getter");

  accessible_node_v8_internal::ErrorMessageAttributeGetter(info);
}

void V8AccessibleNode::ErrorMessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_errorMessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ErrorMessageAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ExpandedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_expanded_Getter");

  accessible_node_v8_internal::ExpandedAttributeGetter(info);
}

void V8AccessibleNode::ExpandedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_expanded_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ExpandedAttributeSetter(v8_value, info);
}

void V8AccessibleNode::FlowToAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_flowTo_Getter");

  accessible_node_v8_internal::FlowToAttributeGetter(info);
}

void V8AccessibleNode::FlowToAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_flowTo_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::FlowToAttributeSetter(v8_value, info);
}

void V8AccessibleNode::HasPopUpAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hasPopUp_Getter");

  accessible_node_v8_internal::HasPopUpAttributeGetter(info);
}

void V8AccessibleNode::HasPopUpAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hasPopUp_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::HasPopUpAttributeSetter(v8_value, info);
}

void V8AccessibleNode::HiddenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hidden_Getter");

  accessible_node_v8_internal::HiddenAttributeGetter(info);
}

void V8AccessibleNode::HiddenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_hidden_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::HiddenAttributeSetter(v8_value, info);
}

void V8AccessibleNode::InvalidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_invalid_Getter");

  accessible_node_v8_internal::InvalidAttributeGetter(info);
}

void V8AccessibleNode::InvalidAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_invalid_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::InvalidAttributeSetter(v8_value, info);
}

void V8AccessibleNode::KeyShortcutsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_keyShortcuts_Getter");

  accessible_node_v8_internal::KeyShortcutsAttributeGetter(info);
}

void V8AccessibleNode::KeyShortcutsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_keyShortcuts_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::KeyShortcutsAttributeSetter(v8_value, info);
}

void V8AccessibleNode::LabelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_label_Getter");

  accessible_node_v8_internal::LabelAttributeGetter(info);
}

void V8AccessibleNode::LabelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_label_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::LabelAttributeSetter(v8_value, info);
}

void V8AccessibleNode::LabeledByAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_labeledBy_Getter");

  accessible_node_v8_internal::LabeledByAttributeGetter(info);
}

void V8AccessibleNode::LabeledByAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_labeledBy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::LabeledByAttributeSetter(v8_value, info);
}

void V8AccessibleNode::LevelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_level_Getter");

  accessible_node_v8_internal::LevelAttributeGetter(info);
}

void V8AccessibleNode::LevelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_level_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::LevelAttributeSetter(v8_value, info);
}

void V8AccessibleNode::LiveAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_live_Getter");

  accessible_node_v8_internal::LiveAttributeGetter(info);
}

void V8AccessibleNode::LiveAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_live_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::LiveAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ModalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_modal_Getter");

  accessible_node_v8_internal::ModalAttributeGetter(info);
}

void V8AccessibleNode::ModalAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_modal_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ModalAttributeSetter(v8_value, info);
}

void V8AccessibleNode::MultilineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiline_Getter");

  accessible_node_v8_internal::MultilineAttributeGetter(info);
}

void V8AccessibleNode::MultilineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::MultilineAttributeSetter(v8_value, info);
}

void V8AccessibleNode::MultiselectableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiselectable_Getter");

  accessible_node_v8_internal::MultiselectableAttributeGetter(info);
}

void V8AccessibleNode::MultiselectableAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_multiselectable_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::MultiselectableAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OrientationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_orientation_Getter");

  accessible_node_v8_internal::OrientationAttributeGetter(info);
}

void V8AccessibleNode::OrientationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_orientation_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OrientationAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OwnsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_owns_Getter");

  accessible_node_v8_internal::OwnsAttributeGetter(info);
}

void V8AccessibleNode::OwnsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_owns_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OwnsAttributeSetter(v8_value, info);
}

void V8AccessibleNode::PlaceholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_placeholder_Getter");

  accessible_node_v8_internal::PlaceholderAttributeGetter(info);
}

void V8AccessibleNode::PlaceholderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_placeholder_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::PlaceholderAttributeSetter(v8_value, info);
}

void V8AccessibleNode::PosInSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_posInSet_Getter");

  accessible_node_v8_internal::PosInSetAttributeGetter(info);
}

void V8AccessibleNode::PosInSetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_posInSet_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::PosInSetAttributeSetter(v8_value, info);
}

void V8AccessibleNode::PressedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_pressed_Getter");

  accessible_node_v8_internal::PressedAttributeGetter(info);
}

void V8AccessibleNode::PressedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_pressed_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::PressedAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ReadOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_readOnly_Getter");

  accessible_node_v8_internal::ReadOnlyAttributeGetter(info);
}

void V8AccessibleNode::ReadOnlyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_readOnly_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ReadOnlyAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RelevantAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_relevant_Getter");

  accessible_node_v8_internal::RelevantAttributeGetter(info);
}

void V8AccessibleNode::RelevantAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_relevant_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RelevantAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RequiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_required_Getter");

  accessible_node_v8_internal::RequiredAttributeGetter(info);
}

void V8AccessibleNode::RequiredAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_required_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RequiredAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RoleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_role_Getter");

  accessible_node_v8_internal::RoleAttributeGetter(info);
}

void V8AccessibleNode::RoleAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_role_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RoleAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RoleDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_roleDescription_Getter");

  accessible_node_v8_internal::RoleDescriptionAttributeGetter(info);
}

void V8AccessibleNode::RoleDescriptionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_roleDescription_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RoleDescriptionAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RowCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowCount_Getter");

  accessible_node_v8_internal::RowCountAttributeGetter(info);
}

void V8AccessibleNode::RowCountAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowCount_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RowCountAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowIndex_Getter");

  accessible_node_v8_internal::RowIndexAttributeGetter(info);
}

void V8AccessibleNode::RowIndexAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowIndex_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RowIndexAttributeSetter(v8_value, info);
}

void V8AccessibleNode::RowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowSpan_Getter");

  accessible_node_v8_internal::RowSpanAttributeGetter(info);
}

void V8AccessibleNode::RowSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_rowSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::RowSpanAttributeSetter(v8_value, info);
}

void V8AccessibleNode::SelectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_selected_Getter");

  accessible_node_v8_internal::SelectedAttributeGetter(info);
}

void V8AccessibleNode::SelectedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_selected_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::SelectedAttributeSetter(v8_value, info);
}

void V8AccessibleNode::SetSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_setSize_Getter");

  accessible_node_v8_internal::SetSizeAttributeGetter(info);
}

void V8AccessibleNode::SetSizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_setSize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::SetSizeAttributeSetter(v8_value, info);
}

void V8AccessibleNode::SortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_sort_Getter");

  accessible_node_v8_internal::SortAttributeGetter(info);
}

void V8AccessibleNode::SortAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_sort_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::SortAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ValueMaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMax_Getter");

  accessible_node_v8_internal::ValueMaxAttributeGetter(info);
}

void V8AccessibleNode::ValueMaxAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMax_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ValueMaxAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ValueMinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMin_Getter");

  accessible_node_v8_internal::ValueMinAttributeGetter(info);
}

void V8AccessibleNode::ValueMinAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueMin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ValueMinAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ValueNowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueNow_Getter");

  accessible_node_v8_internal::ValueNowAttributeGetter(info);
}

void V8AccessibleNode::ValueNowAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueNow_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ValueNowAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ValueTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueText_Getter");

  accessible_node_v8_internal::ValueTextAttributeGetter(info);
}

void V8AccessibleNode::ValueTextAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_valueText_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::ValueTextAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessibleclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleclick_Getter");

  accessible_node_v8_internal::OnaccessibleclickAttributeGetter(info);
}

void V8AccessibleNode::OnaccessibleclickAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleclick_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessibleclickAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessiblecontextmenuAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblecontextmenu_Getter");

  accessible_node_v8_internal::OnaccessiblecontextmenuAttributeGetter(info);
}

void V8AccessibleNode::OnaccessiblecontextmenuAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblecontextmenu_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessiblecontextmenuAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessibledecrementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibledecrement_Getter");

  accessible_node_v8_internal::OnaccessibledecrementAttributeGetter(info);
}

void V8AccessibleNode::OnaccessibledecrementAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibledecrement_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessibledecrementAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessiblefocusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblefocus_Getter");

  accessible_node_v8_internal::OnaccessiblefocusAttributeGetter(info);
}

void V8AccessibleNode::OnaccessiblefocusAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblefocus_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessiblefocusAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessibleincrementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleincrement_Getter");

  accessible_node_v8_internal::OnaccessibleincrementAttributeGetter(info);
}

void V8AccessibleNode::OnaccessibleincrementAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessibleincrement_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessibleincrementAttributeSetter(v8_value, info);
}

void V8AccessibleNode::OnaccessiblescrollintoviewAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblescrollintoview_Getter");

  accessible_node_v8_internal::OnaccessiblescrollintoviewAttributeGetter(info);
}

void V8AccessibleNode::OnaccessiblescrollintoviewAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_onaccessiblescrollintoview_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  accessible_node_v8_internal::OnaccessiblescrollintoviewAttributeSetter(v8_value, info);
}

void V8AccessibleNode::ChildNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_childNodes_Getter");

  accessible_node_v8_internal::ChildNodesAttributeGetter(info);
}

void V8AccessibleNode::AppendChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_appendChild");

  accessible_node_v8_internal::AppendChildMethod(info);
}

void V8AccessibleNode::RemoveChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_AccessibleNode_removeChild");

  accessible_node_v8_internal::RemoveChildMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8AccessibleNodeAccessors[] = {
    { "activeDescendant", V8AccessibleNode::ActiveDescendantAttributeGetterCallback, V8AccessibleNode::ActiveDescendantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "atomic", V8AccessibleNode::AtomicAttributeGetterCallback, V8AccessibleNode::AtomicAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8AccessibleNode::AutocompleteAttributeGetterCallback, V8AccessibleNode::AutocompleteAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "busy", V8AccessibleNode::BusyAttributeGetterCallback, V8AccessibleNode::BusyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "checked", V8AccessibleNode::CheckedAttributeGetterCallback, V8AccessibleNode::CheckedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colCount", V8AccessibleNode::ColCountAttributeGetterCallback, V8AccessibleNode::ColCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colIndex", V8AccessibleNode::ColIndexAttributeGetterCallback, V8AccessibleNode::ColIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colSpan", V8AccessibleNode::ColSpanAttributeGetterCallback, V8AccessibleNode::ColSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "controls", V8AccessibleNode::ControlsAttributeGetterCallback, V8AccessibleNode::ControlsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "current", V8AccessibleNode::CurrentAttributeGetterCallback, V8AccessibleNode::CurrentAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "describedBy", V8AccessibleNode::DescribedByAttributeGetterCallback, V8AccessibleNode::DescribedByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "details", V8AccessibleNode::DetailsAttributeGetterCallback, V8AccessibleNode::DetailsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8AccessibleNode::DisabledAttributeGetterCallback, V8AccessibleNode::DisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "errorMessage", V8AccessibleNode::ErrorMessageAttributeGetterCallback, V8AccessibleNode::ErrorMessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "expanded", V8AccessibleNode::ExpandedAttributeGetterCallback, V8AccessibleNode::ExpandedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "flowTo", V8AccessibleNode::FlowToAttributeGetterCallback, V8AccessibleNode::FlowToAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hasPopUp", V8AccessibleNode::HasPopUpAttributeGetterCallback, V8AccessibleNode::HasPopUpAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hidden", V8AccessibleNode::HiddenAttributeGetterCallback, V8AccessibleNode::HiddenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "invalid", V8AccessibleNode::InvalidAttributeGetterCallback, V8AccessibleNode::InvalidAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "keyShortcuts", V8AccessibleNode::KeyShortcutsAttributeGetterCallback, V8AccessibleNode::KeyShortcutsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "label", V8AccessibleNode::LabelAttributeGetterCallback, V8AccessibleNode::LabelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "labeledBy", V8AccessibleNode::LabeledByAttributeGetterCallback, V8AccessibleNode::LabeledByAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "level", V8AccessibleNode::LevelAttributeGetterCallback, V8AccessibleNode::LevelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "live", V8AccessibleNode::LiveAttributeGetterCallback, V8AccessibleNode::LiveAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "modal", V8AccessibleNode::ModalAttributeGetterCallback, V8AccessibleNode::ModalAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiline", V8AccessibleNode::MultilineAttributeGetterCallback, V8AccessibleNode::MultilineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiselectable", V8AccessibleNode::MultiselectableAttributeGetterCallback, V8AccessibleNode::MultiselectableAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "orientation", V8AccessibleNode::OrientationAttributeGetterCallback, V8AccessibleNode::OrientationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "owns", V8AccessibleNode::OwnsAttributeGetterCallback, V8AccessibleNode::OwnsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8AccessibleNode::PlaceholderAttributeGetterCallback, V8AccessibleNode::PlaceholderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "posInSet", V8AccessibleNode::PosInSetAttributeGetterCallback, V8AccessibleNode::PosInSetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pressed", V8AccessibleNode::PressedAttributeGetterCallback, V8AccessibleNode::PressedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8AccessibleNode::ReadOnlyAttributeGetterCallback, V8AccessibleNode::ReadOnlyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "relevant", V8AccessibleNode::RelevantAttributeGetterCallback, V8AccessibleNode::RelevantAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "required", V8AccessibleNode::RequiredAttributeGetterCallback, V8AccessibleNode::RequiredAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "role", V8AccessibleNode::RoleAttributeGetterCallback, V8AccessibleNode::RoleAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "roleDescription", V8AccessibleNode::RoleDescriptionAttributeGetterCallback, V8AccessibleNode::RoleDescriptionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowCount", V8AccessibleNode::RowCountAttributeGetterCallback, V8AccessibleNode::RowCountAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowIndex", V8AccessibleNode::RowIndexAttributeGetterCallback, V8AccessibleNode::RowIndexAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowSpan", V8AccessibleNode::RowSpanAttributeGetterCallback, V8AccessibleNode::RowSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selected", V8AccessibleNode::SelectedAttributeGetterCallback, V8AccessibleNode::SelectedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "setSize", V8AccessibleNode::SetSizeAttributeGetterCallback, V8AccessibleNode::SetSizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sort", V8AccessibleNode::SortAttributeGetterCallback, V8AccessibleNode::SortAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueMax", V8AccessibleNode::ValueMaxAttributeGetterCallback, V8AccessibleNode::ValueMaxAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueMin", V8AccessibleNode::ValueMinAttributeGetterCallback, V8AccessibleNode::ValueMinAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueNow", V8AccessibleNode::ValueNowAttributeGetterCallback, V8AccessibleNode::ValueNowAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueText", V8AccessibleNode::ValueTextAttributeGetterCallback, V8AccessibleNode::ValueTextAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessibleclick", V8AccessibleNode::OnaccessibleclickAttributeGetterCallback, V8AccessibleNode::OnaccessibleclickAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblecontextmenu", V8AccessibleNode::OnaccessiblecontextmenuAttributeGetterCallback, V8AccessibleNode::OnaccessiblecontextmenuAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessibledecrement", V8AccessibleNode::OnaccessibledecrementAttributeGetterCallback, V8AccessibleNode::OnaccessibledecrementAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblefocus", V8AccessibleNode::OnaccessiblefocusAttributeGetterCallback, V8AccessibleNode::OnaccessiblefocusAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessibleincrement", V8AccessibleNode::OnaccessibleincrementAttributeGetterCallback, V8AccessibleNode::OnaccessibleincrementAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaccessiblescrollintoview", V8AccessibleNode::OnaccessiblescrollintoviewAttributeGetterCallback, V8AccessibleNode::OnaccessiblescrollintoviewAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "childNodes", V8AccessibleNode::ChildNodesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8AccessibleNodeMethods[] = {
    {"appendChild", V8AccessibleNode::AppendChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeChild", V8AccessibleNode::RemoveChildMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8AccessibleNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8AccessibleNode::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8AccessibleNode::kInternalFieldCount);
  interface_template->SetCallHandler(accessible_node_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  if (!RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AccessibleNodeAccessors, base::size(kV8AccessibleNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8AccessibleNodeMethods, base::size(kV8AccessibleNodeMethods));

  // Custom signature

  V8AccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8AccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::AccessibilityObjectModelEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8AccessibleNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8AccessibleNode::GetWrapperTypeInfo()),
      InstallV8AccessibleNodeTemplate);
}

bool V8AccessibleNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8AccessibleNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8AccessibleNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8AccessibleNode::GetWrapperTypeInfo(), v8_value);
}

AccessibleNode* V8AccessibleNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

AccessibleNode* NativeValueTraits<AccessibleNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  AccessibleNode* native_value = V8AccessibleNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "AccessibleNode"));
  }
  return native_value;
}

}  // namespace blink
