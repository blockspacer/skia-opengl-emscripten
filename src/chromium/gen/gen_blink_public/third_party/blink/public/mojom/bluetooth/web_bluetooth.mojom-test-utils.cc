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


#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "device/bluetooth/public/mojom/uuid.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_JUMBO_H_
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "device/bluetooth/public/mojom/uuid_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void WebBluetoothServiceInterceptorForTesting::RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) {
  GetForwardingInterface()->RequestDevice(std::move(options), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) {
  GetForwardingInterface()->RemoteServerConnect(std::move(device_id), std::move(client), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) {
  GetForwardingInterface()->RemoteServerDisconnect(std::move(device_id));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) {
  GetForwardingInterface()->RemoteServerGetPrimaryServices(std::move(device_id), std::move(quantity), std::move(services_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) {
  GetForwardingInterface()->RemoteServiceGetCharacteristics(std::move(service_instance_id), std::move(quantity), std::move(characteristics_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicReadValue(std::move(characteristic_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicWriteValue(std::move(characteristic_instance_id), std::move(value), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicStartNotifications(std::move(characteristic_instance_id), std::move(client), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicStopNotifications(std::move(characteristic_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) {
  GetForwardingInterface()->RemoteCharacteristicGetDescriptors(std::move(characteristics_instance_id), std::move(quantity), std::move(descriptor_uuid), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) {
  GetForwardingInterface()->RemoteDescriptorReadValue(std::move(descriptor_instance_id), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) {
  GetForwardingInterface()->RemoteDescriptorWriteValue(std::move(descriptor_instance_id), std::move(value), std::move(callback));
}
void WebBluetoothServiceInterceptorForTesting::RequestScanningStart(WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartCallback callback) {
  GetForwardingInterface()->RequestScanningStart(std::move(client), std::move(options), std::move(callback));
}
WebBluetoothServiceAsyncWaiter::WebBluetoothServiceAsyncWaiter(
    WebBluetoothService* proxy) : proxy_(proxy) {}

WebBluetoothServiceAsyncWaiter::~WebBluetoothServiceAsyncWaiter() = default;

void WebBluetoothServiceAsyncWaiter::RequestDevice(
    WebBluetoothRequestDeviceOptionsPtr options, WebBluetoothResult* out_result, WebBluetoothDevicePtr* out_device) {
  base::RunLoop loop;
  proxy_->RequestDevice(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothDevicePtr* out_device
,
             WebBluetoothResult result,
             WebBluetoothDevicePtr device) {*out_result = std::move(result);*out_device = std::move(device);
            loop->Quit();
          },
          &loop,
          out_result,
          out_device));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServerConnect(
    const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteServerConnect(std::move(device_id),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServerGetPrimaryServices(
    const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>>* out_services) {
  base::RunLoop loop;
  proxy_->RemoteServerGetPrimaryServices(std::move(device_id),std::move(quantity),std::move(services_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>>* out_services
,
             WebBluetoothResult result,
             base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>> services) {*out_result = std::move(result);*out_services = std::move(services);
            loop->Quit();
          },
          &loop,
          out_result,
          out_services));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteServiceGetCharacteristics(
    const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics) {
  base::RunLoop loop;
  proxy_->RemoteServiceGetCharacteristics(std::move(service_instance_id),std::move(quantity),std::move(characteristics_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>>* out_characteristics
,
             WebBluetoothResult result,
             base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>> characteristics) {*out_result = std::move(result);*out_characteristics = std::move(characteristics);
            loop->Quit();
          },
          &loop,
          out_result,
          out_characteristics));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicReadValue(
    const std::string& characteristic_instance_id, WebBluetoothResult* out_result, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicReadValue(std::move(characteristic_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             WebBluetoothResult result,
             const base::Optional<std::vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicWriteValue(
    const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicWriteValue(std::move(characteristic_instance_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicStartNotifications(
    const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicStartNotifications(std::move(characteristic_instance_id),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicStopNotifications(
    const std::string& characteristic_instance_id) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicStopNotifications(std::move(characteristic_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteCharacteristicGetDescriptors(
    const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, WebBluetoothResult* out_result, base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors) {
  base::RunLoop loop;
  proxy_->RemoteCharacteristicGetDescriptors(std::move(characteristics_instance_id),std::move(quantity),std::move(descriptor_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>>* out_descriptors
,
             WebBluetoothResult result,
             base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>> descriptors) {*out_result = std::move(result);*out_descriptors = std::move(descriptors);
            loop->Quit();
          },
          &loop,
          out_result,
          out_descriptors));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteDescriptorReadValue(
    const std::string& descriptor_instance_id, WebBluetoothResult* out_result, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->RemoteDescriptorReadValue(std::move(descriptor_instance_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             WebBluetoothResult result,
             const base::Optional<std::vector<uint8_t>>& value) {*out_result = std::move(result);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_result,
          out_value));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RemoteDescriptorWriteValue(
    const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, WebBluetoothResult* out_result) {
  base::RunLoop loop;
  proxy_->RemoteDescriptorWriteValue(std::move(descriptor_instance_id),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             WebBluetoothResult* out_result
,
             WebBluetoothResult result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WebBluetoothServiceAsyncWaiter::RequestScanningStart(
    WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->RequestScanningStart(std::move(client),std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             RequestScanningStartResultPtr* out_result
,
             RequestScanningStartResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void WebBluetoothServerClientInterceptorForTesting::GATTServerDisconnected() {
  GetForwardingInterface()->GATTServerDisconnected();
}
WebBluetoothServerClientAsyncWaiter::WebBluetoothServerClientAsyncWaiter(
    WebBluetoothServerClient* proxy) : proxy_(proxy) {}

WebBluetoothServerClientAsyncWaiter::~WebBluetoothServerClientAsyncWaiter() = default;




void WebBluetoothCharacteristicClientInterceptorForTesting::RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) {
  GetForwardingInterface()->RemoteCharacteristicValueChanged(std::move(value));
}
WebBluetoothCharacteristicClientAsyncWaiter::WebBluetoothCharacteristicClientAsyncWaiter(
    WebBluetoothCharacteristicClient* proxy) : proxy_(proxy) {}

WebBluetoothCharacteristicClientAsyncWaiter::~WebBluetoothCharacteristicClientAsyncWaiter() = default;




void WebBluetoothScanClientInterceptorForTesting::ScanEvent(WebBluetoothScanResultPtr result) {
  GetForwardingInterface()->ScanEvent(std::move(result));
}
WebBluetoothScanClientAsyncWaiter::WebBluetoothScanClientAsyncWaiter(
    WebBluetoothScanClient* proxy) : proxy_(proxy) {}

WebBluetoothScanClientAsyncWaiter::~WebBluetoothScanClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif