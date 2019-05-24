// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_websocket.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_websocket_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebSocket::DomTemplate,
    nullptr,
    "WebSocket",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMWebSocket.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMWebSocket::wrapper_type_info_ = v8_websocket_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, DOMWebSocket>::value,
    "DOMWebSocket does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&DOMWebSocket::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMWebSocket is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_websocket_v8_internal {

static void UrlAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValueString(info, impl->url(), info.GetIsolate());
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->readyState());
}

static void BufferedAmountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->bufferedAmount()));
}

static void OnopenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onopen()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnopenAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnopen(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onerror()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnerrorAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnerror(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kOnErrorEventHandler));
}

static void OncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onclose()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OncloseAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnclose(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void ExtensionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValueString(info, impl->extensions(), info.GetIsolate());
}

static void ProtocolAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValueString(info, impl->protocol(), info.GetIsolate());
}

static void OnmessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onmessage()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnmessageAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnmessage(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void BinaryTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  V8SetReturnValueString(info, impl->binaryType(), info.GetIsolate());
}

static void BinaryTypeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  DOMWebSocket* impl = V8WebSocket::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "WebSocket", "binaryType");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "blob",
      "arraybuffer",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "BinaryType", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setBinaryType(cpp_value);
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "close");

  DOMWebSocket* impl = V8WebSocket::ToImpl(info.Holder());

  uint16_t code;
  V8StringResource<> reason;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    impl->close(exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  code = NativeValueTraits<IDLUnsignedShortClamp>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    impl->close(code, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    return;
  }
  reason = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->close(code, reason, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Send1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "send");

  DOMWebSocket* impl = V8WebSocket::ToImpl(info.Holder());

  V8StringResource<> data;
  data = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->send(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Send2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "send");

  DOMWebSocket* impl = V8WebSocket::ToImpl(info.Holder());

  Blob* data;
  data = V8Blob::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Blob'.");
    return;
  }

  impl->send(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Send3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "send");

  DOMWebSocket* impl = V8WebSocket::ToImpl(info.Holder());

  DOMArrayBuffer* data;
  data = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ArrayBuffer'.");
    return;
  }

  impl->send(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void Send4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "send");

  DOMWebSocket* impl = V8WebSocket::ToImpl(info.Holder());

  NotShared<DOMArrayBufferView> data;
  data = ToNotShared<NotShared<DOMArrayBufferView>>(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->send(data, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SendMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(1, info.Length())) {
    case 1:
      if (V8Blob::HasInstance(info[0], info.GetIsolate())) {
        Send2Method(info);
        return;
      }
      if (info[0]->IsArrayBuffer()) {
        Send3Method(info);
        return;
      }
      if (info[0]->IsArrayBufferView()) {
        Send4Method(info);
        return;
      }
      if (true) {
        Send1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebSocket", "send");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "WebSocket");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> url;
  StringOrStringSequence protocols;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  url = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (UNLIKELY(num_args_passed <= 1)) {
    ExecutionContext* execution_context = ToExecutionContext(
        info.NewTarget().As<v8::Object>()->CreationContext());
    DOMWebSocket* impl = DOMWebSocket::Create(execution_context, url, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8WebSocket::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8StringOrStringSequence::ToImpl(info.GetIsolate(), info[1], protocols, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  DOMWebSocket* impl = DOMWebSocket::Create(execution_context, url, protocols, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8WebSocket::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("WebSocket"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  dom_websocket_v8_internal::Constructor(info);
}

}  // namespace dom_websocket_v8_internal

void V8WebSocket::UrlAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_url_Getter");

  dom_websocket_v8_internal::UrlAttributeGetter(info);
}

void V8WebSocket::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_readyState_Getter");

  dom_websocket_v8_internal::ReadyStateAttributeGetter(info);
}

void V8WebSocket::BufferedAmountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_bufferedAmount_Getter");

  dom_websocket_v8_internal::BufferedAmountAttributeGetter(info);
}

void V8WebSocket::OnopenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onopen_Getter");

  dom_websocket_v8_internal::OnopenAttributeGetter(info);
}

void V8WebSocket::OnopenAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onopen_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_websocket_v8_internal::OnopenAttributeSetter(v8_value, info);
}

void V8WebSocket::OnerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onerror_Getter");

  dom_websocket_v8_internal::OnerrorAttributeGetter(info);
}

void V8WebSocket::OnerrorAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onerror_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_websocket_v8_internal::OnerrorAttributeSetter(v8_value, info);
}

void V8WebSocket::OncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onclose_Getter");

  dom_websocket_v8_internal::OncloseAttributeGetter(info);
}

void V8WebSocket::OncloseAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onclose_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_websocket_v8_internal::OncloseAttributeSetter(v8_value, info);
}

void V8WebSocket::ExtensionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_extensions_Getter");

  dom_websocket_v8_internal::ExtensionsAttributeGetter(info);
}

void V8WebSocket::ProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_protocol_Getter");

  dom_websocket_v8_internal::ProtocolAttributeGetter(info);
}

void V8WebSocket::OnmessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onmessage_Getter");

  dom_websocket_v8_internal::OnmessageAttributeGetter(info);
}

void V8WebSocket::OnmessageAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_onmessage_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_websocket_v8_internal::OnmessageAttributeSetter(v8_value, info);
}

void V8WebSocket::BinaryTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_binaryType_Getter");

  dom_websocket_v8_internal::BinaryTypeAttributeGetter(info);
}

void V8WebSocket::BinaryTypeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_binaryType_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  dom_websocket_v8_internal::BinaryTypeAttributeSetter(v8_value, info);
}

void V8WebSocket::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_close");

  dom_websocket_v8_internal::CloseMethod(info);
}

void V8WebSocket::SendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWebSocket_send");

  dom_websocket_v8_internal::SendMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WebSocketAccessors[] = {
    { "url", V8WebSocket::UrlAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8WebSocket::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "bufferedAmount", V8WebSocket::BufferedAmountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onopen", V8WebSocket::OnopenAttributeGetterCallback, V8WebSocket::OnopenAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onerror", V8WebSocket::OnerrorAttributeGetterCallback, V8WebSocket::OnerrorAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onclose", V8WebSocket::OncloseAttributeGetterCallback, V8WebSocket::OncloseAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "extensions", V8WebSocket::ExtensionsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "protocol", V8WebSocket::ProtocolAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onmessage", V8WebSocket::OnmessageAttributeGetterCallback, V8WebSocket::OnmessageAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "binaryType", V8WebSocket::BinaryTypeAttributeGetterCallback, V8WebSocket::BinaryTypeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebSocketMethods[] = {
    {"close", V8WebSocket::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"send", V8WebSocket::SendMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebSocketTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebSocket::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8WebSocket::kInternalFieldCount);
  interface_template->SetCallHandler(dom_websocket_v8_internal::ConstructorCallback);
  interface_template->SetLength(1);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"CONNECTING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"OPEN", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"CLOSING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"CLOSED", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == DOMWebSocket::kConnecting, "the value of DOMWebSocket_kConnecting does not match with implementation");
  static_assert(1 == DOMWebSocket::kOpen, "the value of DOMWebSocket_kOpen does not match with implementation");
  static_assert(2 == DOMWebSocket::kClosing, "the value of DOMWebSocket_kClosing does not match with implementation");
  static_assert(3 == DOMWebSocket::kClosed, "the value of DOMWebSocket_kClosed does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebSocketAccessors, base::size(kV8WebSocketAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebSocketMethods, base::size(kV8WebSocketMethods));

  // Custom signature

  V8WebSocket::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebSocket::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8WebSocket::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebSocket::GetWrapperTypeInfo()),
      InstallV8WebSocketTemplate);
}

bool V8WebSocket::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebSocket::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebSocket::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebSocket::GetWrapperTypeInfo(), v8_value);
}

DOMWebSocket* V8WebSocket::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMWebSocket* NativeValueTraits<DOMWebSocket>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMWebSocket* native_value = V8WebSocket::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebSocket"));
  }
  return native_value;
}

}  // namespace blink
