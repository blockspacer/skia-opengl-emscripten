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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_GET_INFO_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_GET_INFO_H_

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
#include <stdint.h>

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

void RemoveTrailingSeparators(std::string* path) {
  size_t found = path->find_last_not_of('/');
  if (found != std::string::npos) {
    path->resize(found + 1);
  } else {
    path->resize(1);
  }
}

// see https://github.com/chromium/chromium/blob/d1c11daad4acf661af37668b2a04148ccca4f9f6/base/files/file.h#L117

// Used to hold information about a given file.
// If you add more fields to this structure (platform-specific fields are OK),
// make sure to update all functions that use it in file_util_{win|posix}.cc,
// too, and the ParamTraits<base::File::Info> implementation in
// ipc/ipc_message_utils.cc.
/*struct BASE_EXPORT Info {
  Info();
  ~Info();

  // The size of the file in bytes.  Undefined when is_directory is true.
  int64_t size;

  // True if the file corresponds to a directory.
  bool is_directory;

  // True if the file corresponds to a symbolic link.  For Windows currently
  // not supported and thus always false.
  bool is_symbolic_link;

  // The last modified time of a file.
  Time last_modified;

  // The last accessed time of a file.
  Time last_accessed;

  // The creation time of a file.
  Time creation_time;
};*/

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

bool FileGetInfo(SbFile file, SbFileInfo* out_info) {
  /*if (!file || file->descriptor < 0 || !out_info) {
    return false;
  }*/

  /*struct stat stat;
  int result = fstat(file->descriptor, &stat);
  if (result) {
    return false;
  }

  // FromTimeT - Converts a time_t (relative to POSIX epoch) into microseconds since the
  // Windows epoch (1601).

  out_info->creation_time = FromTimeT(stat.st_ctime);
  out_info->is_directory = S_ISDIR(stat.st_mode);
  out_info->is_symbolic_link = S_ISLNK(stat.st_mode);
  out_info->last_accessed = FromTimeT(stat.st_atime);
  out_info->last_modified = FromTimeT(stat.st_mtime);
  out_info->size = stat.st_size;*/

  if (!file || !file->descriptor/*.IsValid()*/ || !out_info) {
    return false;
  }

  // see https://github.com/chromium/chromium/blob/ccd149af47315e4c6f2fc45d55be1b271f39062c/base/files/file.h#L122
  /*base::File::Info info;
  file->descriptor.GetInfo(&info);*/

  // see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_win.cc#L210
  BY_HANDLE_FILE_INFORMATION file_info;
  if (!GetFileInformationByHandle(file->descriptor, &file_info))
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

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_GET_INFO_H_
