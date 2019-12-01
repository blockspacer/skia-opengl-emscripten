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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_TRUNCATE_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_TRUNCATE_H_

#include "starboard/file.h"

#include "starboard/shared/win/handle_eintr.h"

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

bool FileTruncate(SbFile file, int64_t length) {
  if (!file || !file->descriptor/*.IsValid()*/ || length < 0) {
    return false;
  }

  //return !HANDLE_EINTR(ftruncate(file->descriptor, length));
  //return file->descriptor.SetLength(length);

  // see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_win.cc#L167
  
  // Get the current file pointer.
  LARGE_INTEGER file_pointer;
  LARGE_INTEGER zero;
  zero.QuadPart = 0;
  if (!::SetFilePointerEx(file->descriptor, zero, &file_pointer, FILE_CURRENT))
    return false;

  LARGE_INTEGER length_li;
  length_li.QuadPart = length;
  // If length > file size, SetFilePointerEx() should extend the file
  // with zeroes on all Windows standard file systems (NTFS, FATxx).
  if (!::SetFilePointerEx(file->descriptor, length_li, NULL, FILE_BEGIN))
    return false;

  // Set the new file length and move the file pointer to its old position.
  // This is consistent with ftruncate()'s behavior, even when the file
  // pointer points to a location beyond the end of the file.
  // TODO(rvargas): Emulating ftruncate details seem suspicious and it is not
  // promised by the interface (nor was promised by PlatformFile). See if this
  // implementation detail can be removed.
  return ((::SetEndOfFile(file->descriptor) != FALSE) &&
          (::SetFilePointerEx(file->descriptor, file_pointer, NULL, FILE_BEGIN) !=
           FALSE));
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_TRUNCATE_H_
