// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 814097840 value is based on sha256(salt + "CdmProxy1").
constexpr uint32_t kCdmProxy_Initialize_Name = 814097840;
// The 770287185 value is based on sha256(salt + "CdmProxy2").
constexpr uint32_t kCdmProxy_Process_Name = 770287185;
// The 189028641 value is based on sha256(salt + "CdmProxy3").
constexpr uint32_t kCdmProxy_CreateMediaCryptoSession_Name = 189028641;
// The 1427246356 value is based on sha256(salt + "CdmProxy4").
constexpr uint32_t kCdmProxy_SetKey_Name = 1427246356;
// The 187969910 value is based on sha256(salt + "CdmProxy5").
constexpr uint32_t kCdmProxy_RemoveKey_Name = 187969910;
// The 650193591 value is based on sha256(salt + "CdmProxyClient1").
constexpr uint32_t kCdmProxyClient_NotifyHardwareReset_Name = 650193591;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_