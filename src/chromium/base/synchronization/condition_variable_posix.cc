// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/synchronization/condition_variable.h"

#include <errno.h>
#include <stdint.h>
#include <sys/time.h>

#include "base/optional.h"
#include "base/synchronization/lock.h"
#include "base/threading/scoped_blocking_call.h"
#include "base/threading/thread_restrictions.h"
#include "base/time/time.h"
#include "build/build_config.h"

#if defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)
#include <emscripten/emscripten.h>
#endif

namespace base {

ConditionVariable::ConditionVariable(Lock* user_lock)
    : user_mutex_(user_lock->lock_.native_handle())
#if DCHECK_IS_ON()
    , user_lock_(user_lock)
#endif
{
  int rv = 0;
  // http://crbug.com/293736
  // NaCl doesn't support monotonic clock based absolute deadlines.
  // On older Android platform versions, it's supported through the
  // non-standard pthread_cond_timedwait_monotonic_np. Newer platform
  // versions have pthread_condattr_setclock.
  // Mac can use relative time deadlines.
#if defined(DISABLE_PTHREADS)
  // no threading
#elif !defined(OS_MACOSX) && !defined(OS_NACL) && \
      !(defined(OS_ANDROID) && defined(HAVE_PTHREAD_COND_TIMEDWAIT_MONOTONIC))
  pthread_condattr_t attrs;
  rv = pthread_condattr_init(&attrs);
  DCHECK_EQ(0, rv);
  pthread_condattr_setclock(&attrs, CLOCK_MONOTONIC);
  rv = pthread_cond_init(&condition_, &attrs);
  pthread_condattr_destroy(&attrs);
#else
  rv = pthread_cond_init(&condition_, NULL);
#endif
  DCHECK_EQ(0, rv);
}

ConditionVariable::~ConditionVariable() {
#if defined(OS_MACOSX)
  // This hack is necessary to avoid a fatal pthreads subsystem bug in the
  // Darwin kernel. http://crbug.com/517681.
  {
    base::Lock lock;
    base::AutoLock l(lock);
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = 1;
    pthread_cond_timedwait_relative_np(&condition_, lock.lock_.native_handle(),
                                       &ts);
  }
#endif

#if defined(DISABLE_PTHREADS)
  // no threading
#else
  int rv = pthread_cond_destroy(&condition_);
  DCHECK_EQ(0, rv);
#endif // DISABLE_PTHREADS
}

void ConditionVariable::Wait() {
  Optional<internal::ScopedBlockingCallWithBaseSyncPrimitives>
      scoped_blocking_call;
  if (waiting_is_blocking_)
    scoped_blocking_call.emplace(BlockingType::MAY_BLOCK);

#if DCHECK_IS_ON()
  user_lock_->CheckHeldAndUnmark();
#endif

#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) && !defined(HAS_ASYNC)
  // todo
#elif defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS) && defined(HAS_ASYNC)
  // can`t wait infinitely on main (single) thread
  const TimeDelta max_wait = TimeDelta::FromMinutes(1);
  const bool finite_time = !max_wait.is_max();
  if (finite_time) {
    // requires emscripten.h
    HTML5_ASYNC_SLEEP(max_wait.InMilliseconds());
  } else {
    P_LOG("WARNING: ConditionVariable::TimedWait infinite SLEEP\n");
  }
#elif defined(DISABLE_PTHREADS)
  // no threading
#else
  int rv = pthread_cond_wait(&condition_, user_mutex_);
  DCHECK_EQ(0, rv);
#endif // DISABLE_PTHREADS

#if DCHECK_IS_ON()
  user_lock_->CheckUnheldAndMark();
#endif
}

void ConditionVariable::TimedWait(const TimeDelta& max_time) {
  Optional<internal::ScopedBlockingCallWithBaseSyncPrimitives>
      scoped_blocking_call;
  if (waiting_is_blocking_)
    scoped_blocking_call.emplace(BlockingType::MAY_BLOCK);

  int64_t usecs = max_time.InMicroseconds();
  struct timespec relative_time;
  relative_time.tv_sec = usecs / Time::kMicrosecondsPerSecond;
  relative_time.tv_nsec =
      (usecs % Time::kMicrosecondsPerSecond) * Time::kNanosecondsPerMicrosecond;

#if DCHECK_IS_ON()
  user_lock_->CheckHeldAndUnmark();
#endif

#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS)) && !defined(HAS_ASYNC)
  // no threading
  int rv = 0;
  // todo
#elif defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS) && defined(HAS_ASYNC)
  // no threading
  int rv = 0;
  Optional<TimeTicks> current_time;
  const bool finite_time = !max_time.is_max();
  if (finite_time) {
    // requires emscripten.h
    HTML5_ASYNC_SLEEP(max_time.InMilliseconds());
  } else {
    P_LOG("WARNING: ConditionVariable::TimedWait infinite SLEEP\n");
  }
#elif defined(DISABLE_PTHREADS)
  // no threading
  int rv = 0;
#elif defined(OS_MACOSX)
  int rv = pthread_cond_timedwait_relative_np(
      &condition_, user_mutex_, &relative_time);
#else
  // The timeout argument to pthread_cond_timedwait is in absolute time.
  struct timespec absolute_time;
#if defined(OS_NACL)
  // See comment in constructor for why this is different in NaCl.
  struct timeval now;
  gettimeofday(&now, NULL);
  absolute_time.tv_sec = now.tv_sec;
  absolute_time.tv_nsec = now.tv_usec * Time::kNanosecondsPerMicrosecond;
#else
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC, &now);
  absolute_time.tv_sec = now.tv_sec;
  absolute_time.tv_nsec = now.tv_nsec;
#endif

  absolute_time.tv_sec += relative_time.tv_sec;
  absolute_time.tv_nsec += relative_time.tv_nsec;
  absolute_time.tv_sec += absolute_time.tv_nsec / Time::kNanosecondsPerSecond;
  absolute_time.tv_nsec %= Time::kNanosecondsPerSecond;
  DCHECK_GE(absolute_time.tv_sec, now.tv_sec);  // Overflow paranoia

#if defined(OS_ANDROID) && defined(HAVE_PTHREAD_COND_TIMEDWAIT_MONOTONIC)
  int rv = pthread_cond_timedwait_monotonic_np(
      &condition_, user_mutex_, &absolute_time);
#else
  int rv = pthread_cond_timedwait(&condition_, user_mutex_, &absolute_time);
#endif  // OS_ANDROID && HAVE_PTHREAD_COND_TIMEDWAIT_MONOTONIC
#endif  // OS_MACOSX

  // On failure, we only expect the CV to timeout. Any other error value means
  // that we've unexpectedly woken up.
  DCHECK(rv == 0 || rv == ETIMEDOUT);
#if DCHECK_IS_ON()
  user_lock_->CheckUnheldAndMark();
#endif
}

void ConditionVariable::Broadcast() {
#if defined(DISABLE_PTHREADS)
  // no threading
#else
  int rv = pthread_cond_broadcast(&condition_);
  DCHECK_EQ(0, rv);
#endif // DISABLE_PTHREADS
}

void ConditionVariable::Signal() {
#if defined(DISABLE_PTHREADS)
  // no threading
#else
  int rv = pthread_cond_signal(&condition_);
  DCHECK_EQ(0, rv);
#endif // DISABLE_PTHREADS
}

}  // namespace base
