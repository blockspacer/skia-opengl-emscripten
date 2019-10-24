#include "html5_elem_queue.h"

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <emscripten/threading.h>

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
  NativeHTMLTask task, NativeHTMLTaskParams* taskArgs,
  const bool async)
{
  runInMainThread(task, taskArgs, async);
}

void GlobalHTML5TaskQueue::runInMainThread(NativeHTMLTask task,
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

  /* Here will be the instance stored. */
  static GlobalHTML5TaskQueue* instance;

} // namespace html_native

#endif // ENABLE_NATIVE_HTML

#endif // OS_EMSCRIPTEN
