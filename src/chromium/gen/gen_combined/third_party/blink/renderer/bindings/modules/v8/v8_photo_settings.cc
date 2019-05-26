// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_settings.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PhotoSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fillLightMode",
    "imageHeight",
    "imageWidth",
    "redEyeReduction",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PhotoSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PhotoSettings* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PhotoSettingsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fill_light_mode_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fill_light_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fill_light_mode_value.IsEmpty() || fill_light_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fill_light_mode_cpp_value = fill_light_mode_value;
    if (!fill_light_mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "off",
        "auto",
        "flash",
    };
    if (!IsValidEnum(fill_light_mode_cpp_value, kValidValues, base::size(kValidValues), "FillLightMode", exception_state))
      return;
    impl->setFillLightMode(fill_light_mode_cpp_value);
  }

  v8::Local<v8::Value> image_height_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&image_height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (image_height_value.IsEmpty() || image_height_value->IsUndefined()) {
    // Do nothing.
  } else {
    double image_height_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, image_height_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setImageHeight(image_height_cpp_value);
  }

  v8::Local<v8::Value> image_width_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&image_width_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (image_width_value.IsEmpty() || image_width_value->IsUndefined()) {
    // Do nothing.
  } else {
    double image_width_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, image_width_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setImageWidth(image_width_cpp_value);
  }

  v8::Local<v8::Value> red_eye_reduction_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&red_eye_reduction_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (red_eye_reduction_value.IsEmpty() || red_eye_reduction_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool red_eye_reduction_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, red_eye_reduction_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRedEyeReduction(red_eye_reduction_cpp_value);
  }
}

v8::Local<v8::Value> PhotoSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PhotoSettings(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PhotoSettings(const PhotoSettings* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PhotoSettingsKeys(isolate);
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

  v8::Local<v8::Value> fill_light_mode_value;
  bool fill_light_mode_has_value_or_default = false;
  if (impl->hasFillLightMode()) {
    fill_light_mode_value = V8String(isolate, impl->fillLightMode());
    fill_light_mode_has_value_or_default = true;
  }
  if (fill_light_mode_has_value_or_default &&
      !create_property(0, fill_light_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> image_height_value;
  bool image_height_has_value_or_default = false;
  if (impl->hasImageHeight()) {
    image_height_value = v8::Number::New(isolate, impl->imageHeight());
    image_height_has_value_or_default = true;
  }
  if (image_height_has_value_or_default &&
      !create_property(1, image_height_value)) {
    return false;
  }

  v8::Local<v8::Value> image_width_value;
  bool image_width_has_value_or_default = false;
  if (impl->hasImageWidth()) {
    image_width_value = v8::Number::New(isolate, impl->imageWidth());
    image_width_has_value_or_default = true;
  }
  if (image_width_has_value_or_default &&
      !create_property(2, image_width_value)) {
    return false;
  }

  v8::Local<v8::Value> red_eye_reduction_value;
  bool red_eye_reduction_has_value_or_default = false;
  if (impl->hasRedEyeReduction()) {
    red_eye_reduction_value = v8::Boolean::New(isolate, impl->redEyeReduction());
    red_eye_reduction_has_value_or_default = true;
  }
  if (red_eye_reduction_has_value_or_default &&
      !create_property(3, red_eye_reduction_value)) {
    return false;
  }

  return true;
}

PhotoSettings* NativeValueTraits<PhotoSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PhotoSettings* impl = PhotoSettings::Create();
  V8PhotoSettings::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
