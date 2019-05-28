// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "content/public/common/resource_type.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "content/public/common/resource_type.mojom-params-data.h"
namespace content {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ResourceType value) {
  switch(value) {
    case ResourceType::kMainFrame:
      return os << "ResourceType::kMainFrame";
    case ResourceType::kSubFrame:
      return os << "ResourceType::kSubFrame";
    case ResourceType::kStylesheet:
      return os << "ResourceType::kStylesheet";
    case ResourceType::kScript:
      return os << "ResourceType::kScript";
    case ResourceType::kImage:
      return os << "ResourceType::kImage";
    case ResourceType::kFontResource:
      return os << "ResourceType::kFontResource";
    case ResourceType::kSubResource:
      return os << "ResourceType::kSubResource";
    case ResourceType::kObject:
      return os << "ResourceType::kObject";
    case ResourceType::kMedia:
      return os << "ResourceType::kMedia";
    case ResourceType::kWorker:
      return os << "ResourceType::kWorker";
    case ResourceType::kSharedWorker:
      return os << "ResourceType::kSharedWorker";
    case ResourceType::kPrefetch:
      return os << "ResourceType::kPrefetch";
    case ResourceType::kFavicon:
      return os << "ResourceType::kFavicon";
    case ResourceType::kXhr:
      return os << "ResourceType::kXhr";
    case ResourceType::kPing:
      return os << "ResourceType::kPing";
    case ResourceType::kServiceWorker:
      return os << "ResourceType::kServiceWorker";
    case ResourceType::kCspReport:
      return os << "ResourceType::kCspReport";
    case ResourceType::kPluginResource:
      return os << "ResourceType::kPluginResource";
    case ResourceType::kNavigationPreload:
      return os << "ResourceType::kNavigationPreload";
    default:
      return os << "Unknown ResourceType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace content

#if defined(_MSC_VER)
#pragma warning(pop)
#endif