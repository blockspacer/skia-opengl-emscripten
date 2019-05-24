// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_data_pipe_options.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_data_pipe_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_message_pipe_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_create_shared_buffer_result.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_mojo_handle.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
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
const WrapperTypeInfo v8_mojo_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Mojo::DomTemplate,
    nullptr,
    "Mojo",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Mojo.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Mojo::wrapper_type_info_ = v8_mojo_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Mojo>::value,
    "Mojo inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Mojo::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Mojo is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace mojo_v8_internal {

static void CreateMessagePipeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  MojoCreateMessagePipeResult* result = Mojo::createMessagePipe();
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void CreateDataPipeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Mojo", "createDataPipe");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MojoCreateDataPipeOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<MojoCreateDataPipeOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  MojoCreateDataPipeResult* result = Mojo::createDataPipe(options);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void CreateSharedBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Mojo", "createSharedBuffer");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t num_bytes;
  num_bytes = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  MojoCreateSharedBufferResult* result = Mojo::createSharedBuffer(num_bytes);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void BindInterfaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Mojo", "bindInterface");

  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> interface_name;
  MojoHandle* request_handle;
  V8StringResource<> scope;
  interface_name = info[0];
  if (!interface_name.Prepare())
    return;

  request_handle = V8MojoHandle::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!request_handle) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'MojoHandle'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    scope = info[2];
    if (!scope.Prepare())
      return;
    const char* kValidScopeValues[] = {
        "context",
        "process",
    };
    if (!IsValidEnum(scope, kValidScopeValues, base::size(kValidScopeValues), "MojoScope", exception_state)) {
      return;
    }
  } else {
    scope = "context";
  }

  Mojo::bindInterface(script_state, interface_name, request_handle, scope);
}

static void GetDocumentInterfaceBrokerHandleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  MojoHandle* result = Mojo::getDocumentInterfaceBrokerHandle(script_state);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void ReplaceDocumentInterfaceBrokerForTestingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("replaceDocumentInterfaceBrokerForTesting", "Mojo", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  MojoHandle* test_broker_handle;
  test_broker_handle = V8MojoHandle::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!test_broker_handle) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("replaceDocumentInterfaceBrokerForTesting", "Mojo", "parameter 1 is not of type 'MojoHandle'."));
    return;
  }

  MojoHandle* result = Mojo::replaceDocumentInterfaceBrokerForTesting(script_state, test_broker_handle);
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

}  // namespace mojo_v8_internal

void V8Mojo::CreateMessagePipeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_createMessagePipe");

  mojo_v8_internal::CreateMessagePipeMethod(info);
}

void V8Mojo::CreateDataPipeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_createDataPipe");

  mojo_v8_internal::CreateDataPipeMethod(info);
}

void V8Mojo::CreateSharedBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_createSharedBuffer");

  mojo_v8_internal::CreateSharedBufferMethod(info);
}

void V8Mojo::BindInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_bindInterface");

  mojo_v8_internal::BindInterfaceMethod(info);
}

void V8Mojo::GetDocumentInterfaceBrokerHandleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_getDocumentInterfaceBrokerHandle");

  mojo_v8_internal::GetDocumentInterfaceBrokerHandleMethod(info);
}

void V8Mojo::ReplaceDocumentInterfaceBrokerForTestingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Mojo_replaceDocumentInterfaceBrokerForTesting");

  mojo_v8_internal::ReplaceDocumentInterfaceBrokerForTestingMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8MojoMethods[] = {
    {"createMessagePipe", V8Mojo::CreateMessagePipeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDataPipe", V8Mojo::CreateDataPipeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSharedBuffer", V8Mojo::CreateSharedBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindInterface", V8Mojo::BindInterfaceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDocumentInterfaceBrokerHandle", V8Mojo::GetDocumentInterfaceBrokerHandleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceDocumentInterfaceBrokerForTesting", V8Mojo::ReplaceDocumentInterfaceBrokerForTestingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8MojoTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Mojo::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Mojo::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"RESULT_OK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
        {"RESULT_CANCELLED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(1)},
        {"RESULT_UNKNOWN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(2)},
        {"RESULT_INVALID_ARGUMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(3)},
        {"RESULT_DEADLINE_EXCEEDED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(4)},
        {"RESULT_NOT_FOUND", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(5)},
        {"RESULT_ALREADY_EXISTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(6)},
        {"RESULT_PERMISSION_DENIED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(7)},
        {"RESULT_RESOURCE_EXHAUSTED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(8)},
        {"RESULT_FAILED_PRECONDITION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(9)},
        {"RESULT_ABORTED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(10)},
        {"RESULT_OUT_OF_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(11)},
        {"RESULT_UNIMPLEMENTED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(12)},
        {"RESULT_INTERNAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(13)},
        {"RESULT_UNAVAILABLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(14)},
        {"RESULT_DATA_LOSS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(15)},
        {"RESULT_BUSY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(16)},
        {"RESULT_SHOULD_WAIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(17)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == Mojo::kResultOk, "the value of Mojo_kResultOk does not match with implementation");
  static_assert(1 == Mojo::kResultCancelled, "the value of Mojo_kResultCancelled does not match with implementation");
  static_assert(2 == Mojo::kResultUnknown, "the value of Mojo_kResultUnknown does not match with implementation");
  static_assert(3 == Mojo::kResultInvalidArgument, "the value of Mojo_kResultInvalidArgument does not match with implementation");
  static_assert(4 == Mojo::kResultDeadlineExceeded, "the value of Mojo_kResultDeadlineExceeded does not match with implementation");
  static_assert(5 == Mojo::kResultNotFound, "the value of Mojo_kResultNotFound does not match with implementation");
  static_assert(6 == Mojo::kResultAlreadyExists, "the value of Mojo_kResultAlreadyExists does not match with implementation");
  static_assert(7 == Mojo::kResultPermissionDenied, "the value of Mojo_kResultPermissionDenied does not match with implementation");
  static_assert(8 == Mojo::kResultResourceExhausted, "the value of Mojo_kResultResourceExhausted does not match with implementation");
  static_assert(9 == Mojo::kResultFailedPrecondition, "the value of Mojo_kResultFailedPrecondition does not match with implementation");
  static_assert(10 == Mojo::kResultAborted, "the value of Mojo_kResultAborted does not match with implementation");
  static_assert(11 == Mojo::kResultOutOfRange, "the value of Mojo_kResultOutOfRange does not match with implementation");
  static_assert(12 == Mojo::kResultUnimplemented, "the value of Mojo_kResultUnimplemented does not match with implementation");
  static_assert(13 == Mojo::kResultInternal, "the value of Mojo_kResultInternal does not match with implementation");
  static_assert(14 == Mojo::kResultUnavailable, "the value of Mojo_kResultUnavailable does not match with implementation");
  static_assert(15 == Mojo::kResultDataLoss, "the value of Mojo_kResultDataLoss does not match with implementation");
  static_assert(16 == Mojo::kResultBusy, "the value of Mojo_kResultBusy does not match with implementation");
  static_assert(17 == Mojo::kResultShouldWait, "the value of Mojo_kResultShouldWait does not match with implementation");
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8MojoMethods, base::size(kV8MojoMethods));

  // Custom signature

  V8Mojo::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8Mojo::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Mojo::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Mojo::GetWrapperTypeInfo()),
      InstallV8MojoTemplate);
}

bool V8Mojo::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Mojo::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Mojo::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Mojo::GetWrapperTypeInfo(), v8_value);
}

Mojo* V8Mojo::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Mojo* NativeValueTraits<Mojo>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Mojo* native_value = V8Mojo::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Mojo"));
  }
  return native_value;
}

}  // namespace blink
