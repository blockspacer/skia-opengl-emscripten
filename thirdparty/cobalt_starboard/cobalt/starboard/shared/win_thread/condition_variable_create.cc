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

/*#include "base/synchronization/condition_variable.h"

#include "base/optional.h"
#include "base/synchronization/lock.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time.h"*/

#include <windows.h>

using starboard::shared::starboard::SetInitialized;

// see https://github.com/blockspacer/skia-opengl-emscripten/blob/7318ee910f647ac5bc3337cc2002aa77391d12e6/src/chromium/base/synchronization/condition_variable_posix.cc#L42

namespace {
/*struct ConditionVariableAttributes {
 public:
  ConditionVariableAttributes() {
    valid_ = IsSuccess(WIN_THREAD_condattr_init(&attributes_));
  }
  ~ConditionVariableAttributes() {
    if (valid_) {
      SB_CHECK(IsSuccess(WIN_THREAD_condattr_destroy(&attributes_)));
    }
  }

  bool valid() const { return valid_; }
  WIN_THREAD_condattr_t* attributes() { return &attributes_; }

 private:
  bool valid_;
  WIN_THREAD_condattr_t attributes_;
};*/

}  // namespace

bool SbConditionVariableCreate(SbConditionVariable* out_condition,
                               SbMutex* /*opt_mutex*/) {
  if (!out_condition) {
    return false;
  }

  /*ConditionVariableAttributes attributes;
  if (!attributes.valid()) {
    SB_DLOG(ERROR) << "Failed to call WIN_THREAD_condattr_init().";
    return false;
  }

#if !SB_HAS_QUIRK(NO_CONDATTR_SETCLOCK_SUPPORT)
  // Always use CLOCK_MONOTONIC so that SbConditionVariableWaitTimed() will
  // not be based off of the system clock (which can lead to erroneous
  // behavior if the system clock is changed while a process is running).
  if (!IsSuccess(WIN_THREAD_condattr_setclock(
           attributes.attributes(), CLOCK_MONOTONIC))) {
    SB_DLOG(ERROR) << "Failed to call WIN_THREAD_condattr_setclock().";
    return false;
  }
#endif  // !SB_HAS_QUIRK(NO_CONDATTR_SETCLOCK_SUPPORT)

  bool status = IsSuccess(WIN_THREAD_cond_init(
                    &out_condition->condition, attributes.attributes()));*/

  bool status = true;

  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/third_party/libwebp/src/utils/thread_utils.c#L146
  InitializeConditionVariable(reinterpret_cast<PCONDITION_VARIABLE>(&out_condition->condition));

  // We mark that we are initialized regardless of whether initialization
  // was successful or not.
  SetInitialized(&out_condition->initialized_state);

  if (!status) {
    SB_DLOG(ERROR) << "Failed to call WIN_THREAD_cond_init().";
  }

  return status;
}
