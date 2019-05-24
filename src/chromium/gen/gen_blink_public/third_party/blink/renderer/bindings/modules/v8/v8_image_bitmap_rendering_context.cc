// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
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
const WrapperTypeInfo v8_image_bitmap_rendering_context_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8ImageBitmapRenderingContext::DomTemplate,
    nullptr,
    "ImageBitmapRenderingContext",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ImageBitmapRenderingContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& ImageBitmapRenderingContext::wrapper_type_info_ = v8_image_bitmap_rendering_context_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, ImageBitmapRenderingContext>::value,
    "ImageBitmapRenderingContext inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&ImageBitmapRenderingContext::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "ImageBitmapRenderingContext is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace image_bitmap_rendering_context_v8_internal {

static void CanvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  ImageBitmapRenderingContext* impl = V8ImageBitmapRenderingContext::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->canvas()), impl);
}

static void TransferFromImageBitmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "ImageBitmapRenderingContext", "transferFromImageBitmap");

  ImageBitmapRenderingContext* impl = V8ImageBitmapRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ImageBitmap* bitmap;
  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!bitmap && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ImageBitmap'.");
    return;
  }

  impl->transferFromImageBitmap(bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace image_bitmap_rendering_context_v8_internal

void V8ImageBitmapRenderingContext::CanvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageBitmapRenderingContext_canvas_Getter");

  image_bitmap_rendering_context_v8_internal::CanvasAttributeGetter(info);
}

void V8ImageBitmapRenderingContext::TransferFromImageBitmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_ImageBitmapRenderingContext_transferFromImageBitmap");

  image_bitmap_rendering_context_v8_internal::TransferFromImageBitmapMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8ImageBitmapRenderingContextAccessors[] = {
    { "canvas", V8ImageBitmapRenderingContext::CanvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8ImageBitmapRenderingContextMethods[] = {
    {"transferFromImageBitmap", V8ImageBitmapRenderingContext::TransferFromImageBitmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8ImageBitmapRenderingContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8ImageBitmapRenderingContext::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8ImageBitmapRenderingContext::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ImageBitmapRenderingContextAccessors, base::size(kV8ImageBitmapRenderingContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8ImageBitmapRenderingContextMethods, base::size(kV8ImageBitmapRenderingContextMethods));

  // Custom signature

  V8ImageBitmapRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8ImageBitmapRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8ImageBitmapRenderingContext::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8ImageBitmapRenderingContext::GetWrapperTypeInfo()),
      InstallV8ImageBitmapRenderingContextTemplate);
}

bool V8ImageBitmapRenderingContext::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8ImageBitmapRenderingContext::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8ImageBitmapRenderingContext::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8ImageBitmapRenderingContext::GetWrapperTypeInfo(), v8_value);
}

ImageBitmapRenderingContext* V8ImageBitmapRenderingContext::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ImageBitmapRenderingContext* NativeValueTraits<ImageBitmapRenderingContext>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ImageBitmapRenderingContext* native_value = V8ImageBitmapRenderingContext::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "ImageBitmapRenderingContext"));
  }
  return native_value;
}

}  // namespace blink
