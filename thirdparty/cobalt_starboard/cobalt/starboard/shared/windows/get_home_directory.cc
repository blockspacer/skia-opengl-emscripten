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

//#include "base/files/file_util.h"

#include "starboard/common/log.h"
#include "starboard/common/string.h"
#include "starboard/shared/nouser/user_internal.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <io.h>
#include <psapi.h>
#include <shellapi.h>
#include <shlobj.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>
#include <winsock2.h>

#include <algorithm>
#include <limits>
#include <string>

#include <string>
#include <codecvt> /// \note for UTF-8
#include <locale>

namespace starboard {
namespace shared {
namespace nouser {

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

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/win/windows_types.h#L142
#define MAX_PATH 260

// see https://github.com/chromium/chromium/blob/75fb429759aa71bae59cdd57b69a482c1153579e/base/files/file_util_win.cc#L479
const TCHAR* GetHomeDir() {
  TCHAR result[MAX_PATH];
  if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_PROFILE, NULL, SHGFP_TYPE_CURRENT,
                                /*as_writable_wcstr*/(result))) &&
      result[0]) {
    return result;
  }

  // Fall back to the temporary directory on failure.
  /*TCHAR* temp;
  if (GetTempDir(&temp))
    return temp;*/

  // Last resort.
  return TEXT("C:\\");
}

bool GetHomeDirectory(SbUser user, char* out_path, int path_size) {
  if (user != SbUserGetCurrent()) {
    return false;
  }

  // based on base::FilePath home_dir = base::GetHomeDir();
  // const char* home_directory = home_dir.AsUTF8Unsafe().c_str();
  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/files/file_util_win.cc#L464
  const char* home_directory = wstring_to_utf8(GetHomeDir()).c_str();
  if (home_directory) {
    SbStringCopy(out_path, home_directory, path_size);
    return true;
  }

  SB_DLOG(WARNING) << "No HOME environment variable.";
  
  SB_DLOG(WARNING) << "NOTIMPLEMENTED: starboard GetHomeDirectory";

  return false;
}

}  // namespace nouser
}  // namespace shared
}  // namespace starboard
