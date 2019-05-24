// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_buffer_usage.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
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
const WrapperTypeInfo v8_gpu_buffer_usage_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8GPUBufferUsage::DomTemplate,
    nullptr,
    "GPUBufferUsage",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in GPUBufferUsage.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& GPUBufferUsage::wrapper_type_info_ = v8_gpu_buffer_usage_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, GPUBufferUsage>::value,
    "GPUBufferUsage inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&GPUBufferUsage::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "GPUBufferUsage is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace gpu_buffer_usage_v8_internal {

}  // namespace gpu_buffer_usage_v8_internal

static void InstallV8GPUBufferUsageTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8GPUBufferUsage::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8GPUBufferUsage::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WebGPUEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"NONE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
        {"MAP_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(1)},
        {"MAP_WRITE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(2)},
        {"TRANSFER_SRC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(4)},
        {"TRANSFER_DST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(8)},
        {"INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(16)},
        {"VERTEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(32)},
        {"UNIFORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(64)},
        {"STORAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(128)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == GPUBufferUsage::kNone, "the value of GPUBufferUsage_kNone does not match with implementation");
  static_assert(1 == GPUBufferUsage::kMapRead, "the value of GPUBufferUsage_kMapRead does not match with implementation");
  static_assert(2 == GPUBufferUsage::kMapWrite, "the value of GPUBufferUsage_kMapWrite does not match with implementation");
  static_assert(4 == GPUBufferUsage::kTransferSrc, "the value of GPUBufferUsage_kTransferSrc does not match with implementation");
  static_assert(8 == GPUBufferUsage::kTransferDst, "the value of GPUBufferUsage_kTransferDst does not match with implementation");
  static_assert(16 == GPUBufferUsage::kIndex, "the value of GPUBufferUsage_kIndex does not match with implementation");
  static_assert(32 == GPUBufferUsage::kVertex, "the value of GPUBufferUsage_kVertex does not match with implementation");
  static_assert(64 == GPUBufferUsage::kUniform, "the value of GPUBufferUsage_kUniform does not match with implementation");
  static_assert(128 == GPUBufferUsage::kStorage, "the value of GPUBufferUsage_kStorage does not match with implementation");

  // Custom signature

  V8GPUBufferUsage::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8GPUBufferUsage::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebGPUEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8GPUBufferUsage::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8GPUBufferUsage::GetWrapperTypeInfo()),
      InstallV8GPUBufferUsageTemplate);
}

bool V8GPUBufferUsage::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8GPUBufferUsage::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8GPUBufferUsage::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8GPUBufferUsage::GetWrapperTypeInfo(), v8_value);
}

GPUBufferUsage* V8GPUBufferUsage::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

GPUBufferUsage* NativeValueTraits<GPUBufferUsage>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GPUBufferUsage* native_value = V8GPUBufferUsage::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "GPUBufferUsage"));
  }
  return native_value;
}

}  // namespace blink
