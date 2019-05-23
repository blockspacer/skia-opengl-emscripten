// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/public/common/manifest/manifest_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void BackgroundFetchRegistrationObserverInterceptorForTesting::OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded, BackgroundFetchResult result, BackgroundFetchFailureReason failure_reason) {
  GetForwardingInterface()->OnProgress(std::move(upload_total), std::move(uploaded), std::move(download_total), std::move(downloaded), std::move(result), std::move(failure_reason));
}
void BackgroundFetchRegistrationObserverInterceptorForTesting::OnRecordsUnavailable() {
  GetForwardingInterface()->OnRecordsUnavailable();
}
void BackgroundFetchRegistrationObserverInterceptorForTesting::OnRequestCompleted(::blink::mojom::FetchAPIRequestPtr request, ::blink::mojom::FetchAPIResponsePtr response) {
  GetForwardingInterface()->OnRequestCompleted(std::move(request), std::move(response));
}
BackgroundFetchRegistrationObserverAsyncWaiter::BackgroundFetchRegistrationObserverAsyncWaiter(
    BackgroundFetchRegistrationObserver* proxy) : proxy_(proxy) {}

BackgroundFetchRegistrationObserverAsyncWaiter::~BackgroundFetchRegistrationObserverAsyncWaiter() = default;




void BackgroundFetchServiceInterceptorForTesting::Fetch(int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, FetchCallback callback) {
  GetForwardingInterface()->Fetch(std::move(service_worker_registration_id), std::move(developer_id), std::move(requests), std::move(options), std::move(icon), std::move(ukm_data), std::move(callback));
}
void BackgroundFetchServiceInterceptorForTesting::GetRegistration(int64_t service_worker_registration_id, const std::string& developer_id, GetRegistrationCallback callback) {
  GetForwardingInterface()->GetRegistration(std::move(service_worker_registration_id), std::move(developer_id), std::move(callback));
}
void BackgroundFetchServiceInterceptorForTesting::GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) {
  GetForwardingInterface()->GetDeveloperIds(std::move(service_worker_registration_id), std::move(callback));
}
void BackgroundFetchServiceInterceptorForTesting::GetIconDisplaySize(GetIconDisplaySizeCallback callback) {
  GetForwardingInterface()->GetIconDisplaySize(std::move(callback));
}
BackgroundFetchServiceAsyncWaiter::BackgroundFetchServiceAsyncWaiter(
    BackgroundFetchService* proxy) : proxy_(proxy) {}

BackgroundFetchServiceAsyncWaiter::~BackgroundFetchServiceAsyncWaiter() = default;

void BackgroundFetchServiceAsyncWaiter::Fetch(
    int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration) {
  base::RunLoop loop;
  proxy_->Fetch(std::move(service_worker_registration_id),std::move(developer_id),std::move(requests),std::move(options),std::move(icon),std::move(ukm_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundFetchError* out_error
,
             BackgroundFetchRegistrationPtr* out_registration
,
             BackgroundFetchError error,
             BackgroundFetchRegistrationPtr registration) {*out_error = std::move(error);*out_registration = std::move(registration);
            loop->Quit();
          },
          &loop,
          out_error,
          out_registration));
  loop.Run();
}
void BackgroundFetchServiceAsyncWaiter::GetRegistration(
    int64_t service_worker_registration_id, const std::string& developer_id, BackgroundFetchError* out_error, BackgroundFetchRegistrationPtr* out_registration) {
  base::RunLoop loop;
  proxy_->GetRegistration(std::move(service_worker_registration_id),std::move(developer_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundFetchError* out_error
,
             BackgroundFetchRegistrationPtr* out_registration
,
             BackgroundFetchError error,
             BackgroundFetchRegistrationPtr registration) {*out_error = std::move(error);*out_registration = std::move(registration);
            loop->Quit();
          },
          &loop,
          out_error,
          out_registration));
  loop.Run();
}
void BackgroundFetchServiceAsyncWaiter::GetDeveloperIds(
    int64_t service_worker_registration_id, BackgroundFetchError* out_error, std::vector<std::string>* out_developer_ids) {
  base::RunLoop loop;
  proxy_->GetDeveloperIds(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundFetchError* out_error
,
             std::vector<std::string>* out_developer_ids
,
             BackgroundFetchError error,
             const std::vector<std::string>& developer_ids) {*out_error = std::move(error);*out_developer_ids = std::move(developer_ids);
            loop->Quit();
          },
          &loop,
          out_error,
          out_developer_ids));
  loop.Run();
}
void BackgroundFetchServiceAsyncWaiter::GetIconDisplaySize(
    gfx::Size* out_icon_size_pixels) {
  base::RunLoop loop;
  proxy_->GetIconDisplaySize(
      base::BindOnce(
          [](base::RunLoop* loop,
             gfx::Size* out_icon_size_pixels
,
             const gfx::Size& icon_size_pixels) {*out_icon_size_pixels = std::move(icon_size_pixels);
            loop->Quit();
          },
          &loop,
          out_icon_size_pixels));
  loop.Run();
}



void BackgroundFetchRegistrationServiceInterceptorForTesting::UpdateUI(const base::Optional<std::string>& title, const SkBitmap& icon, UpdateUICallback callback) {
  GetForwardingInterface()->UpdateUI(std::move(title), std::move(icon), std::move(callback));
}
void BackgroundFetchRegistrationServiceInterceptorForTesting::Abort(AbortCallback callback) {
  GetForwardingInterface()->Abort(std::move(callback));
}
void BackgroundFetchRegistrationServiceInterceptorForTesting::MatchRequests(::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, MatchRequestsCallback callback) {
  GetForwardingInterface()->MatchRequests(std::move(request_to_match), std::move(cache_query_options), std::move(match_all), std::move(callback));
}
void BackgroundFetchRegistrationServiceInterceptorForTesting::AddRegistrationObserver(BackgroundFetchRegistrationObserverPtr observer) {
  GetForwardingInterface()->AddRegistrationObserver(std::move(observer));
}
BackgroundFetchRegistrationServiceAsyncWaiter::BackgroundFetchRegistrationServiceAsyncWaiter(
    BackgroundFetchRegistrationService* proxy) : proxy_(proxy) {}

BackgroundFetchRegistrationServiceAsyncWaiter::~BackgroundFetchRegistrationServiceAsyncWaiter() = default;

void BackgroundFetchRegistrationServiceAsyncWaiter::UpdateUI(
    const base::Optional<std::string>& title, const SkBitmap& icon, BackgroundFetchError* out_error) {
  base::RunLoop loop;
  proxy_->UpdateUI(std::move(title),std::move(icon),
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundFetchError* out_error
,
             BackgroundFetchError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void BackgroundFetchRegistrationServiceAsyncWaiter::Abort(
    BackgroundFetchError* out_error) {
  base::RunLoop loop;
  proxy_->Abort(
      base::BindOnce(
          [](base::RunLoop* loop,
             BackgroundFetchError* out_error
,
             BackgroundFetchError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void BackgroundFetchRegistrationServiceAsyncWaiter::MatchRequests(
    ::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, std::vector<BackgroundFetchSettledFetchPtr>* out_fetches) {
  base::RunLoop loop;
  proxy_->MatchRequests(std::move(request_to_match),std::move(cache_query_options),std::move(match_all),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<BackgroundFetchSettledFetchPtr>* out_fetches
,
             std::vector<BackgroundFetchSettledFetchPtr> fetches) {*out_fetches = std::move(fetches);
            loop->Quit();
          },
          &loop,
          out_fetches));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif