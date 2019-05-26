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

#include "services/service_manager/public/mojom/interface_provider_spec.mojom.h"

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

#include "services/service_manager/public/mojom/interface_provider_spec.mojom-params-data.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/interface_provider_spec.mojom-import-headers.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_JUMBO_H_
#include "services/service_manager/public/cpp/interface_provider_spec_mojom_traits.h"
#endif
namespace service_manager {
namespace mojom {
const char kServiceManager_ConnectorSpec[] = "service_manager:connector";
InterfaceSet::InterfaceSet()
    : interfaces() {}

InterfaceSet::InterfaceSet(
    const std::vector<std::string>& interfaces_in)
    : interfaces(std::move(interfaces_in)) {}

InterfaceSet::~InterfaceSet() = default;

bool InterfaceSet::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CapabilitySet::CapabilitySet()
    : capabilities() {}

CapabilitySet::CapabilitySet(
    const std::vector<std::string>& capabilities_in)
    : capabilities(std::move(capabilities_in)) {}

CapabilitySet::~CapabilitySet() = default;

bool CapabilitySet::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
InterfaceProviderSpec::InterfaceProviderSpec()
    : provides(),
      requires() {}

InterfaceProviderSpec::InterfaceProviderSpec(
    const base::flat_map<std::string, ::service_manager::InterfaceSet>& provides_in,
    const base::flat_map<std::string, ::service_manager::CapabilitySet>& requires_in)
    : provides(std::move(provides_in)),
      requires(std::move(requires_in)) {}

InterfaceProviderSpec::~InterfaceProviderSpec() = default;

bool InterfaceProviderSpec::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::InterfaceSet::DataView, ::service_manager::mojom::InterfaceSetPtr>::Read(
    ::service_manager::mojom::InterfaceSet::DataView input,
    ::service_manager::mojom::InterfaceSetPtr* output) {
  bool success = true;
  ::service_manager::mojom::InterfaceSetPtr result(::service_manager::mojom::InterfaceSet::New());
  
      if (!input.ReadInterfaces(&result->interfaces))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::service_manager::mojom::CapabilitySet::DataView, ::service_manager::mojom::CapabilitySetPtr>::Read(
    ::service_manager::mojom::CapabilitySet::DataView input,
    ::service_manager::mojom::CapabilitySetPtr* output) {
  bool success = true;
  ::service_manager::mojom::CapabilitySetPtr result(::service_manager::mojom::CapabilitySet::New());
  
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::service_manager::mojom::InterfaceProviderSpec::DataView, ::service_manager::mojom::InterfaceProviderSpecPtr>::Read(
    ::service_manager::mojom::InterfaceProviderSpec::DataView input,
    ::service_manager::mojom::InterfaceProviderSpecPtr* output) {
  bool success = true;
  ::service_manager::mojom::InterfaceProviderSpecPtr result(::service_manager::mojom::InterfaceProviderSpec::New());
  
      if (!input.ReadProvides(&result->provides))
        success = false;
      if (!input.ReadRequires(&result->requires))
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