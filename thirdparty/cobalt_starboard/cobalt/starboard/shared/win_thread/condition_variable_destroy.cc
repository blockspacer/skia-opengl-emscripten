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

#include <windows.h>

/*#include "base/optional.h"
#include "base/synchronization/lock.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time.h"*/

#include <windows.h>

using starboard::shared::starboard::IsInitialized;

bool SbConditionVariableDestroy(SbConditionVariable* condition) {
  if (!condition) {
    return false;
  }

  if (!IsInitialized(&condition->initialized_state)) {
    // If the condition variable is not initialized yet, then there is nothing
    // to destroy so vacuously return true.
    return true;
  }

  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7318ee910f647ac5bc3337cc2002aa77391d12e6/src/chromium/base/synchronization/condition_variable_posix.cc#L53

  //return IsSuccess(WIN_THREAD_cond_destroy(&condition->condition));

  return true;
}
