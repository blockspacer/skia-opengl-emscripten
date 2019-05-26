// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ImageBitmapOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colorSpaceConversion",
    "imageOrientation",
    "imagePixelFormat",
    "premultiplyAlpha",
    "resizeHeight",
    "resizeQuality",
    "resizeWidth",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ImageBitmapOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ImageBitmapOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ImageBitmapOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> color_space_conversion_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&color_space_conversion_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (color_space_conversion_value.IsEmpty() || color_space_conversion_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> color_space_conversion_cpp_value = color_space_conversion_value;
    if (!color_space_conversion_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "default",
        "srgb",
        "linear-rgb",
        "rec2020",
        "p3",
    };
    if (!IsValidEnum(color_space_conversion_cpp_value, kValidValues, base::size(kValidValues), "ColorSpaceConversion", exception_state))
      return;
    impl->setColorSpaceConversion(color_space_conversion_cpp_value);
  }

  v8::Local<v8::Value> image_orientation_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&image_orientation_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (image_orientation_value.IsEmpty() || image_orientation_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> image_orientation_cpp_value = image_orientation_value;
    if (!image_orientation_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "flipY",
    };
    if (!IsValidEnum(image_orientation_cpp_value, kValidValues, base::size(kValidValues), "ImageOrientation", exception_state))
      return;
    impl->setImageOrientation(image_orientation_cpp_value);
  }

  v8::Local<v8::Value> premultiply_alpha_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&premultiply_alpha_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (premultiply_alpha_value.IsEmpty() || premultiply_alpha_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> premultiply_alpha_cpp_value = premultiply_alpha_value;
    if (!premultiply_alpha_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "none",
        "premultiply",
        "default",
    };
    if (!IsValidEnum(premultiply_alpha_cpp_value, kValidValues, base::size(kValidValues), "PremultiplyAlpha", exception_state))
      return;
    impl->setPremultiplyAlpha(premultiply_alpha_cpp_value);
  }

  v8::Local<v8::Value> resize_height_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&resize_height_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resize_height_value.IsEmpty() || resize_height_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t resize_height_cpp_value = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(isolate, resize_height_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResizeHeight(resize_height_cpp_value);
  }

  v8::Local<v8::Value> resize_quality_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&resize_quality_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resize_quality_value.IsEmpty() || resize_quality_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> resize_quality_cpp_value = resize_quality_value;
    if (!resize_quality_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "pixelated",
        "low",
        "medium",
        "high",
    };
    if (!IsValidEnum(resize_quality_cpp_value, kValidValues, base::size(kValidValues), "ResizeQuality", exception_state))
      return;
    impl->setResizeQuality(resize_quality_cpp_value);
  }

  v8::Local<v8::Value> resize_width_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&resize_width_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (resize_width_value.IsEmpty() || resize_width_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t resize_width_cpp_value = NativeValueTraits<IDLUnsignedLongEnforceRange>::NativeValue(isolate, resize_width_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setResizeWidth(resize_width_cpp_value);
  }

  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    v8::Local<v8::Value> image_pixel_format_value;
    if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&image_pixel_format_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (image_pixel_format_value.IsEmpty() || image_pixel_format_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> image_pixel_format_cpp_value = image_pixel_format_value;
      if (!image_pixel_format_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "default",
          "uint8",
      };
      if (!IsValidEnum(image_pixel_format_cpp_value, kValidValues, base::size(kValidValues), "ImageBitmapPixelFormat", exception_state))
        return;
      impl->setImagePixelFormat(image_pixel_format_cpp_value);
    }
  }
}

v8::Local<v8::Value> ImageBitmapOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ImageBitmapOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ImageBitmapOptions(const ImageBitmapOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ImageBitmapOptionsKeys(isolate);
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

  v8::Local<v8::Value> color_space_conversion_value;
  bool color_space_conversion_has_value_or_default = false;
  if (impl->hasColorSpaceConversion()) {
    color_space_conversion_value = V8String(isolate, impl->colorSpaceConversion());
    color_space_conversion_has_value_or_default = true;
  } else {
    color_space_conversion_value = V8String(isolate, "default");
    color_space_conversion_has_value_or_default = true;
  }
  if (color_space_conversion_has_value_or_default &&
      !create_property(0, color_space_conversion_value)) {
    return false;
  }

  v8::Local<v8::Value> image_orientation_value;
  bool image_orientation_has_value_or_default = false;
  if (impl->hasImageOrientation()) {
    image_orientation_value = V8String(isolate, impl->imageOrientation());
    image_orientation_has_value_or_default = true;
  } else {
    image_orientation_value = V8String(isolate, "none");
    image_orientation_has_value_or_default = true;
  }
  if (image_orientation_has_value_or_default &&
      !create_property(1, image_orientation_value)) {
    return false;
  }

  v8::Local<v8::Value> premultiply_alpha_value;
  bool premultiply_alpha_has_value_or_default = false;
  if (impl->hasPremultiplyAlpha()) {
    premultiply_alpha_value = V8String(isolate, impl->premultiplyAlpha());
    premultiply_alpha_has_value_or_default = true;
  } else {
    premultiply_alpha_value = V8String(isolate, "default");
    premultiply_alpha_has_value_or_default = true;
  }
  if (premultiply_alpha_has_value_or_default &&
      !create_property(3, premultiply_alpha_value)) {
    return false;
  }

  v8::Local<v8::Value> resize_height_value;
  bool resize_height_has_value_or_default = false;
  if (impl->hasResizeHeight()) {
    resize_height_value = v8::Integer::NewFromUnsigned(isolate, impl->resizeHeight());
    resize_height_has_value_or_default = true;
  }
  if (resize_height_has_value_or_default &&
      !create_property(4, resize_height_value)) {
    return false;
  }

  v8::Local<v8::Value> resize_quality_value;
  bool resize_quality_has_value_or_default = false;
  if (impl->hasResizeQuality()) {
    resize_quality_value = V8String(isolate, impl->resizeQuality());
    resize_quality_has_value_or_default = true;
  } else {
    resize_quality_value = V8String(isolate, "low");
    resize_quality_has_value_or_default = true;
  }
  if (resize_quality_has_value_or_default &&
      !create_property(5, resize_quality_value)) {
    return false;
  }

  v8::Local<v8::Value> resize_width_value;
  bool resize_width_has_value_or_default = false;
  if (impl->hasResizeWidth()) {
    resize_width_value = v8::Integer::NewFromUnsigned(isolate, impl->resizeWidth());
    resize_width_has_value_or_default = true;
  }
  if (resize_width_has_value_or_default &&
      !create_property(6, resize_width_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    v8::Local<v8::Value> image_pixel_format_value;
    bool image_pixel_format_has_value_or_default = false;
    if (impl->hasImagePixelFormat()) {
      image_pixel_format_value = V8String(isolate, impl->imagePixelFormat());
      image_pixel_format_has_value_or_default = true;
    } else {
      image_pixel_format_value = V8String(isolate, "default");
      image_pixel_format_has_value_or_default = true;
    }
    if (image_pixel_format_has_value_or_default &&
        !create_property(2, image_pixel_format_value)) {
      return false;
    }
  }

  return true;
}

ImageBitmapOptions* NativeValueTraits<ImageBitmapOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ImageBitmapOptions* impl = ImageBitmapOptions::Create();
  V8ImageBitmapOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
