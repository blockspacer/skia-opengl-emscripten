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


#include "device/usb/public/mojom/device_manager_client.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "device/usb/public/mojom/device.mojom.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void UsbDeviceManagerClientInterceptorForTesting::OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) {
  GetForwardingInterface()->OnDeviceAdded(std::move(device_info));
}
void UsbDeviceManagerClientInterceptorForTesting::OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) {
  GetForwardingInterface()->OnDeviceRemoved(std::move(device_info));
}
UsbDeviceManagerClientAsyncWaiter::UsbDeviceManagerClientAsyncWaiter(
    UsbDeviceManagerClient* proxy) : proxy_(proxy) {}

UsbDeviceManagerClientAsyncWaiter::~UsbDeviceManagerClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif