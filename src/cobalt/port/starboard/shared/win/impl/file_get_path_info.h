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

#include "starboard/file.h"

#include "starboard/shared/win/time_internal.h"

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win/impl/file_impl.h"

#include "base/files/file.h"
#include "base/files/file_enumerator.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/files/scoped_temp_dir.h"
#include "base/strings/utf_string_conversions.h"

namespace starboard {
namespace shared {
namespace win {
namespace impl {

bool FileGetPathInfo(const char* path, SbFileInfo* out_info) {
  if (!path || path[0] == '\0' || !out_info) {
    return false;
  }
  
  base::FilePath file_path;
  file_path = file_path.Append(base::UTF8ToUTF16(path));

  /*struct stat file_info;
  int result = stat(path, &file_info);
  if (result) {
    return false;
  }

  out_info->creation_time = FromTimeT(file_info.st_ctime);
  out_info->is_directory = S_ISDIR(file_info.st_mode);
  out_info->is_symbolic_link = S_ISLNK(file_info.st_mode);
  out_info->last_accessed = FromTimeT(file_info.st_atime);
  out_info->last_modified = FromTimeT(file_info.st_mtime);
  out_info->size = file_info.st_size;*/

  base::File file(file_path, base::File::FLAG_OPEN | base::File::FLAG_READ);

  // see https://github.com/chromium/chromium/blob/ccd149af47315e4c6f2fc45d55be1b271f39062c/base/files/file.h#L122
  base::File::Info info;
  file.GetInfo(&info);

  // FromTimeT - Converts a time_t (relative to POSIX epoch) into microseconds since the
  // Windows epoch (1601).

  out_info->creation_time = info.creation_time.ToDoubleT();
  out_info->is_directory = info.is_directory;
  out_info->is_symbolic_link = info.is_symbolic_link;
  out_info->last_accessed = info.last_accessed.ToDoubleT();
  out_info->last_modified = info.last_modified.ToDoubleT();
  out_info->size = info.size;

  return true;
}

}  // namespace impl
}  // namespace win
}  // namespace shared
}  // namespace starboard

#endif  // STARBOARD_SHARED_WIN_IMPL_FILE_GET_PATH_INFO_H_
