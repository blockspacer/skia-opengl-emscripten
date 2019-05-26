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


#include "services/device/public/mojom/bluetooth_system.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void BluetoothSystemFactoryInterceptorForTesting::Create(BluetoothSystemRequest system, BluetoothSystemClientPtr system_client) {
  GetForwardingInterface()->Create(std::move(system), std::move(system_client));
}
BluetoothSystemFactoryAsyncWaiter::BluetoothSystemFactoryAsyncWaiter(
    BluetoothSystemFactory* proxy) : proxy_(proxy) {}

BluetoothSystemFactoryAsyncWaiter::~BluetoothSystemFactoryAsyncWaiter() = default;




void BluetoothSystemInterceptorForTesting::GetState(GetStateCallback callback) {
  GetForwardingInterface()->GetState(std::move(callback));
}
void BluetoothSystemInterceptorForTesting::SetPowered(bool powered, SetPoweredCallback callback) {
  GetForwardingInterface()->SetPowered(std::move(powered), std::move(callback));
}
void BluetoothSystemInterceptorForTesting::GetScanState(GetScanStateCallback callback) {
  GetForwardingInterface()->GetScanState(std::move(callback));
}
void BluetoothSystemInterceptorForTesting::StartScan(StartScanCallback callback) {
  GetForwardingInterface()->StartScan(std::move(callback));
}
void BluetoothSystemInterceptorForTesting::StopScan(StopScanCallback callback) {
  GetForwardingInterface()->StopScan(std::move(callback));
}
void BluetoothSystemInterceptorForTesting::GetAvailableDevices(GetAvailableDevicesCallback callback) {
  GetForwardingInterface()->GetAvailableDevices(std::move(callback));
}
BluetoothSystemAsyncWaiter::BluetoothSystemAsyncWaiter(
    BluetoothSystem* proxy) : proxy_(proxy) {}

BluetoothSystemAsyncWaiter::~BluetoothSystemAsyncWaiter() = default;

void BluetoothSystemAsyncWaiter::GetState(
    BluetoothSystem::State* out_state) {
  base::RunLoop loop;
  proxy_->GetState(
      base::BindOnce(
          [](base::RunLoop* loop,
             BluetoothSystem::State* out_state
,
             BluetoothSystem::State state) {*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_state));
  loop.Run();
}
void BluetoothSystemAsyncWaiter::SetPowered(
    bool powered, BluetoothSystem::SetPoweredResult* out_result) {
  base::RunLoop loop;
  proxy_->SetPowered(std::move(powered),
      base::BindOnce(
          [](base::RunLoop* loop,
             BluetoothSystem::SetPoweredResult* out_result
,
             BluetoothSystem::SetPoweredResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void BluetoothSystemAsyncWaiter::GetScanState(
    BluetoothSystem::ScanState* out_scan_state) {
  base::RunLoop loop;
  proxy_->GetScanState(
      base::BindOnce(
          [](base::RunLoop* loop,
             BluetoothSystem::ScanState* out_scan_state
,
             BluetoothSystem::ScanState scan_state) {*out_scan_state = std::move(scan_state);
            loop->Quit();
          },
          &loop,
          out_scan_state));
  loop.Run();
}
void BluetoothSystemAsyncWaiter::StartScan(
    BluetoothSystem::StartScanResult* out_result) {
  base::RunLoop loop;
  proxy_->StartScan(
      base::BindOnce(
          [](base::RunLoop* loop,
             BluetoothSystem::StartScanResult* out_result
,
             BluetoothSystem::StartScanResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void BluetoothSystemAsyncWaiter::StopScan(
    BluetoothSystem::StopScanResult* out_result) {
  base::RunLoop loop;
  proxy_->StopScan(
      base::BindOnce(
          [](base::RunLoop* loop,
             BluetoothSystem::StopScanResult* out_result
,
             BluetoothSystem::StopScanResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void BluetoothSystemAsyncWaiter::GetAvailableDevices(
    WTF::Vector<BluetoothDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetAvailableDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<BluetoothDeviceInfoPtr>* out_devices
,
             WTF::Vector<BluetoothDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}



void BluetoothSystemClientInterceptorForTesting::OnStateChanged(BluetoothSystem::State new_state) {
  GetForwardingInterface()->OnStateChanged(std::move(new_state));
}
void BluetoothSystemClientInterceptorForTesting::OnScanStateChanged(BluetoothSystem::ScanState new_state) {
  GetForwardingInterface()->OnScanStateChanged(std::move(new_state));
}
BluetoothSystemClientAsyncWaiter::BluetoothSystemClientAsyncWaiter(
    BluetoothSystemClient* proxy) : proxy_(proxy) {}

BluetoothSystemClientAsyncWaiter::~BluetoothSystemClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif