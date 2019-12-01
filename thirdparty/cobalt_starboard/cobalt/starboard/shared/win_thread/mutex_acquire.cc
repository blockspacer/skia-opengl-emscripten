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

#include "starboard/shared/win_thread/is_success.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/*
// see https://github.com/blockspacer/skia-opengl-emscripten/blob/eed8d0d256897d8c3638646d4d864a81aa38af42/src/chromium/base/synchronization/lock_impl_posix.cc#L89
bool LockTry(SbMutex* mutex) {
  return !!::TryAcquireSRWLockExclusive(
      reinterpret_cast<PSRWLOCK>(mutex));
}*/

SbMutexResult SbMutexAcquire(SbMutex* mutex) {
  if (!mutex) {
    return kSbMutexDestroyed;
  }

  /*if(!LockTry) {
    return kSbMutexBusy;
  }*/

  /*int result = WIN_THREAD_mutex_lock(mutex);
  if (IsSuccess(result)) {
    return kSbMutexAcquired;
  }*/

  ::AcquireSRWLockExclusive(reinterpret_cast<PSRWLOCK>(mutex));

  //return kSbMutexBusy;

  return kSbMutexAcquired;
}
