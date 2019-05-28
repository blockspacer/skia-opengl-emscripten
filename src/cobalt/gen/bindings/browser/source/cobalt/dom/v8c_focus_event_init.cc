// Copyright 2019 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// clang-format off

// This file has been auto-generated by bindings/code_generator_cobalt.py. DO NOT MODIFY!
// Auto-generated from template: bindings/v8c/templates/dictionary-conversion.cc.template


#include "v8c_gen_type_conversion.h"

#include "cobalt/dom/focus_event_init.h"

#include "cobalt/script/exception_state.h"
#include "v8/include/v8.h"
#include "cobalt/dom/event_target.h"
#include "cobalt/dom/ui_event_init.h"
#include "cobalt/dom/v8c_event_target.h"

using cobalt::dom::FocusEventInit;
using cobalt::dom::EventTarget;
using cobalt::dom::UIEventInit;
using cobalt::dom::V8cEventTarget;

namespace cobalt {
namespace script {
namespace v8c {

void ToJSValue(
    v8::Isolate* isolate,
    const FocusEventInit& in_dictionary,
    v8::Local<v8::Value>* out_value) {
  // Create a new object that will hold the dictionary values.
  V8cGlobalEnvironment* global_environment = V8cGlobalEnvironment::GetFromIsolate(isolate);
  v8::Local<v8::Context> context = global_environment->context();
  v8::Local<v8::Object> dictionary_object = v8::Object::New(isolate);
  if (in_dictionary.has_related_target()) {
    v8::Local<v8::Value> member_value;
    ToJSValue(isolate, in_dictionary.related_target(), &member_value);
    v8::Maybe<bool> maybe_result = dictionary_object->DefineOwnProperty(
      context,
      v8::String::NewFromUtf8(
        isolate,
        "relatedTarget",
        v8::NewStringType::kInternalized
      ).ToLocalChecked(),
      member_value
    );
    DCHECK(maybe_result.FromJust());
  }
  *out_value = dictionary_object;
}

void FromJSValue(v8::Isolate* isolate, v8::Local<v8::Value> value,
                 int conversion_flags, ExceptionState* exception_state,
                 FocusEventInit* out_dictionary) {
  DCHECK_EQ(0, conversion_flags) << "Unexpected conversion flags.";
  V8cExceptionState* v8c_exception_state = base::polymorphic_downcast<V8cExceptionState*>(exception_state);
  DCHECK(!v8c_exception_state->is_exception_set());

  FromJSValue(isolate, value, conversion_flags, exception_state, static_cast<cobalt::dom::UIEventInit*>(out_dictionary));
  if (v8c_exception_state->is_exception_set()) {
    return;
  }

  // https://heycam.github.io/webidl/#es-dictionary
  if (value->IsNullOrUndefined()) {
    // The default constructor will assign appropriate values to dictionary
    // members with default values and leave the others unset.
    *out_dictionary = FocusEventInit();
    return;
  }

  if (!value->IsObject()) {
    // 1. If Type(V) is not Undefined, Null or Object, then throw a TypeError.
    exception_state->SetSimpleException(kNotObjectType);
    return;
  }

  V8cGlobalEnvironment* global_environment = V8cGlobalEnvironment::GetFromIsolate(isolate);
  v8::Local<v8::Context> context = global_environment->context();
  v8::MaybeLocal<v8::Object> maybe_dictionary_object = value->ToObject(context);
  v8::Local<v8::Object> dictionary_object;
  if (!maybe_dictionary_object.ToLocal(&dictionary_object)) {
    NOTREACHED();
    exception_state->SetSimpleException(kNotObjectType);
    return;
  }

  {
    v8::MaybeLocal<v8::Value> maybe_member_value = dictionary_object->Get(
        context,
        v8::String::NewFromUtf8(isolate, "relatedTarget", v8::NewStringType::kInternalized).ToLocalChecked());
    v8::Local<v8::Value> member_value;
    if (!maybe_member_value.ToLocal(&member_value)) {
      exception_state->SetSimpleException(kSimpleError);
      return;
    }

    if (!member_value->IsUndefined()) {
      scoped_refptr<EventTarget> converted_value;
      FromJSValue(isolate,
                  member_value,
                  (kConversionFlagNullable),
                  exception_state,
                  &converted_value);
      out_dictionary->set_related_target(converted_value);
    }
  }
}

}  // namespace v8c
}  // namespace script
}  // namespace cobalt

