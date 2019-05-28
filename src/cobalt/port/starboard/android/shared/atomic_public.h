// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#ifndef STARBOARD_ANDROID_SHARED_ATOMIC_PUBLIC_H_
#define STARBOARD_ANDROID_SHARED_ATOMIC_PUBLIC_H_

#include "starboard/atomic.h"

#if SB_IS(COMPILER_GCC)
#include "starboard/shared/gcc/atomic_gcc_public.h"
#else
#error "Unknown Android compiler."
#endif

#endif  // STARBOARD_ANDROID_SHARED_ATOMIC_PUBLIC_H_
