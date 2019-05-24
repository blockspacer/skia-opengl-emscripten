// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_TEST_UTILS_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "device/usb/public/mojom/device.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT UsbDeviceInterceptorForTesting : public UsbDevice {
  virtual UsbDevice* GetForwardingInterface() = 0;
  void Open(OpenCallback callback) override;
  void Close(CloseCallback callback) override;
  void SetConfiguration(uint8_t value, SetConfigurationCallback callback) override;
  void ClaimInterface(uint8_t interface_number, ClaimInterfaceCallback callback) override;
  void ReleaseInterface(uint8_t interface_number, ReleaseInterfaceCallback callback) override;
  void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, SetInterfaceAlternateSettingCallback callback) override;
  void Reset(ResetCallback callback) override;
  void ClearHalt(uint8_t endpoint, ClearHaltCallback callback) override;
  void ControlTransferIn(UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, ControlTransferInCallback callback) override;
  void ControlTransferOut(UsbControlTransferParamsPtr params, const WTF::Vector<uint8_t>& data, uint32_t timeout, ControlTransferOutCallback callback) override;
  void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, GenericTransferInCallback callback) override;
  void GenericTransferOut(uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, uint32_t timeout, GenericTransferOutCallback callback) override;
  void IsochronousTransferIn(uint8_t endpoint_number, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferInCallback callback) override;
  void IsochronousTransferOut(uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferOutCallback callback) override;
};
class BLINK_PLATFORM_EXPORT UsbDeviceAsyncWaiter {
 public:
  explicit UsbDeviceAsyncWaiter(UsbDevice* proxy);
  ~UsbDeviceAsyncWaiter();
  void Open(
      UsbOpenDeviceError* out_error);
  void Close(
      );
  void SetConfiguration(
      uint8_t value, bool* out_success);
  void ClaimInterface(
      uint8_t interface_number, bool* out_success);
  void ReleaseInterface(
      uint8_t interface_number, bool* out_success);
  void SetInterfaceAlternateSetting(
      uint8_t interface_number, uint8_t alternate_setting, bool* out_success);
  void Reset(
      bool* out_success);
  void ClearHalt(
      uint8_t endpoint, bool* out_success);
  void ControlTransferIn(
      UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, UsbTransferStatus* out_status, WTF::Vector<uint8_t>* out_data);
  void ControlTransferOut(
      UsbControlTransferParamsPtr params, const WTF::Vector<uint8_t>& data, uint32_t timeout, UsbTransferStatus* out_status);
  void GenericTransferIn(
      uint8_t endpoint_number, uint32_t length, uint32_t timeout, UsbTransferStatus* out_status, WTF::Vector<uint8_t>* out_data);
  void GenericTransferOut(
      uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, uint32_t timeout, UsbTransferStatus* out_status);
  void IsochronousTransferIn(
      uint8_t endpoint_number, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, WTF::Vector<uint8_t>* out_data, WTF::Vector<UsbIsochronousPacketPtr>* out_packets);
  void IsochronousTransferOut(
      uint8_t endpoint_number, const WTF::Vector<uint8_t>& data, const WTF::Vector<uint32_t>& packet_lengths, uint32_t timeout, WTF::Vector<UsbIsochronousPacketPtr>* out_packets);

 private:
  UsbDevice* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT UsbDeviceClientInterceptorForTesting : public UsbDeviceClient {
  virtual UsbDeviceClient* GetForwardingInterface() = 0;
  void OnDeviceOpened() override;
  void OnDeviceClosed() override;
};
class BLINK_PLATFORM_EXPORT UsbDeviceClientAsyncWaiter {
 public:
  explicit UsbDeviceClientAsyncWaiter(UsbDeviceClient* proxy);
  ~UsbDeviceClientAsyncWaiter();

 private:
  UsbDeviceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UsbDeviceClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_BLINK_TEST_UTILS_H_