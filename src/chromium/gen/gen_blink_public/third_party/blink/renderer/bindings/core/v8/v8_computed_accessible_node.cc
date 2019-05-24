// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_computed_accessible_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_computed_accessible_node_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ComputedAccessibleNode::DomTemplate,
    nullptr,
    "ComputedAccessibleNode",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ComputedAccessibleNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ComputedAccessibleNode::wrapper_type_info_ = v8_computed_accessible_node_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ComputedAccessibleNode>::value,
    "ComputedAccessibleNode inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ComputedAccessibleNode::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ComputedAccessibleNode is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace computed_accessible_node_v8_internal {

static void AtomicAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->atomic(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void BusyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->busy(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void DisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->disabled(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ExpandedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->expanded(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ModalAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->modal(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void MultilineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->multiline(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void MultiselectableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->multiselectable(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ReadOnlyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->readOnly(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void RequiredAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->required(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void SelectedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  bool cpp_value(impl->selected(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueBool(info, cpp_value);
}

static void ColCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->colCount(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void ColIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->colIndex(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void ColSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->colSpan(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void LevelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->level(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void PosInSetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->posInSet(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void RowCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->rowCount(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void RowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->rowIndex(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void RowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  uint32_t cpp_value(impl->rowSpan(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void SetSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  int32_t cpp_value(impl->setSize(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValueInt(info, cpp_value);
}

static void ValueMaxAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueMax(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void ValueMinAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueMin(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void ValueNowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->valueNow(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void AutocompleteAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->autocomplete(), info.GetIsolate());
}

static void CheckedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->checked(), info.GetIsolate());
}

static void KeyShortcutsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->keyShortcuts(), info.GetIsolate());
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->name(), info.GetIsolate());
}

static void PlaceholderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->placeholder(), info.GetIsolate());
}

static void RoleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->role(), info.GetIsolate());
}

static void RoleDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->roleDescription(), info.GetIsolate());
}

static void ValueTextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->valueText(), info.GetIsolate());
}

static void ParentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cpp_value(WTF::GetPtr(impl->parent()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#parent")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void FirstChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cpp_value(WTF::GetPtr(impl->firstChild()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#firstChild")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void LastChildAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cpp_value(WTF::GetPtr(impl->lastChild()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#lastChild")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PreviousSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cpp_value(WTF::GetPtr(impl->previousSibling()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#previousSibling")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void NextSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(holder);

  ComputedAccessibleNode* cpp_value(WTF::GetPtr(impl->nextSibling()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#ComputedAccessibleNode#nextSibling")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void EnsureUpToDateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ComputedAccessibleNode", "ensureUpToDate");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8ComputedAccessibleNode::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  ComputedAccessibleNode* impl = V8ComputedAccessibleNode::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->ensureUpToDate(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace computed_accessible_node_v8_internal

void V8ComputedAccessibleNode::AtomicAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_atomic_Getter");

  computed_accessible_node_v8_internal::AtomicAttributeGetter(info);
}

void V8ComputedAccessibleNode::BusyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_busy_Getter");

  computed_accessible_node_v8_internal::BusyAttributeGetter(info);
}

void V8ComputedAccessibleNode::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_disabled_Getter");

  computed_accessible_node_v8_internal::DisabledAttributeGetter(info);
}

void V8ComputedAccessibleNode::ExpandedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_expanded_Getter");

  computed_accessible_node_v8_internal::ExpandedAttributeGetter(info);
}

void V8ComputedAccessibleNode::ModalAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_modal_Getter");

  computed_accessible_node_v8_internal::ModalAttributeGetter(info);
}

void V8ComputedAccessibleNode::MultilineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_multiline_Getter");

  computed_accessible_node_v8_internal::MultilineAttributeGetter(info);
}

void V8ComputedAccessibleNode::MultiselectableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_multiselectable_Getter");

  computed_accessible_node_v8_internal::MultiselectableAttributeGetter(info);
}

void V8ComputedAccessibleNode::ReadOnlyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_readOnly_Getter");

  computed_accessible_node_v8_internal::ReadOnlyAttributeGetter(info);
}

void V8ComputedAccessibleNode::RequiredAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_required_Getter");

  computed_accessible_node_v8_internal::RequiredAttributeGetter(info);
}

void V8ComputedAccessibleNode::SelectedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_selected_Getter");

  computed_accessible_node_v8_internal::SelectedAttributeGetter(info);
}

void V8ComputedAccessibleNode::ColCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colCount_Getter");

  computed_accessible_node_v8_internal::ColCountAttributeGetter(info);
}

void V8ComputedAccessibleNode::ColIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colIndex_Getter");

  computed_accessible_node_v8_internal::ColIndexAttributeGetter(info);
}

