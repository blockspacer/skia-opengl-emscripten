// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_
#define IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace IPC {
namespace mojom {

namespace internal {


// The 72287398 value is based on sha256(salt + "Channel1").
constexpr uint32_t kChannel_SetPeerPid_Name = 72287398;
// The 1852516507 value is based on sha256(salt + "Channel2").
constexpr uint32_t kChannel_Receive_Name = 1852516507;
// The 1206765191 value is based on sha256(salt + "Channel3").
constexpr uint32_t kChannel_GetAssociatedInterface_Name = 1206765191;

}  // namespace internal
}  // namespace mojom
}  // namespace IPC

#endif  // IPC_IPC_MOJOM_SHARED_MESSAGE_IDS_H_