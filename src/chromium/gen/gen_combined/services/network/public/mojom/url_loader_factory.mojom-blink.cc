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

#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"

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

#include "services/network/public/mojom/url_loader_factory.mojom-params-data.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-message-ids.h"

#include "services/network/public/mojom/url_loader_factory.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/http_request_headers_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
const char URLLoaderFactory::Name_[] = "network.mojom.URLLoaderFactory";

URLLoaderFactoryProxy::URLLoaderFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void URLLoaderFactoryProxy::CreateLoaderAndStart(
    ::network::mojom::blink::URLLoaderRequest in_loader, int32_t in_routing_id, int32_t in_request_id, uint32_t in_options, ::network::mojom::blink::URLRequestPtr in_request, ::network::mojom::blink::URLLoaderClientPtr in_client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderFactory::CreateLoaderAndStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderFactory_CreateLoaderAndStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderRequestDataView>(
      in_loader, &params->loader, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->loader),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid loader in URLLoaderFactory.CreateLoaderAndStart request");
  params->routing_id = in_routing_id;
  params->request_id = in_request_id;
  params->options = in_options;
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in URLLoaderFactory.CreateLoaderAndStart request");
  mojo::internal::Serialize<::network::mojom::URLLoaderClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in URLLoaderFactory.CreateLoaderAndStart request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in URLLoaderFactory.CreateLoaderAndStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderFactory::Name_);
  message.set_method_name("CreateLoaderAndStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderFactoryProxy::Clone(
    URLLoaderFactoryRequest in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderFactory::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderFactory_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderFactory_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in URLLoaderFactory.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderFactory::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool URLLoaderFactoryStubDispatch::Accept(
    URLLoaderFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderFactory::CreateLoaderAndStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data* params =
          reinterpret_cast<internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::URLLoaderRequest p_loader{};
      int32_t p_routing_id{};
      int32_t p_request_id{};
      uint32_t p_options{};
      ::network::mojom::blink::URLRequestPtr p_request{};
      ::network::mojom::blink::URLLoaderClientPtr p_client{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      URLLoaderFactory_CreateLoaderAndStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_loader =
          input_data_view.TakeLoader<decltype(p_loader)>();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      p_options = input_data_view.options();
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateLoaderAndStart(
std::move(p_loader), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_options), 
std::move(p_request), 
std::move(p_client), 
std::move(p_traffic_annotation));
      return true;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderFactory::Clone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderFactory_Clone_Params_Data* params =
          reinterpret_cast<internal::URLLoaderFactory_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoaderFactoryRequest p_factory{};
      URLLoaderFactory_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_factory));
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderFactoryStubDispatch::AcceptWithResponder(
    URLLoaderFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      break;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
      break;
    }
  }
  return false;
}

bool URLLoaderFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoaderFactory_CreateLoaderAndStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderFactory_CreateLoaderAndStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderFactory_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderFactory_Clone_Params_Data>(
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

}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif