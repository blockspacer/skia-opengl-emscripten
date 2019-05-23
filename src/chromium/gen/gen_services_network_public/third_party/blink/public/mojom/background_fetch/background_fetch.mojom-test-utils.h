// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserverInterceptorForTesting : public BackgroundFetchRegistrationObserver {
  virtual BackgroundFetchRegistrationObserver* GetForwardingInterface() = 0;
  void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded, BackgroundFetchResult result, BackgroundFetchFailureReason failure_reason) override;
  void OnRecordsUnavailable() override;
  void OnRequestCompleted(::blink::mojom::FetchAPIRequestPtr request, ::blink::mojom::FetchAPIResponsePtr response) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserverAsyncWaiter {
 public:
  explicit BackgroundFetchRegistrationObserverAsyncWaiter(BackgroundFetchRegistrationObserver* proxy);
  ~BackgroundFetchRegistrationObserverAsyncWaiter();

 private:
  BackgroundFetchRegistrationObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationObserverAsyncWaiter);
};


class BLINK_COMMON_EXPORT BackgroundFetchServiceInterceptorForTesting : public BackgroundFetchService {
  virtual BackgroundFetchService* GetForwardingInterface() = 0;
  void Fetch(int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, FetchCallback callback) override;
  void GetRegistration(int64_t service_worker_registration_id, const std::string& developer_id, GetRegistrationCallback callback) override;
  void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) override;
  void GetIconDisplaySize(GetIconDisplaySizeCallback callback) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchServiceAsyncWaiter {
 public:
  explicit BackgroundFetchServiceAsyncWaiter(BackgroundFetchService* proxy);
  ~BackgroundFetchServiceAsyncWaiter();
  void Fetch(
      int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void GetRegistration(
      int64_t service_worker_registration_id, const std::string& developer_id, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void GetDeveloperIds(
      int64_t service_worker_registration_id, BackgroundFetchError* out_error, std::vector<std::string>* out_developer_ids);
  void GetIconDisplaySize(
      gfx::Size* out_icon_size_pixels);

 private:
  BackgroundFetchService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchServiceAsyncWaiter);
};


class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceInterceptorForTesting : public BackgroundFetchRegistrationService {
  virtual BackgroundFetchRegistrationService* GetForwardingInterface() = 0;
  void UpdateUI(const base::Optional<std::string>& title, const SkBitmap& icon, UpdateUICallback callback) override;
  void Abort(AbortCallback callback) override;
  void MatchRequests(::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, MatchRequestsCallback callback) override;
  void AddRegistrationObserver(BackgroundFetchRegistrationObserverPtr observer) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceAsyncWaiter {
 public:
  explicit BackgroundFetchRegistrationServiceAsyncWaiter(BackgroundFetchRegistrationService* proxy);
  ~BackgroundFetchRegistrationServiceAsyncWaiter();
  void UpdateUI(
      const base::Optional<std::string>& title, const SkBitmap& icon, BackgroundFetchError* out_error);
  void Abort(
      BackgroundFetchError* out_error);
  void MatchRequests(
      ::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, std::vector<BackgroundFetchSettledFetchPtr>* out_fetches);

 private:
  BackgroundFetchRegistrationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_TEST_UTILS_H_