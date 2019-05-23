// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1087912680 value is based on sha256(salt + "StorageAreaObserver1").
constexpr uint32_t kStorageAreaObserver_KeyAdded_Name = 1087912680;
// The 1877777862 value is based on sha256(salt + "StorageAreaObserver2").
constexpr uint32_t kStorageAreaObserver_KeyChanged_Name = 1877777862;
// The 1886593535 value is based on sha256(salt + "StorageAreaObserver3").
constexpr uint32_t kStorageAreaObserver_KeyDeleted_Name = 1886593535;
// The 449271397 value is based on sha256(salt + "StorageAreaObserver4").
constexpr uint32_t kStorageAreaObserver_AllDeleted_Name = 449271397;
// The 1091802960 value is based on sha256(salt + "StorageAreaObserver5").
constexpr uint32_t kStorageAreaObserver_ShouldSendOldValueOnMutations_Name = 1091802960;
// The 299745848 value is based on sha256(salt + "StorageAreaGetAllCallback1").
constexpr uint32_t kStorageAreaGetAllCallback_Complete_Name = 299745848;
// The 1400666823 value is based on sha256(salt + "StorageArea1").
constexpr uint32_t kStorageArea_AddObserver_Name = 1400666823;
// The 1864207379 value is based on sha256(salt + "StorageArea2").
constexpr uint32_t kStorageArea_Put_Name = 1864207379;
// The 976938343 value is based on sha256(salt + "StorageArea3").
constexpr uint32_t kStorageArea_Delete_Name = 976938343;
// The 1169881874 value is based on sha256(salt + "StorageArea4").
constexpr uint32_t kStorageArea_DeleteAll_Name = 1169881874;
// The 1511985554 value is based on sha256(salt + "StorageArea5").
constexpr uint32_t kStorageArea_Get_Name = 1511985554;
// The 1520890806 value is based on sha256(salt + "StorageArea6").
constexpr uint32_t kStorageArea_GetAll_Name = 1520890806;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_SHARED_MESSAGE_IDS_H_