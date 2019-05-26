// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class CorsPreflightPolicy : int32_t;

enum class CorsError : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_CorsPreflightPolicy_DataHashFn;

template <>
struct DefaultHash<::network::mojom::CorsPreflightPolicy> {
  using Hash = network_mojom_internal_CorsPreflightPolicy_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_CorsError_DataHashFn;

template <>
struct DefaultHash<::network::mojom::CorsError> {
  using Hash = network_mojom_internal_CorsError_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using CorsPreflightPolicy = CorsPreflightPolicy;  // Alias for definition in the parent namespace.
using CorsError = CorsError;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_MOJOM_BLINK_FORWARD_H_