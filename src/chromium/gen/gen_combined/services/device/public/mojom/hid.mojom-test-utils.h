// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/hid.mojom.h"


namespace device {
namespace mojom {


class  HidManagerClientInterceptorForTesting : public HidManagerClient {
  virtual HidManagerClient* GetForwardingInterface() = 0;
  void DeviceAdded(HidDeviceInfoPtr device_info) override;
  void DeviceRemoved(HidDeviceInfoPtr device_info) override;
};
class  HidManagerClientAsyncWaiter {
 public:
  explicit HidManagerClientAsyncWaiter(HidManagerClient* proxy);
  ~HidManagerClientAsyncWaiter();

 private:
  HidManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidManagerClientAsyncWaiter);
};


class  HidManagerInterceptorForTesting : public HidManager {
  virtual HidManager* GetForwardingInterface() = 0;
  void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) override;
  void GetDevices(GetDevicesCallback callback) override;
  void Connect(const std::string& device_guid, HidConnectionClientPtr connection_client, ConnectCallback callback) override;
};
class  HidManagerAsyncWaiter {
 public:
  explicit HidManagerAsyncWaiter(HidManager* proxy);
  ~HidManagerAsyncWaiter();
  void GetDevicesAndSetClient(
      HidManagerClientAssociatedPtrInfo client, std::vector<HidDeviceInfoPtr>* out_devices);
  void GetDevices(
      std::vector<HidDeviceInfoPtr>* out_devices);
  void Connect(
      const std::string& device_guid, HidConnectionClientPtr connection_client, HidConnectionPtr* out_connection);

 private:
  HidManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidManagerAsyncWaiter);
};


class  HidConnectionInterceptorForTesting : public HidConnection {
  virtual HidConnection* GetForwardingInterface() = 0;
  void Read(ReadCallback callback) override;
  void Write(uint8_t report_id, const std::vector<uint8_t>& buffer, WriteCallback callback) override;
  void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) override;
  void SendFeatureReport(uint8_t report_id, const std::vector<uint8_t>& buffer, SendFeatureReportCallback callback) override;
};
class  HidConnectionAsyncWaiter {
 public:
  explicit HidConnectionAsyncWaiter(HidConnection* proxy);
  ~HidConnectionAsyncWaiter();
  void Read(
      bool* out_success, uint8_t* out_report_id, base::Optional<std::vector<uint8_t>>* out_buffer);
  void Write(
      uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success);
  void GetFeatureReport(
      uint8_t report_id, bool* out_success, base::Optional<std::vector<uint8_t>>* out_buffer);
  void SendFeatureReport(
      uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success);

 private:
  HidConnection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidConnectionAsyncWaiter);
};


class  HidConnectionClientInterceptorForTesting : public HidConnectionClient {
  virtual HidConnectionClient* GetForwardingInterface() = 0;
  void OnInputReport(uint8_t report_id, const std::vector<uint8_t>& buffer) override;
};
class  HidConnectionClientAsyncWaiter {
 public:
  explicit HidConnectionClientAsyncWaiter(HidConnectionClient* proxy);
  ~HidConnectionClientAsyncWaiter();

 private:
  HidConnectionClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HidConnectionClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_TEST_UTILS_H_