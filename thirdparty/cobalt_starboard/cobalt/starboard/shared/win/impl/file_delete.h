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

#ifndef STARBOARD_SHARED_WIN_IMPL_FILE_DELETE_H_
#define STARBOARD_SHARED_WIN_IMPL_FILE_DELETE_H_

#include "starboard/file.h"

/*#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>*/

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <io.h>
#include <stdint.h>

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

/*#include "base/files/file.h"
#include "base/files/file_enumerator.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/files/scoped_temp_dir.h"
#include "base/strings/utf_string_conversions.h"*/

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

bool FileDelete(const char* path) {
  if (!path || *path == '\0') {
    return false;
  }

  /*struct stat file_info;
  int result = stat(path, &file_info);
  if (result) {
    return (errno == ENOENT || errno == ENOTDIR);
  }

  if (S_ISDIR(file_info.st_mode)) {
    return !rmdir(path);
  }

  return !unlink(path);*/

#if 0
  base::FilePath file_path;
  file_path = file_path.Append(base::UTF8ToUTF16(path));

  /// \TODO use DeleteFileRecursively - Deletes the given path, whether it's a file or a directory.
  if (!base::DeleteFile(file_path, /*Recursively*/true)) {
    return false;
  }
#endif // 0

  // see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_util_win.cc#L155
  const bool fSuccess = ::DeleteFile(utf8_to_wstring(path).c_str());
  return fSuccess;

}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_DELETE_H_
