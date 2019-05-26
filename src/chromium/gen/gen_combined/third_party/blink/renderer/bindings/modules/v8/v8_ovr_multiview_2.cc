// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_ovr_multiview_2.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
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
const WrapperTypeInfo v8_ovr_multiview_2_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8OVRMultiview2::DomTemplate,
    nullptr,
    "OVRMultiview2",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in OVRMultiview2.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& OVRMultiview2::wrapper_type_info_ = v8_ovr_multiview_2_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, OVRMultiview2>::value,
    "OVRMultiview2 inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&OVRMultiview2::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "OVRMultiview2 is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ovr_multiview_2_v8_internal {

static void FramebufferTextureMultiviewOVRMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "OVRMultiview2", "framebufferTextureMultiviewOVR");

  OVRMultiview2* impl = V8OVRMultiview2::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  WebGLTexture* texture;
  int32_t level;
  int32_t base_view_index;
  int32_t num_views;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!texture && !IsUndefinedOrNull(info[2])) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'WebGLTexture'.");
    return;
  }

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  base_view_index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  num_views = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->framebufferTextureMultiviewOVR(target, attachment, texture, level, base_view_index, num_views);
}

}  // namespace ovr_multiview_2_v8_internal

void V8OVRMultiview2::FramebufferTextureMultiviewOVRMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_OVRMultiview2_framebufferTextureMultiviewOVR");

  ovr_multiview_2_v8_internal::FramebufferTextureMultiviewOVRMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8OVRMultiview2Methods[] = {
    {"framebufferTextureMultiviewOVR", V8OVRMultiview2::FramebufferTextureMultiviewOVRMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8OVRMultiview2Template(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8OVRMultiview2::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8OVRMultiview2::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9630)},
        {"FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9632)},
        {"MAX_VIEWS_OVR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9631)},
        {"FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9633)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8OVRMultiview2Methods, base::size(kV8OVRMultiview2Methods));

  // Custom signature

  V8OVRMultiview2::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8OVRMultiview2::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8OVRMultiview2::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8OVRMultiview2::GetWrapperTypeInfo()),
      InstallV8OVRMultiview2Template);
}

bool V8OVRMultiview2::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8OVRMultiview2::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8OVRMultiview2::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8OVRMultiview2::GetWrapperTypeInfo(), v8_value);
}

OVRMultiview2* V8OVRMultiview2::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

OVRMultiview2* NativeValueTraits<OVRMultiview2>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OVRMultiview2* native_value = V8OVRMultiview2::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "OVRMultiview2"));
  }
  return native_value;
}

}  // namespace blink
