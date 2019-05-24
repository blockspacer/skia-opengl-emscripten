// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_link_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_style_sheet.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
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
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_html_link_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLLinkElement::DomTemplate,
    nullptr,
    "HTMLLinkElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLLinkElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLLinkElement::wrapper_type_info_ = v8_html_link_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, HTMLLinkElement>::value,
    "HTMLLinkElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&HTMLLinkElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLLinkElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_link_element_v8_internal {

static void DisabledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kDisabledAttr));
}

static void DisabledAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLLinkElement", "disabled");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kDisabledAttr, cpp_value);
}

static void HrefAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->GetURLAttribute(html_names::kHrefAttr, result);

  V8SetReturnValue(info, result);
}

static void HrefAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLLinkElement", "href");

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kHrefAttr, cpp_value, exception_state);
}

static void CrossOriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kCrossoriginAttr));

  if (cpp_value.IsNull()) {
    ;
  } else if (cpp_value.IsEmpty()) {
    cpp_value = "anonymous";
  } else if (EqualIgnoringASCIICase(cpp_value, "anonymous")) {
    cpp_value = "anonymous";
  } else if (EqualIgnoringASCIICase(cpp_value, "use-credentials")) {
    cpp_value = "use-credentials";
  } else {
    cpp_value = "anonymous";
  }

  V8SetReturnValueStringOrNull(info, cpp_value, info.GetIsolate());
}

static void CrossOriginAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCrossoriginAttr, cpp_value);
}

static void RelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kRelAttr), info.GetIsolate());
}

static void RelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRelAttr, cpp_value);
}

static void RelListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->relList()), impl);
}

static void RelListAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => relList.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLLinkElement", "relList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "relList"))
      .ToLocal(&target)) {
    return;
  }
  if (!target->IsObject()) {
    exception_state.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(
          isolate->GetCurrentContext(),
          V8AtomicString(isolate, "value"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void MediaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kMediaAttr), info.GetIsolate());
}

static void MediaAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kMediaAttr, cpp_value);
}

static void HreflangAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kHreflangAttr), info.GetIsolate());
}

static void HreflangAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kHreflangAttr, cpp_value);
}

static void TypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTypeAttr), info.GetIsolate());
}

static void TypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTypeAttr, cpp_value);
}

static void AsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kAsAttr));

  if (cpp_value.IsEmpty()) {
    ;
  } else if (EqualIgnoringASCIICase(cpp_value, "script")) {
    cpp_value = "script";
  } else if (EqualIgnoringASCIICase(cpp_value, "style")) {
    cpp_value = "style";
  } else if (EqualIgnoringASCIICase(cpp_value, "image")) {
    cpp_value = "image";
  } else if (EqualIgnoringASCIICase(cpp_value, "track")) {
    cpp_value = "track";
  } else if (EqualIgnoringASCIICase(cpp_value, "font")) {
    cpp_value = "font";
  } else if (EqualIgnoringASCIICase(cpp_value, "fetch")) {
    cpp_value = "fetch";
  } else {
    cpp_value = "";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void AsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kAsAttr, cpp_value);
}

static void ReferrerPolicyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kReferrerpolicyAttr));

  if (cpp_value.IsEmpty()) {
    ;
  } else if (EqualIgnoringASCIICase(cpp_value, "")) {
    cpp_value = "";
  } else if (EqualIgnoringASCIICase(cpp_value, "no-referrer")) {
    cpp_value = "no-referrer";
  } else if (EqualIgnoringASCIICase(cpp_value, "origin")) {
    cpp_value = "origin";
  } else if (EqualIgnoringASCIICase(cpp_value, "no-referrer-when-downgrade")) {
    cpp_value = "no-referrer-when-downgrade";
  } else if (EqualIgnoringASCIICase(cpp_value, "origin-when-cross-origin")) {
    cpp_value = "origin-when-cross-origin";
  } else if (EqualIgnoringASCIICase(cpp_value, "unsafe-url")) {
    cpp_value = "unsafe-url";
  } else {
    cpp_value = "";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void ReferrerPolicyAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kReferrerpolicyAttr, cpp_value);
}

static void SizesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->sizes()), impl);
}

static void SizesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => sizes.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLLinkElement", "sizes");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "sizes"))
      .ToLocal(&target)) {
    return;
  }
  if (!target->IsObject()) {
    exception_state.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(
          isolate->GetCurrentContext(),
          V8AtomicString(isolate, "value"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void ImportanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kImportanceAttr));

  if (cpp_value.IsEmpty()) {
    cpp_value = "auto";
  } else if (EqualIgnoringASCIICase(cpp_value, "low")) {
    cpp_value = "low";
  } else if (EqualIgnoringASCIICase(cpp_value, "auto")) {
    cpp_value = "auto";
  } else if (EqualIgnoringASCIICase(cpp_value, "high")) {
    cpp_value = "high";
  } else {
    cpp_value = "auto";
  }

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void ImportanceAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kImportanceAttr, cpp_value);
}

