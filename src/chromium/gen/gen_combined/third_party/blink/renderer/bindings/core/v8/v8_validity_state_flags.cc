// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_validity_state_flags.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ValidityStateFlagsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "badInput",
    "customError",
    "patternMismatch",
    "rangeOverflow",
    "rangeUnderflow",
    "stepMismatch",
    "tooLong",
    "tooShort",
    "typeMismatch",
    "valueMissing",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ValidityStateFlags::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ValidityStateFlags* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ValidityStateFlagsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bad_input_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bad_input_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (bad_input_value.IsEmpty() || bad_input_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool bad_input_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, bad_input_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBadInput(bad_input_cpp_value);
  }

  v8::Local<v8::Value> custom_error_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&custom_error_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (custom_error_value.IsEmpty() || custom_error_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool custom_error_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, custom_error_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setCustomError(custom_error_cpp_value);
  }

  v8::Local<v8::Value> pattern_mismatch_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&pattern_mismatch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (pattern_mismatch_value.IsEmpty() || pattern_mismatch_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool pattern_mismatch_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, pattern_mismatch_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPatternMismatch(pattern_mismatch_cpp_value);
  }

  v8::Local<v8::Value> range_overflow_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&range_overflow_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (range_overflow_value.IsEmpty() || range_overflow_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool range_overflow_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, range_overflow_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRangeOverflow(range_overflow_cpp_value);
  }

  v8::Local<v8::Value> range_underflow_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&range_underflow_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (range_underflow_value.IsEmpty() || range_underflow_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool range_underflow_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, range_underflow_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRangeUnderflow(range_underflow_cpp_value);
  }

  v8::Local<v8::Value> step_mismatch_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&step_mismatch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (step_mismatch_value.IsEmpty() || step_mismatch_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool step_mismatch_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, step_mismatch_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStepMismatch(step_mismatch_cpp_value);
  }

  v8::Local<v8::Value> too_long_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&too_long_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (too_long_value.IsEmpty() || too_long_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool too_long_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, too_long_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTooLong(too_long_cpp_value);
  }

  v8::Local<v8::Value> too_short_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&too_short_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (too_short_value.IsEmpty() || too_short_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool too_short_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, too_short_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTooShort(too_short_cpp_value);
  }

  v8::Local<v8::Value> type_mismatch_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&type_mismatch_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (type_mismatch_value.IsEmpty() || type_mismatch_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool type_mismatch_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, type_mismatch_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTypeMismatch(type_mismatch_cpp_value);
  }

  v8::Local<v8::Value> value_missing_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&value_missing_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (value_missing_value.IsEmpty() || value_missing_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool value_missing_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, value_missing_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setValueMissing(value_missing_cpp_value);
  }
}

v8::Local<v8::Value> ValidityStateFlags::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ValidityStateFlags(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ValidityStateFlags(const ValidityStateFlags* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ValidityStateFlagsKeys(isolate);
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

  v8::Local<v8::Value> bad_input_value;
  bool bad_input_has_value_or_default = false;
  if (impl->hasBadInput()) {
    bad_input_value = v8::Boolean::New(isolate, impl->badInput());
    bad_input_has_value_or_default = true;
  } else {
    bad_input_value = v8::Boolean::New(isolate, false);
    bad_input_has_value_or_default = true;
  }
  if (bad_input_has_value_or_default &&
      !create_property(0, bad_input_value)) {
    return false;
  }

  v8::Local<v8::Value> custom_error_value;
  bool custom_error_has_value_or_default = false;
  if (impl->hasCustomError()) {
    custom_error_value = v8::Boolean::New(isolate, impl->customError());
    custom_error_has_value_or_default = true;
  } else {
    custom_error_value = v8::Boolean::New(isolate, false);
    custom_error_has_value_or_default = true;
  }
  if (custom_error_has_value_or_default &&
      !create_property(1, custom_error_value)) {
    return false;
  }

  v8::Local<v8::Value> pattern_mismatch_value;
  bool pattern_mismatch_has_value_or_default = false;
  if (impl->hasPatternMismatch()) {
    pattern_mismatch_value = v8::Boolean::New(isolate, impl->patternMismatch());
    pattern_mismatch_has_value_or_default = true;
  } else {
    pattern_mismatch_value = v8::Boolean::New(isolate, false);
    pattern_mismatch_has_value_or_default = true;
  }
  if (pattern_mismatch_has_value_or_default &&
      !create_property(2, pattern_mismatch_value)) {
    return false;
  }

  v8::Local<v8::Value> range_overflow_value;
  bool range_overflow_has_value_or_default = false;
  if (impl->hasRangeOverflow()) {
    range_overflow_value = v8::Boolean::New(isolate, impl->rangeOverflow());
    range_overflow_has_value_or_default = true;
  } else {
    range_overflow_value = v8::Boolean::New(isolate, false);
    range_overflow_has_value_or_default = true;
  }
  if (range_overflow_has_value_or_default &&
      !create_property(3, range_overflow_value)) {
    return false;
  }

  v8::Local<v8::Value> range_underflow_value;
  bool range_underflow_has_value_or_default = false;
  if (impl->hasRangeUnderflow()) {
    range_underflow_value = v8::Boolean::New(isolate, impl->rangeUnderflow());
    range_underflow_has_value_or_default = true;
  } else {
    range_underflow_value = v8::Boolean::New(isolate, false);
    range_underflow_has_value_or_default = true;
  }
  if (range_underflow_has_value_or_default &&
      !create_property(4, range_underflow_value)) {
    return false;
  }

  v8::Local<v8::Value> step_mismatch_value;
  bool step_mismatch_has_value_or_default = false;
  if (impl->hasStepMismatch()) {
    step_mismatch_value = v8::Boolean::New(isolate, impl->stepMismatch());
    step_mismatch_has_value_or_default = true;
  } else {
    step_mismatch_value = v8::Boolean::New(isolate, false);
    step_mismatch_has_value_or_default = true;
  }
  if (step_mismatch_has_value_or_default &&
      !create_property(5, step_mismatch_value)) {
    return false;
  }

  v8::Local<v8::Value> too_long_value;
  bool too_long_has_value_or_default = false;
  if (impl->hasTooLong()) {
    too_long_value = v8::Boolean::New(isolate, impl->tooLong());
    too_long_has_value_or_default = true;
  } else {
    too_long_value = v8::Boolean::New(isolate, false);
    too_long_has_value_or_default = true;
  }
  if (too_long_has_value_or_default &&
      !create_property(6, too_long_value)) {
    return false;
  }

  v8::Local<v8::Value> too_short_value;
  bool too_short_has_value_or_default = false;
  if (impl->hasTooShort()) {
    too_short_value = v8::Boolean::New(isolate, impl->tooShort());
    too_short_has_value_or_default = true;
  } else {
    too_short_value = v8::Boolean::New(isolate, false);
    too_short_has_value_or_default = true;
  }
  if (too_short_has_value_or_default &&
      !create_property(7, too_short_value)) {
    return false;
  }

  v8::Local<v8::Value> type_mismatch_value;
  bool type_mismatch_has_value_or_default = false;
  if (impl->hasTypeMismatch()) {
    type_mismatch_value = v8::Boolean::New(isolate, impl->typeMismatch());
    type_mismatch_has_value_or_default = true;
  } else {
    type_mismatch_value = v8::Boolean::New(isolate, false);
    type_mismatch_has_value_or_default = true;
  }
  if (type_mismatch_has_value_or_default &&
      !create_property(8, type_mismatch_value)) {
    return false;
  }

  v8::Local<v8::Value> value_missing_value;
  bool value_missing_has_value_or_default = false;
  if (impl->hasValueMissing()) {
    value_missing_value = v8::Boolean::New(isolate, impl->valueMissing());
    value_missing_has_value_or_default = true;
  } else {
    value_missing_value = v8::Boolean::New(isolate, false);
    value_missing_has_value_or_default = true;
  }
  if (value_missing_has_value_or_default &&
      !create_property(9, value_missing_value)) {
    return false;
  }

  return true;
}

ValidityStateFlags* NativeValueTraits<ValidityStateFlags>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ValidityStateFlags* impl = ValidityStateFlags::Create();
  V8ValidityStateFlags::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
