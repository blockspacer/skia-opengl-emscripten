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

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
ServiceWorkerClientQueryOptions::ServiceWorkerClientQueryOptions()
    : include_uncontrolled(false),
      client_type(ServiceWorkerClientType::kWindow) {}

ServiceWorkerClientQueryOptions::ServiceWorkerClientQueryOptions(
    bool include_uncontrolled_in,
    ServiceWorkerClientType client_type_in)
    : include_uncontrolled(std::move(include_uncontrolled_in)),
      client_type(std::move(client_type_in)) {}

ServiceWorkerClientQueryOptions::~ServiceWorkerClientQueryOptions() = default;
size_t ServiceWorkerClientQueryOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->include_uncontrolled);
  seed = mojo::internal::Hash(seed, this->client_type);
  return seed;
}

bool ServiceWorkerClientQueryOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerClientInfo::ServiceWorkerClientInfo()
    : url(),
      frame_type(::network::mojom::RequestContextFrameType::kNone),
      client_uuid(),
      client_type(),
      page_hidden(true),
      is_focused(false),
      last_focus_time(),
      creation_time() {}

ServiceWorkerClientInfo::ServiceWorkerClientInfo(
    const GURL& url_in,
    ::network::mojom::RequestContextFrameType frame_type_in,
    const std::string& client_uuid_in,
    ServiceWorkerClientType client_type_in,
    bool page_hidden_in,
    bool is_focused_in,
    base::TimeTicks last_focus_time_in,
    base::TimeTicks creation_time_in)
    : url(std::move(url_in)),
      frame_type(std::move(frame_type_in)),
      client_uuid(std::move(client_uuid_in)),
      client_type(std::move(client_type_in)),
      page_hidden(std::move(page_hidden_in)),
      is_focused(std::move(is_focused_in)),
      last_focus_time(std::move(last_focus_time_in)),
      creation_time(std::move(creation_time_in)) {}

ServiceWorkerClientInfo::~ServiceWorkerClientInfo() = default;

bool ServiceWorkerClientInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::ServiceWorkerClientQueryOptions::DataView, ::blink::mojom::ServiceWorkerClientQueryOptionsPtr>::Read(
    ::blink::mojom::ServiceWorkerClientQueryOptions::DataView input,
    ::blink::mojom::ServiceWorkerClientQueryOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerClientQueryOptionsPtr result(::blink::mojom::ServiceWorkerClientQueryOptions::New());
  
      result->include_uncontrolled = input.include_uncontrolled();
      if (!input.ReadClientType(&result->client_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ServiceWorkerClientInfo::DataView, ::blink::mojom::ServiceWorkerClientInfoPtr>::Read(
    ::blink::mojom::ServiceWorkerClientInfo::DataView input,
    ::blink::mojom::ServiceWorkerClientInfoPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerClientInfoPtr result(::blink::mojom::ServiceWorkerClientInfo::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadFrameType(&result->frame_type))
        success = false;
      if (!input.ReadClientUuid(&result->client_uuid))
        success = false;
      if (!input.ReadClientType(&result->client_type))
        success = false;
      result->page_hidden = input.page_hidden();
      result->is_focused = input.is_focused();
      if (!input.ReadLastFocusTime(&result->last_focus_time))
        success = false;
      if (!input.ReadCreationTime(&result->creation_time))
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