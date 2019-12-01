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

//#include "base/system/sys_info.h"

#include "starboard/system.h"

#include "starboard/common/log.h"

#include <stddef.h>
#include <stdint.h>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <limits>

static int64_t AmountOfMemory(DWORDLONG MEMORYSTATUSEX::*memory_field) {
  MEMORYSTATUSEX memory_info;
  memory_info.dwLength = sizeof(memory_info);
  if (!GlobalMemoryStatusEx(&memory_info)) {

    // TODO !!! NOTREACHED();

    return 0;
  }

  int64_t rv = static_cast<int64_t>(memory_info.*memory_field);
  return rv < 0 ? std::numeric_limits<int64_t>::max() : rv;
}

int64_t SbSystemGetTotalCPUMemory() {
  /*long pages = sysconf(_SC_PHYS_PAGES);     // NOLINT[runtime/int]
  long page_size = sysconf(_SC_PAGE_SIZE);  // NOLINT[runtime/int]
  if (pages == -1 || page_size == -1) {
    SB_NOTREACHED();
    return 0;
  }

  return static_cast<int64_t>(pages) * page_size;*/

  // based on base::SysInfo::AmountOfPhysicalMemory()
  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/system/sys_info_win.cc#L70
  return AmountOfMemory(&MEMORYSTATUSEX::ullTotalPhys);
}
