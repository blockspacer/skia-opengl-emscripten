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

#include "services/service_manager/public/mojom/connector.mojom.h"

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

#include "services/service_manager/public/mojom/connector.mojom-params-data.h"
#include "services/service_manager/public/mojom/connector.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/connector.mojom-import-headers.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#include "mojo/public/cpp/base/token_mojom_traits.h"
#include "services/service_manager/public/cpp/identity_mojom_traits.h"
#include "services/service_manager/public/cpp/service_filter_mojom_traits.h"
#endif
namespace service_manager {
namespace mojom {
Identity::Identity()
    : name(),
      instance_group(),
      instance_id(),
      globally_unique_id() {}

Identity::Identity(
    const std::string& name_in,
    const base::BaseToken& instance_group_in,
    const base::BaseToken& instance_id_in,
    const base::BaseToken& globally_unique_id_in)
    : name(std::move(name_in)),
      instance_group(std::move(instance_group_in)),
      instance_id(std::move(instance_id_in)),
      globally_unique_id(std::move(globally_unique_id_in)) {}

Identity::~Identity() = default;

bool Identity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceInfo::ServiceInfo()
    : sandbox_type() {}

ServiceInfo::ServiceInfo(
    const std::string& sandbox_type_in)
    : sandbox_type(std::move(sandbox_type_in)) {}

ServiceInfo::~ServiceInfo() = default;
size_t ServiceInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->sandbox_type);
  return seed;
}

bool ServiceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProcessMetadata::Name_[] = "service_manager.mojom.ProcessMetadata";

ProcessMetadataProxy::ProcessMetadataProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProcessMetadataProxy::SetPID(
    base::ProcessId in_pid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProcessMetadata::SetPID");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProcessMetadata_SetPID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ProcessMetadata_SetPID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pid)::BaseType::BufferWriter
      pid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
      in_pid, buffer, &pid_writer, &serialization_context);
  params->pid.Set(
      pid_writer.is_null() ? nullptr : pid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pid in ProcessMetadata.SetPID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProcessMetadata::Name_);
  message.set_method_name("SetPID");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProcessMetadataStubDispatch::Accept(
    ProcessMetadata* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProcessMetadata_SetPID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProcessMetadata::SetPID",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProcessMetadata_SetPID_Params_Data* params =
          reinterpret_cast<internal::ProcessMetadata_SetPID_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ProcessId p_pid{};
      ProcessMetadata_SetPID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPid(&p_pid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProcessMetadata::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetPID(
std::move(p_pid));
      return true;
    }
  }
  return false;
}

// static
bool ProcessMetadataStubDispatch::AcceptWithResponder(
    ProcessMetadata* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProcessMetadata_SetPID_Name: {
      break;
    }
  }
  return false;
}

bool ProcessMetadataRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProcessMetadata RequestValidator");

  switch (message->header()->name) {
    case internal::kProcessMetadata_SetPID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessMetadata_SetPID_Params_Data>(
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

const char Connector::Name_[] = "service_manager.mojom.Connector";

class Connector_BindInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_BindInterface_ForwardToCallback(
      Connector::BindInterfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::BindInterfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_BindInterface_ForwardToCallback);
};

class Connector_QueryService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_QueryService_ForwardToCallback(
      Connector::QueryServiceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::QueryServiceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_QueryService_ForwardToCallback);
};

class Connector_WarmService_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_WarmService_ForwardToCallback(
      Connector::WarmServiceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::WarmServiceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_WarmService_ForwardToCallback);
};

class Connector_RegisterServiceInstance_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_RegisterServiceInstance_ForwardToCallback(
      Connector::RegisterServiceInstanceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::RegisterServiceInstanceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Connector_RegisterServiceInstance_ForwardToCallback);
};

