// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_array.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_css_numeric_array_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSSNumericArray::DomTemplate,
    nullptr,
    "CSSNumericArray",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CSSNumericArray.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CSSNumericArray::wrapper_type_info_ = v8_css_numeric_array_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CSSNumericArray>::value,
    "CSSNumericArray inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CSSNumericArray::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CSSNumericArray is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace css_numeric_array_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  CSSNumericArray* impl = V8CSSNumericArray::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  CSSNumericArray* impl = V8CSSNumericArray::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  CSSNumericValue* result = impl->AnonymousIndexedGetter(index);
  V8SetReturnValueFast(info, result, impl);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8CSSNumericArray::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

}  // namespace css_numeric_array_v8_internal

void V8CSSNumericArray::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericArray_length_Getter");

  css_numeric_array_v8_internal::LengthAttributeGetter(info);
}

void V8CSSNumericArray::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CSSNumericArray_IndexedPropertyGetter");

  css_numeric_array_v8_internal::IndexedPropertyGetter(index, info);
}

void V8CSSNumericArray::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  css_numeric_array_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8CSSNumericArray::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "CSSNumericArray");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8CSSNumericArray::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "CSSNumericArray");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8CSSNumericArrayAccessors[] = {
    { "length", V8CSSNumericArray::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8CSSNumericArrayTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSSNumericArray::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CSSNumericArray::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSNumericArrayAccessors, base::size(kV8CSSNumericArrayAccessors));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8CSSNumericArray::IndexedPropertyGetterCallback,
      V8CSSNumericArray::IndexedPropertySetterCallback,
      V8CSSNumericArray::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<CSSNumericArray>,
      V8CSSNumericArray::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
  // For value iterators, the properties below must originally be set to the corresponding ones in %ArrayPrototype%.
  // See https://heycam.github.io/webidl/#es-iterators.
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "entries"), v8::kArrayProto_entries);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "forEach"), v8::kArrayProto_forEach);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "keys"), v8::kArrayProto_keys);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "values"), v8::kArrayProto_values);

  // Custom signature

  V8CSSNumericArray::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CSSNumericArray::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8CSSNumericArray::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSSNumericArray::GetWrapperTypeInfo()),
      InstallV8CSSNumericArrayTemplate);
}

bool V8CSSNumericArray::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSSNumericArray::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSSNumericArray::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSSNumericArray::GetWrapperTypeInfo(), v8_value);
}

CSSNumericArray* V8CSSNumericArray::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CSSNumericArray* NativeValueTraits<CSSNumericArray>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CSSNumericArray* native_value = V8CSSNumericArray::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSSNumericArray"));
  }
  return native_value;
}

}  // namespace blink
