// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_layer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8VRLayerInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "leftBounds",
    "rightBounds",
    "source",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8VRLayerInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, VRLayerInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8VRLayerInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> left_bounds_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&left_bounds_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (left_bounds_value.IsEmpty() || left_bounds_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> left_bounds_cpp_value = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, left_bounds_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLeftBounds(left_bounds_cpp_value);
  }

  v8::Local<v8::Value> right_bounds_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&right_bounds_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (right_bounds_value.IsEmpty() || right_bounds_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> right_bounds_cpp_value = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, right_bounds_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRightBounds(right_bounds_cpp_value);
  }

  v8::Local<v8::Value> source_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&source_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (source_value.IsEmpty() || source_value->IsUndefined()) {
    // Do nothing.
  } else if (source_value->IsNull()) {
    impl->setSourceToNull();
  } else {
    HTMLCanvasElementOrOffscreenCanvas source_cpp_value;
    V8HTMLCanvasElementOrOffscreenCanvas::ToImpl(isolate, source_value, source_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSource(source_cpp_value);
  }
}

v8::Local<v8::Value> VRLayerInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8VRLayerInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8VRLayerInit(const VRLayerInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8VRLayerInitKeys(isolate);
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

  v8::Local<v8::Value> left_bounds_value;
  bool left_bounds_has_value_or_default = false;
  if (impl->hasLeftBounds()) {
    left_bounds_value = ToV8(impl->leftBounds(), creationContext, isolate);
    left_bounds_has_value_or_default = true;
  } else {
    left_bounds_value = ToV8(Vector<float>(), creationContext, isolate);
    left_bounds_has_value_or_default = true;
  }
  if (left_bounds_has_value_or_default &&
      !create_property(0, left_bounds_value)) {
    return false;
  }

  v8::Local<v8::Value> right_bounds_value;
  bool right_bounds_has_value_or_default = false;
  if (impl->hasRightBounds()) {
    right_bounds_value = ToV8(impl->rightBounds(), creationContext, isolate);
    right_bounds_has_value_or_default = true;
  } else {
    right_bounds_value = ToV8(Vector<float>(), creationContext, isolate);
    right_bounds_has_value_or_default = true;
  }
  if (right_bounds_has_value_or_default &&
      !create_property(1, right_bounds_value)) {
    return false;
  }

  v8::Local<v8::Value> source_value;
  bool source_has_value_or_default = false;
  if (impl->hasSource()) {
    source_value = ToV8(impl->source(), creationContext, isolate);
    source_has_value_or_default = true;
  } else {
    source_value = v8::Null(isolate);
    source_has_value_or_default = true;
  }
  if (source_has_value_or_default &&
      !create_property(2, source_value)) {
    return false;
  }

  return true;
}

VRLayerInit* NativeValueTraits<VRLayerInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  VRLayerInit* impl = VRLayerInit::Create();
  V8VRLayerInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
