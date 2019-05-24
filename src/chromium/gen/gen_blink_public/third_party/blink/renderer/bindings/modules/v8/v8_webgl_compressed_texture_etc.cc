// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_compressed_texture_etc.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
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
const WrapperTypeInfo v8_webgl_compressed_texture_etc_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGLCompressedTextureETC::DomTemplate,
    nullptr,
    "WebGLCompressedTextureETC",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLCompressedTextureETC.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLCompressedTextureETC::wrapper_type_info_ = v8_webgl_compressed_texture_etc_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLCompressedTextureETC>::value,
    "WebGLCompressedTextureETC inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLCompressedTextureETC::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLCompressedTextureETC is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl_compressed_texture_etc_v8_internal {

}  // namespace webgl_compressed_texture_etc_v8_internal

static void InstallV8WebGLCompressedTextureETCTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGLCompressedTextureETC::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLCompressedTextureETC::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"COMPRESSED_R11_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9270)},
        {"COMPRESSED_SIGNED_R11_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9271)},
        {"COMPRESSED_RG11_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9272)},
        {"COMPRESSED_SIGNED_RG11_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9273)},
        {"COMPRESSED_RGB8_ETC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9274)},
        {"COMPRESSED_SRGB8_ETC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9275)},
        {"COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9276)},
        {"COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9277)},
        {"COMPRESSED_RGBA8_ETC2_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9278)},
        {"COMPRESSED_SRGB8_ALPHA8_ETC2_EAC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9279)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }

  // Custom signature

  V8WebGLCompressedTextureETC::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGLCompressedTextureETC::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8WebGLCompressedTextureETC::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGLCompressedTextureETC::GetWrapperTypeInfo()),
      InstallV8WebGLCompressedTextureETCTemplate);
}

bool V8WebGLCompressedTextureETC::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGLCompressedTextureETC::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGLCompressedTextureETC::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGLCompressedTextureETC::GetWrapperTypeInfo(), v8_value);
}

WebGLCompressedTextureETC* V8WebGLCompressedTextureETC::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLCompressedTextureETC* NativeValueTraits<WebGLCompressedTextureETC>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGLCompressedTextureETC* native_value = V8WebGLCompressedTextureETC::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLCompressedTextureETC"));
  }
  return native_value;
}

}  // namespace blink
