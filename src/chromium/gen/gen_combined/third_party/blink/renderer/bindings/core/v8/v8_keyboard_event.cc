// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_keyboard_event_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
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
const WrapperTypeInfo v8_keyboard_event_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8KeyboardEvent::DomTemplate,
    nullptr,
    "KeyboardEvent",
    V8UIEvent::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in KeyboardEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& KeyboardEvent::wrapper_type_info_ = v8_keyboard_event_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, KeyboardEvent>::value,
    "KeyboardEvent inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&KeyboardEvent::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "KeyboardEvent is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace keyboard_event_v8_internal {

static void KeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->key(), info.GetIsolate());
}

static void CodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueString(info, impl->code(), info.GetIsolate());
}

static void LocationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->location());
}

static void CtrlKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->ctrlKey());
}

static void ShiftKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->shiftKey());
}

static void AltKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->altKey());
}

static void MetaKeyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->metaKey());
}

static void RepeatAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->repeat());
}

static void IsComposingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isComposing());
}

static void CharCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->charCode());
}

static void KeyCodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueInt(info, impl->keyCode());
}

static void IsTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isTrusted());
}

static void GetModifierStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getModifierState", "KeyboardEvent", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> key_arg;
  key_arg = info[0];
  if (!key_arg.Prepare())
    return;

  V8SetReturnValueBool(info, impl->getModifierState(key_arg));
}

static void InitKeyboardEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "KeyboardEvent", "initKeyboardEvent");

  KeyboardEvent* impl = V8KeyboardEvent::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  bool bubbles;
  bool cancelable;
  DOMWindow* view;
  V8StringResource<> key_identifier;
  uint32_t location;
  bool ctrl_key;
  bool alt_key;
  bool shift_key;
  bool meta_key;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsUndefined()) {
    bubbles = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    bubbles = false;
  }
  if (!info[2]->IsUndefined()) {
    cancelable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    cancelable = false;
  }
  if (!info[3]->IsUndefined()) {
    view = ToDOMWindow(info.GetIsolate(), info[3]);
    if (!view && !IsUndefinedOrNull(info[3])) {
      exception_state.ThrowTypeError("parameter 4 is not of type 'Window'.");
      return;
    }
  } else {
    view = nullptr;
  }
  if (!info[4]->IsUndefined()) {
    key_identifier = info[4];
    if (!key_identifier.Prepare())
      return;
  } else {
    key_identifier = WTF::g_empty_string;
  }
  if (!info[5]->IsUndefined()) {
    location = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    location = 0u;
  }
  if (!info[6]->IsUndefined()) {
    ctrl_key = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[6], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    ctrl_key = false;
  }
  if (!info[7]->IsUndefined()) {
    alt_key = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[7], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    alt_key = false;
  }
  if (!info[8]->IsUndefined()) {
    shift_key = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[8], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    shift_key = false;
  }
  if (!info[9]->IsUndefined()) {
    meta_key = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[9], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    meta_key = false;
  }

  impl->initKeyboardEvent(script_state, type, bubbles, cancelable, view, key_identifier, location, ctrl_key, alt_key, shift_key, meta_key);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "KeyboardEvent");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> type;
  KeyboardEventInit* event_init_dict;
  type = info[0];
  if (!type.Prepare())
    return;

  if (!info[1]->IsNullOrUndefined() && !info[1]->IsObject()) {
    exception_state.ThrowTypeError("parameter 2 ('eventInitDict') is not an object.");
    return;
  }
  event_init_dict = NativeValueTraits<KeyboardEventInit>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  KeyboardEvent* impl = KeyboardEvent::Create(script_state, type, event_init_dict);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8KeyboardEvent::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("KeyboardEvent"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  keyboard_event_v8_internal::Constructor(info);
}

}  // namespace keyboard_event_v8_internal

void V8KeyboardEvent::KeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_key_Getter");

  keyboard_event_v8_internal::KeyAttributeGetter(info);
}

void V8KeyboardEvent::CodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_code_Getter");

  keyboard_event_v8_internal::CodeAttributeGetter(info);
}

void V8KeyboardEvent::LocationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_location_Getter");

  keyboard_event_v8_internal::LocationAttributeGetter(info);
}

void V8KeyboardEvent::CtrlKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_ctrlKey_Getter");

  keyboard_event_v8_internal::CtrlKeyAttributeGetter(info);
}

void V8KeyboardEvent::ShiftKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_shiftKey_Getter");

  keyboard_event_v8_internal::ShiftKeyAttributeGetter(info);
}

