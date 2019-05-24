// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off

#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction_callback.h"

#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_sql_transaction.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"

namespace blink {

const char* V8SQLTransactionCallback::NameInHeapSnapshot() const {
  return "V8SQLTransactionCallback";
}

v8::Maybe<void> V8SQLTransactionCallback::handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction) {
  ScriptState* callback_relevant_script_state =
      CallbackRelevantScriptStateOrThrowException(
          "SQLTransactionCallback",
          "handleEvent");
  if (!callback_relevant_script_state) {
    return v8::Nothing<void>();
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
            "handleEvent",
            "SQLTransactionCallback",
            "The provided callback is no longer runnable."));
    return v8::Nothing<void>();
  }

  // step: Prepare to run script with relevant settings.
  ScriptState::Scope callback_relevant_context_scope(
      callback_relevant_script_state);
  // step: Prepare to run a callback with stored settings.
  v8::Context::BackupIncumbentScope backup_incumbent_scope(
      IncumbentScriptState()->GetContext());

  v8::Local<v8::Function> function;
  if (IsCallbackObjectCallable()) {
    // step 9.1. If value's interface is a single operation callback interface
    //   and !IsCallable(O) is true, then set X to O.
    function = CallbackObject().As<v8::Function>();
  } else {
    // step 9.2.1. Let getResult be Get(O, opName).
    // step 9.2.2. If getResult is an abrupt completion, set completion to
    //   getResult and jump to the step labeled return.
    v8::Local<v8::Value> value;
    if (!CallbackObject()->Get(callback_relevant_script_state->GetContext(),
                               V8String(GetIsolate(), "handleEvent"))
        .ToLocal(&value)) {
      return v8::Nothing<void>();
    }
    // step 10. If !IsCallable(X) is false, then set completion to a new
    //   Completion{[[Type]]: throw, [[Value]]: a newly created TypeError
    //   object, [[Target]]: empty}, and jump to the step labeled return.
    if (!value->IsFunction()) {
      V8ThrowException::ThrowTypeError(
          GetIsolate(),
          ExceptionMessages::FailedToExecute(
              "handleEvent",
              "SQLTransactionCallback",
              "The provided callback is not callable."));
      return v8::Nothing<void>();
    }
    function = value.As<v8::Function>();
  }

  v8::Local<v8::Value> this_arg;
  if (!IsCallbackObjectCallable()) {
    // step 11. If value's interface is not a single operation callback
    //   interface, or if !IsCallable(O) is false, set thisArg to O (overriding
    //   the provided value).
    this_arg = CallbackObject();
  } else if (callback_this_value.IsEmpty()) {
    // step 2. If thisArg was not given, let thisArg be undefined.
    this_arg = v8::Undefined(GetIsolate());
  } else {
    this_arg = callback_this_value.V8Value(callback_relevant_script_state);
  }

  // step: Let esArgs be the result of converting args to an ECMAScript
  //   arguments list. If this throws an exception, set completion to the
  //   completion value representing the thrown exception and jump to the step
  //   labeled return.
  v8::Local<v8::Object> argument_creation_context =
      callback_relevant_script_state->GetContext()->Global();
  ALLOW_UNUSED_LOCAL(argument_creation_context);
  v8::Local<v8::Value> v8_transaction = ToV8(transaction, argument_creation_context, GetIsolate());
  constexpr int argc = 1;
  v8::Local<v8::Value> argv[] = { v8_transaction };
  static_assert(static_cast<size_t>(argc) == base::size(argv), "size mismatch");

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
    return v8::Nothing<void>();
  }

  // step: Set completion to the result of converting callResult.[[Value]] to
  //   an IDL value of the same type as the operation's return type.
  return v8::JustVoid();
}

void V8SQLTransactionCallback::InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction) {
  v8::TryCatch try_catch(GetIsolate());
  try_catch.SetVerbose(true);

  v8::Maybe<void> maybe_result =
      handleEvent(callback_this_value, transaction);
  // An exception if any is killed with the v8::TryCatch above.
  ALLOW_UNUSED_LOCAL(maybe_result);
}

v8::Maybe<void> V8PersistentCallbackInterface<V8SQLTransactionCallback>::handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction) {
  return Proxy()->handleEvent(
      callback_this_value, transaction);
}

void V8PersistentCallbackInterface<V8SQLTransactionCallback>::InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction) {
  Proxy()->InvokeAndReportException(
      callback_this_value, transaction);
}

}  // namespace blink
