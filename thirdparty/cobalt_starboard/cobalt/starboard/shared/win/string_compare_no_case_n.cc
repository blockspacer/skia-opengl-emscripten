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

#include "starboard/common/string.h"

#include <string.h>  // Non-standard, required for some platforms.

#include <locale.h>
#include <stdlib.h>

// see https://github.com/chromium/chromium/blob/2ca8c5037021c9d2ecc00b787d58a31ed8fc8bcb/third_party/libusb/src/libusb/strerror.c#L29

#if defined(_MSC_VER)
#define strncasecmp _strnicmp
#endif

int SbStringCompareNoCaseN(const char* string1,
                           const char* string2,
                           size_t count) {
  return ::strncasecmp(string1, string2, count);
}