void V8ComputedAccessibleNode::ColSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_colSpan_Getter");

  computed_accessible_node_v8_internal::ColSpanAttributeGetter(info);
}

void V8ComputedAccessibleNode::LevelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_level_Getter");

  computed_accessible_node_v8_internal::LevelAttributeGetter(info);
}

void V8ComputedAccessibleNode::PosInSetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_posInSet_Getter");

  computed_accessible_node_v8_internal::PosInSetAttributeGetter(info);
}

void V8ComputedAccessibleNode::RowCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowCount_Getter");

  computed_accessible_node_v8_internal::RowCountAttributeGetter(info);
}

void V8ComputedAccessibleNode::RowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowIndex_Getter");

  computed_accessible_node_v8_internal::RowIndexAttributeGetter(info);
}

void V8ComputedAccessibleNode::RowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_rowSpan_Getter");

  computed_accessible_node_v8_internal::RowSpanAttributeGetter(info);
}

void V8ComputedAccessibleNode::SetSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_setSize_Getter");

  computed_accessible_node_v8_internal::SetSizeAttributeGetter(info);
}

void V8ComputedAccessibleNode::ValueMaxAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueMax_Getter");

  computed_accessible_node_v8_internal::ValueMaxAttributeGetter(info);
}

void V8ComputedAccessibleNode::ValueMinAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueMin_Getter");

  computed_accessible_node_v8_internal::ValueMinAttributeGetter(info);
}

void V8ComputedAccessibleNode::ValueNowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueNow_Getter");

  computed_accessible_node_v8_internal::ValueNowAttributeGetter(info);
}

void V8ComputedAccessibleNode::AutocompleteAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_autocomplete_Getter");

  computed_accessible_node_v8_internal::AutocompleteAttributeGetter(info);
}

void V8ComputedAccessibleNode::CheckedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_checked_Getter");

  computed_accessible_node_v8_internal::CheckedAttributeGetter(info);
}

void V8ComputedAccessibleNode::KeyShortcutsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_keyShortcuts_Getter");

  computed_accessible_node_v8_internal::KeyShortcutsAttributeGetter(info);
}

void V8ComputedAccessibleNode::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_name_Getter");

  computed_accessible_node_v8_internal::NameAttributeGetter(info);
}

void V8ComputedAccessibleNode::PlaceholderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_placeholder_Getter");

  computed_accessible_node_v8_internal::PlaceholderAttributeGetter(info);
}

void V8ComputedAccessibleNode::RoleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_role_Getter");

  computed_accessible_node_v8_internal::RoleAttributeGetter(info);
}

void V8ComputedAccessibleNode::RoleDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_roleDescription_Getter");

  computed_accessible_node_v8_internal::RoleDescriptionAttributeGetter(info);
}

void V8ComputedAccessibleNode::ValueTextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_valueText_Getter");

  computed_accessible_node_v8_internal::ValueTextAttributeGetter(info);
}

void V8ComputedAccessibleNode::ParentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_parent_Getter");

  computed_accessible_node_v8_internal::ParentAttributeGetter(info);
}

void V8ComputedAccessibleNode::FirstChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_firstChild_Getter");

  computed_accessible_node_v8_internal::FirstChildAttributeGetter(info);
}

void V8ComputedAccessibleNode::LastChildAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_lastChild_Getter");

  computed_accessible_node_v8_internal::LastChildAttributeGetter(info);
}

