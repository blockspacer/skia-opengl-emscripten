// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_convolver_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ConvolverOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffer",
    "disableNormalization",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ConvolverOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ConvolverOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ConvolverOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> buffer_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buffer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (buffer_value.IsEmpty() || buffer_value->IsUndefined()) {
    // Do nothing.
  } else if (buffer_value->IsNull()) {
    impl->setBufferToNull();
  } else {
    AudioBuffer* buffer_cpp_value = V8AudioBuffer::ToImplWithTypeCheck(isolate, buffer_value);
    if (!buffer_cpp_value) {
      exception_state.ThrowTypeError("member buffer is not of type AudioBuffer.");
      return;
    }
    impl->setBuffer(buffer_cpp_value);
  }

  v8::Local<v8::Value> disable_normalization_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&disable_normalization_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (disable_normalization_value.IsEmpty() || disable_normalization_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool disable_normalization_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, disable_normalization_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDisableNormalization(disable_normalization_cpp_value);
  }
}

v8::Local<v8::Value> ConvolverOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ConvolverOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ConvolverOptions(const ConvolverOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ConvolverOptionsKeys(isolate);
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

  v8::Local<v8::Value> buffer_value;
  bool buffer_has_value_or_default = false;
  if (impl->hasBuffer()) {
    buffer_value = ToV8(impl->buffer(), creationContext, isolate);
    buffer_has_value_or_default = true;
  }
  if (buffer_has_value_or_default &&
      !create_property(0, buffer_value)) {
    return false;
  }

  v8::Local<v8::Value> disable_normalization_value;
  bool disable_normalization_has_value_or_default = false;
  if (impl->hasDisableNormalization()) {
    disable_normalization_value = v8::Boolean::New(isolate, impl->disableNormalization());
    disable_normalization_has_value_or_default = true;
  } else {
    disable_normalization_value = v8::Boolean::New(isolate, false);
    disable_normalization_has_value_or_default = true;
  }
  if (disable_normalization_has_value_or_default &&
      !create_property(1, disable_normalization_value)) {
    return false;
  }

  return true;
}

ConvolverOptions* NativeValueTraits<ConvolverOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ConvolverOptions* impl = ConvolverOptions::Create();
  V8ConvolverOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
