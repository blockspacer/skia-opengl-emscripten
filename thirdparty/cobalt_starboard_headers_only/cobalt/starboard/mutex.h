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

// Module Overview: Starboard Mutex module
//
// Defines a mutually exclusive lock that can be used to coordinate with other
// threads.

#ifndef STARBOARD_MUTEX_H_
#define STARBOARD_MUTEX_H_

#include "starboard/configuration.h"
#include "starboard/export.h"
#include "starboard/thread_types.h"

#ifdef __cplusplus
extern "C" {
#endif

// Enumeration of possible results from acquiring a mutex.
typedef enum SbMutexResult {
  // The mutex was acquired successfully.
  kSbMutexAcquired,

  // The mutex was not acquired because it was held by someone else.
  kSbMutexBusy,

  // The mutex has already been destroyed.
  kSbMutexDestroyed,
} SbMutexResult;

// Indicates whether the given result is a success. A value of |true| indicates
// that the mutex was acquired.
//
// |result|: The result being checked.
static SB_C_FORCE_INLINE bool SbMutexIsSuccess(SbMutexResult result) {
  return result == kSbMutexAcquired;
}

// Creates a new mutex. The return value indicates whether the function
// was able to create a new mutex.
//
// |out_mutex|: The handle to the newly created mutex.
SB_EXPORT bool SbMutexCreate(SbMutex* out_mutex);

// Destroys a mutex. The return value indicates whether the destruction was
// successful.
//
// |mutex|: The mutex to be invalidated.
SB_EXPORT bool SbMutexDestroy(SbMutex* mutex);

// Acquires |mutex|, blocking indefinitely. The return value identifies
// the acquisition result. SbMutexes are not reentrant, so a recursive
// acquisition blocks forever.
//
// |mutex|: The mutex to be acquired.
SB_EXPORT SbMutexResult SbMutexAcquire(SbMutex* mutex);

// Acquires |mutex|, without blocking. The return value identifies
// the acquisition result. SbMutexes are not reentrant, so a recursive
// acquisition always fails.
//
// |mutex|: The mutex to be acquired.
SB_EXPORT SbMutexResult SbMutexAcquireTry(SbMutex* mutex);

// Releases |mutex| held by the current thread. The return value indicates
// whether the release was successful. Releases should always be successful
// if |mutex| is held by the current thread.
//
// |mutex|: The mutex to be released.
SB_EXPORT bool SbMutexRelease(SbMutex* mutex);

#ifdef __cplusplus
}  // extern "C"
#endif

#if defined(__cplusplus) && SB_API_VERSION < 11
#include "starboard/common/mutex.h"
#endif  // defined(__cplusplus) && SB_API_VERSION < 11

#endif  // STARBOARD_MUTEX_H_
