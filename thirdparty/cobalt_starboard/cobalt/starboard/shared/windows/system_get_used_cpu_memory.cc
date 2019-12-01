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

#include "starboard/system.h"

//#include "base/process/process_metrics.h"

#include <stddef.h>
#include <stdint.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <limits>

#include "starboard/common/log.h"
#include "starboard/common/string.h"
#include "starboard/file.h"

namespace {

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/process/process_metrics.h#L307

// Data about system-wide memory consumption. Values are in KB. Available on
// Windows, Mac, Linux, Android and Chrome OS.
//
// Total memory are available on all platforms that implement
// GetSystemMemoryInfo(). Total/free swap memory are available on all platforms
// except on Mac. Buffers/cached/active_anon/inactive_anon/active_file/
// inactive_file/dirty/reclaimable/pswpin/pswpout/pgmajfault are available on
// Linux/Android/Chrome OS. Shmem/slab/gem_objects/gem_size are Chrome OS only.
// Speculative/file_backed/purgeable are Mac and iOS only.
// Free is absent on Windows (see "avail_phys" below).
struct /*BASE_EXPORT*/ SystemMemoryInfoKB {
  SystemMemoryInfoKB();
  SystemMemoryInfoKB(const SystemMemoryInfoKB& other);

  int total = 0;

  // "This is the amount of physical memory that can be immediately reused
  // without having to write its contents to disk first. It is the sum of the
  // size of the standby, free, and zero lists." (MSDN).
  // Standby: not modified pages of physical ram (file-backed memory) that are
  // not actively being used.
  int avail_phys = 0;

  int swap_total = 0;
  int swap_free = 0;
};

SystemMemoryInfoKB::SystemMemoryInfoKB() = default;

SystemMemoryInfoKB::SystemMemoryInfoKB(const SystemMemoryInfoKB& other) =
    default;

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/process/process_metrics_win.cc

// This function uses the following mapping between MEMORYSTATUSEX and
// SystemMemoryInfoKB:
//   ullTotalPhys ==> total
//   ullAvailPhys ==> avail_phys
//   ullTotalPageFile ==> swap_total
//   ullAvailPageFile ==> swap_free
static bool GetSystemMemoryInfo(SystemMemoryInfoKB* meminfo) {
  MEMORYSTATUSEX mem_status;
  mem_status.dwLength = sizeof(mem_status);
  if (!::GlobalMemoryStatusEx(&mem_status))
    return false;

  meminfo->total = mem_status.ullTotalPhys / 1024;
  meminfo->avail_phys = mem_status.ullAvailPhys / 1024;
  meminfo->swap_total = mem_status.ullTotalPageFile / 1024;
  meminfo->swap_free = mem_status.ullAvailPageFile / 1024;

  return true;
}

} // namespace

// We find the current amount of used memory on Linux by opening
// '/proc/self/status' and scan the file for its "VmRSS" and "VmSwap" entries.
// Essentially, we need to parse a buffer that has the following format:
//
// xxxxxx:       45327 kB
// yyyyyy:          23 kB
// VmRSS:        87432 kB
// zzzzzz:        3213 kB
// VmSwap:          15 kB
// ...
//
// And here, we would want to return the value 87432 * 1024 + 15 * 1024 (i.e.
// (VmRSS + VmSwap) * 1024).
// See http://man7.org/linux/man-pages/man5/proc.5.html for more details.

// Searches for a specific value we're interested in and return it.  Will
// modify |buffer| in order to do so quickly and easily.  Returns the memory
// value in bytes (not kilobytes as it is presented in /proc/self/status).
/*int64_t SearchForMemoryValue(
    const char* search_key, const char* buffer) {
  const char* found = SbStringFindString(buffer, search_key);
  if (!found) {
    SB_LOG(ERROR) << "Could not find '" << search_key << "' in "
                  << "/proc/self/status.";
    return 0;
  }

  while (*found != '\0' && (*found < '0' || *found > '9')) {
    ++found;
  }

  if (*found == '\0') {
    SB_LOG(ERROR) << "Unexpected end of string when searching for '"
                  << search_key << "' in /proc/self/status.";
    return 0;
  }

  // Convert the number string into an integer.
  int64_t memory_value_in_kilobytes = 0;
  while (*found >= '0' && *found <= '9') {
    memory_value_in_kilobytes = memory_value_in_kilobytes * 10 + (*found - '0');
    ++found;
  }

  return memory_value_in_kilobytes * 1024;
}*/

int64_t SbSystemGetUsedCPUMemory() {
  // Read our process' current physical memory usage from /proc/self/status.
  /*starboard::ScopedFile status_file("/proc/self/status",
                                    kSbFileOpenOnly | kSbFileRead);
  if (!status_file.IsValid()) {
    SB_LOG(ERROR)
        << "Error opening /proc/self/status in order to query self memory "
           "usage.";
    return 0;
  }

  // Read the entire file into memory.
  const int kBufferSize = 2048;
  char buffer[kBufferSize];
  int bytes_read = status_file.ReadAll(buffer, kBufferSize);

  // Ensure that this is a null-terminated string.
  if (bytes_read == kBufferSize) {
    bytes_read = kBufferSize - 1;
  }
  buffer[bytes_read] = '\0';

  // Return the result, multiplied by 1024 because it is given in kilobytes.
  return SearchForMemoryValue("VmRSS", buffer) +
         SearchForMemoryValue("VmSwap", buffer);*/
  
  SystemMemoryInfoKB memory_info;
  // This function uses the following mapping between MEMORYSTATUSEX and
  // SystemMemoryInfoKB:
  //   ullTotalPhys ==> total
  //   ullAvailPhys ==> avail_phys
  //   ullTotalPageFile ==> swap_total
  //   ullAvailPageFile ==> swap_free
  if (!GetSystemMemoryInfo(&memory_info)) {
    //NOTIMPLEMENTED_LOG_ONCE();
    SB_DLOG(WARNING) << "NOTIMPLEMENTED: SbSystemGetUsedCPUMemory";
    return 1024;
  }

  // see https://stackoverflow.com/questions/63166/how-to-determine-cpu-and-memory-consumption-from-inside-a-process

  // Return the result, multiplied by 1024 because it is given in kilobytes.
  return 1024 * (memory_info.swap_total + memory_info.swap_free);
}
