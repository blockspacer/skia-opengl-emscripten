// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "components/discardable_memory/public/interfaces/discardable_shared_memory_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"


#ifndef COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_JUMBO_H_
#define COMPONENTS_DISCARDABLE_MEMORY_PUBLIC_INTERFACES_DISCARDABLE_SHARED_MEMORY_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif


namespace discardable_memory {
namespace mojom {


void DiscardableSharedMemoryManagerInterceptorForTesting::AllocateLockedDiscardableSharedMemory(uint32_t size, int32_t id, AllocateLockedDiscardableSharedMemoryCallback callback) {
  GetForwardingInterface()->AllocateLockedDiscardableSharedMemory(std::move(size), std::move(id), std::move(callback));
}
void DiscardableSharedMemoryManagerInterceptorForTesting::DeletedDiscardableSharedMemory(int32_t id) {
  GetForwardingInterface()->DeletedDiscardableSharedMemory(std::move(id));
}
DiscardableSharedMemoryManagerAsyncWaiter::DiscardableSharedMemoryManagerAsyncWaiter(
    DiscardableSharedMemoryManager* proxy) : proxy_(proxy) {}

DiscardableSharedMemoryManagerAsyncWaiter::~DiscardableSharedMemoryManagerAsyncWaiter() = default;

void DiscardableSharedMemoryManagerAsyncWaiter::AllocateLockedDiscardableSharedMemory(
    uint32_t size, int32_t id, base::UnsafeSharedMemoryRegion* out_region) {
  base::RunLoop loop;
  proxy_->AllocateLockedDiscardableSharedMemory(std::move(size),std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnsafeSharedMemoryRegion* out_region
,
             base::UnsafeSharedMemoryRegion region) {*out_region = std::move(region);
            loop->Quit();
          },
          &loop,
          out_region));
  loop.Run();
}





}  // namespace mojom
}  // namespace discardable_memory

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif