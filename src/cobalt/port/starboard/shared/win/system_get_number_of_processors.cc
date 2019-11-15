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

#include "starboard/system.h"

#include "starboard/common/log.h"

#include <windows.h>
typedef void (WINAPI *PGNSI)(LPSYSTEM_INFO);

// see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/v8/src/base/sys-info.cc#L50

int SbSystemGetNumberOfProcessors() {
#if _WIN32_WINNT >= 0x0501
        SYSTEM_INFO sysinfo;
        GetNativeSystemInfo(&sysinfo);
#else
        PGNSI pGNSI;
        SYSTEM_INFO sysinfo;

        /* Call GetNativeSystemInfo if supported or
         * GetSystemInfo otherwise. */

        pGNSI = (PGNSI) GetProcAddress(
                GetModuleHandle(TEXT("kernel32.dll")), "GetNativeSystemInfo");
        if (pGNSI != NULL)
            pGNSI(&sysinfo);
        else
            GetSystemInfo(&sysinfo);
#endif
  long res = sysinfo.dwNumberOfProcessors;  // NOLINT[runtime/int]
  if (res == -1) {
    SB_NOTREACHED();
    return 1;
  }

  return static_cast<int>(res);
}
