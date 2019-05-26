// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_context_creation_attributes_module.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CanvasContextCreationAttributesModuleKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "antialias",
    "colorSpace",
    "depth",
    "desynchronized",
    "failIfMajorPerformanceCaveat",
    "pixelFormat",
    "powerPreference",
    "premultipliedAlpha",
    "preserveDrawingBuffer",
    "stencil",
    "xrCompatible",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8CanvasContextCreationAttributesModule::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, CanvasContextCreationAttributesModule* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    // Do nothing.
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CanvasContextCreationAttributesModuleKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
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

  v8::Local<v8::Value> antialias_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&antialias_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (antialias_value.IsEmpty() || antialias_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool antialias_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, antialias_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAntialias(antialias_cpp_value);
  }

  v8::Local<v8::Value> depth_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&depth_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (depth_value.IsEmpty() || depth_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool depth_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, depth_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDepth(depth_cpp_value);
  }

  v8::Local<v8::Value> desynchronized_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&desynchronized_value)) {
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

  v8::Local<v8::Value> fail_if_major_performance_caveat_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&fail_if_major_performance_caveat_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fail_if_major_performance_caveat_value.IsEmpty() || fail_if_major_performance_caveat_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool fail_if_major_performance_caveat_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, fail_if_major_performance_caveat_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFailIfMajorPerformanceCaveat(fail_if_major_performance_caveat_cpp_value);
  }

  v8::Local<v8::Value> power_preference_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&power_preference_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (power_preference_value.IsEmpty() || power_preference_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> power_preference_cpp_value = power_preference_value;
    if (!power_preference_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "default",
        "low-power",
        "high-performance",
    };
    if (!IsValidEnum(power_preference_cpp_value, kValidValues, base::size(kValidValues), "CanvasPowerPreference", exception_state))
      return;
    impl->setPowerPreference(power_preference_cpp_value);
  }

  v8::Local<v8::Value> premultiplied_alpha_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&premultiplied_alpha_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (premultiplied_alpha_value.IsEmpty() || premultiplied_alpha_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool premultiplied_alpha_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, premultiplied_alpha_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPremultipliedAlpha(premultiplied_alpha_cpp_value);
  }

  v8::Local<v8::Value> preserve_drawing_buffer_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&preserve_drawing_buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (preserve_drawing_buffer_value.IsEmpty() || preserve_drawing_buffer_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool preserve_drawing_buffer_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, preserve_drawing_buffer_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPreserveDrawingBuffer(preserve_drawing_buffer_cpp_value);
  }

  v8::Local<v8::Value> stencil_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&stencil_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencil_value.IsEmpty() || stencil_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool stencil_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, stencil_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStencil(stencil_cpp_value);
  }

  if (RuntimeEnabledFeatures::CanvasColorManagementEnabled()) {
    v8::Local<v8::Value> color_space_value;
    if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&color_space_value)) {
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
    if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&pixel_format_value)) {
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

  if (RuntimeEnabledFeatures::WebXREnabled(executionContext)) {
    v8::Local<v8::Value> xr_compatible_value;
    if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&xr_compatible_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (xr_compatible_value.IsEmpty() || xr_compatible_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool xr_compatible_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, xr_compatible_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setXrCompatible(xr_compatible_cpp_value);
    }
  }
}

v8::Local<v8::Value> CanvasContextCreationAttributesModule::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CanvasContextCreationAttributesModule(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CanvasContextCreationAttributesModule(const CanvasContextCreationAttributesModule* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CanvasContextCreationAttributesModuleKeys(isolate);
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

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
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

  v8::Local<v8::Value> antialias_value;
  bool antialias_has_value_or_default = false;
  if (impl->hasAntialias()) {
    antialias_value = v8::Boolean::New(isolate, impl->antialias());
    antialias_has_value_or_default = true;
  } else {
    antialias_value = v8::Boolean::New(isolate, true);
    antialias_has_value_or_default = true;
  }
  if (antialias_has_value_or_default &&
      !create_property(1, antialias_value)) {
    return false;
  }

  v8::Local<v8::Value> depth_value;
  bool depth_has_value_or_default = false;
  if (impl->hasDepth()) {
    depth_value = v8::Boolean::New(isolate, impl->depth());
    depth_has_value_or_default = true;
  } else {
    depth_value = v8::Boolean::New(isolate, true);
    depth_has_value_or_default = true;
  }
  if (depth_has_value_or_default &&
      !create_property(3, depth_value)) {
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
      !create_property(4, desynchronized_value)) {
    return false;
  }

  v8::Local<v8::Value> fail_if_major_performance_caveat_value;
  bool fail_if_major_performance_caveat_has_value_or_default = false;
  if (impl->hasFailIfMajorPerformanceCaveat()) {
    fail_if_major_performance_caveat_value = v8::Boolean::New(isolate, impl->failIfMajorPerformanceCaveat());
    fail_if_major_performance_caveat_has_value_or_default = true;
  } else {
    fail_if_major_performance_caveat_value = v8::Boolean::New(isolate, false);
    fail_if_major_performance_caveat_has_value_or_default = true;
  }
  if (fail_if_major_performance_caveat_has_value_or_default &&
      !create_property(5, fail_if_major_performance_caveat_value)) {
    return false;
  }

  v8::Local<v8::Value> power_preference_value;
  bool power_preference_has_value_or_default = false;
  if (impl->hasPowerPreference()) {
    power_preference_value = V8String(isolate, impl->powerPreference());
    power_preference_has_value_or_default = true;
  } else {
    power_preference_value = V8String(isolate, "default");
    power_preference_has_value_or_default = true;
  }
  if (power_preference_has_value_or_default &&
      !create_property(7, power_preference_value)) {
    return false;
  }

  v8::Local<v8::Value> premultiplied_alpha_value;
  bool premultiplied_alpha_has_value_or_default = false;
  if (impl->hasPremultipliedAlpha()) {
    premultiplied_alpha_value = v8::Boolean::New(isolate, impl->premultipliedAlpha());
    premultiplied_alpha_has_value_or_default = true;
  } else {
    premultiplied_alpha_value = v8::Boolean::New(isolate, true);
    premultiplied_alpha_has_value_or_default = true;
  }
  if (premultiplied_alpha_has_value_or_default &&
      !create_property(8, premultiplied_alpha_value)) {
    return false;
  }

  v8::Local<v8::Value> preserve_drawing_buffer_value;
  bool preserve_drawing_buffer_has_value_or_default = false;
  if (impl->hasPreserveDrawingBuffer()) {
    preserve_drawing_buffer_value = v8::Boolean::New(isolate, impl->preserveDrawingBuffer());
    preserve_drawing_buffer_has_value_or_default = true;
  } else {
    preserve_drawing_buffer_value = v8::Boolean::New(isolate, false);
    preserve_drawing_buffer_has_value_or_default = true;
  }
  if (preserve_drawing_buffer_has_value_or_default &&
      !create_property(9, preserve_drawing_buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> stencil_value;
  bool stencil_has_value_or_default = false;
  if (impl->hasStencil()) {
    stencil_value = v8::Boolean::New(isolate, impl->stencil());
    stencil_has_value_or_default = true;
  } else {
    stencil_value = v8::Boolean::New(isolate, false);
    stencil_has_value_or_default = true;
  }
  if (stencil_has_value_or_default &&
      !create_property(10, stencil_value)) {
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
        !create_property(2, color_space_value)) {
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
        !create_property(6, pixel_format_value)) {
      return false;
    }
  }

  if (RuntimeEnabledFeatures::WebXREnabled(executionContext)) {
    v8::Local<v8::Value> xr_compatible_value;
    bool xr_compatible_has_value_or_default = false;
    if (impl->hasXrCompatible()) {
      xr_compatible_value = v8::Boolean::New(isolate, impl->xrCompatible());
      xr_compatible_has_value_or_default = true;
    } else {
      xr_compatible_value = v8::Boolean::New(isolate, false);
      xr_compatible_has_value_or_default = true;
    }
    if (xr_compatible_has_value_or_default &&
        !create_property(11, xr_compatible_value)) {
      return false;
    }
  }

  return true;
}

CanvasContextCreationAttributesModule* NativeValueTraits<CanvasContextCreationAttributesModule>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CanvasContextCreationAttributesModule* impl = CanvasContextCreationAttributesModule::Create();
  V8CanvasContextCreationAttributesModule::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
