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

#include "services/tracing/public/mojom/perfetto_service.mojom.h"

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

#include "services/tracing/public/mojom/perfetto_service.mojom-params-data.h"
#include "services/tracing/public/mojom/perfetto_service.mojom-shared-message-ids.h"

#include "services/tracing/public/mojom/perfetto_service.mojom-import-headers.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_JUMBO_H_
#include "services/tracing/public/mojom/chrome_config_mojom_traits.h"
#include "services/tracing/public/mojom/commit_data_request_mojom_traits.h"
#include "services/tracing/public/mojom/data_source_config_mojom_traits.h"
#include "services/tracing/public/mojom/data_source_descriptor_mojom_traits.h"
#include "services/tracing/public/mojom/trace_config_mojom_traits.h"
#endif
namespace tracing {
namespace mojom {
const char kPerfettoProducerNamePrefix[] = "org.chromium.perfetto_producer.";
const char kTraceEventDataSourceName[] = "org.chromium.trace_event";
const char kMetaDataSourceName[] = "org.chromium.trace_metadata";
const char kSystemTraceDataSourceName[] = "org.chromium.trace_system";
const char kArcTraceDataSourceName[] = "org.chromium.trace_arc";
ChunksToMove::ChunksToMove()
    : page(),
      chunk(),
      target_buffer() {}

ChunksToMove::ChunksToMove(
    uint32_t page_in,
    uint32_t chunk_in,
    uint32_t target_buffer_in)
    : page(std::move(page_in)),
      chunk(std::move(chunk_in)),
      target_buffer(std::move(target_buffer_in)) {}

ChunksToMove::~ChunksToMove() = default;

bool ChunksToMove::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ChunkPatch::ChunkPatch()
    : offset(),
      data() {}

ChunkPatch::ChunkPatch(
    uint32_t offset_in,
    const std::string& data_in)
    : offset(std::move(offset_in)),
      data(std::move(data_in)) {}

ChunkPatch::~ChunkPatch() = default;

bool ChunkPatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ChunksToPatch::ChunksToPatch()
    : target_buffer(),
      writer_id(),
      chunk_id(),
      patches(),
      has_more_patches() {}

ChunksToPatch::ChunksToPatch(
    uint32_t target_buffer_in,
    uint32_t writer_id_in,
    uint32_t chunk_id_in,
    const std::vector<perfetto::CommitDataRequest::ChunkToPatch::Patch>& patches_in,
    bool has_more_patches_in)
    : target_buffer(std::move(target_buffer_in)),
      writer_id(std::move(writer_id_in)),
      chunk_id(std::move(chunk_id_in)),
      patches(std::move(patches_in)),
      has_more_patches(std::move(has_more_patches_in)) {}

ChunksToPatch::~ChunksToPatch() = default;

bool ChunksToPatch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CommitDataRequest::CommitDataRequest()
    : chunks_to_move(),
      chunks_to_patch(),
      flush_request_id() {}

CommitDataRequest::CommitDataRequest(
    const std::vector<perfetto::CommitDataRequest::ChunksToMove>& chunks_to_move_in,
    std::vector<ChunksToPatchPtr> chunks_to_patch_in,
    uint64_t flush_request_id_in)
    : chunks_to_move(std::move(chunks_to_move_in)),
      chunks_to_patch(std::move(chunks_to_patch_in)),
      flush_request_id(std::move(flush_request_id_in)) {}

CommitDataRequest::~CommitDataRequest() = default;

bool CommitDataRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ChromeConfig::ChromeConfig()
    : trace_config(),
      privacy_filtering_enabled() {}

ChromeConfig::ChromeConfig(
    const std::string& trace_config_in,
    bool privacy_filtering_enabled_in)
    : trace_config(std::move(trace_config_in)),
      privacy_filtering_enabled(std::move(privacy_filtering_enabled_in)) {}

ChromeConfig::~ChromeConfig() = default;

bool ChromeConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataSourceConfig::DataSourceConfig()
    : name(),
      target_buffer(),
      trace_duration_ms(),
      tracing_session_id(),
      chrome_config(),
      legacy_config() {}

DataSourceConfig::DataSourceConfig(
    const std::string& name_in,
    uint32_t target_buffer_in,
    uint32_t trace_duration_ms_in,
    uint64_t tracing_session_id_in,
    const perfetto::ChromeConfig& chrome_config_in,
    const std::string& legacy_config_in)
    : name(std::move(name_in)),
      target_buffer(std::move(target_buffer_in)),
      trace_duration_ms(std::move(trace_duration_ms_in)),
      tracing_session_id(std::move(tracing_session_id_in)),
      chrome_config(std::move(chrome_config_in)),
      legacy_config(std::move(legacy_config_in)) {}

DataSourceConfig::~DataSourceConfig() = default;

bool DataSourceConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataSourceRegistration::DataSourceRegistration()
    : name(),
      will_notify_on_start(),
      will_notify_on_stop() {}

DataSourceRegistration::DataSourceRegistration(
    const std::string& name_in,
    bool will_notify_on_start_in,
    bool will_notify_on_stop_in)
    : name(std::move(name_in)),
      will_notify_on_start(std::move(will_notify_on_start_in)),
      will_notify_on_stop(std::move(will_notify_on_stop_in)) {}

DataSourceRegistration::~DataSourceRegistration() = default;

bool DataSourceRegistration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BufferConfig::BufferConfig()
    : size_kb() {}

BufferConfig::BufferConfig(
    uint32_t size_kb_in)
    : size_kb(std::move(size_kb_in)) {}

BufferConfig::~BufferConfig() = default;
size_t BufferConfig::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->size_kb);
  return seed;
}

bool BufferConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataSource::DataSource()
    : config(),
      producer_name_filter() {}

DataSource::DataSource(
    const perfetto::DataSourceConfig& config_in,
    const std::vector<std::string>& producer_name_filter_in)
    : config(std::move(config_in)),
      producer_name_filter(std::move(producer_name_filter_in)) {}

DataSource::~DataSource() = default;

bool DataSource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PerfettoBuiltinDataSource::PerfettoBuiltinDataSource()
    : disable_clock_snapshotting(),
      disable_trace_config(),
      disable_system_info() {}

PerfettoBuiltinDataSource::PerfettoBuiltinDataSource(
    bool disable_clock_snapshotting_in,
    bool disable_trace_config_in,
    bool disable_system_info_in)
    : disable_clock_snapshotting(std::move(disable_clock_snapshotting_in)),
      disable_trace_config(std::move(disable_trace_config_in)),
      disable_system_info(std::move(disable_system_info_in)) {}

PerfettoBuiltinDataSource::~PerfettoBuiltinDataSource() = default;

bool PerfettoBuiltinDataSource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TraceConfig::TraceConfig()
    : data_sources(),
      perfetto_builtin_data_source(),
      buffers(),
      duration_ms() {}

TraceConfig::TraceConfig(
    std::vector<DataSourcePtr> data_sources_in,
    const perfetto::TraceConfig::BuiltinDataSource& perfetto_builtin_data_source_in,
    std::vector<BufferConfigPtr> buffers_in,
    uint32_t duration_ms_in)
    : data_sources(std::move(data_sources_in)),
      perfetto_builtin_data_source(std::move(perfetto_builtin_data_source_in)),
      buffers(std::move(buffers_in)),
      duration_ms(std::move(duration_ms_in)) {}

TraceConfig::~TraceConfig() = default;

bool TraceConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProducerHost::Name_[] = "tracing.mojom.ProducerHost";

ProducerHostProxy::ProducerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProducerHostProxy::CommitData(
    const perfetto::CommitDataRequest& in_data_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerHost::CommitData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerHost_CommitData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerHost_CommitData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data_request)::BaseType::BufferWriter
      data_request_writer;
  mojo::internal::Serialize<::tracing::mojom::CommitDataRequestDataView>(
      in_data_request, buffer, &data_request_writer, &serialization_context);
  params->data_request.Set(
      data_request_writer.is_null() ? nullptr : data_request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_request in ProducerHost.CommitData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerHost::Name_);
  message.set_method_name("CommitData");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerHostProxy::RegisterDataSource(
    const perfetto::DataSourceDescriptor& in_registration_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerHost::RegisterDataSource");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerHost_RegisterDataSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerHost_RegisterDataSource_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->registration_info)::BaseType::BufferWriter
      registration_info_writer;
  mojo::internal::Serialize<::tracing::mojom::DataSourceRegistrationDataView>(
      in_registration_info, buffer, &registration_info_writer, &serialization_context);
  params->registration_info.Set(
      registration_info_writer.is_null() ? nullptr : registration_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration_info in ProducerHost.RegisterDataSource request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerHost::Name_);
  message.set_method_name("RegisterDataSource");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerHostProxy::RegisterTraceWriter(
    uint32_t in_writer_id, uint32_t in_target_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerHost::RegisterTraceWriter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerHost_RegisterTraceWriter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerHost_RegisterTraceWriter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->writer_id = in_writer_id;
  params->target_buffer = in_target_buffer;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerHost::Name_);
  message.set_method_name("RegisterTraceWriter");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerHostProxy::UnregisterTraceWriter(
    uint32_t in_writer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerHost::UnregisterTraceWriter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerHost_UnregisterTraceWriter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerHost_UnregisterTraceWriter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->writer_id = in_writer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerHost::Name_);
  message.set_method_name("UnregisterTraceWriter");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProducerHostStubDispatch::Accept(
    ProducerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerHost::CommitData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerHost_CommitData_Params_Data* params =
          reinterpret_cast<internal::ProducerHost_CommitData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      perfetto::CommitDataRequest p_data_request{};
      ProducerHost_CommitData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDataRequest(&p_data_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CommitData(
std::move(p_data_request));
      return true;
    }
    case internal::kProducerHost_RegisterDataSource_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerHost::RegisterDataSource",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerHost_RegisterDataSource_Params_Data* params =
          reinterpret_cast<internal::ProducerHost_RegisterDataSource_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      perfetto::DataSourceDescriptor p_registration_info{};
      ProducerHost_RegisterDataSource_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRegistrationInfo(&p_registration_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterDataSource(
std::move(p_registration_info));
      return true;
    }
    case internal::kProducerHost_RegisterTraceWriter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerHost::RegisterTraceWriter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerHost_RegisterTraceWriter_Params_Data* params =
          reinterpret_cast<internal::ProducerHost_RegisterTraceWriter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_writer_id{};
      uint32_t p_target_buffer{};
      ProducerHost_RegisterTraceWriter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_writer_id = input_data_view.writer_id();
      p_target_buffer = input_data_view.target_buffer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterTraceWriter(
std::move(p_writer_id), 
std::move(p_target_buffer));
      return true;
    }
    case internal::kProducerHost_UnregisterTraceWriter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerHost::UnregisterTraceWriter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerHost_UnregisterTraceWriter_Params_Data* params =
          reinterpret_cast<internal::ProducerHost_UnregisterTraceWriter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_writer_id{};
      ProducerHost_UnregisterTraceWriter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_writer_id = input_data_view.writer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerHost::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UnregisterTraceWriter(
std::move(p_writer_id));
      return true;
    }
  }
  return false;
}

