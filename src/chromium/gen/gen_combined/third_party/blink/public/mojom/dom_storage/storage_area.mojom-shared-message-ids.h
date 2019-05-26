// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1182467958 value is based on sha256(salt + "StorageAreaObserver1").
constexpr uint32_t kStorageAreaObserver_KeyAdded_Name = 1182467958;
// The 191117282 value is based on sha256(salt + "StorageAreaObserver2").
constexpr uint32_t kStorageAreaObserver_KeyChanged_Name = 191117282;
// The 198026542 value is based on sha256(salt + "StorageAreaObserver3").
constexpr uint32_t kStorageAreaObserver_KeyDeleted_Name = 198026542;
// The 1567766301 value is based on sha256(salt + "StorageAreaObserver4").
constexpr uint32_t kStorageAreaObserver_AllDeleted_Name = 1567766301;
// The 1072180506 value is based on sha256(salt + "StorageAreaObserver5").
constexpr uint32_t kStorageAreaObserver_ShouldSendOldValueOnMutations_Name = 1072180506;
// The 2098901287 value is based on sha256(salt + "StorageAreaGetAllCallback1").
constexpr uint32_t kStorageAreaGetAllCallback_Complete_Name = 2098901287;
// The 1417244046 value is based on sha256(salt + "StorageArea1").
constexpr uint32_t kStorageArea_AddObserver_Name = 1417244046;
// The 2039388070 value is based on sha256(salt + "StorageArea2").
constexpr uint32_t kStorageArea_Put_Name = 2039388070;
// The 947090676 value is based on sha256(salt + "StorageArea3").
constexpr uint32_t kStorageArea_Delete_Name = 947090676;
// The 169311990 value is based on sha256(salt + "StorageArea4").
constexpr uint32_t kStorageArea_DeleteAll_Name = 169311990;
// The 338693203 value is based on sha256(salt + "StorageArea5").
constexpr uint32_t kStorageArea_Get_Name = 338693203;
// The 127703061 value is based on sha256(salt + "StorageArea6").
constexpr uint32_t kStorageArea_GetAll_Name = 127703061;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_