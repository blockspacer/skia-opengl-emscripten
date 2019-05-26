// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CLIENT_OR_SERVICE_WORKER_OR_MESSAGE_PORT_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CLIENT_OR_SERVICE_WORKER_OR_MESSAGE_PORT_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MessagePort;
class ServiceWorker;
class ServiceWorkerClient;

class MODULES_EXPORT ClientOrServiceWorkerOrMessagePort final {
  DISALLOW_NEW();
 public:
  ClientOrServiceWorkerOrMessagePort();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsClient() const { return type_ == SpecificType::kClient; }
  ServiceWorkerClient* GetAsClient() const;
  void SetClient(ServiceWorkerClient*);
  static ClientOrServiceWorkerOrMessagePort FromClient(ServiceWorkerClient*);

  bool IsMessagePort() const { return type_ == SpecificType::kMessagePort; }
  MessagePort* GetAsMessagePort() const;
  void SetMessagePort(MessagePort*);
  static ClientOrServiceWorkerOrMessagePort FromMessagePort(MessagePort*);

  bool IsServiceWorker() const { return type_ == SpecificType::kServiceWorker; }
  ServiceWorker* GetAsServiceWorker() const;
  void SetServiceWorker(ServiceWorker*);
  static ClientOrServiceWorkerOrMessagePort FromServiceWorker(ServiceWorker*);

  ClientOrServiceWorkerOrMessagePort(const ClientOrServiceWorkerOrMessagePort&);
  ~ClientOrServiceWorkerOrMessagePort();
  ClientOrServiceWorkerOrMessagePort& operator=(const ClientOrServiceWorkerOrMessagePort&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kClient,
    kMessagePort,
    kServiceWorker,
  };
  SpecificType type_;

  Member<ServiceWorkerClient> client_;
  Member<MessagePort> message_port_;
  Member<ServiceWorker> service_worker_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const ClientOrServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8ClientOrServiceWorkerOrMessagePort final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, ClientOrServiceWorkerOrMessagePort&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const ClientOrServiceWorkerOrMessagePort&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, ClientOrServiceWorkerOrMessagePort& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, ClientOrServiceWorkerOrMessagePort& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<ClientOrServiceWorkerOrMessagePort> : public NativeValueTraitsBase<ClientOrServiceWorkerOrMessagePort> {
  MODULES_EXPORT static ClientOrServiceWorkerOrMessagePort NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static ClientOrServiceWorkerOrMessagePort NullValue() { return ClientOrServiceWorkerOrMessagePort(); }
};

template <>
struct V8TypeOf<ClientOrServiceWorkerOrMessagePort> {
  typedef V8ClientOrServiceWorkerOrMessagePort Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::ClientOrServiceWorkerOrMessagePort)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_CLIENT_OR_SERVICE_WORKER_OR_MESSAGE_PORT_H_
