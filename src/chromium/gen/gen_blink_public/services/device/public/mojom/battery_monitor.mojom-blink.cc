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

#include "services/device/public/mojom/battery_monitor.mojom-blink.h"

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

#include "services/device/public/mojom/battery_monitor.mojom-params-data.h"
#include "services/device/public/mojom/battery_monitor.mojom-shared-message-ids.h"

#include "services/device/public/mojom/battery_monitor.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_BLINK_JUMBO_H_
#endif
namespace device {
namespace mojom {
namespace blink {
const char BatteryMonitor::Name_[] = "device.mojom.BatteryMonitor";

class BatteryMonitor_QueryNextStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BatteryMonitor_QueryNextStatus_ForwardToCallback(
      BatteryMonitor::QueryNextStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BatteryMonitor::QueryNextStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BatteryMonitor_QueryNextStatus_ForwardToCallback);
};

BatteryMonitorProxy::BatteryMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BatteryMonitorProxy::QueryNextStatus(
    QueryNextStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BatteryMonitor::QueryNextStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBatteryMonitor_QueryNextStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BatteryMonitor_QueryNextStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BatteryMonitor::Name_);
  message.set_method_name("QueryNextStatus");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BatteryMonitor_QueryNextStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BatteryMonitor_QueryNextStatus_ProxyToResponder {
 public:
  static BatteryMonitor::QueryNextStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BatteryMonitor_QueryNextStatus_ProxyToResponder> proxy(
        new BatteryMonitor_QueryNextStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BatteryMonitor_QueryNextStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BatteryMonitor_QueryNextStatus_ProxyToResponder() {
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
  BatteryMonitor_QueryNextStatus_ProxyToResponder(
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
        << "BatteryMonitor::QueryNextStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::device::mojom::blink::BatteryStatusPtr in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BatteryMonitor_QueryNextStatus_ProxyToResponder);
};

bool BatteryMonitor_QueryNextStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BatteryMonitor::QueryNextStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::device::mojom::blink::BatteryStatusPtr p_status{};
  BatteryMonitor_QueryNextStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BatteryMonitor::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void BatteryMonitor_QueryNextStatus_ProxyToResponder::Run(
    ::device::mojom::blink::BatteryStatusPtr in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBatteryMonitor_QueryNextStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<::device::mojom::BatteryStatusDataView>(
      in_status, buffer, &status_writer, &serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BatteryMonitor::QueryNextStatusCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BatteryMonitor::Name_);
  message.set_method_name("QueryNextStatus");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BatteryMonitorStubDispatch::Accept(
    BatteryMonitor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      break;
    }
  }
  return false;
}

// static
bool BatteryMonitorStubDispatch::AcceptWithResponder(
    BatteryMonitor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BatteryMonitor::QueryNextStatus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BatteryMonitor_QueryNextStatus_Params_Data* params =
          reinterpret_cast<
              internal::BatteryMonitor_QueryNextStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BatteryMonitor_QueryNextStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BatteryMonitor::Name_, 0, false);
        return false;
      }
      BatteryMonitor::QueryNextStatusCallback callback =
          BatteryMonitor_QueryNextStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueryNextStatus(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BatteryMonitorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BatteryMonitor RequestValidator");

  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BatteryMonitor_QueryNextStatus_Params_Data>(
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

bool BatteryMonitorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BatteryMonitor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data>(
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