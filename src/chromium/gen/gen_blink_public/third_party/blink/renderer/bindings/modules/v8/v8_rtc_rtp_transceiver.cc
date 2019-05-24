// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_transceiver.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_codec_capability.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_receiver.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_sender.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_rtc_rtp_transceiver_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8RTCRtpTransceiver::DomTemplate,
    nullptr,
    "RTCRtpTransceiver",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in RTCRtpTransceiver.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& RTCRtpTransceiver::wrapper_type_info_ = v8_rtc_rtp_transceiver_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, RTCRtpTransceiver>::value,
    "RTCRtpTransceiver inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&RTCRtpTransceiver::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "RTCRtpTransceiver is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace rtc_rtp_transceiver_v8_internal {

static void MidAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->mid(), info.GetIsolate());
}

static void SenderAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  RTCRtpSender* cpp_value(WTF::GetPtr(impl->sender()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpTransceiver#sender")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ReceiverAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  RTCRtpReceiver* cpp_value(WTF::GetPtr(impl->receiver()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#RTCRtpTransceiver#receiver")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void StoppedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  V8SetReturnValueBool(info, impl->stopped());
}

static void DirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  V8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void DirectionAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "RTCRtpTransceiver", "direction");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "sendrecv",
      "sendonly",
      "recvonly",
      "inactive",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "RTCRtpTransceiverDirection", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setDirection(cpp_value, exception_state);
}

static void CurrentDirectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(holder);

  V8SetReturnValueStringOrNull(info, impl->currentDirection(), info.GetIsolate());
}

static void SetCodecPreferencesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "RTCRtpTransceiver", "setCodecPreferences");

  RTCRtpTransceiver* impl = V8RTCRtpTransceiver::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  HeapVector<Member<RTCRtpCodecCapability>> codecs;
  codecs = NativeValueTraits<IDLSequence<RTCRtpCodecCapability>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setCodecPreferences(codecs, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace rtc_rtp_transceiver_v8_internal

void V8RTCRtpTransceiver::MidAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_mid_Getter");

  rtc_rtp_transceiver_v8_internal::MidAttributeGetter(info);
}

void V8RTCRtpTransceiver::SenderAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_sender_Getter");

  rtc_rtp_transceiver_v8_internal::SenderAttributeGetter(info);
}

void V8RTCRtpTransceiver::ReceiverAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_receiver_Getter");

  rtc_rtp_transceiver_v8_internal::ReceiverAttributeGetter(info);
}

void V8RTCRtpTransceiver::StoppedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_stopped_Getter");

  rtc_rtp_transceiver_v8_internal::StoppedAttributeGetter(info);
}

void V8RTCRtpTransceiver::DirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_direction_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8RTCRtpTransceiver_Direction_AttributeGetter);

  rtc_rtp_transceiver_v8_internal::DirectionAttributeGetter(info);
}

void V8RTCRtpTransceiver::DirectionAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_direction_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8RTCRtpTransceiver_Direction_AttributeSetter);

  rtc_rtp_transceiver_v8_internal::DirectionAttributeSetter(v8_value, info);
}

void V8RTCRtpTransceiver::CurrentDirectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_currentDirection_Getter");

  rtc_rtp_transceiver_v8_internal::CurrentDirectionAttributeGetter(info);
}

void V8RTCRtpTransceiver::SetCodecPreferencesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_RTCRtpTransceiver_setCodecPreferences");

  rtc_rtp_transceiver_v8_internal::SetCodecPreferencesMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8RTCRtpTransceiverAccessors[] = {
    { "mid", V8RTCRtpTransceiver::MidAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "sender", V8RTCRtpTransceiver::SenderAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "receiver", V8RTCRtpTransceiver::ReceiverAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "stopped", V8RTCRtpTransceiver::StoppedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "direction", V8RTCRtpTransceiver::DirectionAttributeGetterCallback, V8RTCRtpTransceiver::DirectionAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentDirection", V8RTCRtpTransceiver::CurrentDirectionAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8RTCRtpTransceiverMethods[] = {
    {"setCodecPreferences", V8RTCRtpTransceiver::SetCodecPreferencesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8RTCRtpTransceiverTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8RTCRtpTransceiver::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8RTCRtpTransceiver::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpTransceiverAccessors, base::size(kV8RTCRtpTransceiverAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8RTCRtpTransceiverMethods, base::size(kV8RTCRtpTransceiverMethods));

  // Custom signature

  V8RTCRtpTransceiver::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8RTCRtpTransceiver::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8RTCRtpTransceiver::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8RTCRtpTransceiver::GetWrapperTypeInfo()),
      InstallV8RTCRtpTransceiverTemplate);
}

bool V8RTCRtpTransceiver::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8RTCRtpTransceiver::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8RTCRtpTransceiver::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8RTCRtpTransceiver::GetWrapperTypeInfo(), v8_value);
}

RTCRtpTransceiver* V8RTCRtpTransceiver::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

RTCRtpTransceiver* NativeValueTraits<RTCRtpTransceiver>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtpTransceiver* native_value = V8RTCRtpTransceiver::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "RTCRtpTransceiver"));
  }
  return native_value;
}

}  // namespace blink
