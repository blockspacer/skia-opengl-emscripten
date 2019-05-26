// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_picture_in_picture_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PictureInPictureOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "aspectRatio",
    "interactive",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PictureInPictureOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PictureInPictureOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): aspectRatio.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PictureInPictureOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> aspect_ratio_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&aspect_ratio_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (aspect_ratio_value.IsEmpty() || aspect_ratio_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member aspectRatio is undefined.");
    return;
  } else {
    double aspect_ratio_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, aspect_ratio_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAspectRatio(aspect_ratio_cpp_value);
  }

  v8::Local<v8::Value> interactive_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&interactive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (interactive_value.IsEmpty() || interactive_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool interactive_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, interactive_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInteractive(interactive_cpp_value);
  }
}

v8::Local<v8::Value> PictureInPictureOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PictureInPictureOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PictureInPictureOptions(const PictureInPictureOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PictureInPictureOptionsKeys(isolate);
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

  v8::Local<v8::Value> aspect_ratio_value;
  bool aspect_ratio_has_value_or_default = false;
  if (impl->hasAspectRatio()) {
    aspect_ratio_value = v8::Number::New(isolate, impl->aspectRatio());
    aspect_ratio_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (aspect_ratio_has_value_or_default &&
      !create_property(0, aspect_ratio_value)) {
    return false;
  }

  v8::Local<v8::Value> interactive_value;
  bool interactive_has_value_or_default = false;
  if (impl->hasInteractive()) {
    interactive_value = v8::Boolean::New(isolate, impl->interactive());
    interactive_has_value_or_default = true;
  } else {
    interactive_value = v8::Boolean::New(isolate, false);
    interactive_has_value_or_default = true;
  }
  if (interactive_has_value_or_default &&
      !create_property(1, interactive_value)) {
    return false;
  }

  return true;
}

PictureInPictureOptions* NativeValueTraits<PictureInPictureOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PictureInPictureOptions* impl = PictureInPictureOptions::Create();
  V8PictureInPictureOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
