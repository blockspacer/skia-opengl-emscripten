// Copyright 2019 The Cobalt Authors. All Rights Reserved.
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

#include "starboard/blitter.h"

#include <EGL/egl.h>

#include "starboard/common/log.h"
#include "starboard/common/recursive_mutex.h"
#include "starboard/shared/blittergles/blitter_internal.h"

SB_EXPORT bool SbBlitterDestroySwapChain(SbBlitterSwapChain swap_chain) {
  if (!SbBlitterIsSwapChainValid(swap_chain)) {
    SB_DLOG(ERROR) << ": Invalid swap chain.";
    return false;
  }

  starboard::ScopedRecursiveLock lock(swap_chain->render_target.device->mutex);

  eglDestroySurface(swap_chain->render_target.device->display,
                    swap_chain->surface);
  if (eglGetError() != EGL_SUCCESS) {
    SB_DLOG(ERROR) << ": Failed to destroy swap chain.";
    return false;
  }

  delete swap_chain;

  return true;
}
