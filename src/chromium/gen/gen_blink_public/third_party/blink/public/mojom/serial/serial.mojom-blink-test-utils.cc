// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/serial/serial.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/device/public/mojom/serial.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void SerialServiceInterceptorForTesting::GetPorts(GetPortsCallback callback) {
  GetForwardingInterface()->GetPorts(std::move(callback));
}
void SerialServiceInterceptorForTesting::RequestPort(WTF::Vector<SerialPortFilterPtr> filters, RequestPortCallback callback) {
  GetForwardingInterface()->RequestPort(std::move(filters), std::move(callback));
}
void SerialServiceInterceptorForTesting::GetPort(const base::UnguessableToken& token, ::device::mojom::blink::SerialPortRequest port_request) {
  GetForwardingInterface()->GetPort(std::move(token), std::move(port_request));
}
SerialServiceAsyncWaiter::SerialServiceAsyncWaiter(
    SerialService* proxy) : proxy_(proxy) {}

SerialServiceAsyncWaiter::~SerialServiceAsyncWaiter() = default;

void SerialServiceAsyncWaiter::GetPorts(
    WTF::Vector<SerialPortInfoPtr>* out_ports) {
  base::RunLoop loop;
  proxy_->GetPorts(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<SerialPortInfoPtr>* out_ports
,
             WTF::Vector<SerialPortInfoPtr> ports) {*out_ports = std::move(ports);
            loop->Quit();
          },
          &loop,
          out_ports));
  loop.Run();
}
void SerialServiceAsyncWaiter::RequestPort(
    WTF::Vector<SerialPortFilterPtr> filters, SerialPortInfoPtr* out_port) {
  base::RunLoop loop;
  proxy_->RequestPort(std::move(filters),
      base::BindOnce(
          [](base::RunLoop* loop,
             SerialPortInfoPtr* out_port
,
             SerialPortInfoPtr port) {*out_port = std::move(port);
            loop->Quit();
          },
          &loop,
          out_port));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif