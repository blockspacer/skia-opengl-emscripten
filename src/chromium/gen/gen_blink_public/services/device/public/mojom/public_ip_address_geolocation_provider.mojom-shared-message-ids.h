// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 1511381600 value is based on sha256(salt + "PublicIpAddressGeolocationProvider1").
constexpr uint32_t kPublicIpAddressGeolocationProvider_CreateGeolocation_Name = 1511381600;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_SHARED_MESSAGE_IDS_H_