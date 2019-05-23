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


#include "device/usb/public/mojom/device_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "device/usb/public/mojom/device.mojom.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom.h"
#include "device/usb/public/mojom/device_manager_client.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void UsbDeviceManagerInterceptorForTesting::EnumerateDevicesAndSetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) {
  GetForwardingInterface()->EnumerateDevicesAndSetClient(std::move(client), std::move(callback));
}
void UsbDeviceManagerInterceptorForTesting::GetDevices(::device::mojom::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(options), std::move(callback));
}
void UsbDeviceManagerInterceptorForTesting::GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request, ::device::mojom::UsbDeviceClientPtr device_client) {
  GetForwardingInterface()->GetDevice(std::move(guid), std::move(device_request), std::move(device_client));
}
void UsbDeviceManagerInterceptorForTesting::SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
UsbDeviceManagerAsyncWaiter::UsbDeviceManagerAsyncWaiter(
    UsbDeviceManager* proxy) : proxy_(proxy) {}

UsbDeviceManagerAsyncWaiter::~UsbDeviceManagerAsyncWaiter() = default;

void UsbDeviceManagerAsyncWaiter::EnumerateDevicesAndSetClient(
    ::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->EnumerateDevicesAndSetClient(std::move(client),
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
void UsbDeviceManagerAsyncWaiter::GetDevices(
    ::device::mojom::UsbEnumerationOptionsPtr options, std::vector<::device::mojom::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->GetDevices(std::move(options),
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





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif