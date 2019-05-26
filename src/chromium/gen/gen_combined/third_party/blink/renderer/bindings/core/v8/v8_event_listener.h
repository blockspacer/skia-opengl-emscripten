// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/callback_interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_EVENT_LISTENER_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_EVENT_LISTENER_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/callback_interface_base.h"
#include "third_party/blink/renderer/platform/bindings/v8_value_or_script_wrappable_adapter.h"

namespace blink {

class Event;

class CORE_EXPORT V8EventListener final : public CallbackInterfaceBase {
 public:
  static V8EventListener* Create(v8::Local<v8::Object> callback_object) {
    return MakeGarbageCollected<V8EventListener>(callback_object);
  }

  explicit V8EventListener(v8::Local<v8::Object> callback_object)
      : CallbackInterfaceBase(callback_object,
                              kSingleOperation) {}
  ~V8EventListener() override = default;

  // NameClient overrides:
  const char* NameInHeapSnapshot() const override;

  // Performs "call a user object's operation".
  // https://heycam.github.io/webidl/#call-a-user-objects-operation
  v8::Maybe<void> handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, Event* event) WARN_UNUSED_RESULT;

  // Performs "call a user object's operation", and then reports an exception,
  // if any, to the global error handler such as DevTools' console.
  void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, Event* event);

  // Returns true if the callback is runnable, otherwise returns false and
  // throws an exception. 'beforeunload' event need to have priority over pause
  // of execution contexts.
  enum class IgnorePause { kDontIgnore, kIgnore };
  bool IsRunnableOrThrowException(IgnorePause);

  // Performs "call a user object's operation" for 'handleEvent' without
  // checking the runnability check, which must be done prior to this call by
  // |IsRunnableOrThrowException|.
  // https://heycam.github.io/webidl/#call-a-user-objects-operation
  // This function may throw unlike InvokeAndReportException.
  v8::Maybe<void> InvokeWithoutRunnabilityCheck(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, Event* event) WARN_UNUSED_RESULT;
};

template <>
class V8PersistentCallbackInterface<V8EventListener> final : public V8PersistentCallbackInterfaceBase {
  using V8CallbackInterface = V8EventListener;

 public:
  explicit V8PersistentCallbackInterface(V8CallbackInterface* callback_interface)
      : V8PersistentCallbackInterfaceBase(callback_interface) {}
  ~V8PersistentCallbackInterface() override = default;

  CORE_EXPORT v8::Maybe<void> handleEvent(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, Event* event) WARN_UNUSED_RESULT;
  CORE_EXPORT void InvokeAndReportException(bindings::V8ValueOrScriptWrappableAdapter callback_this_value, Event* event);

 private:
  V8CallbackInterface* Proxy() {
    return As<V8CallbackInterface>();
  }

  template <typename V8CallbackInterface>
  friend V8PersistentCallbackInterface<V8CallbackInterface>*
  ToV8PersistentCallbackInterface(V8CallbackInterface*);
};

// V8EventListener is designed to be used with wrapper-tracing.
// As blink::Persistent does not perform wrapper-tracing, use of
// |WrapPersistent| for callback interfaces is likely (if not always) misuse.
// Thus, this code prohibits such a use case. The call sites should explicitly
// use WrapPersistent(V8PersistentCallbackInterface<T>*).
Persistent<V8EventListener> WrapPersistent(V8EventListener*) = delete;

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_V8_EVENT_LISTENER_H_
