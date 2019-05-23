// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "mojo/public/mojom/base/file_error.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "mojo/public/mojom/base/file_error.mojom-params-data.h"
namespace mojo_base {
namespace mojom {

std::ostream& operator<<(std::ostream& os, FileError value) {
  switch(value) {
    case FileError::IO:
      return os << "FileError::IO";
    case FileError::INVALID_URL:
      return os << "FileError::INVALID_URL";
    case FileError::NOT_EMPTY:
      return os << "FileError::NOT_EMPTY";
    case FileError::NOT_A_FILE:
      return os << "FileError::NOT_A_FILE";
    case FileError::ABORT:
      return os << "FileError::ABORT";
    case FileError::SECURITY:
      return os << "FileError::SECURITY";
    case FileError::INVALID_OPERATION:
      return os << "FileError::INVALID_OPERATION";
    case FileError::NOT_A_DIRECTORY:
      return os << "FileError::NOT_A_DIRECTORY";
    case FileError::NO_SPACE:
      return os << "FileError::NO_SPACE";
    case FileError::NO_MEMORY:
      return os << "FileError::NO_MEMORY";
    case FileError::TOO_MANY_OPENED:
      return os << "FileError::TOO_MANY_OPENED";
    case FileError::ACCESS_DENIED:
      return os << "FileError::ACCESS_DENIED";
    case FileError::NOT_FOUND:
      return os << "FileError::NOT_FOUND";
    case FileError::EXISTS:
      return os << "FileError::EXISTS";
    case FileError::IN_USE:
      return os << "FileError::IN_USE";
    case FileError::FAILED:
      return os << "FileError::FAILED";
    case FileError::OK:
      return os << "FileError::OK";
    default:
      return os << "Unknown FileError value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace mojo_base

#if defined(_MSC_VER)
#pragma warning(pop)
#endif