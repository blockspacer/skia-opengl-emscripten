// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_debug_shaders.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
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
const WrapperTypeInfo v8_webgl_debug_shaders_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGLDebugShaders::DomTemplate,
    nullptr,
    "WebGLDebugShaders",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLDebugShaders.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLDebugShaders::wrapper_type_info_ = v8_webgl_debug_shaders_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLDebugShaders>::value,
    "WebGLDebugShaders inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLDebugShaders::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLDebugShaders is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl_debug_shaders_v8_internal {

static void GetTranslatedShaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLDebugShaders* impl = V8WebGLDebugShaders::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getTranslatedShaderSource", "WebGLDebugShaders", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getTranslatedShaderSource", "WebGLDebugShaders", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getTranslatedShaderSource(shader), info.GetIsolate());
}

}  // namespace webgl_debug_shaders_v8_internal

void V8WebGLDebugShaders::GetTranslatedShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLDebugShaders_getTranslatedShaderSource");

  webgl_debug_shaders_v8_internal::GetTranslatedShaderSourceMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebGLDebugShadersMethods[] = {
    {"getTranslatedShaderSource", V8WebGLDebugShaders::GetTranslatedShaderSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebGLDebugShadersTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGLDebugShaders::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLDebugShaders::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGLDebugShadersMethods, base::size(kV8WebGLDebugShadersMethods));

  // Custom signature

  V8WebGLDebugShaders::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGLDebugShaders::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8WebGLDebugShaders::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGLDebugShaders::GetWrapperTypeInfo()),
      InstallV8WebGLDebugShadersTemplate);
}

bool V8WebGLDebugShaders::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGLDebugShaders::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGLDebugShaders::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGLDebugShaders::GetWrapperTypeInfo(), v8_value);
}

WebGLDebugShaders* V8WebGLDebugShaders::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLDebugShaders* NativeValueTraits<WebGLDebugShaders>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGLDebugShaders* native_value = V8WebGLDebugShaders::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLDebugShaders"));
  }
  return native_value;
}

}  // namespace blink
