// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_webgl_layer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRWebGLLayerInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "antialias",
    "depth",
    "framebufferScaleFactor",
    "ignoreDepthValues",
    "multiview",
    "stencil",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8XRWebGLLayerInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, XRWebGLLayerInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8XRWebGLLayerInitKeys(isolate);
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
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&depth_value)) {
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

  v8::Local<v8::Value> framebuffer_scale_factor_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&framebuffer_scale_factor_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (framebuffer_scale_factor_value.IsEmpty() || framebuffer_scale_factor_value->IsUndefined()) {
    // Do nothing.
  } else {
    double framebuffer_scale_factor_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, framebuffer_scale_factor_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFramebufferScaleFactor(framebuffer_scale_factor_cpp_value);
  }

  v8::Local<v8::Value> ignore_depth_values_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&ignore_depth_values_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignore_depth_values_value.IsEmpty() || ignore_depth_values_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignore_depth_values_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignore_depth_values_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIgnoreDepthValues(ignore_depth_values_cpp_value);
  }

  v8::Local<v8::Value> multiview_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&multiview_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (multiview_value.IsEmpty() || multiview_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool multiview_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, multiview_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMultiview(multiview_cpp_value);
  }

  v8::Local<v8::Value> stencil_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&stencil_value)) {
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
}

v8::Local<v8::Value> XRWebGLLayerInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRWebGLLayerInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRWebGLLayerInit(const XRWebGLLayerInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8XRWebGLLayerInitKeys(isolate);
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
      !create_property(2, depth_value)) {
    return false;
  }

  v8::Local<v8::Value> framebuffer_scale_factor_value;
  bool framebuffer_scale_factor_has_value_or_default = false;
  if (impl->hasFramebufferScaleFactor()) {
    framebuffer_scale_factor_value = v8::Number::New(isolate, impl->framebufferScaleFactor());
    framebuffer_scale_factor_has_value_or_default = true;
  } else {
    framebuffer_scale_factor_value = v8::Number::New(isolate, 1);
    framebuffer_scale_factor_has_value_or_default = true;
  }
  if (framebuffer_scale_factor_has_value_or_default &&
      !create_property(3, framebuffer_scale_factor_value)) {
    return false;
  }

  v8::Local<v8::Value> ignore_depth_values_value;
  bool ignore_depth_values_has_value_or_default = false;
  if (impl->hasIgnoreDepthValues()) {
    ignore_depth_values_value = v8::Boolean::New(isolate, impl->ignoreDepthValues());
    ignore_depth_values_has_value_or_default = true;
  } else {
    ignore_depth_values_value = v8::Boolean::New(isolate, false);
    ignore_depth_values_has_value_or_default = true;
  }
  if (ignore_depth_values_has_value_or_default &&
      !create_property(4, ignore_depth_values_value)) {
    return false;
  }

  v8::Local<v8::Value> multiview_value;
  bool multiview_has_value_or_default = false;
  if (impl->hasMultiview()) {
    multiview_value = v8::Boolean::New(isolate, impl->multiview());
    multiview_has_value_or_default = true;
  } else {
    multiview_value = v8::Boolean::New(isolate, false);
    multiview_has_value_or_default = true;
  }
  if (multiview_has_value_or_default &&
      !create_property(5, multiview_value)) {
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
      !create_property(6, stencil_value)) {
    return false;
  }

  return true;
}

XRWebGLLayerInit* NativeValueTraits<XRWebGLLayerInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XRWebGLLayerInit* impl = XRWebGLLayerInit::Create();
  V8XRWebGLLayerInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
