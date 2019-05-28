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

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom.h"

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

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-params-data.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-shared-message-ids.h"

#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_JUMBO_H_
#endif
namespace heap_profiling {
namespace mojom {
ProfilingParams::ProfilingParams()
    : stack_mode(),
      sampling_rate() {}

ProfilingParams::ProfilingParams(
    StackMode stack_mode_in,
    uint32_t sampling_rate_in)
    : stack_mode(std::move(stack_mode_in)),
      sampling_rate(std::move(sampling_rate_in)) {}

ProfilingParams::~ProfilingParams() = default;
size_t ProfilingParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->stack_mode);
  seed = mojo::internal::Hash(seed, this->sampling_rate);
  return seed;
}

bool ProfilingParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HeapProfileSample::HeapProfileSample()
    : allocator(),
      size(),
      context_id(),
      stack() {}

HeapProfileSample::HeapProfileSample(
    AllocatorType allocator_in,
    uint64_t size_in,
    uint64_t context_id_in,
    const std::vector<uint64_t>& stack_in)
    : allocator(std::move(allocator_in)),
      size(std::move(size_in)),
      context_id(std::move(context_id_in)),
      stack(std::move(stack_in)) {}

HeapProfileSample::~HeapProfileSample() = default;

bool HeapProfileSample::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HeapProfile::HeapProfile()
    : samples(),
      strings() {}

HeapProfile::HeapProfile(
    std::vector<HeapProfileSamplePtr> samples_in,
    const base::flat_map<uint64_t, std::string>& strings_in)
    : samples(std::move(samples_in)),
      strings(std::move(strings_in)) {}

HeapProfile::~HeapProfile() = default;

bool HeapProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProfilingClient::Name_[] = "heap_profiling.mojom.ProfilingClient";

class ProfilingClient_RetrieveHeapProfile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProfilingClient_RetrieveHeapProfile_ForwardToCallback(
      ProfilingClient::RetrieveHeapProfileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProfilingClient::RetrieveHeapProfileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProfilingClient_RetrieveHeapProfile_ForwardToCallback);
};

ProfilingClientProxy::ProfilingClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProfilingClientProxy::StartProfiling(
    ProfilingParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingClient::StartProfiling");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingClient_StartProfiling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingClient_StartProfiling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::heap_profiling::mojom::ProfilingParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ProfilingClient.StartProfiling request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingClient::Name_);
  message.set_method_name("StartProfiling");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfilingClientProxy::RetrieveHeapProfile(
    RetrieveHeapProfileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingClient::RetrieveHeapProfile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingClient_RetrieveHeapProfile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingClient_RetrieveHeapProfile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingClient::Name_);
  message.set_method_name("RetrieveHeapProfile");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProfilingClient_RetrieveHeapProfile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProfilingClient_RetrieveHeapProfile_ProxyToResponder {
 public:
  static ProfilingClient::RetrieveHeapProfileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProfilingClient_RetrieveHeapProfile_ProxyToResponder> proxy(
        new ProfilingClient_RetrieveHeapProfile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProfilingClient_RetrieveHeapProfile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProfilingClient_RetrieveHeapProfile_ProxyToResponder() {
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
  ProfilingClient_RetrieveHeapProfile_ProxyToResponder(
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
        << "ProfilingClient::RetrieveHeapProfileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      HeapProfilePtr in_profile);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProfilingClient_RetrieveHeapProfile_ProxyToResponder);
};

bool ProfilingClient_RetrieveHeapProfile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingClient::RetrieveHeapProfileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  HeapProfilePtr p_profile{};
  ProfilingClient_RetrieveHeapProfile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadProfile(&p_profile))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProfilingClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_profile));
  return true;
}

void ProfilingClient_RetrieveHeapProfile_ProxyToResponder::Run(
    HeapProfilePtr in_profile) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingClient_RetrieveHeapProfile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->profile)::BaseType::BufferWriter
      profile_writer;
  mojo::internal::Serialize<::heap_profiling::mojom::HeapProfileDataView>(
      in_profile, buffer, &profile_writer, &serialization_context);
  params->profile.Set(
      profile_writer.is_null() ? nullptr : profile_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->profile.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null profile in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingClient::RetrieveHeapProfileCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingClient::Name_);
  message.set_method_name("RetrieveHeapProfile");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProfilingClientStubDispatch::Accept(
    ProfilingClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingClient::StartProfiling",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfilingClient_StartProfiling_Params_Data* params =
          reinterpret_cast<internal::ProfilingClient_StartProfiling_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfilingParamsPtr p_params{};
      ProfilingClient_StartProfiling_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProfilingClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartProfiling(
std::move(p_params));
      return true;
    }
    case internal::kProfilingClient_RetrieveHeapProfile_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProfilingClientStubDispatch::AcceptWithResponder(
    ProfilingClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
      break;
    }
    case internal::kProfilingClient_RetrieveHeapProfile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingClient::RetrieveHeapProfile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProfilingClient_RetrieveHeapProfile_Params_Data* params =
          reinterpret_cast<
              internal::ProfilingClient_RetrieveHeapProfile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfilingClient_RetrieveHeapProfile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProfilingClient::Name_, 1, false);
        return false;
      }
      ProfilingClient::RetrieveHeapProfileCallback callback =
          ProfilingClient_RetrieveHeapProfile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RetrieveHeapProfile(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProfilingClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfilingClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProfilingClient_StartProfiling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingClient_StartProfiling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfilingClient_RetrieveHeapProfile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingClient_RetrieveHeapProfile_Params_Data>(
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

bool ProfilingClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfilingClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProfilingClient_RetrieveHeapProfile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data>(
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
}  // namespace heap_profiling

namespace mojo {


// static
bool StructTraits<::heap_profiling::mojom::ProfilingParams::DataView, ::heap_profiling::mojom::ProfilingParamsPtr>::Read(
    ::heap_profiling::mojom::ProfilingParams::DataView input,
    ::heap_profiling::mojom::ProfilingParamsPtr* output) {
  bool success = true;
  ::heap_profiling::mojom::ProfilingParamsPtr result(::heap_profiling::mojom::ProfilingParams::New());
  
      if (!input.ReadStackMode(&result->stack_mode))
        success = false;
      result->sampling_rate = input.sampling_rate();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::heap_profiling::mojom::HeapProfileSample::DataView, ::heap_profiling::mojom::HeapProfileSamplePtr>::Read(
    ::heap_profiling::mojom::HeapProfileSample::DataView input,
    ::heap_profiling::mojom::HeapProfileSamplePtr* output) {
  bool success = true;
  ::heap_profiling::mojom::HeapProfileSamplePtr result(::heap_profiling::mojom::HeapProfileSample::New());
  
      if (!input.ReadAllocator(&result->allocator))
        success = false;
      result->size = input.size();
      result->context_id = input.context_id();
      if (!input.ReadStack(&result->stack))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::heap_profiling::mojom::HeapProfile::DataView, ::heap_profiling::mojom::HeapProfilePtr>::Read(
    ::heap_profiling::mojom::HeapProfile::DataView input,
    ::heap_profiling::mojom::HeapProfilePtr* output) {
  bool success = true;
  ::heap_profiling::mojom::HeapProfilePtr result(::heap_profiling::mojom::HeapProfile::New());
  
      if (!input.ReadSamples(&result->samples))
        success = false;
      if (!input.ReadStrings(&result->strings))
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