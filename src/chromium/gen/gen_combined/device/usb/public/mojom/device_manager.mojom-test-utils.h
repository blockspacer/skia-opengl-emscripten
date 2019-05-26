// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_TEST_UTILS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_TEST_UTILS_H_

#include "device/usb/public/mojom/device_manager.mojom.h"


namespace device {
namespace mojom {


class  UsbDeviceManagerInterceptorForTesting : public UsbDeviceManager {
  virtual UsbDeviceManager* GetForwardingInterface() = 0;
  void EnumerateDevicesAndSetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) override;
  void GetDevices(::device::mojom::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) override;
  void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request, ::device::mojom::UsbDeviceClientPtr device_client) override;
  void SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) override;
};
class  UsbDeviceManagerAsyncWaiter {
 public:
  explicit UsbDeviceManagerAsyncWaiter(UsbDeviceManager* proxy);
  ~UsbDeviceManagerAsyncWaiter();
  void EnumerateDevicesAndSetClient(
      ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results);
  void GetDevices(
      ::device::mojom::UsbEnumerationOptionsPtr options, std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results);

 private:
  UsbDeviceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_TEST_UTILS_H_