// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT BackgroundFetchRegistrationObserverInterceptorForTesting : public BackgroundFetchRegistrationObserver {
  virtual BackgroundFetchRegistrationObserver* GetForwardingInterface() = 0;
  void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded, BackgroundFetchResult result, BackgroundFetchFailureReason failure_reason) override;
  void OnRecordsUnavailable() override;
  void OnRequestCompleted(::blink::mojom::blink::FetchAPIRequestPtr request, ::blink::mojom::blink::FetchAPIResponsePtr response) override;
};
class PLATFORM_EXPORT BackgroundFetchRegistrationObserverAsyncWaiter {
 public:
  explicit BackgroundFetchRegistrationObserverAsyncWaiter(BackgroundFetchRegistrationObserver* proxy);
  ~BackgroundFetchRegistrationObserverAsyncWaiter();

 private:
  BackgroundFetchRegistrationObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationObserverAsyncWaiter);
};


class PLATFORM_EXPORT BackgroundFetchServiceInterceptorForTesting : public BackgroundFetchService {
  virtual BackgroundFetchService* GetForwardingInterface() = 0;
  void Fetch(int64_t service_worker_registration_id, const WTF::String& developer_id, WTF::Vector<::blink::mojom::blink::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, FetchCallback callback) override;
  void GetRegistration(int64_t service_worker_registration_id, const WTF::String& developer_id, GetRegistrationCallback callback) override;
  void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) override;
  void GetIconDisplaySize(GetIconDisplaySizeCallback callback) override;
};
class PLATFORM_EXPORT BackgroundFetchServiceAsyncWaiter {
 public:
  explicit BackgroundFetchServiceAsyncWaiter(BackgroundFetchService* proxy);
  ~BackgroundFetchServiceAsyncWaiter();
  void Fetch(
      int64_t service_worker_registration_id, const WTF::String& developer_id, WTF::Vector<::blink::mojom::blink::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void GetRegistration(
      int64_t service_worker_registration_id, const WTF::String& developer_id, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration);
  void GetDeveloperIds(
      int64_t service_worker_registration_id, BackgroundFetchError* out_error, WTF::Vector<WTF::String>* out_developer_ids);
  void GetIconDisplaySize(
      ::blink::WebSize* out_icon_size_pixels);

 private:
  BackgroundFetchService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchServiceAsyncWaiter);
};


class PLATFORM_EXPORT BackgroundFetchRegistrationServiceInterceptorForTesting : public BackgroundFetchRegistrationService {
  virtual BackgroundFetchRegistrationService* GetForwardingInterface() = 0;
  void UpdateUI(const WTF::String& title, const SkBitmap& icon, UpdateUICallback callback) override;
  void Abort(AbortCallback callback) override;
  void MatchRequests(::blink::mojom::blink::FetchAPIRequestPtr request_to_match, ::blink::mojom::blink::CacheQueryOptionsPtr cache_query_options, bool match_all, MatchRequestsCallback callback) override;
  void AddRegistrationObserver(BackgroundFetchRegistrationObserverPtr observer) override;
};
class PLATFORM_EXPORT BackgroundFetchRegistrationServiceAsyncWaiter {
 public:
  explicit BackgroundFetchRegistrationServiceAsyncWaiter(BackgroundFetchRegistrationService* proxy);
  ~BackgroundFetchRegistrationServiceAsyncWaiter();
  void UpdateUI(
      const WTF::String& title, const SkBitmap& icon, BackgroundFetchError* out_error);
  void Abort(
      BackgroundFetchError* out_error);
  void MatchRequests(
      ::blink::mojom::blink::FetchAPIRequestPtr request_to_match, ::blink::mojom::blink::CacheQueryOptionsPtr cache_query_options, bool match_all, WTF::Vector<BackgroundFetchSettledFetchPtr>* out_fetches);

 private:
  BackgroundFetchRegistrationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_TEST_UTILS_H_