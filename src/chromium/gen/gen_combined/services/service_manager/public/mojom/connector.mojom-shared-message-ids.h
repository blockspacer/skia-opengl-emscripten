// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace service_manager {
namespace mojom {

namespace internal {


// The 309788441 value is based on sha256(salt + "ProcessMetadata1").
constexpr uint32_t kProcessMetadata_SetPID_Name = 309788441;
// The 204317311 value is based on sha256(salt + "Connector1").
constexpr uint32_t kConnector_BindInterface_Name = 204317311;
// The 885907576 value is based on sha256(salt + "Connector2").
constexpr uint32_t kConnector_QueryService_Name = 885907576;
// The 2111165266 value is based on sha256(salt + "Connector3").
constexpr uint32_t kConnector_WarmService_Name = 2111165266;
// The 414813836 value is based on sha256(salt + "Connector4").
constexpr uint32_t kConnector_RegisterServiceInstance_Name = 414813836;
// The 1315001585 value is based on sha256(salt + "Connector5").
constexpr uint32_t kConnector_Clone_Name = 1315001585;
// The 1798337794 value is based on sha256(salt + "Connector6").
constexpr uint32_t kConnector_FilterInterfaces_Name = 1798337794;

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_MESSAGE_IDS_H_