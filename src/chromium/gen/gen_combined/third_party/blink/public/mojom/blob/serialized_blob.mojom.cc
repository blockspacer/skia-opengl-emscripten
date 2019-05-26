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

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"

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

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-params-data.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
SerializedBlob::SerializedBlob()
    : uuid(),
      content_type(),
      size(),
      blob() {}

SerializedBlob::SerializedBlob(
    const std::string& uuid_in,
    const std::string& content_type_in,
    uint64_t size_in,
    ::blink::mojom::BlobPtrInfo blob_in)
    : uuid(std::move(uuid_in)),
      content_type(std::move(content_type_in)),
      size(std::move(size_in)),
      blob(std::move(blob_in)) {}

SerializedBlob::~SerializedBlob() = default;

bool SerializedBlob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::SerializedBlob::DataView, ::blink::mojom::SerializedBlobPtr>::Read(
    ::blink::mojom::SerializedBlob::DataView input,
    ::blink::mojom::SerializedBlobPtr* output) {
  bool success = true;
  ::blink::mojom::SerializedBlobPtr result(::blink::mojom::SerializedBlob::New());
  
      if (!input.ReadUuid(&result->uuid))
        success = false;
      if (!input.ReadContentType(&result->content_type))
        success = false;
      result->size = input.size();
      result->blob =
          input.TakeBlob<decltype(result->blob)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif