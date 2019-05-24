// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_choose_file_system_entries_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_choose_file_system_entries_options_accepts.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ChooseFileSystemEntriesOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "accepts",
    "excludeAcceptAllOption",
    "multiple",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ChooseFileSystemEntriesOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ChooseFileSystemEntriesOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ChooseFileSystemEntriesOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> accepts_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&accepts_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (accepts_value.IsEmpty() || accepts_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<ChooseFileSystemEntriesOptionsAccepts>> accepts_cpp_value = NativeValueTraits<IDLSequence<ChooseFileSystemEntriesOptionsAccepts>>::NativeValue(isolate, accepts_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setAccepts(accepts_cpp_value);
  }

  v8::Local<v8::Value> exclude_accept_all_option_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&exclude_accept_all_option_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (exclude_accept_all_option_value.IsEmpty() || exclude_accept_all_option_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool exclude_accept_all_option_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, exclude_accept_all_option_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setExcludeAcceptAllOption(exclude_accept_all_option_cpp_value);
  }

  v8::Local<v8::Value> multiple_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&multiple_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (multiple_value.IsEmpty() || multiple_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool multiple_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, multiple_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setMultiple(multiple_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "openFile",
        "saveFile",
        "openDirectory",
    };
    if (!IsValidEnum(type_cpp_value, kValidValues, base::size(kValidValues), "ChooseFileSystemEntriesType", exception_state))
      return;
    impl->setType(type_cpp_value);
  }
}

v8::Local<v8::Value> ChooseFileSystemEntriesOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ChooseFileSystemEntriesOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ChooseFileSystemEntriesOptions(const ChooseFileSystemEntriesOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ChooseFileSystemEntriesOptionsKeys(isolate);
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

  v8::Local<v8::Value> accepts_value;
  bool accepts_has_value_or_default = false;
  if (impl->hasAccepts()) {
    accepts_value = ToV8(impl->accepts(), creationContext, isolate);
    accepts_has_value_or_default = true;
  }
  if (accepts_has_value_or_default &&
      !create_property(0, accepts_value)) {
    return false;
  }

  v8::Local<v8::Value> exclude_accept_all_option_value;
  bool exclude_accept_all_option_has_value_or_default = false;
  if (impl->hasExcludeAcceptAllOption()) {
    exclude_accept_all_option_value = v8::Boolean::New(isolate, impl->excludeAcceptAllOption());
    exclude_accept_all_option_has_value_or_default = true;
  } else {
    exclude_accept_all_option_value = v8::Boolean::New(isolate, false);
    exclude_accept_all_option_has_value_or_default = true;
  }
  if (exclude_accept_all_option_has_value_or_default &&
      !create_property(1, exclude_accept_all_option_value)) {
    return false;
  }

  v8::Local<v8::Value> multiple_value;
  bool multiple_has_value_or_default = false;
  if (impl->hasMultiple()) {
    multiple_value = v8::Boolean::New(isolate, impl->multiple());
    multiple_has_value_or_default = true;
  } else {
    multiple_value = v8::Boolean::New(isolate, false);
    multiple_has_value_or_default = true;
  }
  if (multiple_has_value_or_default &&
      !create_property(2, multiple_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  } else {
    type_value = V8String(isolate, "openFile");
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(3, type_value)) {
    return false;
  }

  return true;
}

ChooseFileSystemEntriesOptions* NativeValueTraits<ChooseFileSystemEntriesOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ChooseFileSystemEntriesOptions* impl = ChooseFileSystemEntriesOptions::Create();
  V8ChooseFileSystemEntriesOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
