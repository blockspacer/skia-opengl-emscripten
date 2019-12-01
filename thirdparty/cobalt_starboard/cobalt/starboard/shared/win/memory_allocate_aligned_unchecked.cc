// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "starboard/memory.h"

#include "starboard/common/log.h"

//#include "base/memory/aligned_memory.h"

#include <stddef.h>
#include <stdint.h>

#include <type_traits>
#include <malloc.h>
#include <stdlib.h>

void* SbMemoryAllocateAlignedUnchecked(size_t alignment, size_t size) {
  // based on base::AlignedAlloc(alignment, size);
  // see https://github.com/chromium/chromium/blob/2ca8c5037021c9d2ecc00b787d58a31ed8fc8bcb/base/memory/aligned_memory.cc#L16
  SB_DCHECK(size >= 0U);
  SB_DCHECK(alignment & (alignment - 1) == 0U);
  SB_DCHECK(alignment % sizeof(void*) == 0U);
  void* ptr = nullptr;
  ptr = _aligned_malloc(size, alignment);

  // Since aligned allocations may fail for non-memory related reasons, force a
  // crash if we encounter a failed allocation; maintaining consistent behavior
  // with a normal allocation failure in Chrome.
  if (!ptr) {
    SB_DLOG(ERROR) << "If you crashed here, your aligned allocation is incorrect: "
                << "size=" << size << ", alignment=" << alignment;
    SB_CHECK(false);
  }
  // Sanity check alignment just to be safe.
  SB_DCHECK(reinterpret_cast<uintptr_t>(ptr) & (alignment - 1) == 0U);
  return ptr;
}
