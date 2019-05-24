// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtcp_parameters.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtcpParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "cname",
    "reducedSize",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8RTCRtcpParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, RTCRtcpParameters* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtcpParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> cname_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&cname_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (cname_value.IsEmpty() || cname_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> cname_cpp_value = cname_value;
    if (!cname_cpp_value.Prepare(exception_state))
      return;
    impl->setCname(cname_cpp_value);
  }

  v8::Local<v8::Value> reduced_size_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&reduced_size_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (reduced_size_value.IsEmpty() || reduced_size_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool reduced_size_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, reduced_size_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setReducedSize(reduced_size_cpp_value);
  }
}

v8::Local<v8::Value> RTCRtcpParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtcpParameters(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtcpParameters(const RTCRtcpParameters* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtcpParametersKeys(isolate);
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

  v8::Local<v8::Value> cname_value;
  bool cname_has_value_or_default = false;
  if (impl->hasCname()) {
    cname_value = V8String(isolate, impl->cname());
    cname_has_value_or_default = true;
  }
  if (cname_has_value_or_default &&
      !create_property(0, cname_value)) {
    return false;
  }

  v8::Local<v8::Value> reduced_size_value;
  bool reduced_size_has_value_or_default = false;
  if (impl->hasReducedSize()) {
    reduced_size_value = v8::Boolean::New(isolate, impl->reducedSize());
    reduced_size_has_value_or_default = true;
  }
  if (reduced_size_has_value_or_default &&
      !create_property(1, reduced_size_value)) {
    return false;
  }

  return true;
}

RTCRtcpParameters* NativeValueTraits<RTCRtcpParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  RTCRtcpParameters* impl = RTCRtcpParameters::Create();
  V8RTCRtcpParameters::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
