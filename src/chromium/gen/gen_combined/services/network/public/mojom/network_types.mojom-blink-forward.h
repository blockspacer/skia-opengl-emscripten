// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_TYPES_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_TYPES_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
using EffectiveConnectionType = mojo::NativeEnum;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"


namespace network {
namespace mojom {
namespace blink {
using EffectiveConnectionType = EffectiveConnectionType;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_TYPES_MOJOM_BLINK_FORWARD_H_