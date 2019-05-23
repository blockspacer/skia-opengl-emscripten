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


#include "services/device/public/mojom/hid.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void HidManagerClientInterceptorForTesting::DeviceAdded(HidDeviceInfoPtr device_info) {
  GetForwardingInterface()->DeviceAdded(std::move(device_info));
}
void HidManagerClientInterceptorForTesting::DeviceRemoved(HidDeviceInfoPtr device_info) {
  GetForwardingInterface()->DeviceRemoved(std::move(device_info));
}
HidManagerClientAsyncWaiter::HidManagerClientAsyncWaiter(
    HidManagerClient* proxy) : proxy_(proxy) {}

HidManagerClientAsyncWaiter::~HidManagerClientAsyncWaiter() = default;




void HidManagerInterceptorForTesting::GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) {
  GetForwardingInterface()->GetDevicesAndSetClient(std::move(client), std::move(callback));
}
void HidManagerInterceptorForTesting::GetDevices(GetDevicesCallback callback) {
  GetForwardingInterface()->GetDevices(std::move(callback));
}
void HidManagerInterceptorForTesting::Connect(const std::string& device_guid, HidConnectionClientPtr connection_client, ConnectCallback callback) {
  GetForwardingInterface()->Connect(std::move(device_guid), std::move(connection_client), std::move(callback));
}
HidManagerAsyncWaiter::HidManagerAsyncWaiter(
    HidManager* proxy) : proxy_(proxy) {}

HidManagerAsyncWaiter::~HidManagerAsyncWaiter() = default;

void HidManagerAsyncWaiter::GetDevicesAndSetClient(
    HidManagerClientAssociatedPtrInfo client, std::vector<HidDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevicesAndSetClient(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<HidDeviceInfoPtr>* out_devices
,
             std::vector<HidDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}
void HidManagerAsyncWaiter::GetDevices(
    std::vector<HidDeviceInfoPtr>* out_devices) {
  base::RunLoop loop;
  proxy_->GetDevices(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<HidDeviceInfoPtr>* out_devices
,
             std::vector<HidDeviceInfoPtr> devices) {*out_devices = std::move(devices);
            loop->Quit();
          },
          &loop,
          out_devices));
  loop.Run();
}
void HidManagerAsyncWaiter::Connect(
    const std::string& device_guid, HidConnectionClientPtr connection_client, HidConnectionPtr* out_connection) {
  base::RunLoop loop;
  proxy_->Connect(std::move(device_guid),std::move(connection_client),
      base::BindOnce(
          [](base::RunLoop* loop,
             HidConnectionPtr* out_connection
,
             HidConnectionPtr connection) {*out_connection = std::move(connection);
            loop->Quit();
          },
          &loop,
          out_connection));
  loop.Run();
}



void HidConnectionInterceptorForTesting::Read(ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(callback));
}
void HidConnectionInterceptorForTesting::Write(uint8_t report_id, const std::vector<uint8_t>& buffer, WriteCallback callback) {
  GetForwardingInterface()->Write(std::move(report_id), std::move(buffer), std::move(callback));
}
void HidConnectionInterceptorForTesting::GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) {
  GetForwardingInterface()->GetFeatureReport(std::move(report_id), std::move(callback));
}
void HidConnectionInterceptorForTesting::SendFeatureReport(uint8_t report_id, const std::vector<uint8_t>& buffer, SendFeatureReportCallback callback) {
  GetForwardingInterface()->SendFeatureReport(std::move(report_id), std::move(buffer), std::move(callback));
}
HidConnectionAsyncWaiter::HidConnectionAsyncWaiter(
    HidConnection* proxy) : proxy_(proxy) {}

HidConnectionAsyncWaiter::~HidConnectionAsyncWaiter() = default;

void HidConnectionAsyncWaiter::Read(
    bool* out_success, uint8_t* out_report_id, base::Optional<std::vector<uint8_t>>* out_buffer) {
  base::RunLoop loop;
  proxy_->Read(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             uint8_t* out_report_id
,
             base::Optional<std::vector<uint8_t>>* out_buffer
,
             bool success,
             uint8_t report_id,
             const base::Optional<std::vector<uint8_t>>& buffer) {*out_success = std::move(success);*out_report_id = std::move(report_id);*out_buffer = std::move(buffer);
            loop->Quit();
          },
          &loop,
          out_success,
          out_report_id,
          out_buffer));
  loop.Run();
}
void HidConnectionAsyncWaiter::Write(
    uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success) {
  base::RunLoop loop;
  proxy_->Write(std::move(report_id),std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void HidConnectionAsyncWaiter::GetFeatureReport(
    uint8_t report_id, bool* out_success, base::Optional<std::vector<uint8_t>>* out_buffer) {
  base::RunLoop loop;
  proxy_->GetFeatureReport(std::move(report_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             base::Optional<std::vector<uint8_t>>* out_buffer
,
             bool success,
             const base::Optional<std::vector<uint8_t>>& buffer) {*out_success = std::move(success);*out_buffer = std::move(buffer);
            loop->Quit();
          },
          &loop,
          out_success,
          out_buffer));
  loop.Run();
}
void HidConnectionAsyncWaiter::SendFeatureReport(
    uint8_t report_id, const std::vector<uint8_t>& buffer, bool* out_success) {
  base::RunLoop loop;
  proxy_->SendFeatureReport(std::move(report_id),std::move(buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}



void HidConnectionClientInterceptorForTesting::OnInputReport(uint8_t report_id, const std::vector<uint8_t>& buffer) {
  GetForwardingInterface()->OnInputReport(std::move(report_id), std::move(buffer));
}
HidConnectionClientAsyncWaiter::HidConnectionClientAsyncWaiter(
    HidConnectionClient* proxy) : proxy_(proxy) {}

HidConnectionClientAsyncWaiter::~HidConnectionClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif