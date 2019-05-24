// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_history.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_history_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8History::DomTemplate,
    nullptr,
    "History",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in History.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& History::wrapper_type_info_ = v8_history_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, History>::value,
    "History inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&History::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "History is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace history_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  History* impl = V8History::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "History", "length");

  uint32_t cpp_value(impl->length(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueUnsigned(info, cpp_value);
}

static void ScrollRestorationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  History* impl = V8History::ToImpl(holder);

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "History", "scrollRestoration");

  String cpp_value(impl->scrollRestoration(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  V8SetReturnValueString(info, cpp_value, info.GetIsolate());
}

static void ScrollRestorationAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  History* impl = V8History::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "History", "scrollRestoration");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "auto",
      "manual",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "ScrollRestoration", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setScrollRestoration(cpp_value, exception_state);
}

static void StateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  History* impl = V8History::ToImpl(holder);

  // [CachedAttribute]
  V8PrivateProperty::Symbol property_symbol =
      V8PrivateProperty::GetSymbol(info.GetIsolate(),
          "History#State");
  if (!static_cast<const History*>(impl)->stateChanged()) {
    v8::Local<v8::Value> v8_value;
    if (property_symbol.GetOrUndefined(holder).ToLocal(&v8_value) && !v8_value->IsUndefined()) {
      V8SetReturnValue(info, v8_value);
      return;
    }
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kGetterContext, "History", "state");

  scoped_refptr<SerializedScriptValue> cpp_value(impl->state(exception_state));

  if (UNLIKELY(exception_state.HadException()))
    return;

  // [CachedAttribute]
  v8::Local<v8::Value> v8_value(V8Deserialize(info.GetIsolate(), cpp_value.get()));
  property_symbol.Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void GoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "History", "go");

  History* impl = V8History::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  int32_t delta;
  if (!info[0]->IsUndefined()) {
    delta = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    delta = 0;
  }

  impl->go(script_state, delta, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void BackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "History", "back");

  History* impl = V8History::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->back(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ForwardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "History", "forward");

  History* impl = V8History::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  impl->forward(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void PushStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "History", "pushState");

  History* impl = V8History::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  scoped_refptr<SerializedScriptValue> data;
  V8StringResource<> title;
  V8StringResource<kTreatNullAndUndefinedAsNullString> url;
  data = NativeValueTraits<SerializedScriptValue>::NativeValue(info.GetIsolate(), info[0], SerializedScriptValue::SerializeOptions(SerializedScriptValue::kForStorage), exception_state);
  if (exception_state.HadException())
    return;

  title = info[1];
  if (!title.Prepare())
    return;

  if (!info[2]->IsUndefined()) {
    url = info[2];
    if (!url.Prepare())
      return;
  } else {
    url = nullptr;
  }

  impl->pushState(std::move(data), title, url, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ReplaceStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "History", "replaceState");

  History* impl = V8History::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  scoped_refptr<SerializedScriptValue> data;
  V8StringResource<> title;
  V8StringResource<kTreatNullAndUndefinedAsNullString> url;
  data = NativeValueTraits<SerializedScriptValue>::NativeValue(info.GetIsolate(), info[0], SerializedScriptValue::SerializeOptions(SerializedScriptValue::kForStorage), exception_state);
  if (exception_state.HadException())
    return;

  title = info[1];
  if (!title.Prepare())
    return;

  if (!info[2]->IsUndefined()) {
    url = info[2];
    if (!url.Prepare())
      return;
  } else {
    url = nullptr;
  }

  impl->replaceState(std::move(data), title, url, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace history_v8_internal

void V8History::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_length_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kHistoryLength);

  history_v8_internal::LengthAttributeGetter(info);
}

void V8History::ScrollRestorationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_scrollRestoration_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8History_ScrollRestoration_AttributeGetter);

  history_v8_internal::ScrollRestorationAttributeGetter(info);
}

void V8History::ScrollRestorationAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_scrollRestoration_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8History_ScrollRestoration_AttributeSetter);

  history_v8_internal::ScrollRestorationAttributeSetter(v8_value, info);
}

void V8History::StateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_state_Getter");

  history_v8_internal::StateAttributeGetter(info);
}

void V8History::GoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_go");

  history_v8_internal::GoMethod(info);
}

void V8History::BackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_back");

  history_v8_internal::BackMethod(info);
}

void V8History::ForwardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_forward");

  history_v8_internal::ForwardMethod(info);
}

void V8History::PushStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_pushState");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kHistoryPushState);
  history_v8_internal::PushStateMethod(info);
}

void V8History::ReplaceStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_History_replaceState");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kHistoryReplaceState);
  history_v8_internal::ReplaceStateMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HistoryAccessors[] = {
    { "length", V8History::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scrollRestoration", V8History::ScrollRestorationAttributeGetterCallback, V8History::ScrollRestorationAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "state", V8History::StateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HistoryMethods[] = {
    {"go", V8History::GoMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"back", V8History::BackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forward", V8History::ForwardMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pushState", V8History::PushStateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceState", V8History::ReplaceStateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8HistoryTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8History::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8History::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HistoryAccessors, base::size(kV8HistoryAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HistoryMethods, base::size(kV8HistoryMethods));

  // Custom signature

  V8History::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8History::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8History::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8History::GetWrapperTypeInfo()),
      InstallV8HistoryTemplate);
}

bool V8History::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8History::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8History::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8History::GetWrapperTypeInfo(), v8_value);
}

History* V8History::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

History* NativeValueTraits<History>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  History* native_value = V8History::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "History"));
  }
  return native_value;
}

}  // namespace blink
