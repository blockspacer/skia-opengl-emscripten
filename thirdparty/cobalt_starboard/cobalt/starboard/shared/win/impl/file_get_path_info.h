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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_GET_PATH_INFO_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_GET_PATH_INFO_H_

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include "starboard/file.h"

#include "starboard/shared/win/time_internal.h"

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

/*#include "base/files/file.h"
#include "base/files/file_enumerator.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/files/scoped_temp_dir.h"
#include "base/strings/utf_string_conversions.h"*/

#include <Windows.h>
#include <mmsystem.h>
#include <stdint.h>

#include <io.h>

#include <tchar.h>
#include <stdio.h>

#include <string.h>

#include <type_traits>
#include <limits>

#include <codecvt> /// \note for UTF-8 
#include <locale>
#include <string>

namespace starboard {
namespace shared {
namespace win {
namespace impl {

// TODO: repeated code 
static std::wstring utf8_to_wstring(const std::string& str) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.from_bytes(str);
}

// TODO: move bit_cast away
template <class Dest, class Source>
inline Dest bit_cast(const Source& source) {
  static_assert(sizeof(Dest) == sizeof(Source),
                "bit_cast requires source and destination to be the same size");
  /*static_assert(base::is_trivially_copyable<Dest>::value,
                "bit_cast requires the destination type to be copyable");
  static_assert(base::is_trivially_copyable<Source>::value,
                "bit_cast requires the source type to be copyable");*/

  Dest dest;
  memcpy(&dest, &source, sizeof(dest));
  return dest;
}

bool FileGetPathInfo(const char* path, SbFileInfo* out_info) {
  if (!path || path[0] == '\0' || !out_info) {
    return false;
  }
  
  /*base::FilePath file_path;
  file_path = file_path.Append(base::UTF8ToUTF16(path));*/

  /*struct stat file_info;
  int result = stat(path, &file_info);
  if (result) {
    return false;
  }

  // FromTimeT - Converts a time_t (relative to POSIX epoch) into microseconds since the
  // Windows epoch (1601).

  out_info->creation_time = FromTimeT(file_info.st_ctime);
  out_info->is_directory = S_ISDIR(file_info.st_mode);
  out_info->is_symbolic_link = S_ISLNK(file_info.st_mode);
  out_info->last_accessed = FromTimeT(file_info.st_atime);
  out_info->last_modified = FromTimeT(file_info.st_mtime);
  out_info->size = file_info.st_size;*/

  /*base::File file(file_path, base::File::FLAG_OPEN | base::File::FLAG_READ);

  // see https://github.com/chromium/chromium/blob/ccd149af47315e4c6f2fc45d55be1b271f39062c/base/files/file.h#L122
  base::File::Info info;
  file.GetInfo(&info);*/

  /*HANDLE file = CreateFile(path, GENERIC_WRITE, 0, NULL, CREATE_NEW,
                         FILE_ATTRIBUTE_NORMAL, NULL);*/
  WIN32_FIND_DATA FindFileData;
  HANDLE file = ::FindFirstFile(utf8_to_wstring(path).c_str(), &FindFileData) ;
  if (file == INVALID_HANDLE_VALUE)
    return false;

  // see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_win.cc#L210
  BY_HANDLE_FILE_INFORMATION file_info;
  if (!GetFileInformationByHandle(file, &file_info))
    return false;

  // TODO: move FromFileTime away
  auto FromFileTime = [](FILETIME ft) {
    // From MSDN, FILETIME "Contains a 64-bit value representing the number of
    // 100-nanosecond intervals since January 1, 1601 (UTC)."
    auto FileTimeToMicroseconds = [](const FILETIME& ft) {
      // Need to bit_cast to fix alignment, then divide by 10 to convert
      // 100-nanoseconds to microseconds. This only works on little-endian
      // machines.
      return bit_cast<int64_t, FILETIME>(ft) / 10; // int64_t 
    };

    if (bit_cast<int64_t, FILETIME>(ft) == 0)
      return SbTime();
    if (ft.dwHighDateTime == std::numeric_limits<DWORD>::max() &&
        ft.dwLowDateTime == std::numeric_limits<DWORD>::max())
      return SbTime(ft.dwHighDateTime);
    return SbTime(FileTimeToMicroseconds(ft));
  };

  LARGE_INTEGER size;
  size.HighPart = file_info.nFileSizeHigh;
  size.LowPart = file_info.nFileSizeLow;
  out_info->size = size.QuadPart;
  out_info->is_directory =
      (file_info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
  out_info->is_symbolic_link = false;  // Windows doesn't have symbolic links.
  out_info->last_modified = FromFileTime(file_info.ftLastWriteTime)/*.ToDoubleT()*/;
  out_info->last_accessed = FromFileTime(file_info.ftLastAccessTime)/*.ToDoubleT()*/;
  out_info->creation_time = FromFileTime(file_info.ftCreationTime)/*.ToDoubleT()*/;

  return true;
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_GET_PATH_INFO_H_
