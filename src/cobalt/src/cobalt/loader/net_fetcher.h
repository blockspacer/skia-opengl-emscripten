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

#ifndef COBALT_LOADER_NET_FETCHER_H_
#define COBALT_LOADER_NET_FETCHER_H_

#include <memory>
#include <string>

#include "base/cancelable_callback.h"
#include "base/memory/ref_counted.h"
#include "base/memory/weak_ptr.h"
#include "base/message_loop/message_loop.h"
#include "base/threading/thread_checker.h"

#if defined(ENABLE_COBALT_CSP)
#include "cobalt/csp/content_security_policy.h"
#endif

#include "cobalt/loader/cobalt_url_fetcher_string_writer.h"
#include "cobalt/loader/fetcher.h"

#if defined(ENABLE_GNET)
#include "cobalt/network/network_module.h"

#include "net/url_request/url_fetcher.h"
#include "net/url_request/url_fetcher_delegate.h"
#include "url/gurl.h"

namespace cobalt {
namespace loader {

// NetFetcher is for fetching data from the network.
class NetFetcher : public Fetcher, public net::URLFetcherDelegate {
 public:
  struct Options {
   public:
    Options() : request_method(net::URLFetcher::GET) {}
    net::URLFetcher::RequestType request_method;
  };

  NetFetcher(const GURL& url, const csp::SecurityCallback& security_callback,
             Handler* handler,

#if !defined(__EMSCRIPTEN__) && defined(__TODO__)
             const network::NetworkModule* network_module,
#endif

             const Options& options, RequestMode request_mode,
             const Origin& origin);
  ~NetFetcher() override;

  // net::URLFetcherDelegate interface
  void OnURLFetchResponseStarted(const net::URLFetcher* source) override;
  void OnURLFetchComplete(const net::URLFetcher* source) override;
  void OnURLFetchDownloadProgress(const net::URLFetcher* source,
                                  int64_t current, int64_t total,
                                  int64_t current_network_bytes) override;

  net::URLFetcher* url_fetcher() const {
    DCHECK(thread_checker_.CalledOnValidThread());
    return url_fetcher_.get();
  }

 private:
  void Start();

  // Empty struct to ensure the caller of |HandleError()| knows that |this|
  // may have been destroyed and handles it appropriately.
  struct ReturnWrapper {
    void InvalidateThis() {}
  };

  // Call our Handler to indicate an error, and cancel the ongoing fetch.
  // It may be that the Handler::OnError() callback  will result in
  // destroying |this|. The caller should return immediately after calling
  // this function.
  // TODO: Fetchers should probably be refcounted so they can
  // guard against being destroyed by callbacks.
  ReturnWrapper HandleError(const std::string& error_message)
      WARN_UNUSED_RESULT;

  // Thread checker ensures all calls to the NetFetcher are made from the same
  // thread that it is created in.
  base::ThreadChecker thread_checker_;
  std::unique_ptr<net::URLFetcher> url_fetcher_;
  csp::SecurityCallback security_callback_;
  // Ensure we can cancel any in-flight Start() task if we are destroyed
  // after being constructed, but before Start() runs.
  base::CancelableClosure start_callback_;

  // True if request mode is CORS and request URL's origin is different from
  // request's origin.
  bool request_cross_origin_;
  // The request's origin.
  Origin origin_;

  DISALLOW_COPY_AND_ASSIGN(NetFetcher);
};

}  // namespace loader
}  // namespace cobalt
#endif

#endif  // COBALT_LOADER_NET_FETCHER_H_
