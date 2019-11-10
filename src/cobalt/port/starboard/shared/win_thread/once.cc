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

#include "starboard/once.h"

//#include <pthread.h>

#include <windows.h>

// see https://github.com/GerbilSoft/rom-properties/blob/edc3e87c1b22ae2dc54837959ac874f4bc361c43/src/librpthreads/pthread_once.c#L24
//#define pthread_yield() SwitchToThread()

// see https://stackoverflow.com/questions/631879/library-initialization-pthread-once-in-win32-implementation

BOOL CALLBACK init_routine_wrapper (
    PINIT_ONCE InitOnce,        // Pointer to one-time initialization structure        
    PVOID Parameter,            // Optional parameter passed by InitOnceExecuteOnce            
    PVOID *lpContext)           // Receives pointer to event object           
{
  SbOnceInitRoutine init_routine = static_cast<SbOnceInitRoutine>(Parameter);
  init_routine();
  return TRUE;
}

//static INIT_ONCE cpu_check_inited_once = INIT_ONCE_STATIC_INIT;

bool SbOnce(SbOnceControl* once_control, SbOnceInitRoutine init_routine) {
  if (once_control == NULL) {
    return false;
  }

  if (init_routine == NULL) {
    return false;
  }

  InitOnceExecuteOnce(once_control, init_routine_wrapper,
                      static_cast<PVOID>(init_routine), NULL);

  return true;
}

#if 0
bool SbOnce(SbOnceControl* once_control, SbOnceInitRoutine init_routine) {
  if (once_control == NULL) {
    return false;
  }
  if (init_routine == NULL) {
    return false;
  }

  return WIN_THREAD_once(once_control, init_routine) == 0;
}
#endif // 0