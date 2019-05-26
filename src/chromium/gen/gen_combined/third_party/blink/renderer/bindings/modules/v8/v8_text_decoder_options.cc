// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_text_decoder_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8TextDecoderOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fatal",
    "ignoreBOM",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8TextDecoderOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, TextDecoderOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8TextDecoderOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fatal_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fatal_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (fatal_value.IsEmpty() || fatal_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool fatal_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, fatal_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFatal(fatal_cpp_value);
  }

  v8::Local<v8::Value> ignore_bom_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&ignore_bom_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ignore_bom_value.IsEmpty() || ignore_bom_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool ignore_bom_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, ignore_bom_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIgnoreBOM(ignore_bom_cpp_value);
  }
}

v8::Local<v8::Value> TextDecoderOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8TextDecoderOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8TextDecoderOptions(const TextDecoderOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8TextDecoderOptionsKeys(isolate);
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

  v8::Local<v8::Value> fatal_value;
  bool fatal_has_value_or_default = false;
  if (impl->hasFatal()) {
    fatal_value = v8::Boolean::New(isolate, impl->fatal());
    fatal_has_value_or_default = true;
  } else {
    fatal_value = v8::Boolean::New(isolate, false);
    fatal_has_value_or_default = true;
  }
  if (fatal_has_value_or_default &&
      !create_property(0, fatal_value)) {
    return false;
  }

  v8::Local<v8::Value> ignore_bom_value;
  bool ignore_bom_has_value_or_default = false;
  if (impl->hasIgnoreBOM()) {
    ignore_bom_value = v8::Boolean::New(isolate, impl->ignoreBOM());
    ignore_bom_has_value_or_default = true;
  } else {
    ignore_bom_value = v8::Boolean::New(isolate, false);
    ignore_bom_has_value_or_default = true;
  }
  if (ignore_bom_has_value_or_default &&
      !create_property(1, ignore_bom_value)) {
    return false;
  }

  return true;
}

TextDecoderOptions* NativeValueTraits<TextDecoderOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  TextDecoderOptions* impl = TextDecoderOptions::Create();
  V8TextDecoderOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
