// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 615811775 value is based on sha256(salt + "CdmProxy1").
constexpr uint32_t kCdmProxy_Initialize_Name = 615811775;
// The 1958766316 value is based on sha256(salt + "CdmProxy2").
constexpr uint32_t kCdmProxy_Process_Name = 1958766316;
// The 545658196 value is based on sha256(salt + "CdmProxy3").
constexpr uint32_t kCdmProxy_CreateMediaCryptoSession_Name = 545658196;
// The 548078991 value is based on sha256(salt + "CdmProxy4").
constexpr uint32_t kCdmProxy_SetKey_Name = 548078991;
// The 1217047737 value is based on sha256(salt + "CdmProxy5").
constexpr uint32_t kCdmProxy_RemoveKey_Name = 1217047737;
// The 180368531 value is based on sha256(salt + "CdmProxyClient1").
constexpr uint32_t kCdmProxyClient_NotifyHardwareReset_Name = 180368531;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_