// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 752515785 value is based on sha256(salt + "NetLogExporter1").
constexpr uint32_t kNetLogExporter_Start_Name = 752515785;
// The 1294210848 value is based on sha256(salt + "NetLogExporter2").
constexpr uint32_t kNetLogExporter_Stop_Name = 1294210848;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_SHARED_MESSAGE_IDS_H_