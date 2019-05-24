// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_collection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_caption_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_row_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_table_section_element.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/dom/class_collection.h"
#include "third_party/blink/renderer/core/dom/tag_collection.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_form_controls_collection.h"
#include "third_party/blink/renderer/core/html/html_collection.h"
#include "third_party/blink/renderer/core/html/html_table_rows_collection.h"
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
const WrapperTypeInfo v8_html_table_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLTableElement::DomTemplate,
    nullptr,
    "HTMLTableElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableElement::wrapper_type_info_ = v8_html_table_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLTableElement>::value,
    "HTMLTableElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLTableElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLTableElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_table_element_v8_internal {

static void CaptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->caption()), impl);
}

static void CaptionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableElement", "caption");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  HTMLTableCaptionElement* cpp_value = V8HTMLTableCaptionElement::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'HTMLTableCaptionElement'.");
    return;
  }

  impl->setCaption(cpp_value, exception_state);
}

static void THeadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->tHead()), impl);
}

static void THeadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableElement", "tHead");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  HTMLTableSectionElement* cpp_value = V8HTMLTableSectionElement::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'HTMLTableSectionElement'.");
    return;
  }

  impl->setTHead(cpp_value, exception_state);
}

static void TFootAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->tFoot()), impl);
}

static void TFootAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLTableElement", "tFoot");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  HTMLTableSectionElement* cpp_value = V8HTMLTableSectionElement::ToImplWithTypeCheck(info.GetIsolate(), v8_value);

  // Type check per: http://heycam.github.io/webidl/#es-interface
  if (!cpp_value && !IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("The provided value is not of type 'HTMLTableSectionElement'.");
    return;
  }

  impl->setTFoot(cpp_value, exception_state);
}

static void TBodiesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->tBodies()), impl);
}

static void RowsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->rows()), impl);
}

static void AlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kAlignAttr), info.GetIsolate());
}

static void AlignAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAlignAttr, cpp_value);
}

static void BorderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBorderAttr), info.GetIsolate());
}

static void BorderAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBorderAttr, cpp_value);
}

static void FrameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kFrameAttr), info.GetIsolate());
}

static void FrameAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kFrameAttr, cpp_value);
}

static void RulesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kRulesAttr), info.GetIsolate());
}

static void RulesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRulesAttr, cpp_value);
}

static void SummaryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kSummaryAttr), info.GetIsolate());
}

static void SummaryAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kSummaryAttr, cpp_value);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kWidthAttr), info.GetIsolate());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kWidthAttr, cpp_value);
}

static void BgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kBgcolorAttr), info.GetIsolate());
}

static void BgColorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kBgcolorAttr, cpp_value);
}

static void CellPaddingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCellpaddingAttr), info.GetIsolate());
}

static void CellPaddingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCellpaddingAttr, cpp_value);
}

static void CellSpacingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCellspacingAttr), info.GetIsolate());
}

static void CellSpacingAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAsEmptyString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCellspacingAttr, cpp_value);
}

static void CreateCaptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createCaption(), impl);
}

static void DeleteCaptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  impl->deleteCaption();
}

static void CreateTHeadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createTHead(), impl);
}

static void DeleteTHeadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  impl->deleteTHead();
}

static void CreateTFootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createTFoot(), impl);
}

static void DeleteTFootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  impl->deleteTFoot();
}

static void CreateTBodyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  V8SetReturnValueFast(info, impl->createTBody(), impl);
}

static void InsertRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTableElement", "insertRow");
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  int32_t index;
  if (!info[0]->IsUndefined()) {
    index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    index = -1;
  }

  HTMLTableRowElement* result = impl->insertRow(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void DeleteRowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLTableElement", "deleteRow");
  CEReactionsScope ce_reactions_scope;

  HTMLTableElement* impl = V8HTMLTableElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t index;
  index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->deleteRow(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLTableElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLTableElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLTableElement);
}

}  // namespace html_table_element_v8_internal

void V8HTMLTableElement::CaptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_caption_Getter");

  html_table_element_v8_internal::CaptionAttributeGetter(info);
}

void V8HTMLTableElement::CaptionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_caption_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::CaptionAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::THeadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_tHead_Getter");

  html_table_element_v8_internal::THeadAttributeGetter(info);
}

void V8HTMLTableElement::THeadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_tHead_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::THeadAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::TFootAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_tFoot_Getter");

  html_table_element_v8_internal::TFootAttributeGetter(info);
}

void V8HTMLTableElement::TFootAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_tFoot_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::TFootAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::TBodiesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_tBodies_Getter");

  html_table_element_v8_internal::TBodiesAttributeGetter(info);
}

void V8HTMLTableElement::RowsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_rows_Getter");

  html_table_element_v8_internal::RowsAttributeGetter(info);
}

void V8HTMLTableElement::AlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_align_Getter");

  html_table_element_v8_internal::AlignAttributeGetter(info);
}

void V8HTMLTableElement::AlignAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_align_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::AlignAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::BorderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_border_Getter");

  html_table_element_v8_internal::BorderAttributeGetter(info);
}

void V8HTMLTableElement::BorderAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_border_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::BorderAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::FrameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_frame_Getter");

  html_table_element_v8_internal::FrameAttributeGetter(info);
}

