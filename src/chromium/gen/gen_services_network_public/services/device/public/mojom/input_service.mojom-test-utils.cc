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


#include "services/device/public/mojom/input_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void InputDeviceManagerClientInterceptorForTesting::InputDeviceAdded(InputDeviceInfoPtr device_info) {
  GetForwardingInterface()->InputDeviceAdded(std::move(device_info));
}
void InputDeviceManagerClientInterceptorForTesting::InputDeviceRemoved(const std::string& id) {
  GetForwardingInterface()->InputDeviceRemoved(std::move(id));
}
InputDeviceManagerClientAsyncWaiter::InputDeviceManagerClientAsyncWaiter(
    InputDeviceManagerClient* proxy) : proxy_(proxy) {}

InputDeviceManagerClientAsyncWaiter::~InputDeviceManagerClientAsyncWaiter() = default;




void InputDeviceManagerInterceptorForTesting::GetDevicesAndSetClient(InputDeviceManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) {
  GetForwardingInterface()->GetDevicesAndSetClient(std::move(client), std::move(callback));
}
void InputDeviceManagerInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
InputDeviceManagerAsyncWaiter::InputDeviceManagerAsyncWaiter(
    InputDeviceManager* proxy) : proxy_(proxy) {}

InputDeviceManagerAsyncWaiter::~InputDeviceManagerAsyncWaiter() = default;

void InputDeviceManagerAsyncWaiter::GetDevicesAndSetClient(
    InputDeviceManagerClientAssociatedPtrInfo client, std::vector<InputDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevicesAndSetClient(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<InputDeviceInfoPtr>* out_devices
,
             std::vector<InputDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}
void InputDeviceManagerAsyncWaiter::GetDevices(
    std::vector<InputDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<InputDeviceInfoPtr>* out_devices
,
             std::vector<InputDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif