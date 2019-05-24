// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_vtt_region.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
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
const WrapperTypeInfo v8_vtt_region_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8VTTRegion::DomTemplate,
    nullptr,
    "VTTRegion",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in VTTRegion.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& VTTRegion::wrapper_type_info_ = v8_vtt_region_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, VTTRegion>::value,
    "VTTRegion inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&VTTRegion::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "VTTRegion is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace vtt_region_v8_internal {

static void IdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueString(info, impl->id(), info.GetIsolate());
}

static void IdAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setId(cpp_value);
}

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->width());
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "width");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setWidth(cpp_value, exception_state);
}

static void LinesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->lines());
}

static void LinesAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "lines");

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setLines(cpp_value);
}

static void RegionAnchorXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->regionAnchorX());
}

static void RegionAnchorXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "regionAnchorX");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRegionAnchorX(cpp_value, exception_state);
}

static void RegionAnchorYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->regionAnchorY());
}

static void RegionAnchorYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "regionAnchorY");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setRegionAnchorY(cpp_value, exception_state);
}

static void ViewportAnchorXAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->viewportAnchorX());
}

static void ViewportAnchorXAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "viewportAnchorX");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setViewportAnchorX(cpp_value, exception_state);
}

static void ViewportAnchorYAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValue(info, impl->viewportAnchorY());
}

static void ViewportAnchorYAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "viewportAnchorY");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setViewportAnchorY(cpp_value, exception_state);
}

static void ScrollAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  V8SetReturnValueString(info, impl->scroll(), info.GetIsolate());
}

static void ScrollAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  VTTRegion* impl = V8VTTRegion::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "VTTRegion", "scroll");

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  // Type check per: http://heycam.github.io/webidl/#dfn-attribute-setter
  // Returns undefined without setting the value if the value is invalid.
  DummyExceptionStateForTesting dummy_exception_state;
  {
    const char* kValidValues[] = {
      "",
      "up",
  };
    if (!IsValidEnum(cpp_value, kValidValues, base::size(kValidValues),
                     "ScrollSetting", dummy_exception_state)) {
      ExecutionContext::ForCurrentRealm(info)->AddConsoleMessage(
          ConsoleMessage::Create(mojom::ConsoleMessageSource::kJavaScript,
                                 mojom::ConsoleMessageLevel::kWarning,
                                 dummy_exception_state.Message()));
      return;
    }
  }

  impl->setScroll(cpp_value);
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_ConstructorCallback");

  VTTRegion* impl = VTTRegion::Create();
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8VTTRegion::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("VTTRegion"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  vtt_region_v8_internal::Constructor(info);
}

}  // namespace vtt_region_v8_internal

void V8VTTRegion::IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_id_Getter");

  vtt_region_v8_internal::IdAttributeGetter(info);
}

void V8VTTRegion::IdAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_id_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::IdAttributeSetter(v8_value, info);
}

void V8VTTRegion::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_width_Getter");

  vtt_region_v8_internal::WidthAttributeGetter(info);
}

void V8VTTRegion::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8VTTRegion::LinesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_lines_Getter");

  vtt_region_v8_internal::LinesAttributeGetter(info);
}

void V8VTTRegion::LinesAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_lines_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::LinesAttributeSetter(v8_value, info);
}

void V8VTTRegion::RegionAnchorXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorX_Getter");

  vtt_region_v8_internal::RegionAnchorXAttributeGetter(info);
}

void V8VTTRegion::RegionAnchorXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::RegionAnchorXAttributeSetter(v8_value, info);
}

void V8VTTRegion::RegionAnchorYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorY_Getter");

  vtt_region_v8_internal::RegionAnchorYAttributeGetter(info);
}

void V8VTTRegion::RegionAnchorYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_regionAnchorY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::RegionAnchorYAttributeSetter(v8_value, info);
}

void V8VTTRegion::ViewportAnchorXAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorX_Getter");

  vtt_region_v8_internal::ViewportAnchorXAttributeGetter(info);
}

void V8VTTRegion::ViewportAnchorXAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorX_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::ViewportAnchorXAttributeSetter(v8_value, info);
}

void V8VTTRegion::ViewportAnchorYAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorY_Getter");

  vtt_region_v8_internal::ViewportAnchorYAttributeGetter(info);
}

void V8VTTRegion::ViewportAnchorYAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_viewportAnchorY_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::ViewportAnchorYAttributeSetter(v8_value, info);
}

void V8VTTRegion::ScrollAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_scroll_Getter");

  vtt_region_v8_internal::ScrollAttributeGetter(info);
}

void V8VTTRegion::ScrollAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VTTRegion_scroll_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  vtt_region_v8_internal::ScrollAttributeSetter(v8_value, info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8VTTRegionAccessors[] = {
    { "id", V8VTTRegion::IdAttributeGetterCallback, V8VTTRegion::IdAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "width", V8VTTRegion::WidthAttributeGetterCallback, V8VTTRegion::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lines", V8VTTRegion::LinesAttributeGetterCallback, V8VTTRegion::LinesAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "regionAnchorX", V8VTTRegion::RegionAnchorXAttributeGetterCallback, V8VTTRegion::RegionAnchorXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "regionAnchorY", V8VTTRegion::RegionAnchorYAttributeGetterCallback, V8VTTRegion::RegionAnchorYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "viewportAnchorX", V8VTTRegion::ViewportAnchorXAttributeGetterCallback, V8VTTRegion::ViewportAnchorXAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "viewportAnchorY", V8VTTRegion::ViewportAnchorYAttributeGetterCallback, V8VTTRegion::ViewportAnchorYAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "scroll", V8VTTRegion::ScrollAttributeGetterCallback, V8VTTRegion::ScrollAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8VTTRegionTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8VTTRegion::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8VTTRegion::kInternalFieldCount);
  interface_template->SetCallHandler(vtt_region_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  if (!RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8VTTRegionAccessors, base::size(kV8VTTRegionAccessors));

  // Custom signature

  V8VTTRegion::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8VTTRegion::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebVTTRegionsEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8VTTRegion::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8VTTRegion::GetWrapperTypeInfo()),
      InstallV8VTTRegionTemplate);
}

bool V8VTTRegion::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8VTTRegion::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8VTTRegion::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8VTTRegion::GetWrapperTypeInfo(), v8_value);
}

VTTRegion* V8VTTRegion::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

VTTRegion* NativeValueTraits<VTTRegion>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  VTTRegion* native_value = V8VTTRegion::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "VTTRegion"));
  }
  return native_value;
}

}  // namespace blink
