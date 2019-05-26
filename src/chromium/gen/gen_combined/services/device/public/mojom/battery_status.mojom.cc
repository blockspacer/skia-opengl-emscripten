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

#include "services/device/public/mojom/battery_status.mojom.h"

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

#include "services/device/public/mojom/battery_status.mojom-params-data.h"
#include "services/device/public/mojom/battery_status.mojom-shared-message-ids.h"

#include "services/device/public/mojom/battery_status.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_JUMBO_H_
#endif
namespace device {
namespace mojom {
BatteryStatus::BatteryStatus()
    : charging(true),
      charging_time(0.0),
      discharging_time(std::numeric_limits<double>::infinity()),
      level(1.0) {}

BatteryStatus::BatteryStatus(
    bool charging_in,
    double charging_time_in,
    double discharging_time_in,
    double level_in)
    : charging(std::move(charging_in)),
      charging_time(std::move(charging_time_in)),
      discharging_time(std::move(discharging_time_in)),
      level(std::move(level_in)) {}

BatteryStatus::~BatteryStatus() = default;
size_t BatteryStatus::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->charging);
  seed = mojo::internal::Hash(seed, this->charging_time);
  seed = mojo::internal::Hash(seed, this->discharging_time);
  seed = mojo::internal::Hash(seed, this->level);
  return seed;
}

bool BatteryStatus::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::BatteryStatus::DataView, ::device::mojom::BatteryStatusPtr>::Read(
    ::device::mojom::BatteryStatus::DataView input,
    ::device::mojom::BatteryStatusPtr* output) {
  bool success = true;
  ::device::mojom::BatteryStatusPtr result(::device::mojom::BatteryStatus::New());
  
      result->charging = input.charging();
      result->charging_time = input.charging_time();
      result->discharging_time = input.discharging_time();
      result->level = input.level();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif