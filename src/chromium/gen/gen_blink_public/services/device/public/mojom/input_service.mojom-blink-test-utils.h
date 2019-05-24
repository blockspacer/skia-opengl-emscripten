// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/input_service.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT InputDeviceManagerClientInterceptorForTesting : public InputDeviceManagerClient {
  virtual InputDeviceManagerClient* GetForwardingInterface() = 0;
  void InputDeviceAdded(InputDeviceInfoPtr device_info) override;
  void InputDeviceRemoved(const WTF::String& id) override;
};
class BLINK_PLATFORM_EXPORT InputDeviceManagerClientAsyncWaiter {
 public:
  explicit InputDeviceManagerClientAsyncWaiter(InputDeviceManagerClient* proxy);
  ~InputDeviceManagerClientAsyncWaiter();

 private:
  InputDeviceManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManagerClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT InputDeviceManagerInterceptorForTesting : public InputDeviceManager {
  virtual InputDeviceManager* GetForwardingInterface() = 0;
  void GetDevicesAndSetClient(InputDeviceManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) override;
  void GetDevices(GetDevicesCallback callback) override;
};
class BLINK_PLATFORM_EXPORT InputDeviceManagerAsyncWaiter {
 public:
  explicit InputDeviceManagerAsyncWaiter(InputDeviceManager* proxy);
  ~InputDeviceManagerAsyncWaiter();
  void GetDevicesAndSetClient(
      InputDeviceManagerClientAssociatedPtrInfo client, WTF::Vector<InputDeviceInfoPtr>* out_devices);
  void GetDevices(
      WTF::Vector<InputDeviceInfoPtr>* out_devices);

 private:
  InputDeviceManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InputDeviceManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_