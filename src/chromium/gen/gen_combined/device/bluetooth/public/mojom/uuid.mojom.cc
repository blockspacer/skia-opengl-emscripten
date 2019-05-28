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

#include "device/bluetooth/public/mojom/uuid.mojom.h"

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

#include "device/bluetooth/public/mojom/uuid.mojom-params-data.h"
#include "device/bluetooth/public/mojom/uuid.mojom-shared-message-ids.h"

#include "device/bluetooth/public/mojom/uuid.mojom-import-headers.h"


#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_JUMBO_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_JUMBO_H_
#endif
namespace bluetooth {
namespace mojom {
UUID::UUID()
    : uuid() {}

UUID::UUID(
    const std::string& uuid_in)
    : uuid(std::move(uuid_in)) {}

UUID::~UUID() = default;

bool UUID::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace bluetooth

namespace mojo {


// static
bool StructTraits<::bluetooth::mojom::UUID::DataView, ::bluetooth::mojom::UUIDPtr>::Read(
    ::bluetooth::mojom::UUID::DataView input,
    ::bluetooth::mojom::UUIDPtr* output) {
  bool success = true;
  ::bluetooth::mojom::UUIDPtr result(::bluetooth::mojom::UUID::New());
  
      if (!input.ReadUuid(&result->uuid))
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