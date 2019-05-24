// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_CALLBACK_H_

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"

namespace blink {

class SQLResultSet;
class SQLTransaction;

class MODULES_EXPORT V8SQLStatementCallback final : public CallbackInterfaceBase {
 public:
  static V8SQLStatementCallback* Create(v8::Local<v8::Object> callback_object) {
    return MakeGarbageCollected<V8SQLStatementCallback>(callback_object);
  }

  explicit V8SQLStatementCallback(v8::Local<v8::Object> callback_object)
      : CallbackInterfaceBase(callback_object,
                              kSingleOperation) {}
  ~V8SQLStatementCallback() override = default;

  // NameClient overrides:
  const char* NameInHeapSnapshot() const override;

  // Performs "call a user object's operation".
  // https://heycam.github.io/webidl/#call-a-user-objects-operation
  v8::Maybe<void> handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction, SQLResultSet* resultSet) WARN_UNUSED_RESULT;

  // Performs "call a user object's operation", and then reports an exception,
  // if any, to the global error handler such as DevTools' console.
  void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction, SQLResultSet* resultSet);
};

template <>
class V8PersistentCallbackInterface<V8SQLStatementCallback> final : public V8PersistentCallbackInterfaceBase {
  using V8CallbackInterface = V8SQLStatementCallback;

 public:
  explicit V8PersistentCallbackInterface(V8CallbackInterface* callback_interface)
      : V8PersistentCallbackInterfaceBase(callback_interface) {}
  ~V8PersistentCallbackInterface() override = default;

  MODULES_EXPORT v8::Maybe<void> handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction, SQLResultSet* resultSet) WARN_UNUSED_RESULT;
  MODULES_EXPORT void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, SQLTransaction* transaction, SQLResultSet* resultSet);

 private:
  V8CallbackInterface* Proxy() {
    return As<V8CallbackInterface>();
  }

  template <typename V8CallbackInterface>
  friend V8PersistentCallbackInterface<V8CallbackInterface>*
  ToV8PersistentCallbackInterface(V8CallbackInterface*);
};

// V8SQLStatementCallback is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback interfaces is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackInterface<T>*).
Persistent<V8SQLStatementCallback> WrapPersistent(V8SQLStatementCallback*) = delete;

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_SQL_STATEMENT_CALLBACK_H_