// static
bool ProducerHostStubDispatch::AcceptWithResponder(
    ProducerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
      break;
    }
    case internal::kProducerHost_RegisterDataSource_Name: {
      break;
    }
    case internal::kProducerHost_RegisterTraceWriter_Name: {
      break;
    }
    case internal::kProducerHost_UnregisterTraceWriter_Name: {
      break;
    }
  }
  return false;
}

bool ProducerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProducerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kProducerHost_CommitData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerHost_CommitData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerHost_RegisterDataSource_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerHost_RegisterDataSource_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerHost_RegisterTraceWriter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerHost_RegisterTraceWriter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerHost_UnregisterTraceWriter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerHost_UnregisterTraceWriter_Params_Data>(
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

const char ProducerClient::Name_[] = "tracing.mojom.ProducerClient";

class ProducerClient_StartDataSource_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProducerClient_StartDataSource_ForwardToCallback(
      ProducerClient::StartDataSourceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProducerClient::StartDataSourceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProducerClient_StartDataSource_ForwardToCallback);
};

class ProducerClient_StopDataSource_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProducerClient_StopDataSource_ForwardToCallback(
      ProducerClient::StopDataSourceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProducerClient::StopDataSourceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProducerClient_StopDataSource_ForwardToCallback);
};

ProducerClientProxy::ProducerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProducerClientProxy::OnTracingStart(
    mojo::ScopedSharedBufferHandle in_shared_memory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::OnTracingStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_OnTracingStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_OnTracingStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_shared_memory, &params->shared_memory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shared_memory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shared_memory in ProducerClient.OnTracingStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("OnTracingStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProducerClientProxy::StartDataSource(
    uint64_t in_id, const perfetto::DataSourceConfig& in_data_source_config, StartDataSourceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::StartDataSource");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_StartDataSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_StartDataSource_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  typename decltype(params->data_source_config)::BaseType::BufferWriter
      data_source_config_writer;
  mojo::internal::Serialize<::tracing::mojom::DataSourceConfigDataView>(
      in_data_source_config, buffer, &data_source_config_writer, &serialization_context);
  params->data_source_config.Set(
      data_source_config_writer.is_null() ? nullptr : data_source_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_source_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_source_config in ProducerClient.StartDataSource request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("StartDataSource");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProducerClient_StartDataSource_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ProducerClientProxy::StopDataSource(
    uint64_t in_id, StopDataSourceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::StopDataSource");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_StopDataSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_StopDataSource_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("StopDataSource");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProducerClient_StopDataSource_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ProducerClientProxy::Flush(
    uint64_t in_flush_request_id, const std::vector<uint64_t>& in_data_source_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::Flush");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->flush_request_id = in_flush_request_id;
  typename decltype(params->data_source_ids)::BaseType::BufferWriter
      data_source_ids_writer;
  const mojo::internal::ContainerValidateParams data_source_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint64_t>>(
      in_data_source_ids, buffer, &data_source_ids_writer, &data_source_ids_validate_params,
      &serialization_context);
  params->data_source_ids.Set(
      data_source_ids_writer.is_null() ? nullptr : data_source_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_source_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_source_ids in ProducerClient.Flush request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("Flush");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ProducerClient_StartDataSource_ProxyToResponder {
 public:
  static ProducerClient::StartDataSourceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProducerClient_StartDataSource_ProxyToResponder> proxy(
        new ProducerClient_StartDataSource_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProducerClient_StartDataSource_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProducerClient_StartDataSource_ProxyToResponder() {
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
  ProducerClient_StartDataSource_ProxyToResponder(
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
        << "ProducerClient::StartDataSourceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProducerClient_StartDataSource_ProxyToResponder);
};

bool ProducerClient_StartDataSource_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::StartDataSourceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProducerClient_StartDataSource_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProducerClient_StartDataSource_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ProducerClient_StartDataSource_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProducerClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ProducerClient_StartDataSource_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_StartDataSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_StartDataSource_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::StartDataSourceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("StartDataSource");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ProducerClient_StopDataSource_ProxyToResponder {
 public:
  static ProducerClient::StopDataSourceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProducerClient_StopDataSource_ProxyToResponder> proxy(
        new ProducerClient_StopDataSource_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProducerClient_StopDataSource_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProducerClient_StopDataSource_ProxyToResponder() {
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
  ProducerClient_StopDataSource_ProxyToResponder(
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
        << "ProducerClient::StopDataSourceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProducerClient_StopDataSource_ProxyToResponder);
};

bool ProducerClient_StopDataSource_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProducerClient::StopDataSourceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProducerClient_StopDataSource_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProducerClient_StopDataSource_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ProducerClient_StopDataSource_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProducerClient::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ProducerClient_StopDataSource_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProducerClient_StopDataSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ProducerClient_StopDataSource_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::StopDataSourceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProducerClient::Name_);
  message.set_method_name("StopDataSource");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProducerClientStubDispatch::Accept(
    ProducerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::OnTracingStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_OnTracingStart_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_OnTracingStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedSharedBufferHandle p_shared_memory{};
      ProducerClient_OnTracingStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_shared_memory = input_data_view.TakeSharedMemory();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTracingStart(
std::move(p_shared_memory));
      return true;
    }
    case internal::kProducerClient_StartDataSource_Name: {
      break;
    }
    case internal::kProducerClient_StopDataSource_Name: {
      break;
    }
    case internal::kProducerClient_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::Flush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProducerClient_Flush_Params_Data* params =
          reinterpret_cast<internal::ProducerClient_Flush_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_flush_request_id{};
      std::vector<uint64_t> p_data_source_ids{};
      ProducerClient_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      p_flush_request_id = input_data_view.flush_request_id();
      if (!input_data_view.ReadDataSourceIds(&p_data_source_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Flush(
std::move(p_flush_request_id), 
std::move(p_data_source_ids));
      return true;
    }
  }
  return false;
}

// static
bool ProducerClientStubDispatch::AcceptWithResponder(
    ProducerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
      break;
    }
    case internal::kProducerClient_StartDataSource_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::StartDataSource",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProducerClient_StartDataSource_Params_Data* params =
          reinterpret_cast<
              internal::ProducerClient_StartDataSource_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      perfetto::DataSourceConfig p_data_source_config{};
      ProducerClient_StartDataSource_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!input_data_view.ReadDataSourceConfig(&p_data_source_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerClient::Name_, 1, false);
        return false;
      }
      ProducerClient::StartDataSourceCallback callback =
          ProducerClient_StartDataSource_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartDataSource(
std::move(p_id), 
std::move(p_data_source_config), std::move(callback));
      return true;
    }
    case internal::kProducerClient_StopDataSource_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProducerClient::StopDataSource",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProducerClient_StopDataSource_Params_Data* params =
          reinterpret_cast<
              internal::ProducerClient_StopDataSource_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_id{};
      ProducerClient_StopDataSource_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProducerClient::Name_, 2, false);
        return false;
      }
      ProducerClient::StopDataSourceCallback callback =
          ProducerClient_StopDataSource_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopDataSource(
std::move(p_id), std::move(callback));
      return true;
    }
    case internal::kProducerClient_Flush_Name: {
      break;
    }
  }
  return false;
}

bool ProducerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProducerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProducerClient_OnTracingStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_OnTracingStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_StartDataSource_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_StartDataSource_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_StopDataSource_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_StopDataSource_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_Flush_Params_Data>(
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

bool ProducerClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProducerClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProducerClient_StartDataSource_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_StartDataSource_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProducerClient_StopDataSource_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProducerClient_StopDataSource_ResponseParams_Data>(
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
const char PerfettoService::Name_[] = "tracing.mojom.PerfettoService";

PerfettoServiceProxy::PerfettoServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PerfettoServiceProxy::ConnectToProducerHost(
    ProducerClientPtr in_producer_client, ProducerHostRequest in_producer_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PerfettoService::ConnectToProducerHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPerfettoService_ConnectToProducerHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::PerfettoService_ConnectToProducerHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::tracing::mojom::ProducerClientPtrDataView>(
      in_producer_client, &params->producer_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer_client in PerfettoService.ConnectToProducerHost request");
  mojo::internal::Serialize<::tracing::mojom::ProducerHostRequestDataView>(
      in_producer_host, &params->producer_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->producer_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid producer_host in PerfettoService.ConnectToProducerHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PerfettoService::Name_);
  message.set_method_name("ConnectToProducerHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PerfettoServiceStubDispatch::Accept(
    PerfettoService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PerfettoService::ConnectToProducerHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PerfettoService_ConnectToProducerHost_Params_Data* params =
          reinterpret_cast<internal::PerfettoService_ConnectToProducerHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProducerClientPtr p_producer_client{};
      ProducerHostRequest p_producer_host{};
      PerfettoService_ConnectToProducerHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_producer_client =
          input_data_view.TakeProducerClient<decltype(p_producer_client)>();
      p_producer_host =
          input_data_view.TakeProducerHost<decltype(p_producer_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PerfettoService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToProducerHost(
std::move(p_producer_client), 
std::move(p_producer_host));
      return true;
    }
  }
  return false;
}

// static
bool PerfettoServiceStubDispatch::AcceptWithResponder(
    PerfettoService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
      break;
    }
  }
  return false;
}

bool PerfettoServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PerfettoService RequestValidator");

  switch (message->header()->name) {
    case internal::kPerfettoService_ConnectToProducerHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PerfettoService_ConnectToProducerHost_Params_Data>(
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

const char ConsumerHost::Name_[] = "tracing.mojom.ConsumerHost";

ConsumerHostProxy::ConsumerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ConsumerHostProxy::EnableTracing(
    TracingSessionHostRequest in_tracing_session_host, TracingSessionClientPtr in_tracing_session_client, const perfetto::TraceConfig& in_config, TracingClientPriority in_priority) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ConsumerHost::EnableTracing");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kConsumerHost_EnableTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::ConsumerHost_EnableTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::tracing::mojom::TracingSessionHostRequestDataView>(
      in_tracing_session_host, &params->tracing_session_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tracing_session_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tracing_session_host in ConsumerHost.EnableTracing request");
  mojo::internal::Serialize<::tracing::mojom::TracingSessionClientPtrDataView>(
      in_tracing_session_client, &params->tracing_session_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tracing_session_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tracing_session_client in ConsumerHost.EnableTracing request");
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::tracing::mojom::TraceConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in ConsumerHost.EnableTracing request");
  mojo::internal::Serialize<::tracing::mojom::TracingClientPriority>(
      in_priority, &params->priority);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ConsumerHost::Name_);
  message.set_method_name("EnableTracing");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ConsumerHostStubDispatch::Accept(
    ConsumerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kConsumerHost_EnableTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ConsumerHost::EnableTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ConsumerHost_EnableTracing_Params_Data* params =
          reinterpret_cast<internal::ConsumerHost_EnableTracing_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TracingSessionHostRequest p_tracing_session_host{};
      TracingSessionClientPtr p_tracing_session_client{};
      perfetto::TraceConfig p_config{};
      TracingClientPriority p_priority{};
      ConsumerHost_EnableTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tracing_session_host =
          input_data_view.TakeTracingSessionHost<decltype(p_tracing_session_host)>();
      p_tracing_session_client =
          input_data_view.TakeTracingSessionClient<decltype(p_tracing_session_client)>();
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!input_data_view.ReadPriority(&p_priority))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ConsumerHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableTracing(
std::move(p_tracing_session_host), 
std::move(p_tracing_session_client), 
std::move(p_config), 
std::move(p_priority));
      return true;
    }
  }
  return false;
}

// static
bool ConsumerHostStubDispatch::AcceptWithResponder(
    ConsumerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kConsumerHost_EnableTracing_Name: {
      break;
    }
  }
  return false;
}

bool ConsumerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ConsumerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kConsumerHost_EnableTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ConsumerHost_EnableTracing_Params_Data>(
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

const char TracingSessionHost::Name_[] = "tracing.mojom.TracingSessionHost";

class TracingSessionHost_ReadBuffers_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TracingSessionHost_ReadBuffers_ForwardToCallback(
      TracingSessionHost::ReadBuffersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TracingSessionHost::ReadBuffersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_ReadBuffers_ForwardToCallback);
};

class TracingSessionHost_RequestBufferUsage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TracingSessionHost_RequestBufferUsage_ForwardToCallback(
      TracingSessionHost::RequestBufferUsageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TracingSessionHost::RequestBufferUsageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_RequestBufferUsage_ForwardToCallback);
};

class TracingSessionHost_DisableTracingAndEmitJson_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TracingSessionHost_DisableTracingAndEmitJson_ForwardToCallback(
      TracingSessionHost::DisableTracingAndEmitJsonCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TracingSessionHost::DisableTracingAndEmitJsonCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_DisableTracingAndEmitJson_ForwardToCallback);
};

TracingSessionHostProxy::TracingSessionHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TracingSessionHostProxy::ChangeTraceConfig(
    const perfetto::TraceConfig& in_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::ChangeTraceConfig");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_ChangeTraceConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_ChangeTraceConfig_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::tracing::mojom::TraceConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in TracingSessionHost.ChangeTraceConfig request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("ChangeTraceConfig");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TracingSessionHostProxy::DisableTracing(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracing");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_DisableTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_DisableTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("DisableTracing");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TracingSessionHostProxy::ReadBuffers(
    mojo::ScopedDataPipeProducerHandle in_stream, ReadBuffersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::ReadBuffers");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_ReadBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_ReadBuffers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in TracingSessionHost.ReadBuffers request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("ReadBuffers");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TracingSessionHost_ReadBuffers_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TracingSessionHostProxy::RequestBufferUsage(
    RequestBufferUsageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::RequestBufferUsage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_RequestBufferUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_RequestBufferUsage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("RequestBufferUsage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TracingSessionHost_RequestBufferUsage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TracingSessionHostProxy::DisableTracingAndEmitJson(
    const std::string& in_agent_label_filter, mojo::ScopedDataPipeProducerHandle in_stream, DisableTracingAndEmitJsonCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracingAndEmitJson");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_DisableTracingAndEmitJson_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->agent_label_filter)::BaseType::BufferWriter
      agent_label_filter_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_agent_label_filter, buffer, &agent_label_filter_writer, &serialization_context);
  params->agent_label_filter.Set(
      agent_label_filter_writer.is_null() ? nullptr : agent_label_filter_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->agent_label_filter.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null agent_label_filter in TracingSessionHost.DisableTracingAndEmitJson request");
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in TracingSessionHost.DisableTracingAndEmitJson request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("DisableTracingAndEmitJson");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TracingSessionHost_DisableTracingAndEmitJson_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TracingSessionHost_ReadBuffers_ProxyToResponder {
 public:
  static TracingSessionHost::ReadBuffersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TracingSessionHost_ReadBuffers_ProxyToResponder> proxy(
        new TracingSessionHost_ReadBuffers_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TracingSessionHost_ReadBuffers_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TracingSessionHost_ReadBuffers_ProxyToResponder() {
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
  TracingSessionHost_ReadBuffers_ProxyToResponder(
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
        << "TracingSessionHost::ReadBuffersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_ReadBuffers_ProxyToResponder);
};

bool TracingSessionHost_ReadBuffers_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::ReadBuffersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TracingSessionHost_ReadBuffers_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TracingSessionHost_ReadBuffers_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TracingSessionHost_ReadBuffers_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TracingSessionHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TracingSessionHost_ReadBuffers_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_ReadBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_ReadBuffers_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::ReadBuffersCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("ReadBuffers");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TracingSessionHost_RequestBufferUsage_ProxyToResponder {
 public:
  static TracingSessionHost::RequestBufferUsageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TracingSessionHost_RequestBufferUsage_ProxyToResponder> proxy(
        new TracingSessionHost_RequestBufferUsage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TracingSessionHost_RequestBufferUsage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TracingSessionHost_RequestBufferUsage_ProxyToResponder() {
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
  TracingSessionHost_RequestBufferUsage_ProxyToResponder(
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
        << "TracingSessionHost::RequestBufferUsageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, float in_percent_full);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_RequestBufferUsage_ProxyToResponder);
};

bool TracingSessionHost_RequestBufferUsage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::RequestBufferUsageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  float p_percent_full{};
  TracingSessionHost_RequestBufferUsage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_percent_full = input_data_view.percent_full();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TracingSessionHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_percent_full));
  return true;
}

void TracingSessionHost_RequestBufferUsage_ProxyToResponder::Run(
    bool in_success, float in_percent_full) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_RequestBufferUsage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->percent_full = in_percent_full;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::RequestBufferUsageCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("RequestBufferUsage");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder {
 public:
  static TracingSessionHost::DisableTracingAndEmitJsonCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder> proxy(
        new TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder() {
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
  TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder(
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
        << "TracingSessionHost::DisableTracingAndEmitJsonCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder);
};

bool TracingSessionHost_DisableTracingAndEmitJson_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracingAndEmitJsonCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TracingSessionHost_DisableTracingAndEmitJson_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TracingSessionHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionHost_DisableTracingAndEmitJson_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracingAndEmitJsonCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionHost::Name_);
  message.set_method_name("DisableTracingAndEmitJson");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TracingSessionHostStubDispatch::Accept(
    TracingSessionHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTracingSessionHost_ChangeTraceConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::ChangeTraceConfig",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TracingSessionHost_ChangeTraceConfig_Params_Data* params =
          reinterpret_cast<internal::TracingSessionHost_ChangeTraceConfig_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      perfetto::TraceConfig p_config{};
      TracingSessionHost_ChangeTraceConfig_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChangeTraceConfig(
std::move(p_config));
      return true;
    }
    case internal::kTracingSessionHost_DisableTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TracingSessionHost_DisableTracing_Params_Data* params =
          reinterpret_cast<internal::TracingSessionHost_DisableTracing_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TracingSessionHost_DisableTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DisableTracing();
      return true;
    }
    case internal::kTracingSessionHost_ReadBuffers_Name: {
      break;
    }
    case internal::kTracingSessionHost_RequestBufferUsage_Name: {
      break;
    }
    case internal::kTracingSessionHost_DisableTracingAndEmitJson_Name: {
      break;
    }
  }
  return false;
}

// static
bool TracingSessionHostStubDispatch::AcceptWithResponder(
    TracingSessionHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTracingSessionHost_ChangeTraceConfig_Name: {
      break;
    }
    case internal::kTracingSessionHost_DisableTracing_Name: {
      break;
    }
    case internal::kTracingSessionHost_ReadBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::ReadBuffers",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TracingSessionHost_ReadBuffers_Params_Data* params =
          reinterpret_cast<
              internal::TracingSessionHost_ReadBuffers_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_stream{};
      TracingSessionHost_ReadBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream = input_data_view.TakeStream();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionHost::Name_, 2, false);
        return false;
      }
      TracingSessionHost::ReadBuffersCallback callback =
          TracingSessionHost_ReadBuffers_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadBuffers(
std::move(p_stream), std::move(callback));
      return true;
    }
    case internal::kTracingSessionHost_RequestBufferUsage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::RequestBufferUsage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TracingSessionHost_RequestBufferUsage_Params_Data* params =
          reinterpret_cast<
              internal::TracingSessionHost_RequestBufferUsage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TracingSessionHost_RequestBufferUsage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionHost::Name_, 3, false);
        return false;
      }
      TracingSessionHost::RequestBufferUsageCallback callback =
          TracingSessionHost_RequestBufferUsage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestBufferUsage(std::move(callback));
      return true;
    }
    case internal::kTracingSessionHost_DisableTracingAndEmitJson_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionHost::DisableTracingAndEmitJson",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data* params =
          reinterpret_cast<
              internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_agent_label_filter{};
      mojo::ScopedDataPipeProducerHandle p_stream{};
      TracingSessionHost_DisableTracingAndEmitJson_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAgentLabelFilter(&p_agent_label_filter))
        success = false;
      p_stream = input_data_view.TakeStream();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionHost::Name_, 4, false);
        return false;
      }
      TracingSessionHost::DisableTracingAndEmitJsonCallback callback =
          TracingSessionHost_DisableTracingAndEmitJson_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DisableTracingAndEmitJson(
std::move(p_agent_label_filter), 
std::move(p_stream), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TracingSessionHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TracingSessionHost RequestValidator");

  switch (message->header()->name) {
    case internal::kTracingSessionHost_ChangeTraceConfig_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_ChangeTraceConfig_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_DisableTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_DisableTracing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_ReadBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_ReadBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_RequestBufferUsage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_RequestBufferUsage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_DisableTracingAndEmitJson_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_DisableTracingAndEmitJson_Params_Data>(
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

bool TracingSessionHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TracingSessionHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTracingSessionHost_ReadBuffers_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_ReadBuffers_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_RequestBufferUsage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_RequestBufferUsage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionHost_DisableTracingAndEmitJson_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionHost_DisableTracingAndEmitJson_ResponseParams_Data>(
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
const char TracingSessionClient::Name_[] = "tracing.mojom.TracingSessionClient";

TracingSessionClientProxy::TracingSessionClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TracingSessionClientProxy::OnTracingEnabled(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionClient::OnTracingEnabled");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionClient_OnTracingEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionClient_OnTracingEnabled_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionClient::Name_);
  message.set_method_name("OnTracingEnabled");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TracingSessionClientProxy::OnTracingDisabled(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracingSessionClient::OnTracingDisabled");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracingSessionClient_OnTracingDisabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracingSessionClient_OnTracingDisabled_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingSessionClient::Name_);
  message.set_method_name("OnTracingDisabled");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TracingSessionClientStubDispatch::Accept(
    TracingSessionClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTracingSessionClient_OnTracingEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionClient::OnTracingEnabled",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TracingSessionClient_OnTracingEnabled_Params_Data* params =
          reinterpret_cast<internal::TracingSessionClient_OnTracingEnabled_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TracingSessionClient_OnTracingEnabled_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTracingEnabled();
      return true;
    }
    case internal::kTracingSessionClient_OnTracingDisabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracingSessionClient::OnTracingDisabled",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TracingSessionClient_OnTracingDisabled_Params_Data* params =
          reinterpret_cast<internal::TracingSessionClient_OnTracingDisabled_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TracingSessionClient_OnTracingDisabled_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingSessionClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTracingDisabled();
      return true;
    }
  }
  return false;
}

// static
bool TracingSessionClientStubDispatch::AcceptWithResponder(
    TracingSessionClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTracingSessionClient_OnTracingEnabled_Name: {
      break;
    }
    case internal::kTracingSessionClient_OnTracingDisabled_Name: {
      break;
    }
  }
  return false;
}

bool TracingSessionClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TracingSessionClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTracingSessionClient_OnTracingEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionClient_OnTracingEnabled_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTracingSessionClient_OnTracingDisabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracingSessionClient_OnTracingDisabled_Params_Data>(
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
}  // namespace tracing

namespace mojo {


// static
bool StructTraits<::tracing::mojom::ChunksToMove::DataView, ::tracing::mojom::ChunksToMovePtr>::Read(
    ::tracing::mojom::ChunksToMove::DataView input,
    ::tracing::mojom::ChunksToMovePtr* output) {
  bool success = true;
  ::tracing::mojom::ChunksToMovePtr result(::tracing::mojom::ChunksToMove::New());
  
      result->page = input.page();
      result->chunk = input.chunk();
      result->target_buffer = input.target_buffer();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::ChunkPatch::DataView, ::tracing::mojom::ChunkPatchPtr>::Read(
    ::tracing::mojom::ChunkPatch::DataView input,
    ::tracing::mojom::ChunkPatchPtr* output) {
  bool success = true;
  ::tracing::mojom::ChunkPatchPtr result(::tracing::mojom::ChunkPatch::New());
  
      result->offset = input.offset();
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::ChunksToPatch::DataView, ::tracing::mojom::ChunksToPatchPtr>::Read(
    ::tracing::mojom::ChunksToPatch::DataView input,
    ::tracing::mojom::ChunksToPatchPtr* output) {
  bool success = true;
  ::tracing::mojom::ChunksToPatchPtr result(::tracing::mojom::ChunksToPatch::New());
  
      result->target_buffer = input.target_buffer();
      result->writer_id = input.writer_id();
      result->chunk_id = input.chunk_id();
      if (!input.ReadPatches(&result->patches))
        success = false;
      result->has_more_patches = input.has_more_patches();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::CommitDataRequest::DataView, ::tracing::mojom::CommitDataRequestPtr>::Read(
    ::tracing::mojom::CommitDataRequest::DataView input,
    ::tracing::mojom::CommitDataRequestPtr* output) {
  bool success = true;
  ::tracing::mojom::CommitDataRequestPtr result(::tracing::mojom::CommitDataRequest::New());
  
      if (!input.ReadChunksToMove(&result->chunks_to_move))
        success = false;
      if (!input.ReadChunksToPatch(&result->chunks_to_patch))
        success = false;
      result->flush_request_id = input.flush_request_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::ChromeConfig::DataView, ::tracing::mojom::ChromeConfigPtr>::Read(
    ::tracing::mojom::ChromeConfig::DataView input,
    ::tracing::mojom::ChromeConfigPtr* output) {
  bool success = true;
  ::tracing::mojom::ChromeConfigPtr result(::tracing::mojom::ChromeConfig::New());
  
      if (!input.ReadTraceConfig(&result->trace_config))
        success = false;
      result->privacy_filtering_enabled = input.privacy_filtering_enabled();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::DataSourceConfig::DataView, ::tracing::mojom::DataSourceConfigPtr>::Read(
    ::tracing::mojom::DataSourceConfig::DataView input,
    ::tracing::mojom::DataSourceConfigPtr* output) {
  bool success = true;
  ::tracing::mojom::DataSourceConfigPtr result(::tracing::mojom::DataSourceConfig::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      result->target_buffer = input.target_buffer();
      result->trace_duration_ms = input.trace_duration_ms();
      result->tracing_session_id = input.tracing_session_id();
      if (!input.ReadChromeConfig(&result->chrome_config))
        success = false;
      if (!input.ReadLegacyConfig(&result->legacy_config))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::DataSourceRegistration::DataView, ::tracing::mojom::DataSourceRegistrationPtr>::Read(
    ::tracing::mojom::DataSourceRegistration::DataView input,
    ::tracing::mojom::DataSourceRegistrationPtr* output) {
  bool success = true;
  ::tracing::mojom::DataSourceRegistrationPtr result(::tracing::mojom::DataSourceRegistration::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      result->will_notify_on_start = input.will_notify_on_start();
      result->will_notify_on_stop = input.will_notify_on_stop();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::BufferConfig::DataView, ::tracing::mojom::BufferConfigPtr>::Read(
    ::tracing::mojom::BufferConfig::DataView input,
    ::tracing::mojom::BufferConfigPtr* output) {
  bool success = true;
  ::tracing::mojom::BufferConfigPtr result(::tracing::mojom::BufferConfig::New());
  
      result->size_kb = input.size_kb();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::DataSource::DataView, ::tracing::mojom::DataSourcePtr>::Read(
    ::tracing::mojom::DataSource::DataView input,
    ::tracing::mojom::DataSourcePtr* output) {
  bool success = true;
  ::tracing::mojom::DataSourcePtr result(::tracing::mojom::DataSource::New());
  
      if (!input.ReadConfig(&result->config))
        success = false;
      if (!input.ReadProducerNameFilter(&result->producer_name_filter))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::PerfettoBuiltinDataSource::DataView, ::tracing::mojom::PerfettoBuiltinDataSourcePtr>::Read(
    ::tracing::mojom::PerfettoBuiltinDataSource::DataView input,
    ::tracing::mojom::PerfettoBuiltinDataSourcePtr* output) {
  bool success = true;
  ::tracing::mojom::PerfettoBuiltinDataSourcePtr result(::tracing::mojom::PerfettoBuiltinDataSource::New());
  
      result->disable_clock_snapshotting = input.disable_clock_snapshotting();
      result->disable_trace_config = input.disable_trace_config();
      result->disable_system_info = input.disable_system_info();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::tracing::mojom::TraceConfig::DataView, ::tracing::mojom::TraceConfigPtr>::Read(
    ::tracing::mojom::TraceConfig::DataView input,
    ::tracing::mojom::TraceConfigPtr* output) {
  bool success = true;
  ::tracing::mojom::TraceConfigPtr result(::tracing::mojom::TraceConfig::New());
  
      if (!input.ReadDataSources(&result->data_sources))
        success = false;
      if (!input.ReadPerfettoBuiltinDataSource(&result->perfetto_builtin_data_source))
        success = false;
      if (!input.ReadBuffers(&result->buffers))
        success = false;
      result->duration_ms = input.duration_ms();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif