// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#include "starboard/directory.h"

#include <stddef.h>

#include <string>

#include "starboard/file.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <codecvt> /// \note for UTF-8 
#include <locale>

/*#include "base/files/file_util.h"
#include "base/strings/utf_string_conversions.h"*/

namespace {

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

std::string GetParent(const std::string& path) {
  size_t last_slash = path.find_last_of('/');
  if (last_slash != std::string::npos) {
    std::string parent = path.substr(0, last_slash);
    RemoveTrailingSeparators(&parent);
    return parent;
  }

  return "";
}

// based on https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/files/file_util_win.cc#L444
bool DirectoryExists(const std::string& path) {

  // TODO !!!! 
  // ScopedBlockingCall scoped_blocking_call(FROM_HERE, BlockingType::MAY_BLOCK);

  DWORD fileattr = ::GetFileAttributes(/*as_wcstr*/utf8_to_wstring(path).c_str());
  if (fileattr != INVALID_FILE_ATTRIBUTES)
    return (fileattr & FILE_ATTRIBUTE_DIRECTORY) != 0;
  return false;
}

}  // namespace

bool SbDirectoryCreate(const char* path) {
  // Require a non-empty, absolute path.
  if (!path || path[0] != '/') {
    return false;
  }

  // Clear trailing slashes.
  std::string adjusted(path);
  RemoveTrailingSeparators(&adjusted);

  if (SbDirectoryCanOpen(adjusted.c_str())) {
    return true;
  }

  std::string parent = GetParent(adjusted);
  if (!parent.empty() && !SbDirectoryCanOpen(parent.c_str())) {
    return false;
  }

  // based on https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/files/file_util_win.cc#L598
  /*base::File::Error error;
  base::FilePath files_dir;
  files_dir = files_dir.Append(base::UTF8ToUTF16(adjusted.c_str()));
  if (base::CreateDirectoryAndGetError(files_dir, &error)) {
    return true;
  }*/

  // TODO !!!
  // ScopedBlockingCall scoped_blocking_call(FROM_HERE, BlockingType::MAY_BLOCK);

  if(::CreateDirectory(utf8_to_wstring(adjusted).c_str(), NULL))
    return true;

  const DWORD error_code = ::GetLastError();
  if (error_code == ERROR_ALREADY_EXISTS && DirectoryExists(adjusted)) {
    // This error code ERROR_ALREADY_EXISTS doesn't indicate whether we were
    // racing with someone creating the same directory, or a file with the same
    // path.  If DirectoryExists() returns true, we lost the race to create the
    // same directory.
    return true;
  }

  /*if (mkdir(adjusted.c_str(), 0700) == 0) {
    return true;
  }*/

  // If mkdir failed, the directory may still exist now (because of another
  // racing process or thread), so check again.
  return SbDirectoryCanOpen(adjusted.c_str());
}
