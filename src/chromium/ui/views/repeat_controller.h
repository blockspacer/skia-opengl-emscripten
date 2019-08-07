// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_VIEWS_REPEAT_CONTROLLER_H_
#define UI_VIEWS_REPEAT_CONTROLLER_H_

#include "base/callback.h"
#include "base/macros.h"
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
#include "base/timer/timer.h"
#endif

namespace views {

///////////////////////////////////////////////////////////////////////////////
//
// RepeatController
//
//  An object that handles auto-repeating UI actions. There is a longer initial
//  delay after which point repeats become constant. Users provide a callback
//  that is notified when each repeat occurs so that they can perform the
//  associated action.
//
///////////////////////////////////////////////////////////////////////////////
class RepeatController {
 public:
  explicit RepeatController(base::RepeatingClosure callback);
  virtual ~RepeatController();

  // Start repeating.
  void Start();

  // Stop repeating.
  void Stop();

#if !defined(DISABLE_PTHREADS)
  const base::OneShotTimer& timer_for_testing() const { return timer_; }
#endif // DISABLE_PTHREADS

 private:
  // Called when the timer expires.
  void Run();

#if !defined(DISABLE_PTHREADS)
  // The current timer.
  base::OneShotTimer timer_;
#endif // DISABLE_PTHREADS

  base::RepeatingClosure callback_;

  DISALLOW_COPY_AND_ASSIGN(RepeatController);
};

}  // namespace views

#endif  // UI_VIEWS_REPEAT_CONTROLLER_H_
