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

#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-blink.h"

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

#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-params-data.h"
#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/leak_detector/leak_detector.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
LeakDetectionResult::LeakDetectionResult()
    : number_of_live_audio_nodes(),
      number_of_live_documents(),
      number_of_live_nodes(),
      number_of_live_layout_objects(),
      number_of_live_resources(),
      number_of_live_context_lifecycle_state_observers(),
      number_of_live_script_promises(),
      number_of_live_frames(),
      number_of_live_v8_per_context_data(),
      number_of_worker_global_scopes(),
      number_of_live_ua_css_resources(),
      number_of_live_resource_fetchers() {}

LeakDetectionResult::LeakDetectionResult(
    uint32_t number_of_live_audio_nodes_in,
    uint32_t number_of_live_documents_in,
    uint32_t number_of_live_nodes_in,
    uint32_t number_of_live_layout_objects_in,
    uint32_t number_of_live_resources_in,
    uint32_t number_of_live_context_lifecycle_state_observers_in,
    uint32_t number_of_live_script_promises_in,
    uint32_t number_of_live_frames_in,
    uint32_t number_of_live_v8_per_context_data_in,
    uint32_t number_of_worker_global_scopes_in,
    uint32_t number_of_live_ua_css_resources_in,
    uint32_t number_of_live_resource_fetchers_in)
    : number_of_live_audio_nodes(std::move(number_of_live_audio_nodes_in)),
      number_of_live_documents(std::move(number_of_live_documents_in)),
      number_of_live_nodes(std::move(number_of_live_nodes_in)),
      number_of_live_layout_objects(std::move(number_of_live_layout_objects_in)),
      number_of_live_resources(std::move(number_of_live_resources_in)),
      number_of_live_context_lifecycle_state_observers(std::move(number_of_live_context_lifecycle_state_observers_in)),
      number_of_live_script_promises(std::move(number_of_live_script_promises_in)),
      number_of_live_frames(std::move(number_of_live_frames_in)),
      number_of_live_v8_per_context_data(std::move(number_of_live_v8_per_context_data_in)),
      number_of_worker_global_scopes(std::move(number_of_worker_global_scopes_in)),
      number_of_live_ua_css_resources(std::move(number_of_live_ua_css_resources_in)),
      number_of_live_resource_fetchers(std::move(number_of_live_resource_fetchers_in)) {}

LeakDetectionResult::~LeakDetectionResult() = default;
size_t LeakDetectionResult::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->number_of_live_audio_nodes);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_documents);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_nodes);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_layout_objects);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_resources);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_context_lifecycle_state_observers);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_script_promises);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_frames);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_v8_per_context_data);
  seed = mojo::internal::WTFHash(seed, this->number_of_worker_global_scopes);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_ua_css_resources);
  seed = mojo::internal::WTFHash(seed, this->number_of_live_resource_fetchers);
  return seed;
}

bool LeakDetectionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char LeakDetector::Name_[] = "blink.mojom.LeakDetector";

class LeakDetector_PerformLeakDetection_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LeakDetector_PerformLeakDetection_ForwardToCallback(
      LeakDetector::PerformLeakDetectionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LeakDetector::PerformLeakDetectionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LeakDetector_PerformLeakDetection_ForwardToCallback);
};

LeakDetectorProxy::LeakDetectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LeakDetectorProxy::PerformLeakDetection(
    PerformLeakDetectionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::LeakDetector::PerformLeakDetection");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLeakDetector_PerformLeakDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LeakDetector_PerformLeakDetection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LeakDetector::Name_);
  message.set_method_name("PerformLeakDetection");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LeakDetector_PerformLeakDetection_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LeakDetector_PerformLeakDetection_ProxyToResponder {
 public:
  static LeakDetector::PerformLeakDetectionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LeakDetector_PerformLeakDetection_ProxyToResponder> proxy(
        new LeakDetector_PerformLeakDetection_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LeakDetector_PerformLeakDetection_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LeakDetector_PerformLeakDetection_ProxyToResponder() {
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
  LeakDetector_PerformLeakDetection_ProxyToResponder(
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
        << "LeakDetector::PerformLeakDetectionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      LeakDetectionResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LeakDetector_PerformLeakDetection_ProxyToResponder);
};

bool LeakDetector_PerformLeakDetection_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::LeakDetector::PerformLeakDetectionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LeakDetector_PerformLeakDetection_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  LeakDetectionResultPtr p_result{};
  LeakDetector_PerformLeakDetection_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        LeakDetector::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void LeakDetector_PerformLeakDetection_ProxyToResponder::Run(
    LeakDetectionResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLeakDetector_PerformLeakDetection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::LeakDetector_PerformLeakDetection_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::blink::mojom::LeakDetectionResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::LeakDetector::PerformLeakDetectionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LeakDetector::Name_);
  message.set_method_name("PerformLeakDetection");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool LeakDetectorStubDispatch::Accept(
    LeakDetector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLeakDetector_PerformLeakDetection_Name: {
      break;
    }
  }
  return false;
}

// static
bool LeakDetectorStubDispatch::AcceptWithResponder(
    LeakDetector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLeakDetector_PerformLeakDetection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::LeakDetector::PerformLeakDetection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::LeakDetector_PerformLeakDetection_Params_Data* params =
          reinterpret_cast<
              internal::LeakDetector_PerformLeakDetection_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LeakDetector_PerformLeakDetection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LeakDetector::Name_, 0, false);
        return false;
      }
      LeakDetector::PerformLeakDetectionCallback callback =
          LeakDetector_PerformLeakDetection_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PerformLeakDetection(std::move(callback));
      return true;
    }
  }
  return false;
}

bool LeakDetectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LeakDetector RequestValidator");

  switch (message->header()->name) {
    case internal::kLeakDetector_PerformLeakDetection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LeakDetector_PerformLeakDetection_Params_Data>(
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

bool LeakDetectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LeakDetector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLeakDetector_PerformLeakDetection_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LeakDetector_PerformLeakDetection_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::LeakDetectionResult::DataView, ::blink::mojom::blink::LeakDetectionResultPtr>::Read(
    ::blink::mojom::blink::LeakDetectionResult::DataView input,
    ::blink::mojom::blink::LeakDetectionResultPtr* output) {
  bool success = true;
  ::blink::mojom::blink::LeakDetectionResultPtr result(::blink::mojom::blink::LeakDetectionResult::New());
  
      result->number_of_live_audio_nodes = input.number_of_live_audio_nodes();
      result->number_of_live_documents = input.number_of_live_documents();
      result->number_of_live_nodes = input.number_of_live_nodes();
      result->number_of_live_layout_objects = input.number_of_live_layout_objects();
      result->number_of_live_resources = input.number_of_live_resources();
      result->number_of_live_context_lifecycle_state_observers = input.number_of_live_context_lifecycle_state_observers();
      result->number_of_live_script_promises = input.number_of_live_script_promises();
      result->number_of_live_frames = input.number_of_live_frames();
      result->number_of_live_v8_per_context_data = input.number_of_live_v8_per_context_data();
      result->number_of_worker_global_scopes = input.number_of_worker_global_scopes();
      result->number_of_live_ua_css_resources = input.number_of_live_ua_css_resources();
      result->number_of_live_resource_fetchers = input.number_of_live_resource_fetchers();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif