// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 57723398 value is based on sha256(salt + "ProcessMetadata1").
constexpr uint32_t kProcessMetadata_SetPID_Name = 57723398;
// The 601769647 value is based on sha256(salt + "Connector1").
constexpr uint32_t kConnector_BindInterface_Name = 601769647;
// The 1403663133 value is based on sha256(salt + "Connector2").
constexpr uint32_t kConnector_QueryService_Name = 1403663133;
// The 1720315807 value is based on sha256(salt + "Connector3").
constexpr uint32_t kConnector_WarmService_Name = 1720315807;
// The 2020967919 value is based on sha256(salt + "Connector4").
constexpr uint32_t kConnector_RegisterServiceInstance_Name = 2020967919;
// The 1918046950 value is based on sha256(salt + "Connector5").
constexpr uint32_t kConnector_Clone_Name = 1918046950;
// The 770816621 value is based on sha256(salt + "Connector6").
constexpr uint32_t kConnector_FilterInterfaces_Name = 770816621;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_