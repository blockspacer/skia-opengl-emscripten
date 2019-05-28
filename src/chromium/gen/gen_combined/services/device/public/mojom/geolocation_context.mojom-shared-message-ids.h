// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace device {
namespace mojom {

namespace internal {


// The 202897015 value is based on sha256(salt + "GeolocationContext1").
constexpr uint32_t kGeolocationContext_BindGeolocation_Name = 202897015;
// The 846944582 value is based on sha256(salt + "GeolocationContext2").
constexpr uint32_t kGeolocationContext_SetOverride_Name = 846944582;
// The 778528345 value is based on sha256(salt + "GeolocationContext3").
constexpr uint32_t kGeolocationContext_ClearOverride_Name = 778528345;

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_SHARED_MESSAGE_IDS_H_