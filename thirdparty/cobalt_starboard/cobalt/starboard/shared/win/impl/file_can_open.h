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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_CAN_OPEN_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_CAN_OPEN_H_

#include "starboard/file.h"

#include <errno.h>
#include <sys/stat.h>

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

/*#include "base/files/file_util.h"
#include "base/strings/utf_string_conversions.h"*/

#include <io.h>
#include <stdint.h>

#include <cstring>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdint.h> // portable: uint64_t   MSVC: __int64 

#include <string>
#include <codecvt> /// \note for UTF-8
#include <locale>

namespace starboard {
namespace shared {
namespace win {
namespace impl {

// TODO: repeated code 
static std::wstring utf8_to_wstring(const std::string& str) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.from_bytes(str);
}
// TODO: repeated code 
static std::string wstring_to_utf8(const std::wstring& str) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.to_bytes(str);
}

bool FileCanOpen(const char* path, int flags) {
  bool can_read = flags & kSbFileRead;
  bool can_write = flags & kSbFileWrite;
  if (!can_read && !can_write) {
    return false;
  }

  /*base::FilePath file_path;
  file_path = file_path.Append(base::UTF8ToUTF16(path));
  base::File file;
  file.Initialize(file_path, flags);*/
  // see https://github.com/chromium/chromium/blob/d1c11daad4acf661af37668b2a04148ccca4f9f6/base/files/file.cc#L81
  // see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_win.cc#L344

  HANDLE file;

  // see https://docs.microsoft.com/en-us/windows/win32/fileio/opening-a-file-for-reading-or-writing
  file = CreateFile(utf8_to_wstring(path).c_str(),               // file to open
                    GENERIC_READ,          // open for reading
                    FILE_SHARE_READ,       // share for reading
                    NULL,                  // default security
                    OPEN_EXISTING,         // existing file only
                    FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, // normal file
                    NULL);                 // no attr. template
  if (file == INVALID_HANDLE_VALUE) { 
    return false; 
  }

  /*struct stat file_info;
  if (stat(path, &file_info) != 0) {
    return false;
  }

  if (can_read && !(file_info.st_mode & S_IRUSR)) {
    errno = EACCES;
    return false;
  }

  if (can_write && !(file_info.st_mode & S_IWUSR)) {
    errno = EACCES;
    return false;
  }*/

  /*if (!file.IsValid()) {
    return false;
  }*/

  // TODO

  /*if (can_read && !(file_info.st_mode & File::FLAG_OPEN)) {
    errno = EACCES;
    return false;
  }

  if (can_write && !(file_info.st_mode & S_IWUSR)) {
    errno = EACCES;
    return false;
  }*/

  return true;
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_CAN_OPEN_H_
