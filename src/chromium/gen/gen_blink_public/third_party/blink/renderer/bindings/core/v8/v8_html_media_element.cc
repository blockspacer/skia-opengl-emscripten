// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_audio_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_token_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_error.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_text_track_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_time_ranges.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track_list.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
#include "third_party/blink/renderer/core/html/custom/ce_reactions_scope.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
WrapperTypeInfo v8_html_media_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8HTMLMediaElement::DomTemplate,
    nullptr,
    "HTMLMediaElement",
    V8HTMLElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLMediaElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& HTMLMediaElement::wrapper_type_info_ = v8_html_media_element_wrapper_type_info;

// [ActiveScriptWrappable]
static_assert(
    std::is_base_of<ActiveScriptWrappableBase, HTMLMediaElement>::value,
    "HTMLMediaElement does not inherit from ActiveScriptWrappable<>, but specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    !std::is_same<decltype(&HTMLMediaElement::HasPendingActivity),
                  decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "HTMLMediaElement is not overriding hasPendingActivity(), but is specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace html_media_element_v8_internal {

static void ErrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->error()), impl);
}

static void SrcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  USVStringOrTrustedURL result;
  impl->GetURLAttribute(html_names::kSrcAttr, result);

  V8SetReturnValue(info, result);
}

static void SrcAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "src");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  USVStringOrTrustedURL cpp_value;
  V8USVStringOrTrustedURL::ToImpl(info.GetIsolate(), v8_value, cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
  if (exception_state.HadException())
    return;

  impl->setAttribute(html_names::kSrcAttr, cpp_value, exception_state);
}

static void CurrentSrcAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->currentSrc(), info.GetIsolate());
}

static void CrossOriginAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  String cpp_value(impl->FastGetAttribute(html_names::kCrossoriginAttr));

  if (cpp_value.IsNull()) {
    ;
  } else if (cpp_value.IsEmpty()) {
    cpp_value = "anonymous";
  } else if (EqualIgnoringASCIICase(cpp_value, "anonymous")) {
    cpp_value = "anonymous";
  } else if (EqualIgnoringASCIICase(cpp_value, "use-credentials")) {
    cpp_value = "use-credentials";
  } else {
    cpp_value = "anonymous";
  }

  V8SetReturnValueStringOrNull(info, cpp_value, info.GetIsolate());
}

static void CrossOriginAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<kTreatNullAndUndefinedAsNullString> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setAttribute(html_names::kCrossoriginAttr, cpp_value);
}

static void NetworkStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getNetworkState());
}

static void PreloadAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueString(info, impl->preload(), info.GetIsolate());
}

static void PreloadAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  V8StringResource<> cpp_value = v8_value;
  if (!cpp_value.Prepare())
    return;

  impl->setPreload(cpp_value);
}

static void BufferedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->buffered()), impl);
}

static void ReadyStateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->getReadyState());
}

static void SeekingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->seeking());
}

static void CurrentTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->currentTime());
}

static void CurrentTimeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "currentTime");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setCurrentTime(cpp_value);
}

static void DurationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->duration());
}

static void PausedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->paused());
}

static void DefaultPlaybackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->defaultPlaybackRate());
}

static void DefaultPlaybackRateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "defaultPlaybackRate");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setDefaultPlaybackRate(cpp_value);
}

static void PlaybackRateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->playbackRate());
}

static void PlaybackRateAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "playbackRate");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setPlaybackRate(cpp_value, exception_state);
}

static void PlayedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->played()), impl);
}

static void SeekableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->seekable()), impl);
}

static void EndedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->ended());
}

static void AutoplayAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kAutoplayAttr));
}

static void AutoplayAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "autoplay");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kAutoplayAttr, cpp_value);
}

static void LoopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kLoopAttr));
}

static void LoopAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "loop");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kLoopAttr, cpp_value);
}

static void ControlsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kControlsAttr));
}

static void ControlsAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "controls");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kControlsAttr, cpp_value);
}

static void ControlsListAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->controlsList()), impl);
}

