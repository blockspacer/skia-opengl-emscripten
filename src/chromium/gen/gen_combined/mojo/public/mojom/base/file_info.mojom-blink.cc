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

#include "mojo/public/mojom/base/file_info.mojom-blink.h"

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

#include "mojo/public/mojom/base/file_info.mojom-params-data.h"
#include "mojo/public/mojom/base/file_info.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/file_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace mojo_base {
namespace mojom {
namespace blink {
FileInfo::FileInfo()
    : size(),
      is_directory(),
      is_symbolic_link(),
      last_modified(),
      last_accessed(),
      creation_time() {}

FileInfo::FileInfo(
    int64_t size_in,
    bool is_directory_in,
    bool is_symbolic_link_in,
    base::Time last_modified_in,
    base::Time last_accessed_in,
    base::Time creation_time_in)
    : size(std::move(size_in)),
      is_directory(std::move(is_directory_in)),
      is_symbolic_link(std::move(is_symbolic_link_in)),
      last_modified(std::move(last_modified_in)),
      last_accessed(std::move(last_accessed_in)),
      creation_time(std::move(creation_time_in)) {}

FileInfo::~FileInfo() = default;

bool FileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::FileInfo::DataView, ::mojo_base::mojom::blink::FileInfoPtr>::Read(
    ::mojo_base::mojom::blink::FileInfo::DataView input,
    ::mojo_base::mojom::blink::FileInfoPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::FileInfoPtr result(::mojo_base::mojom::blink::FileInfo::New());
  
      result->size = input.size();
      result->is_directory = input.is_directory();
      result->is_symbolic_link = input.is_symbolic_link();
      if (!input.ReadLastModified(&result->last_modified))
        success = false;
      if (!input.ReadLastAccessed(&result->last_accessed))
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