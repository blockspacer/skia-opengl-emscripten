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

#include "services/service_manager/public/mojom/interface_provider_spec.mojom-blink.h"

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

#include "services/service_manager/public/mojom/interface_provider_spec.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_BLINK_JUMBO_H_
#endif
namespace service_manager {
namespace mojom {
namespace blink {
const char kServiceManager_ConnectorSpec[] = "service_manager:connector";
InterfaceSet::InterfaceSet()
    : interfaces() {}

InterfaceSet::InterfaceSet(
    const WTF::Vector<WTF::String>& interfaces_in)
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
    const WTF::Vector<WTF::String>& capabilities_in)
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
    WTF::HashMap<WTF::String, InterfaceSetPtr> provides_in,
    WTF::HashMap<WTF::String, CapabilitySetPtr> requires_in)
    : provides(std::move(provides_in)),
      requires(std::move(requires_in)) {}

InterfaceProviderSpec::~InterfaceProviderSpec() = default;

bool InterfaceProviderSpec::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::blink::InterfaceSet::DataView, ::service_manager::mojom::blink::InterfaceSetPtr>::Read(
    ::service_manager::mojom::blink::InterfaceSet::DataView input,
    ::service_manager::mojom::blink::InterfaceSetPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::InterfaceSetPtr result(::service_manager::mojom::blink::InterfaceSet::New());
  
      if (!input.ReadInterfaces(&result->interfaces))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::service_manager::mojom::blink::CapabilitySet::DataView, ::service_manager::mojom::blink::CapabilitySetPtr>::Read(
    ::service_manager::mojom::blink::CapabilitySet::DataView input,
    ::service_manager::mojom::blink::CapabilitySetPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::CapabilitySetPtr result(::service_manager::mojom::blink::CapabilitySet::New());
  
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::service_manager::mojom::blink::InterfaceProviderSpec::DataView, ::service_manager::mojom::blink::InterfaceProviderSpecPtr>::Read(
    ::service_manager::mojom::blink::InterfaceProviderSpec::DataView input,
    ::service_manager::mojom::blink::InterfaceProviderSpecPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::InterfaceProviderSpecPtr result(::service_manager::mojom::blink::InterfaceProviderSpec::New());
  
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