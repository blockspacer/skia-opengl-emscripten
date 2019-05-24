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

#include "third_party/blink/public/mojom/quota/quota_types.mojom-blink.h"

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

#include "third_party/blink/public/mojom/quota/quota_types.mojom-params-data.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/quota/quota_types.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
UsageBreakdown::UsageBreakdown()
    : fileSystem(0),
      webSql(0),
      appcache(0),
      indexedDatabase(0),
      serviceWorkerCache(0),
      serviceWorker(0),
      backgroundFetch(0) {}

UsageBreakdown::UsageBreakdown(
    int64_t fileSystem_in,
    int64_t webSql_in,
    int64_t appcache_in,
    int64_t indexedDatabase_in,
    int64_t serviceWorkerCache_in,
    int64_t serviceWorker_in,
    int64_t backgroundFetch_in)
    : fileSystem(std::move(fileSystem_in)),
      webSql(std::move(webSql_in)),
      appcache(std::move(appcache_in)),
      indexedDatabase(std::move(indexedDatabase_in)),
      serviceWorkerCache(std::move(serviceWorkerCache_in)),
      serviceWorker(std::move(serviceWorker_in)),
      backgroundFetch(std::move(backgroundFetch_in)) {}

UsageBreakdown::~UsageBreakdown() = default;
size_t UsageBreakdown::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->fileSystem);
  seed = mojo::internal::WTFHash(seed, this->webSql);
  seed = mojo::internal::WTFHash(seed, this->appcache);
  seed = mojo::internal::WTFHash(seed, this->indexedDatabase);
  seed = mojo::internal::WTFHash(seed, this->serviceWorkerCache);
  seed = mojo::internal::WTFHash(seed, this->serviceWorker);
  seed = mojo::internal::WTFHash(seed, this->backgroundFetch);
  return seed;
}

bool UsageBreakdown::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::UsageBreakdown::DataView, ::blink::mojom::blink::UsageBreakdownPtr>::Read(
    ::blink::mojom::blink::UsageBreakdown::DataView input,
    ::blink::mojom::blink::UsageBreakdownPtr* output) {
  bool success = true;
  ::blink::mojom::blink::UsageBreakdownPtr result(::blink::mojom::blink::UsageBreakdown::New());
  
      result->fileSystem = input.fileSystem();
      result->webSql = input.webSql();
      result->appcache = input.appcache();
      result->indexedDatabase = input.indexedDatabase();
      result->serviceWorkerCache = input.serviceWorkerCache();
      result->serviceWorker = input.serviceWorker();
      result->backgroundFetch = input.backgroundFetch();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif