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


#include "device/usb/public/mojom/device.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void UsbDeviceInterceptorForTesting::Open(OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(callback));
}
void UsbDeviceInterceptorForTesting::Close(CloseCallback callback) {
  GetForwardingInterface()->Close(std::move(callback));
}
void UsbDeviceInterceptorForTesting::SetConfiguration(uint8_t value, SetConfigurationCallback callback) {
  GetForwardingInterface()->SetConfiguration(std::move(value), std::move(callback));
}
void UsbDeviceInterceptorForTesting::ClaimInterface(uint8_t interface_number, ClaimInterfaceCallback callback) {
  GetForwardingInterface()->ClaimInterface(std::move(interface_number), std::move(callback));
}
void UsbDeviceInterceptorForTesting::ReleaseInterface(uint8_t interface_number, ReleaseInterfaceCallback callback) {
  GetForwardingInterface()->ReleaseInterface(std::move(interface_number), std::move(callback));
}
void UsbDeviceInterceptorForTesting::SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, SetInterfaceAlternateSettingCallback callback) {
  GetForwardingInterface()->SetInterfaceAlternateSetting(std::move(interface_number), std::move(alternate_setting), std::move(callback));
}
void UsbDeviceInterceptorForTesting::Reset(ResetCallback callback) {
  GetForwardingInterface()->Reset(std::move(callback));
}
void UsbDeviceInterceptorForTesting::ClearHalt(uint8_t endpoint, ClearHaltCallback callback) {
  GetForwardingInterface()->ClearHalt(std::move(endpoint), std::move(callback));
}
void UsbDeviceInterceptorForTesting::ControlTransferIn(UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, ControlTransferInCallback callback) {
  GetForwardingInterface()->ControlTransferIn(std::move(params), std::move(length), std::move(timeout), std::move(callback));
}
void UsbDeviceInterceptorForTesting::ControlTransferOut(UsbControlTransferParamsPtr params, const WTF::Vector<uint8_t>& data, uint32_t timeout, ControlTransferOutCallback callback) {
  GetForwardingInterface()->ControlTransferOut(std::move(params), std::move(data), std::move(timeout), std::move(callback));
}
void UsbDeviceInterceptorForTesting::GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, GenericTransferInCallback callback) {
  GetForwardingInterface()->GenericTransferIn(std::move(endpoint_number), std::move(length), std::move(timeout), std::move(callback));
}
void UsbDeviceInterceptorForTesting::GenericTransferOut(uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, uint32_t timeout, GenericTransferOutCallback callback) {
  GetForwardingInterface()->GenericTransferOut(std::move(endpoint_number), std::move(data), std::move(timeout), std::move(callback));
}
void UsbDeviceInterceptorForTesting::IsochronousTransferIn(uint8_t endpoint_number, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferInCallback callback) {
  GetForwardingInterface()->IsochronousTransferIn(std::move(endpoint_number), std::move(packet_lengths), std::move(timeout), std::move(callback));
}
void UsbDeviceInterceptorForTesting::IsochronousTransferOut(uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferOutCallback callback) {
  GetForwardingInterface()->IsochronousTransferOut(std::move(endpoint_number), std::move(data), std::move(packet_lengths), std::move(timeout), std::move(callback));
}
UsbDeviceAsyncWaiter::UsbDeviceAsyncWaiter(
    UsbDevice* proxy) : proxy_(proxy) {}

UsbDeviceAsyncWaiter::~UsbDeviceAsyncWaiter() = default;

