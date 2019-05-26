// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kBlobURLStore_Register_Name = 0;
constexpr uint32_t kBlobURLStore_Revoke_Name = 1;
constexpr uint32_t kBlobURLStore_Resolve_Name = 2;
constexpr uint32_t kBlobURLStore_ResolveAsURLLoaderFactory_Name = 3;
constexpr uint32_t kBlobURLStore_ResolveForNavigation_Name = 4;
constexpr uint32_t kBlobURLToken_Clone_Name = 0;
constexpr uint32_t kBlobURLToken_GetToken_Name = 1;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_SHARED_MESSAGE_IDS_H_