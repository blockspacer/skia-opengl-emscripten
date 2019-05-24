// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_input_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_data_transfer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_ui_event_init.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InputEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "dataTransfer",
    "inputType",
    "isComposing",
    "targetRanges",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8InputEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, InputEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8UIEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8InputEventInitKeys(isolate);
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
    V8StringResource<kTreatNullAndUndefinedAsNullString> data_cpp_value = data_value;
    if (!data_cpp_value.Prepare(exception_state))
      return;
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> data_transfer_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&data_transfer_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_transfer_value.IsEmpty() || data_transfer_value->IsUndefined()) {
    // Do nothing.
  } else if (data_transfer_value->IsNull()) {
    impl->setDataTransferToNull();
  } else {
    DataTransfer* data_transfer_cpp_value = V8DataTransfer::ToImplWithTypeCheck(isolate, data_transfer_value);
    if (!data_transfer_cpp_value) {
      exception_state.ThrowTypeError("member dataTransfer is not of type DataTransfer.");
      return;
    }
    impl->setDataTransfer(data_transfer_cpp_value);
  }

  v8::Local<v8::Value> input_type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&input_type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (input_type_value.IsEmpty() || input_type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> input_type_cpp_value = input_type_value;
    if (!input_type_cpp_value.Prepare(exception_state))
      return;
    impl->setInputType(input_type_cpp_value);
  }

  v8::Local<v8::Value> is_composing_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&is_composing_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (is_composing_value.IsEmpty() || is_composing_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool is_composing_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is_composing_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIsComposing(is_composing_cpp_value);
  }

  v8::Local<v8::Value> target_ranges_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&target_ranges_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (target_ranges_value.IsEmpty() || target_ranges_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<StaticRange>> target_ranges_cpp_value = NativeValueTraits<IDLSequence<StaticRange>>::NativeValue(isolate, target_ranges_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTargetRanges(target_ranges_cpp_value);
  }
}

v8::Local<v8::Value> InputEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InputEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InputEventInit(const InputEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8UIEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8InputEventInitKeys(isolate);
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
    data_value = V8String(isolate, impl->data());
    data_has_value_or_default = true;
  } else {
    data_value = v8::Null(isolate);
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(0, data_value)) {
    return false;
  }

  v8::Local<v8::Value> data_transfer_value;
  bool data_transfer_has_value_or_default = false;
  if (impl->hasDataTransfer()) {
    data_transfer_value = ToV8(impl->dataTransfer(), creationContext, isolate);
    data_transfer_has_value_or_default = true;
  }
  if (data_transfer_has_value_or_default &&
      !create_property(1, data_transfer_value)) {
    return false;
  }

  v8::Local<v8::Value> input_type_value;
  bool input_type_has_value_or_default = false;
  if (impl->hasInputType()) {
    input_type_value = V8String(isolate, impl->inputType());
    input_type_has_value_or_default = true;
  } else {
    input_type_value = V8String(isolate, WTF::g_empty_string);
    input_type_has_value_or_default = true;
  }
  if (input_type_has_value_or_default &&
      !create_property(2, input_type_value)) {
    return false;
  }

  v8::Local<v8::Value> is_composing_value;
  bool is_composing_has_value_or_default = false;
  if (impl->hasIsComposing()) {
    is_composing_value = v8::Boolean::New(isolate, impl->isComposing());
    is_composing_has_value_or_default = true;
  } else {
    is_composing_value = v8::Boolean::New(isolate, false);
    is_composing_has_value_or_default = true;
  }
  if (is_composing_has_value_or_default &&
      !create_property(3, is_composing_value)) {
    return false;
  }

  v8::Local<v8::Value> target_ranges_value;
  bool target_ranges_has_value_or_default = false;
  if (impl->hasTargetRanges()) {
    target_ranges_value = ToV8(impl->targetRanges(), creationContext, isolate);
    target_ranges_has_value_or_default = true;
  } else {
    target_ranges_value = ToV8(HeapVector<Member<StaticRange>>(), creationContext, isolate);
    target_ranges_has_value_or_default = true;
  }
  if (target_ranges_has_value_or_default &&
      !create_property(4, target_ranges_value)) {
    return false;
  }

  return true;
}

InputEventInit* NativeValueTraits<InputEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InputEventInit* impl = InputEventInit::Create();
  V8InputEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