static void ControlsListAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  // [PutForwards] => controlsList.value
  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "controlsList");
  v8::Local<v8::Value> target;
  if (!holder->Get(isolate->GetCurrentContext(), V8AtomicString(isolate, "controlsList"))
      .ToLocal(&target)) {
    return;
  }
  if (!target->IsObject()) {
    exception_state.ThrowTypeError("The attribute value is not an object");
    return;
  }
  bool result;
  if (!target.As<v8::Object>()->Set(
          isolate->GetCurrentContext(),
          V8AtomicString(isolate, "value"),
          v8_value).To(&result)) {
    return;
  }
  if (!result)
    return;
}

static void VolumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, impl->volume());
}

static void VolumeAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "volume");

  // Prepare the value to be set.
  double cpp_value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setVolume(cpp_value, exception_state);
}

static void MutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->muted());
}

static void MutedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "muted");

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->setMuted(cpp_value);
}

static void DefaultMutedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueBool(info, impl->FastHasAttribute(html_names::kMutedAttr));
}

static void DefaultMutedAttributeSetter(
    v8::Local<v8::Value> v8_value, const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Isolate* isolate = info.GetIsolate();
  ALLOW_UNUSED_LOCAL(isolate);

  v8::Local<v8::Object> holder = info.Holder();
  ALLOW_UNUSED_LOCAL(holder);

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  ExceptionState exception_state(isolate, ExceptionState::kSetterContext, "HTMLMediaElement", "defaultMuted");
  CEReactionsScope ce_reactions_scope;

  // Prepare the value to be set.
  bool cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), v8_value, exception_state);
  if (exception_state.HadException())
    return;

  impl->SetBooleanAttribute(html_names::kMutedAttr, cpp_value);
}

static void AudioTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->audioTracks()), impl);
}

static void VideoTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->videoTracks()), impl);
}

static void TextTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->textTracks()), impl);
}

static void WebkitAudioDecodedByteCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->webkitAudioDecodedByteCount()));
}

static void WebkitVideoDecodedByteCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(holder);

  V8SetReturnValue(info, static_cast<double>(impl->webkitVideoDecodedByteCount()));
}

static void LoadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  impl->load();
}

static void CanPlayTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("canPlayType", "HTMLMediaElement", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> type;
  type = info[0];
  if (!type.Prepare())
    return;

  V8SetReturnValueString(info, impl->canPlayType(type), info.GetIsolate());
}

static void PlayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "play");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8HTMLMediaElement::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->playForBindings(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void PauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  impl->pause();
}

static void AddTextTrackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLMediaElement", "addTextTrack");

  HTMLMediaElement* impl = V8HTMLMediaElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> kind;
  V8StringResource<> label;
  V8StringResource<> language;
  kind = info[0];
  if (!kind.Prepare())
    return;
  const char* kValidKindValues[] = {
      "subtitles",
      "captions",
      "descriptions",
      "chapters",
      "metadata",
  };
  if (!IsValidEnum(kind, kValidKindValues, base::size(kValidKindValues), "TextTrackKind", exception_state)) {
    return;
  }

  if (!info[1]->IsUndefined()) {
    label = info[1];
    if (!label.Prepare())
      return;
  } else {
    label = WTF::g_empty_string;
  }
  if (!info[2]->IsUndefined()) {
    language = info[2];
    if (!language.Prepare())
      return;
  } else {
    language = WTF::g_empty_string;
  }

  TextTrack* result = impl->addTextTrack(kind, label, language, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

}  // namespace html_media_element_v8_internal

void V8HTMLMediaElement::ErrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_error_Getter");

  html_media_element_v8_internal::ErrorAttributeGetter(info);
}

void V8HTMLMediaElement::SrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_src_Getter");

  html_media_element_v8_internal::SrcAttributeGetter(info);
}

void V8HTMLMediaElement::SrcAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_src_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::SrcAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::CurrentSrcAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentSrc_Getter");

  html_media_element_v8_internal::CurrentSrcAttributeGetter(info);
}

