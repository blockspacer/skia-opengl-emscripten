// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_performance_measure_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PerformanceMeasureOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "detail",
    "endTime",
    "startTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8PerformanceMeasureOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, PerformanceMeasureOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMeasureOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> detail_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&detail_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (detail_value.IsEmpty() || detail_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue detail_cpp_value = ScriptValue(ScriptState::Current(isolate), detail_value);
    impl->setDetail(detail_cpp_value);
  }

  v8::Local<v8::Value> end_time_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&end_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (end_time_value.IsEmpty() || end_time_value->IsUndefined()) {
    // Do nothing.
  } else if (end_time_value->IsNull()) {
    impl->setEndTimeToNull();
  } else {
    StringOrDouble end_time_cpp_value;
    V8StringOrDouble::ToImpl(isolate, end_time_value, end_time_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setEndTime(end_time_cpp_value);
  }

  v8::Local<v8::Value> start_time_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&start_time_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (start_time_value.IsEmpty() || start_time_value->IsUndefined()) {
    // Do nothing.
  } else if (start_time_value->IsNull()) {
    impl->setStartTimeToNull();
  } else {
    StringOrDouble start_time_cpp_value;
    V8StringOrDouble::ToImpl(isolate, start_time_value, start_time_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStartTime(start_time_cpp_value);
  }
}

v8::Local<v8::Value> PerformanceMeasureOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PerformanceMeasureOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PerformanceMeasureOptions(const PerformanceMeasureOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PerformanceMeasureOptionsKeys(isolate);
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

  v8::Local<v8::Value> detail_value;
  bool detail_has_value_or_default = false;
  if (impl->hasDetail()) {
    detail_value = impl->detail().V8Value();
    detail_has_value_or_default = true;
  } else {
    detail_value = v8::Null(isolate);
    detail_has_value_or_default = true;
  }
  if (detail_has_value_or_default &&
      !create_property(0, detail_value)) {
    return false;
  }

  v8::Local<v8::Value> end_time_value;
  bool end_time_has_value_or_default = false;
  if (impl->hasEndTime()) {
    end_time_value = ToV8(impl->endTime(), creationContext, isolate);
    end_time_has_value_or_default = true;
  } else {
    end_time_value = v8::Null(isolate);
    end_time_has_value_or_default = true;
  }
  if (end_time_has_value_or_default &&
      !create_property(1, end_time_value)) {
    return false;
  }

  v8::Local<v8::Value> start_time_value;
  bool start_time_has_value_or_default = false;
  if (impl->hasStartTime()) {
    start_time_value = ToV8(impl->startTime(), creationContext, isolate);
    start_time_has_value_or_default = true;
  } else {
    start_time_value = v8::Null(isolate);
    start_time_has_value_or_default = true;
  }
  if (start_time_has_value_or_default &&
      !create_property(2, start_time_value)) {
    return false;
  }

  return true;
}

PerformanceMeasureOptions* NativeValueTraits<PerformanceMeasureOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PerformanceMeasureOptions* impl = PerformanceMeasureOptions::Create();
  V8PerformanceMeasureOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
