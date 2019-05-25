// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1808033039 value is based on sha256(salt + "MdnsResponder1").
constexpr uint32_t kMdnsResponder_CreateNameForAddress_Name = 1808033039;
// The 942021535 value is based on sha256(salt + "MdnsResponder2").
constexpr uint32_t kMdnsResponder_RemoveNameForAddress_Name = 942021535;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_SHARED_MESSAGE_IDS_H_