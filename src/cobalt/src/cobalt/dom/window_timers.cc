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

#include "cobalt/dom/window_timers.h"

#include <limits>
#include <memory>

#include "base/bind.h"
#include "base/bind_helpers.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/dom/global_stats.h"
#include "nb/memory_scope.h"

namespace cobalt {
namespace dom {

int WindowTimers::SetTimeout(const TimerCallbackArg& handler, int timeout) {
  TRACK_MEMORY_SCOPE("DOM");
  int handle = GetFreeTimerHandle();
  DCHECK(handle);

  if (handle == 0) {  // unable to get a free timer handle
    // avoid accidentally overwriting existing timers
    return 0;
  }

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  if (callbacks_active_) {
    auto* timer = new base::OneShotTimer();
    timer->Start(FROM_HERE, base::TimeDelta::FromMilliseconds(timeout),
                 base::Bind(&WindowTimers::RunTimerCallback,
                            base::Unretained(this), handle));
    timers_[handle] = new TimerInfo(
        owner_, std::unique_ptr<base::internal::TimerBase>(timer), handler);
#if defined(ENABLE_DEBUGGER_HOOKS)
    debugger_hooks_.AsyncTaskScheduled(timers_[handle], "SetTimeout");
#endif // ENABLE_DEBUGGER_HOOKS
  } else {
    timers_[handle] = nullptr;
  }
#endif // TODO

  return handle;
}

void WindowTimers::ClearTimeout(int handle) {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  timers_.erase(handle);
#endif // TODO
}

int WindowTimers::SetInterval(const TimerCallbackArg& handler, int timeout) {
  int handle = GetFreeTimerHandle();
  DCHECK(handle);

  if (handle == 0) {  // unable to get a free timer handle
    // avoid accidentally overwriting existing timers
    return 0;
  }

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  if (callbacks_active_) {
    auto* timer(new base::RepeatingTimer());
    timer->Start(FROM_HERE, base::TimeDelta::FromMilliseconds(timeout),
                 base::Bind(&WindowTimers::RunTimerCallback,
                            base::Unretained(this), handle));
    timers_[handle] = new TimerInfo(
        owner_, std::unique_ptr<base::internal::TimerBase>(timer), handler);
#if defined(ENABLE_DEBUGGER_HOOKS)
    debugger_hooks_.AsyncTaskScheduled(timers_[handle], "SetInterval");
#endif // ENABLE_DEBUGGER_HOOKS
  } else {
    timers_[handle] = nullptr;
  }
#endif // TODO

  return handle;
}

void WindowTimers::ClearInterval(int handle) {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  Timers::iterator timer = timers_.find(handle);
  if (timer != timers_.end()) {
#if defined(ENABLE_DEBUGGER_HOOKS)
    debugger_hooks_.AsyncTaskCanceled(timer->second);
#endif // ENABLE_DEBUGGER_HOOKS
    timers_.erase(timer);
  }
#endif // TODO
}

void WindowTimers::ClearAllIntervalsAndTimeouts() {
#if defined(ENABLE_DEBUGGER_HOOKS)
  for (auto& timer_entry : timers_) {
    debugger_hooks_.AsyncTaskCanceled(timer_entry.second);
  }
#endif // ENABLE_DEBUGGER_HOOKS

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  timers_.clear();
#endif
}

void WindowTimers::DisableCallbacks() {
  callbacks_active_ = false;

  // Immediately cancel any pending timers.
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  for (auto& timer_entry : timers_) {
#if defined(ENABLE_DEBUGGER_HOOKS)
    debugger_hooks_.AsyncTaskCanceled(timer_entry.second);
#endif // ENABLE_DEBUGGER_HOOKS

    timer_entry.second = nullptr;
  }
#endif // TODO

}

int WindowTimers::GetFreeTimerHandle() {
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  int next_timer_index = current_timer_index_;
  while (true) {
    if (next_timer_index == std::numeric_limits<int>::max()) {
      next_timer_index = 1;
    } else {
      ++next_timer_index;
    }
    if (timers_.find(next_timer_index) == timers_.end()) {
      current_timer_index_ = next_timer_index;
      return current_timer_index_;
    }
    if (next_timer_index == current_timer_index_) {
      break;
    }
  }
#endif // TODO
  DLOG(INFO) << "No available timer handle.";
  return 0;
}

void WindowTimers::RunTimerCallback(int handle) {
  TRACE_EVENT0("cobalt::dom", "WindowTimers::RunTimerCallback");
  DCHECK(callbacks_active_)
      << "All timer callbacks should have already been cancelled.";
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  Timers::iterator timer = timers_.find(handle);
  DCHECK(timer != timers_.end());

  // The callback is now being run. Track it in the global stats.
  GlobalStats::GetInstance()->StartJavaScriptEvent();

#if defined(ENABLE_DEBUGGER_HOOKS)
  {
    // Keep a |TimerInfo| reference, so it won't be released when running the
    // callback.
    scoped_refptr<TimerInfo> timer_info = timer->second;
    base::ScopedAsyncTask async_task(
    debugger_hooks_,
    timer_info);
    timer_info->callback_reference().value().Run();
  }
#endif // ENABLE_DEBUGGER_HOOKS

  // After running the callback, double check whether the timer is still there
  // since it might be deleted inside the callback.
  timer = timers_.find(handle);
  // If the timer is not deleted and is not running, it means it is an oneshot
  // timer and has just fired the shot, and it should be deleted now.
  if (timer != timers_.end() && !timer->second->timer()->IsRunning()) {

#if defined(ENABLE_DEBUGGER_HOOKS)
    debugger_hooks_.AsyncTaskCanceled(timer->second);
#endif // ENABLE_DEBUGGER_HOOKS

    timers_.erase(timer);
  }
#endif // TODO

  // The callback has finished running. Stop tracking it in the global stats.
  GlobalStats::GetInstance()->StopJavaScriptEvent();
}

}  // namespace dom
}  // namespace cobalt
