// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_descriptors.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FontFaceDescriptorsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "display",
    "featureSettings",
    "stretch",
    "style",
    "unicodeRange",
    "variant",
    "weight",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FontFaceDescriptors::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FontFaceDescriptors* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceDescriptorsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> display_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&display_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (display_value.IsEmpty() || display_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> display_cpp_value = display_value;
    if (!display_cpp_value.Prepare(exception_state))
      return;
    impl->setDisplay(display_cpp_value);
  }

  v8::Local<v8::Value> feature_settings_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&feature_settings_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (feature_settings_value.IsEmpty() || feature_settings_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> feature_settings_cpp_value = feature_settings_value;
    if (!feature_settings_cpp_value.Prepare(exception_state))
      return;
    impl->setFeatureSettings(feature_settings_cpp_value);
  }

  v8::Local<v8::Value> stretch_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&stretch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stretch_value.IsEmpty() || stretch_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> stretch_cpp_value = stretch_value;
    if (!stretch_cpp_value.Prepare(exception_state))
      return;
    impl->setStretch(stretch_cpp_value);
  }

  v8::Local<v8::Value> style_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&style_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (style_value.IsEmpty() || style_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> style_cpp_value = style_value;
    if (!style_cpp_value.Prepare(exception_state))
      return;
    impl->setStyle(style_cpp_value);
  }

  v8::Local<v8::Value> unicode_range_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&unicode_range_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (unicode_range_value.IsEmpty() || unicode_range_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> unicode_range_cpp_value = unicode_range_value;
    if (!unicode_range_cpp_value.Prepare(exception_state))
      return;
    impl->setUnicodeRange(unicode_range_cpp_value);
  }

  v8::Local<v8::Value> variant_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&variant_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (variant_value.IsEmpty() || variant_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> variant_cpp_value = variant_value;
    if (!variant_cpp_value.Prepare(exception_state))
      return;
    impl->setVariant(variant_cpp_value);
  }

  v8::Local<v8::Value> weight_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&weight_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (weight_value.IsEmpty() || weight_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> weight_cpp_value = weight_value;
    if (!weight_cpp_value.Prepare(exception_state))
      return;
    impl->setWeight(weight_cpp_value);
  }
}

v8::Local<v8::Value> FontFaceDescriptors::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FontFaceDescriptors(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FontFaceDescriptors(const FontFaceDescriptors* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceDescriptorsKeys(isolate);
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

  v8::Local<v8::Value> display_value;
  bool display_has_value_or_default = false;
  if (impl->hasDisplay()) {
    display_value = V8String(isolate, impl->display());
    display_has_value_or_default = true;
  } else {
    display_value = V8String(isolate, "auto");
    display_has_value_or_default = true;
  }
  if (display_has_value_or_default &&
      !create_property(0, display_value)) {
    return false;
  }

  v8::Local<v8::Value> feature_settings_value;
  bool feature_settings_has_value_or_default = false;
  if (impl->hasFeatureSettings()) {
    feature_settings_value = V8String(isolate, impl->featureSettings());
    feature_settings_has_value_or_default = true;
  } else {
    feature_settings_value = V8String(isolate, "normal");
    feature_settings_has_value_or_default = true;
  }
  if (feature_settings_has_value_or_default &&
      !create_property(1, feature_settings_value)) {
    return false;
  }

  v8::Local<v8::Value> stretch_value;
  bool stretch_has_value_or_default = false;
  if (impl->hasStretch()) {
    stretch_value = V8String(isolate, impl->stretch());
    stretch_has_value_or_default = true;
  } else {
    stretch_value = V8String(isolate, "normal");
    stretch_has_value_or_default = true;
  }
  if (stretch_has_value_or_default &&
      !create_property(2, stretch_value)) {
    return false;
  }

  v8::Local<v8::Value> style_value;
  bool style_has_value_or_default = false;
  if (impl->hasStyle()) {
    style_value = V8String(isolate, impl->style());
    style_has_value_or_default = true;
  } else {
    style_value = V8String(isolate, "normal");
    style_has_value_or_default = true;
  }
  if (style_has_value_or_default &&
      !create_property(3, style_value)) {
    return false;
  }

  v8::Local<v8::Value> unicode_range_value;
  bool unicode_range_has_value_or_default = false;
  if (impl->hasUnicodeRange()) {
    unicode_range_value = V8String(isolate, impl->unicodeRange());
    unicode_range_has_value_or_default = true;
  } else {
    unicode_range_value = V8String(isolate, "U+0-10FFFF");
    unicode_range_has_value_or_default = true;
  }
  if (unicode_range_has_value_or_default &&
      !create_property(4, unicode_range_value)) {
    return false;
  }

  v8::Local<v8::Value> variant_value;
  bool variant_has_value_or_default = false;
  if (impl->hasVariant()) {
    variant_value = V8String(isolate, impl->variant());
    variant_has_value_or_default = true;
  } else {
    variant_value = V8String(isolate, "normal");
    variant_has_value_or_default = true;
  }
  if (variant_has_value_or_default &&
      !create_property(5, variant_value)) {
    return false;
  }

  v8::Local<v8::Value> weight_value;
  bool weight_has_value_or_default = false;
  if (impl->hasWeight()) {
    weight_value = V8String(isolate, impl->weight());
    weight_has_value_or_default = true;
  } else {
    weight_value = V8String(isolate, "normal");
    weight_has_value_or_default = true;
  }
  if (weight_has_value_or_default &&
      !create_property(6, weight_value)) {
    return false;
  }

  return true;
}

FontFaceDescriptors* NativeValueTraits<FontFaceDescriptors>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FontFaceDescriptors* impl = FontFaceDescriptors::Create();
  V8FontFaceDescriptors::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
