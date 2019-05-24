// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d_settings.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CanvasRenderingContext2DSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "colorSpace",
    "desynchronized",
    "pixelFormat",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CanvasRenderingContext2DSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CanvasRenderingContext2DSettings* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    // Do nothing.
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CanvasRenderingContext2DSettingsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alpha_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alpha_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (alpha_value.IsEmpty() || alpha_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool alpha_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, alpha_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAlpha(alpha_cpp_value);
  }

  v8::Local<v8::Value> desynchronized_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&desynchronized_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (desynchronized_value.IsEmpty() || desynchronized_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool desynchronized_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, desynchronized_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDesynchronized(desynchronized_cpp_value);
  }

  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    v8::Local<v8::Value> color_space_value;
    if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&color_space_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (color_space_value.IsEmpty() || color_space_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> color_space_cpp_value = color_space_value;
      if (!color_space_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "srgb",
          "linear-rgb",
          "rec2020",
          "p3",
      };
      if (!IsValidEnum(color_space_cpp_value, kValidValues, base::size(kValidValues), "CanvasColorSpace", exception_state))
        return;
      impl->setColorSpace(color_space_cpp_value);
    }

    v8::Local<v8::Value> pixel_format_value;
    if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&pixel_format_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (pixel_format_value.IsEmpty() || pixel_format_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> pixel_format_cpp_value = pixel_format_value;
      if (!pixel_format_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "uint8",
          "10-10-10-2",
          "12-12-12-12",
          "float16",
      };
      if (!IsValidEnum(pixel_format_cpp_value, kValidValues, base::size(kValidValues), "CanvasPixelFormat", exception_state))
        return;
      impl->setPixelFormat(pixel_format_cpp_value);
    }
  }
}

v8::Local<v8::Value> CanvasRenderingContext2DSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CanvasRenderingContext2DSettings(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CanvasRenderingContext2DSettings(const CanvasRenderingContext2DSettings* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CanvasRenderingContext2DSettingsKeys(isolate);
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

  v8::Local<v8::Value> alpha_value;
  bool alpha_has_value_or_default = false;
  if (impl->hasAlpha()) {
    alpha_value = v8::Boolean::New(isolate, impl->alpha());
    alpha_has_value_or_default = true;
  } else {
    alpha_value = v8::Boolean::New(isolate, true);
    alpha_has_value_or_default = true;
  }
  if (alpha_has_value_or_default &&
      !create_property(0, alpha_value)) {
    return false;
  }

  v8::Local<v8::Value> desynchronized_value;
  bool desynchronized_has_value_or_default = false;
  if (impl->hasDesynchronized()) {
    desynchronized_value = v8::Boolean::New(isolate, impl->desynchronized());
    desynchronized_has_value_or_default = true;
  } else {
    desynchronized_value = v8::Boolean::New(isolate, false);
    desynchronized_has_value_or_default = true;
  }
  if (desynchronized_has_value_or_default &&
      !create_property(2, desynchronized_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    v8::Local<v8::Value> color_space_value;
    bool color_space_has_value_or_default = false;
    if (impl->hasColorSpace()) {
      color_space_value = V8String(isolate, impl->colorSpace());
      color_space_has_value_or_default = true;
    } else {
      color_space_value = V8String(isolate, "srgb");
      color_space_has_value_or_default = true;
    }
    if (color_space_has_value_or_default &&
        !create_property(1, color_space_value)) {
      return false;
    }

    v8::Local<v8::Value> pixel_format_value;
    bool pixel_format_has_value_or_default = false;
    if (impl->hasPixelFormat()) {
      pixel_format_value = V8String(isolate, impl->pixelFormat());
      pixel_format_has_value_or_default = true;
    } else {
      pixel_format_value = V8String(isolate, "uint8");
      pixel_format_has_value_or_default = true;
    }
    if (pixel_format_has_value_or_default &&
        !create_property(3, pixel_format_value)) {
      return false;
    }
  }

  return true;
}

CanvasRenderingContext2DSettings* NativeValueTraits<CanvasRenderingContext2DSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CanvasRenderingContext2DSettings* impl = CanvasRenderingContext2DSettings::Create();
  V8CanvasRenderingContext2DSettings::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
