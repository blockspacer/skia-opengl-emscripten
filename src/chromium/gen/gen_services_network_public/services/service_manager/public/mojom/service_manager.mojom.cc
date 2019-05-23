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

#include "services/service_manager/public/mojom/service_manager.mojom.h"

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

#include "services/service_manager/public/mojom/service_manager.mojom-params-data.h"
#include "services/service_manager/public/mojom/service_manager.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/service_manager.mojom-import-headers.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#endif
namespace service_manager {
namespace mojom {
RunningServiceInfo::RunningServiceInfo()
    : identity(),
      pid(),
      state() {}

RunningServiceInfo::RunningServiceInfo(
    const ::service_manager::Identity& identity_in,
    uint32_t pid_in,
    InstanceState state_in)
    : identity(std::move(identity_in)),
      pid(std::move(pid_in)),
      state(std::move(state_in)) {}

RunningServiceInfo::~RunningServiceInfo() = default;

bool RunningServiceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceManagerListener::Name_[] = "service_manager.mojom.ServiceManagerListener";

ServiceManagerListenerProxy::ServiceManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceManagerListenerProxy::OnInit(
    std::vector<RunningServiceInfoPtr> in_running_services) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnInit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnInit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnInit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->running_services)::BaseType::BufferWriter
      running_services_writer;
  const mojo::internal::ContainerValidateParams running_services_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::service_manager::mojom::RunningServiceInfoDataView>>(
      in_running_services, buffer, &running_services_writer, &running_services_validate_params,
      &serialization_context);
  params->running_services.Set(
      running_services_writer.is_null() ? nullptr : running_services_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->running_services.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null running_services in ServiceManagerListener.OnInit request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnInit");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceManagerListenerProxy::OnServiceCreated(
    RunningServiceInfoPtr in_service) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnServiceCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnServiceCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service)::BaseType::BufferWriter
      service_writer;
  mojo::internal::Serialize<::service_manager::mojom::RunningServiceInfoDataView>(
      in_service, buffer, &service_writer, &serialization_context);
  params->service.Set(
      service_writer.is_null() ? nullptr : service_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service in ServiceManagerListener.OnServiceCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnServiceCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceManagerListenerProxy::OnServiceStarted(
    const ::service_manager::Identity& in_identity, uint32_t in_pid_deprecated) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnServiceStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnServiceStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServiceStarted request");
  params->pid_deprecated = in_pid_deprecated;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnServiceStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceManagerListenerProxy::OnServicePIDReceived(
    const ::service_manager::Identity& in_identity, uint32_t in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServicePIDReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnServicePIDReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnServicePIDReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServicePIDReceived request");
  params->pid = in_pid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnServicePIDReceived");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceManagerListenerProxy::OnServiceFailedToStart(
    const ::service_manager::Identity& in_identity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceFailedToStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnServiceFailedToStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServiceFailedToStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnServiceFailedToStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceManagerListenerProxy::OnServiceStopped(
    const ::service_manager::Identity& in_identity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManagerListener_OnServiceStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManagerListener_OnServiceStopped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServiceStopped request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManagerListener::Name_);
  message.set_method_name("OnServiceStopped");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceManagerListenerStubDispatch::Accept(
    ServiceManagerListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnInit",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnInit_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnInit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<RunningServiceInfoPtr> p_running_services{};
      ServiceManagerListener_OnInit_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRunningServices(&p_running_services))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnInit(
std::move(p_running_services));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnServiceCreated_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RunningServiceInfoPtr p_service{};
      ServiceManagerListener_OnServiceCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadService(&p_service))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnServiceCreated(
std::move(p_service));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnServiceStarted_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      uint32_t p_pid_deprecated{};
      ServiceManagerListener_OnServiceStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      p_pid_deprecated = input_data_view.pid_deprecated();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnServiceStarted(
std::move(p_identity), 
std::move(p_pid_deprecated));
      return true;
    }
    case internal::kServiceManagerListener_OnServicePIDReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServicePIDReceived",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnServicePIDReceived_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServicePIDReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      uint32_t p_pid{};
      ServiceManagerListener_OnServicePIDReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnServicePIDReceived(
std::move(p_identity), 
std::move(p_pid));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceFailedToStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceFailedToStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      ServiceManagerListener_OnServiceFailedToStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnServiceFailedToStart(
std::move(p_identity));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManagerListener::OnServiceStopped",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManagerListener_OnServiceStopped_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      ServiceManagerListener_OnServiceStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManagerListener::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnServiceStopped(
std::move(p_identity));
      return true;
    }
  }
  return false;
}

// static
bool ServiceManagerListenerStubDispatch::AcceptWithResponder(
    ServiceManagerListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServicePIDReceived_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceFailedToStart_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
      break;
    }
  }
  return false;
}

bool ServiceManagerListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceManagerListener RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnInit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceManagerListener_OnServicePIDReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServicePIDReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceManagerListener_OnServiceFailedToStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceFailedToStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceStopped_Params_Data>(
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

const char ServiceManager::Name_[] = "service_manager.mojom.ServiceManager";

ServiceManagerProxy::ServiceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceManagerProxy::AddListener(
    ServiceManagerListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceManager::AddListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceManager_AddListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceManager_AddListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ServiceManagerListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in ServiceManager.AddListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceManager::Name_);
  message.set_method_name("AddListener");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceManagerStubDispatch::Accept(
    ServiceManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceManager::AddListener",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceManager_AddListener_Params_Data* params =
          reinterpret_cast<internal::ServiceManager_AddListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceManagerListenerPtr p_listener{};
      ServiceManager_AddListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddListener(
std::move(p_listener));
      return true;
    }
  }
  return false;
}

// static
bool ServiceManagerStubDispatch::AcceptWithResponder(
    ServiceManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
      break;
    }
  }
  return false;
}

bool ServiceManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceManager RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManager_AddListener_Params_Data>(
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
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::RunningServiceInfo::DataView, ::service_manager::mojom::RunningServiceInfoPtr>::Read(
    ::service_manager::mojom::RunningServiceInfo::DataView input,
    ::service_manager::mojom::RunningServiceInfoPtr* output) {
  bool success = true;
  ::service_manager::mojom::RunningServiceInfoPtr result(::service_manager::mojom::RunningServiceInfo::New());
  
      if (!input.ReadIdentity(&result->identity))
        success = false;
      result->pid = input.pid();
      if (!input.ReadState(&result->state))
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