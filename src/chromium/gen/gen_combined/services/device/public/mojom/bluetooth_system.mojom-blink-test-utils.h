// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/bluetooth_system.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT BluetoothSystemFactoryInterceptorForTesting : public BluetoothSystemFactory {
  virtual BluetoothSystemFactory* GetForwardingInterface() = 0;
  void Create(BluetoothSystemRequest system, BluetoothSystemClientPtr system_client) override;
};
class BLINK_PLATFORM_EXPORT BluetoothSystemFactoryAsyncWaiter {
 public:
  explicit BluetoothSystemFactoryAsyncWaiter(BluetoothSystemFactory* proxy);
  ~BluetoothSystemFactoryAsyncWaiter();

 private:
  BluetoothSystemFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystemFactoryAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT BluetoothSystemInterceptorForTesting : public BluetoothSystem {
  virtual BluetoothSystem* GetForwardingInterface() = 0;
  void GetState(GetStateCallback callback) override;
  void SetPowered(bool powered, SetPoweredCallback callback) override;
  void GetScanState(GetScanStateCallback callback) override;
  void StartScan(StartScanCallback callback) override;
  void StopScan(StopScanCallback callback) override;
  void GetAvailableDevices(GetAvailableDevicesCallback callback) override;
};
class BLINK_PLATFORM_EXPORT BluetoothSystemAsyncWaiter {
 public:
  explicit BluetoothSystemAsyncWaiter(BluetoothSystem* proxy);
  ~BluetoothSystemAsyncWaiter();
  void GetState(
      BluetoothSystem::State* out_state);
  void SetPowered(
      bool powered, BluetoothSystem::SetPoweredResult* out_result);
  void GetScanState(
      BluetoothSystem::ScanState* out_scan_state);
  void StartScan(
      BluetoothSystem::StartScanResult* out_result);
  void StopScan(
      BluetoothSystem::StopScanResult* out_result);
  void GetAvailableDevices(
      WTF::Vector<BluetoothDeviceInfoPtr>* out_devices);

 private:
  BluetoothSystem* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystemAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT BluetoothSystemClientInterceptorForTesting : public BluetoothSystemClient {
  virtual BluetoothSystemClient* GetForwardingInterface() = 0;
  void OnStateChanged(BluetoothSystem::State new_state) override;
  void OnScanStateChanged(BluetoothSystem::ScanState new_state) override;
};
class BLINK_PLATFORM_EXPORT BluetoothSystemClientAsyncWaiter {
 public:
  explicit BluetoothSystemClientAsyncWaiter(BluetoothSystemClient* proxy);
  ~BluetoothSystemClientAsyncWaiter();

 private:
  BluetoothSystemClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BluetoothSystemClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_