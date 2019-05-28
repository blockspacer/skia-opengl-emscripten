// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 357291492 value is based on sha256(salt + "URLLoaderFactory1").
constexpr uint32_t kURLLoaderFactory_CreateLoaderAndStart_Name = 357291492;
// The 1048497067 value is based on sha256(salt + "URLLoaderFactory2").
constexpr uint32_t kURLLoaderFactory_Clone_Name = 1048497067;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_