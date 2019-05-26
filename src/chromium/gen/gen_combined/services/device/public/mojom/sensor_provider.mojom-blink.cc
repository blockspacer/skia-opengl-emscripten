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

#include "services/device/public/mojom/sensor_provider.mojom-blink.h"

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

#include "services/device/public/mojom/sensor_provider.mojom-params-data.h"
#include "services/device/public/mojom/sensor_provider.mojom-shared-message-ids.h"

#include "services/device/public/mojom/sensor_provider.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif
namespace device {
namespace mojom {
namespace blink {
constexpr uint64_t SensorInitParams::kReadBufferSizeForTests;
SensorInitParams::SensorInitParams()
    : sensor(),
      client_request(),
      memory(),
      buffer_offset(),
      mode(),
      default_configuration(),
      maximum_frequency(),
      minimum_frequency() {}

SensorInitParams::SensorInitParams(
    ::device::mojom::blink::SensorPtrInfo sensor_in,
    ::device::mojom::blink::SensorClientRequest client_request_in,
    mojo::ScopedSharedBufferHandle memory_in,
    uint64_t buffer_offset_in,
    ::device::mojom::blink::ReportingMode mode_in,
    ::device::mojom::blink::SensorConfigurationPtr default_configuration_in,
    double maximum_frequency_in,
    double minimum_frequency_in)
    : sensor(std::move(sensor_in)),
      client_request(std::move(client_request_in)),
      memory(std::move(memory_in)),
      buffer_offset(std::move(buffer_offset_in)),
      mode(std::move(mode_in)),
      default_configuration(std::move(default_configuration_in)),
      maximum_frequency(std::move(maximum_frequency_in)),
      minimum_frequency(std::move(minimum_frequency_in)) {}

SensorInitParams::~SensorInitParams() = default;

bool SensorInitParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SensorProvider::Name_[] = "device.mojom.SensorProvider";

class SensorProvider_GetSensor_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SensorProvider_GetSensor_ForwardToCallback(
      SensorProvider::GetSensorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SensorProvider::GetSensorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SensorProvider_GetSensor_ForwardToCallback);
};

SensorProviderProxy::SensorProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SensorProviderProxy::GetSensor(
    ::device::mojom::blink::SensorType in_type, GetSensorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SensorProvider::GetSensor");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensorProvider_GetSensor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SensorProvider_GetSensor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SensorType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SensorProvider::Name_);
  message.set_method_name("GetSensor");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SensorProvider_GetSensor_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SensorProvider_GetSensor_ProxyToResponder {
 public:
  static SensorProvider::GetSensorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SensorProvider_GetSensor_ProxyToResponder> proxy(
        new SensorProvider_GetSensor_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SensorProvider_GetSensor_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SensorProvider_GetSensor_ProxyToResponder() {
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
  SensorProvider_GetSensor_ProxyToResponder(
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
        << "SensorProvider::GetSensorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      SensorCreationResult in_result, SensorInitParamsPtr in_init_params);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SensorProvider_GetSensor_ProxyToResponder);
};

bool SensorProvider_GetSensor_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SensorProvider::GetSensorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SensorProvider_GetSensor_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SensorProvider_GetSensor_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SensorCreationResult p_result{};
  SensorInitParamsPtr p_init_params{};
  SensorProvider_GetSensor_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadInitParams(&p_init_params))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SensorProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_init_params));
  return true;
}

void SensorProvider_GetSensor_ProxyToResponder::Run(
    SensorCreationResult in_result, SensorInitParamsPtr in_init_params) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSensorProvider_GetSensor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::SensorProvider_GetSensor_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::SensorCreationResult>(
      in_result, &params->result);
  typename decltype(params->init_params)::BaseType::BufferWriter
      init_params_writer;
  mojo::internal::Serialize<::device::mojom::SensorInitParamsDataView>(
      in_init_params, buffer, &init_params_writer, &serialization_context);
  params->init_params.Set(
      init_params_writer.is_null() ? nullptr : init_params_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SensorProvider::GetSensorCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SensorProvider::Name_);
  message.set_method_name("GetSensor");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SensorProviderStubDispatch::Accept(
    SensorProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSensorProvider_GetSensor_Name: {
      break;
    }
  }
  return false;
}

// static
bool SensorProviderStubDispatch::AcceptWithResponder(
    SensorProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSensorProvider_GetSensor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SensorProvider::GetSensor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SensorProvider_GetSensor_Params_Data* params =
          reinterpret_cast<
              internal::SensorProvider_GetSensor_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::device::mojom::blink::SensorType p_type{};
      SensorProvider_GetSensor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SensorProvider::Name_, 0, false);
        return false;
      }
      SensorProvider::GetSensorCallback callback =
          SensorProvider_GetSensor_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSensor(
std::move(p_type), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SensorProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SensorProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kSensorProvider_GetSensor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SensorProvider_GetSensor_Params_Data>(
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

bool SensorProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SensorProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSensorProvider_GetSensor_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SensorProvider_GetSensor_ResponseParams_Data>(
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
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::SensorInitParams::DataView, ::device::mojom::blink::SensorInitParamsPtr>::Read(
    ::device::mojom::blink::SensorInitParams::DataView input,
    ::device::mojom::blink::SensorInitParamsPtr* output) {
  bool success = true;
  ::device::mojom::blink::SensorInitParamsPtr result(::device::mojom::blink::SensorInitParams::New());
  
      result->sensor =
          input.TakeSensor<decltype(result->sensor)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
      result->memory = input.TakeMemory();
      result->buffer_offset = input.buffer_offset();
      if (!input.ReadMode(&result->mode))
        success = false;
      if (!input.ReadDefaultConfiguration(&result->default_configuration))
        success = false;
      result->maximum_frequency = input.maximum_frequency();
      result->minimum_frequency = input.minimum_frequency();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif