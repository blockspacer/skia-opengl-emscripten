// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FaceDetectorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fastMode",
    "maxDetectedFaces",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FaceDetectorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FaceDetectorOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FaceDetectorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fast_mode_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fast_mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fast_mode_value.IsEmpty() || fast_mode_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool fast_mode_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, fast_mode_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFastMode(fast_mode_cpp_value);
  }

  v8::Local<v8::Value> max_detected_faces_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&max_detected_faces_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (max_detected_faces_value.IsEmpty() || max_detected_faces_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t max_detected_faces_cpp_value = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, max_detected_faces_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMaxDetectedFaces(max_detected_faces_cpp_value);
  }
}

v8::Local<v8::Value> FaceDetectorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FaceDetectorOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FaceDetectorOptions(const FaceDetectorOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FaceDetectorOptionsKeys(isolate);
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

  v8::Local<v8::Value> fast_mode_value;
  bool fast_mode_has_value_or_default = false;
  if (impl->hasFastMode()) {
    fast_mode_value = v8::Boolean::New(isolate, impl->fastMode());
    fast_mode_has_value_or_default = true;
  } else {
    fast_mode_value = v8::Boolean::New(isolate, false);
    fast_mode_has_value_or_default = true;
  }
  if (fast_mode_has_value_or_default &&
      !create_property(0, fast_mode_value)) {
    return false;
  }

  v8::Local<v8::Value> max_detected_faces_value;
  bool max_detected_faces_has_value_or_default = false;
  if (impl->hasMaxDetectedFaces()) {
    max_detected_faces_value = v8::Integer::NewFromUnsigned(isolate, impl->maxDetectedFaces());
    max_detected_faces_has_value_or_default = true;
  } else {
    max_detected_faces_value = v8::Integer::NewFromUnsigned(isolate, 10u);
    max_detected_faces_has_value_or_default = true;
  }
  if (max_detected_faces_has_value_or_default &&
      !create_property(1, max_detected_faces_value)) {
    return false;
  }

  return true;
}

FaceDetectorOptions* NativeValueTraits<FaceDetectorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FaceDetectorOptions* impl = FaceDetectorOptions::Create();
  V8FaceDetectorOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
