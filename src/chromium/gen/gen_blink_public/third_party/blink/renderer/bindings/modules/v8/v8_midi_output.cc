// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_midi_output.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
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
const WrapperTypeInfo v8_midi_output_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8MIDIOutput::DomTemplate,
    nullptr,
    "MIDIOutput",
    V8MIDIPort::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MIDIOutput.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& MIDIOutput::wrapper_type_info_ = v8_midi_output_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, MIDIOutput>::value,
    "MIDIOutput does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&MIDIOutput::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "MIDIOutput is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace midi_output_v8_internal {

static void Send1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");

  MIDIOutput* impl = V8MIDIOutput::ToImpl(info.Holder());

  NotShared<DOMUint8Array> data;
  double timestamp;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  data = ToNotShared<NotShared<DOMUint8Array>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Uint8Array'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->send(data, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  timestamp = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->send(data, timestamp, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Send2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");

  MIDIOutput* impl = V8MIDIOutput::ToImpl(info.Holder());

  Vector<uint32_t> data;
  double timestamp;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  data = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->send(data, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  timestamp = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->send(data, timestamp, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (info[0]->IsUint8Array()) {
        Send1Method(info);
        return;
      }
      if (info[0]->IsArray()) {
        Send2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "MIDIOutput", "send");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exception_state)) {
          Send2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 2:
      if (info[0]->IsUint8Array()) {
        Send1Method(info);
        return;
      }
      if (info[0]->IsArray()) {
        Send2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "MIDIOutput", "send");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[0], exception_state)) {
          Send2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "MIDIOutput", "send");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

}  // namespace midi_output_v8_internal

void V8MIDIOutput::SendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_MIDIOutput_send");

  midi_output_v8_internal::SendMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8MIDIOutputMethods[] = {
    {"send", V8MIDIOutput::SendMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MIDIOutputTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8MIDIOutput::GetWrapperTypeInfo()->interface_name, V8MIDIPort::DomTemplate(isolate, world), V8MIDIOutput::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MIDIOutputMethods, base::size(kV8MIDIOutputMethods));

  // Custom signature

  V8MIDIOutput::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8MIDIOutput::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8MIDIOutput::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8MIDIOutput::GetWrapperTypeInfo()),
      InstallV8MIDIOutputTemplate);
}

bool V8MIDIOutput::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8MIDIOutput::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8MIDIOutput::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8MIDIOutput::GetWrapperTypeInfo(), v8_value);
}

MIDIOutput* V8MIDIOutput::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

MIDIOutput* NativeValueTraits<MIDIOutput>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MIDIOutput* native_value = V8MIDIOutput::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "MIDIOutput"));
  }
  return native_value;
}

}  // namespace blink
