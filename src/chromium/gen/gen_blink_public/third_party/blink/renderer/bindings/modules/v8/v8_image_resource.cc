// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_resource.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ManifestImageResourceKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "platform",
    "purpose",
    "sizes",
    "src",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ManifestImageResource::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ManifestImageResource* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): src.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ManifestImageResourceKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> platform_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&platform_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (platform_value.IsEmpty() || platform_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> platform_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, platform_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPlatform(platform_cpp_value);
  }

  v8::Local<v8::Value> purpose_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&purpose_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (purpose_value.IsEmpty() || purpose_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> purpose_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, purpose_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPurpose(purpose_cpp_value);
  }

  v8::Local<v8::Value> sizes_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sizes_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (sizes_value.IsEmpty() || sizes_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sizes_cpp_value = sizes_value;
    if (!sizes_cpp_value.Prepare(exception_state))
      return;
    impl->setSizes(sizes_cpp_value);
  }

  v8::Local<v8::Value> src_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&src_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (src_value.IsEmpty() || src_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member src is undefined.");
    return;
  } else {
    V8StringResource<> src_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, src_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSrc(src_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, type_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> ManifestImageResource::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ManifestImageResource(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ManifestImageResource(const ManifestImageResource* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ManifestImageResourceKeys(isolate);
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

  v8::Local<v8::Value> platform_value;
  bool platform_has_value_or_default = false;
  if (impl->hasPlatform()) {
    platform_value = V8String(isolate, impl->platform());
    platform_has_value_or_default = true;
  }
  if (platform_has_value_or_default &&
      !create_property(0, platform_value)) {
    return false;
  }

  v8::Local<v8::Value> purpose_value;
  bool purpose_has_value_or_default = false;
  if (impl->hasPurpose()) {
    purpose_value = V8String(isolate, impl->purpose());
    purpose_has_value_or_default = true;
  }
  if (purpose_has_value_or_default &&
      !create_property(1, purpose_value)) {
    return false;
  }

  v8::Local<v8::Value> sizes_value;
  bool sizes_has_value_or_default = false;
  if (impl->hasSizes()) {
    sizes_value = V8String(isolate, impl->sizes());
    sizes_has_value_or_default = true;
  }
  if (sizes_has_value_or_default &&
      !create_property(2, sizes_value)) {
    return false;
  }

  v8::Local<v8::Value> src_value;
  bool src_has_value_or_default = false;
  if (impl->hasSrc()) {
    src_value = V8String(isolate, impl->src());
    src_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (src_has_value_or_default &&
      !create_property(3, src_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(4, type_value)) {
    return false;
  }

  return true;
}

ManifestImageResource* NativeValueTraits<ManifestImageResource>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ManifestImageResource* impl = ManifestImageResource::Create();
  V8ManifestImageResource::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
