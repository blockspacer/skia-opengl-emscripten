// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_flags.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FileSystemFlagsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "create",
    "exclusive",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8FileSystemFlags::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, FileSystemFlags* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FileSystemFlagsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> create_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&create_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (create_value.IsEmpty() || create_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool create_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, create_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCreateFlag(create_cpp_value);
  }

  v8::Local<v8::Value> exclusive_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&exclusive_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exclusive_value.IsEmpty() || exclusive_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool exclusive_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exclusive_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExclusive(exclusive_cpp_value);
  }
}

v8::Local<v8::Value> FileSystemFlags::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FileSystemFlags(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FileSystemFlags(const FileSystemFlags* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FileSystemFlagsKeys(isolate);
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

  v8::Local<v8::Value> create_value;
  bool create_has_value_or_default = false;
  if (impl->hasCreateFlag()) {
    create_value = v8::Boolean::New(isolate, impl->createFlag());
    create_has_value_or_default = true;
  } else {
    create_value = v8::Boolean::New(isolate, false);
    create_has_value_or_default = true;
  }
  if (create_has_value_or_default &&
      !create_property(0, create_value)) {
    return false;
  }

  v8::Local<v8::Value> exclusive_value;
  bool exclusive_has_value_or_default = false;
  if (impl->hasExclusive()) {
    exclusive_value = v8::Boolean::New(isolate, impl->exclusive());
    exclusive_has_value_or_default = true;
  } else {
    exclusive_value = v8::Boolean::New(isolate, false);
    exclusive_has_value_or_default = true;
  }
  if (exclusive_has_value_or_default &&
      !create_property(1, exclusive_value)) {
    return false;
  }

  return true;
}

FileSystemFlags* NativeValueTraits<FileSystemFlags>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FileSystemFlags* impl = FileSystemFlags::Create();
  V8FileSystemFlags::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
