// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/media_stream_track_or_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream_track.h"
#include "third_party/blink/renderer/modules/mediastream/media_stream_track_content_hint.h"

namespace blink {

MediaStreamTrackOrString::MediaStreamTrackOrString() : type_(SpecificType::kNone) {}

MediaStreamTrack* MediaStreamTrackOrString::GetAsMediaStreamTrack() const {
  DCHECK(IsMediaStreamTrack());
  return media_stream_track_;
}

void MediaStreamTrackOrString::SetMediaStreamTrack(MediaStreamTrack* value) {
  DCHECK(IsNull());
  media_stream_track_ = value;
  type_ = SpecificType::kMediaStreamTrack;
}

MediaStreamTrackOrString MediaStreamTrackOrString::FromMediaStreamTrack(MediaStreamTrack* value) {
  MediaStreamTrackOrString container;
  container.SetMediaStreamTrack(value);
  return container;
}

const String& MediaStreamTrackOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void MediaStreamTrackOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

MediaStreamTrackOrString MediaStreamTrackOrString::FromString(const String& value) {
  MediaStreamTrackOrString container;
  container.SetString(value);
  return container;
}

MediaStreamTrackOrString::MediaStreamTrackOrString(const MediaStreamTrackOrString&) = default;
MediaStreamTrackOrString::~MediaStreamTrackOrString() = default;
MediaStreamTrackOrString& MediaStreamTrackOrString::operator=(const MediaStreamTrackOrString&) = default;

void MediaStreamTrackOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_stream_track_);
}

void V8MediaStreamTrackOrString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    MediaStreamTrackOrString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8MediaStreamTrack::HasInstance(v8_value, isolate)) {
    MediaStreamTrack* cpp_value = V8MediaStreamTrack::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetMediaStreamTrack(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    impl.SetString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const MediaStreamTrackOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case MediaStreamTrackOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case MediaStreamTrackOrString::SpecificType::kMediaStreamTrack:
      return ToV8(impl.GetAsMediaStreamTrack(), creationContext, isolate);
    case MediaStreamTrackOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

MediaStreamTrackOrString NativeValueTraits<MediaStreamTrackOrString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaStreamTrackOrString impl;
  V8MediaStreamTrackOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
