// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_text_metrics.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_baselines.h"
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
const WrapperTypeInfo v8_text_metrics_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8TextMetrics::DomTemplate,
    nullptr,
    "TextMetrics",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextMetrics.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& TextMetrics::wrapper_type_info_ = v8_text_metrics_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, TextMetrics>::value,
    "TextMetrics inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&TextMetrics::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "TextMetrics is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace text_metrics_v8_internal {

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->width());
}

static void AdvancesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, FreezeV8Object(ToV8(impl->advances(), info.Holder(), info.GetIsolate()), info.GetIsolate()));
}

static void ActualBoundingBoxLeftAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxLeft());
}

static void ActualBoundingBoxRightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxRight());
}

static void FontBoundingBoxAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->fontBoundingBoxAscent());
}

static void FontBoundingBoxDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->fontBoundingBoxDescent());
}

static void ActualBoundingBoxAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxAscent());
}

static void ActualBoundingBoxDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->actualBoundingBoxDescent());
}

static void EmHeightAscentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->emHeightAscent());
}

static void EmHeightDescentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  TextMetrics* impl = V8TextMetrics::ToImpl(holder);

  V8SetReturnValue(info, impl->emHeightDescent());
}

static void GetBaselinesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  TextMetrics* impl = V8TextMetrics::ToImpl(info.Holder());

  Baselines* result = impl->getBaselines();
  V8SetReturnValue(info, result);
}

}  // namespace text_metrics_v8_internal

void V8TextMetrics::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_width_Getter");

  text_metrics_v8_internal::WidthAttributeGetter(info);
}

void V8TextMetrics::AdvancesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_advances_Getter");

  text_metrics_v8_internal::AdvancesAttributeGetter(info);
}

void V8TextMetrics::ActualBoundingBoxLeftAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxLeft_Getter");

  text_metrics_v8_internal::ActualBoundingBoxLeftAttributeGetter(info);
}

void V8TextMetrics::ActualBoundingBoxRightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxRight_Getter");

  text_metrics_v8_internal::ActualBoundingBoxRightAttributeGetter(info);
}

void V8TextMetrics::FontBoundingBoxAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_fontBoundingBoxAscent_Getter");

  text_metrics_v8_internal::FontBoundingBoxAscentAttributeGetter(info);
}

void V8TextMetrics::FontBoundingBoxDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_fontBoundingBoxDescent_Getter");

  text_metrics_v8_internal::FontBoundingBoxDescentAttributeGetter(info);
}

void V8TextMetrics::ActualBoundingBoxAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxAscent_Getter");

  text_metrics_v8_internal::ActualBoundingBoxAscentAttributeGetter(info);
}

void V8TextMetrics::ActualBoundingBoxDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_actualBoundingBoxDescent_Getter");

  text_metrics_v8_internal::ActualBoundingBoxDescentAttributeGetter(info);
}

void V8TextMetrics::EmHeightAscentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_emHeightAscent_Getter");

  text_metrics_v8_internal::EmHeightAscentAttributeGetter(info);
}

void V8TextMetrics::EmHeightDescentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_emHeightDescent_Getter");

  text_metrics_v8_internal::EmHeightDescentAttributeGetter(info);
}

void V8TextMetrics::GetBaselinesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_TextMetrics_getBaselines");

  text_metrics_v8_internal::GetBaselinesMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8TextMetricsAccessors[] = {
    { "width", V8TextMetrics::WidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static void InstallV8TextMetricsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8TextMetrics::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8TextMetrics::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8TextMetricsAccessors, base::size(kV8TextMetricsAccessors));

  // Custom signature

  V8TextMetrics::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8TextMetrics::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::ExtendedTextMetricsEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "actualBoundingBoxAscent", V8TextMetrics::ActualBoundingBoxAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxDescent", V8TextMetrics::ActualBoundingBoxDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxLeft", V8TextMetrics::ActualBoundingBoxLeftAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "actualBoundingBoxRight", V8TextMetrics::ActualBoundingBoxRightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "advances", V8TextMetrics::AdvancesAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "emHeightAscent", V8TextMetrics::EmHeightAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "emHeightDescent", V8TextMetrics::EmHeightDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "fontBoundingBoxAscent", V8TextMetrics::FontBoundingBoxAscentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "fontBoundingBoxDescent", V8TextMetrics::FontBoundingBoxDescentAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::ExtendedTextMetricsEnabled()) {
    {
      // Install getBaselines configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"getBaselines", V8TextMetrics::GetBaselinesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8TextMetrics::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8TextMetrics::GetWrapperTypeInfo()),
      InstallV8TextMetricsTemplate);
}

bool V8TextMetrics::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8TextMetrics::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8TextMetrics::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8TextMetrics::GetWrapperTypeInfo(), v8_value);
}

TextMetrics* V8TextMetrics::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

TextMetrics* NativeValueTraits<TextMetrics>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TextMetrics* native_value = V8TextMetrics::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "TextMetrics"));
  }
  return native_value;
}

}  // namespace blink
