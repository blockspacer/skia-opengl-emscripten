// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/loader/mhtml_load_result.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/loader/mhtml_load_result.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, MHTMLLoadResult value) {
  switch(value) {
    case MHTMLLoadResult::kSuccess:
      return os << "MHTMLLoadResult::kSuccess";
    case MHTMLLoadResult::kEmptyFile:
      return os << "MHTMLLoadResult::kEmptyFile";
    case MHTMLLoadResult::kUrlSchemeNotAllowed:
      return os << "MHTMLLoadResult::kUrlSchemeNotAllowed";
    case MHTMLLoadResult::kInvalidArchive:
      return os << "MHTMLLoadResult::kInvalidArchive";
    case MHTMLLoadResult::kMissingMainResource:
      return os << "MHTMLLoadResult::kMissingMainResource";
    default:
      return os << "Unknown MHTMLLoadResult value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif