// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "device/usb/public/mojom/device_manager.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT UsbDeviceManagerInterceptorForTesting : public UsbDeviceManager {
  virtual UsbDeviceManager* GetForwardingInterface() = 0;
  void EnumerateDevicesAndSetClient(::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) override;
  void GetDevices(::device::mojom::blink::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) override;
  void GetDevice(const WTF::String& guid, ::device::mojom::blink::UsbDeviceRequest device_request, ::device::mojom::blink::UsbDeviceClientPtr device_client) override;
  void SetClient(::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client) override;
};
class BLINK_PLATFORM_EXPORT UsbDeviceManagerAsyncWaiter {
 public:
  explicit UsbDeviceManagerAsyncWaiter(UsbDeviceManager* proxy);
  ~UsbDeviceManagerAsyncWaiter();
  void EnumerateDevicesAndSetClient(
      ::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client, WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results);
  void GetDevices(
      ::device::mojom::blink::UsbEnumerationOptionsPtr options, WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results);

 private:
  UsbDeviceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_