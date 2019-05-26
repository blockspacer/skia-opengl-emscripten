// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/interfaces/bindings/tests/test_name_generator.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/interfaces/bindings/tests/test_name_generator.mojom-params-data.h"
namespace sample {

std::ostream& operator<<(std::ostream& os, SupportedCases value) {
  switch(value) {
    case SupportedCases::lowerCamelCase:
      return os << "SupportedCases::lowerCamelCase";
    case SupportedCases::UpperCamelCase:
      return os << "SupportedCases::UpperCamelCase";
    case SupportedCases::snake_case:
      return os << "SupportedCases::snake_case";
    case SupportedCases::MACRO_CASE:
      return os << "SupportedCases::MACRO_CASE";
    case SupportedCases::kHungarianNotation:
      return os << "SupportedCases::kHungarianNotation";
    case SupportedCases::upperACRONYMCase:
      return os << "SupportedCases::upperACRONYMCase";
    default:
      return os << "Unknown SupportedCases value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace sample

#if defined(_MSC_VER)
#pragma warning(pop)
#endif