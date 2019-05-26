// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_

#include "device/usb/public/mojom/device_manager_client.mojom.h"


namespace device {
namespace mojom {


class  UsbDeviceManagerClientInterceptorForTesting : public UsbDeviceManagerClient {
  virtual UsbDeviceManagerClient* GetForwardingInterface() = 0;
  void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) override;
  void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) override;
};
class  UsbDeviceManagerClientAsyncWaiter {
 public:
  explicit UsbDeviceManagerClientAsyncWaiter(UsbDeviceManagerClient* proxy);
  ~UsbDeviceManagerClientAsyncWaiter();

 private:
  UsbDeviceManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_