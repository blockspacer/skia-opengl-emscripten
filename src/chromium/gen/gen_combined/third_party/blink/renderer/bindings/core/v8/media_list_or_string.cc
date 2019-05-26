// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/media_list_or_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_media_list.h"

namespace blink {

MediaListOrString::MediaListOrString() : type_(SpecificType::kNone) {}

MediaList* MediaListOrString::GetAsMediaList() const {
  DCHECK(IsMediaList());
  return media_list_;
}

void MediaListOrString::SetMediaList(MediaList* value) {
  DCHECK(IsNull());
  media_list_ = value;
  type_ = SpecificType::kMediaList;
}

MediaListOrString MediaListOrString::FromMediaList(MediaList* value) {
  MediaListOrString container;
  container.SetMediaList(value);
  return container;
}

const String& MediaListOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void MediaListOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

MediaListOrString MediaListOrString::FromString(const String& value) {
  MediaListOrString container;
  container.SetString(value);
  return container;
}

MediaListOrString::MediaListOrString(const MediaListOrString&) = default;
MediaListOrString::~MediaListOrString() = default;
MediaListOrString& MediaListOrString::operator=(const MediaListOrString&) = default;

void MediaListOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(media_list_);
}

void V8MediaListOrString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    MediaListOrString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8MediaList::HasInstance(v8_value, isolate)) {
    MediaList* cpp_value = V8MediaList::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetMediaList(cpp_value);
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

v8::Local<v8::Value> ToV8(const MediaListOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case MediaListOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case MediaListOrString::SpecificType::kMediaList:
      return ToV8(impl.GetAsMediaList(), creationContext, isolate);
    case MediaListOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

MediaListOrString NativeValueTraits<MediaListOrString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaListOrString impl;
  V8MediaListOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
