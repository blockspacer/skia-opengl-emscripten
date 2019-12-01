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

// Adapted from:
// lbshell/src/platform/linux/posix_emulation/lb_shell/lb_memory_pages_linux.cc

#include "starboard/shared/dlmalloc/page_internal.h"

#include <stdio.h>

//#include <psapi.h>
#include <windows.h>
//#include <psapi.h>          // GetProcessMemoryInfo

#include "starboard/atomic.h"
#include "starboard/common/log.h"
#include "starboard/memory.h"

namespace {

int32_t s_tracked_page_count = 0;

int32_t GetPageCount(size_t byte_count) {
  return static_cast<int32_t>(SbMemoryAlignToPageSize(byte_count) /
                              SB_MEMORY_PAGE_SIZE);
}

// see https://github.com/facebook/folly/blob/master/folly/portability/SysMman.cpp#L26
// see https://github.com/spotify/annoy/blob/master/src/mman.h#L50

int SbMemoryMapFlagsToMmapProtect(int sb_flags) {
  bool flag_set = false;
  int mmap_protect = 0;
#if SB_API_VERSION >= 10
  if (sb_flags == kSbMemoryMapProtectReserved) {
    return PAGE_NOACCESS;
  }
#endif
  if (sb_flags & kSbMemoryMapProtectRead) {
    mmap_protect |= PAGE_READONLY;
    flag_set = true;
  }
  if (sb_flags & kSbMemoryMapProtectWrite) {
    mmap_protect |= PAGE_EXECUTE_READWRITE;
    flag_set = true;
  }
#if SB_CAN(MAP_EXECUTABLE_MEMORY)
  if (sb_flags & kSbMemoryMapProtectExec) {
    mmap_protect |= PAGE_EXECUTE;
    flag_set = true;
  }
#endif
  if (!flag_set) {
    mmap_protect = PAGE_NOACCESS;
  }
/*#if SB_API_VERSION >= 10
  if (sb_flags == kSbMemoryMapProtectReserved) {
    return PROT_NONE;
  }
#endif
  if (sb_flags & kSbMemoryMapProtectRead) {
    mmap_protect |= PROT_READ;
    flag_set = true;
  }
  if (sb_flags & kSbMemoryMapProtectWrite) {
    mmap_protect |= PROT_WRITE;
    flag_set = true;
  }
#if SB_CAN(MAP_EXECUTABLE_MEMORY)
  if (sb_flags & kSbMemoryMapProtectExec) {
    mmap_protect |= PROT_EXEC;
    flag_set = true;
  }
#endif
  if (!flag_set) {
    mmap_protect = PROT_NONE;
  }*/
  return mmap_protect;
}

// see https://github.com/awarde96/TransactionalMemory/blob/74faae93f557bc667f97858c01c02a191c1d93f8/helper.cpp#L161

//
// getPhysicalMemSz
//
UINT64 getPhysicalMemSz() {
#ifdef WIN32
    UINT64 v;
    GetPhysicallyInstalledSystemMemory(&v);                         // returns KB
    return v * 1024;                                                // now bytes
#elif __linux__
    return (UINT64) sysconf(_SC_PHYS_PAGES)* sysconf(_SC_PAGESIZE); // NB: returns bytes
#endif
}

}  // namespace

void* SbPageMap(size_t size_bytes, int flags, const char* /*unused_name*/) {
  void* ret = SbPageMapUntracked(size_bytes, flags, NULL);
  if (ret != SB_MEMORY_MAP_FAILED) {
    SbAtomicNoBarrier_Increment(&s_tracked_page_count,
                                GetPageCount(size_bytes));
  }
  return ret;
}

void* SbPageMapUntracked(size_t size_bytes,
                         int flags,
                         const char* /*unused_name*/) {
/*#if SB_CAN(MAP_EXECUTABLE_MEMORY) && SB_API_VERSION >= 10
  if (flags & kSbMemoryMapProtectExec) {
    // Cobalt does not allow mapping executable memory directly.
    return SB_MEMORY_MAP_FAILED;
  }
#endif
  int mmap_protect = SbMemoryMapFlagsToMmapProtect(flags);
  void* mem = mmap(0, size_bytes, mmap_protect, MAP_PRIVATE | MAP_ANON, -1, 0);
  return mem;*/

  //NOTIMPLEMENTED_LOG_ONCE();
  SB_DLOG(WARNING) << "NOTIMPLEMENTED: SbPageMapUntracked";

  return SB_MEMORY_MAP_FAILED;
}

bool SbPageUnmap(void* ptr, size_t size_bytes) {
  SbAtomicNoBarrier_Increment(&s_tracked_page_count, -GetPageCount(size_bytes));
  return SbPageUnmapUntracked(ptr, size_bytes);
}

// see https://github.com/chromium/chromium/blob/6efa1184771ace08f3e2162b0255c93526d1750d/third_party/abseil-cpp/absl/base/internal/low_level_alloc.cc#L416
bool SbPageUnmapUntracked(void* ptr, size_t size_bytes) {
  //return munmap(ptr, size_bytes) == 0;
  return VirtualFree(ptr, 0, MEM_RELEASE);
}

// see https://github.com/chromium/chromium/blob/9543343ae761598fb97e47b60480a0d173ec3144/base/memory/platform_shared_memory_region_unittest.cc#L273

#if SB_API_VERSION >= 10
bool SbPageProtect(void* virtual_address, int64_t size_bytes, int flags) {
  int mmap_protect = SbMemoryMapFlagsToMmapProtect(flags);
  DWORD old_protection;
  return VirtualProtect(virtual_address, size_bytes, mmap_protect, &old_protection);
}
#endif

size_t SbPageGetTotalPhysicalMemoryBytes() {
  // Limit ourselves to remain similar to more constrained platforms.
  return 1024U * 1024 * 1024;
}

int64_t SbPageGetUnallocatedPhysicalMemoryBytes() {
  // The amount of resident memory, the memory that is in physical RAM
  size_t resident = getPhysicalMemSz();
  return SbPageGetTotalPhysicalMemoryBytes() - resident * SB_MEMORY_PAGE_SIZE;
}

size_t SbPageGetMappedBytes() {
  return static_cast<size_t>(SbAtomicNoBarrier_Load(&s_tracked_page_count) *
                             SB_MEMORY_PAGE_SIZE);
}
