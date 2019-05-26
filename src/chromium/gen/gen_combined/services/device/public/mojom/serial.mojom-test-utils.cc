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


#include "services/device/public/mojom/serial.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void SerialPortManagerInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
void SerialPortManagerInterceptorForTesting::GetPort(const base::UnguessableToken& token, SerialPortRequest port_request, SerialPortConnectionWatcherPtr watcher) {
  GetForwardingInterface()->GetPort(std::move(token), std::move(port_request), std::move(watcher));
}
SerialPortManagerAsyncWaiter::SerialPortManagerAsyncWaiter(
    SerialPortManager* proxy) : proxy_(proxy) {}

SerialPortManagerAsyncWaiter::~SerialPortManagerAsyncWaiter() = default;

void SerialPortManagerAsyncWaiter::GetDevices(
    std::vector<SerialPortInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<SerialPortInfoPtr>* out_devices
,
             std::vector<SerialPortInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}



void SerialPortInterceptorForTesting::Open(SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(options), std::move(in_stream), std::move(out_stream), std::move(client), std::move(callback));
}
void SerialPortInterceptorForTesting::ClearSendError(mojo::ScopedDataPipeConsumerHandle consumer) {
  GetForwardingInterface()->ClearSendError(std::move(consumer));
}
void SerialPortInterceptorForTesting::ClearReadError(mojo::ScopedDataPipeProducerHandle producer) {
  GetForwardingInterface()->ClearReadError(std::move(producer));
}
void SerialPortInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void SerialPortInterceptorForTesting::GetControlSignals(GetControlSignalsCallback callback) {
  GetForwardingInterface()->GetControlSignals(std::move(callback));
}
void SerialPortInterceptorForTesting::SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) {
  GetForwardingInterface()->SetControlSignals(std::move(signals), std::move(callback));
}
void SerialPortInterceptorForTesting::ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) {
  GetForwardingInterface()->ConfigurePort(std::move(options), std::move(callback));
}
void SerialPortInterceptorForTesting::GetPortInfo(GetPortInfoCallback callback) {
  GetForwardingInterface()->GetPortInfo(std::move(callback));
}
void SerialPortInterceptorForTesting::SetBreak(SetBreakCallback callback) {
  GetForwardingInterface()->SetBreak(std::move(callback));
}
void SerialPortInterceptorForTesting::ClearBreak(ClearBreakCallback callback) {
  GetForwardingInterface()->ClearBreak(std::move(callback));
}
SerialPortAsyncWaiter::SerialPortAsyncWaiter(
    SerialPort* proxy) : proxy_(proxy) {}

SerialPortAsyncWaiter::~SerialPortAsyncWaiter() = default;

void SerialPortAsyncWaiter::Open(
    SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, bool* out_success) {
  base::RunLoop loop;
  proxy_->Open(std::move(options),std::move(in_stream),std::move(out_stream),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void SerialPortAsyncWaiter::Flush(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void SerialPortAsyncWaiter::GetControlSignals(
    SerialPortControlSignalsPtr* out_signals) {
  base::RunLoop loop;
  proxy_->GetControlSignals(
      base::BindOnce(
          [](base::RunLoop* loop,
             SerialPortControlSignalsPtr* out_signals
,
             SerialPortControlSignalsPtr signals) {*out_signals = std::move(signals);
            loop->Quit();
          },
          &loop,
          out_signals));
  loop.Run();
}
void SerialPortAsyncWaiter::SetControlSignals(
    SerialHostControlSignalsPtr signals, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetControlSignals(std::move(signals),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void SerialPortAsyncWaiter::ConfigurePort(
    SerialConnectionOptionsPtr options, bool* out_success) {
  base::RunLoop loop;
  proxy_->ConfigurePort(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void SerialPortAsyncWaiter::GetPortInfo(
    SerialConnectionInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetPortInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             SerialConnectionInfoPtr* out_info
,
             SerialConnectionInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void SerialPortAsyncWaiter::SetBreak(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->SetBreak(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void SerialPortAsyncWaiter::ClearBreak(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->ClearBreak(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}



void SerialPortClientInterceptorForTesting::OnReadError(SerialReceiveError error) {
  GetForwardingInterface()->OnReadError(std::move(error));
}
void SerialPortClientInterceptorForTesting::OnSendError(SerialSendError error) {
  GetForwardingInterface()->OnSendError(std::move(error));
}
SerialPortClientAsyncWaiter::SerialPortClientAsyncWaiter(
    SerialPortClient* proxy) : proxy_(proxy) {}

SerialPortClientAsyncWaiter::~SerialPortClientAsyncWaiter() = default;




SerialPortConnectionWatcherAsyncWaiter::SerialPortConnectionWatcherAsyncWaiter(
    SerialPortConnectionWatcher* proxy) : proxy_(proxy) {}

SerialPortConnectionWatcherAsyncWaiter::~SerialPortConnectionWatcherAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif