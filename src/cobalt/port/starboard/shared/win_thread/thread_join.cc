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

#include "starboard/thread.h"

#include "base/threading/thread.h"
#include "base/threading/platform_thread.h"
#include "base/threading/thread_local_storage.h"
#include "base/atomicops.h"
#include "base/logging.h"
#include "base/synchronization/lock.h"
#include "build/build_config.h"

#include "starboard/shared/win_thread/is_success.h"

bool SbThreadJoin(SbThread thread, void** out_return) {
  if (!SbThreadIsValid(thread)) {
    return false;
  }

  void* joined_return = NULL;
  /*int result = WIN_THREAD_join(thread, &joined_return);
  if (!IsSuccess(result)) {
    return false;
  }*/

  // see https://github.com/chromium/chromium/blob/76cd905f0fb391085d670c4d2936fea37e0b67d6/base/threading/platform_thread_win.cc#L299
  base::PlatformThread::Join(base::PlatformThreadHandle(thread));

  if (out_return) {
    *out_return = joined_return;
  }

  return true;
}
