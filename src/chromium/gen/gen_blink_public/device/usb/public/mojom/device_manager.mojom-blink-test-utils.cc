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


#include "device/usb/public/mojom/device_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "device/usb/public/mojom/device.mojom-blink.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom-blink.h"
#include "device/usb/public/mojom/device_manager_client.mojom-blink.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_BLINK_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void UsbDeviceManagerInterceptorForTesting::EnumerateDevicesAndSetClient(::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) {
  GetForwardingInterface()->EnumerateDevicesAndSetClient(std::move(client), std::move(callback));
}
void UsbDeviceManagerInterceptorForTesting::GetDevices(::device::mojom::blink::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(options), std::move(callback));
}
void UsbDeviceManagerInterceptorForTesting::GetDevice(const WTF::String& guid, ::device::mojom::blink::UsbDeviceRequest device_request, ::device::mojom::blink::UsbDeviceClientPtr device_client) {
  GetForwardingInterface()->GetDevice(std::move(guid), std::move(device_request), std::move(device_client));
}
void UsbDeviceManagerInterceptorForTesting::SetClient(::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
UsbDeviceManagerAsyncWaiter::UsbDeviceManagerAsyncWaiter(
    UsbDeviceManager* proxy) : proxy_(proxy) {}

UsbDeviceManagerAsyncWaiter::~UsbDeviceManagerAsyncWaiter() = default;

void UsbDeviceManagerAsyncWaiter::EnumerateDevicesAndSetClient(
    ::device::mojom::blink::UsbDeviceManagerClientAssociatedPtrInfo client, WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->EnumerateDevicesAndSetClient(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results
,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}
void UsbDeviceManagerAsyncWaiter::GetDevices(
    ::device::mojom::blink::UsbEnumerationOptionsPtr options, WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results) {
  base::RunLoop loop;
  proxy_->GetDevices(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr>* out_results
,
             WTF::Vector<::device::mojom::blink::UsbDeviceInfoPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif