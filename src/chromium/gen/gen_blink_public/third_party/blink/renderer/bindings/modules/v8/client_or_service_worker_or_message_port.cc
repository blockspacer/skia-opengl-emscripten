// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/client_or_service_worker_or_message_port.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/core/workers/abstract_worker.h"

namespace blink {

ClientOrServiceWorkerOrMessagePort::ClientOrServiceWorkerOrMessagePort() : type_(SpecificType::kNone) {}

ServiceWorkerClient* ClientOrServiceWorkerOrMessagePort::GetAsClient() const {
  DCHECK(IsClient());
  return client_;
}

void ClientOrServiceWorkerOrMessagePort::SetClient(ServiceWorkerClient* value) {
  DCHECK(IsNull());
  client_ = value;
  type_ = SpecificType::kClient;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::FromClient(ServiceWorkerClient* value) {
  ClientOrServiceWorkerOrMessagePort container;
  container.SetClient(value);
  return container;
}

MessagePort* ClientOrServiceWorkerOrMessagePort::GetAsMessagePort() const {
  DCHECK(IsMessagePort());
  return message_port_;
}

void ClientOrServiceWorkerOrMessagePort::SetMessagePort(MessagePort* value) {
  DCHECK(IsNull());
  message_port_ = value;
  type_ = SpecificType::kMessagePort;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::FromMessagePort(MessagePort* value) {
  ClientOrServiceWorkerOrMessagePort container;
  container.SetMessagePort(value);
  return container;
}

ServiceWorker* ClientOrServiceWorkerOrMessagePort::GetAsServiceWorker() const {
  DCHECK(IsServiceWorker());
  return service_worker_;
}

void ClientOrServiceWorkerOrMessagePort::SetServiceWorker(ServiceWorker* value) {
  DCHECK(IsNull());
  service_worker_ = value;
  type_ = SpecificType::kServiceWorker;
}

ClientOrServiceWorkerOrMessagePort ClientOrServiceWorkerOrMessagePort::FromServiceWorker(ServiceWorker* value) {
  ClientOrServiceWorkerOrMessagePort container;
  container.SetServiceWorker(value);
  return container;
}

ClientOrServiceWorkerOrMessagePort::ClientOrServiceWorkerOrMessagePort(const ClientOrServiceWorkerOrMessagePort&) = default;
ClientOrServiceWorkerOrMessagePort::~ClientOrServiceWorkerOrMessagePort() = default;
ClientOrServiceWorkerOrMessagePort& ClientOrServiceWorkerOrMessagePort::operator=(const ClientOrServiceWorkerOrMessagePort&) = default;

void ClientOrServiceWorkerOrMessagePort::Trace(blink::Visitor* visitor) {
  visitor->Trace(client_);
  visitor->Trace(message_port_);
  visitor->Trace(service_worker_);
}

void V8ClientOrServiceWorkerOrMessagePort::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    ClientOrServiceWorkerOrMessagePort& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Client::HasInstance(v8_value, isolate)) {
    ServiceWorkerClient* cpp_value = V8Client::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetClient(cpp_value);
    return;
  }

  if (V8MessagePort::HasInstance(v8_value, isolate)) {
    MessagePort* cpp_value = V8MessagePort::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetMessagePort(cpp_value);
    return;
  }

  if (V8ServiceWorker::HasInstance(v8_value, isolate)) {
    ServiceWorker* cpp_value = V8ServiceWorker::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetServiceWorker(cpp_value);
    return;
  }

  exception_state.ThrowTypeError("The provided value is not of type '(Client or ServiceWorker or MessagePort)'");
}

v8::Local<v8::Value> ToV8(const ClientOrServiceWorkerOrMessagePort& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case ClientOrServiceWorkerOrMessagePort::SpecificType::kNone:
      return v8::Null(isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificType::kClient:
      return ToV8(impl.GetAsClient(), creationContext, isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificType::kMessagePort:
      return ToV8(impl.GetAsMessagePort(), creationContext, isolate);
    case ClientOrServiceWorkerOrMessagePort::SpecificType::kServiceWorker:
      return ToV8(impl.GetAsServiceWorker(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

ClientOrServiceWorkerOrMessagePort NativeValueTraits<ClientOrServiceWorkerOrMessagePort>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ClientOrServiceWorkerOrMessagePort impl;
  V8ClientOrServiceWorkerOrMessagePort::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
