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


#include "services/device/public/mojom/nfc_provider.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/device/public/mojom/nfc.mojom.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_PROVIDER_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void NFCProviderInterceptorForTesting::GetNFCForHost(int32_t host_id, ::device::mojom::NFCRequest nfc) {
  GetForwardingInterface()->GetNFCForHost(std::move(host_id), std::move(nfc));
}
NFCProviderAsyncWaiter::NFCProviderAsyncWaiter(
    NFCProvider* proxy) : proxy_(proxy) {}

NFCProviderAsyncWaiter::~NFCProviderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif