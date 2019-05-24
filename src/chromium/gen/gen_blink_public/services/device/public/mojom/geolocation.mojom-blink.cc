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

#include "services/device/public/mojom/geolocation.mojom-blink.h"

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

#include "services/device/public/mojom/geolocation.mojom-params-data.h"
#include "services/device/public/mojom/geolocation.mojom-shared-message-ids.h"

#include "services/device/public/mojom/geolocation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
const char Geolocation::Name_[] = "device.mojom.Geolocation";

class Geolocation_QueryNextPosition_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Geolocation_QueryNextPosition_ForwardToCallback(
      Geolocation::QueryNextPositionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Geolocation::QueryNextPositionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Geolocation_QueryNextPosition_ForwardToCallback);
};

GeolocationProxy::GeolocationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GeolocationProxy::SetHighAccuracy(
    bool in_high_accuracy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Geolocation::SetHighAccuracy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGeolocation_SetHighAccuracy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Geolocation_SetHighAccuracy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->high_accuracy = in_high_accuracy;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Geolocation::Name_);
  message.set_method_name("SetHighAccuracy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GeolocationProxy::QueryNextPosition(
    QueryNextPositionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Geolocation::QueryNextPosition");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGeolocation_QueryNextPosition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Geolocation_QueryNextPosition_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Geolocation::Name_);
  message.set_method_name("QueryNextPosition");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Geolocation_QueryNextPosition_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Geolocation_QueryNextPosition_ProxyToResponder {
 public:
  static Geolocation::QueryNextPositionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Geolocation_QueryNextPosition_ProxyToResponder> proxy(
        new Geolocation_QueryNextPosition_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Geolocation_QueryNextPosition_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Geolocation_QueryNextPosition_ProxyToResponder() {
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
  Geolocation_QueryNextPosition_ProxyToResponder(
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
        << "Geolocation::QueryNextPositionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::GeopositionPtr in_geoposition);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Geolocation_QueryNextPosition_ProxyToResponder);
};

bool Geolocation_QueryNextPosition_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Geolocation::QueryNextPositionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Geolocation_QueryNextPosition_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Geolocation_QueryNextPosition_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::GeopositionPtr p_geoposition{};
  Geolocation_QueryNextPosition_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadGeoposition(&p_geoposition))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Geolocation::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_geoposition));
  return true;
}

void Geolocation_QueryNextPosition_ProxyToResponder::Run(
    ::device::mojom::blink::GeopositionPtr in_geoposition) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGeolocation_QueryNextPosition_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Geolocation_QueryNextPosition_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->geoposition)::BaseType::BufferWriter
      geoposition_writer;
  mojo::internal::Serialize<::device::mojom::GeopositionDataView>(
      in_geoposition, buffer, &geoposition_writer, &serialization_context);
  params->geoposition.Set(
      geoposition_writer.is_null() ? nullptr : geoposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->geoposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null geoposition in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Geolocation::QueryNextPositionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Geolocation::Name_);
  message.set_method_name("QueryNextPosition");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool GeolocationStubDispatch::Accept(
    Geolocation* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGeolocation_SetHighAccuracy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Geolocation::SetHighAccuracy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Geolocation_SetHighAccuracy_Params_Data* params =
          reinterpret_cast<internal::Geolocation_SetHighAccuracy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_high_accuracy{};
      Geolocation_SetHighAccuracy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_high_accuracy = input_data_view.high_accuracy();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Geolocation::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetHighAccuracy(
std::move(p_high_accuracy));
      return true;
    }
    case internal::kGeolocation_QueryNextPosition_Name: {
      break;
    }
  }
  return false;
}

// static
bool GeolocationStubDispatch::AcceptWithResponder(
    Geolocation* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGeolocation_SetHighAccuracy_Name: {
      break;
    }
    case internal::kGeolocation_QueryNextPosition_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Geolocation::QueryNextPosition",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Geolocation_QueryNextPosition_Params_Data* params =
          reinterpret_cast<
              internal::Geolocation_QueryNextPosition_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Geolocation_QueryNextPosition_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Geolocation::Name_, 1, false);
        return false;
      }
      Geolocation::QueryNextPositionCallback callback =
          Geolocation_QueryNextPosition_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueryNextPosition(std::move(callback));
      return true;
    }
  }
  return false;
}

bool GeolocationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Geolocation RequestValidator");

  switch (message->header()->name) {
    case internal::kGeolocation_SetHighAccuracy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Geolocation_SetHighAccuracy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGeolocation_QueryNextPosition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Geolocation_QueryNextPosition_Params_Data>(
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

bool GeolocationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Geolocation ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGeolocation_QueryNextPosition_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Geolocation_QueryNextPosition_ResponseParams_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif