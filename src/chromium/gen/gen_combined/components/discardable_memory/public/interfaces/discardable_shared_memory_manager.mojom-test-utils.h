// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_TEST_UTILS_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_TEST_UTILS_H_

#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom.h"


namespace discardable_memory {
namespace mojom {


class  DiscardableSharedMemoryManagerInterceptorForTesting : public DiscardableSharedMemoryManager {
  virtual DiscardableSharedMemoryManager* GetForwardingInterface() = 0;
  void AllocateLockedDiscardableSharedMemory(uint32_t size, int32_t id, AllocateLockedDiscardableSharedMemoryCallback callback) override;
  void DeletedDiscardableSharedMemory(int32_t id) override;
};
class  DiscardableSharedMemoryManagerAsyncWaiter {
 public:
  explicit DiscardableSharedMemoryManagerAsyncWaiter(DiscardableSharedMemoryManager* proxy);
  ~DiscardableSharedMemoryManagerAsyncWaiter();
  void AllocateLockedDiscardableSharedMemory(
      uint32_t size, int32_t id, base::UnsafeSharedMemoryRegion* out_region);

 private:
  DiscardableSharedMemoryManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DiscardableSharedMemoryManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace discardable_memory

#endif  // COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_TEST_UTILS_H_