static void ImageSrcsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kImagesrcsetAttr), info.GetIsolate());
}

static void ImageSrcsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kImagesrcsetAttr, cpp_value);
}

static void ImageSizesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kImagesizesAttr), info.GetIsolate());
}

static void ImageSizesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kImagesizesAttr, cpp_value);
}

static void CharsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kCharsetAttr), info.GetIsolate());
}

static void CharsetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCharsetAttr, cpp_value);
}

static void RevAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kRevAttr), info.GetIsolate());
}

static void RevAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kRevAttr, cpp_value);
}

static void TargetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kTargetAttr), info.GetIsolate());
}

static void TargetAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kTargetAttr, cpp_value);
}

static void SheetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->sheet()), impl);
}

static void ImportAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->import()), impl);
}

static void IntegrityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kIntegrityAttr), info.GetIsolate());
}

static void IntegrityAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLLinkElement* impl = V8HTMLLinkElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kIntegrityAttr, cpp_value);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLLinkElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLLinkElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLLinkElement);
}

}  // namespace html_link_element_v8_internal

void V8HTMLLinkElement::DisabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_disabled_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLLinkElement_Disabled_AttributeGetter);

  html_link_element_v8_internal::DisabledAttributeGetter(info);
}

void V8HTMLLinkElement::DisabledAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_disabled_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLLinkElement_Disabled_AttributeSetter);

  html_link_element_v8_internal::DisabledAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::HrefAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_href_Getter");

  html_link_element_v8_internal::HrefAttributeGetter(info);
}

void V8HTMLLinkElement::HrefAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_href_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::HrefAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::CrossOriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_crossOrigin_Getter");

  html_link_element_v8_internal::CrossOriginAttributeGetter(info);
}

void V8HTMLLinkElement::CrossOriginAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_crossOrigin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::CrossOriginAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::RelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_rel_Getter");

  html_link_element_v8_internal::RelAttributeGetter(info);
}

void V8HTMLLinkElement::RelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_rel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::RelAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::RelListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_relList_Getter");

  html_link_element_v8_internal::RelListAttributeGetter(info);
}

void V8HTMLLinkElement::RelListAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_relList_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::RelListAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::MediaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_media_Getter");

  html_link_element_v8_internal::MediaAttributeGetter(info);
}

void V8HTMLLinkElement::MediaAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_media_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::MediaAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::HreflangAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_hreflang_Getter");

  html_link_element_v8_internal::HreflangAttributeGetter(info);
}

void V8HTMLLinkElement::HreflangAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_hreflang_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::HreflangAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::TypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_type_Getter");

  html_link_element_v8_internal::TypeAttributeGetter(info);
}

void V8HTMLLinkElement::TypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_type_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::TypeAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::AsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_as_Getter");

  html_link_element_v8_internal::AsAttributeGetter(info);
}

void V8HTMLLinkElement::AsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_as_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::AsAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::ReferrerPolicyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_referrerPolicy_Getter");

  html_link_element_v8_internal::ReferrerPolicyAttributeGetter(info);
}

void V8HTMLLinkElement::ReferrerPolicyAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_referrerPolicy_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::ReferrerPolicyAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::SizesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_sizes_Getter");

  html_link_element_v8_internal::SizesAttributeGetter(info);
}

void V8HTMLLinkElement::SizesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_sizes_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::SizesAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::ImportanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_importance_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPriorityHints);

  html_link_element_v8_internal::ImportanceAttributeGetter(info);
}

void V8HTMLLinkElement::ImportanceAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_importance_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPriorityHints);

  html_link_element_v8_internal::ImportanceAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::ImageSrcsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_imageSrcset_Getter");

  html_link_element_v8_internal::ImageSrcsetAttributeGetter(info);
}

void V8HTMLLinkElement::ImageSrcsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_imageSrcset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::ImageSrcsetAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::ImageSizesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_imageSizes_Getter");

  html_link_element_v8_internal::ImageSizesAttributeGetter(info);
}

void V8HTMLLinkElement::ImageSizesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_imageSizes_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::ImageSizesAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::CharsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_charset_Getter");

  html_link_element_v8_internal::CharsetAttributeGetter(info);
}

void V8HTMLLinkElement::CharsetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_charset_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::CharsetAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::RevAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_rev_Getter");

  html_link_element_v8_internal::RevAttributeGetter(info);
}

void V8HTMLLinkElement::RevAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_rev_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::RevAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::TargetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_target_Getter");

  html_link_element_v8_internal::TargetAttributeGetter(info);
}

void V8HTMLLinkElement::TargetAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_target_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::TargetAttributeSetter(v8_value, info);
}

