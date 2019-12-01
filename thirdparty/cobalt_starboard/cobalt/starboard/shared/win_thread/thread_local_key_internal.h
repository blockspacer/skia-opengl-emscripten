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

#ifndef STARBOARD_SHARED_WIN_THREAD_THREAD_LOCAL_KEY_INTERNAL_H_
#define STARBOARD_SHARED_WIN_THREAD_THREAD_LOCAL_KEY_INTERNAL_H_

//#include <pthread.h>

//#include "base/threading/thread_local_storage.h"

#include "build/build_config.h"

#include "starboard/shared/internal_only.h"
#include "starboard/shared/win_thread/is_success.h"
#include "starboard/thread.h"

struct SbThreadLocalKeyPrivate {
  // The underlying thread-local variable handle.
  // based on base::internal::PlatformThreadLocalStorage::TLSKey key;
  // see https://github.com/blockspacer/skia-opengl-emscripten/blob/7318ee910f647ac5bc3337cc2002aa77391d12e6/src/chromium/base/threading/thread_local_storage.h#L57
  unsigned long key;
};

#endif  // STARBOARD_SHARED_WIN_THREAD_THREAD_LOCAL_KEY_INTERNAL_H_
