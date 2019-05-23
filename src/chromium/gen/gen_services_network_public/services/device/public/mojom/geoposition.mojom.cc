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

#include "services/device/public/mojom/geoposition.mojom.h"

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

#include "services/device/public/mojom/geoposition.mojom-params-data.h"
#include "services/device/public/mojom/geoposition.mojom-shared-message-ids.h"

#include "services/device/public/mojom/geoposition.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace device {
namespace mojom {
Geoposition::Geoposition()
    : valid(),
      latitude(kBadLatitudeLongitude),
      longitude(kBadLatitudeLongitude),
      altitude(kBadAltitude),
      accuracy(kBadAccuracy),
      altitude_accuracy(kBadAccuracy),
      heading(kBadHeading),
      speed(kBadSpeed),
      timestamp(),
      error_code(Geoposition_ErrorCode::NONE),
      error_message() {}

Geoposition::Geoposition(
    bool valid_in,
    double latitude_in,
    double longitude_in,
    double altitude_in,
    double accuracy_in,
    double altitude_accuracy_in,
    double heading_in,
    double speed_in,
    base::Time timestamp_in,
    Geoposition::ErrorCode error_code_in,
    const std::string& error_message_in)
    : valid(std::move(valid_in)),
      latitude(std::move(latitude_in)),
      longitude(std::move(longitude_in)),
      altitude(std::move(altitude_in)),
      accuracy(std::move(accuracy_in)),
      altitude_accuracy(std::move(altitude_accuracy_in)),
      heading(std::move(heading_in)),
      speed(std::move(speed_in)),
      timestamp(std::move(timestamp_in)),
      error_code(std::move(error_code_in)),
      error_message(std::move(error_message_in)) {}

Geoposition::~Geoposition() = default;

bool Geoposition::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::Geoposition::DataView, ::device::mojom::GeopositionPtr>::Read(
    ::device::mojom::Geoposition::DataView input,
    ::device::mojom::GeopositionPtr* output) {
  bool success = true;
  ::device::mojom::GeopositionPtr result(::device::mojom::Geoposition::New());
  
      result->valid = input.valid();
      result->latitude = input.latitude();
      result->longitude = input.longitude();
      result->altitude = input.altitude();
      result->accuracy = input.accuracy();
      result->altitude_accuracy = input.altitude_accuracy();
      result->heading = input.heading();
      result->speed = input.speed();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadErrorCode(&result->error_code))
        success = false;
      if (!input.ReadErrorMessage(&result->error_message))
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