void V8HTMLLinkElement::SheetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_sheet_Getter");

  html_link_element_v8_internal::SheetAttributeGetter(info);
}

void V8HTMLLinkElement::ImportAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_import_Getter");

  html_link_element_v8_internal::ImportAttributeGetter(info);
}

void V8HTMLLinkElement::IntegrityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_integrity_Getter");

  html_link_element_v8_internal::IntegrityAttributeGetter(info);
}

void V8HTMLLinkElement::IntegrityAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLLinkElement_integrity_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_link_element_v8_internal::IntegrityAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLLinkElementAccessors[] = {
    { "disabled", V8HTMLLinkElement::DisabledAttributeGetterCallback, V8HTMLLinkElement::DisabledAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "href", V8HTMLLinkElement::HrefAttributeGetterCallback, V8HTMLLinkElement::HrefAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "crossOrigin", V8HTMLLinkElement::CrossOriginAttributeGetterCallback, V8HTMLLinkElement::CrossOriginAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rel", V8HTMLLinkElement::RelAttributeGetterCallback, V8HTMLLinkElement::RelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "relList", V8HTMLLinkElement::RelListAttributeGetterCallback, V8HTMLLinkElement::RelListAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "media", V8HTMLLinkElement::MediaAttributeGetterCallback, V8HTMLLinkElement::MediaAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "hreflang", V8HTMLLinkElement::HreflangAttributeGetterCallback, V8HTMLLinkElement::HreflangAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "type", V8HTMLLinkElement::TypeAttributeGetterCallback, V8HTMLLinkElement::TypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "as", V8HTMLLinkElement::AsAttributeGetterCallback, V8HTMLLinkElement::AsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "referrerPolicy", V8HTMLLinkElement::ReferrerPolicyAttributeGetterCallback, V8HTMLLinkElement::ReferrerPolicyAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sizes", V8HTMLLinkElement::SizesAttributeGetterCallback, V8HTMLLinkElement::SizesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageSrcset", V8HTMLLinkElement::ImageSrcsetAttributeGetterCallback, V8HTMLLinkElement::ImageSrcsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "imageSizes", V8HTMLLinkElement::ImageSizesAttributeGetterCallback, V8HTMLLinkElement::ImageSizesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "charset", V8HTMLLinkElement::CharsetAttributeGetterCallback, V8HTMLLinkElement::CharsetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "rev", V8HTMLLinkElement::RevAttributeGetterCallback, V8HTMLLinkElement::RevAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "target", V8HTMLLinkElement::TargetAttributeGetterCallback, V8HTMLLinkElement::TargetAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sheet", V8HTMLLinkElement::SheetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "integrity", V8HTMLLinkElement::IntegrityAttributeGetterCallback, V8HTMLLinkElement::IntegrityAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8HTMLLinkElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLLinkElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLLinkElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_link_element_v8_internal::ConstructorCallback);
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
      signature, kV8HTMLLinkElementAccessors, base::size(kV8HTMLLinkElementAccessors));

  // Custom signature

  V8HTMLLinkElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLLinkElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

void V8HTMLLinkElement::InstallHTMLImports(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8HTMLLinkElement::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kimportConfigurations[] = {
      { "import", V8HTMLLinkElement::ImportAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kimportConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8HTMLLinkElement::InstallHTMLImports(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8HTMLLinkElement::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8HTMLLinkElement::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallHTMLImports(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8HTMLLinkElement::InstallHTMLImports(ScriptState* script_state) {
  InstallHTMLImports(script_state, v8::Local<v8::Object>());
}

void V8HTMLLinkElement::InstallPriorityHints(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8HTMLLinkElement::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  static constexpr V8DOMConfiguration::AccessorConfiguration
  kimportanceConfigurations[] = {
      { "importance", V8HTMLLinkElement::ImportanceAttributeGetterCallback, V8HTMLLinkElement::ImportanceAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds }
  };
  for (const auto& config : kimportanceConfigurations) {
    V8DOMConfiguration::InstallAccessor(isolate, world, instance, prototype,
                                        interface, signature, config);
  }
}

void V8HTMLLinkElement::InstallPriorityHints(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8HTMLLinkElement::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8HTMLLinkElement::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallPriorityHints(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8HTMLLinkElement::InstallPriorityHints(ScriptState* script_state) {
  InstallPriorityHints(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8HTMLLinkElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLLinkElement::GetWrapperTypeInfo()),
      InstallV8HTMLLinkElementTemplate);
}

bool V8HTMLLinkElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLLinkElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLLinkElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLLinkElement::GetWrapperTypeInfo(), v8_value);
}

HTMLLinkElement* V8HTMLLinkElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLLinkElement* NativeValueTraits<HTMLLinkElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLLinkElement* native_value = V8HTMLLinkElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLLinkElement"));
  }
  return native_value;
}

}  // namespace blink
