// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 727120798 value is based on sha256(salt + "Service1").
constexpr uint32_t kService_OnStart_Name = 727120798;
// The 2110571508 value is based on sha256(salt + "Service2").
constexpr uint32_t kService_OnBindInterface_Name = 2110571508;
// The 949860519 value is based on sha256(salt + "Service3").
constexpr uint32_t kService_CreatePackagedServiceInstance_Name = 949860519;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_