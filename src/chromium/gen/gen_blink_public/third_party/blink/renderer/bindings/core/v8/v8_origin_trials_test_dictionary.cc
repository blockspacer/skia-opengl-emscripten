// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test_dictionary.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OriginTrialsTestDictionaryKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "normalBool",
    "unconditionalBool",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8OriginTrialsTestDictionary::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, OriginTrialsTestDictionary* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8OriginTrialsTestDictionaryKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> unconditional_bool_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&unconditional_bool_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (unconditional_bool_value.IsEmpty() || unconditional_bool_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool unconditional_bool_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, unconditional_bool_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUnconditionalBool(unconditional_bool_cpp_value);
  }

  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(executionContext)) {
    v8::Local<v8::Value> normal_bool_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&normal_bool_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (normal_bool_value.IsEmpty() || normal_bool_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool normal_bool_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, normal_bool_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setNormalBool(normal_bool_cpp_value);
    }
  }
}

v8::Local<v8::Value> OriginTrialsTestDictionary::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OriginTrialsTestDictionary(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OriginTrialsTestDictionary(const OriginTrialsTestDictionary* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8OriginTrialsTestDictionaryKeys(isolate);
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

  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> unconditional_bool_value;
  bool unconditional_bool_has_value_or_default = false;
  if (impl->hasUnconditionalBool()) {
    unconditional_bool_value = v8::Boolean::New(isolate, impl->unconditionalBool());
    unconditional_bool_has_value_or_default = true;
  } else {
    unconditional_bool_value = v8::Boolean::New(isolate, true);
    unconditional_bool_has_value_or_default = true;
  }
  if (unconditional_bool_has_value_or_default &&
      !create_property(1, unconditional_bool_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabled(executionContext)) {
    v8::Local<v8::Value> normal_bool_value;
    bool normal_bool_has_value_or_default = false;
    if (impl->hasNormalBool()) {
      normal_bool_value = v8::Boolean::New(isolate, impl->normalBool());
      normal_bool_has_value_or_default = true;
    } else {
      normal_bool_value = v8::Boolean::New(isolate, true);
      normal_bool_has_value_or_default = true;
    }
    if (normal_bool_has_value_or_default &&
        !create_property(0, normal_bool_value)) {
      return false;
    }
  }

  return true;
}

OriginTrialsTestDictionary* NativeValueTraits<OriginTrialsTestDictionary>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  OriginTrialsTestDictionary* impl = OriginTrialsTestDictionary::Create();
  V8OriginTrialsTestDictionary::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
