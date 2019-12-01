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

#define _WINSOCKAPI_    // stops windows.h including winsock.h
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include "starboard/common/condition_variable.h"

#include "starboard/shared/win/time_internal.h"
#include "starboard/shared/win_thread/is_success.h"
#include "starboard/shared/starboard/lazy_initialization_internal.h"
#include "starboard/time.h"

/*#include "base/optional.h"
#include "base/synchronization/lock.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time.h"*/

#include <windows.h>

using starboard::shared::starboard::EnsureInitialized;

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7318ee910f647ac5bc3337cc2002aa77391d12e6/src/chromium/base/synchronization/condition_variable_posix.cc#L110

SbConditionVariableResult SbConditionVariableWaitTimed(
    SbConditionVariable* condition,
    SbMutex* mutex,
    SbTime timeout) {
  if (!condition || !mutex) {
    return kSbConditionVariableFailed;
  }

  if (timeout < 0) {
    timeout = 0;
  }

  if (!EnsureInitialized(&condition->initialized_state)) {
    // The condition variable is set to SB_CONDITION_VARIABLE_INITIALIZER and
    // is uninitialized, so call SbConditionVariableCreate() to initialize the
    // condition variable. SbConditionVariableCreate() is responsible for
    // marking the variable as initialized.
    SbConditionVariableCreate(condition, mutex);
  }

  DWORD timeout_dword = static_cast<DWORD>(timeout /*InMilliseconds ??? */);

  if (!SleepConditionVariableSRW(reinterpret_cast<PCONDITION_VARIABLE>(&condition->condition),
                                 reinterpret_cast<PSRWLOCK>(mutex), timeout_dword,
                                 0)) {
    // On failure, we only expect the CV to timeout. Any other error value means
    // that we've unexpectedly woken up.
    // Note that WAIT_TIMEOUT != ERROR_TIMEOUT. WAIT_TIMEOUT is used with the
    // WaitFor* family of functions as a direct return value. ERROR_TIMEOUT is
    // used with GetLastError().

    // TODO !!!
    SB_DCHECK(static_cast<DWORD>(ERROR_TIMEOUT) == GetLastError());

    return kSbConditionVariableTimedOut;
  }

  /*int result =
      WIN_THREAD_cond_timedwait(&condition->condition, mutex, &timeout_ts);
  if (IsSuccess(result)) {
    return kSbConditionVariableSignaled;
  }

  if (result == ETIMEDOUT) {
    return kSbConditionVariableTimedOut;
  }

  return kSbConditionVariableFailed;*/

  return kSbConditionVariableSignaled;
}

#if 0
SbConditionVariableResult SbConditionVariableWaitTimed(
    SbConditionVariable* condition,
    SbMutex* mutex,
    SbTime timeout) {
  if (!condition || !mutex) {
    return kSbConditionVariableFailed;
  }

  if (timeout < 0) {
    timeout = 0;
  }

#if !SB_HAS_QUIRK(NO_CONDATTR_SETCLOCK_SUPPORT)
  SbTime timeout_time = SbTimeGetMonotonicNow() + timeout;
#else  // !SB_HAS_QUIRK(NO_CONDATTR_SETCLOCK_SUPPORT)
  int64_t timeout_time = SbTimeToPosix(SbTimeGetNow()) + timeout;
#endif  // !SB_HAS_QUIRK(NO_CONDATTR_SETCLOCK_SUPPORT)

  // Detect overflow if timeout is near kSbTimeMax. Since timeout can't be
  // negative at this point, if it goes negative after adding now, we know we've
  // gone over. Especially posix now, which has a 400 year advantage over
  // Chromium (Windows) now.
  if (timeout_time < 0) {
    timeout_time = kSbInt64Max;
  }

  struct timespec timeout_ts;
  ToTimespec(&timeout_ts, timeout_time);

  if (!EnsureInitialized(&condition->initialized_state)) {
    // The condition variable is set to SB_CONDITION_VARIABLE_INITIALIZER and
    // is uninitialized, so call SbConditionVariableCreate() to initialize the
    // condition variable. SbConditionVariableCreate() is responsible for
    // marking the variable as initialized.
    SbConditionVariableCreate(condition, mutex);
  }

  int result =
      WIN_THREAD_cond_timedwait(&condition->condition, mutex, &timeout_ts);
  if (IsSuccess(result)) {
    return kSbConditionVariableSignaled;
  }

  if (result == ETIMEDOUT) {
    return kSbConditionVariableTimedOut;
  }

  return kSbConditionVariableFailed;
}
#endif // 0
