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
#ifndef COBALT_BASE_DEBUGGER_HOOKS_H_
#define COBALT_BASE_DEBUGGER_HOOKS_H_

#include <string>

namespace base {

// Interface to allow the WebModule and the various objects implementing the
// DOM, etc. to report their behaviour to the web debugger, without needing to
// directly access the DebugModule.
class DebuggerHooks {
 public:
  // Record the JavaScript stack on the WebModule thread at the point a task is
  // initiated that will run at a later time (on the same thread), allowing it
  // to be seen as the originator when breaking in the asynchronous task.
  //
  // |task| is a pointer to any arbitrary object (e.g. callback, timer, etc.)
  // uniquely associated with the execution that will take place at a later
  // time.
  //
  // |name| is a user-visible label shown in the debugger to identify what the
  // asynchronous stack trace is.
  //
  // |recurring| is true if the task may be run more than once.
  virtual void AsyncTaskScheduled(void* task, const std::string& name,
                                  bool recurring = false) const = 0;

  // Inform the debugger that a scheduled task is starting to run.
  virtual void AsyncTaskStarted(void* task) const = 0;

  // Inform the debugger that a scheduled task has finished running.
  virtual void AsyncTaskFinished(void* task) const = 0;

  // Inform the debugger that a scheduled task will no longer be run, and that
  // it may free any resources associated with it.
  virtual void AsyncTaskCanceled(void* task) const = 0;
};

#if defined(ENABLE_DEBUGGER_HOOKS)
// Helper to start & finish async tasks using RAII.
class ScopedAsyncTask {
 public:
  ScopedAsyncTask(const DebuggerHooks& debugger_hooks, void* task)
      : debugger_hooks_(debugger_hooks), task_(task) {
    debugger_hooks_.AsyncTaskStarted(task_);
  }
  ~ScopedAsyncTask() { debugger_hooks_.AsyncTaskFinished(task_); }

 private:
  const DebuggerHooks& debugger_hooks_;
  void* const task_;
};
#else
// Helper to start & finish async tasks using RAII.
class ScopedAsyncTask {
 public:
  ScopedAsyncTask(void* task)
      : task_(task) {}
  ~ScopedAsyncTask() {}

 private:
  void* const task_;
};
#endif

// Null implementation for gold builds and tests where there is no debugger.
class NullDebuggerHooks : public DebuggerHooks {
 public:
  void AsyncTaskScheduled(void* task, const std::string& name,
                          bool recurring) const override {}
  void AsyncTaskStarted(void* task) const override {}
  void AsyncTaskFinished(void* task) const override {}
  void AsyncTaskCanceled(void* task) const override {}
};

}  // namespace base

#endif  // COBALT_BASE_DEBUGGER_HOOKS_H_
