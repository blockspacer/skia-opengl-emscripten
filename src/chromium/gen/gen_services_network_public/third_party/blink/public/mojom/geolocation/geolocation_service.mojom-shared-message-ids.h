// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1233758852 value is based on sha256(salt + "GeolocationService1").
constexpr uint32_t kGeolocationService_CreateGeolocation_Name = 1233758852;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_