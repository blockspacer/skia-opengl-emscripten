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

#include "starboard/shared/win/set_non_blocking_internal.h"

#include <fcntl.h>

#define _WINSOCKAPI_    // stops windows.h including winsock.h
#include <windows.h>
#include <io.h>
#include <psapi.h>
#include <shellapi.h>
#include <shlobj.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>
#include <winsock2.h>

// see https://stackoverflow.com/a/1549344

/** Returns true on success, or false if there was an error */
/*bool SetSocketBlockingEnabled(int fd, bool blocking)
{
   if (fd < 0) return false;

#ifdef _WIN32
   unsigned long mode = blocking ? 0 : 1;
   return (ioctlsocket(fd, FIONBIO, &mode) == 0) ? true : false;
#else
   int flags = fcntl(fd, F_GETFL, 0);
   if (flags == -1) return false;
   flags = blocking ? (flags & ~O_NONBLOCK) : (flags | O_NONBLOCK);
   return (fcntl(fd, F_SETFL, flags) == 0) ? true : false;
#endif
}*/

// see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_util_win.cc#L927

bool SetNonBlocking(int fd) {
  unsigned long nonblocking = 1;
  if (ioctlsocket(fd, FIONBIO, &nonblocking) == 0)
    return true;
  return false;
}

namespace starboard {
namespace shared {
namespace win {

bool SetNonBlocking(int socket_fd) {
  /*int flags = fcntl(socket_fd, F_GETFL, 0);
  return !(flags < 0 || fcntl(socket_fd, F_SETFL, flags | O_NONBLOCK) == -1);*/
  return SetNonBlocking(socket_fd);
}

}  // namespace win
}  // namespace shared
}  // namespace starboard
