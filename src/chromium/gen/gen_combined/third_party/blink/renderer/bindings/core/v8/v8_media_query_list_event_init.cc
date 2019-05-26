// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_media_query_list_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaQueryListEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "matches",
    "media",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaQueryListEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaQueryListEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaQueryListEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> matches_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&matches_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (matches_value.IsEmpty() || matches_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool matches_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, matches_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMatches(matches_cpp_value);
  }

  v8::Local<v8::Value> media_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&media_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (media_value.IsEmpty() || media_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> media_cpp_value = media_value;
    if (!media_cpp_value.Prepare(exception_state))
      return;
    impl->setMedia(media_cpp_value);
  }
}

v8::Local<v8::Value> MediaQueryListEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaQueryListEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaQueryListEventInit(const MediaQueryListEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaQueryListEventInitKeys(isolate);
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

  v8::Local<v8::Value> matches_value;
  bool matches_has_value_or_default = false;
  if (impl->hasMatches()) {
    matches_value = v8::Boolean::New(isolate, impl->matches());
    matches_has_value_or_default = true;
  } else {
    matches_value = v8::Boolean::New(isolate, false);
    matches_has_value_or_default = true;
  }
  if (matches_has_value_or_default &&
      !create_property(0, matches_value)) {
    return false;
  }

  v8::Local<v8::Value> media_value;
  bool media_has_value_or_default = false;
  if (impl->hasMedia()) {
    media_value = V8String(isolate, impl->media());
    media_has_value_or_default = true;
  } else {
    media_value = V8String(isolate, WTF::g_empty_string);
    media_has_value_or_default = true;
  }
  if (media_has_value_or_default &&
      !create_property(1, media_value)) {
    return false;
  }

  return true;
}

MediaQueryListEventInit* NativeValueTraits<MediaQueryListEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaQueryListEventInit* impl = MediaQueryListEventInit::Create();
  V8MediaQueryListEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
