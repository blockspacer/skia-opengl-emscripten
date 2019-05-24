// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/nfc_provider.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT NFCProviderInterceptorForTesting : public NFCProvider {
  virtual NFCProvider* GetForwardingInterface() = 0;
  void GetNFCForHost(int32_t host_id, ::device::mojom::blink::NFCRequest nfc) override;
};
class BLINK_PLATFORM_EXPORT NFCProviderAsyncWaiter {
 public:
  explicit NFCProviderAsyncWaiter(NFCProvider* proxy);
  ~NFCProviderAsyncWaiter();

 private:
  NFCProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_