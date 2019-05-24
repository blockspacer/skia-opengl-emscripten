// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_element_audio_source_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaElementAudioSourceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "mediaElement",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaElementAudioSourceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaElementAudioSourceOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): mediaElement.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaElementAudioSourceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> media_element_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&media_element_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (media_element_value.IsEmpty() || media_element_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member mediaElement is undefined.");
    return;
  } else {
    HTMLMediaElement* media_element_cpp_value = V8HTMLMediaElement::ToImplWithTypeCheck(isolate, media_element_value);
    if (!media_element_cpp_value) {
      exception_state.ThrowTypeError("member mediaElement is not of type HTMLMediaElement.");
      return;
    }
    impl->setMediaElement(media_element_cpp_value);
  }
}

v8::Local<v8::Value> MediaElementAudioSourceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaElementAudioSourceOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaElementAudioSourceOptions(const MediaElementAudioSourceOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaElementAudioSourceOptionsKeys(isolate);
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

  v8::Local<v8::Value> media_element_value;
  bool media_element_has_value_or_default = false;
  if (impl->hasMediaElement()) {
    media_element_value = ToV8(impl->mediaElement(), creationContext, isolate);
    media_element_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (media_element_has_value_or_default &&
      !create_property(0, media_element_value)) {
    return false;
  }

  return true;
}

MediaElementAudioSourceOptions* NativeValueTraits<MediaElementAudioSourceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaElementAudioSourceOptions* impl = MediaElementAudioSourceOptions::Create();
  V8MediaElementAudioSourceOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
