// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

//#include "base/metrics/persistent_memory_allocator.h"

#include <windows.h>
#include "winbase.h"

#include <iomanip>

/*#if SB_IS(ARCH_MIPS)
#include <sys/cachectl.h>
#endif*/

#include "starboard/common/log.h"

#if !SB_CAN(MAP_EXECUTABLE_MEMORY)
#error "You shouldn't implement SbMemoryFlush unless you can map " \
       "memory pages as executable"
#endif

// see https://github.com/chromium/chromium/blob/6efa1184771ace08f3e2162b0255c93526d1750d/base/metrics/persistent_memory_allocator.cc#L1118

void SbMemoryFlush(void* virtual_address, int64_t size_bytes) {
  char* memory = reinterpret_cast<char*>(virtual_address);

  // TODO

  SB_DLOG(WARNING) << "NOTIMPLEMENTED: SbMemoryFlush";

  BOOL success = ::FlushViewOfFile(virtual_address, size_bytes);
  SB_DCHECK(success);

/*#if !SB_IS(ARCH_ARM) && !SB_IS(ARCH_MIPS)
  int result = msync(memory, size_bytes, MS_SYNC);
  SB_DCHECK(result == 0) << "msync failed: 0x" << std::hex << result << " ("
                         << std::dec << result << "d)";
#endif

#if SB_IS(ARCH_MIPS)
  _flush_cache(reinterpret_cast<char*>(memory), (size_t)size_bytes, BCACHE);
  return;
#endif

#if !defined(__has_builtin)
#define __has_builtin(a) (0)
#endif

#if __has_builtin(__builtin___clear_cache)
  __builtin___clear_cache(memory, memory + size_bytes);
#elif defined(__clear_cache)
  __clear_cache(memory, memory + size_bytes);
#endif*/
}
