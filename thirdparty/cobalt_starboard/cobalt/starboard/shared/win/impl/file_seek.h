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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_SEEK_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_SEEK_H_

#include "starboard/file.h"

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

/*#include "base/files/file.h"
#include "base/files/file_enumerator.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/files/scoped_temp_dir.h"
#include "base/strings/utf_string_conversions.h"*/

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <io.h>
#include <stdint.h>

#include <tchar.h>
#include <stdio.h>

namespace starboard {
namespace shared {
namespace win {
namespace impl {

int64_t FileSeek(SbFile file, SbFileWhence whence, int64_t offset) {
  if (!file || !file->descriptor/*.IsValid()*/) {
    return -1;
  }

  /*
  If whence is SEEK_SET, the file offset shall be set to offset bytes.

  If whence is SEEK_CUR, the file offset shall be set to its current location plus offset.

  If whence is SEEK_END, the file offset shall be set to the size of the file plus offset.
  */
  /*return lseek(file->descriptor, static_cast<off_t>(offset),
               static_cast<int>(whence));*/

#if 0
  // see https://github.com/chromium/chromium/blob/ccd149af47315e4c6f2fc45d55be1b271f39062c/base/files/file.h#L202
  return file->descriptor.Seek(
    /*
    // This explicit mapping matches both FILE_ on Windows and SEEK_ on Linux.
    enum Whence {
      FROM_BEGIN   = 0,
      FROM_CURRENT = 1,
      FROM_END     = 2
    };
    */
    // see https://github.com/chromium/chromium/blob/d1c11daad4acf661af37668b2a04148ccca4f9f6/base/files/file.h#L111
    static_cast<base::File::Whence>(static_cast<int>(whence)), 
    static_cast<off_t>(offset)
  );
#endif // 0

  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/files/file_win.cc#L46
  LARGE_INTEGER distance, res;
  distance.QuadPart = static_cast<int64_t>(offset);
  DWORD move_method = static_cast<DWORD>(whence);
  if (!SetFilePointerEx(file->descriptor, distance, &res, move_method))
    return -1;
  return res.QuadPart;
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_SEEK_H_
