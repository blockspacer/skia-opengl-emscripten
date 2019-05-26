// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/usb/web_usb_service.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT WebUsbServiceInterceptorForTesting : public WebUsbService {
  virtual WebUsbService* GetForwardingInterface() = 0;
  void GetDevices(GetDevicesCallback callback) override;
  void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_requestd) override;
  void GetPermission(std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) override;
  void SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) override;
};
class BLINK_COMMON_EXPORT WebUsbServiceAsyncWaiter {
 public:
  explicit WebUsbServiceAsyncWaiter(WebUsbService* proxy);
  ~WebUsbServiceAsyncWaiter();
  void GetDevices(
      std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results);
  void GetPermission(
      std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, ::device::mojom::UsbDeviceInfoPtr* out_result);

 private:
  WebUsbService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebUsbServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_TEST_UTILS_H_