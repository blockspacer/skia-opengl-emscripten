// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream_default_controller.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
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
const WrapperTypeInfo v8_readable_stream_default_controller_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ReadableStreamDefaultController::DomTemplate,
    nullptr,
    "ReadableStreamDefaultController",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ReadableStreamDefaultController.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ReadableStreamDefaultController::wrapper_type_info_ = v8_readable_stream_default_controller_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ReadableStreamDefaultController>::value,
    "ReadableStreamDefaultController inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ReadableStreamDefaultController::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ReadableStreamDefaultController is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace readable_stream_default_controller_v8_internal {

static void DesiredSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ReadableStreamDefaultController* impl = V8ReadableStreamDefaultController::ToImpl(holder);

  bool is_null = false;

  double cpp_value(impl->desiredSize(is_null));

  if (is_null) {
    V8SetReturnValueNull(info);
    return;
  }

  V8SetReturnValue(info, cpp_value);
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ReadableStreamDefaultController", "close");

  ReadableStreamDefaultController* impl = V8ReadableStreamDefaultController::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->close(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EnqueueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ReadableStreamDefaultController", "enqueue");

  ReadableStreamDefaultController* impl = V8ReadableStreamDefaultController::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue chunk;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->enqueue(script_state, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  chunk = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  impl->enqueue(script_state, chunk, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ErrorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ReadableStreamDefaultController* impl = V8ReadableStreamDefaultController::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue e;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->error(script_state);
    return;
  }
  e = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  impl->error(script_state, e);
}

}  // namespace readable_stream_default_controller_v8_internal

void V8ReadableStreamDefaultController::DesiredSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultController_desiredSize_Getter");

  readable_stream_default_controller_v8_internal::DesiredSizeAttributeGetter(info);
}

void V8ReadableStreamDefaultController::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultController_close");

  readable_stream_default_controller_v8_internal::CloseMethod(info);
}

void V8ReadableStreamDefaultController::EnqueueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultController_enqueue");

  readable_stream_default_controller_v8_internal::EnqueueMethod(info);
}

void V8ReadableStreamDefaultController::ErrorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ReadableStreamDefaultController_error");

  readable_stream_default_controller_v8_internal::ErrorMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ReadableStreamDefaultControllerAccessors[] = {
    { "desiredSize", V8ReadableStreamDefaultController::DesiredSizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ReadableStreamDefaultControllerMethods[] = {
    {"close", V8ReadableStreamDefaultController::CloseMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enqueue", V8ReadableStreamDefaultController::EnqueueMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"error", V8ReadableStreamDefaultController::ErrorMethodCallback, 0, static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ReadableStreamDefaultControllerTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ReadableStreamDefaultController::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ReadableStreamDefaultController::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ReadableStreamDefaultControllerAccessors, base::size(kV8ReadableStreamDefaultControllerAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ReadableStreamDefaultControllerMethods, base::size(kV8ReadableStreamDefaultControllerMethods));

  // Custom signature

  V8ReadableStreamDefaultController::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ReadableStreamDefaultController::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ReadableStreamDefaultController::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ReadableStreamDefaultController::GetWrapperTypeInfo()),
      InstallV8ReadableStreamDefaultControllerTemplate);
}

bool V8ReadableStreamDefaultController::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ReadableStreamDefaultController::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ReadableStreamDefaultController::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ReadableStreamDefaultController::GetWrapperTypeInfo(), v8_value);
}

ReadableStreamDefaultController* V8ReadableStreamDefaultController::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ReadableStreamDefaultController* NativeValueTraits<ReadableStreamDefaultController>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ReadableStreamDefaultController* native_value = V8ReadableStreamDefaultController::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ReadableStreamDefaultController"));
  }
  return native_value;
}

}  // namespace blink
