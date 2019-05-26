// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
FetchEventPreloadHandle::FetchEventPreloadHandle()
    : url_loader(),
      url_loader_client_request() {}

FetchEventPreloadHandle::FetchEventPreloadHandle(
    ::network::mojom::URLLoaderPtrInfo url_loader_in,
    ::network::mojom::URLLoaderClientRequest url_loader_client_request_in)
    : url_loader(std::move(url_loader_in)),
      url_loader_client_request(std::move(url_loader_client_request_in)) {}

FetchEventPreloadHandle::~FetchEventPreloadHandle() = default;

bool FetchEventPreloadHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DispatchFetchEventParams::DispatchFetchEventParams()
    : request(),
      client_id(),
      preload_handle() {}

DispatchFetchEventParams::DispatchFetchEventParams(
    ::blink::mojom::FetchAPIRequestPtr request_in,
    const std::string& client_id_in,
    FetchEventPreloadHandlePtr preload_handle_in)
    : request(std::move(request_in)),
      client_id(std::move(client_id_in)),
      preload_handle(std::move(preload_handle_in)) {}

DispatchFetchEventParams::~DispatchFetchEventParams() = default;

bool DispatchFetchEventParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::FetchEventPreloadHandle::DataView, ::blink::mojom::FetchEventPreloadHandlePtr>::Read(
    ::blink::mojom::FetchEventPreloadHandle::DataView input,
    ::blink::mojom::FetchEventPreloadHandlePtr* output) {
  bool success = true;
  ::blink::mojom::FetchEventPreloadHandlePtr result(::blink::mojom::FetchEventPreloadHandle::New());
  
      result->url_loader =
          input.TakeUrlLoader<decltype(result->url_loader)>();
      result->url_loader_client_request =
          input.TakeUrlLoaderClientRequest<decltype(result->url_loader_client_request)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::DispatchFetchEventParams::DataView, ::blink::mojom::DispatchFetchEventParamsPtr>::Read(
    ::blink::mojom::DispatchFetchEventParams::DataView input,
    ::blink::mojom::DispatchFetchEventParamsPtr* output) {
  bool success = true;
  ::blink::mojom::DispatchFetchEventParamsPtr result(::blink::mojom::DispatchFetchEventParams::New());
  
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadClientId(&result->client_id))
        success = false;
      if (!input.ReadPreloadHandle(&result->preload_handle))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif