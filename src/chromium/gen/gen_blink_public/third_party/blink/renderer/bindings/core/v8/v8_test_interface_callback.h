// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_function.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEST_INTERFACE_CALLBACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEST_INTERFACE_CALLBACK_H_

#include "third_party/blink/renderer/platform/bindings/callback_function_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

class HTMLDivElement;

class V8TestInterfaceCallback final : public CallbackFunctionBase {
 public:
  static V8TestInterfaceCallback* Create(v8::Local<v8::Function> callback_function) {
    return MakeGarbageCollected<V8TestInterfaceCallback>(callback_function);
  }

  explicit V8TestInterfaceCallback(v8::Local<v8::Function> callback_function)
      : CallbackFunctionBase(callback_function) {}
  ~V8TestInterfaceCallback() override = default;

  // NameClient overrides:
  const char* NameInHeapSnapshot() const override;

  // Performs "invoke".
  // https://heycam.github.io/webidl/#es-invoking-callback-functions
  v8::Maybe<void> Invoke(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, HTMLDivElement* divElement) WARN_UNUSED_RESULT;

  // Performs "invoke", and then reports an exception, if any, to the global
  // error handler such as DevTools' console.
  void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, HTMLDivElement* divElement);
};

template <>
class V8PersistentCallbackFunction<V8TestInterfaceCallback> final : public V8PersistentCallbackFunctionBase {
  using V8CallbackFunction = V8TestInterfaceCallback;

 public:
  explicit V8PersistentCallbackFunction(V8CallbackFunction* callback_function)
      : V8PersistentCallbackFunctionBase(callback_function) {}
  ~V8PersistentCallbackFunction() override = default;

  // Returns a wrapper-tracing version of this callback function.
  V8CallbackFunction* ToNonV8Persistent() { return Proxy(); }

  v8::Maybe<void> Invoke(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, HTMLDivElement* divElement) WARN_UNUSED_RESULT;
  void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, HTMLDivElement* divElement);

 private:
  V8CallbackFunction* Proxy() {
    return As<V8CallbackFunction>();
  }

  template <typename V8CallbackFunction>
  friend V8PersistentCallbackFunction<V8CallbackFunction>*
  ToV8PersistentCallbackFunction(V8CallbackFunction*);
};

// V8TestInterfaceCallback is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback functions is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackFunction<T>*).
Persistent<V8TestInterfaceCallback> WrapPersistent(V8TestInterfaceCallback*) = delete;

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_TEST_INTERFACE_CALLBACK_H_
