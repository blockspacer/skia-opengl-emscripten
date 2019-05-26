// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class ProxyRulesType : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_ProxyRulesType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::ProxyRulesType> {
  using Hash = network_mojom_internal_ProxyRulesType_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using ProxyRulesType = ProxyRulesType;  // Alias for definition in the parent namespace.
class ProxyBypassRules;
using ProxyBypassRulesPtr = mojo::StructPtr<ProxyBypassRules>;

class ProxyList;
using ProxyListPtr = mojo::StructPtr<ProxyList>;

class ProxyRules;
using ProxyRulesPtr = mojo::StructPtr<ProxyRules>;

class ProxyConfig;
using ProxyConfigPtr = mojo::StructPtr<ProxyConfig>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_BLINK_FORWARD_H_