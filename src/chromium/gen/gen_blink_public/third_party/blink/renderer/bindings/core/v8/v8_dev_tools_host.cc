// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dev_tools_host.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
WrapperTypeInfo v8_dev_tools_host_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8DevToolsHost::DomTemplate,
    nullptr,
    "DevToolsHost",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DevToolsHost.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DevToolsHost::wrapper_type_info_ = v8_dev_tools_host_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DevToolsHost>::value,
    "DevToolsHost inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DevToolsHost::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DevToolsHost is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dev_tools_host_v8_internal {

static void ZoomFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->zoomFactor());
}

static void CopyTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("copyText", "DevToolsHost", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> text;
  text = info[0];
  if (!text.Prepare())
    return;

  impl->copyText(text);
}

static void SendMessageToEmbedderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("sendMessageToEmbedder", "DevToolsHost", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> message;
  message = info[0];
  if (!message.Prepare())
    return;

  impl->sendMessageToEmbedder(message);
}

static void IsHostedModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DevToolsHost* impl = V8DevToolsHost::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isHostedMode());
}

}  // namespace dev_tools_host_v8_internal

void V8DevToolsHost::ZoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_zoomFactor");

  dev_tools_host_v8_internal::ZoomFactorMethod(info);
}

void V8DevToolsHost::CopyTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_copyText");

  dev_tools_host_v8_internal::CopyTextMethod(info);
}

void V8DevToolsHost::PlatformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_platform");

  V8DevToolsHost::PlatformMethodCustom(info);
}

void V8DevToolsHost::ShowContextMenuAtPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_showContextMenuAtPoint");

  V8DevToolsHost::ShowContextMenuAtPointMethodCustom(info);
}

void V8DevToolsHost::SendMessageToEmbedderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_sendMessageToEmbedder");

  dev_tools_host_v8_internal::SendMessageToEmbedderMethod(info);
}

void V8DevToolsHost::IsHostedModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DevToolsHost_isHostedMode");

  dev_tools_host_v8_internal::IsHostedModeMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8DevToolsHostMethods[] = {
    {"zoomFactor", V8DevToolsHost::ZoomFactorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyText", V8DevToolsHost::CopyTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"platform", V8DevToolsHost::PlatformMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"showContextMenuAtPoint", V8DevToolsHost::ShowContextMenuAtPointMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sendMessageToEmbedder", V8DevToolsHost::SendMessageToEmbedderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isHostedMode", V8DevToolsHost::IsHostedModeMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DevToolsHost::InstallV8DevToolsHostTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8DevToolsHost::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8DevToolsHost::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8DevToolsHostMethods, base::size(kV8DevToolsHostMethods));

  // Custom signature
}

void V8DevToolsHost::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8DevToolsHost::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8DevToolsHost::GetWrapperTypeInfo()),
      V8DevToolsHost::install_v8_dev_tools_host_template_function_);
}

bool V8DevToolsHost::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8DevToolsHost::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8DevToolsHost::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8DevToolsHost::GetWrapperTypeInfo(), v8_value);
}

DevToolsHost* V8DevToolsHost::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DevToolsHost* NativeValueTraits<DevToolsHost>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DevToolsHost* native_value = V8DevToolsHost::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DevToolsHost"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8DevToolsHost::install_runtime_enabled_features_on_template_function_ =
    &V8DevToolsHost::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8DevToolsHost::install_v8_dev_tools_host_template_function_ =
    &V8DevToolsHost::InstallV8DevToolsHostTemplate;

void V8DevToolsHost::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8DevToolsHost::install_v8_dev_tools_host_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8DevToolsHost::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8DevToolsHost::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
