// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/web_client_hints/web_client_hints_types.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/web_client_hints/web_client_hints_types.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WebClientHintsType value) {
  switch(value) {
    case WebClientHintsType::kDeviceMemory:
      return os << "WebClientHintsType::kDeviceMemory";
    case WebClientHintsType::kDpr:
      return os << "WebClientHintsType::kDpr";
    case WebClientHintsType::kResourceWidth:
      return os << "WebClientHintsType::kResourceWidth";
    case WebClientHintsType::kViewportWidth:
      return os << "WebClientHintsType::kViewportWidth";
    case WebClientHintsType::kRtt:
      return os << "WebClientHintsType::kRtt";
    case WebClientHintsType::kDownlink:
      return os << "WebClientHintsType::kDownlink";
    case WebClientHintsType::kEct:
      return os << "WebClientHintsType::kEct";
    case WebClientHintsType::kLang:
      return os << "WebClientHintsType::kLang";
    case WebClientHintsType::kUA:
      return os << "WebClientHintsType::kUA";
    case WebClientHintsType::kUAArch:
      return os << "WebClientHintsType::kUAArch";
    case WebClientHintsType::kUAPlatform:
      return os << "WebClientHintsType::kUAPlatform";
    case WebClientHintsType::kUAModel:
      return os << "WebClientHintsType::kUAModel";
    default:
      return os << "Unknown WebClientHintsType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif