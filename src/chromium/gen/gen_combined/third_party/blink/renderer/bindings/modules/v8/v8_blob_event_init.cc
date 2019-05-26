// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_blob_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_blob.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BlobEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "timecode",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8BlobEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, BlobEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): data.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8BlobEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member data is undefined.");
    return;
  } else {
    Blob* data_cpp_value = V8Blob::ToImplWithTypeCheck(isolate, data_value);
    if (!data_cpp_value) {
      exception_state.ThrowTypeError("member data is not of type Blob.");
      return;
    }
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> timecode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&timecode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timecode_value.IsEmpty() || timecode_value->IsUndefined()) {
    // Do nothing.
  } else {
    double timecode_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, timecode_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimecode(timecode_cpp_value);
  }
}

v8::Local<v8::Value> BlobEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BlobEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BlobEventInit(const BlobEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BlobEventInitKeys(isolate);
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

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    data_value = ToV8(impl->data(), creationContext, isolate);
    data_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (data_has_value_or_default &&
      !create_property(0, data_value)) {
    return false;
  }

  v8::Local<v8::Value> timecode_value;
  bool timecode_has_value_or_default = false;
  if (impl->hasTimecode()) {
    timecode_value = v8::Number::New(isolate, impl->timecode());
    timecode_has_value_or_default = true;
  }
  if (timecode_has_value_or_default &&
      !create_property(1, timecode_value)) {
    return false;
  }

  return true;
}

BlobEventInit* NativeValueTraits<BlobEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BlobEventInit* impl = BlobEventInit::Create();
  V8BlobEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
