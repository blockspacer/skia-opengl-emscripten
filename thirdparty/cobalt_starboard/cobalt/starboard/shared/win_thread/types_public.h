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

#ifndef STARBOARD_SHARED_WIN_THREAD_TYPES_PUBLIC_H_
#define STARBOARD_SHARED_WIN_THREAD_TYPES_PUBLIC_H_

#include "starboard/types.h"

#include <windows.h>

//#include <pthread.h>

#include "starboard/shared/starboard/lazy_initialization_public.h"

// see https://github.com/chromium/chromium/blob/c50dc3a2cea454eb0876c23a250c8d4c82b69469/base/win/windows_types.h#L128

// --- SbConditionVariable ---

// based on CHROME_CONDITION_VARIABLE
struct SB_CONDITION_VARIABLE_INTERNAL {
  PVOID Ptr;
};

// Transparent Condition Variable handle.
// It is customized from the plain WIN_THREAD_cont_t object because we
// need to ensure that each condition variable is initialized to use
// CLOCK_MONOTONIC, which is not the default (and the default is used
// when WIN_THREAD_COND_INITIALIZER is set).
typedef struct SbConditionVariable {
  InitializedState initialized_state;
  // based on CHROME_CONDITION_VARIABLE
  SB_CONDITION_VARIABLE_INTERNAL condition;

} SbConditionVariable;

// Condition Variable static initializer.
#define SB_CONDITION_VARIABLE_INITIALIZER \
  { INITIALIZED_STATE_UNINITIALIZED, 0 }

// --- SbMutex ---

// based on CHROME_SRWLOCK
struct SB_SRWLOCK_INTERNAL {
  PVOID Ptr;
};

// Transparent Mutex handle.
typedef SB_SRWLOCK_INTERNAL SbMutex;

// Mutex static initializer.
#define SB_MUTEX_INITIALIZER WIN_THREAD_MUTEX_INITIALIZER

// --- SbOnce ---

// Transparent Once control handle.
typedef INIT_ONCE SbOnceControl;

// \see https://github.com/blockspacer/skia-opengl-emscripten/blob/a47f44f6210c09f56f3e21def5b3f300366adb86/src/chromium/tcmalloc_wrapper/third_party/tcmalloc/gperftools-2.0/vendor/src/windows/port.h#L124
//enum { WIN_THREAD_ONCE_INIT = 0 };   /* important that this be 0! for SpinLock */

// Once static initializer.
//#define SB_ONCE_INITIALIZER WIN_THREAD_ONCE_INIT
#define SB_ONCE_INITIALIZER {0}

// --- SbThread ---

// Transparent pthread handle.
//typedef base::Thread* SbThread; 
//typedef base::PlatformThreadHandle SbThread; 
typedef void* SbThread; // see PlatformThreadHandle

#if defined(_WIN32) || defined(_WIN64)
// Well-defined constant value to mean "no thread handle."
//#define kSbThreadInvalid (SbThread)0
#define kSbThreadInvalid (SbThread)0
#else
// Well-defined constant value to mean "no thread handle."
#define kSbThreadInvalid (SbThread)-1
#endif 

#endif  // STARBOARD_SHARED_WIN_THREAD_TYPES_PUBLIC_H_
