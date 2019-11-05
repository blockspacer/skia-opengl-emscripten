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

#include "base/files/file_util.h"

#include "starboard/common/log.h"
#include "starboard/common/string.h"
#include "starboard/shared/nouser/user_internal.h"

namespace starboard {
namespace shared {
namespace nouser {

// see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_util_win.cc#L479

bool GetHomeDirectory(SbUser user, char* out_path, int path_size) {
  if (user != SbUserGetCurrent()) {
    return false;
  }

  base::FilePath home_dir = base::GetHomeDir();
  const char* home_directory = home_dir.AsUTF8Unsafe().c_str();
  if (home_directory) {
    SbStringCopy(out_path, home_directory, path_size);
    return true;
  }

  SB_DLOG(WARNING) << "No HOME environment variable.";
  
  NOTIMPLEMENTED_LOG_ONCE();

  return false;
}

}  // namespace nouser
}  // namespace shared
}  // namespace starboard