void V8HTMLMediaElement::CrossOriginAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_crossOrigin_Getter");

  html_media_element_v8_internal::CrossOriginAttributeGetter(info);
}

void V8HTMLMediaElement::CrossOriginAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_crossOrigin_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::CrossOriginAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::NetworkStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_networkState_Getter");

  html_media_element_v8_internal::NetworkStateAttributeGetter(info);
}

void V8HTMLMediaElement::PreloadAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_preload_Getter");

  html_media_element_v8_internal::PreloadAttributeGetter(info);
}

void V8HTMLMediaElement::PreloadAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_preload_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::PreloadAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::BufferedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_buffered_Getter");

  html_media_element_v8_internal::BufferedAttributeGetter(info);
}

void V8HTMLMediaElement::ReadyStateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_readyState_Getter");

  html_media_element_v8_internal::ReadyStateAttributeGetter(info);
}

void V8HTMLMediaElement::SeekingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_seeking_Getter");

  html_media_element_v8_internal::SeekingAttributeGetter(info);
}

void V8HTMLMediaElement::CurrentTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentTime_Getter");

  html_media_element_v8_internal::CurrentTimeAttributeGetter(info);
}

void V8HTMLMediaElement::CurrentTimeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_currentTime_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::CurrentTimeAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::DurationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_duration_Getter");

  html_media_element_v8_internal::DurationAttributeGetter(info);
}

void V8HTMLMediaElement::PausedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_paused_Getter");

  html_media_element_v8_internal::PausedAttributeGetter(info);
}

void V8HTMLMediaElement::DefaultPlaybackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultPlaybackRate_Getter");

  html_media_element_v8_internal::DefaultPlaybackRateAttributeGetter(info);
}

void V8HTMLMediaElement::DefaultPlaybackRateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultPlaybackRate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::DefaultPlaybackRateAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::PlaybackRateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_playbackRate_Getter");

  html_media_element_v8_internal::PlaybackRateAttributeGetter(info);
}

void V8HTMLMediaElement::PlaybackRateAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_playbackRate_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::PlaybackRateAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::PlayedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_played_Getter");

  html_media_element_v8_internal::PlayedAttributeGetter(info);
}

void V8HTMLMediaElement::SeekableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_seekable_Getter");

  html_media_element_v8_internal::SeekableAttributeGetter(info);
}

void V8HTMLMediaElement::EndedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_ended_Getter");

  html_media_element_v8_internal::EndedAttributeGetter(info);
}

void V8HTMLMediaElement::AutoplayAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_autoplay_Getter");

  html_media_element_v8_internal::AutoplayAttributeGetter(info);
}

void V8HTMLMediaElement::AutoplayAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_autoplay_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::AutoplayAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::LoopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_loop_Getter");

  html_media_element_v8_internal::LoopAttributeGetter(info);
}

void V8HTMLMediaElement::LoopAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_loop_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::LoopAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::ControlsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controls_Getter");

  html_media_element_v8_internal::ControlsAttributeGetter(info);
}

void V8HTMLMediaElement::ControlsAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controls_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::ControlsAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::ControlsListAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controlsList_Getter");

  html_media_element_v8_internal::ControlsListAttributeGetter(info);
}

void V8HTMLMediaElement::ControlsListAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_controlsList_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::ControlsListAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::VolumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_volume_Getter");

  html_media_element_v8_internal::VolumeAttributeGetter(info);
}

void V8HTMLMediaElement::VolumeAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_volume_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::VolumeAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::MutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_muted_Getter");

  html_media_element_v8_internal::MutedAttributeGetter(info);
}

void V8HTMLMediaElement::MutedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_muted_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::MutedAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::DefaultMutedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultMuted_Getter");

  html_media_element_v8_internal::DefaultMutedAttributeGetter(info);
}

void V8HTMLMediaElement::DefaultMutedAttributeSetterCallback(
    const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_defaultMuted_Setter");

  v8::Local<v8::Value> v8_value = info[0];

  html_media_element_v8_internal::DefaultMutedAttributeSetter(v8_value, info);
}

