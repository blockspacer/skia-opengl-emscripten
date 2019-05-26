// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT WebBluetoothServiceInterceptorForTesting : public WebBluetoothService {
  virtual WebBluetoothService* GetForwardingInterface() = 0;
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) override;
  void RemoteServerConnect(const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) override;
  void RemoteServerDisconnect(const WTF::String& device_id) override;
  void RemoteServerGetPrimaryServices(const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, RemoteServerGetPrimaryServicesCallback callback) override;
  void RemoteServiceGetCharacteristics(const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) override;
  void RemoteCharacteristicReadValue(const WTF::String& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) override;
  void RemoteCharacteristicWriteValue(const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) override;
  void RemoteCharacteristicStartNotifications(const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) override;
  void RemoteCharacteristicStopNotifications(const WTF::String& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) override;
  void RemoteCharacteristicGetDescriptors(const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) override;
  void RemoteDescriptorReadValue(const WTF::String& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) override;
  void RemoteDescriptorWriteValue(const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) override;
  void RequestScanningStart(WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServiceAsyncWaiter {
 public:
  explicit WebBluetoothServiceAsyncWaiter(WebBluetoothService* proxy);
  ~WebBluetoothServiceAsyncWaiter();
  void RequestDevice(
      WebBluetoothRequestDeviceOptionsPtr options, WebBluetoothResult* out_result, WebBluetoothDevicePtr* out_device);
  void RemoteServerConnect(
      const WTF::String& device_id, WebBluetoothServerClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteServerGetPrimaryServices(
      const WTF::String& device_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& services_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTServicePtr>>* out_services);
  void RemoteServiceGetCharacteristics(
      const WTF::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& characteristics_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics);
  void RemoteCharacteristicReadValue(
      const WTF::String& characteristic_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value);
  void RemoteCharacteristicWriteValue(
      const WTF::String& characteristic_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result);
  void RemoteCharacteristicStartNotifications(
      const WTF::String& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, WebBluetoothResult* out_result);
  void RemoteCharacteristicStopNotifications(
      const WTF::String& characteristic_instance_id);
  void RemoteCharacteristicGetDescriptors(
      const WTF::String& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const WTF::String& descriptor_uuid, WebBluetoothResult* out_result, base::Optional<WTF::Vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors);
  void RemoteDescriptorReadValue(
      const WTF::String& descriptor_instance_id, WebBluetoothResult* out_result, base::Optional<WTF::Vector<uint8_t>>* out_value);
  void RemoteDescriptorWriteValue(
      const WTF::String& descriptor_instance_id, const WTF::Vector<uint8_t>& value, WebBluetoothResult* out_result);
  void RequestScanningStart(
      WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartResultPtr* out_result);

 private:
  WebBluetoothService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothServiceAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WebBluetoothServerClientInterceptorForTesting : public WebBluetoothServerClient {
  virtual WebBluetoothServerClient* GetForwardingInterface() = 0;
  void GATTServerDisconnected() override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothServerClientAsyncWaiter {
 public:
  explicit WebBluetoothServerClientAsyncWaiter(WebBluetoothServerClient* proxy);
  ~WebBluetoothServerClientAsyncWaiter();

 private:
  WebBluetoothServerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothServerClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientInterceptorForTesting : public WebBluetoothCharacteristicClient {
  virtual WebBluetoothCharacteristicClient* GetForwardingInterface() = 0;
  void RemoteCharacteristicValueChanged(const WTF::Vector<uint8_t>& value) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothCharacteristicClientAsyncWaiter {
 public:
  explicit WebBluetoothCharacteristicClientAsyncWaiter(WebBluetoothCharacteristicClient* proxy);
  ~WebBluetoothCharacteristicClientAsyncWaiter();

 private:
  WebBluetoothCharacteristicClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothCharacteristicClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WebBluetoothScanClientInterceptorForTesting : public WebBluetoothScanClient {
  virtual WebBluetoothScanClient* GetForwardingInterface() = 0;
  void ScanEvent(WebBluetoothScanResultPtr result) override;
};
class BLINK_PLATFORM_EXPORT WebBluetoothScanClientAsyncWaiter {
 public:
  explicit WebBluetoothScanClientAsyncWaiter(WebBluetoothScanClient* proxy);
  ~WebBluetoothScanClientAsyncWaiter();

 private:
  WebBluetoothScanClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothScanClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_BLINK_TEST_UTILS_H_