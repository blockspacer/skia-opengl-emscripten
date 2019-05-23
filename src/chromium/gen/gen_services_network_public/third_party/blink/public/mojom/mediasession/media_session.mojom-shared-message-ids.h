// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kMediaSessionClient_DidReceiveAction_Name = 0;
constexpr uint32_t kMediaSessionService_SetClient_Name = 0;
constexpr uint32_t kMediaSessionService_SetPlaybackState_Name = 1;
constexpr uint32_t kMediaSessionService_SetMetadata_Name = 2;
constexpr uint32_t kMediaSessionService_EnableAction_Name = 3;
constexpr uint32_t kMediaSessionService_DisableAction_Name = 4;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_