void V8KeyboardEvent::AltKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_altKey_Getter");

  keyboard_event_v8_internal::AltKeyAttributeGetter(info);
}

void V8KeyboardEvent::MetaKeyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_metaKey_Getter");

  keyboard_event_v8_internal::MetaKeyAttributeGetter(info);
}

void V8KeyboardEvent::RepeatAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_repeat_Getter");

  keyboard_event_v8_internal::RepeatAttributeGetter(info);
}

void V8KeyboardEvent::IsComposingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_isComposing_Getter");

  keyboard_event_v8_internal::IsComposingAttributeGetter(info);
}

void V8KeyboardEvent::CharCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_charCode_Getter");

  keyboard_event_v8_internal::CharCodeAttributeGetter(info);
}

void V8KeyboardEvent::KeyCodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_keyCode_Getter");

  keyboard_event_v8_internal::KeyCodeAttributeGetter(info);
}

void V8KeyboardEvent::IsTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_isTrusted_Getter");

  keyboard_event_v8_internal::IsTrustedAttributeGetter(info);
}

void V8KeyboardEvent::GetModifierStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_getModifierState");

  keyboard_event_v8_internal::GetModifierStateMethod(info);
}

void V8KeyboardEvent::InitKeyboardEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_KeyboardEvent_initKeyboardEvent");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8KeyboardEvent_InitKeyboardEvent_Method);
  keyboard_event_v8_internal::InitKeyboardEventMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8KeyboardEventAccessors[] = {
    { "key", V8KeyboardEvent::KeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "code", V8KeyboardEvent::CodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "location", V8KeyboardEvent::LocationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ctrlKey", V8KeyboardEvent::CtrlKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "shiftKey", V8KeyboardEvent::ShiftKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "altKey", V8KeyboardEvent::AltKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "metaKey", V8KeyboardEvent::MetaKeyAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "repeat", V8KeyboardEvent::RepeatAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isComposing", V8KeyboardEvent::IsComposingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "charCode", V8KeyboardEvent::CharCodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "keyCode", V8KeyboardEvent::KeyCodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "isTrusted", V8KeyboardEvent::IsTrustedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::kOnInstance, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8KeyboardEventMethods[] = {
    {"getModifierState", V8KeyboardEvent::GetModifierStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"initKeyboardEvent", V8KeyboardEvent::InitKeyboardEventMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8KeyboardEventTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8KeyboardEvent::GetWrapperTypeInfo()->interface_name, V8UIEvent::DomTemplate(isolate, world), V8KeyboardEvent::kInternalFieldCount);
  interface_template->SetCallHandler(keyboard_event_v8_internal::ConstructorCallback);
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
        {"DOM_KEY_LOCATION_STANDARD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00)},
        {"DOM_KEY_LOCATION_LEFT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x01)},
        {"DOM_KEY_LOCATION_RIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x02)},
        {"DOM_KEY_LOCATION_NUMPAD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x03)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0x00 == KeyboardEvent::kDomKeyLocationStandard, "the value of KeyboardEvent_kDomKeyLocationStandard does not match with implementation");
  static_assert(0x01 == KeyboardEvent::kDomKeyLocationLeft, "the value of KeyboardEvent_kDomKeyLocationLeft does not match with implementation");
  static_assert(0x02 == KeyboardEvent::kDomKeyLocationRight, "the value of KeyboardEvent_kDomKeyLocationRight does not match with implementation");
  static_assert(0x03 == KeyboardEvent::kDomKeyLocationNumpad, "the value of KeyboardEvent_kDomKeyLocationNumpad does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8KeyboardEventAccessors, base::size(kV8KeyboardEventAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8KeyboardEventMethods, base::size(kV8KeyboardEventMethods));

  // Custom signature

  V8KeyboardEvent::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8KeyboardEvent::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8KeyboardEvent::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8KeyboardEvent::GetWrapperTypeInfo()),
      InstallV8KeyboardEventTemplate);
}

bool V8KeyboardEvent::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8KeyboardEvent::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8KeyboardEvent::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8KeyboardEvent::GetWrapperTypeInfo(), v8_value);
}

KeyboardEvent* V8KeyboardEvent::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

KeyboardEvent* NativeValueTraits<KeyboardEvent>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  KeyboardEvent* native_value = V8KeyboardEvent::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "KeyboardEvent"));
  }
  return native_value;
}

}  // namespace blink
