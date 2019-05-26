// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/network_interface.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
using P2PHostAndIPEndPoint_Data = mojo::native::internal::NativeStruct_Data;
using P2PPacketInfo_Data = mojo::native::internal::NativeStruct_Data;
using P2PPortRange_Data = mojo::native::internal::NativeStruct_Data;
using P2PSendPacketMetrics_Data = mojo::native::internal::NativeStruct_Data;
using P2PSocketType_Data =
    mojo::internal::NativeEnum_Data;
using P2PSocketOption_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_SHARED_INTERNAL_H_