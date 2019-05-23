// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/nfc_provider.mojom.h"


namespace device {
namespace mojom {


class  NFCProviderInterceptorForTesting : public NFCProvider {
  virtual NFCProvider* GetForwardingInterface() = 0;
  void GetNFCForHost(int32_t host_id, ::device::mojom::NFCRequest nfc) override;
};
class  NFCProviderAsyncWaiter {
 public:
  explicit NFCProviderAsyncWaiter(NFCProvider* proxy);
  ~NFCProviderAsyncWaiter();

 private:
  NFCProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_TEST_UTILS_H_