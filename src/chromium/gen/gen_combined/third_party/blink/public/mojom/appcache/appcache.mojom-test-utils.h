// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/appcache/appcache.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT AppCacheBackendInterceptorForTesting : public AppCacheBackend {
  virtual AppCacheBackend* GetForwardingInterface() = 0;
  void RegisterHost(AppCacheHostRequest host_request, AppCacheFrontendPtr frontend, int32_t host_id, int32_t render_frame_id) override;
};
class BLINK_COMMON_EXPORT AppCacheBackendAsyncWaiter {
 public:
  explicit AppCacheBackendAsyncWaiter(AppCacheBackend* proxy);
  ~AppCacheBackendAsyncWaiter();

 private:
  AppCacheBackend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheBackendAsyncWaiter);
};


class BLINK_COMMON_EXPORT AppCacheHostInterceptorForTesting : public AppCacheHost {
  virtual AppCacheHost* GetForwardingInterface() = 0;
  void SetSpawningHostId(int32_t spawning_host_id) override;
  void SelectCache(const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) override;
  void SelectCacheForSharedWorker(int64_t appcache_id) override;
  void MarkAsForeignEntry(const GURL& document_url, int64_t appcache_document_was_loaded_from) override;
  void GetStatus(GetStatusCallback callback) override;
  void StartUpdate(StartUpdateCallback callback) override;
  void SwapCache(SwapCacheCallback callback) override;
  void GetResourceList(GetResourceListCallback callback) override;
};
class BLINK_COMMON_EXPORT AppCacheHostAsyncWaiter {
 public:
  explicit AppCacheHostAsyncWaiter(AppCacheHost* proxy);
  ~AppCacheHostAsyncWaiter();
  void GetStatus(
      ::blink::mojom::AppCacheStatus* out_status);
  void StartUpdate(
      bool* out_success);
  void SwapCache(
      bool* out_success);
  void GetResourceList(
      std::vector<AppCacheResourceInfoPtr>* out_resources);

 private:
  AppCacheHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT AppCacheFrontendInterceptorForTesting : public AppCacheFrontend {
  virtual AppCacheFrontend* GetForwardingInterface() = 0;
  void CacheSelected(::blink::mojom::AppCacheInfoPtr info) override;
  void EventRaised(AppCacheEventID event_id) override;
  void ProgressEventRaised(const GURL& url, int32_t total, int32_t complete) override;
  void ErrorEventRaised(AppCacheErrorDetailsPtr error_details) override;
  void LogMessage(::blink::mojom::ConsoleMessageLevel log_level, const std::string& message) override;
  void SetSubresourceFactory(::network::mojom::URLLoaderFactoryPtr url_loader_factory) override;
};
class BLINK_COMMON_EXPORT AppCacheFrontendAsyncWaiter {
 public:
  explicit AppCacheFrontendAsyncWaiter(AppCacheFrontend* proxy);
  ~AppCacheFrontendAsyncWaiter();

 private:
  AppCacheFrontend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppCacheFrontendAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_TEST_UTILS_H_