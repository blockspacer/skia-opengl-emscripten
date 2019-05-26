// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/devtools/console_message.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/devtools/console_message.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, ConsoleMessageLevel value) {
  switch(value) {
    case ConsoleMessageLevel::kVerbose:
      return os << "ConsoleMessageLevel::kVerbose";
    case ConsoleMessageLevel::kInfo:
      return os << "ConsoleMessageLevel::kInfo";
    case ConsoleMessageLevel::kWarning:
      return os << "ConsoleMessageLevel::kWarning";
    case ConsoleMessageLevel::kError:
      return os << "ConsoleMessageLevel::kError";
    default:
      return os << "Unknown ConsoleMessageLevel value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ConsoleMessageSource value) {
  switch(value) {
    case ConsoleMessageSource::kXml:
      return os << "ConsoleMessageSource::kXml";
    case ConsoleMessageSource::kJavaScript:
      return os << "ConsoleMessageSource::kJavaScript";
    case ConsoleMessageSource::kNetwork:
      return os << "ConsoleMessageSource::kNetwork";
    case ConsoleMessageSource::kConsoleApi:
      return os << "ConsoleMessageSource::kConsoleApi";
    case ConsoleMessageSource::kStorage:
      return os << "ConsoleMessageSource::kStorage";
    case ConsoleMessageSource::kAppCache:
      return os << "ConsoleMessageSource::kAppCache";
    case ConsoleMessageSource::kRendering:
      return os << "ConsoleMessageSource::kRendering";
    case ConsoleMessageSource::kSecurity:
      return os << "ConsoleMessageSource::kSecurity";
    case ConsoleMessageSource::kOther:
      return os << "ConsoleMessageSource::kOther";
    case ConsoleMessageSource::kDeprecation:
      return os << "ConsoleMessageSource::kDeprecation";
    case ConsoleMessageSource::kWorker:
      return os << "ConsoleMessageSource::kWorker";
    case ConsoleMessageSource::kViolation:
      return os << "ConsoleMessageSource::kViolation";
    case ConsoleMessageSource::kIntervention:
      return os << "ConsoleMessageSource::kIntervention";
    case ConsoleMessageSource::kRecommendation:
      return os << "ConsoleMessageSource::kRecommendation";
    default:
      return os << "Unknown ConsoleMessageSource value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif