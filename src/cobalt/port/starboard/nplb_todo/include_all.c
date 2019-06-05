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

// Includes all headers in a C context to make sure they compile as C files.

#include "starboard/accessibility.h"
#include "starboard/atomic.h"
#include "starboard/audio_sink.h"
#include "starboard/blitter.h"
#include "starboard/byte_swap.h"
#include "starboard/character.h"
#include "starboard/condition_variable.h"
#include "starboard/configuration.h"
#include "starboard/cryptography.h"
#include "starboard/decode_target.h"
#include "starboard/directory.h"
#include "starboard/double.h"
#include "starboard/drm.h"
#include "starboard/event.h"
#include "starboard/export.h"
#include "starboard/file.h"
#include "starboard/input.h"
#include "starboard/key.h"
#include "starboard/log.h"
#include "starboard/media.h"
#include "starboard/memory.h"
#include "starboard/microphone.h"
#include "starboard/mutex.h"
#include "starboard/once.h"
#include "starboard/player.h"
#include "starboard/socket.h"
#include "starboard/socket_waiter.h"
#include "starboard/speech_synthesis.h"
#include "starboard/storage.h"
#include "starboard/string.h"
#include "starboard/system.h"
#include "starboard/thread.h"
#include "starboard/thread_types.h"
#include "starboard/time.h"
#include "starboard/time_zone.h"
#include "starboard/types.h"
#include "starboard/user.h"
#include "starboard/window.h"

// This doesn't really belong here, but ensures that SB_COMPILE_ASSERT works in
// a straight-C context.
SB_COMPILE_ASSERT(1 == 1, compile_assert_test_one_equals_one);