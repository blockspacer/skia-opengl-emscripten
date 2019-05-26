// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/input_service.mojom.h"


namespace device {
namespace mojom {


class  InputDeviceManagerClientInterceptorForTesting : public InputDeviceManagerClient {
  virtual InputDeviceManagerClient* GetForwardingInterface() = 0;
  void InputDeviceAdded(InputDeviceInfoPtr device_info) override;
  void InputDeviceRemoved(const std::string& id) override;
};
class  InputDeviceManagerClientAsyncWaiter {
 public:
  explicit InputDeviceManagerClientAsyncWaiter(InputDeviceManagerClient* proxy);
  ~InputDeviceManagerClientAsyncWaiter();

 private:
  InputDeviceManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManagerClientAsyncWaiter);
};


class  InputDeviceManagerInterceptorForTesting : public InputDeviceManager {
  virtual InputDeviceManager* GetForwardingInterface() = 0;
  void GetDevicesAndSetClient(InputDeviceManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) override;
  void GetDevices(GetDevicesCallback callback) override;
};
class  InputDeviceManagerAsyncWaiter {
 public:
  explicit InputDeviceManagerAsyncWaiter(InputDeviceManager* proxy);
  ~InputDeviceManagerAsyncWaiter();
  void GetDevicesAndSetClient(
      InputDeviceManagerClientAssociatedPtrInfo client, std::vector<InputDeviceInfoPtr>* out_devices);
  void GetDevices(
      std::vector<InputDeviceInfoPtr>* out_devices);

 private:
  InputDeviceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_TEST_UTILS_H_