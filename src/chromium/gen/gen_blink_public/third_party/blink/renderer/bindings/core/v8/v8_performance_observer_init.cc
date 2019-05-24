// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_observer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PerformanceObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "buffered",
    "entryTypes",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PerformanceObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PerformanceObserverInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> entry_types_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&entry_types_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (entry_types_value.IsEmpty() || entry_types_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> entry_types_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, entry_types_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEntryTypes(entry_types_cpp_value);
  }

  v8::Local<v8::Value> type_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&type_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_value.IsEmpty() || type_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> type_cpp_value = type_value;
    if (!type_cpp_value.Prepare(exception_state))
      return;
    impl->setType(type_cpp_value);
  }

  if (RuntimeEnabledFeatures::PerformanceObserverBufferedFlagEnabled()) {
    v8::Local<v8::Value> buffered_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&buffered_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (buffered_value.IsEmpty() || buffered_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool buffered_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, buffered_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setBuffered(buffered_cpp_value);
    }
  }
}

v8::Local<v8::Value> PerformanceObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PerformanceObserverInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PerformanceObserverInit(const PerformanceObserverInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceObserverInitKeys(isolate);
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

  v8::Local<v8::Value> entry_types_value;
  bool entry_types_has_value_or_default = false;
  if (impl->hasEntryTypes()) {
    entry_types_value = ToV8(impl->entryTypes(), creationContext, isolate);
    entry_types_has_value_or_default = true;
  }
  if (entry_types_has_value_or_default &&
      !create_property(1, entry_types_value)) {
    return false;
  }

  v8::Local<v8::Value> type_value;
  bool type_has_value_or_default = false;
  if (impl->hasType()) {
    type_value = V8String(isolate, impl->type());
    type_has_value_or_default = true;
  }
  if (type_has_value_or_default &&
      !create_property(2, type_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::PerformanceObserverBufferedFlagEnabled()) {
    v8::Local<v8::Value> buffered_value;
    bool buffered_has_value_or_default = false;
    if (impl->hasBuffered()) {
      buffered_value = v8::Boolean::New(isolate, impl->buffered());
      buffered_has_value_or_default = true;
    } else {
      buffered_value = v8::Boolean::New(isolate, false);
      buffered_has_value_or_default = true;
    }
    if (buffered_has_value_or_default &&
        !create_property(0, buffered_value)) {
      return false;
    }
  }

  return true;
}

PerformanceObserverInit* NativeValueTraits<PerformanceObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceObserverInit* impl = PerformanceObserverInit::Create();
  V8PerformanceObserverInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
