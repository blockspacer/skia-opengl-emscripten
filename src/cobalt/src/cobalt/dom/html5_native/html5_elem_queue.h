#pragma once

/// \note place base_export.h before defined(OS_*) and EM_IS_MAIN_THREAD
#include "base/base_export.h"
#include "base/callback.h"
#include "base/containers/stack.h"
#include "base/macros.h"
#include "base/synchronization/lock.h"
#include "base/thread_annotations.h"
#include "base/compiler_specific.h"

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <emscripten/threading.h>

#include <algorithm>
#include <functional>
#include <vector>

#if !defined(EM_IS_MAIN_THREAD)
#error "need to define EM_IS_MAIN_THREAD"
#endif // EM_IS_MAIN_THREAD

//#if defined(ENABLE_NATIVE_HTML)

namespace html_native {

/// \note make sure that source files are UTF with BOM
/// \note JavaScript strings are encoded with UTF16-LE. (little endian)
std::wstring utf8_to_wstring(const std::string& str);

/// \note make sure that source files are UTF with BOM
/// \note JavaScript strings are encoded with UTF16-LE. (little endian)
std::string wstring_to_utf8(const std::wstring& str);

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

void changeAttrInBrowserThread(const int guid,
  const std::string& attr_name, const std::string& attr_val
  , const bool addedOrRemoved);

void runOnMainBrowserThread(html_native::NativeHTMLTaskCb&& cb);

void changeAttr(const int em_node_guid,
        const std::string& name_arg, const std::string& value_arg);

void setEmNodeGUIDAsRoot(int& guid);

bool isGUIDPredefined(const int guid);

bool isEmNodeGUIDRoot(const int guid);

bool isEmNodeGUIDUndefined(const int guid);

bool isEmNodeGUIDValid(const int guid);

/// \note must execute only in main browser thread!
emscripten::val getEmCxxDomHelpers();

int createElementAndGetGUID(const std::string& tagName);

int createTextElementAndGetGUID(const std::string& text);

void getElement(const int guid, emscripten::val* output);

void appendChild(const int parentGUID, const int childGUID);

class GlobalHTML5TaskQueue {
 public:
  /* Static access method. */
  static GlobalHTML5TaskQueue* getInstance();

  /// \nore manually free taskArgs pointer in callback
  void scheduleTaskInMainThread(NativeHTMLTaskParams* taskArgs, const bool async = true);

 public:
  static const int kEmNodeRootGUID;

  static const int kEmNodeHeadGUID;

  static const int kEmNodeTitleGUID;

  static const int kEmNodeHTMLGUID;;

  /// \note kEmNodeRootGUID used as kEmNodeBodyGUID
  static const int kEmNodeBodyGUID;

  static const int kEmNodeDocumentGUID;

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

//#endif // ENABLE_NATIVE_HTML

#endif // OS_EMSCRIPTEN

