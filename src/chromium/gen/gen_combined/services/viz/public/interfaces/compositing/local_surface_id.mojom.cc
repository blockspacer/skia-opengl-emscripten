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

#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"

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

#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace viz {
namespace mojom {
LocalSurfaceId::LocalSurfaceId()
    : parent_sequence_number(),
      child_sequence_number(),
      embed_token() {}

LocalSurfaceId::LocalSurfaceId(
    uint32_t parent_sequence_number_in,
    uint32_t child_sequence_number_in,
    const base::UnguessableToken& embed_token_in)
    : parent_sequence_number(std::move(parent_sequence_number_in)),
      child_sequence_number(std::move(child_sequence_number_in)),
      embed_token(std::move(embed_token_in)) {}

LocalSurfaceId::~LocalSurfaceId() = default;

bool LocalSurfaceId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::LocalSurfaceId::DataView, ::viz::mojom::LocalSurfaceIdPtr>::Read(
    ::viz::mojom::LocalSurfaceId::DataView input,
    ::viz::mojom::LocalSurfaceIdPtr* output) {
  bool success = true;
  ::viz::mojom::LocalSurfaceIdPtr result(::viz::mojom::LocalSurfaceId::New());
  
      result->parent_sequence_number = input.parent_sequence_number();
      result->child_sequence_number = input.child_sequence_number();
      if (!input.ReadEmbedToken(&result->embed_token))
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