ConnectorProxy::ConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ConnectorProxy::BindInterface(
    const ::service_manager::ServiceFilter& in_filter, const std::string& in_interface_name, mojo::ScopedMessagePipeHandle in_interface_pipe, BindInterfacePriority in_priority, BindInterfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::BindInterface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_BindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_BindInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::service_manager::mojom::ServiceFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filter.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in Connector.BindInterface request");
  typename decltype(params->interface_name)::BaseType::BufferWriter
      interface_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_interface_name, buffer, &interface_name_writer, &serialization_context);
  params->interface_name.Set(
      interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interface_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in Connector.BindInterface request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_interface_pipe, &params->interface_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_pipe in Connector.BindInterface request");
  mojo::internal::Serialize<::service_manager::mojom::BindInterfacePriority>(
      in_priority, &params->priority);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("BindInterface");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_BindInterface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::QueryService(
    const std::string& in_service_name, QueryServiceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::QueryService");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_QueryService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_QueryService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_name)::BaseType::BufferWriter
      service_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_name, buffer, &service_name_writer, &serialization_context);
  params->service_name.Set(
      service_name_writer.is_null() ? nullptr : service_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_name in Connector.QueryService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("QueryService");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_QueryService_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::WarmService(
    const ::service_manager::ServiceFilter& in_filter, WarmServiceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::WarmService");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_WarmService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_WarmService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::service_manager::mojom::ServiceFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filter.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in Connector.WarmService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("WarmService");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_WarmService_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::RegisterServiceInstance(
    const ::service_manager::Identity& in_identity, mojo::ScopedMessagePipeHandle in_service, mojo::PendingReceiver<ProcessMetadata> in_metadata_receiver, RegisterServiceInstanceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::RegisterServiceInstance");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_RegisterServiceInstance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_RegisterServiceInstance_Params_Data::BufferWriter
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
      "null identity in Connector.RegisterServiceInstance request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_service, &params->service, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service in Connector.RegisterServiceInstance request");
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::service_manager::mojom::ProcessMetadataInterfaceBase>>(
      in_metadata_receiver, &params->metadata_receiver, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("RegisterServiceInstance");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Connector_RegisterServiceInstance_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ConnectorProxy::Clone(
    ConnectorRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectorRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in Connector.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ConnectorProxy::FilterInterfaces(
    const std::string& in_spec, const ::service_manager::Identity& in_source, ::service_manager::mojom::InterfaceProviderRequest in_source_request, ::service_manager::mojom::InterfaceProviderPtr in_target) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Connector::FilterInterfaces");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_FilterInterfaces_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_FilterInterfaces_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->spec)::BaseType::BufferWriter
      spec_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_spec, buffer, &spec_writer, &serialization_context);
  params->spec.Set(
      spec_writer.is_null() ? nullptr : spec_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->spec.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null spec in Connector.FilterInterfaces request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in Connector.FilterInterfaces request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_source_request, &params->source_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->source_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source_request in Connector.FilterInterfaces request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_target, &params->target, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->target),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid target in Connector.FilterInterfaces request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("FilterInterfaces");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Connector_BindInterface_ProxyToResponder {
 public:
  static Connector::BindInterfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_BindInterface_ProxyToResponder> proxy(
        new Connector_BindInterface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_BindInterface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_BindInterface_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Connector_BindInterface_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Connector::BindInterfaceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, const base::Optional<::service_manager::Identity>& in_identity);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_BindInterface_ProxyToResponder);
};

bool Connector_BindInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Connector::BindInterfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_BindInterface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_BindInterface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  base::Optional<::service_manager::Identity> p_identity{};
  Connector_BindInterface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Connector::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_identity));
  return true;
}

void Connector_BindInterface_ProxyToResponder::Run(
    ConnectResult in_result, const base::Optional<::service_manager::Identity>& in_identity) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_BindInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_BindInterface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Connector::BindInterfaceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("BindInterface");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_QueryService_ProxyToResponder {
 public:
  static Connector::QueryServiceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_QueryService_ProxyToResponder> proxy(
        new Connector_QueryService_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_QueryService_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_QueryService_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Connector_QueryService_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Connector::QueryServiceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ServiceInfoPtr in_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_QueryService_ProxyToResponder);
};

bool Connector_QueryService_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Connector::QueryServiceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_QueryService_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_QueryService_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ServiceInfoPtr p_info{};
  Connector_QueryService_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Connector::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_info));
  return true;
}

void Connector_QueryService_ProxyToResponder::Run(
    ServiceInfoPtr in_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_QueryService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_QueryService_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::service_manager::mojom::ServiceInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Connector::QueryServiceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("QueryService");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_WarmService_ProxyToResponder {
 public:
  static Connector::WarmServiceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_WarmService_ProxyToResponder> proxy(
        new Connector_WarmService_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_WarmService_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_WarmService_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Connector_WarmService_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Connector::WarmServiceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result, const base::Optional<::service_manager::Identity>& in_identity);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_WarmService_ProxyToResponder);
};

bool Connector_WarmService_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Connector::WarmServiceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_WarmService_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_WarmService_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  base::Optional<::service_manager::Identity> p_identity{};
  Connector_WarmService_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Connector::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_identity));
  return true;
}

void Connector_WarmService_ProxyToResponder::Run(
    ConnectResult in_result, const base::Optional<::service_manager::Identity>& in_identity) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_WarmService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_WarmService_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Connector::WarmServiceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("WarmService");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Connector_RegisterServiceInstance_ProxyToResponder {
 public:
  static Connector::RegisterServiceInstanceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Connector_RegisterServiceInstance_ProxyToResponder> proxy(
        new Connector_RegisterServiceInstance_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Connector_RegisterServiceInstance_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Connector_RegisterServiceInstance_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Connector_RegisterServiceInstance_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Connector::RegisterServiceInstanceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ConnectResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Connector_RegisterServiceInstance_ProxyToResponder);
};

bool Connector_RegisterServiceInstance_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Connector::RegisterServiceInstanceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Connector_RegisterServiceInstance_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Connector_RegisterServiceInstance_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ConnectResult p_result{};
  Connector_RegisterServiceInstance_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Connector::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Connector_RegisterServiceInstance_ProxyToResponder::Run(
    ConnectResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConnector_RegisterServiceInstance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::Connector_RegisterServiceInstance_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ConnectResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Connector::RegisterServiceInstanceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Connector::Name_);
  message.set_method_name("RegisterServiceInstance");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ConnectorStubDispatch::Accept(
    Connector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
      break;
    }
    case internal::kConnector_QueryService_Name: {
      break;
    }
    case internal::kConnector_WarmService_Name: {
      break;
    }
    case internal::kConnector_RegisterServiceInstance_Name: {
      break;
    }
    case internal::kConnector_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::Clone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Connector_Clone_Params_Data* params =
          reinterpret_cast<internal::Connector_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ConnectorRequest p_request{};
      Connector_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_request));
      return true;
    }
    case internal::kConnector_FilterInterfaces_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::FilterInterfaces",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Connector_FilterInterfaces_Params_Data* params =
          reinterpret_cast<internal::Connector_FilterInterfaces_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_spec{};
      ::service_manager::Identity p_source{};
      ::service_manager::mojom::InterfaceProviderRequest p_source_request{};
      ::service_manager::mojom::InterfaceProviderPtr p_target{};
      Connector_FilterInterfaces_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSpec(&p_spec))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      p_source_request =
          input_data_view.TakeSourceRequest<decltype(p_source_request)>();
      p_target =
          input_data_view.TakeTarget<decltype(p_target)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FilterInterfaces(
std::move(p_spec), 
std::move(p_source), 
std::move(p_source_request), 
std::move(p_target));
      return true;
    }
  }
  return false;
}

// static
bool ConnectorStubDispatch::AcceptWithResponder(
    Connector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::BindInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_BindInterface_Params_Data* params =
          reinterpret_cast<
              internal::Connector_BindInterface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::ServiceFilter p_filter{};
      std::string p_interface_name{};
      mojo::ScopedMessagePipeHandle p_interface_pipe{};
      BindInterfacePriority p_priority{};
      Connector_BindInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!input_data_view.ReadInterfaceName(&p_interface_name))
        success = false;
      p_interface_pipe = input_data_view.TakeInterfacePipe();
      if (!input_data_view.ReadPriority(&p_priority))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 0, false);
        return false;
      }
      Connector::BindInterfaceCallback callback =
          Connector_BindInterface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindInterface(
std::move(p_filter), 
std::move(p_interface_name), 
std::move(p_interface_pipe), 
std::move(p_priority), std::move(callback));
      return true;
    }
    case internal::kConnector_QueryService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::QueryService",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_QueryService_Params_Data* params =
          reinterpret_cast<
              internal::Connector_QueryService_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_service_name{};
      Connector_QueryService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceName(&p_service_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 1, false);
        return false;
      }
      Connector::QueryServiceCallback callback =
          Connector_QueryService_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueryService(
std::move(p_service_name), std::move(callback));
      return true;
    }
    case internal::kConnector_WarmService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::WarmService",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_WarmService_Params_Data* params =
          reinterpret_cast<
              internal::Connector_WarmService_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::ServiceFilter p_filter{};
      Connector_WarmService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 2, false);
        return false;
      }
      Connector::WarmServiceCallback callback =
          Connector_WarmService_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WarmService(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kConnector_RegisterServiceInstance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Connector::RegisterServiceInstance",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Connector_RegisterServiceInstance_Params_Data* params =
          reinterpret_cast<
              internal::Connector_RegisterServiceInstance_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::Identity p_identity{};
      mojo::ScopedMessagePipeHandle p_service{};
      mojo::PendingReceiver<ProcessMetadata> p_metadata_receiver{};
      Connector_RegisterServiceInstance_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      p_service = input_data_view.TakeService();
      p_metadata_receiver =
          input_data_view.TakeMetadataReceiver<decltype(p_metadata_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Connector::Name_, 3, false);
        return false;
      }
      Connector::RegisterServiceInstanceCallback callback =
          Connector_RegisterServiceInstance_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterServiceInstance(
std::move(p_identity), 
std::move(p_service), 
std::move(p_metadata_receiver), std::move(callback));
      return true;
    }
    case internal::kConnector_Clone_Name: {
      break;
    }
    case internal::kConnector_FilterInterfaces_Name: {
      break;
    }
  }
  return false;
}

bool ConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Connector RequestValidator");

  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_BindInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_QueryService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_QueryService_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_WarmService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_WarmService_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_RegisterServiceInstance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_RegisterServiceInstance_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_Clone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_FilterInterfaces_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_FilterInterfaces_Params_Data>(
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

bool ConnectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Connector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kConnector_BindInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_BindInterface_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_QueryService_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_QueryService_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_WarmService_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_WarmService_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kConnector_RegisterServiceInstance_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_RegisterServiceInstance_ResponseParams_Data>(
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
bool StructTraits<::service_manager::mojom::Identity::DataView, ::service_manager::mojom::IdentityPtr>::Read(
    ::service_manager::mojom::Identity::DataView input,
    ::service_manager::mojom::IdentityPtr* output) {
  bool success = true;
  ::service_manager::mojom::IdentityPtr result(::service_manager::mojom::Identity::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadInstanceGroup(&result->instance_group))
        success = false;
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadGloballyUniqueId(&result->globally_unique_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::service_manager::mojom::ServiceInfo::DataView, ::service_manager::mojom::ServiceInfoPtr>::Read(
    ::service_manager::mojom::ServiceInfo::DataView input,
    ::service_manager::mojom::ServiceInfoPtr* output) {
  bool success = true;
  ::service_manager::mojom::ServiceInfoPtr result(::service_manager::mojom::ServiceInfo::New());
  
      if (!input.ReadSandboxType(&result->sandbox_type))
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
