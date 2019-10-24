#pragma once

/// \note place base_export.h before defined(OS_*)
#include "base/base_export.h"
#include "base/callback.h"
#include "base/containers/stack.h"
#include "base/macros.h"
#include "base/synchronization/lock.h"
#include "base/thread_annotations.h"
#include "base/compiler_specific.h"

#if defined(__EMSCRIPTEN__)
#include <algorithm>
#include <functional>
#include <vector>

#if defined(ENABLE_NATIVE_HTML)

namespace html_native {

struct NativeHTMLTaskCbParams {
  int something = 0;
  int something2 = 0;
};

typedef std::function<void(const NativeHTMLTaskCbParams&&)> NativeHTMLTaskCb;

typedef void (*NativeHTMLTask)(void *data);

struct NativeHTMLTaskParams {
  NativeHTMLTaskCb cb;
  NativeHTMLTaskCbParams params;
};

class GlobalHTML5TaskQueue {
 public:
  /* Static access method. */
  static GlobalHTML5TaskQueue* getInstance();

  /// \nore manually free taskArgs pointer in callback
  void scheduleTaskInMainThread(NativeHTMLTaskParams* taskArgs, const bool async = true);

 private:
  /* Private constructor to prevent instancing. */
  GlobalHTML5TaskQueue();

 private:
  /// \nore manually free taskArgs pointer in callback
  void runInMainThread(const NativeHTMLTask task,
    NativeHTMLTaskParams* taskArgs, const bool async = true);

  /* Here will be the instance stored. */
  static GlobalHTML5TaskQueue* instance;

  std::vector<NativeHTMLTask> tasks;
};

} // namespace html_native

#endif // ENABLE_NATIVE_HTML

#endif // OS_EMSCRIPTEN

