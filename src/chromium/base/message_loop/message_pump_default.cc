// Copyright (c) 2006-2008 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/message_loop/message_pump_default.h"

#include "base/auto_reset.h"
#include "base/logging.h"
#include "base/threading/thread_restrictions.h"
#include "build/build_config.h"

#if defined(OS_MACOSX)
#include <mach/thread_policy.h>

#include "base/mac/mach_logging.h"
#include "base/mac/scoped_mach_port.h"
#include "base/mac/scoped_nsautorelease_pool.h"
#endif

#if defined(__EMSCRIPTEN__)
#include <emscripten/emscripten.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <functional>
#include <memory>

namespace base {

MessagePumpDefault::MessagePumpDefault()
    : keep_running_(true),
      event_(WaitableEvent::ResetPolicy::AUTOMATIC,
             WaitableEvent::InitialState::NOT_SIGNALED) {
  event_.declare_only_used_while_idle();
}

MessagePumpDefault::~MessagePumpDefault() = default;

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
// see https://github.com/chadaustin/Web-Benchmarks/blob/master/embind_calls/bench.cpp#L90
static void emscripten_yield_call(std::function<void()> f, const int ms = 500) {
    printf("emscripten_yield_call pump\n");
    auto p = new std::function<void()>(f);
    emscripten_async_call([](void* p) {
        printf("emscripten_async_call pump\n");
        auto q = reinterpret_cast<std::function<void()>*>(p);
        (*q)();
        delete q;
    }, p, ms);
}
#endif

void MessagePumpDefault::Run(Delegate* delegate) {
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  //DCHECK(g_delegate = nullptr); // may be changed!
  g_delegate = delegate;
#endif

  AutoReset<bool> auto_reset_keep_running(&keep_running_, true);
  //printf("MessagePumpDefault::Run 1\n");

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // TODO
  periodicWrapper();
#else
  for (;;) loopCore(delegate);
#endif
}

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
void MessagePumpDefault::periodicWrapper() {
    if (!g_delegate || !keep_running_) {
      //printf("periodicWrapper stopped\n");
      return;
    }

    /// \note need to prolong binded args lifetime
    std::function<void()> f = std::bind(&MessagePumpDefault::periodicWrapper, this);

    loopCore();

    const int em_call_millis = 100; // check period
    // see https://emscripten.org/docs/api_reference/emscripten.h.html#c.emscripten_async_call
    emscripten_yield_call(f, em_call_millis);
}

void MessagePumpDefault::loopCore() {
  if (!g_delegate || !keep_running_) {
    //printf("loopCore stopped\n");
    return;
  }
  loopCore(g_delegate);
}
#endif

void MessagePumpDefault::loopCore(Delegate* delegate) {
  //if (!delegate || !keep_running_) {
  //  printf("invalid delegate in MessagePump\n");
  //  return;
  //}
  // was 'for (;;)' and caused hang in browser
  for (int i = 0; i < 1; i++) {
    //printf("MessagePumpDefault::Run 2\n");
  #if defined(OS_MACOSX)
    mac::ScopedNSAutoreleasePool autorelease_pool;
  #endif
    //if (!delegate || !keep_running_) {
    //  printf("invalid delegate in MessagePump\n");
    //  return;
    //}
    Delegate::NextWorkInfo next_work_info = delegate->DoSomeWork();
    bool has_more_immediate_work = next_work_info.is_immediate();
    if (!keep_running_)
      break;

    //printf("MessagePumpDefault::Run 3\n");
    if (has_more_immediate_work)
      continue;

    //printf("MessagePumpDefault::Run 4\n");
    has_more_immediate_work = delegate->DoIdleWork();
    if (!keep_running_)
      break;

    //printf("MessagePumpDefault::Run 5\n");
    if (has_more_immediate_work)
      continue;

  // TODO: try emscripten_sleep on wasm without pthread support (-s ASYNCIFY)
  #if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
    if (next_work_info.delayed_run_time.is_max()) {
      event_.Wait();
    } else {
      event_.TimedWait(next_work_info.remaining_delay());
    }
  #endif

    // Since event_ is auto-reset, we don't need to do anything special here
    // other than service each delegate method.
  }
}

void MessagePumpDefault::Quit() {
  keep_running_ = false;
}

void MessagePumpDefault::ScheduleWork() {
  // Since this can be called on any thread, we need to ensure that our Run
  // loop wakes up.
//printf("MessagePumpDefault::ScheduleWork 1\n");
  event_.Signal();
}

void MessagePumpDefault::ScheduleDelayedWork(
    const TimeTicks& delayed_work_time) {
  // Since this is always called from the same thread as Run(), there is nothing
  // to do as the loop is already running. It will wait in Run() with the
  // correct timeout when it's out of immediate tasks.
  // TODO(gab): Consider removing ScheduleDelayedWork() when all pumps function
  // this way (bit.ly/merge-message-pump-do-work).
}

#if defined(OS_MACOSX)
void MessagePumpDefault::SetTimerSlack(TimerSlack timer_slack) {
  thread_latency_qos_policy_data_t policy{};
  policy.thread_latency_qos_tier = timer_slack == TIMER_SLACK_MAXIMUM
                                       ? LATENCY_QOS_TIER_3
                                       : LATENCY_QOS_TIER_UNSPECIFIED;
  mac::ScopedMachSendRight thread_port(mach_thread_self());
  kern_return_t kr =
      thread_policy_set(thread_port.get(), THREAD_LATENCY_QOS_POLICY,
                        reinterpret_cast<thread_policy_t>(&policy),
                        THREAD_LATENCY_QOS_POLICY_COUNT);
  MACH_DVLOG_IF(1, kr != KERN_SUCCESS, kr) << "thread_policy_set";
}
#endif

}  // namespace base
