#include "html5_elem_queue.h"

#if defined(__EMSCRIPTEN__)

#include <string>
#include <codecvt> /// \note for UTF-8 on WASM
#include <locale>

//#if defined(ENABLE_NATIVE_HTML)

namespace html_native {

std::wstring utf8_to_wstring(const std::string& str) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.from_bytes(str);
}

std::string wstring_to_utf8(const std::wstring& str) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.to_bytes(str);
}

/// \todo we can place globals into array to compare offset + array.size()
const int GlobalHTML5TaskQueue::kEmNodeRootGUID = -1000;

const int GlobalHTML5TaskQueue::kEmNodeHeadGUID = -1001;

const int GlobalHTML5TaskQueue::kEmNodeTitleGUID = -1002;

const int GlobalHTML5TaskQueue::kEmNodeHTMLGUID = -1003;

const int GlobalHTML5TaskQueue::kEmNodeBodyGUID = -1004;

const int GlobalHTML5TaskQueue::kEmNodeDocumentGUID = -1005;

void setEmNodeGUIDAsRoot(int& guid) {
  guid = html_native::GlobalHTML5TaskQueue::kEmNodeRootGUID;
}

bool isGUIDPredefined(const int guid) {
  /// \todo we can place globals into array and compare offset + array.size()
  return html_native::isEmNodeGUIDRoot(guid)
    || guid == html_native::GlobalHTML5TaskQueue::kEmNodeHeadGUID
    || guid == html_native::GlobalHTML5TaskQueue::kEmNodeTitleGUID
    || guid == html_native::GlobalHTML5TaskQueue::kEmNodeHTMLGUID
    || guid == html_native::GlobalHTML5TaskQueue::kEmNodeBodyGUID
    || guid == html_native::GlobalHTML5TaskQueue::kEmNodeDocumentGUID
  ;
}

bool isEmNodeGUIDRoot(const int guid) {
  return guid == html_native::GlobalHTML5TaskQueue::kEmNodeRootGUID;
}

bool isEmNodeGUIDUndefined(const int guid) {
  if(html_native::isGUIDPredefined(guid)) {
    return false;
  }

  return guid < 0;
}

bool isEmNodeGUIDValid(const int guid) {
  if(html_native::isGUIDPredefined(guid)) {
    return true;
  }
  return !html_native::isEmNodeGUIDUndefined(guid);
}

void changeAttrInBrowserThread(const int guid,
  const std::string& attr_name, const std::string& attr_val
  , const bool addedOrRemoved)
{
  auto taskCb
    = [em_node_guid = guid
      , name_arg = attr_name
      , value_arg = attr_val
      , &addedOrRemoved]
       (const html_native::NativeHTMLTaskCbParams&&)
    {
      if(!html_native::isEmNodeGUIDValid(em_node_guid)) {
        return;
      }

      /*if(addedOrRemoved) {
        printf("Element::add_attr %s : %s\n",
          name_arg.c_str(), value_arg.c_str());
      } else {
        printf("Element::remove_attr %s : %s\n",
          name_arg.c_str(), value_arg.c_str());
      }*/

      html_native::changeAttr(em_node_guid,
        name_arg, value_arg);
    };

  html_native::runOnMainBrowserThread(std::move(taskCb));
}

void runOnMainBrowserThread(html_native::NativeHTMLTaskCb&& cb) {
  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(cb),
        std::move(cbParams)
      },
      true // async if threads enabled
    );
}

emscripten::val getEmCxxDomHelpers() {
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val document
    = emscripten::val::global("document");
  DCHECK(!document.isNull()
         && !document.isUndefined());

  DCHECK(document.hasOwnProperty("cxxDomHelpers"));
  return document["cxxDomHelpers"];
}

void changeAttr(const int em_node_guid,
        const std::string& name_arg, const std::string& value_arg)
{
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  cxxDomHelpers.call<emscripten::val>(
        "setAttribute"
        , emscripten::val(em_node_guid)
        , emscripten::val(name_arg.c_str())
        , emscripten::val(value_arg.c_str()));
}

int createTextElementAndGetGUID(const std::string& text) {
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  emscripten::val res
    = cxxDomHelpers.call<emscripten::val>(
        "createTextElement"
        , emscripten::val(html_native::utf8_to_wstring(text))
      );
  DCHECK(!res.isNull()
         && !res.isUndefined());

  return res.as<int>();
}

int createElementAndGetGUID(const std::string& tagName) {
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  emscripten::val res
    = cxxDomHelpers.call<emscripten::val>(
        "createElement"
        , emscripten::val(tagName.c_str()));
  DCHECK(!res.isNull()
         && !res.isUndefined());

  return res.as<int>();
}

void getElement(const int guid, emscripten::val* output) {
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  DCHECK(output);

  (*output)
    = cxxDomHelpers.call<emscripten::val>(
        "getElement"
        , emscripten::val(guid));
}

void appendChild(const int parentGUID, const int childGUID) {
  /// \note must execute only in main browser thread!
  DCHECK(EM_IS_MAIN_THREAD());

  emscripten::val cxxDomHelpers
    = getEmCxxDomHelpers();
  DCHECK(!cxxDomHelpers.isNull()
         && !cxxDomHelpers.isUndefined());

  emscripten::val res
    = cxxDomHelpers.call<emscripten::val>(
        "appendChild"
        , emscripten::val(parentGUID)
        , emscripten::val(childGUID));
}

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
      DCHECK(EM_IS_MAIN_THREAD());

      html_native::NativeHTMLTaskParams* taskArgs
        = reinterpret_cast<html_native::NativeHTMLTaskParams*>(taskData);
      //printf("213312132213\n");
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

//#endif // ENABLE_NATIVE_HTML

#endif // OS_EMSCRIPTEN
