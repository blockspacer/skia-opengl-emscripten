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

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom.h"

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

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-params-data.h"
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-message-ids.h"

#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-import-headers.h"


#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_JUMBO_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace resource_coordinator {
namespace mojom {
const char DocumentCoordinationUnit::Name_[] = "resource_coordinator.mojom.DocumentCoordinationUnit";

DocumentCoordinationUnitProxy::DocumentCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DocumentCoordinationUnitProxy::SetNetworkAlmostIdle(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetNetworkAlmostIdle");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("SetNetworkAlmostIdle");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DocumentCoordinationUnitProxy::SetLifecycleState(
    ::resource_coordinator::mojom::LifecycleState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetLifecycleState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_SetLifecycleState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::LifecycleState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("SetLifecycleState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DocumentCoordinationUnitProxy::SetHasNonEmptyBeforeUnload(
    bool in_has_nonempty_beforeunload) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetHasNonEmptyBeforeUnload");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->has_nonempty_beforeunload = in_has_nonempty_beforeunload;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("SetHasNonEmptyBeforeUnload");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DocumentCoordinationUnitProxy::SetInterventionPolicy(
    PolicyControlledIntervention in_intervention, InterventionPolicy in_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetInterventionPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_SetInterventionPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::PolicyControlledIntervention>(
      in_intervention, &params->intervention);
  mojo::internal::Serialize<::resource_coordinator::mojom::InterventionPolicy>(
      in_policy, &params->policy);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("SetInterventionPolicy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DocumentCoordinationUnitProxy::SetIsAdFrame(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetIsAdFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_SetIsAdFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("SetIsAdFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DocumentCoordinationUnitProxy::OnNonPersistentNotificationCreated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::OnNonPersistentNotificationCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DocumentCoordinationUnit::Name_);
  message.set_method_name("OnNonPersistentNotificationCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DocumentCoordinationUnitStubDispatch::Accept(
    DocumentCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetNetworkAlmostIdle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DocumentCoordinationUnit_SetNetworkAlmostIdle_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNetworkAlmostIdle();
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetLifecycleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetLifecycleState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::LifecycleState p_state{};
      DocumentCoordinationUnit_SetLifecycleState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetLifecycleState(
std::move(p_state));
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetHasNonEmptyBeforeUnload",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_has_nonempty_beforeunload{};
      DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_ParamsDataView input_data_view(params, &serialization_context);
      
      p_has_nonempty_beforeunload = input_data_view.has_nonempty_beforeunload();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetHasNonEmptyBeforeUnload(
std::move(p_has_nonempty_beforeunload));
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetInterventionPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetInterventionPolicy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PolicyControlledIntervention p_intervention{};
      InterventionPolicy p_policy{};
      DocumentCoordinationUnit_SetInterventionPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIntervention(&p_intervention))
        success = false;
      if (!input_data_view.ReadPolicy(&p_policy))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetInterventionPolicy(
std::move(p_intervention), 
std::move(p_policy));
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetIsAdFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::SetIsAdFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DocumentCoordinationUnit_SetIsAdFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetIsAdFrame();
      return true;
    }
    case internal::kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DocumentCoordinationUnit::OnNonPersistentNotificationCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data* params =
          reinterpret_cast<internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DocumentCoordinationUnit_OnNonPersistentNotificationCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DocumentCoordinationUnit::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnNonPersistentNotificationCreated();
      return true;
    }
  }
  return false;
}

// static
bool DocumentCoordinationUnitStubDispatch::AcceptWithResponder(
    DocumentCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name: {
      break;
    }
    case internal::kDocumentCoordinationUnit_SetLifecycleState_Name: {
      break;
    }
    case internal::kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name: {
      break;
    }
    case internal::kDocumentCoordinationUnit_SetInterventionPolicy_Name: {
      break;
    }
    case internal::kDocumentCoordinationUnit_SetIsAdFrame_Name: {
      break;
    }
    case internal::kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
      break;
    }
  }
  return false;
}

bool DocumentCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DocumentCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kDocumentCoordinationUnit_SetNetworkAlmostIdle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_SetNetworkAlmostIdle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetLifecycleState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_SetLifecycleState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_SetHasNonEmptyBeforeUnload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetInterventionPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_SetInterventionPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDocumentCoordinationUnit_SetIsAdFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_SetIsAdFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDocumentCoordinationUnit_OnNonPersistentNotificationCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DocumentCoordinationUnit_OnNonPersistentNotificationCreated_Params_Data>(
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

const char ProcessCoordinationUnit::Name_[] = "resource_coordinator.mojom.ProcessCoordinationUnit";

ProcessCoordinationUnitProxy::ProcessCoordinationUnitProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProcessCoordinationUnitProxy::SetExpectedTaskQueueingDuration(
    base::TimeDelta in_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProcessCoordinationUnit::SetExpectedTaskQueueingDuration");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->duration)::BaseType::BufferWriter
      duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_duration, buffer, &duration_writer, &serialization_context);
  params->duration.Set(
      duration_writer.is_null() ? nullptr : duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null duration in ProcessCoordinationUnit.SetExpectedTaskQueueingDuration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProcessCoordinationUnit::Name_);
  message.set_method_name("SetExpectedTaskQueueingDuration");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProcessCoordinationUnitProxy::SetMainThreadTaskLoadIsLow(
    bool in_main_thread_task_load_is_low) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->main_thread_task_load_is_low = in_main_thread_task_load_is_low;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProcessCoordinationUnit::Name_);
  message.set_method_name("SetMainThreadTaskLoadIsLow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProcessCoordinationUnitStubDispatch::Accept(
    ProcessCoordinationUnit* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProcessCoordinationUnit::SetExpectedTaskQueueingDuration",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_duration{};
      ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDuration(&p_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProcessCoordinationUnit::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetExpectedTaskQueueingDuration(
std::move(p_duration));
      return true;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProcessCoordinationUnit::SetMainThreadTaskLoadIsLow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data* params =
          reinterpret_cast<internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_main_thread_task_load_is_low{};
      ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_main_thread_task_load_is_low = input_data_view.main_thread_task_load_is_low();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProcessCoordinationUnit::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetMainThreadTaskLoadIsLow(
std::move(p_main_thread_task_load_is_low));
      return true;
    }
  }
  return false;
}

// static
bool ProcessCoordinationUnitStubDispatch::AcceptWithResponder(
    ProcessCoordinationUnit* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
      break;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
      break;
    }
  }
  return false;
}

bool ProcessCoordinationUnitRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProcessCoordinationUnit RequestValidator");

  switch (message->header()->name) {
    case internal::kProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetExpectedTaskQueueingDuration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessCoordinationUnit_SetMainThreadTaskLoadIsLow_Params_Data>(
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
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif