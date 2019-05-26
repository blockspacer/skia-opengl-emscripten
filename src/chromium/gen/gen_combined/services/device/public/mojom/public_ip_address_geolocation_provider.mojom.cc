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

#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom.h"

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

#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-params-data.h"
#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-shared-message-ids.h"

#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_JUMBO_H_
#include "services/network/public/cpp/mutable_partial_network_traffic_annotation_tag_mojom_traits.h"
#endif
namespace device {
namespace mojom {
const char PublicIpAddressGeolocationProvider::Name_[] = "device.mojom.PublicIpAddressGeolocationProvider";

PublicIpAddressGeolocationProviderProxy::PublicIpAddressGeolocationProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PublicIpAddressGeolocationProviderProxy::CreateGeolocation(
    const net::MutablePartialNetworkTrafficAnnotationTag& in_tag, ::device::mojom::GeolocationRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PublicIpAddressGeolocationProvider::CreateGeolocation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPublicIpAddressGeolocationProvider_CreateGeolocation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->tag)::BaseType::BufferWriter
      tag_writer;
  mojo::internal::Serialize<::network::mojom::MutablePartialNetworkTrafficAnnotationTagDataView>(
      in_tag, buffer, &tag_writer, &serialization_context);
  params->tag.Set(
      tag_writer.is_null() ? nullptr : tag_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->tag.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tag in PublicIpAddressGeolocationProvider.CreateGeolocation request");
  mojo::internal::Serialize<::device::mojom::GeolocationRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in PublicIpAddressGeolocationProvider.CreateGeolocation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PublicIpAddressGeolocationProvider::Name_);
  message.set_method_name("CreateGeolocation");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PublicIpAddressGeolocationProviderStubDispatch::Accept(
    PublicIpAddressGeolocationProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPublicIpAddressGeolocationProvider_CreateGeolocation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PublicIpAddressGeolocationProvider::CreateGeolocation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data* params =
          reinterpret_cast<internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::MutablePartialNetworkTrafficAnnotationTag p_tag{};
      ::device::mojom::GeolocationRequest p_request{};
      PublicIpAddressGeolocationProvider_CreateGeolocation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTag(&p_tag))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PublicIpAddressGeolocationProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateGeolocation(
std::move(p_tag), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool PublicIpAddressGeolocationProviderStubDispatch::AcceptWithResponder(
    PublicIpAddressGeolocationProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPublicIpAddressGeolocationProvider_CreateGeolocation_Name: {
      break;
    }
  }
  return false;
}

bool PublicIpAddressGeolocationProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PublicIpAddressGeolocationProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kPublicIpAddressGeolocationProvider_CreateGeolocation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PublicIpAddressGeolocationProvider_CreateGeolocation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif