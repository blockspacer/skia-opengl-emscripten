// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/js_event_handler.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_void_function.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_answer_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_dtmf_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_error_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_sctp_transport.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description_callback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_session_description_init.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_rtc_peer_connection_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCPeerConnection::DomTemplate,
    nullptr,
    "RTCPeerConnection",
    V8EventTarget::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCPeerConnection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCPeerConnection::wrapper_type_info_ = v8_rtc_peer_connection_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, RTCPeerConnection>::value,
    "RTCPeerConnection does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&RTCPeerConnection::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCPeerConnection is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_peer_connection_v8_internal {

static void LocalDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->localDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#localDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CurrentLocalDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->currentLocalDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#currentLocalDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PendingLocalDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->pendingLocalDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#pendingLocalDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RemoteDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->remoteDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#remoteDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void CurrentRemoteDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->currentRemoteDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#currentRemoteDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void PendingRemoteDescriptionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSessionDescription* cpp_value(WTF::GetPtr(impl->pendingRemoteDescription()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#pendingRemoteDescription")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void SignalingStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->signalingState(), info.GetIsolate());
}

static void IceGatheringStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->iceGatheringState(), info.GetIsolate());
}

static void IceConnectionStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->iceConnectionState(), info.GetIsolate());
}

static void ConnectionStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  V8SetReturnValueString(info, impl->connectionState(), info.GetIsolate());
}

static void OnnegotiationneededAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onnegotiationneeded()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnnegotiationneededAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnnegotiationneeded(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnicecandidateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onicecandidate()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnicecandidateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnicecandidate(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnsignalingstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onsignalingstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnsignalingstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnsignalingstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OniceconnectionstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->oniceconnectionstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OniceconnectionstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOniceconnectionstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnconnectionstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onconnectionstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnconnectionstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnconnectionstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnicegatheringstatechangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onicegatheringstatechange()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnicegatheringstatechangeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnicegatheringstatechange(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OntrackAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->ontrack()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OntrackAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOntrack(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void SctpAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  RTCSctpTransport* cpp_value(WTF::GetPtr(impl->sctp()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCPeerConnection#sctp")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void OndatachannelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->ondatachannel()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OndatachannelAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOndatachannel(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnaddstreamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onaddstream()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnaddstreamAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnaddstream(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void OnremovestreamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  EventListener* cpp_value(WTF::GetPtr(impl->onremovestream()));

  V8SetReturnValue(info, JSEventHandler::AsV8Value(info.GetIsolate(), impl, cpp_value));
}

static void OnremovestreamAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(holder);

  // Prepare the value to be set.

  impl->setOnremovestream(JSEventHandler::CreateOrNull(v8_value, JSEventHandler::HandlerType::kEventHandler));
}

static void CreateOffer1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCOfferOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<RTCOfferOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->createOffer(script_state, options);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateAnswer1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCAnswerOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<RTCAnswerOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->createAnswer(script_state, options);
  V8SetReturnValue(info, result.V8Value());
}

static void SetLocalDescription1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit* description;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  description = NativeValueTraits<RTCSessionDescriptionInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->setLocalDescription(script_state, description);
  V8SetReturnValue(info, result.V8Value());
}

static void SetRemoteDescription1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit* description;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  description = NativeValueTraits<RTCSessionDescriptionInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->setRemoteDescription(script_state, description);
  V8SetReturnValue(info, result.V8Value());
}

static void AddIceCandidate1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCIceCandidateInitOrRTCIceCandidate candidate;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(info.GetIsolate(), info[0], candidate, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->addIceCandidate(script_state, candidate, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void GetConfigurationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCConfiguration* result = impl->getConfiguration(script_state);
  V8SetReturnValue(info, result);
}

static void SetConfigurationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setConfiguration");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCConfiguration* configuration;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('configuration') is not an object.");
    return;
  }
  configuration = NativeValueTraits<RTCConfiguration>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setConfiguration(script_state, configuration, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CloseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  impl->close();
}

static void CreateOffer2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8RTCSessionDescriptionCallback* success_callback;
  V8RTCPeerConnectionErrorCallback* failure_callback;
  Dictionary rtc_offer_options;
  if (info[0]->IsFunction()) {
    success_callback = V8RTCSessionDescriptionCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (info[1]->IsFunction()) {
    failure_callback = V8RTCPeerConnectionErrorCallback::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('rtcOfferOptions') is not an object.");
    return;
  }
  rtc_offer_options = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->createOffer(script_state, success_callback, failure_callback, rtc_offer_options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void CreateOfferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        CreateOffer1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        CreateOffer1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateOffer2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        CreateOffer2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createOffer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CreateAnswer2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  V8RTCSessionDescriptionCallback* success_callback;
  V8RTCPeerConnectionErrorCallback* failure_callback;
  Dictionary media_constraints;
  if (info[0]->IsFunction()) {
    success_callback = V8RTCSessionDescriptionCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  if (info[1]->IsFunction()) {
    failure_callback = V8RTCPeerConnectionErrorCallback::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (!info[2]->IsNullOrUndefined() && !info[2]->IsObject()) {
    exception_state.ThrowTypeError("parameter 3 ('mediaConstraints') is not an object.");
    return;
  }
  media_constraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->createAnswer(script_state, success_callback, failure_callback, media_constraints);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateAnswerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 0:
      if (true) {
        CreateAnswer1Method(info);
        return;
      }
      break;
    case 1:
      if (true) {
        CreateAnswer1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        CreateAnswer2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        CreateAnswer2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createAnswer");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetLocalDescription2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit* description;
  V8VoidFunction* success_callback;
  V8RTCPeerConnectionErrorCallback* failure_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  description = NativeValueTraits<RTCSessionDescriptionInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    success_callback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 2)) {
    ScriptPromise result = impl->setLocalDescription(script_state, description, success_callback);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    failure_callback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    failure_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->setLocalDescription(script_state, description, success_callback, failure_callback);
  V8SetReturnValue(info, result.V8Value());
}

static void SetLocalDescriptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        SetLocalDescription1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        SetLocalDescription2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        SetLocalDescription2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setLocalDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetRemoteDescription2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCSessionDescriptionInit* description;
  V8VoidFunction* success_callback;
  V8RTCPeerConnectionErrorCallback* failure_callback;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('description') is not an object.");
    return;
  }
  description = NativeValueTraits<RTCSessionDescriptionInit>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    success_callback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 2)) {
    ScriptPromise result = impl->setRemoteDescription(script_state, description, success_callback);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  if (info[2]->IsFunction()) {
    failure_callback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else if (info[2]->IsNullOrUndefined()) {
    failure_callback = nullptr;
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->setRemoteDescription(script_state, description, success_callback, failure_callback);
  V8SetReturnValue(info, result.V8Value());
}

static void SetRemoteDescriptionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        SetRemoteDescription1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        SetRemoteDescription2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        SetRemoteDescription2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "setRemoteDescription");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void AddIceCandidate2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  RTCIceCandidateInitOrRTCIceCandidate candidate;
  V8VoidFunction* success_callback;
  V8RTCPeerConnectionErrorCallback* failure_callback;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(info.GetIsolate(), info[0], candidate, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (info[1]->IsFunction()) {
    success_callback = V8VoidFunction::Create(info[1].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 2 is not a function.");
    return;
  }

  if (info[2]->IsFunction()) {
    failure_callback = V8RTCPeerConnectionErrorCallback::Create(info[2].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 3 is not a function.");
    return;
  }

  ScriptPromise result = impl->addIceCandidate(script_state, candidate, success_callback, failure_callback, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void AddIceCandidateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kRTCPeerConnectionAddIceCandidatePromise);
        AddIceCandidate1Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
        UseCounter::Count(execution_context_for_measurement, WebFeature::kRTCPeerConnectionAddIceCandidateLegacy);
        AddIceCandidate2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addIceCandidate");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 3]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void GetStatsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "getStats");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8RTCPeerConnection::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptValue callback_or_selector;
  ScriptValue legacy_selector;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    ScriptPromise result = impl->getStats(script_state);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  callback_or_selector = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (UNLIKELY(num_args_passed <= 1)) {
    ScriptPromise result = impl->getStats(script_state, callback_or_selector);
    V8SetReturnValue(info, result.V8Value());
    return;
  }
  legacy_selector = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  ScriptPromise result = impl->getStats(script_state, callback_or_selector, legacy_selector);
  V8SetReturnValue(info, result.V8Value());
}

static void GetTransceiversMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getTransceivers(), info.Holder(), info.GetIsolate()));
}

static void GetSendersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getSenders(), info.Holder(), info.GetIsolate()));
}

static void GetReceiversMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getReceivers(), info.Holder(), info.GetIsolate()));
}

static void AddTransceiverMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addTransceiver");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrackOrString track_or_kind;
  RTCRtpTransceiverInit* init;
  V8MediaStreamTrackOrString::ToImpl(info.GetIsolate(), info[0], track_or_kind, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('init') is not an object.");
    return;
  }
  init = NativeValueTraits<RTCRtpTransceiverInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  RTCRtpTransceiver* result = impl->addTransceiver(track_or_kind, init, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void AddTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addTrack");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  HeapVector<Member<MediaStream>> streams;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  for (int i = 1; i < info.Length(); ++i) {
    if (!V8MediaStream::HasInstance(info[i], info.GetIsolate())) {
      exception_state.ThrowTypeError("parameter 2 is not of type 'MediaStream'.");
      return;
    }
    streams.push_back(V8MediaStream::ToImpl(v8::Local<v8::Object>::Cast(info[i])));
  }

  RTCRtpSender* result = impl->addTrack(track, streams, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void RemoveTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "removeTrack");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  RTCRtpSender* sender;
  sender = V8RTCRtpSender::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sender) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'RTCRtpSender'.");
    return;
  }

  impl->removeTrack(sender, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CreateDataChannelMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createDataChannel");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> label;
  RTCDataChannelInit* data_channel_dict;
  label = NativeValueTraits<IDLUSVString>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('dataChannelDict') is not an object.");
    return;
  }
  data_channel_dict = NativeValueTraits<RTCDataChannelInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  RTCDataChannel* result = impl->createDataChannel(script_state, label, data_channel_dict, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GenerateCertificateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "generateCertificate");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DictionaryOrString keygen_algorithm;
  V8DictionaryOrString::ToImpl(info.GetIsolate(), info[0], keygen_algorithm, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = RTCPeerConnection::generateCertificate(script_state, keygen_algorithm, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void GetLocalStreamsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getLocalStreams(), info.Holder(), info.GetIsolate()));
}

static void GetRemoteStreamsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getRemoteStreams(), info.Holder(), info.GetIsolate()));
}

static void AddStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "addStream");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStream* stream;
  Dictionary media_constraints;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStream'.");
    return;
  }

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('mediaConstraints') is not an object.");
    return;
  }
  media_constraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->addStream(script_state, stream, media_constraints, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RemoveStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "removeStream");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStream* stream;
  stream = V8MediaStream::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!stream) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStream'.");
    return;
  }

  impl->removeStream(stream, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CreateDTMFSenderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCPeerConnection", "createDTMFSender");

  RTCPeerConnection* impl = V8RTCPeerConnection::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  MediaStreamTrack* track;
  track = V8MediaStreamTrack::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!track) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'MediaStreamTrack'.");
    return;
  }

  RTCDTMFSender* result = impl->createDTMFSender(track, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "RTCPeerConnection");

  RTCConfiguration* configuration;
  Dictionary media_constraints;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('configuration') is not an object.");
    return;
  }
  configuration = NativeValueTraits<RTCConfiguration>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('mediaConstraints') is not an object.");
    return;
  }
  media_constraints = NativeValueTraits<Dictionary>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  RTCPeerConnection* impl = RTCPeerConnection::Create(execution_context, configuration, media_constraints, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8RTCPeerConnection::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

MODULES_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("RTCPeerConnection"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  rtc_peer_connection_v8_internal::Constructor(info);
}

}  // namespace rtc_peer_connection_v8_internal

void V8RTCPeerConnection::LocalDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_localDescription_Getter");

  rtc_peer_connection_v8_internal::LocalDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::CurrentLocalDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_currentLocalDescription_Getter");

  rtc_peer_connection_v8_internal::CurrentLocalDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::PendingLocalDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_pendingLocalDescription_Getter");

  rtc_peer_connection_v8_internal::PendingLocalDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::RemoteDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_remoteDescription_Getter");

  rtc_peer_connection_v8_internal::RemoteDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::CurrentRemoteDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_currentRemoteDescription_Getter");

  rtc_peer_connection_v8_internal::CurrentRemoteDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::PendingRemoteDescriptionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_pendingRemoteDescription_Getter");

  rtc_peer_connection_v8_internal::PendingRemoteDescriptionAttributeGetter(info);
}

void V8RTCPeerConnection::SignalingStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_signalingState_Getter");

  rtc_peer_connection_v8_internal::SignalingStateAttributeGetter(info);
}

void V8RTCPeerConnection::IceGatheringStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_iceGatheringState_Getter");

  rtc_peer_connection_v8_internal::IceGatheringStateAttributeGetter(info);
}

void V8RTCPeerConnection::IceConnectionStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_iceConnectionState_Getter");

  rtc_peer_connection_v8_internal::IceConnectionStateAttributeGetter(info);
}

void V8RTCPeerConnection::ConnectionStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_connectionState_Getter");

  rtc_peer_connection_v8_internal::ConnectionStateAttributeGetter(info);
}

void V8RTCPeerConnection::OnnegotiationneededAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onnegotiationneeded_Getter");

  rtc_peer_connection_v8_internal::OnnegotiationneededAttributeGetter(info);
}

void V8RTCPeerConnection::OnnegotiationneededAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onnegotiationneeded_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnnegotiationneededAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnicecandidateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicecandidate_Getter");

  rtc_peer_connection_v8_internal::OnicecandidateAttributeGetter(info);
}

void V8RTCPeerConnection::OnicecandidateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicecandidate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnicecandidateAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnsignalingstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onsignalingstatechange_Getter");

  rtc_peer_connection_v8_internal::OnsignalingstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::OnsignalingstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onsignalingstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnsignalingstatechangeAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OniceconnectionstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_oniceconnectionstatechange_Getter");

  rtc_peer_connection_v8_internal::OniceconnectionstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::OniceconnectionstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_oniceconnectionstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OniceconnectionstatechangeAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnconnectionstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onconnectionstatechange_Getter");

  rtc_peer_connection_v8_internal::OnconnectionstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::OnconnectionstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onconnectionstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnconnectionstatechangeAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnicegatheringstatechangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicegatheringstatechange_Getter");

  rtc_peer_connection_v8_internal::OnicegatheringstatechangeAttributeGetter(info);
}

void V8RTCPeerConnection::OnicegatheringstatechangeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onicegatheringstatechange_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnicegatheringstatechangeAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OntrackAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ontrack_Getter");

  rtc_peer_connection_v8_internal::OntrackAttributeGetter(info);
}

void V8RTCPeerConnection::OntrackAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ontrack_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OntrackAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::SctpAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_sctp_Getter");

  rtc_peer_connection_v8_internal::SctpAttributeGetter(info);
}

void V8RTCPeerConnection::OndatachannelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ondatachannel_Getter");

  rtc_peer_connection_v8_internal::OndatachannelAttributeGetter(info);
}

void V8RTCPeerConnection::OndatachannelAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_ondatachannel_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OndatachannelAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnaddstreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onaddstream_Getter");

  rtc_peer_connection_v8_internal::OnaddstreamAttributeGetter(info);
}

void V8RTCPeerConnection::OnaddstreamAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onaddstream_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnaddstreamAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::OnremovestreamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onremovestream_Getter");

  rtc_peer_connection_v8_internal::OnremovestreamAttributeGetter(info);
}

void V8RTCPeerConnection::OnremovestreamAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_onremovestream_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  rtc_peer_connection_v8_internal::OnremovestreamAttributeSetter(v8_value, info);
}

void V8RTCPeerConnection::GetConfigurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getConfiguration");

  rtc_peer_connection_v8_internal::GetConfigurationMethod(info);
}

void V8RTCPeerConnection::SetConfigurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setConfiguration");

  rtc_peer_connection_v8_internal::SetConfigurationMethod(info);
}

void V8RTCPeerConnection::CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_close");

  rtc_peer_connection_v8_internal::CloseMethod(info);
}

void V8RTCPeerConnection::CreateOfferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createOffer");

  rtc_peer_connection_v8_internal::CreateOfferMethod(info);
}

void V8RTCPeerConnection::CreateAnswerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createAnswer");

  rtc_peer_connection_v8_internal::CreateAnswerMethod(info);
}

void V8RTCPeerConnection::SetLocalDescriptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setLocalDescription");

  rtc_peer_connection_v8_internal::SetLocalDescriptionMethod(info);
}

void V8RTCPeerConnection::SetRemoteDescriptionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_setRemoteDescription");

  rtc_peer_connection_v8_internal::SetRemoteDescriptionMethod(info);
}

void V8RTCPeerConnection::AddIceCandidateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addIceCandidate");

  rtc_peer_connection_v8_internal::AddIceCandidateMethod(info);
}

void V8RTCPeerConnection::GetStatsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getStats");

  rtc_peer_connection_v8_internal::GetStatsMethod(info);
}

void V8RTCPeerConnection::GetTransceiversMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getTransceivers");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_GetTransceivers_Method);
  rtc_peer_connection_v8_internal::GetTransceiversMethod(info);
}

void V8RTCPeerConnection::GetSendersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getSenders");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_GetSenders_Method);
  rtc_peer_connection_v8_internal::GetSendersMethod(info);
}

void V8RTCPeerConnection::GetReceiversMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getReceivers");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_GetReceivers_Method);
  rtc_peer_connection_v8_internal::GetReceiversMethod(info);
}

void V8RTCPeerConnection::AddTransceiverMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addTransceiver");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_AddTransceiver_Method);
  rtc_peer_connection_v8_internal::AddTransceiverMethod(info);
}

void V8RTCPeerConnection::AddTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addTrack");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_AddTrack_Method);
  rtc_peer_connection_v8_internal::AddTrackMethod(info);
}

void V8RTCPeerConnection::RemoveTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_removeTrack");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_RemoveTrack_Method);
  rtc_peer_connection_v8_internal::RemoveTrackMethod(info);
}

void V8RTCPeerConnection::CreateDataChannelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createDataChannel");

  rtc_peer_connection_v8_internal::CreateDataChannelMethod(info);
}

void V8RTCPeerConnection::GenerateCertificateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_generateCertificate");

  rtc_peer_connection_v8_internal::GenerateCertificateMethod(info);
}

void V8RTCPeerConnection::GetLocalStreamsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getLocalStreams");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_GetLocalStreams_Method);
  rtc_peer_connection_v8_internal::GetLocalStreamsMethod(info);
}

void V8RTCPeerConnection::GetRemoteStreamsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_getRemoteStreams");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_GetRemoteStreams_Method);
  rtc_peer_connection_v8_internal::GetRemoteStreamsMethod(info);
}

void V8RTCPeerConnection::AddStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_addStream");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_AddStream_Method);
  rtc_peer_connection_v8_internal::AddStreamMethod(info);
}

void V8RTCPeerConnection::RemoveStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_removeStream");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_RemoveStream_Method);
  rtc_peer_connection_v8_internal::RemoveStreamMethod(info);
}

void V8RTCPeerConnection::CreateDTMFSenderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCPeerConnection_createDTMFSender");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCPeerConnection_CreateDTMFSender_Method);
  rtc_peer_connection_v8_internal::CreateDTMFSenderMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RTCPeerConnectionAccessors[] = {
    { "localDescription", V8RTCPeerConnection::LocalDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentLocalDescription", V8RTCPeerConnection::CurrentLocalDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pendingLocalDescription", V8RTCPeerConnection::PendingLocalDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "remoteDescription", V8RTCPeerConnection::RemoteDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentRemoteDescription", V8RTCPeerConnection::CurrentRemoteDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "pendingRemoteDescription", V8RTCPeerConnection::PendingRemoteDescriptionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "signalingState", V8RTCPeerConnection::SignalingStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "iceGatheringState", V8RTCPeerConnection::IceGatheringStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "iceConnectionState", V8RTCPeerConnection::IceConnectionStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "connectionState", V8RTCPeerConnection::ConnectionStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onnegotiationneeded", V8RTCPeerConnection::OnnegotiationneededAttributeGetterCallback, V8RTCPeerConnection::OnnegotiationneededAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onicecandidate", V8RTCPeerConnection::OnicecandidateAttributeGetterCallback, V8RTCPeerConnection::OnicecandidateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onsignalingstatechange", V8RTCPeerConnection::OnsignalingstatechangeAttributeGetterCallback, V8RTCPeerConnection::OnsignalingstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "oniceconnectionstatechange", V8RTCPeerConnection::OniceconnectionstatechangeAttributeGetterCallback, V8RTCPeerConnection::OniceconnectionstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onconnectionstatechange", V8RTCPeerConnection::OnconnectionstatechangeAttributeGetterCallback, V8RTCPeerConnection::OnconnectionstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onicegatheringstatechange", V8RTCPeerConnection::OnicegatheringstatechangeAttributeGetterCallback, V8RTCPeerConnection::OnicegatheringstatechangeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ontrack", V8RTCPeerConnection::OntrackAttributeGetterCallback, V8RTCPeerConnection::OntrackAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ondatachannel", V8RTCPeerConnection::OndatachannelAttributeGetterCallback, V8RTCPeerConnection::OndatachannelAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onaddstream", V8RTCPeerConnection::OnaddstreamAttributeGetterCallback, V8RTCPeerConnection::OnaddstreamAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "onremovestream", V8RTCPeerConnection::OnremovestreamAttributeGetterCallback, V8RTCPeerConnection::OnremovestreamAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RTCPeerConnectionMethods[] = {
    {"getConfiguration", V8RTCPeerConnection::GetConfigurationMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setConfiguration", V8RTCPeerConnection::SetConfigurationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"close", V8RTCPeerConnection::CloseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createOffer", V8RTCPeerConnection::CreateOfferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createAnswer", V8RTCPeerConnection::CreateAnswerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setLocalDescription", V8RTCPeerConnection::SetLocalDescriptionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setRemoteDescription", V8RTCPeerConnection::SetRemoteDescriptionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addIceCandidate", V8RTCPeerConnection::AddIceCandidateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStats", V8RTCPeerConnection::GetStatsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTransceivers", V8RTCPeerConnection::GetTransceiversMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSenders", V8RTCPeerConnection::GetSendersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getReceivers", V8RTCPeerConnection::GetReceiversMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTransceiver", V8RTCPeerConnection::AddTransceiverMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTrack", V8RTCPeerConnection::AddTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeTrack", V8RTCPeerConnection::RemoveTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDataChannel", V8RTCPeerConnection::CreateDataChannelMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateCertificate", V8RTCPeerConnection::GenerateCertificateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getLocalStreams", V8RTCPeerConnection::GetLocalStreamsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRemoteStreams", V8RTCPeerConnection::GetRemoteStreamsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addStream", V8RTCPeerConnection::AddStreamMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeStream", V8RTCPeerConnection::RemoveStreamMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createDTMFSender", V8RTCPeerConnection::CreateDTMFSenderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RTCPeerConnectionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCPeerConnection::GetWrapperTypeInfo()->interface_name, V8EventTarget::DomTemplate(isolate, world), V8RTCPeerConnection::kInternalFieldCount);
  interface_template->SetCallHandler(rtc_peer_connection_v8_internal::ConstructorCallback);
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
      signature, kV8RTCPeerConnectionAccessors, base::size(kV8RTCPeerConnectionAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCPeerConnectionMethods, base::size(kV8RTCPeerConnectionMethods));

  // Custom signature

  V8RTCPeerConnection::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCPeerConnection::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::RTCSctpTransportEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "sctp", V8RTCPeerConnection::SctpAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8RTCPeerConnection::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCPeerConnection::GetWrapperTypeInfo()),
      InstallV8RTCPeerConnectionTemplate);
}

bool V8RTCPeerConnection::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCPeerConnection::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCPeerConnection::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCPeerConnection::GetWrapperTypeInfo(), v8_value);
}

RTCPeerConnection* V8RTCPeerConnection::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCPeerConnection* NativeValueTraits<RTCPeerConnection>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCPeerConnection* native_value = V8RTCPeerConnection::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCPeerConnection"));
  }
  return native_value;
}

}  // namespace blink
