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

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-blink.h"

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

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-params-data.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
FetchAPIRequestHeaders::FetchAPIRequestHeaders()
    : headers() {}

FetchAPIRequestHeaders::FetchAPIRequestHeaders(
    const WTF::HashMap<WTF::String, WTF::String>& headers_in)
    : headers(std::move(headers_in)) {}

FetchAPIRequestHeaders::~FetchAPIRequestHeaders() = default;

bool FetchAPIRequestHeaders::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FetchAPIRequest::FetchAPIRequest()
    : mode(::network::mojom::blink::FetchRequestMode::kNoCors),
      is_main_resource_load(false),
      request_context_type(RequestContextType::UNSPECIFIED),
      frame_type(::network::mojom::blink::RequestContextFrameType::kNone),
      url(),
      method(),
      headers(),
      blob(),
      body(),
      referrer(),
      credentials_mode(::network::mojom::blink::FetchCredentialsMode::kOmit),
      cache_mode(FetchCacheMode::kDefault),
      redirect_mode(::network::mojom::blink::FetchRedirectMode::kFollow),
      integrity(),
      priority(::network::mojom::blink::RequestPriority::kIdle),
      fetch_window_id(),
      keepalive(false),
      is_reload(false),
      is_history_navigation(false) {}

FetchAPIRequest::FetchAPIRequest(
    ::network::mojom::blink::FetchRequestMode mode_in,
    bool is_main_resource_load_in,
    RequestContextType request_context_type_in,
    ::network::mojom::blink::RequestContextFrameType frame_type_in,
    const ::blink::KURL& url_in,
    const WTF::String& method_in,
    WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash> headers_in,
    const scoped_refptr<::blink::BlobDataHandle>& blob_in,
    scoped_refptr<::blink::EncodedFormData> body_in,
    ::blink::mojom::blink::ReferrerPtr referrer_in,
    ::network::mojom::blink::FetchCredentialsMode credentials_mode_in,
    FetchCacheMode cache_mode_in,
    ::network::mojom::blink::FetchRedirectMode redirect_mode_in,
    const WTF::String& integrity_in,
    ::network::mojom::blink::RequestPriority priority_in,
    const base::Optional<base::UnguessableToken>& fetch_window_id_in,
    bool keepalive_in,
    bool is_reload_in,
    bool is_history_navigation_in)
    : mode(std::move(mode_in)),
      is_main_resource_load(std::move(is_main_resource_load_in)),
      request_context_type(std::move(request_context_type_in)),
      frame_type(std::move(frame_type_in)),
      url(std::move(url_in)),
      method(std::move(method_in)),
      headers(std::move(headers_in)),
      blob(std::move(blob_in)),
      body(std::move(body_in)),
      referrer(std::move(referrer_in)),
      credentials_mode(std::move(credentials_mode_in)),
      cache_mode(std::move(cache_mode_in)),
      redirect_mode(std::move(redirect_mode_in)),
      integrity(std::move(integrity_in)),
      priority(std::move(priority_in)),
      fetch_window_id(std::move(fetch_window_id_in)),
      keepalive(std::move(keepalive_in)),
      is_reload(std::move(is_reload_in)),
      is_history_navigation(std::move(is_history_navigation_in)) {}

FetchAPIRequest::~FetchAPIRequest() = default;

bool FetchAPIRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::FetchAPIRequestHeaders::DataView, ::blink::mojom::blink::FetchAPIRequestHeadersPtr>::Read(
    ::blink::mojom::blink::FetchAPIRequestHeaders::DataView input,
    ::blink::mojom::blink::FetchAPIRequestHeadersPtr* output) {
  bool success = true;
  ::blink::mojom::blink::FetchAPIRequestHeadersPtr result(::blink::mojom::blink::FetchAPIRequestHeaders::New());
  
      if (!input.ReadHeaders(&result->headers))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::FetchAPIRequest::DataView, ::blink::mojom::blink::FetchAPIRequestPtr>::Read(
    ::blink::mojom::blink::FetchAPIRequest::DataView input,
    ::blink::mojom::blink::FetchAPIRequestPtr* output) {
  bool success = true;
  ::blink::mojom::blink::FetchAPIRequestPtr result(::blink::mojom::blink::FetchAPIRequest::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      result->is_main_resource_load = input.is_main_resource_load();
      if (!input.ReadRequestContextType(&result->request_context_type))
        success = false;
      if (!input.ReadFrameType(&result->frame_type))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadBlob(&result->blob))
        success = false;
      if (!input.ReadBody(&result->body))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadCredentialsMode(&result->credentials_mode))
        success = false;
      if (!input.ReadCacheMode(&result->cache_mode))
        success = false;
      if (!input.ReadRedirectMode(&result->redirect_mode))
        success = false;
      if (!input.ReadIntegrity(&result->integrity))
        success = false;
      if (!input.ReadPriority(&result->priority))
        success = false;
      if (!input.ReadFetchWindowId(&result->fetch_window_id))
        success = false;
      result->keepalive = input.keepalive();
      result->is_reload = input.is_reload();
      result->is_history_navigation = input.is_history_navigation();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif