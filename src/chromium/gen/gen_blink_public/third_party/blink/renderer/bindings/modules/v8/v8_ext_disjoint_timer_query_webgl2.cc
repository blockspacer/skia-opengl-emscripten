// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_ext_disjoint_timer_query_webgl2.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
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
const WrapperTypeInfo v8_ext_disjoint_timer_query_webgl2_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8EXTDisjointTimerQueryWebGL2::DomTemplate,
    nullptr,
    "EXTDisjointTimerQueryWebGL2",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in EXTDisjointTimerQueryWebGL2.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& EXTDisjointTimerQueryWebGL2::wrapper_type_info_ = v8_ext_disjoint_timer_query_webgl2_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, EXTDisjointTimerQueryWebGL2>::value,
    "EXTDisjointTimerQueryWebGL2 inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&EXTDisjointTimerQueryWebGL2::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "EXTDisjointTimerQueryWebGL2 is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ext_disjoint_timer_query_webgl2_v8_internal {

static void QueryCounterEXTMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "EXTDisjointTimerQueryWebGL2", "queryCounterEXT");

  EXTDisjointTimerQueryWebGL2* impl = V8EXTDisjointTimerQueryWebGL2::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLQuery* query;
  uint32_t target;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLQuery'.");
    return;
  }

  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->queryCounterEXT(query, target);
}

}  // namespace ext_disjoint_timer_query_webgl2_v8_internal

void V8EXTDisjointTimerQueryWebGL2::QueryCounterEXTMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_EXTDisjointTimerQueryWebGL2_queryCounterEXT");

  ext_disjoint_timer_query_webgl2_v8_internal::QueryCounterEXTMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8EXTDisjointTimerQueryWebGL2Methods[] = {
    {"queryCounterEXT", V8EXTDisjointTimerQueryWebGL2::QueryCounterEXTMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8EXTDisjointTimerQueryWebGL2Template(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8EXTDisjointTimerQueryWebGL2::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8EXTDisjointTimerQueryWebGL2::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"QUERY_COUNTER_BITS_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8864)},
        {"TIME_ELAPSED_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88BF)},
        {"TIMESTAMP_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E28)},
        {"GPU_DISJOINT_EXT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8FBB)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8EXTDisjointTimerQueryWebGL2Methods, base::size(kV8EXTDisjointTimerQueryWebGL2Methods));

  // Custom signature

  V8EXTDisjointTimerQueryWebGL2::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8EXTDisjointTimerQueryWebGL2::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8EXTDisjointTimerQueryWebGL2::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8EXTDisjointTimerQueryWebGL2::GetWrapperTypeInfo()),
      InstallV8EXTDisjointTimerQueryWebGL2Template);
}

bool V8EXTDisjointTimerQueryWebGL2::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8EXTDisjointTimerQueryWebGL2::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8EXTDisjointTimerQueryWebGL2::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8EXTDisjointTimerQueryWebGL2::GetWrapperTypeInfo(), v8_value);
}

EXTDisjointTimerQueryWebGL2* V8EXTDisjointTimerQueryWebGL2::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

EXTDisjointTimerQueryWebGL2* NativeValueTraits<EXTDisjointTimerQueryWebGL2>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  EXTDisjointTimerQueryWebGL2* native_value = V8EXTDisjointTimerQueryWebGL2::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "EXTDisjointTimerQueryWebGL2"));
  }
  return native_value;
}

}  // namespace blink
