// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/usb/web_usb_service.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT WebUsbServiceInterceptorForTesting : public WebUsbService {
  virtual WebUsbService* GetForwardingInterface() = 0;
  void GetDevices(GetDevicesCallback callback) override;
  void GetDevice(const WTF::String& guid, ::device::mojom::blink::UsbDeviceRequest device_requestd) override;
  void GetPermission(WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) override;
  void SetClient(::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client) override;
};
class PLATFORM_EXPORT WebUsbServiceAsyncWaiter {
 public:
  explicit WebUsbServiceAsyncWaiter(WebUsbService* proxy);
  ~WebUsbServiceAsyncWaiter();
  void GetDevices(
      WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results);
  void GetPermission(
      WTF::Vector<::device::mojom::blink::UsbDeviceFilterPtr> device_filters, ::device::mojom::blink::UsbDeviceInfoPtr* out_result);

 private:
  WebUsbService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebUsbServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_BLINK_TEST_UTILS_H_