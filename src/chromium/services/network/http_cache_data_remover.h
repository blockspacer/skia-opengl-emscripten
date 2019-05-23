// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_HTTP_CACHE_DATA_REMOVER_H_
#define SERVICES_NETWORK_HTTP_CACHE_DATA_REMOVER_H_

#include <memory>

#include "base/callback_forward.h"
#include "base/component_export.h"
#include "base/macros.h"
#include "base/memory/weak_ptr.h"
#include "base/time/time.h"
#include "services/network/conditional_cache_deletion_helper.h"
#include "services/network/public/mojom/network_service.mojom.h"
#include "url/gurl.h"

namespace disk_cache {
class Backend;
}

namespace net {
class URLRequestContext;
}

namespace network {

// Helper to remove data from the HTTP cache.
class COMPONENT_EXPORT(NETWORK_SERVICE) HttpCacheDataRemover {
 public:
  using HttpCacheDataRemoverCallback =
      base::OnceCallback<void(HttpCacheDataRemover*)>;

  // Creates an HttpCacheDataRemover that starts deleting cache entries in the
  // time range between |delete_begin| (inclusively) and |delete_end|
  // (exclusively) and that are matched by |url_filter|. Invokes |done_callback|
  // when finished.
  // Note that deletion with URL filtering is not built in to the cache
  // interface and might be slow.
  static std::unique_ptr<HttpCacheDataRemover> CreateAndStart(
      net::URLRequestContext* url_request_context,
      mojom::ClearDataFilterPtr url_filter,
      base::Time delete_begin,
      base::Time delete_end,
      HttpCacheDataRemoverCallback done_callback);

  ~HttpCacheDataRemover();

 private:
  HttpCacheDataRemover(mojom::ClearDataFilterPtr url_filter,
                       base::Time delete_begin,
                       base::Time delete_end,
                       HttpCacheDataRemoverCallback done_callback);

  void CacheRetrieved(int rv);
  void ClearHttpCacheDone(int rv);

  base::RepeatingCallback<bool(const GURL&)> url_matcher_;
  const base::Time delete_begin_;
  const base::Time delete_end_;

  HttpCacheDataRemoverCallback done_callback_;

  disk_cache::Backend* backend_;

  std::unique_ptr<ConditionalCacheDeletionHelper> deletion_helper_;

  base::WeakPtrFactory<HttpCacheDataRemover> weak_factory_;

  DISALLOW_COPY_AND_ASSIGN(HttpCacheDataRemover);
};

}  // namespace network

#endif  // SERVICES_NETWORK_HTTP_CACHE_DATA_REMOVER_H_
