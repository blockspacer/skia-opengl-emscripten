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


#include "third_party/blink/public/mojom/usb/web_usb_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "device/usb/public/mojom/device.mojom.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom.h"
#include "device/usb/public/mojom/device_manager_client.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void WebUsbServiceInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
void WebUsbServiceInterceptorForTesting::GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_requestd) {
  GetForwardingInterface()->GetDevice(std::move(guid), std::move(device_requestd));
}
void WebUsbServiceInterceptorForTesting::GetPermission(std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, GetPermissionCallback callback) {
  GetForwardingInterface()->GetPermission(std::move(device_filters), std::move(callback));
}
void WebUsbServiceInterceptorForTesting::SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
WebUsbServiceAsyncWaiter::WebUsbServiceAsyncWaiter(
    WebUsbService* proxy) : proxy_(proxy) {}

WebUsbServiceAsyncWaiter::~WebUsbServiceAsyncWaiter() = default;

void WebUsbServiceAsyncWaiter::GetDevices(
    std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results
,
             std::vector<::device::mojom::UsbDeviceInfoPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}
void WebUsbServiceAsyncWaiter::GetPermission(
    std::vector<::device::mojom::UsbDeviceFilterPtr> device_filters, ::device::mojom::UsbDeviceInfoPtr* out_result) {
  base::RunLoop loop;
  proxy_->GetPermission(std::move(device_filters),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::UsbDeviceInfoPtr* out_result
,
             ::device::mojom::UsbDeviceInfoPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif