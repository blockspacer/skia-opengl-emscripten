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

// MSVC++ requires this to be set before any other includes to get M_PI.
#define _USE_MATH_DEFINES
#define NOMINMAX

// Adapted from base/rand_util_posix.cc

//#include "base/rand_util.h"

#include "starboard/system.h"

#include "starboard/common/log.h"
#include "starboard/common/mutex.h"
#include "starboard/file.h"
#include "starboard/once.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stddef.h>
#include <stdint.h>

// #define needed to link in RtlGenRandom(), a.k.a. SystemFunction036.  See the
// "Community Additions" comment on MSDN here:
// http://msdn.microsoft.com/en-us/library/windows/desktop/aa387694.aspx
#define SystemFunction036 NTAPI SystemFunction036
#include <NTSecAPI.h>
#undef SystemFunction036

#include <algorithm>
#include <limits>

namespace {

/*// We keep the open file descriptor for /dev/urandom around so we don't need to
// reopen it (which is expensive).
class URandomFile {
 public:
  URandomFile() {
    file_ =
        SbFileOpen("/dev/urandom", kSbFileOpenOnly | kSbFileRead, NULL, NULL);
    SB_DCHECK(SbFileIsValid(file_)) << "Cannot open /dev/urandom";
  }

  ~URandomFile() { SbFileClose(file_); }

  SbFile file() const { return file_; }

 private:
  SbFile file_;
};

// A file that will produce any number of very random bytes.
URandomFile* g_urandom_file = NULL;

// Control to initialize g_urandom_file.
SbOnceControl g_urandom_file_once = SB_ONCE_INITIALIZER;

// Lazily initialize g_urandom_file.
void InitializeRandom() {
  SB_DCHECK(g_urandom_file == NULL);
  g_urandom_file = new URandomFile();
}*/

static void RandBytes(void* output, size_t output_length) {
  char* output_ptr = static_cast<char*>(output);
  while (output_length > 0) {
    const ULONG output_bytes_this_pass = static_cast<ULONG>(std::min(
        output_length, static_cast<size_t>(std::numeric_limits<ULONG>::max())));
    const bool success =
        RtlGenRandom(output_ptr, output_bytes_this_pass) != FALSE;
    SB_CHECK(success);
    output_length -= output_bytes_this_pass;
    output_ptr += output_bytes_this_pass;
  }
}

}  // namespace

void SbSystemGetRandomData(void* out_buffer, int buffer_size) {
  SB_DCHECK(out_buffer);

  // based on base::RandBytes(out_buffer, buffer_size);
  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7c423190544c8da1bf8ae79b800c9c0c83dd3c6e/src/chromium/base/rand_util_win.cc#L25
  RandBytes(out_buffer, buffer_size);

  /*char* buffer = reinterpret_cast<char*>(out_buffer);
  int remaining = buffer_size;
  bool once_result = SbOnce(&g_urandom_file_once, &InitializeRandom);
  SB_DCHECK(once_result);

  SbFile file = g_urandom_file->file();
  do {
    // This is unsynchronized access to the File that could happen from multiple
    // threads. It doesn't appear that there is any locking in the Chromium
    // POSIX implementation that is very similar.
    int result = SbFileRead(file, buffer, remaining);
    if (result <= 0)
      break;

    remaining -= result;
    buffer += result;
  } while (remaining);

  SB_CHECK(remaining == 0);*/
}
