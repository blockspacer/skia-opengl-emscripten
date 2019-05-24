// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_cell_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
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
const WrapperTypeInfo v8_html_table_cell_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLTableCellElement::DomTemplate,
    nullptr,
    "HTMLTableCellElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableCellElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableCellElement::wrapper_type_info_ = v8_html_table_cell_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLTableCellElement>::value,
    "HTMLTableCellElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLTableCellElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLTableCellElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_table_cell_element_v8_internal {

static void ColSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->colSpan());
}

static void ColSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableCellElement", "colSpan");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setColSpan(cpp_value);
}

static void RowSpanAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->rowSpan());
}

static void RowSpanAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableCellElement", "rowSpan");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRowSpan(cpp_value);
}

static void HeadersAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHeadersAttr), info.GetIsolate());
}

static void HeadersAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHeadersAttr, cpp_value);
}

static void CellIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueInt(info, impl->cellIndex());
}

static void AlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlignAttr), info.GetIsolate());
}

static void AlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlignAttr, cpp_value);
}

static void AxisAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAxisAttr), info.GetIsolate());
}

static void AxisAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAxisAttr, cpp_value);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHeightAttr), info.GetIsolate());
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHeightAttr, cpp_value);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWidthAttr), info.GetIsolate());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kWidthAttr, cpp_value);
}

static void ChAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCharAttr), info.GetIsolate());
}

static void ChAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCharAttr, cpp_value);
}

static void ChOffAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCharoffAttr), info.GetIsolate());
}

static void ChOffAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCharoffAttr, cpp_value);
}

static void NoWrapAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kNowrapAttr));
}

static void NoWrapAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableCellElement", "noWrap");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kNowrapAttr, cpp_value);
}

static void VAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kValignAttr), info.GetIsolate());
}

static void VAlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kValignAttr, cpp_value);
}

static void BgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBgcolorAttr), info.GetIsolate());
}

static void BgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBgcolorAttr, cpp_value);
}

static void AbbrAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAbbrAttr), info.GetIsolate());
}

static void AbbrAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAbbrAttr, cpp_value);
}

static void ScopeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kScopeAttr));

  if (cpp_value.IsEmpty()) {
    ;
  } else if (EqualIgnoringASCIICase(cpp_value, "row")) {
    cpp_value = "row";
  } else if (EqualIgnoringASCIICase(cpp_value, "col")) {
    cpp_value = "col";
  } else if (EqualIgnoringASCIICase(cpp_value, "rowgroup")) {
    cpp_value = "rowgroup";
  } else if (EqualIgnoringASCIICase(cpp_value, "colgroup")) {
    cpp_value = "colgroup";
  } else {
    cpp_value = "";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void ScopeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableCellElement* impl = V8HTMLTableCellElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kScopeAttr, cpp_value);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLTableCellElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLTableCellElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLTableCellElement);
}

}  // namespace html_table_cell_element_v8_internal

void V8HTMLTableCellElement::ColSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_colSpan_Getter");

  html_table_cell_element_v8_internal::ColSpanAttributeGetter(info);
}

void V8HTMLTableCellElement::ColSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_colSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::ColSpanAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::RowSpanAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_rowSpan_Getter");

  html_table_cell_element_v8_internal::RowSpanAttributeGetter(info);
}

void V8HTMLTableCellElement::RowSpanAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_rowSpan_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::RowSpanAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::HeadersAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_headers_Getter");

  html_table_cell_element_v8_internal::HeadersAttributeGetter(info);
}

void V8HTMLTableCellElement::HeadersAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_headers_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::HeadersAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::CellIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_cellIndex_Getter");

  html_table_cell_element_v8_internal::CellIndexAttributeGetter(info);
}

void V8HTMLTableCellElement::AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_align_Getter");

  html_table_cell_element_v8_internal::AlignAttributeGetter(info);
}

void V8HTMLTableCellElement::AlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_align_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::AlignAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::AxisAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_axis_Getter");

  html_table_cell_element_v8_internal::AxisAttributeGetter(info);
}

void V8HTMLTableCellElement::AxisAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_axis_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::AxisAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_height_Getter");

  html_table_cell_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLTableCellElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_width_Getter");

  html_table_cell_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLTableCellElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::ChAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_ch_Getter");

  html_table_cell_element_v8_internal::ChAttributeGetter(info);
}

void V8HTMLTableCellElement::ChAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_ch_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::ChAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::ChOffAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_chOff_Getter");

  html_table_cell_element_v8_internal::ChOffAttributeGetter(info);
}

void V8HTMLTableCellElement::ChOffAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_chOff_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::ChOffAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::NoWrapAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_noWrap_Getter");

  html_table_cell_element_v8_internal::NoWrapAttributeGetter(info);
}

void V8HTMLTableCellElement::NoWrapAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_noWrap_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::NoWrapAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::VAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_vAlign_Getter");

  html_table_cell_element_v8_internal::VAlignAttributeGetter(info);
}

void V8HTMLTableCellElement::VAlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_vAlign_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::VAlignAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::BgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_bgColor_Getter");

  html_table_cell_element_v8_internal::BgColorAttributeGetter(info);
}

void V8HTMLTableCellElement::BgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_bgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::BgColorAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::AbbrAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_abbr_Getter");

  html_table_cell_element_v8_internal::AbbrAttributeGetter(info);
}

void V8HTMLTableCellElement::AbbrAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_abbr_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::AbbrAttributeSetter(v8_value, info);
}

void V8HTMLTableCellElement::ScopeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_scope_Getter");

  html_table_cell_element_v8_internal::ScopeAttributeGetter(info);
}

void V8HTMLTableCellElement::ScopeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableCellElement_scope_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_cell_element_v8_internal::ScopeAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLTableCellElementAccessors[] = {
    { "colSpan", V8HTMLTableCellElement::ColSpanAttributeGetterCallback, V8HTMLTableCellElement::ColSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rowSpan", V8HTMLTableCellElement::RowSpanAttributeGetterCallback, V8HTMLTableCellElement::RowSpanAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "headers", V8HTMLTableCellElement::HeadersAttributeGetterCallback, V8HTMLTableCellElement::HeadersAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cellIndex", V8HTMLTableCellElement::CellIndexAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLTableCellElement::AlignAttributeGetterCallback, V8HTMLTableCellElement::AlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "axis", V8HTMLTableCellElement::AxisAttributeGetterCallback, V8HTMLTableCellElement::AxisAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLTableCellElement::HeightAttributeGetterCallback, V8HTMLTableCellElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLTableCellElement::WidthAttributeGetterCallback, V8HTMLTableCellElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ch", V8HTMLTableCellElement::ChAttributeGetterCallback, V8HTMLTableCellElement::ChAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "chOff", V8HTMLTableCellElement::ChOffAttributeGetterCallback, V8HTMLTableCellElement::ChOffAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "noWrap", V8HTMLTableCellElement::NoWrapAttributeGetterCallback, V8HTMLTableCellElement::NoWrapAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "vAlign", V8HTMLTableCellElement::VAlignAttributeGetterCallback, V8HTMLTableCellElement::VAlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8HTMLTableCellElement::BgColorAttributeGetterCallback, V8HTMLTableCellElement::BgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "abbr", V8HTMLTableCellElement::AbbrAttributeGetterCallback, V8HTMLTableCellElement::AbbrAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scope", V8HTMLTableCellElement::ScopeAttributeGetterCallback, V8HTMLTableCellElement::ScopeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8HTMLTableCellElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLTableCellElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLTableCellElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_table_cell_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLTableCellElementAccessors, base::size(kV8HTMLTableCellElementAccessors));

  // Custom signature

  V8HTMLTableCellElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLTableCellElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLTableCellElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLTableCellElement::GetWrapperTypeInfo()),
      InstallV8HTMLTableCellElementTemplate);
}

bool V8HTMLTableCellElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLTableCellElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLTableCellElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLTableCellElement::GetWrapperTypeInfo(), v8_value);
}

HTMLTableCellElement* V8HTMLTableCellElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLTableCellElement* NativeValueTraits<HTMLTableCellElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLTableCellElement* native_value = V8HTMLTableCellElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLTableCellElement"));
  }
  return native_value;
}

}  // namespace blink
