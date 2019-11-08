// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/loader/fetcher_factory.h"

#include <memory>
#include <sstream>
#include <string>

#include "base/bind.h"
#include "base/files/file_path.h"
#include "base/logging.h"
#include "base/path_service.h"
#include "cobalt/loader/about_fetcher.h"
#include "cobalt/loader/blob_fetcher.h"
#include "cobalt/loader/cache_fetcher.h"
#include "cobalt/loader/embedded_fetcher.h"
#include "cobalt/loader/error_fetcher.h"
#include "cobalt/loader/file_fetcher.h"
#include "cobalt/loader/net_fetcher.h"

// custom
#include "cobalt/dom/url_utils.h"
#include "url/gurl.h"

#if !defined(__EMSCRIPTEN__) && defined(__TODO__)
#include "cobalt/network/network_module.h"
#endif

namespace cobalt {
namespace loader {
namespace {

#if defined(ENABLE_ABOUT_SCHEME)
const char kAboutScheme[] = "about";
#endif

bool FileURLToFilePath(const GURL& url, base::FilePath* file_path) {
  printf("FileURLToFilePath host %s\n", url.host().c_str());
  printf("FileURLToFilePath path %s\n", url.path().c_str());
  DCHECK(url.is_valid() && url.SchemeIsFile());
  std::string path = url.path();
  printf("FileURLToFilePath path %s\n", path.c_str());
  DCHECK_EQ('/', path[0]);
  path.erase(0, 1);
  *file_path = base::FilePath(path);
  return !file_path->empty();
}

std::string ClipUrl(const GURL& url, size_t length) {
  const std::string& spec = url.possibly_invalid_spec();
  if (spec.size() < length) {
    return spec;
  }

  size_t remain = length - 5;
  size_t head = remain / 2;
  size_t tail = remain - head;

  return spec.substr(0, head) + "[...]" + spec.substr(spec.size() - tail);
}

}  // namespace

FetcherFactory::FetcherFactory(network::NetworkModule* network_module)
    : file_thread_("File"),
      network_module_(network_module),
      read_cache_callback_() {
  file_thread_.Start();
}

FetcherFactory::FetcherFactory(network::NetworkModule* network_module,
                               const base::FilePath& extra_search_dir)
    : file_thread_("File"),
      network_module_(network_module),
      extra_search_dir_(extra_search_dir),
      read_cache_callback_() {
  file_thread_.Start();
}

FetcherFactory::FetcherFactory(
    network::NetworkModule* network_module,
    const base::FilePath& extra_search_dir,
    const BlobFetcher::ResolverCallback& blob_resolver,
    const base::Callback<int(const std::string&, std::unique_ptr<char[]>*)>&
        read_cache_callback)
    : file_thread_("File"),
      network_module_(network_module),
      extra_search_dir_(extra_search_dir),
      blob_resolver_(blob_resolver),
      read_cache_callback_(read_cache_callback) {
  file_thread_.Start();
}

std::unique_ptr<Fetcher> FetcherFactory::CreateFetcher(
    const GURL& url, Fetcher::Handler* handler) {
  P_LOG("CreateFetcher\n");
  return CreateSecureFetcher(url,
#if defined(ENABLE_COBALT_CSP)
                              csp::SecurityCallback(),
#endif
                              kNoCORSMode,
                             Origin(), handler);
}

std::unique_ptr<Fetcher> FetcherFactory::CreateSecureFetcher(
    const GURL& url,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    RequestMode request_mode, const Origin& origin, Fetcher::Handler* handler) {
  P_LOG("CreateSecureFetcher\n");
  DLOG(INFO) << "Fetching: " << ClipUrl(url, 80);

//#ifdef __TODO__
  if (!url.is_valid()) {
    printf("url.!is_valid %s\n", url.path().c_str());
    std::stringstream error_message;
    error_message << "URL is invalid: " << url;
    return std::unique_ptr<Fetcher>(
        new ErrorFetcher(handler, error_message.str()));
  }

#if defined(__EMSCRIPTEN__)
  if ((url.SchemeIs("https") || url.SchemeIs("http") || url.SchemeIs("data"))) {
    // TODO: xhr fetcher for emscripten
  }
#else
  if ((url.SchemeIs("https") || url.SchemeIs("http") || url.SchemeIs("data")) &&
      network_module_) {
    printf("url.network_module_ %s\n", url.path().c_str());
#if defined(ENABLE_GNET)
    NetFetcher::Options options;
    return std::unique_ptr<Fetcher>(
        new NetFetcher(url,
#if defined(ENABLE_COBALT_CSP)
        url_security_callback,
#endif
        handler,

#if !defined(__EMSCRIPTEN__) && defined(__TODO__)
        network_module_,
#endif
                       options, request_mode, origin));
#endif
  }
#endif // __EMSCRIPTEN__

  if (url.SchemeIs("blob") && !blob_resolver_.is_null()) {
    printf("url.blob %s\n", url.path().c_str());
    return std::unique_ptr<Fetcher>(
        new BlobFetcher(url, handler, blob_resolver_));
  }

  if (url.SchemeIs(kEmbeddedScheme)) {
    printf("url.kEmbeddedScheme %s\n", url.path().c_str());
    EmbeddedFetcher::Options options;
    return std::unique_ptr<Fetcher>(
        new EmbeddedFetcher(url,
#if defined(ENABLE_COBALT_CSP)
        url_security_callback,
#endif
        handler, options));
  }

  // h5vcc-cache: scheme requires read_cache_callback_ which is not available
  // in the main WebModule.
  if (url.SchemeIs(kCacheScheme) && !read_cache_callback_.is_null()) {
    printf("url.kCacheScheme %s\n", url.path().c_str());
    return std::unique_ptr<Fetcher>(new CacheFetcher(
        url,
#if defined(ENABLE_COBALT_CSP)
        url_security_callback,
#endif
        handler, read_cache_callback_));
  }

  if (url.SchemeIsFile()) {
    printf("url.SchemeIsFile %s\n", url.path().c_str());

    /// \todo use config to disable auto-prefixer
    // not in spec
#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
    if(StartsWith(url.path(), "file:///",
                         base::CompareCase::INSENSITIVE_ASCII)) {
       base::StringPiece new_path = url.path();
       /*if(StartsWith(new_path, "/",
                         base::CompareCase::INSENSITIVE_ASCII)) {
          new_path.remove_prefix(1);
       }*/
       cobalt::dom::URLUtils url_utils(url);
       url_utils.set_pathname(new_path.as_string());
       url_utils.set_protocol("http");
       printf("(changed) url.SchemeIsFile %s\n", url.path().c_str());
    }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0

    base::FilePath file_path;
    if (!FileURLToFilePath(url, &file_path)) {
      printf("url.!FileURLToFilePath %s\n", url.path().c_str());
      std::stringstream error_message;
      error_message << "File URL cannot be converted to file path: " << url;
      return std::unique_ptr<Fetcher>(
          new ErrorFetcher(handler, error_message.str()));
    }
    printf("url.FileURLToFilePath %s\n", file_path.value().c_str());

    FileFetcher::Options options;

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
    options.message_loop_proxy = file_thread_.task_runner();
#endif

    /// __TODO__
    ///options.message_loop_proxy = base::MessageLoopCurrent::Get().task_runner();
    options.extra_search_dir = extra_search_dir_;
//#ifdef __TODO__
    return std::unique_ptr<Fetcher>(
        new FileFetcher(file_path, handler, options));
//#endif
  }

#if defined(ENABLE_ABOUT_SCHEME)
  if (url.SchemeIs(kAboutScheme)) {
    return std::unique_ptr<Fetcher>(new AboutFetcher(handler));
  }
//#endif

#endif

  //DCHECK(false);
  printf("Unknown fetcher scheme");

  std::stringstream error_message;
  error_message << "Scheme " << url.scheme() << ": is not supported";
  return std::unique_ptr<Fetcher>(
      new ErrorFetcher(handler, error_message.str()));
}

}  // namespace loader
}  // namespace cobalt