void V8HTMLMediaElement::AudioTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_audioTracks_Getter");

  html_media_element_v8_internal::AudioTracksAttributeGetter(info);
}

void V8HTMLMediaElement::VideoTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_videoTracks_Getter");

  html_media_element_v8_internal::VideoTracksAttributeGetter(info);
}

void V8HTMLMediaElement::TextTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_textTracks_Getter");

  html_media_element_v8_internal::TextTracksAttributeGetter(info);
}

void V8HTMLMediaElement::WebkitAudioDecodedByteCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_webkitAudioDecodedByteCount_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedAudioDecodedByteCount);

  html_media_element_v8_internal::WebkitAudioDecodedByteCountAttributeGetter(info);
}

void V8HTMLMediaElement::WebkitVideoDecodedByteCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_webkitVideoDecodedByteCount_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kPrefixedVideoDecodedByteCount);

  html_media_element_v8_internal::WebkitVideoDecodedByteCountAttributeGetter(info);
}

void V8HTMLMediaElement::LoadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_load");

  html_media_element_v8_internal::LoadMethod(info);
}

void V8HTMLMediaElement::CanPlayTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_canPlayType");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8HTMLMediaElement_CanPlayType_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8HTMLMediaElement_CanPlayType_Method);
  html_media_element_v8_internal::CanPlayTypeMethod(info);
}

void V8HTMLMediaElement::PlayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_play");

  html_media_element_v8_internal::PlayMethod(info);
}

void V8HTMLMediaElement::PauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_pause");

  html_media_element_v8_internal::PauseMethod(info);
}

