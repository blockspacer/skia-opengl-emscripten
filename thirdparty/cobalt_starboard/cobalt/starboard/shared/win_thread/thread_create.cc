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

#include "starboard/thread.h"

#include "starboard/common/log.h"
#include "starboard/common/string.h"
#include "starboard/shared/win_thread/is_success.h"
#include "starboard/shared/win_thread/thread_create_priority.h"

/*#include "base/threading/thread_local_storage.h"
#include "base/threading/thread.h"
#include "build/build_config.h"

#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/lazy_instance.h"
#include "base/location.h"
#include "base/logging.h"
#include "base/memory/ptr_util.h"
#include "base/memory/scoped_refptr.h"
#include "base/message_loop/message_loop_current.h"
#include "base/message_loop/message_pump.h"
#include "base/run_loop.h"
#include "base/synchronization/waitable_event.h"
#include "base/task/sequence_manager/sequence_manager_impl.h"
#include "base/task/sequence_manager/task_queue.h"
#include "base/third_party/dynamic_annotations/dynamic_annotations.h"
#include "base/threading/thread_id_name_manager.h"
#include "base/threading/thread_local.h"
#include "base/threading/thread_restrictions.h"
#include "base/threading/thread_task_runner_handle.h"*/
#include "build/build_config.h"

#include <stddef.h>

/*#include "base/debug/activity_tracker.h"
#include "base/debug/alias.h"
#include "base/debug/crash_logging.h"
#include "base/debug/profiler.h"
#include "base/logging.h"
#include "base/metrics/histogram_macros.h"
#include "base/process/memory.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_id_name_manager.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time_override.h"
#include "base/win/scoped_handle.h"
#include "base/win/windows_version.h"*/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace starboard {
namespace shared {
namespace pthread {

#if !SB_HAS(THREAD_PRIORITY_SUPPORT)
// Default implementation without thread priority support
void ThreadSetPriority(SbThreadPriority /* priority */) {
}
#endif

}  // namespace pthread
}  // namespace shared
}  // namespace starboard

namespace {

struct ThreadParams {
  SbThreadAffinity affinity;
  SbThreadEntryPoint entry_point;
  char name[128];
  void* context;
  SbThreadPriority priority;
};

#if 0
void* ThreadFunc(void* context) {
  ThreadParams* thread_params = static_cast<ThreadParams*>(context);
  SbThreadEntryPoint entry_point = thread_params->entry_point;
  void* real_context = thread_params->context;
  SbThreadAffinity affinity = thread_params->affinity;
  if (thread_params->name[0] != '\0') {
    SbThreadSetName(thread_params->name);
  }

  starboard::shared::pthread::ThreadSetPriority(thread_params->priority);

  delete thread_params;

#if !SB_HAS_QUIRK(THREAD_AFFINITY_UNSUPPORTED)
  if (SbThreadIsValidAffinity(affinity)) {
    cpu_set_t cpu_set;
    CPU_ZERO(&cpu_set);
    CPU_SET(affinity, &cpu_set);
    sched_setaffinity(0, sizeof(cpu_set), &cpu_set);
  }
#endif

  return entry_point(real_context);
}
#endif // 0

// see https://github.com/chromium/chromium/blob/76cd905f0fb391085d670c4d2936fea37e0b67d6/base/threading/platform_thread_win.cc#L120
DWORD __stdcall ThreadFunc(void* context) {
  ThreadParams* thread_params = static_cast<ThreadParams*>(context);
  SbThreadEntryPoint entry_point = thread_params->entry_point;
  void* real_context = thread_params->context;
  SbThreadAffinity affinity = thread_params->affinity;
  if (thread_params->name[0] != '\0') {
    SbThreadSetName(thread_params->name); // see SetNameInternal in platform_thread_win
  }

  starboard::shared::pthread::ThreadSetPriority(thread_params->priority);

  delete thread_params;

/*#if !SB_HAS_QUIRK(THREAD_AFFINITY_UNSUPPORTED)
  if (SbThreadIsValidAffinity(affinity)) {
    cpu_set_t cpu_set;
    CPU_ZERO(&cpu_set);
    CPU_SET(affinity, &cpu_set);
    sched_setaffinity(0, sizeof(cpu_set), &cpu_set);
  }
#endif*/

  return entry_point(real_context);
}

}  // namespace

SbThread SbThreadCreate(int64_t stack_size,
                        SbThreadPriority priority,
                        SbThreadAffinity affinity,
                        bool joinable,
                        const char* name,
                        SbThreadEntryPoint entry_point,
                        void* context) {
  if (stack_size < 0 || !entry_point) {
    return kSbThreadInvalid;
  }

  /*base::Thread::Options options;
  options.stack_size = stack_size;
  options.priority = priority;
  options.joinable = joinable;
  base::Thread thread(name);
  thread.StartWithOptions(options)*/
  //return std::move(thread);

  ThreadParams* params = new ThreadParams();
  params->affinity = affinity;
  params->entry_point = entry_point;
  params->context = context;

  if (name) {
    SbStringCopy(params->name, name, SB_ARRAY_SIZE_INT(params->name));
  } else {
    params->name[0] = '\0';
  }

  params->priority = priority;

  //SbThread thread = kSbThreadInvalid;

  /*{
    bool success =
        options.joinable
            ? PlatformThread::CreateWithPriority(options.stack_size, this,
                                                 &thread, options.priority)
            : PlatformThread::CreateNonJoinableWithPriority(
                  options.stack_size, this, options.priority);
    if (!success) {
      DLOG(ERROR) << "failed to create thread";
      return false;
    }
  }*/

#if defined(ADDRESS_SANITIZER)
  // Set a big thread stack size when in ADDRESS_SANITIZER mode.
  // This eliminates buffer overflows for deeply nested callstacks.
  if (stack_size == 0) {
    stack_size = 4096 * 1024;  // 4MB
  }
#endif

  unsigned int flags = 0;
  if (stack_size > 0) {
    flags = STACK_SIZE_PARAM_IS_A_RESERVATION;
#if defined(ARCH_CPU_32_BITS)
  } else {
    // The process stack size is increased to give spaces to |RendererMain| in
    // |chrome/BUILD.gn|, but keep the default stack size of other threads to
    // 1MB for the address space pressure.
    flags = STACK_SIZE_PARAM_IS_A_RESERVATION;
    stack_size = 1024 * 1024;
#endif
  }

  // Using CreateThread here vs _beginthreadex makes thread creation a bit
  // faster and doesn't require the loader lock to be available.  Our code
  // will  have to work running on CreateThread() threads anyway, since we run
  // code on the Windows thread pool, etc.  For some background on the
  // difference:
  //   http://www.microsoft.com/msj/1099/win32/win321099.aspx
  void* thread_handle;
  thread_handle =
      ::CreateThread(nullptr, stack_size, ThreadFunc, params, flags, nullptr);

  //return thread.GetUnsafePlatformThreadHandle().platform_handle();
  return SbThread(thread_handle);

// see https://github.com/chromium/chromium/blob/ba5cf7b3d18065b934e9a55e2380450f28ad585a/base/threading/platform_thread_posix.cc#L105

#if 0
  WIN_THREAD_attr_t attributes;
  int result = WIN_THREAD_attr_init(&attributes);
  if (!IsSuccess(result)) {
    return kSbThreadInvalid;
  }

  WIN_THREAD_attr_setdetachstate(
      &attributes,
      (joinable ? WIN_THREAD_CREATE_JOINABLE : WIN_THREAD_CREATE_DETACHED));

  if (stack_size > 0) {
    WIN_THREAD_attr_setstacksize(&attributes, stack_size);
  }

  ThreadParams* params = new ThreadParams();
  params->affinity = affinity;
  params->entry_point = entry_point;
  params->context = context;

  if (name) {
    SbStringCopy(params->name, name, SB_ARRAY_SIZE_INT(params->name));
  } else {
    params->name[0] = '\0';
  }

  params->priority = priority;

  SbThread thread = kSbThreadInvalid;
  result = posix_THREAD_create(&thread, &attributes, ThreadFunc, params);

  WIN_THREAD_attr_destroy(&attributes);
  if (IsSuccess(result)) {
    return thread;
  }

  return kSbThreadInvalid;
#endif // 0
}
