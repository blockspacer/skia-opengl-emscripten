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

#include "starboard/common/log.h"

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <io.h>

// see https://github.com/chromium/chromium/blob/ccd149af47315e4c6f2fc45d55be1b271f39062c/base/logging.cc#L24
#include <windows.h>
// Windows warns on using write().  It prefers _write().
#define write(fd, buf, count) _write(fd, buf, static_cast<unsigned int>(count))
// Windows doesn't define STDERR_FILENO.  Define it here.
#define STDERR_FILENO 2

#include "starboard/shared/win/handle_eintr.h"

void SbLogRaw(const char* message) {
  // Cribbed from base/logging.cc's RawLog() function.
  size_t bytes_written = 0;
  const size_t message_len = strlen(message);
  while (bytes_written < message_len) {
    int retval = HANDLE_EINTR(write(STDERR_FILENO, message + bytes_written,
                                    message_len - bytes_written));
    if (retval < 0) {
      // Give up, nothing we can do now.
      break;
    }
    bytes_written += retval;
  }
}