void V8HTMLTableElement::FrameAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_frame_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::FrameAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::RulesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_rules_Getter");

  html_table_element_v8_internal::RulesAttributeGetter(info);
}

void V8HTMLTableElement::RulesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_rules_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::RulesAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::SummaryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_summary_Getter");

  html_table_element_v8_internal::SummaryAttributeGetter(info);
}

void V8HTMLTableElement::SummaryAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_summary_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::SummaryAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_width_Getter");

  html_table_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLTableElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::BgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_bgColor_Getter");

  html_table_element_v8_internal::BgColorAttributeGetter(info);
}

void V8HTMLTableElement::BgColorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_bgColor_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::BgColorAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::CellPaddingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_cellPadding_Getter");

  html_table_element_v8_internal::CellPaddingAttributeGetter(info);
}

void V8HTMLTableElement::CellPaddingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_cellPadding_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::CellPaddingAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::CellSpacingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_cellSpacing_Getter");

  html_table_element_v8_internal::CellSpacingAttributeGetter(info);
}

void V8HTMLTableElement::CellSpacingAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_cellSpacing_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_table_element_v8_internal::CellSpacingAttributeSetter(v8_value, info);
}

void V8HTMLTableElement::CreateCaptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_createCaption");

  html_table_element_v8_internal::CreateCaptionMethod(info);
}

void V8HTMLTableElement::DeleteCaptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_deleteCaption");

  html_table_element_v8_internal::DeleteCaptionMethod(info);
}

void V8HTMLTableElement::CreateTHeadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_createTHead");

  html_table_element_v8_internal::CreateTHeadMethod(info);
}

void V8HTMLTableElement::DeleteTHeadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_deleteTHead");

  html_table_element_v8_internal::DeleteTHeadMethod(info);
}

void V8HTMLTableElement::CreateTFootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_createTFoot");

  html_table_element_v8_internal::CreateTFootMethod(info);
}

void V8HTMLTableElement::DeleteTFootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_deleteTFoot");

  html_table_element_v8_internal::DeleteTFootMethod(info);
}

void V8HTMLTableElement::CreateTBodyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_createTBody");

  html_table_element_v8_internal::CreateTBodyMethod(info);
}

void V8HTMLTableElement::InsertRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_insertRow");

  html_table_element_v8_internal::InsertRowMethod(info);
}

void V8HTMLTableElement::DeleteRowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLTableElement_deleteRow");

  html_table_element_v8_internal::DeleteRowMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLTableElementAccessors[] = {
    { "caption", V8HTMLTableElement::CaptionAttributeGetterCallback, V8HTMLTableElement::CaptionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "tHead", V8HTMLTableElement::THeadAttributeGetterCallback, V8HTMLTableElement::THeadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "tFoot", V8HTMLTableElement::TFootAttributeGetterCallback, V8HTMLTableElement::TFootAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "tBodies", V8HTMLTableElement::TBodiesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rows", V8HTMLTableElement::RowsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "align", V8HTMLTableElement::AlignAttributeGetterCallback, V8HTMLTableElement::AlignAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "border", V8HTMLTableElement::BorderAttributeGetterCallback, V8HTMLTableElement::BorderAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "frame", V8HTMLTableElement::FrameAttributeGetterCallback, V8HTMLTableElement::FrameAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rules", V8HTMLTableElement::RulesAttributeGetterCallback, V8HTMLTableElement::RulesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "summary", V8HTMLTableElement::SummaryAttributeGetterCallback, V8HTMLTableElement::SummaryAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8HTMLTableElement::WidthAttributeGetterCallback, V8HTMLTableElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bgColor", V8HTMLTableElement::BgColorAttributeGetterCallback, V8HTMLTableElement::BgColorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cellPadding", V8HTMLTableElement::CellPaddingAttributeGetterCallback, V8HTMLTableElement::CellPaddingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cellSpacing", V8HTMLTableElement::CellSpacingAttributeGetterCallback, V8HTMLTableElement::CellSpacingAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLTableElementMethods[] = {
    {"createCaption", V8HTMLTableElement::CreateCaptionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteCaption", V8HTMLTableElement::DeleteCaptionMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTHead", V8HTMLTableElement::CreateTHeadMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTHead", V8HTMLTableElement::DeleteTHeadMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTFoot", V8HTMLTableElement::CreateTFootMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTFoot", V8HTMLTableElement::DeleteTFootMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTBody", V8HTMLTableElement::CreateTBodyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertRow", V8HTMLTableElement::InsertRowMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRow", V8HTMLTableElement::DeleteRowMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HTMLTableElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLTableElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLTableElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_table_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLTableElementAccessors, base::size(kV8HTMLTableElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLTableElementMethods, base::size(kV8HTMLTableElementMethods));

  // Custom signature

  V8HTMLTableElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLTableElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8HTMLTableElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLTableElement::GetWrapperTypeInfo()),
      InstallV8HTMLTableElementTemplate);
}

bool V8HTMLTableElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLTableElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLTableElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLTableElement::GetWrapperTypeInfo(), v8_value);
}

HTMLTableElement* V8HTMLTableElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLTableElement* NativeValueTraits<HTMLTableElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLTableElement* native_value = V8HTMLTableElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLTableElement"));
  }
  return native_value;
}

}  // namespace blink
