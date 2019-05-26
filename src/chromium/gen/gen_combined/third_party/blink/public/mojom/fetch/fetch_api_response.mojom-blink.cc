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

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h"

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

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-params-data.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
FetchAPIResponse::FetchAPIResponse()
    : url_list(),
      status_code(0U),
      status_text(),
      response_type(::network::mojom::blink::FetchResponseType::kOpaque),
      response_source(::network::mojom::blink::FetchResponseSource::kUnspecified),
      headers(),
      blob(),
      error(::blink::mojom::blink::ServiceWorkerResponseError::kUnknown),
      response_time(),
      cache_storage_cache_name(),
      cors_exposed_header_names(),
      side_data_blob() {}

FetchAPIResponse::FetchAPIResponse(
    const WTF::Vector<::blink::KURL>& url_list_in,
    uint16_t status_code_in,
    const WTF::String& status_text_in,
    ::network::mojom::blink::FetchResponseType response_type_in,
    ::network::mojom::blink::FetchResponseSource response_source_in,
    const WTF::HashMap<WTF::String, WTF::String>& headers_in,
    const scoped_refptr<::blink::BlobDataHandle>& blob_in,
    ::blink::mojom::blink::ServiceWorkerResponseError error_in,
    base::Time response_time_in,
    const WTF::String& cache_storage_cache_name_in,
    const WTF::Vector<WTF::String>& cors_exposed_header_names_in,
    const scoped_refptr<::blink::BlobDataHandle>& side_data_blob_in)
    : url_list(std::move(url_list_in)),
      status_code(std::move(status_code_in)),
      status_text(std::move(status_text_in)),
      response_type(std::move(response_type_in)),
      response_source(std::move(response_source_in)),
      headers(std::move(headers_in)),
      blob(std::move(blob_in)),
      error(std::move(error_in)),
      response_time(std::move(response_time_in)),
      cache_storage_cache_name(std::move(cache_storage_cache_name_in)),
      cors_exposed_header_names(std::move(cors_exposed_header_names_in)),
      side_data_blob(std::move(side_data_blob_in)) {}

FetchAPIResponse::~FetchAPIResponse() = default;

bool FetchAPIResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::FetchAPIResponse::DataView, ::blink::mojom::blink::FetchAPIResponsePtr>::Read(
    ::blink::mojom::blink::FetchAPIResponse::DataView input,
    ::blink::mojom::blink::FetchAPIResponsePtr* output) {
  bool success = true;
  ::blink::mojom::blink::FetchAPIResponsePtr result(::blink::mojom::blink::FetchAPIResponse::New());
  
      if (!input.ReadUrlList(&result->url_list))
        success = false;
      result->status_code = input.status_code();
      if (!input.ReadStatusText(&result->status_text))
        success = false;
      if (!input.ReadResponseType(&result->response_type))
        success = false;
      if (!input.ReadResponseSource(&result->response_source))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadBlob(&result->blob))
        success = false;
      if (!input.ReadError(&result->error))
        success = false;
      if (!input.ReadResponseTime(&result->response_time))
        success = false;
      if (!input.ReadCacheStorageCacheName(&result->cache_storage_cache_name))
        success = false;
      if (!input.ReadCorsExposedHeaderNames(&result->cors_exposed_header_names))
        success = false;
      if (!input.ReadSideDataBlob(&result->side_data_blob))
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