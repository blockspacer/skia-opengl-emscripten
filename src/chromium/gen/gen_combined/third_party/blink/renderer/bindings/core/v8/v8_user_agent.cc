// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_user_agent.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8UserAgentKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "architecture",
    "brand",
    "model",
    "platform",
    "version",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8UserAgent::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, UserAgent* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8UserAgentKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> architecture_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&architecture_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (architecture_value.IsEmpty() || architecture_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> architecture_cpp_value = architecture_value;
    if (!architecture_cpp_value.Prepare(exception_state))
      return;
    impl->setArchitecture(architecture_cpp_value);
  }

  v8::Local<v8::Value> brand_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&brand_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (brand_value.IsEmpty() || brand_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> brand_cpp_value = brand_value;
    if (!brand_cpp_value.Prepare(exception_state))
      return;
    impl->setBrand(brand_cpp_value);
  }

  v8::Local<v8::Value> model_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&model_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (model_value.IsEmpty() || model_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> model_cpp_value = model_value;
    if (!model_cpp_value.Prepare(exception_state))
      return;
    impl->setModel(model_cpp_value);
  }

  v8::Local<v8::Value> platform_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&platform_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (platform_value.IsEmpty() || platform_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> platform_cpp_value = platform_value;
    if (!platform_cpp_value.Prepare(exception_state))
      return;
    impl->setPlatform(platform_cpp_value);
  }

  v8::Local<v8::Value> version_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&version_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (version_value.IsEmpty() || version_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> version_cpp_value = version_value;
    if (!version_cpp_value.Prepare(exception_state))
      return;
    impl->setVersion(version_cpp_value);
  }
}

v8::Local<v8::Value> UserAgent::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8UserAgent(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8UserAgent(const UserAgent* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8UserAgentKeys(isolate);
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

  v8::Local<v8::Value> architecture_value;
  bool architecture_has_value_or_default = false;
  if (impl->hasArchitecture()) {
    architecture_value = V8String(isolate, impl->architecture());
    architecture_has_value_or_default = true;
  } else {
    architecture_value = V8String(isolate, WTF::g_empty_string);
    architecture_has_value_or_default = true;
  }
  if (architecture_has_value_or_default &&
      !create_property(0, architecture_value)) {
    return false;
  }

  v8::Local<v8::Value> brand_value;
  bool brand_has_value_or_default = false;
  if (impl->hasBrand()) {
    brand_value = V8String(isolate, impl->brand());
    brand_has_value_or_default = true;
  } else {
    brand_value = V8String(isolate, WTF::g_empty_string);
    brand_has_value_or_default = true;
  }
  if (brand_has_value_or_default &&
      !create_property(1, brand_value)) {
    return false;
  }

  v8::Local<v8::Value> model_value;
  bool model_has_value_or_default = false;
  if (impl->hasModel()) {
    model_value = V8String(isolate, impl->model());
    model_has_value_or_default = true;
  } else {
    model_value = V8String(isolate, WTF::g_empty_string);
    model_has_value_or_default = true;
  }
  if (model_has_value_or_default &&
      !create_property(2, model_value)) {
    return false;
  }

  v8::Local<v8::Value> platform_value;
  bool platform_has_value_or_default = false;
  if (impl->hasPlatform()) {
    platform_value = V8String(isolate, impl->platform());
    platform_has_value_or_default = true;
  } else {
    platform_value = V8String(isolate, WTF::g_empty_string);
    platform_has_value_or_default = true;
  }
  if (platform_has_value_or_default &&
      !create_property(3, platform_value)) {
    return false;
  }

  v8::Local<v8::Value> version_value;
  bool version_has_value_or_default = false;
  if (impl->hasVersion()) {
    version_value = V8String(isolate, impl->version());
    version_has_value_or_default = true;
  } else {
    version_value = V8String(isolate, WTF::g_empty_string);
    version_has_value_or_default = true;
  }
  if (version_has_value_or_default &&
      !create_property(4, version_value)) {
    return false;
  }

  return true;
}

UserAgent* NativeValueTraits<UserAgent>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  UserAgent* impl = UserAgent::Create();
  V8UserAgent::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
