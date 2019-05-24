// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_draw_buffers.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
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
const WrapperTypeInfo v8_webgl_draw_buffers_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGLDrawBuffers::DomTemplate,
    nullptr,
    "WebGLDrawBuffers",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLDrawBuffers.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLDrawBuffers::wrapper_type_info_ = v8_webgl_draw_buffers_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLDrawBuffers>::value,
    "WebGLDrawBuffers inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLDrawBuffers::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLDrawBuffers is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl_draw_buffers_v8_internal {

static void DrawBuffersWEBGLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLDrawBuffers", "drawBuffersWEBGL");

  WebGLDrawBuffers* impl = V8WebGLDrawBuffers::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<uint32_t> buffers;
  buffers = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawBuffersWEBGL(buffers);
}

}  // namespace webgl_draw_buffers_v8_internal

void V8WebGLDrawBuffers::DrawBuffersWEBGLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLDrawBuffers_drawBuffersWEBGL");

  webgl_draw_buffers_v8_internal::DrawBuffersWEBGLMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebGLDrawBuffersMethods[] = {
    {"drawBuffersWEBGL", V8WebGLDrawBuffers::DrawBuffersWEBGLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebGLDrawBuffersTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGLDrawBuffers::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLDrawBuffers::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"COLOR_ATTACHMENT0_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE0)},
        {"COLOR_ATTACHMENT1_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE1)},
        {"COLOR_ATTACHMENT2_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE2)},
        {"COLOR_ATTACHMENT3_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE3)},
        {"COLOR_ATTACHMENT4_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE4)},
        {"COLOR_ATTACHMENT5_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE5)},
        {"COLOR_ATTACHMENT6_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE6)},
        {"COLOR_ATTACHMENT7_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE7)},
        {"COLOR_ATTACHMENT8_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE8)},
        {"COLOR_ATTACHMENT9_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE9)},
        {"COLOR_ATTACHMENT10_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEA)},
        {"COLOR_ATTACHMENT11_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEB)},
        {"COLOR_ATTACHMENT12_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEC)},
        {"COLOR_ATTACHMENT13_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CED)},
        {"COLOR_ATTACHMENT14_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEE)},
        {"COLOR_ATTACHMENT15_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEF)},
        {"DRAW_BUFFER0_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8825)},
        {"DRAW_BUFFER1_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8826)},
        {"DRAW_BUFFER2_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8827)},
        {"DRAW_BUFFER3_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8828)},
        {"DRAW_BUFFER4_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8829)},
        {"DRAW_BUFFER5_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882A)},
        {"DRAW_BUFFER6_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882B)},
        {"DRAW_BUFFER7_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882C)},
        {"DRAW_BUFFER8_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882D)},
        {"DRAW_BUFFER9_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882E)},
        {"DRAW_BUFFER10_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882F)},
        {"DRAW_BUFFER11_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8830)},
        {"DRAW_BUFFER12_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8831)},
        {"DRAW_BUFFER13_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8832)},
        {"DRAW_BUFFER14_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8833)},
        {"DRAW_BUFFER15_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8834)},
        {"MAX_COLOR_ATTACHMENTS_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CDF)},
        {"MAX_DRAW_BUFFERS_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8824)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGLDrawBuffersMethods, base::size(kV8WebGLDrawBuffersMethods));

  // Custom signature

  V8WebGLDrawBuffers::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGLDrawBuffers::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8WebGLDrawBuffers::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGLDrawBuffers::GetWrapperTypeInfo()),
      InstallV8WebGLDrawBuffersTemplate);
}

bool V8WebGLDrawBuffers::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGLDrawBuffers::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGLDrawBuffers::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGLDrawBuffers::GetWrapperTypeInfo(), v8_value);
}

WebGLDrawBuffers* V8WebGLDrawBuffers::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLDrawBuffers* NativeValueTraits<WebGLDrawBuffers>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGLDrawBuffers* native_value = V8WebGLDrawBuffers::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLDrawBuffers"));
  }
  return native_value;
}

}  // namespace blink
