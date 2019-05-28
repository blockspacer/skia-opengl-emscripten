// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 636900770 value is based on sha256(salt + "URLLoader1").
constexpr uint32_t kURLLoader_FollowRedirect_Name = 636900770;
// The 652163815 value is based on sha256(salt + "URLLoader2").
constexpr uint32_t kURLLoader_ProceedWithResponse_Name = 652163815;
// The 63306031 value is based on sha256(salt + "URLLoader3").
constexpr uint32_t kURLLoader_SetPriority_Name = 63306031;
// The 675787749 value is based on sha256(salt + "URLLoader4").
constexpr uint32_t kURLLoader_PauseReadingBodyFromNet_Name = 675787749;
// The 101304651 value is based on sha256(salt + "URLLoader5").
constexpr uint32_t kURLLoader_ResumeReadingBodyFromNet_Name = 101304651;
// The 1748629472 value is based on sha256(salt + "URLLoaderClient1").
constexpr uint32_t kURLLoaderClient_OnReceiveResponse_Name = 1748629472;
// The 313133445 value is based on sha256(salt + "URLLoaderClient2").
constexpr uint32_t kURLLoaderClient_OnReceiveRedirect_Name = 313133445;
// The 181554567 value is based on sha256(salt + "URLLoaderClient3").
constexpr uint32_t kURLLoaderClient_OnUploadProgress_Name = 181554567;
// The 767954025 value is based on sha256(salt + "URLLoaderClient4").
constexpr uint32_t kURLLoaderClient_OnReceiveCachedMetadata_Name = 767954025;
// The 1390996044 value is based on sha256(salt + "URLLoaderClient5").
constexpr uint32_t kURLLoaderClient_OnTransferSizeUpdated_Name = 1390996044;
// The 545694366 value is based on sha256(salt + "URLLoaderClient6").
constexpr uint32_t kURLLoaderClient_OnStartLoadingResponseBody_Name = 545694366;
// The 1112247624 value is based on sha256(salt + "URLLoaderClient7").
constexpr uint32_t kURLLoaderClient_OnComplete_Name = 1112247624;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_MESSAGE_IDS_H_