void UsbDeviceAsyncWaiter::Open(
    UsbOpenDeviceError* out_error) {
  base::RunLoop loop;
  proxy_->Open(
      base::BindOnce(
          [](base::RunLoop* loop,
             UsbOpenDeviceError* out_error
,
             UsbOpenDeviceError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void UsbDeviceAsyncWaiter::Close(
    ) {
  base::RunLoop loop;
  proxy_->Close(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void UsbDeviceAsyncWaiter::SetConfiguration(
    uint8_t value, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetConfiguration(std::move(value),
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
void UsbDeviceAsyncWaiter::ClaimInterface(
    uint8_t interface_number, bool* out_success) {
  base::RunLoop loop;
  proxy_->ClaimInterface(std::move(interface_number),
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
void UsbDeviceAsyncWaiter::ReleaseInterface(
    uint8_t interface_number, bool* out_success) {
  base::RunLoop loop;
  proxy_->ReleaseInterface(std::move(interface_number),
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
void UsbDeviceAsyncWaiter::SetInterfaceAlternateSetting(
    uint8_t interface_number, uint8_t alternate_setting, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetInterfaceAlternateSetting(std::move(interface_number),std::move(alternate_setting),
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
void UsbDeviceAsyncWaiter::Reset(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Reset(
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
void UsbDeviceAsyncWaiter::ClearHalt(
    uint8_t endpoint, bool* out_success) {
  base::RunLoop loop;
  proxy_->ClearHalt(std::move(endpoint),
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
void UsbDeviceAsyncWaiter::ControlTransferIn(
    UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, UsbTransferStatus* out_status, WTF::Vector<uint8_t>* out_data) {
  base::RunLoop loop;
  proxy_->ControlTransferIn(std::move(params),std::move(length),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             UsbTransferStatus* out_status
,
             WTF::Vector<uint8_t>* out_data
,
             UsbTransferStatus status,
             const WTF::Vector<uint8_t>& data) {*out_status = std::move(status);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_data));
  loop.Run();
}
void UsbDeviceAsyncWaiter::ControlTransferOut(
    UsbControlTransferParamsPtr params, const WTF::Vector<uint8_t>& data, uint32_t timeout, UsbTransferStatus* out_status) {
  base::RunLoop loop;
  proxy_->ControlTransferOut(std::move(params),std::move(data),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             UsbTransferStatus* out_status
,
             UsbTransferStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void UsbDeviceAsyncWaiter::GenericTransferIn(
    uint8_t endpoint_number, uint32_t length, uint32_t timeout, UsbTransferStatus* out_status, WTF::Vector<uint8_t>* out_data) {
  base::RunLoop loop;
  proxy_->GenericTransferIn(std::move(endpoint_number),std::move(length),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             UsbTransferStatus* out_status
,
             WTF::Vector<uint8_t>* out_data
,
             UsbTransferStatus status,
             const WTF::Vector<uint8_t>& data) {*out_status = std::move(status);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_data));
  loop.Run();
}
void UsbDeviceAsyncWaiter::GenericTransferOut(
    uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, uint32_t timeout, UsbTransferStatus* out_status) {
  base::RunLoop loop;
  proxy_->GenericTransferOut(std::move(endpoint_number),std::move(data),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             UsbTransferStatus* out_status
,
             UsbTransferStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void UsbDeviceAsyncWaiter::IsochronousTransferIn(
    uint8_t endpoint_number, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, WTF::Vector<uint8_t>* out_data, WTF::Vector<UsbIsochronousPacketPtr>* out_packets) {
  base::RunLoop loop;
  proxy_->IsochronousTransferIn(std::move(endpoint_number),std::move(packet_lengths),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<uint8_t>* out_data
,
             WTF::Vector<UsbIsochronousPacketPtr>* out_packets
,
             const WTF::Vector<uint8_t>& data,
             WTF::Vector<UsbIsochronousPacketPtr> packets) {*out_data = std::move(data);*out_packets = std::move(packets);
            loop->Quit();
          },
          &loop,
          out_data,
          out_packets));
  loop.Run();
}
void UsbDeviceAsyncWaiter::IsochronousTransferOut(
    uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, WTF::Vector<UsbIsochronousPacketPtr>* out_packets) {
  base::RunLoop loop;
  proxy_->IsochronousTransferOut(std::move(endpoint_number),std::move(data),std::move(packet_lengths),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<UsbIsochronousPacketPtr>* out_packets
,
             WTF::Vector<UsbIsochronousPacketPtr> packets) {*out_packets = std::move(packets);
            loop->Quit();
          },
          &loop,
          out_packets));
  loop.Run();
}



void UsbDeviceClientInterceptorForTesting::OnDeviceOpened() {
  GetForwardingInterface()->OnDeviceOpened();
}
void UsbDeviceClientInterceptorForTesting::OnDeviceClosed() {
  GetForwardingInterface()->OnDeviceClosed();
}
UsbDeviceClientAsyncWaiter::UsbDeviceClientAsyncWaiter(
    UsbDeviceClient* proxy) : proxy_(proxy) {}

UsbDeviceClientAsyncWaiter::~UsbDeviceClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif