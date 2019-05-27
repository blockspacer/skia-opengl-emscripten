// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_function.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/tests/results/core/v8_treat_non_object_as_null_boolean_function.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

const char* V8TreatNonObjectAsNullBooleanFunction::NameInHeapSnapshot() const {
  return "V8TreatNonObjectAsNullBooleanFunction";
}

v8::Maybe<bool> V8TreatNonObjectAsNullBooleanFunction::Invoke(bindings::V8ValueOrScriptWrappableAdapter callback_this_value) {
  ScriptState* callback_relevant_script_state =
      CallbackRelevantScriptStateOrThrowException(
          "TreatNonObjectAsNullBooleanFunction",
          "invoke");
  if (!callback_relevant_script_state) {
    return v8::Nothing<bool>();
  }

  if (!IsCallbackFunctionRunnable(callback_relevant_script_state,
                                  IncumbentScriptState())) {
    // Wrapper-tracing for the callback function makes the function object and
    // its creation context alive. Thus it's safe to use the creation context
    // of the callback function here.
    v8::HandleScope handle_scope(GetIsolate());
    v8::Local<v8::Object> callback_object = CallbackObject();
    CHECK(!callback_object.IsEmpty());
    v8::Context::Scope context_scope(callback_object->CreationContext());
    V8ThrowException::ThrowError(
        GetIsolate(),
        ExceptionMessages::FailedToExecute(
            "invoke",
            "TreatNonObjectAsNullBooleanFunction",
            "The provided callback is no longer runnable."));
    return v8::Nothing<bool>();
  }

  // step: Prepare to run script with relevant settings.
  ScriptState::Scope callback_relevant_context_scope(
      callback_relevant_script_state);
  // step: Prepare to run a callback with stored settings.
  v8::Context::BackupIncumbentScope backup_incumbent_scope(
      IncumbentScriptState()->GetContext());

  v8::Local<v8::Function> function;
  // callback function's invoke:
  // step 4. If ! IsCallable(F) is false:
  if (!CallbackObject()->IsFunction()) {
    // Handle the special case of [TreatNonObjectAsNull].
    //
    // step 4.2. Return the result of converting undefined to the callback
    //   function's return type.
    ExceptionState exception_state(GetIsolate(),
                                   ExceptionState::kExecutionContext,
                                   "TreatNonObjectAsNullBooleanFunction",
                                   "invoke");
    auto native_result =
        NativeValueTraits<IDLBoolean>::NativeValue(
            GetIsolate(), v8::Undefined(GetIsolate()), exception_state);
    if (exception_state.HadException())
      return v8::Nothing<bool>();
    else
      return v8::Just<bool>(native_result);
  }
  function = CallbackFunction();

  v8::Local<v8::Value> this_arg;
  if (callback_this_value.IsEmpty()) {
    // step 2. If thisArg was not given, let thisArg be undefined.
    this_arg = v8::Undefined(GetIsolate());
  } else {
    this_arg = callback_this_value.V8Value(callback_relevant_script_state);
  }

  // step: Let esArgs be the result of converting args to an ECMAScript
  //   arguments list. If this throws an exception, set completion to the
  //   completion value representing the thrown exception and jump to the step
  //   labeled return.
  const int argc = 0;
  v8::Local<v8::Value> *argv = nullptr;

  v8::Local<v8::Value> call_result;
  // step: Let callResult be Call(X, thisArg, esArgs).
  if (!V8ScriptRunner::CallFunction(
          function,
          ExecutionContext::From(callback_relevant_script_state),
          this_arg,
          argc,
          argv,
          GetIsolate()).ToLocal(&call_result)) {
    // step: If callResult is an abrupt completion, set completion to callResult
    //   and jump to the step labeled return.
    return v8::Nothing<bool>();
  }

  // step: Set completion to the result of converting callResult.[[Value]] to
  //   an IDL value of the same type as the operation's return type.
  {
    ExceptionState exception_state(GetIsolate(),
                                   ExceptionState::kExecutionContext,
                                   "TreatNonObjectAsNullBooleanFunction",
                                   "invoke");
    auto native_result =
        NativeValueTraits<IDLBoolean>::NativeValue(
            GetIsolate(), call_result, exception_state);
    if (exception_state.HadException())
      return v8::Nothing<bool>();
    else
      return v8::Just<bool>(native_result);
  }
}

v8::Maybe<bool> V8PersistentCallbackFunction<V8TreatNonObjectAsNullBooleanFunction>::Invoke(bindings::V8ValueOrScriptWrappableAdapter callback_this_value) {
  return Proxy()->Invoke(
      callback_this_value);
}

}  // namespace blink
