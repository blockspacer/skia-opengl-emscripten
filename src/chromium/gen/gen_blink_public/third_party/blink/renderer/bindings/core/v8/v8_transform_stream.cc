// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_transform_stream.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_readable_stream.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_writable_stream.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_transform_stream_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8TransformStream::DomTemplate,
    nullptr,
    "TransformStream",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TransformStream.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TransformStream::wrapper_type_info_ = v8_transform_stream_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TransformStream>::value,
    "TransformStream inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TransformStream::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TransformStream is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace transform_stream_v8_internal {

static void ReadableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TransformStream* impl = V8TransformStream::ToImpl(holder);

  ReadableStream* cpp_value(WTF::GetPtr(impl->readable()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#TransformStream#readable")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WritableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TransformStream* impl = V8TransformStream::ToImpl(holder);

  WritableStream* cpp_value(WTF::GetPtr(impl->writable()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#TransformStream#writable")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TransformStream_ConstructorCallback");

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kConstructionContext, "TransformStream");
  ScriptState* script_state = ScriptState::From(
      info.NewTarget().As<v8::Object>()->CreationContext());

  ScriptValue transformer;
  ScriptValue writable_strategy;
  ScriptValue readable_strategy;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    TransformStream* impl = TransformStream::Create(script_state, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8TransformStream::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  transformer = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  if (UNLIKELY(num_args_passed <= 1)) {
    TransformStream* impl = TransformStream::Create(script_state, transformer, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8TransformStream::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  writable_strategy = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  if (UNLIKELY(num_args_passed <= 2)) {
    TransformStream* impl = TransformStream::Create(script_state, transformer, writable_strategy, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8TransformStream::GetWrapperTypeInfo(), wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  readable_strategy = ScriptValue(ScriptState::Current(info.GetIsolate()), info[2]);

  TransformStream* impl = TransformStream::Create(script_state, transformer, writable_strategy, readable_strategy, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8TransformStream::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TransformStream_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("TransformStream"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  transform_stream_v8_internal::Constructor(info);
}

}  // namespace transform_stream_v8_internal

void V8TransformStream::ReadableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TransformStream_readable_Getter");

  transform_stream_v8_internal::ReadableAttributeGetter(info);
}

void V8TransformStream::WritableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TransformStream_writable_Getter");

  transform_stream_v8_internal::WritableAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8TransformStreamAccessors[] = {
    { "readable", V8TransformStream::ReadableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "writable", V8TransformStream::WritableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8TransformStreamTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8TransformStream::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8TransformStream::kInternalFieldCount);
  interface_template->SetCallHandler(transform_stream_v8_internal::ConstructorCallback);
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
      signature, kV8TransformStreamAccessors, base::size(kV8TransformStreamAccessors));

  // Custom signature

  V8TransformStream::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8TransformStream::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8TransformStream::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8TransformStream::GetWrapperTypeInfo()),
      InstallV8TransformStreamTemplate);
}

bool V8TransformStream::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8TransformStream::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8TransformStream::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8TransformStream::GetWrapperTypeInfo(), v8_value);
}

TransformStream* V8TransformStream::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TransformStream* NativeValueTraits<TransformStream>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TransformStream* native_value = V8TransformStream::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TransformStream"));
  }
  return native_value;
}

}  // namespace blink
