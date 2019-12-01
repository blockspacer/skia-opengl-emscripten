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

#ifndef STARBOARD_SHARED_WIN_FILE_INTERNAL_H_
#define STARBOARD_SHARED_WIN_FILE_INTERNAL_H_

#include <errno.h>

#include "starboard/file.h"
#include "starboard/shared/internal_only.h"

#include "build/build_config.h"

/*#include "base/win/scoped_handle.h"
#include "base/win/windows_types.h"
#include "base/files/file.h"*/

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

// see https://github.com/chromium/chromium/blob/2ca8c5037021c9d2ecc00b787d58a31ed8fc8bcb/base/files/platform_file.h#L24
struct SbFilePrivate {
  // file descriptor of this file.
  // see base::File
  HANDLE descriptor;
};

#endif  // STARBOARD_SHARED_WIN_FILE_INTERNAL_H_
