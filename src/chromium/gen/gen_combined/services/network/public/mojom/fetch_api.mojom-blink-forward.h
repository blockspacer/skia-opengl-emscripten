// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class FetchRequestMode : int32_t;

enum class FetchRedirectMode : int32_t;

enum class FetchCredentialsMode : int32_t;

enum class FetchResponseType : int32_t;

enum class FetchResponseSource : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_FetchRequestMode_DataHashFn;

template <>
struct DefaultHash<::network::mojom::FetchRequestMode> {
  using Hash = network_mojom_internal_FetchRequestMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_FetchRedirectMode_DataHashFn;

template <>
struct DefaultHash<::network::mojom::FetchRedirectMode> {
  using Hash = network_mojom_internal_FetchRedirectMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_FetchCredentialsMode_DataHashFn;

template <>
struct DefaultHash<::network::mojom::FetchCredentialsMode> {
  using Hash = network_mojom_internal_FetchCredentialsMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_FetchResponseType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::FetchResponseType> {
  using Hash = network_mojom_internal_FetchResponseType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_FetchResponseSource_DataHashFn;

template <>
struct DefaultHash<::network::mojom::FetchResponseSource> {
  using Hash = network_mojom_internal_FetchResponseSource_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using FetchRequestMode = FetchRequestMode;  // Alias for definition in the parent namespace.
using FetchRedirectMode = FetchRedirectMode;  // Alias for definition in the parent namespace.
using FetchCredentialsMode = FetchCredentialsMode;  // Alias for definition in the parent namespace.
using FetchResponseType = FetchResponseType;  // Alias for definition in the parent namespace.
using FetchResponseSource = FetchResponseSource;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_FETCH_API_MOJOM_BLINK_FORWARD_H_