void V8HTMLMediaElement::AddTextTrackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLMediaElement_addTextTrack");

  html_media_element_v8_internal::AddTextTrackMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8HTMLMediaElementAccessors[] = {
    { "error", V8HTMLMediaElement::ErrorAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "src", V8HTMLMediaElement::SrcAttributeGetterCallback, V8HTMLMediaElement::SrcAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentSrc", V8HTMLMediaElement::CurrentSrcAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "crossOrigin", V8HTMLMediaElement::CrossOriginAttributeGetterCallback, V8HTMLMediaElement::CrossOriginAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "networkState", V8HTMLMediaElement::NetworkStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "preload", V8HTMLMediaElement::PreloadAttributeGetterCallback, V8HTMLMediaElement::PreloadAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "buffered", V8HTMLMediaElement::BufferedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "readyState", V8HTMLMediaElement::ReadyStateAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "seeking", V8HTMLMediaElement::SeekingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "currentTime", V8HTMLMediaElement::CurrentTimeAttributeGetterCallback, V8HTMLMediaElement::CurrentTimeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "duration", V8HTMLMediaElement::DurationAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "paused", V8HTMLMediaElement::PausedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultPlaybackRate", V8HTMLMediaElement::DefaultPlaybackRateAttributeGetterCallback, V8HTMLMediaElement::DefaultPlaybackRateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "playbackRate", V8HTMLMediaElement::PlaybackRateAttributeGetterCallback, V8HTMLMediaElement::PlaybackRateAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "played", V8HTMLMediaElement::PlayedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "seekable", V8HTMLMediaElement::SeekableAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "ended", V8HTMLMediaElement::EndedAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "autoplay", V8HTMLMediaElement::AutoplayAttributeGetterCallback, V8HTMLMediaElement::AutoplayAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "loop", V8HTMLMediaElement::LoopAttributeGetterCallback, V8HTMLMediaElement::LoopAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "controls", V8HTMLMediaElement::ControlsAttributeGetterCallback, V8HTMLMediaElement::ControlsAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "controlsList", V8HTMLMediaElement::ControlsListAttributeGetterCallback, V8HTMLMediaElement::ControlsListAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "volume", V8HTMLMediaElement::VolumeAttributeGetterCallback, V8HTMLMediaElement::VolumeAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "muted", V8HTMLMediaElement::MutedAttributeGetterCallback, V8HTMLMediaElement::MutedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "defaultMuted", V8HTMLMediaElement::DefaultMutedAttributeGetterCallback, V8HTMLMediaElement::DefaultMutedAttributeSetterCallback, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textTracks", V8HTMLMediaElement::TextTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitAudioDecodedByteCount", V8HTMLMediaElement::WebkitAudioDecodedByteCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "webkitVideoDecodedByteCount", V8HTMLMediaElement::WebkitVideoDecodedByteCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLMediaElementMethods[] = {
    {"load", V8HTMLMediaElement::LoadMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canPlayType", V8HTMLMediaElement::CanPlayTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"play", V8HTMLMediaElement::PlayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pause", V8HTMLMediaElement::PauseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTextTrack", V8HTMLMediaElement::AddTextTrackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLMediaElement::InstallV8HTMLMediaElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8HTMLMediaElement::GetWrapperTypeInfo()->interface_name, V8HTMLElement::DomTemplate(isolate, world), V8HTMLMediaElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"NETWORK_EMPTY", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"NETWORK_IDLE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"NETWORK_LOADING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"NETWORK_NO_SOURCE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"HAVE_NOTHING", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0)},
        {"HAVE_METADATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"HAVE_CURRENT_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"HAVE_FUTURE_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(3)},
        {"HAVE_ENOUGH_DATA", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  static_assert(0 == HTMLMediaElement::kNetworkEmpty, "the value of HTMLMediaElement_kNetworkEmpty does not match with implementation");
  static_assert(1 == HTMLMediaElement::kNetworkIdle, "the value of HTMLMediaElement_kNetworkIdle does not match with implementation");
  static_assert(2 == HTMLMediaElement::kNetworkLoading, "the value of HTMLMediaElement_kNetworkLoading does not match with implementation");
  static_assert(3 == HTMLMediaElement::kNetworkNoSource, "the value of HTMLMediaElement_kNetworkNoSource does not match with implementation");
  static_assert(0 == HTMLMediaElement::kHaveNothing, "the value of HTMLMediaElement_kHaveNothing does not match with implementation");
  static_assert(1 == HTMLMediaElement::kHaveMetadata, "the value of HTMLMediaElement_kHaveMetadata does not match with implementation");
  static_assert(2 == HTMLMediaElement::kHaveCurrentData, "the value of HTMLMediaElement_kHaveCurrentData does not match with implementation");
  static_assert(3 == HTMLMediaElement::kHaveFutureData, "the value of HTMLMediaElement_kHaveFutureData does not match with implementation");
  static_assert(4 == HTMLMediaElement::kHaveEnoughData, "the value of HTMLMediaElement_kHaveEnoughData does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLMediaElementAccessors, base::size(kV8HTMLMediaElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLMediaElementMethods, base::size(kV8HTMLMediaElementMethods));

  // Custom signature
}

void V8HTMLMediaElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "audioTracks", V8HTMLMediaElement::AudioTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        { "videoTracks", V8HTMLMediaElement::VideoTracksAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8HTMLMediaElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8HTMLMediaElement::GetWrapperTypeInfo()),
      V8HTMLMediaElement::install_v8_html_media_element_template_function_);
}

bool V8HTMLMediaElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8HTMLMediaElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8HTMLMediaElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8HTMLMediaElement::GetWrapperTypeInfo(), v8_value);
}

HTMLMediaElement* V8HTMLMediaElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

HTMLMediaElement* NativeValueTraits<HTMLMediaElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  HTMLMediaElement* native_value = V8HTMLMediaElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "HTMLMediaElement"));
  }
  return native_value;
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8HTMLMediaElement::install_runtime_enabled_features_on_template_function_ =
    &V8HTMLMediaElement::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8HTMLMediaElement::install_v8_html_media_element_template_function_ =
    &V8HTMLMediaElement::InstallV8HTMLMediaElementTemplate;

void V8HTMLMediaElement::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8HTMLMediaElement::install_v8_html_media_element_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8HTMLMediaElement::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8HTMLMediaElement::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
