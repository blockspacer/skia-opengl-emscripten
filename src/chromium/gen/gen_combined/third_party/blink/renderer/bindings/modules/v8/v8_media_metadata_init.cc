// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_metadata_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_image.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaMetadataInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "album",
    "artist",
    "artwork",
    "title",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaMetadataInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaMetadataInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaMetadataInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> album_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&album_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (album_value.IsEmpty() || album_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> album_cpp_value = album_value;
    if (!album_cpp_value.Prepare(exception_state))
      return;
    impl->setAlbum(album_cpp_value);
  }

  v8::Local<v8::Value> artist_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&artist_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (artist_value.IsEmpty() || artist_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> artist_cpp_value = artist_value;
    if (!artist_cpp_value.Prepare(exception_state))
      return;
    impl->setArtist(artist_cpp_value);
  }

  v8::Local<v8::Value> artwork_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&artwork_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (artwork_value.IsEmpty() || artwork_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MediaImage>> artwork_cpp_value = NativeValueTraits<IDLSequence<MediaImage>>::NativeValue(isolate, artwork_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setArtwork(artwork_cpp_value);
  }

  v8::Local<v8::Value> title_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&title_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (title_value.IsEmpty() || title_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> title_cpp_value = title_value;
    if (!title_cpp_value.Prepare(exception_state))
      return;
    impl->setTitle(title_cpp_value);
  }
}

v8::Local<v8::Value> MediaMetadataInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaMetadataInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaMetadataInit(const MediaMetadataInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaMetadataInitKeys(isolate);
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

  v8::Local<v8::Value> album_value;
  bool album_has_value_or_default = false;
  if (impl->hasAlbum()) {
    album_value = V8String(isolate, impl->album());
    album_has_value_or_default = true;
  } else {
    album_value = V8String(isolate, WTF::g_empty_string);
    album_has_value_or_default = true;
  }
  if (album_has_value_or_default &&
      !create_property(0, album_value)) {
    return false;
  }

  v8::Local<v8::Value> artist_value;
  bool artist_has_value_or_default = false;
  if (impl->hasArtist()) {
    artist_value = V8String(isolate, impl->artist());
    artist_has_value_or_default = true;
  } else {
    artist_value = V8String(isolate, WTF::g_empty_string);
    artist_has_value_or_default = true;
  }
  if (artist_has_value_or_default &&
      !create_property(1, artist_value)) {
    return false;
  }

  v8::Local<v8::Value> artwork_value;
  bool artwork_has_value_or_default = false;
  if (impl->hasArtwork()) {
    artwork_value = ToV8(impl->artwork(), creationContext, isolate);
    artwork_has_value_or_default = true;
  } else {
    artwork_value = ToV8(HeapVector<Member<MediaImage>>(), creationContext, isolate);
    artwork_has_value_or_default = true;
  }
  if (artwork_has_value_or_default &&
      !create_property(2, artwork_value)) {
    return false;
  }

  v8::Local<v8::Value> title_value;
  bool title_has_value_or_default = false;
  if (impl->hasTitle()) {
    title_value = V8String(isolate, impl->title());
    title_has_value_or_default = true;
  } else {
    title_value = V8String(isolate, WTF::g_empty_string);
    title_has_value_or_default = true;
  }
  if (title_has_value_or_default &&
      !create_property(3, title_value)) {
    return false;
  }

  return true;
}

MediaMetadataInit* NativeValueTraits<MediaMetadataInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaMetadataInit* impl = MediaMetadataInit::Create();
  V8MediaMetadataInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
