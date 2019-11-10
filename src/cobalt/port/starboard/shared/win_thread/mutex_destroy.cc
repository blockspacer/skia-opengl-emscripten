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

#include "starboard/common/mutex.h"

#include <windows.h>

#include "starboard/common/log.h"
#include "starboard/shared/win_thread/is_success.h"

bool SbMutexDestroy(SbMutex* mutex) {
  if (!mutex) {
    return false;
  }

  return SbMutexRelease(mutex);

  /*// Destroying a locked mutex is undefined, so fail if the mutex is
  // already locked,
  if (!IsSuccess(WIN_THREAD_mutex_trylock(mutex))) {
    SB_LOG(ERROR) << "Trying to destroy a locked mutex";
    return false;
  }

  return IsSuccess(WIN_THREAD_mutex_unlock(mutex)) &&
         IsSuccess(WIN_THREAD_mutex_destroy(mutex));*/
}
