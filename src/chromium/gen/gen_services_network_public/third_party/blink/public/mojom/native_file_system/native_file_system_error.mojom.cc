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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom.h"

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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-params-data.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_ERROR_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_ERROR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
NativeFileSystemError::NativeFileSystemError()
    : error_code() {}

NativeFileSystemError::NativeFileSystemError(
    ::base::File::Error error_code_in)
    : error_code(std::move(error_code_in)) {}

NativeFileSystemError::~NativeFileSystemError() = default;

bool NativeFileSystemError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::NativeFileSystemError::DataView, ::blink::mojom::NativeFileSystemErrorPtr>::Read(
    ::blink::mojom::NativeFileSystemError::DataView input,
    ::blink::mojom::NativeFileSystemErrorPtr* output) {
  bool success = true;
  ::blink::mojom::NativeFileSystemErrorPtr result(::blink::mojom::NativeFileSystemError::New());
  
      if (!input.ReadErrorCode(&result->error_code))
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