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

#include "third_party/blink/public/mojom/appcache/appcache_info.mojom.h"

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

#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-params-data.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
AppCacheInfo::AppCacheInfo()
    : manifest_url(),
      creation_time(),
      last_update_time(),
      last_access_time(),
      cache_id(),
      group_id(),
      status(),
      response_sizes(),
      padding_sizes(),
      is_complete() {}

AppCacheInfo::AppCacheInfo(
    const GURL& manifest_url_in,
    base::Time creation_time_in,
    base::Time last_update_time_in,
    base::Time last_access_time_in,
    int64_t cache_id_in,
    int64_t group_id_in,
    AppCacheStatus status_in,
    int64_t response_sizes_in,
    int64_t padding_sizes_in,
    bool is_complete_in)
    : manifest_url(std::move(manifest_url_in)),
      creation_time(std::move(creation_time_in)),
      last_update_time(std::move(last_update_time_in)),
      last_access_time(std::move(last_access_time_in)),
      cache_id(std::move(cache_id_in)),
      group_id(std::move(group_id_in)),
      status(std::move(status_in)),
      response_sizes(std::move(response_sizes_in)),
      padding_sizes(std::move(padding_sizes_in)),
      is_complete(std::move(is_complete_in)) {}

AppCacheInfo::~AppCacheInfo() = default;

bool AppCacheInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::AppCacheInfo::DataView, ::blink::mojom::AppCacheInfoPtr>::Read(
    ::blink::mojom::AppCacheInfo::DataView input,
    ::blink::mojom::AppCacheInfoPtr* output) {
  bool success = true;
  ::blink::mojom::AppCacheInfoPtr result(::blink::mojom::AppCacheInfo::New());
  
      if (!input.ReadManifestUrl(&result->manifest_url))
        success = false;
      if (!input.ReadCreationTime(&result->creation_time))
        success = false;
      if (!input.ReadLastUpdateTime(&result->last_update_time))
        success = false;
      if (!input.ReadLastAccessTime(&result->last_access_time))
        success = false;
      result->cache_id = input.cache_id();
      result->group_id = input.group_id();
      if (!input.ReadStatus(&result->status))
        success = false;
      result->response_sizes = input.response_sizes();
      result->padding_sizes = input.padding_sizes();
      result->is_complete = input.is_complete();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif