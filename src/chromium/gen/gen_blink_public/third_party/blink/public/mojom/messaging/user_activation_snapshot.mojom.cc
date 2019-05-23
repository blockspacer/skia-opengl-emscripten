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

#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom.h"

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

#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-params-data.h"
#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_USER_ACTIVATION_SNAPSHOT_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
UserActivationSnapshot::UserActivationSnapshot()
    : has_been_active(),
      was_active() {}

UserActivationSnapshot::UserActivationSnapshot(
    bool has_been_active_in,
    bool was_active_in)
    : has_been_active(std::move(has_been_active_in)),
      was_active(std::move(was_active_in)) {}

UserActivationSnapshot::~UserActivationSnapshot() = default;
size_t UserActivationSnapshot::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->has_been_active);
  seed = mojo::internal::Hash(seed, this->was_active);
  return seed;
}

bool UserActivationSnapshot::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::UserActivationSnapshot::DataView, ::blink::mojom::UserActivationSnapshotPtr>::Read(
    ::blink::mojom::UserActivationSnapshot::DataView input,
    ::blink::mojom::UserActivationSnapshotPtr* output) {
  bool success = true;
  ::blink::mojom::UserActivationSnapshotPtr result(::blink::mojom::UserActivationSnapshot::New());
  
      result->has_been_active = input.has_been_active();
      result->was_active = input.was_active();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif