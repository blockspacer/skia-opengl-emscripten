// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_activity_logger.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
WrapperTypeInfo v8_html_video_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLVideoElement::DomTemplate,
    nullptr,
    "HTMLVideoElement",
    V8HTMLMediaElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLVideoElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLVideoElement::wrapper_type_info_ = v8_html_video_element_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLVideoElement>::value,
    "HTMLVideoElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLVideoElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLVideoElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_video_element_v8_internal {

static void WidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kWidthAttr))));
}

static void WidthAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "width");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kWidthAttr, cpp_value);
}

static void HeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, std::max(0, static_cast<int>(impl->GetIntegralAttribute(html_names::kHeightAttr))));
}

static void HeightAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "height");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  uint32_t cpp_value = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetUnsignedIntegralAttribute(html_names::kHeightAttr, cpp_value);
}

static void VideoWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->videoWidth());
}

static void VideoHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->videoHeight());
}

static void PosterAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->GetURLAttribute(html_names::kPosterAttr), info.GetIsolate());
}

static void PosterAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kPosterAttr, cpp_value);
}

static void IntrinsicSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->FastGetAttribute(html_names::kIntrinsicsizeAttr), info.GetIsolate());
}

static void IntrinsicSizeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kIntrinsicsizeAttr, cpp_value);
}

static void WebkitSupportsFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webkitSupportsFullscreen());
}

static void WebkitDisplayingFullscreenAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->webkitDisplayingFullscreen());
}

static void WebkitDecodedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitDecodedFrameCount());
}

static void WebkitDroppedFrameCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->webkitDroppedFrameCount());
}

static void PlaysInlineAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kPlaysinlineAttr));
}

static void PlaysInlineAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLVideoElement", "playsInline");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kPlaysinlineAttr, cpp_value);
}

static void WebkitEnterFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitEnterFullscreen();
}

static void WebkitExitFullscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitExitFullscreen();
}

static void WebkitEnterFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitEnterFullscreen();
}

static void WebkitExitFullScreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLVideoElement* impl = V8HTMLVideoElement::ToImpl(info.Holder());

  impl->webkitExitFullscreen();
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("HTMLVideoElement"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  V8HTMLConstructor::HtmlConstructor(
      info, *V8HTMLVideoElement::GetWrapperTypeInfo(), HTMLElementType::kHTMLVideoElement);
}

}  // namespace html_video_element_v8_internal

void V8HTMLVideoElement::WidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_width_Getter");

  html_video_element_v8_internal::WidthAttributeGetter(info);
}

void V8HTMLVideoElement::WidthAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_width_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_v8_internal::WidthAttributeSetter(v8_value, info);
}

void V8HTMLVideoElement::HeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_height_Getter");

  html_video_element_v8_internal::HeightAttributeGetter(info);
}

void V8HTMLVideoElement::HeightAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_height_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_v8_internal::HeightAttributeSetter(v8_value, info);
}

void V8HTMLVideoElement::VideoWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_videoWidth_Getter");

  html_video_element_v8_internal::VideoWidthAttributeGetter(info);
}

void V8HTMLVideoElement::VideoHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_videoHeight_Getter");

  html_video_element_v8_internal::VideoHeightAttributeGetter(info);
}

void V8HTMLVideoElement::PosterAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_poster_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLVideoElement_Poster_AttributeGetter);

  html_video_element_v8_internal::PosterAttributeGetter(info);
}

void V8HTMLVideoElement::PosterAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_poster_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  UseCounter::Count(CurrentExecutionContext(info.GetIsolate()), WebFeature::kV8HTMLVideoElement_Poster_AttributeSetter);

  html_video_element_v8_internal::PosterAttributeSetter(v8_value, info);
}

void V8HTMLVideoElement::IntrinsicSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_intrinsicSize_Getter");

  html_video_element_v8_internal::IntrinsicSizeAttributeGetter(info);
}

void V8HTMLVideoElement::IntrinsicSizeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_intrinsicSize_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_v8_internal::IntrinsicSizeAttributeSetter(v8_value, info);
}

void V8HTMLVideoElement::WebkitSupportsFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitSupportsFullscreen_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoSupportsFullscreen);

  html_video_element_v8_internal::WebkitSupportsFullscreenAttributeGetter(info);
}

void V8HTMLVideoElement::WebkitDisplayingFullscreenAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDisplayingFullscreen_Getter");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoDisplayingFullscreen);

  html_video_element_v8_internal::WebkitDisplayingFullscreenAttributeGetter(info);
}

void V8HTMLVideoElement::WebkitDecodedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDecodedFrameCount_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedVideoDecodedFrameCount);

  html_video_element_v8_internal::WebkitDecodedFrameCountAttributeGetter(info);
}

void V8HTMLVideoElement::WebkitDroppedFrameCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitDroppedFrameCount_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedVideoDroppedFrameCount);

  html_video_element_v8_internal::WebkitDroppedFrameCountAttributeGetter(info);
}

void V8HTMLVideoElement::PlaysInlineAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_playsInline_Getter");

  html_video_element_v8_internal::PlaysInlineAttributeGetter(info);
}

void V8HTMLVideoElement::PlaysInlineAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_playsInline_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_video_element_v8_internal::PlaysInlineAttributeSetter(v8_value, info);
}

void V8HTMLVideoElement::WebkitEnterFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitEnterFullscreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoEnterFullscreen);
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("HTMLVideoElement.webkitEnterFullscreen", info);
  }
  html_video_element_v8_internal::WebkitEnterFullscreenMethod(info);
}

void V8HTMLVideoElement::WebkitExitFullscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitExitFullscreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoExitFullscreen);
  html_video_element_v8_internal::WebkitExitFullscreenMethod(info);
}

void V8HTMLVideoElement::WebkitEnterFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitEnterFullScreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoEnterFullScreen);
  ScriptState* script_state = ScriptState::ForRelevantRealm(info);
  V8PerContextData* context_data = script_state->PerContextData();
  if (context_data && context_data->ActivityLogger()) {
    context_data->ActivityLogger()->LogMethod("HTMLVideoElement.webkitEnterFullScreen", info);
  }
  html_video_element_v8_internal::WebkitEnterFullScreenMethod(info);
}

void V8HTMLVideoElement::WebkitExitFullScreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLVideoElement_webkitExitFullScreen");

  Deprecation::CountDeprecation(CurrentExecutionContext(info.GetIsolate()), WebFeature::kPrefixedVideoExitFullScreen);
  html_video_element_v8_internal::WebkitExitFullScreenMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLVideoElementAccessors[] = {
    { "width", V8HTMLVideoElement::WidthAttributeGetterCallback, V8HTMLVideoElement::WidthAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "height", V8HTMLVideoElement::HeightAttributeGetterCallback, V8HTMLVideoElement::HeightAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoWidth", V8HTMLVideoElement::VideoWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "videoHeight", V8HTMLVideoElement::VideoHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "poster", V8HTMLVideoElement::PosterAttributeGetterCallback, V8HTMLVideoElement::PosterAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitDecodedFrameCount", V8HTMLVideoElement::WebkitDecodedFrameCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitDroppedFrameCount", V8HTMLVideoElement::WebkitDroppedFrameCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "playsInline", V8HTMLVideoElement::PlaysInlineAttributeGetterCallback, V8HTMLVideoElement::PlaysInlineAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

void V8HTMLVideoElement::InstallV8HTMLVideoElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLVideoElement::GetWrapperTypeInfo()->interface_name, V8HTMLMediaElement::DomTemplate(isolate, world), V8HTMLVideoElement::kInternalFieldCount);
  interface_template->SetCallHandler(html_video_element_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLVideoElementAccessors, base::size(kV8HTMLVideoElementAccessors));

  // Custom signature
}

void V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::ExperimentalProductivityFeaturesEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "intrinsicSize", V8HTMLVideoElement::IntrinsicSizeAttributeGetterCallback, V8HTMLVideoElement::IntrinsicSizeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "webkitDisplayingFullscreen", V8HTMLVideoElement::WebkitDisplayingFullscreenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "webkitSupportsFullscreen", V8HTMLVideoElement::WebkitSupportsFullscreenAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    {
      // Install webkitEnterFullscreen configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitEnterFullscreen", V8HTMLVideoElement::WebkitEnterFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    {
      // Install webkitExitFullscreen configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitExitFullscreen", V8HTMLVideoElement::WebkitExitFullscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    {
      // Install webkitEnterFullScreen configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitEnterFullScreen", V8HTMLVideoElement::WebkitEnterFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
  if (RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled()) {
    {
      // Install webkitExitFullScreen configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"webkitExitFullScreen", V8HTMLVideoElement::WebkitExitFullScreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8HTMLVideoElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLVideoElement::GetWrapperTypeInfo()),
      V8HTMLVideoElement::install_v8_html_video_element_template_function_);
}

bool V8HTMLVideoElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLVideoElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLVideoElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLVideoElement::GetWrapperTypeInfo(), v8_value);
}

HTMLVideoElement* V8HTMLVideoElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLVideoElement* NativeValueTraits<HTMLVideoElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLVideoElement* native_value = V8HTMLVideoElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLVideoElement"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLVideoElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLVideoElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8HTMLVideoElement::install_v8_html_video_element_template_function_ =
    &V8HTMLVideoElement::InstallV8HTMLVideoElementTemplate;

void V8HTMLVideoElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLVideoElement::install_v8_html_video_element_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLVideoElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLVideoElement::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
