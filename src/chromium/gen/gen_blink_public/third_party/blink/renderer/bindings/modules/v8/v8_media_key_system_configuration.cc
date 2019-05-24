// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_configuration.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_system_media_capability.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeySystemConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "audioCapabilities",
    "distinctiveIdentifier",
    "initDataTypes",
    "label",
    "persistentState",
    "sessionTypes",
    "videoCapabilities",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaKeySystemConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaKeySystemConfiguration* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> audio_capabilities_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&audio_capabilities_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (audio_capabilities_value.IsEmpty() || audio_capabilities_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MediaKeySystemMediaCapability>> audio_capabilities_cpp_value = NativeValueTraits<IDLSequence<MediaKeySystemMediaCapability>>::NativeValue(isolate, audio_capabilities_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAudioCapabilities(audio_capabilities_cpp_value);
  }

  v8::Local<v8::Value> distinctive_identifier_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&distinctive_identifier_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (distinctive_identifier_value.IsEmpty() || distinctive_identifier_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> distinctive_identifier_cpp_value = distinctive_identifier_value;
    if (!distinctive_identifier_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "required",
        "optional",
        "not-allowed",
    };
    if (!IsValidEnum(distinctive_identifier_cpp_value, kValidValues, base::size(kValidValues), "MediaKeysRequirement", exception_state))
      return;
    impl->setDistinctiveIdentifier(distinctive_identifier_cpp_value);
  }

  v8::Local<v8::Value> init_data_types_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&init_data_types_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (init_data_types_value.IsEmpty() || init_data_types_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> init_data_types_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, init_data_types_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInitDataTypes(init_data_types_cpp_value);
  }

  v8::Local<v8::Value> label_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&label_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (label_value.IsEmpty() || label_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> label_cpp_value = label_value;
    if (!label_cpp_value.Prepare(exception_state))
      return;
    impl->setLabel(label_cpp_value);
  }

  v8::Local<v8::Value> persistent_state_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&persistent_state_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (persistent_state_value.IsEmpty() || persistent_state_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> persistent_state_cpp_value = persistent_state_value;
    if (!persistent_state_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "required",
        "optional",
        "not-allowed",
    };
    if (!IsValidEnum(persistent_state_cpp_value, kValidValues, base::size(kValidValues), "MediaKeysRequirement", exception_state))
      return;
    impl->setPersistentState(persistent_state_cpp_value);
  }

  v8::Local<v8::Value> session_types_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&session_types_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (session_types_value.IsEmpty() || session_types_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> session_types_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, session_types_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSessionTypes(session_types_cpp_value);
  }

  v8::Local<v8::Value> video_capabilities_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&video_capabilities_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (video_capabilities_value.IsEmpty() || video_capabilities_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MediaKeySystemMediaCapability>> video_capabilities_cpp_value = NativeValueTraits<IDLSequence<MediaKeySystemMediaCapability>>::NativeValue(isolate, video_capabilities_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVideoCapabilities(video_capabilities_cpp_value);
  }
}

v8::Local<v8::Value> MediaKeySystemConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeySystemConfiguration(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeySystemConfiguration(const MediaKeySystemConfiguration* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeySystemConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> audio_capabilities_value;
  bool audio_capabilities_has_value_or_default = false;
  if (impl->hasAudioCapabilities()) {
    audio_capabilities_value = ToV8(impl->audioCapabilities(), creationContext, isolate);
    audio_capabilities_has_value_or_default = true;
  } else {
    audio_capabilities_value = ToV8(HeapVector<Member<MediaKeySystemMediaCapability>>(), creationContext, isolate);
    audio_capabilities_has_value_or_default = true;
  }
  if (audio_capabilities_has_value_or_default &&
      !create_property(0, audio_capabilities_value)) {
    return false;
  }

  v8::Local<v8::Value> distinctive_identifier_value;
  bool distinctive_identifier_has_value_or_default = false;
  if (impl->hasDistinctiveIdentifier()) {
    distinctive_identifier_value = V8String(isolate, impl->distinctiveIdentifier());
    distinctive_identifier_has_value_or_default = true;
  } else {
    distinctive_identifier_value = V8String(isolate, "optional");
    distinctive_identifier_has_value_or_default = true;
  }
  if (distinctive_identifier_has_value_or_default &&
      !create_property(1, distinctive_identifier_value)) {
    return false;
  }

  v8::Local<v8::Value> init_data_types_value;
  bool init_data_types_has_value_or_default = false;
  if (impl->hasInitDataTypes()) {
    init_data_types_value = ToV8(impl->initDataTypes(), creationContext, isolate);
    init_data_types_has_value_or_default = true;
  } else {
    init_data_types_value = ToV8(Vector<String>(), creationContext, isolate);
    init_data_types_has_value_or_default = true;
  }
  if (init_data_types_has_value_or_default &&
      !create_property(2, init_data_types_value)) {
    return false;
  }

  v8::Local<v8::Value> label_value;
  bool label_has_value_or_default = false;
  if (impl->hasLabel()) {
    label_value = V8String(isolate, impl->label());
    label_has_value_or_default = true;
  } else {
    label_value = V8String(isolate, WTF::g_empty_string);
    label_has_value_or_default = true;
  }
  if (label_has_value_or_default &&
      !create_property(3, label_value)) {
    return false;
  }

  v8::Local<v8::Value> persistent_state_value;
  bool persistent_state_has_value_or_default = false;
  if (impl->hasPersistentState()) {
    persistent_state_value = V8String(isolate, impl->persistentState());
    persistent_state_has_value_or_default = true;
  } else {
    persistent_state_value = V8String(isolate, "optional");
    persistent_state_has_value_or_default = true;
  }
  if (persistent_state_has_value_or_default &&
      !create_property(4, persistent_state_value)) {
    return false;
  }

  v8::Local<v8::Value> session_types_value;
  bool session_types_has_value_or_default = false;
  if (impl->hasSessionTypes()) {
    session_types_value = ToV8(impl->sessionTypes(), creationContext, isolate);
    session_types_has_value_or_default = true;
  }
  if (session_types_has_value_or_default &&
      !create_property(5, session_types_value)) {
    return false;
  }

  v8::Local<v8::Value> video_capabilities_value;
  bool video_capabilities_has_value_or_default = false;
  if (impl->hasVideoCapabilities()) {
    video_capabilities_value = ToV8(impl->videoCapabilities(), creationContext, isolate);
    video_capabilities_has_value_or_default = true;
  } else {
    video_capabilities_value = ToV8(HeapVector<Member<MediaKeySystemMediaCapability>>(), creationContext, isolate);
    video_capabilities_has_value_or_default = true;
  }
  if (video_capabilities_has_value_or_default &&
      !create_property(6, video_capabilities_value)) {
    return false;
  }

  return true;
}

MediaKeySystemConfiguration* NativeValueTraits<MediaKeySystemConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaKeySystemConfiguration* impl = MediaKeySystemConfiguration::Create();
  V8MediaKeySystemConfiguration::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
