// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_

#include "device/usb/public/mojom/device_manager_client.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT UsbDeviceManagerClientInterceptorForTesting : public UsbDeviceManagerClient {
  virtual UsbDeviceManagerClient* GetForwardingInterface() = 0;
  void OnDeviceAdded(::device::mojom::blink::UsbDeviceInfoPtr device_info) override;
  void OnDeviceRemoved(::device::mojom::blink::UsbDeviceInfoPtr device_info) override;
};
class BLINK_PLATFORM_EXPORT UsbDeviceManagerClientAsyncWaiter {
 public:
  explicit UsbDeviceManagerClientAsyncWaiter(UsbDeviceManagerClient* proxy);
  ~UsbDeviceManagerClientAsyncWaiter();

 private:
  UsbDeviceManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_