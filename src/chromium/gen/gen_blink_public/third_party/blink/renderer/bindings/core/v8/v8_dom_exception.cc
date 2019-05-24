// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
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
const WrapperTypeInfo v8_dom_exception_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DOMException::DomTemplate,
    nullptr,
    "DOMException",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMException.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMException::wrapper_type_info_ = v8_dom_exception_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMException>::value,
    "DOMException inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMException::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMException is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_exception_v8_internal {

static void CodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->code());
}

static void NameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void MessageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMException* impl = V8DOMException::ToImpl(holder);

  V8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_ConstructorCallback");

  V8StringResource<> message;
  V8StringResource<> name;
  if (!info[0]->IsUndefined()) {
    message = info[0];
    if (!message.Prepare())
      return;
  } else {
    message = WTF::g_empty_string;
  }
  if (!info[1]->IsUndefined()) {
    name = info[1];
    if (!name.Prepare())
      return;
  } else {
    name = "Error";
  }

  DOMException* impl = DOMException::Create(message, name);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8DOMException::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("DOMException"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  dom_exception_v8_internal::Constructor(info);
}

}  // namespace dom_exception_v8_internal

void V8DOMException::CodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_code_Getter");

  dom_exception_v8_internal::CodeAttributeGetter(info);
}

void V8DOMException::NameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_name_Getter");

  dom_exception_v8_internal::NameAttributeGetter(info);
}

void V8DOMException::MessageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMException_message_Getter");

  dom_exception_v8_internal::MessageAttributeGetter(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8DOMExceptionAccessors[] = {
    { "code", V8DOMException::CodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "name", V8DOMException::NameAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "message", V8DOMException::MessageAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8DOMExceptionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DOMException::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMException::kInternalFieldCount);
  interface_template->SetCallHandler(dom_exception_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"INDEX_SIZE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"DOMSTRING_SIZE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"HIERARCHY_REQUEST_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"WRONG_DOCUMENT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"INVALID_CHARACTER_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(5)},
        {"NO_DATA_ALLOWED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(6)},
        {"NO_MODIFICATION_ALLOWED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(7)},
        {"NOT_FOUND_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
        {"NOT_SUPPORTED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(9)},
        {"INUSE_ATTRIBUTE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(10)},
        {"INVALID_STATE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(11)},
        {"SYNTAX_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(12)},
        {"INVALID_MODIFICATION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(13)},
        {"NAMESPACE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(14)},
        {"INVALID_ACCESS_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(15)},
        {"VALIDATION_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(16)},
        {"TYPE_MISMATCH_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(17)},
        {"SECURITY_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(18)},
        {"NETWORK_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(19)},
        {"ABORT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(20)},
        {"URL_MISMATCH_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(21)},
        {"QUOTA_EXCEEDED_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(22)},
        {"TIMEOUT_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(23)},
        {"INVALID_NODE_TYPE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(24)},
        {"DATA_CLONE_ERR", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(25)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DOMExceptionAccessors, base::size(kV8DOMExceptionAccessors));

  // The WebIDL spec states that DOMException objects have a few peculiarities.
  // One of them is similar to what it mandates for Iterator objects when it
  // comes to the inheritance chain. Instead of
  //     DOMException -> prototype -> %ObjectPrototype%
  // we have
  //     DOMException -> prototype -> %ErrorPrototype% -> %ObjectPrototype%
  // so that DOMException objects "inherit" toString() and a few properties
  // from %ErrorPrototype%.
  // See https://heycam.github.io/webidl/#es-DOMException-specialness.
  //
  // We achieve this with the same hack we use for Iterators: create a new
  // function template with no prototype, set its "prototype" property to
  // %ErrorPrototype% and make |interface_template| inherit from it. When
  // |interface_template| is instantiated, its prototype.__proto__ will point to
  // |intrinsic_error_prototype_interface_template|'s "prototype" property.
  v8::Local<v8::FunctionTemplate> intrinsic_error_prototype_interface_template =
      v8::FunctionTemplate::New(isolate);
  intrinsic_error_prototype_interface_template->RemovePrototype();
  intrinsic_error_prototype_interface_template->SetIntrinsicDataProperty(
      V8AtomicString(isolate, "prototype"), v8::kErrorPrototype);
  interface_template->Inherit(intrinsic_error_prototype_interface_template);

  // Custom signature

  V8DOMException::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8DOMException::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DOMException::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DOMException::GetWrapperTypeInfo()),
      InstallV8DOMExceptionTemplate);
}

bool V8DOMException::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DOMException::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DOMException::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DOMException::GetWrapperTypeInfo(), v8_value);
}

DOMException* V8DOMException::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMException* NativeValueTraits<DOMException>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMException* native_value = V8DOMException::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMException"));
  }
  return native_value;
}

}  // namespace blink
