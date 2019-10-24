#include "html5_elem_queue.h"

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <emscripten/threading.h>

#include <assert.h>

#if defined(ENABLE_NATIVE_HTML)

namespace html_native {

/* Null, because instance will be initialized on demand. */
GlobalHTML5TaskQueue* GlobalHTML5TaskQueue::instance = 0;

GlobalHTML5TaskQueue* GlobalHTML5TaskQueue::getInstance()
{
  if (!instance) {
      instance = new GlobalHTML5TaskQueue();
  }

  return instance;
}

GlobalHTML5TaskQueue::GlobalHTML5TaskQueue()
{}

void GlobalHTML5TaskQueue::scheduleTaskInMainThread(
  NativeHTMLTaskParams* taskArgs,
  const bool async)
{
  runInMainThread(
    /// \note “positive lambda”,
    /// one with a + in front of it;
    /// this causes automatic conversion to a function pointer
    /// Can use only non-capturing lambda with C-style function pointer!
    /// see https://vorbrodt.blog/2019/03/24/c-style-callbacks-and-lambda-functions/
    +[](void* taskData) {
      assert(emscripten_is_main_runtime_thread());

      html_native::NativeHTMLTaskParams* taskArgs
        = reinterpret_cast<html_native::NativeHTMLTaskParams*>(taskData);
      printf("213312132213\n");
      DCHECK(taskArgs->cb);
      if(taskArgs->cb) {
        taskArgs->cb(std::move(taskArgs->params));
      }

      /// \todo free mem
      //delete taskArgs;
    }
    , taskArgs
    , async);
}

#if defined(EMSCRIPTEN_SUPPORTS_ASYNC_RUN)

#if defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)
#error "enable threads for emscripten_async_run_in_main_runtime_thread"
#endif // defined(__EMSCRIPTEN__) && !defined(__EMSCRIPTEN_PTHREADS__)

static void runOnBrowserThread(NativeHTMLTask task,
  NativeHTMLTaskParams* taskArgs, const bool async)
{
  if(async) {
    /// \note emscripten_async_* executed in a fire and forget manner
    /// on the main thread in call order
    /// \note emscripten_async_* called from main thread may be sync,
    /// see https://github.com/emscripten-core/emscripten/issues/9086
    emscripten_async_run_in_main_runtime_thread(
      EM_FUNC_SIG_VI /* args count */,
      (void*)task,
      static_cast<void*>(taskArgs));
  } else {
    /// \note emscripten_sync* will be proxied
    /// to be called by the main thread
    /*int retcode =*/
    emscripten_sync_run_in_main_runtime_thread(
      EM_FUNC_SIG_VI /* args count */,
      (void*)task,
      static_cast<void*>(taskArgs));
    //DCHECK(retcode != 0);
  }
}

#else  // EMSCRIPTEN_SUPPORTS_ASYNC_RUN

static void runOnBrowserThread(NativeHTMLTask task,
  NativeHTMLTaskParams* taskArgs, const bool async)
{
  /// \note no emscripten_sync_* without threads, so just run func here
  task(static_cast<void*>(taskArgs));
}

#endif // EMSCRIPTEN_SUPPORTS_ASYNC_RUN

void GlobalHTML5TaskQueue::runInMainThread(NativeHTMLTask task,
  NativeHTMLTaskParams* taskArgs, const bool async)
{
  runOnBrowserThread(task, taskArgs, async);
}

  /* Here will be the instance stored. */
  static GlobalHTML5TaskQueue* instance;

} // namespace html_native

#endif // ENABLE_NATIVE_HTML

#endif // OS_EMSCRIPTEN
