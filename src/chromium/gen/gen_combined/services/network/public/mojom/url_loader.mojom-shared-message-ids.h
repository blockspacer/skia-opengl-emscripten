// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 923358984 value is based on sha256(salt + "URLLoader1").
constexpr uint32_t kURLLoader_FollowRedirect_Name = 923358984;
// The 456245495 value is based on sha256(salt + "URLLoader2").
constexpr uint32_t kURLLoader_ProceedWithResponse_Name = 456245495;
// The 1846136492 value is based on sha256(salt + "URLLoader3").
constexpr uint32_t kURLLoader_SetPriority_Name = 1846136492;
// The 1950727505 value is based on sha256(salt + "URLLoader4").
constexpr uint32_t kURLLoader_PauseReadingBodyFromNet_Name = 1950727505;
// The 699449914 value is based on sha256(salt + "URLLoader5").
constexpr uint32_t kURLLoader_ResumeReadingBodyFromNet_Name = 699449914;
// The 2104517947 value is based on sha256(salt + "URLLoaderClient1").
constexpr uint32_t kURLLoaderClient_OnReceiveResponse_Name = 2104517947;
// The 30191214 value is based on sha256(salt + "URLLoaderClient2").
constexpr uint32_t kURLLoaderClient_OnReceiveRedirect_Name = 30191214;
// The 172820647 value is based on sha256(salt + "URLLoaderClient3").
constexpr uint32_t kURLLoaderClient_OnUploadProgress_Name = 172820647;
// The 2513548 value is based on sha256(salt + "URLLoaderClient4").
constexpr uint32_t kURLLoaderClient_OnReceiveCachedMetadata_Name = 2513548;
// The 234109455 value is based on sha256(salt + "URLLoaderClient5").
constexpr uint32_t kURLLoaderClient_OnTransferSizeUpdated_Name = 234109455;
// The 1925459383 value is based on sha256(salt + "URLLoaderClient6").
constexpr uint32_t kURLLoaderClient_OnStartLoadingResponseBody_Name = 1925459383;
// The 1007641526 value is based on sha256(salt + "URLLoaderClient7").
constexpr uint32_t kURLLoaderClient_OnComplete_Name = 1007641526;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_