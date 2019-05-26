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

#include "media/mojo/interfaces/display_media_information.mojom.h"

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

#include "media/mojo/interfaces/display_media_information.mojom-params-data.h"
#include "media/mojo/interfaces/display_media_information.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/display_media_information.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_JUMBO_H_
#endif
namespace media {
namespace mojom {
DisplayMediaInformation::DisplayMediaInformation()
    : display_surface(),
      logical_surface(),
      cursor() {}

DisplayMediaInformation::DisplayMediaInformation(
    DisplayCaptureSurfaceType display_surface_in,
    bool logical_surface_in,
    CursorCaptureType cursor_in)
    : display_surface(std::move(display_surface_in)),
      logical_surface(std::move(logical_surface_in)),
      cursor(std::move(cursor_in)) {}

DisplayMediaInformation::~DisplayMediaInformation() = default;
size_t DisplayMediaInformation::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->display_surface);
  seed = mojo::internal::Hash(seed, this->logical_surface);
  seed = mojo::internal::Hash(seed, this->cursor);
  return seed;
}

bool DisplayMediaInformation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::DisplayMediaInformation::DataView, ::media::mojom::DisplayMediaInformationPtr>::Read(
    ::media::mojom::DisplayMediaInformation::DataView input,
    ::media::mojom::DisplayMediaInformationPtr* output) {
  bool success = true;
  ::media::mojom::DisplayMediaInformationPtr result(::media::mojom::DisplayMediaInformation::New());
  
      if (!input.ReadDisplaySurface(&result->display_surface))
        success = false;
      result->logical_surface = input.logical_surface();
      if (!input.ReadCursor(&result->cursor))
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