// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_native_file_system_directory_iterator_entry.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_file_system_handle.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NativeFileSystemDirectoryIteratorEntryKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "done",
    "value",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8NativeFileSystemDirectoryIteratorEntry::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, NativeFileSystemDirectoryIteratorEntry* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NativeFileSystemDirectoryIteratorEntryKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> done_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&done_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (done_value.IsEmpty() || done_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool done_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, done_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDone(done_cpp_value);
  }

  v8::Local<v8::Value> value_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&value_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (value_value.IsEmpty() || value_value->IsUndefined()) {
    // Do nothing.
  } else {
    NativeFileSystemHandle* value_cpp_value = V8FileSystemHandle::ToImplWithTypeCheck(isolate, value_value);
    if (!value_cpp_value) {
      exception_state.ThrowTypeError("member value is not of type FileSystemHandle.");
      return;
    }
    impl->setValue(value_cpp_value);
  }
}

v8::Local<v8::Value> NativeFileSystemDirectoryIteratorEntry::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NativeFileSystemDirectoryIteratorEntry(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NativeFileSystemDirectoryIteratorEntry(const NativeFileSystemDirectoryIteratorEntry* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NativeFileSystemDirectoryIteratorEntryKeys(isolate);
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

  v8::Local<v8::Value> done_value;
  bool done_has_value_or_default = false;
  if (impl->hasDone()) {
    done_value = v8::Boolean::New(isolate, impl->done());
    done_has_value_or_default = true;
  } else {
    done_value = v8::Boolean::New(isolate, false);
    done_has_value_or_default = true;
  }
  if (done_has_value_or_default &&
      !create_property(0, done_value)) {
    return false;
  }

  v8::Local<v8::Value> value_value;
  bool value_has_value_or_default = false;
  if (impl->hasValue()) {
    value_value = ToV8(impl->value(), creationContext, isolate);
    value_has_value_or_default = true;
  }
  if (value_has_value_or_default &&
      !create_property(1, value_value)) {
    return false;
  }

  return true;
}

NativeFileSystemDirectoryIteratorEntry* NativeValueTraits<NativeFileSystemDirectoryIteratorEntry>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NativeFileSystemDirectoryIteratorEntry* impl = NativeFileSystemDirectoryIteratorEntry::Create();
  V8NativeFileSystemDirectoryIteratorEntry::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
