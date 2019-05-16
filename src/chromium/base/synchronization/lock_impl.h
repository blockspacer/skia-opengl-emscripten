// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_SYNCHRONIZATION_LOCK_IMPL_H_
#define BASE_SYNCHRONIZATION_LOCK_IMPL_H_

#include "base/base_export.h"
#include "base/logging.h"
#include "base/macros.h"
#include "base/thread_annotations.h"
#include "build/build_config.h"

#if defined(OS_WIN)
#include "base/win/windows_types.h"
#elif defined(OS_POSIX) || defined(OS_FUCHSIA)
#include <errno.h>
#include <pthread.h>
#endif

namespace base {
namespace internal {

// This class implements the underlying platform-specific spin-lock mechanism
// used for the Lock class.  Most users should not use LockImpl directly, but
// should instead use Lock.
class BASE_EXPORT LockImpl {
 public:
#if defined(OS_WIN)
  using NativeHandle = CHROME_SRWLOCK;
#elif defined(OS_POSIX) || defined(OS_FUCHSIA)
  using NativeHandle = pthread_mutex_t;
#endif

  LockImpl();
  ~LockImpl();

  // If the lock is not held, take it and return true.  If the lock is already
  // held by something else, immediately return false.
  bool Try();

  // Take the lock, blocking until it is available if necessary.
  void Lock();

  // Release the lock.  This must only be called by the lock's holder: after
  // a successful call to Try, or a call to Lock.
  inline void Unlock();

  // Return the native underlying lock.
  // TODO(awalker): refactor lock and condition variables so that this is
  // unnecessary.
  NativeHandle* native_handle() { return &native_handle_; }

#if defined(OS_POSIX) || defined(OS_FUCHSIA)
  // Whether this lock will attempt to use priority inheritance.
  static bool PriorityInheritanceAvailable();
#endif

 private:
  NativeHandle native_handle_;

  DISALLOW_COPY_AND_ASSIGN(LockImpl);
};

#if defined(OS_EMSCRIPTEN) && !defined(__EMSCRIPTEN_PTHREADS__)
void LockImpl::Unlock() {
}
#elif defined(OS_WIN)
void LockImpl::Unlock() {
  ::ReleaseSRWLockExclusive(reinterpret_cast<PSRWLOCK>(&native_handle_));
}
#elif defined(OS_POSIX) || defined(OS_FUCHSIA)
void LockImpl::Unlock() {
  int rv = pthread_mutex_unlock(&native_handle_);
  DCHECK_EQ(rv, 0) << ". " << strerror(rv);
}
#endif

// This is an implementation used for AutoLock templated on the lock type.
template <class LockType>
class SCOPED_LOCKABLE BasicAutoLock {
 public:
  struct AlreadyAcquired {};

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  explicit BasicAutoLock(LockType& lock) EXCLUSIVE_LOCK_FUNCTION(lock) {}
#else
  explicit BasicAutoLock(LockType& lock) EXCLUSIVE_LOCK_FUNCTION(lock)
      : lock_(lock) {
    lock_.Acquire();
  }
#endif

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  BasicAutoLock(LockType& lock, const AlreadyAcquired&)
      EXCLUSIVE_LOCKS_REQUIRED(lock) {}
#else
  BasicAutoLock(LockType& lock, const AlreadyAcquired&)
      EXCLUSIVE_LOCKS_REQUIRED(lock)
      : lock_(lock) {
    lock_.AssertAcquired();
  }
#endif

  ~BasicAutoLock() UNLOCK_FUNCTION() {
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
#else
    lock_.AssertAcquired();
    lock_.Release();
#endif
  }

 private:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
  LockType& lock_;
#endif
  DISALLOW_COPY_AND_ASSIGN(BasicAutoLock);
};

// This is an implementation used for AutoUnlock templated on the lock type.
template <class LockType>
class BasicAutoUnlock {
 public:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  explicit BasicAutoUnlock(LockType& lock) {}

  ~BasicAutoUnlock() {}
#else
  explicit BasicAutoUnlock(LockType& lock) : lock_(lock) {
    // We require our caller to have the lock.
    lock_.AssertAcquired();
    lock_.Release();
  }

  ~BasicAutoUnlock() { lock_.Acquire(); }
#endif

 private:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
  LockType& lock_;
#endif
  DISALLOW_COPY_AND_ASSIGN(BasicAutoUnlock);
};

// This is an implementation used for AutoLockMaybe templated on the lock type.
template <class LockType>
class SCOPED_LOCKABLE BasicAutoLockMaybe {
 public:

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  explicit BasicAutoLockMaybe(LockType* lock) EXCLUSIVE_LOCK_FUNCTION(lock) {}
#else
  explicit BasicAutoLockMaybe(LockType* lock) EXCLUSIVE_LOCK_FUNCTION(lock)
      : lock_(lock) {
    if (lock_)
      lock_->Acquire();
  }
#endif

  ~BasicAutoLockMaybe() UNLOCK_FUNCTION() {
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
#else
    if (lock_) {
      lock_->AssertAcquired();
      lock_->Release();
    }
#endif
  }

 private:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
  LockType* const lock_;
#endif
  DISALLOW_COPY_AND_ASSIGN(BasicAutoLockMaybe);
};

// This is an implementation used for ReleasableAutoLock templated on the lock
// type.
template <class LockType>
class SCOPED_LOCKABLE BasicReleasableAutoLock {
 public:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  explicit BasicReleasableAutoLock(LockType* lock) EXCLUSIVE_LOCK_FUNCTION(lock) {}
#else
  explicit BasicReleasableAutoLock(LockType* lock) EXCLUSIVE_LOCK_FUNCTION(lock)
      : lock_(lock) {
    DCHECK(lock_);
    lock_->Acquire();
  }
#endif

  ~BasicReleasableAutoLock() UNLOCK_FUNCTION() {

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
    if (lock_) {
      lock_->AssertAcquired();
      lock_->Release();
    }
#endif
  }

  void Release() UNLOCK_FUNCTION() {
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
    DCHECK(lock_);
    lock_->AssertAcquired();
    lock_->Release();
    lock_ = nullptr;
#endif
  }

 private:
#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
  // no lock
#else
  LockType* lock_;
#endif
  DISALLOW_COPY_AND_ASSIGN(BasicReleasableAutoLock);
};

}  // namespace internal
}  // namespace base

#endif  // BASE_SYNCHRONIZATION_LOCK_IMPL_H_
