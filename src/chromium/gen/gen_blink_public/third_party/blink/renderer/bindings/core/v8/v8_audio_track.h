// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_AUDIO_TRACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_AUDIO_TRACK_H_

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/html/track/audio_track.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

CORE_EXPORT extern WrapperTypeInfo v8_audio_track_wrapper_type_info;

class V8AudioTrack {
  STATIC_ONLY(V8AudioTrack);
 public:
  CORE_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  CORE_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static AudioTrack* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<AudioTrack>();
  }
  CORE_EXPORT static AudioTrack* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  CORE_EXPORT static constexpr WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_audio_track_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  CORE_EXPORT static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance_object,
      v8::Local<v8::Object> prototype_object,
      v8::Local<v8::Function> interface_object,
      v8::Local<v8::FunctionTemplate> interface_template) {}

  CORE_EXPORT static void UpdateWrapperTypeInfo(
      InstallTemplateFunction,
      InstallRuntimeEnabledFeaturesFunction,
      InstallRuntimeEnabledFeaturesOnTemplateFunction,
      InstallConditionalFeaturesFunction);
  CORE_EXPORT static void InstallV8AudioTrackTemplate(v8::Isolate*, const DOMWrapperWorld&, v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions

  CORE_EXPORT static void IdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void KindAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LabelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void LanguageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void EnabledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  CORE_EXPORT static void EnabledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  CORE_EXPORT static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
  static InstallRuntimeEnabledFeaturesOnTemplateFunction
  install_runtime_enabled_features_on_template_function_;

 private:
  static InstallTemplateFunction install_v8_audio_track_template_function_;
};

template <>
struct NativeValueTraits<AudioTrack> : public NativeValueTraitsBase<AudioTrack> {
  CORE_EXPORT static AudioTrack* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static AudioTrack* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<AudioTrack> {
  typedef V8AudioTrack Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_AUDIO_TRACK_H_
