// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class HashAlgorithm : int32_t;

enum class SignatureAlgorithm : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_HashAlgorithm_DataHashFn;

template <>
struct DefaultHash<::network::mojom::HashAlgorithm> {
  using Hash = network_mojom_internal_HashAlgorithm_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_SignatureAlgorithm_DataHashFn;

template <>
struct DefaultHash<::network::mojom::SignatureAlgorithm> {
  using Hash = network_mojom_internal_SignatureAlgorithm_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using HashAlgorithm = HashAlgorithm;  // Alias for definition in the parent namespace.
using SignatureAlgorithm = SignatureAlgorithm;  // Alias for definition in the parent namespace.
class DigitallySigned;
using DigitallySignedPtr = mojo::StructPtr<DigitallySigned>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_BLINK_FORWARD_H_