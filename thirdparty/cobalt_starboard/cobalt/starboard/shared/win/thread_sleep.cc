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

#include "starboard/thread.h"

#include "starboard/time.h"

/*#include "base/threading/platform_thread.h"
#include "base/time/time.h"*/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <Mmsystem.h> //timeGetTime
#include <WinBase.h> //Sleep

void SbThreadSleep(SbTime duration) {
  if (duration <= 0) {
    return;
  }

  // SbTime is microseconds, so this is easy.
  //usleep(duration);

  // based on
  /*const base::TimeDelta sleepDuration = base::TimeDelta::FromMicroseconds(duration);
  base::PlatformThread::Sleep(sleepDuration);*/

  // see https://github.com/chromium/chromium/blob/694c3c33ca902f5818dd52a263aed9d38b7d8b19/base/threading/platform_thread_win.cc#L237

  // When measured with a high resolution clock, Sleep() sometimes returns much
  // too early. We may need to call it repeatedly to get the desired duration.
  // PlatformThread::Sleep doesn't support mock-time, so this always uses
  // real-time.
  const unsigned long end = timeGetTime() + duration;
  for (unsigned long now = timeGetTime(); now < end;
       now = timeGetTime()) {
    ::Sleep(static_cast<DWORD>((end - now)/*.InMillisecondsRoundedUp()*/));
  }
}
