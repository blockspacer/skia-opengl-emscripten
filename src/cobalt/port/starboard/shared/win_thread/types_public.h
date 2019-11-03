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

// Defines the pthread versions of Starboard synchronization primitives and the
// static initializers for those primitives.

#ifndef STARBOARD_SHARED_PTHREAD_TYPES_PUBLIC_H_
#define STARBOARD_SHARED_PTHREAD_TYPES_PUBLIC_H_

#include "starboard/types.h"

#include "base/base_export.h"
#include "base/logging.h"
#include "base/macros.h"
#include "build/build_config.h"
#include "base/win/windows_types.h"

#include <windows.h>

//#include <pthread.h>

#include "starboard/shared/starboard/lazy_initialization_public.h"

// --- SbConditionVariable ---

// Transparent Condition Variable handle.
// It is customized from the plain pthread_cont_t object because we
// need to ensure that each condition variable is initialized to use
// CLOCK_MONOTONIC, which is not the default (and the default is used
// when PTHREAD_COND_INITIALIZER is set).
typedef struct SbConditionVariable {
  InitializedState initialized_state;
  CHROME_CONDITION_VARIABLE condition;
} SbConditionVariable;

// Condition Variable static initializer.
#define SB_CONDITION_VARIABLE_INITIALIZER \
  { INITIALIZED_STATE_UNINITIALIZED, 0 }

// --- SbMutex ---

// Transparent Mutex handle.
typedef CHROME_SRWLOCK SbMutex;

// Mutex static initializer.
#define SB_MUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER

// --- SbOnce ---

// Transparent Once control handle.
typedef INIT_ONCE SbOnceControl;

// \see https://github.com/blockspacer/skia-opengl-emscripten/blob/a47f44f6210c09f56f3e21def5b3f300366adb86/src/chromium/tcmalloc_wrapper/third_party/tcmalloc/gperftools-2.0/vendor/src/windows/port.h#L124
//enum { PTHREAD_ONCE_INIT = 0 };   /* important that this be 0! for SpinLock */

// Once static initializer.
//#define SB_ONCE_INITIALIZER PTHREAD_ONCE_INIT
#define SB_ONCE_INITIALIZER {0}

// --- SbThread ---

// Transparent pthread handle.
typedef DWORD SbThread;

// Well-defined constant value to mean "no thread handle."
#define kSbThreadInvalid (SbThread)-1

#endif  // STARBOARD_SHARED_PTHREAD_TYPES_PUBLIC_H_
