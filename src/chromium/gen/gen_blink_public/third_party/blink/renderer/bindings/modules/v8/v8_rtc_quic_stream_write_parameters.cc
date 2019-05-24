// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_quic_stream_write_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_uint8_array.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCQuicStreamWriteParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "finish",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCQuicStreamWriteParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCQuicStreamWriteParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicStreamWriteParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    // Do nothing.
  } else {
    NotShared<DOMUint8Array> data_cpp_value = ToNotShared<NotShared<DOMUint8Array>>(isolate, data_value, exception_state);
    if (exception_state.HadException())
      return;
    if (!data_cpp_value) {
      exception_state.ThrowTypeError("member data is not of type Uint8Array.");
      return;
    }
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> finish_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&finish_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (finish_value.IsEmpty() || finish_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool finish_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, finish_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setFinish(finish_cpp_value);
  }
}

v8::Local<v8::Value> RTCQuicStreamWriteParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCQuicStreamWriteParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCQuicStreamWriteParameters(const RTCQuicStreamWriteParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCQuicStreamWriteParametersKeys(isolate);
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
  }
  if (data_has_value_or_default &&
      !create_property(0, data_value)) {
    return false;
  }

  v8::Local<v8::Value> finish_value;
  bool finish_has_value_or_default = false;
  if (impl->hasFinish()) {
    finish_value = v8::Boolean::New(isolate, impl->finish());
    finish_has_value_or_default = true;
  } else {
    finish_value = v8::Boolean::New(isolate, false);
    finish_has_value_or_default = true;
  }
  if (finish_has_value_or_default &&
      !create_property(1, finish_value)) {
    return false;
  }

  return true;
}

RTCQuicStreamWriteParameters* NativeValueTraits<RTCQuicStreamWriteParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCQuicStreamWriteParameters* impl = RTCQuicStreamWriteParameters::Create();
  V8RTCQuicStreamWriteParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
