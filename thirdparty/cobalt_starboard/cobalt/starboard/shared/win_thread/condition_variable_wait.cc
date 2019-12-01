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

#include "starboard/shared/win_thread/is_success.h"
#include "starboard/shared/starboard/lazy_initialization_internal.h"

/*#include "base/optional.h"
#include "base/synchronization/lock.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time.h"*/

#include <windows.h>

using starboard::shared::starboard::EnsureInitialized;

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7318ee910f647ac5bc3337cc2002aa77391d12e6/src/chromium/base/synchronization/condition_variable_win.cc#L29

SbConditionVariableResult SbConditionVariableWait(
    SbConditionVariable* condition,
    SbMutex* mutex) {
  if (!condition || !mutex) {
    return kSbConditionVariableFailed;
  }

  if (!EnsureInitialized(&condition->initialized_state)) {
    // The condition variable is set to SB_CONDITION_VARIABLE_INITIALIZER and
    // is uninitialized, so call SbConditionVariableCreate() to initialize the
    // condition variable. SbConditionVariableCreate() is responsible for
    // marking the variable as initialized.
    SbConditionVariableCreate(condition, mutex);
  }

  /*if (IsSuccess(WIN_THREAD_cond_wait(&condition->condition, mutex))) {
    return kSbConditionVariableSignaled;
  }

  return kSbConditionVariableFailed;*/

  return SbConditionVariableWaitTimed(condition,  mutex, kSbInt64Max);
}
