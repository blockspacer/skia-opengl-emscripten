// Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

// Adapted from base/platform_file_posix.cc

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_CLOSE_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_CLOSE_H_

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <io.h>
#include <stdint.h>

#include "starboard/file.h"

#include "starboard/shared/win/handle_eintr.h"

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

namespace starboard {
namespace shared {
namespace win {
namespace impl {

bool FileClose(SbFile file) {
  if (!file || !file->descriptor) {
    return false;
  }

  // todo: SetPlatformFile
  // see https://github.com/chromium/chromium/blob/96ec251e2ff8f9fc5cd3e98ba87fe094b215fa9c/base/files/file_win.cc#L445

  bool result = false;

  /*if (file->descriptor >= 0) {
    result = !HANDLE_EINTR(close(file->descriptor));
  }*/

  /*if (file->descriptor.IsValid()) {
    file->descriptor.Close();
    result = true;
  }*/

  // see https://github.com/chromium/chromium/blob/2ca8c5037021c9d2ecc00b787d58a31ed8fc8bcb/base/win/scoped_handle.cc#L15
  ::CloseHandle(file->descriptor);

  delete file;

  return result;
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_CLOSE_H_
