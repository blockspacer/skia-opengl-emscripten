// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_capabilities_info.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaCapabilitiesInfoKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "powerEfficient",
    "smooth",
    "supported",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8MediaCapabilitiesInfo::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, MediaCapabilitiesInfo* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): powerEfficient, smooth, supported.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaCapabilitiesInfoKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> power_efficient_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&power_efficient_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (power_efficient_value.IsEmpty() || power_efficient_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member powerEfficient is undefined.");
    return;
  } else {
    bool power_efficient_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, power_efficient_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPowerEfficient(power_efficient_cpp_value);
  }

  v8::Local<v8::Value> smooth_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&smooth_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (smooth_value.IsEmpty() || smooth_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member smooth is undefined.");
    return;
  } else {
    bool smooth_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, smooth_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSmooth(smooth_cpp_value);
  }

  v8::Local<v8::Value> supported_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&supported_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (supported_value.IsEmpty() || supported_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member supported is undefined.");
    return;
  } else {
    bool supported_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, supported_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSupported(supported_cpp_value);
  }
}

v8::Local<v8::Value> MediaCapabilitiesInfo::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaCapabilitiesInfo(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaCapabilitiesInfo(const MediaCapabilitiesInfo* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaCapabilitiesInfoKeys(isolate);
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

  v8::Local<v8::Value> power_efficient_value;
  bool power_efficient_has_value_or_default = false;
  if (impl->hasPowerEfficient()) {
    power_efficient_value = v8::Boolean::New(isolate, impl->powerEfficient());
    power_efficient_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (power_efficient_has_value_or_default &&
      !create_property(0, power_efficient_value)) {
    return false;
  }

  v8::Local<v8::Value> smooth_value;
  bool smooth_has_value_or_default = false;
  if (impl->hasSmooth()) {
    smooth_value = v8::Boolean::New(isolate, impl->smooth());
    smooth_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (smooth_has_value_or_default &&
      !create_property(1, smooth_value)) {
    return false;
  }

  v8::Local<v8::Value> supported_value;
  bool supported_has_value_or_default = false;
  if (impl->hasSupported()) {
    supported_value = v8::Boolean::New(isolate, impl->supported());
    supported_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (supported_has_value_or_default &&
      !create_property(2, supported_value)) {
    return false;
  }

  return true;
}

MediaCapabilitiesInfo* NativeValueTraits<MediaCapabilitiesInfo>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  MediaCapabilitiesInfo* impl = MediaCapabilitiesInfo::Create();
  V8MediaCapabilitiesInfo::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
