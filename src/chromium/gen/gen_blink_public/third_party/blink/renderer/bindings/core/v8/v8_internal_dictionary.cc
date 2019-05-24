// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_dictionary.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_target.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_test_callback.h"
#include "third_party/blink/renderer/core/frame/deprecation.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8InternalDictionaryKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "anyMember",
    "booleanMember",
    "byteStringMember",
    "callbackFunctionMember",
    "deprecateLongMember",
    "dictionaryMember",
    "doubleMember",
    "doubleOrStringMember",
    "doubleOrStringSequenceMember",
    "elementMember",
    "elementOrNullMember",
    "enumMember",
    "enumMemberWithDefault",
    "enumOrNullMember",
    "eventTargetOrNullMember",
    "internalEnumOrInternalEnumSequenceMember",
    "longMember",
    "longMemberWithClamp",
    "longMemberWithDefault",
    "longMemberWithEnforceRange",
    "longOrNullMember",
    "longOrNullMemberWithDefault",
    "objectMember",
    "objectOrNullMemberWithDefault",
    "stringMember",
    "stringMemberWithDefault",
    "stringSequenceMember",
    "stringSequenceMemberWithDefault",
    "stringSequenceOrNullMember",
    "unrestrictedDoubleMember",
    "usvStringMember",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8InternalDictionary::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, InternalDictionary* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> any_member_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&any_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (any_member_value.IsEmpty() || any_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue any_member_cpp_value = ScriptValue(ScriptState::Current(isolate), any_member_value);
    impl->setAnyMember(any_member_cpp_value);
  }

  v8::Local<v8::Value> boolean_member_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&boolean_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (boolean_member_value.IsEmpty() || boolean_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool boolean_member_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, boolean_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBooleanMember(boolean_member_cpp_value);
  }

  v8::Local<v8::Value> byte_string_member_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&byte_string_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (byte_string_member_value.IsEmpty() || byte_string_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> byte_string_member_cpp_value = NativeValueTraits<IDLByteString>::NativeValue(isolate, byte_string_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setByteStringMember(byte_string_member_cpp_value);
  }

  v8::Local<v8::Value> callback_function_member_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&callback_function_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (callback_function_member_value.IsEmpty() || callback_function_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    if (!callback_function_member_value->IsFunction()) {
      exception_state.ThrowTypeError("member callbackFunctionMember is not a function.");
      return;
    }
    V8TestCallback* callback_function_member_cpp_value = V8TestCallback::Create(callback_function_member_value.As<v8::Function>());
    impl->setCallbackFunctionMember(callback_function_member_cpp_value);
  }

  v8::Local<v8::Value> deprecate_long_member_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&deprecate_long_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (deprecate_long_member_value.IsEmpty() || deprecate_long_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    Deprecation::CountDeprecation(CurrentExecutionContext(isolate), WebFeature::kPrefixedStorageInfo);
    int32_t deprecate_long_member_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, deprecate_long_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongMember(deprecate_long_member_cpp_value);
  }

  v8::Local<v8::Value> dictionary_member_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&dictionary_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dictionary_member_value.IsEmpty() || dictionary_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    Dictionary dictionary_member_cpp_value = NativeValueTraits<Dictionary>::NativeValue(isolate, dictionary_member_value, exception_state);
    if (exception_state.HadException())
      return;
    if (!dictionary_member_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member dictionaryMember is not an object.");
      return;
    }
    impl->setDictionaryMember(dictionary_member_cpp_value);
  }

  v8::Local<v8::Value> double_member_value;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&double_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (double_member_value.IsEmpty() || double_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    double double_member_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, double_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDoubleMember(double_member_cpp_value);
  }

  v8::Local<v8::Value> double_or_string_member_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&double_or_string_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (double_or_string_member_value.IsEmpty() || double_or_string_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrString double_or_string_member_cpp_value;
    V8DoubleOrString::ToImpl(isolate, double_or_string_member_value, double_or_string_member_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDoubleOrStringMember(double_or_string_member_cpp_value);
  }

  v8::Local<v8::Value> double_or_string_sequence_member_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&double_or_string_sequence_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (double_or_string_sequence_member_value.IsEmpty() || double_or_string_sequence_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<DoubleOrString> double_or_string_sequence_member_cpp_value = NativeValueTraits<IDLSequence<DoubleOrString>>::NativeValue(isolate, double_or_string_sequence_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDoubleOrStringSequenceMember(double_or_string_sequence_member_cpp_value);
  }

  v8::Local<v8::Value> element_member_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&element_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (element_member_value.IsEmpty() || element_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    Element* element_member_cpp_value = V8Element::ToImplWithTypeCheck(isolate, element_member_value);
    if (!element_member_cpp_value) {
      exception_state.ThrowTypeError("member elementMember is not of type Element.");
      return;
    }
    impl->setElementMember(element_member_cpp_value);
  }

  v8::Local<v8::Value> element_or_null_member_value;
  if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&element_or_null_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (element_or_null_member_value.IsEmpty() || element_or_null_member_value->IsUndefined()) {
    // Do nothing.
  } else if (element_or_null_member_value->IsNull()) {
    impl->setElementOrNullMemberToNull();
  } else {
    Element* element_or_null_member_cpp_value = V8Element::ToImplWithTypeCheck(isolate, element_or_null_member_value);
    if (!element_or_null_member_cpp_value) {
      exception_state.ThrowTypeError("member elementOrNullMember is not of type Element.");
      return;
    }
    impl->setElementOrNullMember(element_or_null_member_cpp_value);
  }

  v8::Local<v8::Value> enum_member_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&enum_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (enum_member_value.IsEmpty() || enum_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> enum_member_cpp_value = enum_member_value;
    if (!enum_member_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enum_member_cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl->setEnumMember(enum_member_cpp_value);
  }

  v8::Local<v8::Value> enum_member_with_default_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&enum_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (enum_member_with_default_value.IsEmpty() || enum_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> enum_member_with_default_cpp_value = enum_member_with_default_value;
    if (!enum_member_with_default_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enum_member_with_default_cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl->setEnumMemberWithDefault(enum_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> enum_or_null_member_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&enum_or_null_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (enum_or_null_member_value.IsEmpty() || enum_or_null_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<kTreatNullAndUndefinedAsNullString> enum_or_null_member_cpp_value = enum_or_null_member_value;
    if (!enum_or_null_member_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        nullptr,
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(enum_or_null_member_cpp_value, kValidValues, base::size(kValidValues), "InternalEnum", exception_state))
      return;
    impl->setEnumOrNullMember(enum_or_null_member_cpp_value);
  }

  v8::Local<v8::Value> event_target_or_null_member_value;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&event_target_or_null_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (event_target_or_null_member_value.IsEmpty() || event_target_or_null_member_value->IsUndefined()) {
    // Do nothing.
  } else if (event_target_or_null_member_value->IsNull()) {
    impl->setEventTargetOrNullMemberToNull();
  } else {
    EventTarget* event_target_or_null_member_cpp_value = V8EventTarget::ToImplWithTypeCheck(isolate, event_target_or_null_member_value);
    if (!event_target_or_null_member_cpp_value) {
      exception_state.ThrowTypeError("member eventTargetOrNullMember is not of type EventTarget.");
      return;
    }
    impl->setEventTargetOrNullMember(event_target_or_null_member_cpp_value);
  }

  v8::Local<v8::Value> internal_enum_or_internal_enum_sequence_member_value;
  if (!v8Object->Get(context, keys[15].Get(isolate)).ToLocal(&internal_enum_or_internal_enum_sequence_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (internal_enum_or_internal_enum_sequence_member_value.IsEmpty() || internal_enum_or_internal_enum_sequence_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    InternalEnumOrInternalEnumSequence internal_enum_or_internal_enum_sequence_member_cpp_value;
    V8InternalEnumOrInternalEnumSequence::ToImpl(isolate, internal_enum_or_internal_enum_sequence_member_value, internal_enum_or_internal_enum_sequence_member_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setInternalEnumOrInternalEnumSequenceMember(internal_enum_or_internal_enum_sequence_member_cpp_value);
  }

  v8::Local<v8::Value> long_member_value;
  if (!v8Object->Get(context, keys[16].Get(isolate)).ToLocal(&long_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_member_value.IsEmpty() || long_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t long_member_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, long_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongMember(long_member_cpp_value);
  }

  v8::Local<v8::Value> long_member_with_clamp_value;
  if (!v8Object->Get(context, keys[17].Get(isolate)).ToLocal(&long_member_with_clamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_member_with_clamp_value.IsEmpty() || long_member_with_clamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t long_member_with_clamp_cpp_value = NativeValueTraits<IDLLongClamp>::NativeValue(isolate, long_member_with_clamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongMemberWithClamp(long_member_with_clamp_cpp_value);
  }

  v8::Local<v8::Value> long_member_with_default_value;
  if (!v8Object->Get(context, keys[18].Get(isolate)).ToLocal(&long_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_member_with_default_value.IsEmpty() || long_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t long_member_with_default_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, long_member_with_default_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongMemberWithDefault(long_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> long_member_with_enforce_range_value;
  if (!v8Object->Get(context, keys[19].Get(isolate)).ToLocal(&long_member_with_enforce_range_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_member_with_enforce_range_value.IsEmpty() || long_member_with_enforce_range_value->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t long_member_with_enforce_range_cpp_value = NativeValueTraits<IDLLongEnforceRange>::NativeValue(isolate, long_member_with_enforce_range_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongMemberWithEnforceRange(long_member_with_enforce_range_cpp_value);
  }

  v8::Local<v8::Value> long_or_null_member_value;
  if (!v8Object->Get(context, keys[20].Get(isolate)).ToLocal(&long_or_null_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_or_null_member_value.IsEmpty() || long_or_null_member_value->IsUndefined()) {
    // Do nothing.
  } else if (long_or_null_member_value->IsNull()) {
    impl->setLongOrNullMemberToNull();
  } else {
    int32_t long_or_null_member_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, long_or_null_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongOrNullMember(long_or_null_member_cpp_value);
  }

  v8::Local<v8::Value> long_or_null_member_with_default_value;
  if (!v8Object->Get(context, keys[21].Get(isolate)).ToLocal(&long_or_null_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (long_or_null_member_with_default_value.IsEmpty() || long_or_null_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else if (long_or_null_member_with_default_value->IsNull()) {
    impl->setLongOrNullMemberWithDefaultToNull();
  } else {
    int32_t long_or_null_member_with_default_cpp_value = NativeValueTraits<IDLLong>::NativeValue(isolate, long_or_null_member_with_default_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setLongOrNullMemberWithDefault(long_or_null_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> object_member_value;
  if (!v8Object->Get(context, keys[22].Get(isolate)).ToLocal(&object_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (object_member_value.IsEmpty() || object_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue object_member_cpp_value = ScriptValue(ScriptState::Current(isolate), object_member_value);
    if (!object_member_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member objectMember is not an object.");
      return;
    }
    impl->setObjectMember(object_member_cpp_value);
  }

  v8::Local<v8::Value> object_or_null_member_with_default_value;
  if (!v8Object->Get(context, keys[23].Get(isolate)).ToLocal(&object_or_null_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (object_or_null_member_with_default_value.IsEmpty() || object_or_null_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else if (object_or_null_member_with_default_value->IsNull()) {
    impl->setObjectOrNullMemberWithDefaultToNull();
  } else {
    ScriptValue object_or_null_member_with_default_cpp_value = ScriptValue(ScriptState::Current(isolate), object_or_null_member_with_default_value);
    if (!object_or_null_member_with_default_cpp_value.IsObject()) {
      exception_state.ThrowTypeError("member objectOrNullMemberWithDefault is not an object.");
      return;
    }
    impl->setObjectOrNullMemberWithDefault(object_or_null_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> string_member_value;
  if (!v8Object->Get(context, keys[24].Get(isolate)).ToLocal(&string_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (string_member_value.IsEmpty() || string_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> string_member_cpp_value = string_member_value;
    if (!string_member_cpp_value.Prepare(exception_state))
      return;
    impl->setStringMember(string_member_cpp_value);
  }

  v8::Local<v8::Value> string_member_with_default_value;
  if (!v8Object->Get(context, keys[25].Get(isolate)).ToLocal(&string_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (string_member_with_default_value.IsEmpty() || string_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> string_member_with_default_cpp_value = string_member_with_default_value;
    if (!string_member_with_default_cpp_value.Prepare(exception_state))
      return;
    impl->setStringMemberWithDefault(string_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> string_sequence_member_value;
  if (!v8Object->Get(context, keys[26].Get(isolate)).ToLocal(&string_sequence_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (string_sequence_member_value.IsEmpty() || string_sequence_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> string_sequence_member_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, string_sequence_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStringSequenceMember(string_sequence_member_cpp_value);
  }

  v8::Local<v8::Value> string_sequence_member_with_default_value;
  if (!v8Object->Get(context, keys[27].Get(isolate)).ToLocal(&string_sequence_member_with_default_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (string_sequence_member_with_default_value.IsEmpty() || string_sequence_member_with_default_value->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<String> string_sequence_member_with_default_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, string_sequence_member_with_default_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStringSequenceMemberWithDefault(string_sequence_member_with_default_cpp_value);
  }

  v8::Local<v8::Value> string_sequence_or_null_member_value;
  if (!v8Object->Get(context, keys[28].Get(isolate)).ToLocal(&string_sequence_or_null_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (string_sequence_or_null_member_value.IsEmpty() || string_sequence_or_null_member_value->IsUndefined()) {
    // Do nothing.
  } else if (string_sequence_or_null_member_value->IsNull()) {
    impl->setStringSequenceOrNullMemberToNull();
  } else {
    Vector<String> string_sequence_or_null_member_cpp_value = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, string_sequence_or_null_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setStringSequenceOrNullMember(string_sequence_or_null_member_cpp_value);
  }

  v8::Local<v8::Value> unrestricted_double_member_value;
  if (!v8Object->Get(context, keys[29].Get(isolate)).ToLocal(&unrestricted_double_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (unrestricted_double_member_value.IsEmpty() || unrestricted_double_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    double unrestricted_double_member_cpp_value = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(isolate, unrestricted_double_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUnrestrictedDoubleMember(unrestricted_double_member_cpp_value);
  }

  v8::Local<v8::Value> usv_string_member_value;
  if (!v8Object->Get(context, keys[30].Get(isolate)).ToLocal(&usv_string_member_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (usv_string_member_value.IsEmpty() || usv_string_member_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> usv_string_member_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, usv_string_member_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setUsvStringMember(usv_string_member_cpp_value);
  }
}

v8::Local<v8::Value> InternalDictionary::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8InternalDictionary(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8InternalDictionary(const InternalDictionary* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8InternalDictionaryKeys(isolate);
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

  v8::Local<v8::Value> any_member_value;
  bool any_member_has_value_or_default = false;
  if (impl->hasAnyMember()) {
    any_member_value = impl->anyMember().V8Value();
    any_member_has_value_or_default = true;
  }
  if (any_member_has_value_or_default &&
      !create_property(0, any_member_value)) {
    return false;
  }

  v8::Local<v8::Value> boolean_member_value;
  bool boolean_member_has_value_or_default = false;
  if (impl->hasBooleanMember()) {
    boolean_member_value = v8::Boolean::New(isolate, impl->booleanMember());
    boolean_member_has_value_or_default = true;
  }
  if (boolean_member_has_value_or_default &&
      !create_property(1, boolean_member_value)) {
    return false;
  }

  v8::Local<v8::Value> byte_string_member_value;
  bool byte_string_member_has_value_or_default = false;
  if (impl->hasByteStringMember()) {
    byte_string_member_value = V8String(isolate, impl->byteStringMember());
    byte_string_member_has_value_or_default = true;
  }
  if (byte_string_member_has_value_or_default &&
      !create_property(2, byte_string_member_value)) {
    return false;
  }

  v8::Local<v8::Value> callback_function_member_value;
  bool callback_function_member_has_value_or_default = false;
  if (impl->hasCallbackFunctionMember()) {
    callback_function_member_value = ToV8(impl->callbackFunctionMember(), creationContext, isolate);
    callback_function_member_has_value_or_default = true;
  }
  if (callback_function_member_has_value_or_default &&
      !create_property(3, callback_function_member_value)) {
    return false;
  }

  v8::Local<v8::Value> deprecate_long_member_value;
  bool deprecate_long_member_has_value_or_default = false;
  if (impl->hasLongMember()) {
    deprecate_long_member_value = v8::Integer::New(isolate, impl->longMember());
    deprecate_long_member_has_value_or_default = true;
  }
  if (deprecate_long_member_has_value_or_default &&
      !create_property(4, deprecate_long_member_value)) {
    return false;
  }

  v8::Local<v8::Value> dictionary_member_value;
  bool dictionary_member_has_value_or_default = false;
  if (impl->hasDictionaryMember()) {
    DCHECK(impl->dictionaryMember().IsObject());
    dictionary_member_value = impl->dictionaryMember().V8Value();
    dictionary_member_has_value_or_default = true;
  }
  if (dictionary_member_has_value_or_default &&
      !create_property(5, dictionary_member_value)) {
    return false;
  }

  v8::Local<v8::Value> double_member_value;
  bool double_member_has_value_or_default = false;
  if (impl->hasDoubleMember()) {
    double_member_value = v8::Number::New(isolate, impl->doubleMember());
    double_member_has_value_or_default = true;
  }
  if (double_member_has_value_or_default &&
      !create_property(6, double_member_value)) {
    return false;
  }

  v8::Local<v8::Value> double_or_string_member_value;
  bool double_or_string_member_has_value_or_default = false;
  if (impl->hasDoubleOrStringMember()) {
    double_or_string_member_value = ToV8(impl->doubleOrStringMember(), creationContext, isolate);
    double_or_string_member_has_value_or_default = true;
  }
  if (double_or_string_member_has_value_or_default &&
      !create_property(7, double_or_string_member_value)) {
    return false;
  }

  v8::Local<v8::Value> double_or_string_sequence_member_value;
  bool double_or_string_sequence_member_has_value_or_default = false;
  if (impl->hasDoubleOrStringSequenceMember()) {
    double_or_string_sequence_member_value = ToV8(impl->doubleOrStringSequenceMember(), creationContext, isolate);
    double_or_string_sequence_member_has_value_or_default = true;
  }
  if (double_or_string_sequence_member_has_value_or_default &&
      !create_property(8, double_or_string_sequence_member_value)) {
    return false;
  }

  v8::Local<v8::Value> element_member_value;
  bool element_member_has_value_or_default = false;
  if (impl->hasElementMember()) {
    element_member_value = ToV8(impl->elementMember(), creationContext, isolate);
    element_member_has_value_or_default = true;
  }
  if (element_member_has_value_or_default &&
      !create_property(9, element_member_value)) {
    return false;
  }

  v8::Local<v8::Value> element_or_null_member_value;
  bool element_or_null_member_has_value_or_default = false;
  if (impl->hasElementOrNullMember()) {
    element_or_null_member_value = ToV8(impl->elementOrNullMember(), creationContext, isolate);
    element_or_null_member_has_value_or_default = true;
  }
  if (element_or_null_member_has_value_or_default &&
      !create_property(10, element_or_null_member_value)) {
    return false;
  }

  v8::Local<v8::Value> enum_member_value;
  bool enum_member_has_value_or_default = false;
  if (impl->hasEnumMember()) {
    enum_member_value = V8String(isolate, impl->enumMember());
    enum_member_has_value_or_default = true;
  }
  if (enum_member_has_value_or_default &&
      !create_property(11, enum_member_value)) {
    return false;
  }

  v8::Local<v8::Value> enum_member_with_default_value;
  bool enum_member_with_default_has_value_or_default = false;
  if (impl->hasEnumMemberWithDefault()) {
    enum_member_with_default_value = V8String(isolate, impl->enumMemberWithDefault());
    enum_member_with_default_has_value_or_default = true;
  } else {
    enum_member_with_default_value = V8String(isolate, "foo");
    enum_member_with_default_has_value_or_default = true;
  }
  if (enum_member_with_default_has_value_or_default &&
      !create_property(12, enum_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> enum_or_null_member_value;
  bool enum_or_null_member_has_value_or_default = false;
  if (impl->hasEnumOrNullMember()) {
    enum_or_null_member_value = V8String(isolate, impl->enumOrNullMember());
    enum_or_null_member_has_value_or_default = true;
  } else {
    enum_or_null_member_value = v8::Null(isolate);
    enum_or_null_member_has_value_or_default = true;
  }
  if (enum_or_null_member_has_value_or_default &&
      !create_property(13, enum_or_null_member_value)) {
    return false;
  }

  v8::Local<v8::Value> event_target_or_null_member_value;
  bool event_target_or_null_member_has_value_or_default = false;
  if (impl->hasEventTargetOrNullMember()) {
    event_target_or_null_member_value = ToV8(impl->eventTargetOrNullMember(), creationContext, isolate);
    event_target_or_null_member_has_value_or_default = true;
  } else {
    event_target_or_null_member_value = v8::Null(isolate);
    event_target_or_null_member_has_value_or_default = true;
  }
  if (event_target_or_null_member_has_value_or_default &&
      !create_property(14, event_target_or_null_member_value)) {
    return false;
  }

  v8::Local<v8::Value> internal_enum_or_internal_enum_sequence_member_value;
  bool internal_enum_or_internal_enum_sequence_member_has_value_or_default = false;
  if (impl->hasInternalEnumOrInternalEnumSequenceMember()) {
    internal_enum_or_internal_enum_sequence_member_value = ToV8(impl->internalEnumOrInternalEnumSequenceMember(), creationContext, isolate);
    internal_enum_or_internal_enum_sequence_member_has_value_or_default = true;
  }
  if (internal_enum_or_internal_enum_sequence_member_has_value_or_default &&
      !create_property(15, internal_enum_or_internal_enum_sequence_member_value)) {
    return false;
  }

  v8::Local<v8::Value> long_member_value;
  bool long_member_has_value_or_default = false;
  if (impl->hasLongMember()) {
    long_member_value = v8::Integer::New(isolate, impl->longMember());
    long_member_has_value_or_default = true;
  }
  if (long_member_has_value_or_default &&
      !create_property(16, long_member_value)) {
    return false;
  }

  v8::Local<v8::Value> long_member_with_clamp_value;
  bool long_member_with_clamp_has_value_or_default = false;
  if (impl->hasLongMemberWithClamp()) {
    long_member_with_clamp_value = v8::Integer::New(isolate, impl->longMemberWithClamp());
    long_member_with_clamp_has_value_or_default = true;
  }
  if (long_member_with_clamp_has_value_or_default &&
      !create_property(17, long_member_with_clamp_value)) {
    return false;
  }

  v8::Local<v8::Value> long_member_with_default_value;
  bool long_member_with_default_has_value_or_default = false;
  if (impl->hasLongMemberWithDefault()) {
    long_member_with_default_value = v8::Integer::New(isolate, impl->longMemberWithDefault());
    long_member_with_default_has_value_or_default = true;
  } else {
    long_member_with_default_value = v8::Integer::New(isolate, 42);
    long_member_with_default_has_value_or_default = true;
  }
  if (long_member_with_default_has_value_or_default &&
      !create_property(18, long_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> long_member_with_enforce_range_value;
  bool long_member_with_enforce_range_has_value_or_default = false;
  if (impl->hasLongMemberWithEnforceRange()) {
    long_member_with_enforce_range_value = v8::Integer::New(isolate, impl->longMemberWithEnforceRange());
    long_member_with_enforce_range_has_value_or_default = true;
  }
  if (long_member_with_enforce_range_has_value_or_default &&
      !create_property(19, long_member_with_enforce_range_value)) {
    return false;
  }

  v8::Local<v8::Value> long_or_null_member_value;
  bool long_or_null_member_has_value_or_default = false;
  if (impl->hasLongOrNullMember()) {
    long_or_null_member_value = v8::Integer::New(isolate, impl->longOrNullMember());
    long_or_null_member_has_value_or_default = true;
  } else {
    long_or_null_member_value = v8::Null(isolate);
    long_or_null_member_has_value_or_default = true;
  }
  if (long_or_null_member_has_value_or_default &&
      !create_property(20, long_or_null_member_value)) {
    return false;
  }

  v8::Local<v8::Value> long_or_null_member_with_default_value;
  bool long_or_null_member_with_default_has_value_or_default = false;
  if (impl->hasLongOrNullMemberWithDefault()) {
    long_or_null_member_with_default_value = v8::Integer::New(isolate, impl->longOrNullMemberWithDefault());
    long_or_null_member_with_default_has_value_or_default = true;
  } else {
    long_or_null_member_with_default_value = v8::Null(isolate);
    long_or_null_member_with_default_has_value_or_default = true;
  }
  if (long_or_null_member_with_default_has_value_or_default &&
      !create_property(21, long_or_null_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> object_member_value;
  bool object_member_has_value_or_default = false;
  if (impl->hasObjectMember()) {
    DCHECK(impl->objectMember().IsObject());
    object_member_value = impl->objectMember().V8Value();
    object_member_has_value_or_default = true;
  }
  if (object_member_has_value_or_default &&
      !create_property(22, object_member_value)) {
    return false;
  }

  v8::Local<v8::Value> object_or_null_member_with_default_value;
  bool object_or_null_member_with_default_has_value_or_default = false;
  if (impl->hasObjectOrNullMemberWithDefault()) {
    DCHECK(impl->objectOrNullMemberWithDefault().IsObject());
    object_or_null_member_with_default_value = impl->objectOrNullMemberWithDefault().V8Value();
    object_or_null_member_with_default_has_value_or_default = true;
  } else {
    object_or_null_member_with_default_value = v8::Null(isolate);
    object_or_null_member_with_default_has_value_or_default = true;
  }
  if (object_or_null_member_with_default_has_value_or_default &&
      !create_property(23, object_or_null_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> string_member_value;
  bool string_member_has_value_or_default = false;
  if (impl->hasStringMember()) {
    string_member_value = V8String(isolate, impl->stringMember());
    string_member_has_value_or_default = true;
  }
  if (string_member_has_value_or_default &&
      !create_property(24, string_member_value)) {
    return false;
  }

  v8::Local<v8::Value> string_member_with_default_value;
  bool string_member_with_default_has_value_or_default = false;
  if (impl->hasStringMemberWithDefault()) {
    string_member_with_default_value = V8String(isolate, impl->stringMemberWithDefault());
    string_member_with_default_has_value_or_default = true;
  } else {
    string_member_with_default_value = V8String(isolate, "defaultStringValue");
    string_member_with_default_has_value_or_default = true;
  }
  if (string_member_with_default_has_value_or_default &&
      !create_property(25, string_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> string_sequence_member_value;
  bool string_sequence_member_has_value_or_default = false;
  if (impl->hasStringSequenceMember()) {
    string_sequence_member_value = ToV8(impl->stringSequenceMember(), creationContext, isolate);
    string_sequence_member_has_value_or_default = true;
  }
  if (string_sequence_member_has_value_or_default &&
      !create_property(26, string_sequence_member_value)) {
    return false;
  }

  v8::Local<v8::Value> string_sequence_member_with_default_value;
  bool string_sequence_member_with_default_has_value_or_default = false;
  if (impl->hasStringSequenceMemberWithDefault()) {
    string_sequence_member_with_default_value = ToV8(impl->stringSequenceMemberWithDefault(), creationContext, isolate);
    string_sequence_member_with_default_has_value_or_default = true;
  } else {
    string_sequence_member_with_default_value = ToV8(Vector<String>(), creationContext, isolate);
    string_sequence_member_with_default_has_value_or_default = true;
  }
  if (string_sequence_member_with_default_has_value_or_default &&
      !create_property(27, string_sequence_member_with_default_value)) {
    return false;
  }

  v8::Local<v8::Value> string_sequence_or_null_member_value;
  bool string_sequence_or_null_member_has_value_or_default = false;
  if (impl->hasStringSequenceOrNullMember()) {
    string_sequence_or_null_member_value = ToV8(impl->stringSequenceOrNullMember(), creationContext, isolate);
    string_sequence_or_null_member_has_value_or_default = true;
  } else {
    string_sequence_or_null_member_value = v8::Null(isolate);
    string_sequence_or_null_member_has_value_or_default = true;
  }
  if (string_sequence_or_null_member_has_value_or_default &&
      !create_property(28, string_sequence_or_null_member_value)) {
    return false;
  }

  v8::Local<v8::Value> unrestricted_double_member_value;
  bool unrestricted_double_member_has_value_or_default = false;
  if (impl->hasUnrestrictedDoubleMember()) {
    unrestricted_double_member_value = v8::Number::New(isolate, impl->unrestrictedDoubleMember());
    unrestricted_double_member_has_value_or_default = true;
  }
  if (unrestricted_double_member_has_value_or_default &&
      !create_property(29, unrestricted_double_member_value)) {
    return false;
  }

  v8::Local<v8::Value> usv_string_member_value;
  bool usv_string_member_has_value_or_default = false;
  if (impl->hasUsvStringMember()) {
    usv_string_member_value = V8String(isolate, impl->usvStringMember());
    usv_string_member_has_value_or_default = true;
  }
  if (usv_string_member_has_value_or_default &&
      !create_property(30, usv_string_member_value)) {
    return false;
  }

  return true;
}

InternalDictionary* NativeValueTraits<InternalDictionary>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  InternalDictionary* impl = InternalDictionary::Create();
  V8InternalDictionary::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