void V8ComputedAccessibleNode::PreviousSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_previousSibling_Getter");

  computed_accessible_node_v8_internal::PreviousSiblingAttributeGetter(info);
}

void V8ComputedAccessibleNode::NextSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_nextSibling_Getter");

  computed_accessible_node_v8_internal::NextSiblingAttributeGetter(info);
}

void V8ComputedAccessibleNode::EnsureUpToDateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ComputedAccessibleNode_ensureUpToDate");

  computed_accessible_node_v8_internal::EnsureUpToDateMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ComputedAccessibleNodeAccessors[] = {
    { "atomic", V8ComputedAccessibleNode::AtomicAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "busy", V8ComputedAccessibleNode::BusyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "disabled", V8ComputedAccessibleNode::DisabledAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "expanded", V8ComputedAccessibleNode::ExpandedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "modal", V8ComputedAccessibleNode::ModalAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiline", V8ComputedAccessibleNode::MultilineAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "multiselectable", V8ComputedAccessibleNode::MultiselectableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readOnly", V8ComputedAccessibleNode::ReadOnlyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "required", V8ComputedAccessibleNode::RequiredAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "selected", V8ComputedAccessibleNode::SelectedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colCount", V8ComputedAccessibleNode::ColCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colIndex", V8ComputedAccessibleNode::ColIndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "colSpan", V8ComputedAccessibleNode::ColSpanAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "level", V8ComputedAccessibleNode::LevelAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "posInSet", V8ComputedAccessibleNode::PosInSetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowCount", V8ComputedAccessibleNode::RowCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowIndex", V8ComputedAccessibleNode::RowIndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowSpan", V8ComputedAccessibleNode::RowSpanAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "setSize", V8ComputedAccessibleNode::SetSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueMax", V8ComputedAccessibleNode::ValueMaxAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueMin", V8ComputedAccessibleNode::ValueMinAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueNow", V8ComputedAccessibleNode::ValueNowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autocomplete", V8ComputedAccessibleNode::AutocompleteAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "checked", V8ComputedAccessibleNode::CheckedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "keyShortcuts", V8ComputedAccessibleNode::KeyShortcutsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8ComputedAccessibleNode::NameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "placeholder", V8ComputedAccessibleNode::PlaceholderAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "role", V8ComputedAccessibleNode::RoleAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "roleDescription", V8ComputedAccessibleNode::RoleDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "valueText", V8ComputedAccessibleNode::ValueTextAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "parent", V8ComputedAccessibleNode::ParentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "firstChild", V8ComputedAccessibleNode::FirstChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lastChild", V8ComputedAccessibleNode::LastChildAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "previousSibling", V8ComputedAccessibleNode::PreviousSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "nextSibling", V8ComputedAccessibleNode::NextSiblingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ComputedAccessibleNodeMethods[] = {
    {"ensureUpToDate", V8ComputedAccessibleNode::EnsureUpToDateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ComputedAccessibleNodeTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ComputedAccessibleNode::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ComputedAccessibleNode::kInternalFieldCount);

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
      signature, kV8ComputedAccessibleNodeAccessors, base::size(kV8ComputedAccessibleNodeAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ComputedAccessibleNodeMethods, base::size(kV8ComputedAccessibleNodeMethods));

  // Custom signature

  V8ComputedAccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ComputedAccessibleNode::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ComputedAccessibleNode::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ComputedAccessibleNode::GetWrapperTypeInfo()),
      InstallV8ComputedAccessibleNodeTemplate);
}

bool V8ComputedAccessibleNode::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ComputedAccessibleNode::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ComputedAccessibleNode::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ComputedAccessibleNode::GetWrapperTypeInfo(), v8_value);
}

ComputedAccessibleNode* V8ComputedAccessibleNode::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ComputedAccessibleNode* NativeValueTraits<ComputedAccessibleNode>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ComputedAccessibleNode* native_value = V8ComputedAccessibleNode::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ComputedAccessibleNode"));
  }
  return native_value;
}

}  // namespace blink
