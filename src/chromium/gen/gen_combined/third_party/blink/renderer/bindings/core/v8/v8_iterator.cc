// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_iterator_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Iterator::DomTemplate,
    nullptr,
    "Iterator",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Iterator.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Iterator::wrapper_type_info_ = v8_iterator_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Iterator>::value,
    "Iterator inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Iterator::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Iterator is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace iterator_v8_internal {

static void NextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Iterator", "next");

  Iterator* impl = V8Iterator::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue value;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptValue result = impl->next(script_state, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  value = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptValue result = impl->next(script_state, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace iterator_v8_internal

void V8Iterator::NextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Iterator_next");

  iterator_v8_internal::NextMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8IteratorMethods[] = {
    {"next", V8Iterator::NextMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8IteratorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Iterator::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Iterator::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8IteratorMethods, base::size(kV8IteratorMethods));

  // The WebIDL spec says when an interface has pair iterators the iterators it
  // returns must be instances of the "default iterator object" whose
  // [[Prototype]] points to an "iterator prototype object" whose
  // [[Prototype]], on its turn, points to %IteratorPrototype%. next() must be
  // implemented in the "iterator prototype object", while %IteratorPrototype%
  // provides @@iterator.
  // References:
  // https://heycam.github.io/webidl/#es-default-iterator-object
  // https://heycam.github.io/webidl/#es-iterator-prototype-object
  //
  // The iterators we return from interfaces that have pair interators adhere
  // to the above by:
  // - Adding the "next()" property to its prototype object.
  // - Making the prototype object inherit from %IteratorPrototype% with the
  //   hack below, which creates another function template with no prototype
  //   and sets the "prototype" property of its function object.
  //   When |interface_template|'s function object is created, its
  //   prototype.__proto__ will point to the value of the "prototype" property
  //   of |intrinsic_iterator_prototype_interface_template|, which is exactly
  //   what we want.
  //
  // Finally, creating a FunctionTemplate here might look expensive since they
  // have the same lifetime as their context, but:
  // - |interface_template| is cached in V8PerIsolateData, so we create only one
  //   FunctionTemplate per interface.
  // - There is only one Iterator interface that creates this FunctionTemplate,
  //   so there is no need to reuse this FunctionTemplate and register it in
  //   V8PerIsolateData.
  v8::Local<v8::FunctionTemplate> intrinsic_iterator_prototype_interface_template =
      v8::FunctionTemplate::New(isolate);
  intrinsic_iterator_prototype_interface_template->RemovePrototype();
  intrinsic_iterator_prototype_interface_template->SetIntrinsicDataProperty(
      V8AtomicString(isolate, "prototype"), v8::kIteratorPrototype);
  interface_template->Inherit(intrinsic_iterator_prototype_interface_template);

  // Custom signature

  V8Iterator::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Iterator::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Iterator::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Iterator::GetWrapperTypeInfo()),
      InstallV8IteratorTemplate);
}

bool V8Iterator::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Iterator::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Iterator::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Iterator::GetWrapperTypeInfo(), v8_value);
}

Iterator* V8Iterator::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Iterator* NativeValueTraits<Iterator>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Iterator* native_value = V8Iterator::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Iterator"));
  }
  return native_value;
}

}  // namespace blink
