// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_image.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaImageKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "sizes",
    "src",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaImage::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaImage* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): src.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaImageKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sizes_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&sizes_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sizes_value.IsEmpty() || sizes_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sizes_cpp_value = sizes_value;
    if (!sizes_cpp_value.Prepare(exception_state))
      return;
    impl->setSizes(sizes_cpp_value);
  }

  v8::Local<v8::Value> src_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&src_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (src_value.IsEmpty() || src_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member src is undefined.");
    return;
  } else {
    V8StringResource<> src_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, src_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSrc(src_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> MediaImage::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaImage(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaImage(const MediaImage* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaImageKeys(isolate);
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

  v8::Local<v8::Value> sizes_value;
  bool sizes_has_value_or_default = false;
  if (impl->hasSizes()) {
    sizes_value = V8String(isolate, impl->sizes());
    sizes_has_value_or_default = true;
  } else {
    sizes_value = V8String(isolate, WTF::g_empty_string);
    sizes_has_value_or_default = true;
  }
  if (sizes_has_value_or_default &&
      !create_property(0, sizes_value)) {
    return false;
  }

  v8::Local<v8::Value> src_value;
  bool src_has_value_or_default = false;
  if (impl->hasSrc()) {
    src_value = V8String(isolate, impl->src());
    src_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (src_has_value_or_default &&
      !create_property(1, src_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, WTF::g_empty_string);
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(2, type_value)) {
    return false;
  }

  return true;
}

MediaImage* NativeValueTraits<MediaImage>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaImage* impl = MediaImage::Create();
  V8MediaImage::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink