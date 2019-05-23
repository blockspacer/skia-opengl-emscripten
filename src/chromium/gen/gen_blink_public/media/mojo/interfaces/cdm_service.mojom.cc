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

#include "media/mojo/interfaces/cdm_service.mojom.h"

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

#include "media/mojo/interfaces/cdm_service.mojom-params-data.h"
#include "media/mojo/interfaces/cdm_service.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/cdm_service.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#endif
namespace media {
namespace mojom {
const char CdmService::Name_[] = "media.mojom.CdmService";

CdmServiceProxy::CdmServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmServiceProxy::LoadCdm(
    const base::FilePath& in_cdm_path) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmService::LoadCdm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmService_LoadCdm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmService_LoadCdm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cdm_path)::BaseType::BufferWriter
      cdm_path_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_cdm_path, buffer, &cdm_path_writer, &serialization_context);
  params->cdm_path.Set(
      cdm_path_writer.is_null() ? nullptr : cdm_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cdm_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cdm_path in CdmService.LoadCdm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmService::Name_);
  message.set_method_name("LoadCdm");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CdmServiceProxy::CreateCdmFactory(
    ::media::mojom::CdmFactoryRequest in_factory, ::service_manager::mojom::InterfaceProviderPtr in_host_interfaces) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmService::CreateCdmFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmService_CreateCdmFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmService_CreateCdmFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmFactoryRequestDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in CdmService.CreateCdmFactory request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_host_interfaces, &params->host_interfaces, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmService::Name_);
  message.set_method_name("CreateCdmFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CdmServiceStubDispatch::Accept(
    CdmService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmService_LoadCdm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmService::LoadCdm",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmService_LoadCdm_Params_Data* params =
          reinterpret_cast<internal::CdmService_LoadCdm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_cdm_path{};
      CdmService_LoadCdm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCdmPath(&p_cdm_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LoadCdm(
std::move(p_cdm_path));
      return true;
    }
    case internal::kCdmService_CreateCdmFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmService::CreateCdmFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmService_CreateCdmFactory_Params_Data* params =
          reinterpret_cast<internal::CdmService_CreateCdmFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::CdmFactoryRequest p_factory{};
      ::service_manager::mojom::InterfaceProviderPtr p_host_interfaces{};
      CdmService_CreateCdmFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      p_host_interfaces =
          input_data_view.TakeHostInterfaces<decltype(p_host_interfaces)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCdmFactory(
std::move(p_factory), 
std::move(p_host_interfaces));
      return true;
    }
  }
  return false;
}

// static
bool CdmServiceStubDispatch::AcceptWithResponder(
    CdmService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmService_LoadCdm_Name: {
      break;
    }
    case internal::kCdmService_CreateCdmFactory_Name: {
      break;
    }
  }
  return false;
}

bool CdmServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmService RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmService_LoadCdm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmService_LoadCdm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCdmService_CreateCdmFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmService_CreateCdmFactory_Params_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif