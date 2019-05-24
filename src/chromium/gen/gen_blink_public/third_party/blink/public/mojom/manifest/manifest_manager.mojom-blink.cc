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

#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-blink.h"

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

#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-params-data.h"
#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/public/common/manifest/web_display_mode_mojom_traits.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char ManifestManager::Name_[] = "blink.mojom.ManifestManager";

class ManifestManager_RequestManifest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ManifestManager_RequestManifest_ForwardToCallback(
      ManifestManager::RequestManifestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ManifestManager::RequestManifestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ManifestManager_RequestManifest_ForwardToCallback);
};

class ManifestManager_RequestManifestDebugInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ManifestManager_RequestManifestDebugInfo_ForwardToCallback(
      ManifestManager::RequestManifestDebugInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ManifestManager::RequestManifestDebugInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ManifestManager_RequestManifestDebugInfo_ForwardToCallback);
};

ManifestManagerProxy::ManifestManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ManifestManagerProxy::RequestManifest(
    RequestManifestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kManifestManager_RequestManifest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ManifestManager_RequestManifest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ManifestManager::Name_);
  message.set_method_name("RequestManifest");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ManifestManager_RequestManifest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ManifestManagerProxy::RequestManifestDebugInfo(
    RequestManifestDebugInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestDebugInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kManifestManager_RequestManifestDebugInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ManifestManager_RequestManifestDebugInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ManifestManager::Name_);
  message.set_method_name("RequestManifestDebugInfo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ManifestManager_RequestManifestDebugInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ManifestManager_RequestManifest_ProxyToResponder {
 public:
  static ManifestManager::RequestManifestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ManifestManager_RequestManifest_ProxyToResponder> proxy(
        new ManifestManager_RequestManifest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ManifestManager_RequestManifest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ManifestManager_RequestManifest_ProxyToResponder() {
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
  ManifestManager_RequestManifest_ProxyToResponder(
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
        << "ManifestManager::RequestManifestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::blink::KURL& in_url, ::blink::mojom::blink::ManifestPtr in_manifest);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ManifestManager_RequestManifest_ProxyToResponder);
};

bool ManifestManager_RequestManifest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ManifestManager_RequestManifest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ManifestManager_RequestManifest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::KURL p_url{};
  ::blink::mojom::blink::ManifestPtr p_manifest{};
  ManifestManager_RequestManifest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  if (!input_data_view.ReadManifest(&p_manifest))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ManifestManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_url), 
std::move(p_manifest));
  return true;
}

void ManifestManager_RequestManifest_ProxyToResponder::Run(
    const ::blink::KURL& in_url, ::blink::mojom::blink::ManifestPtr in_manifest) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kManifestManager_RequestManifest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ManifestManager_RequestManifest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ");
  typename decltype(params->manifest)::BaseType::BufferWriter
      manifest_writer;
  mojo::internal::Serialize<::blink::mojom::ManifestDataView>(
      in_manifest, buffer, &manifest_writer, &serialization_context);
  params->manifest.Set(
      manifest_writer.is_null() ? nullptr : manifest_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ManifestManager::Name_);
  message.set_method_name("RequestManifest");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ManifestManager_RequestManifestDebugInfo_ProxyToResponder {
 public:
  static ManifestManager::RequestManifestDebugInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ManifestManager_RequestManifestDebugInfo_ProxyToResponder> proxy(
        new ManifestManager_RequestManifestDebugInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ManifestManager_RequestManifestDebugInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ManifestManager_RequestManifestDebugInfo_ProxyToResponder() {
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
  ManifestManager_RequestManifestDebugInfo_ProxyToResponder(
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
        << "ManifestManager::RequestManifestDebugInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::blink::KURL& in_url, ::blink::mojom::blink::ManifestDebugInfoPtr in_debug_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ManifestManager_RequestManifestDebugInfo_ProxyToResponder);
};

bool ManifestManager_RequestManifestDebugInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestDebugInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::KURL p_url{};
  ::blink::mojom::blink::ManifestDebugInfoPtr p_debug_info{};
  ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  if (!input_data_view.ReadDebugInfo(&p_debug_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ManifestManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_url), 
std::move(p_debug_info));
  return true;
}

void ManifestManager_RequestManifestDebugInfo_ProxyToResponder::Run(
    const ::blink::KURL& in_url, ::blink::mojom::blink::ManifestDebugInfoPtr in_debug_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kManifestManager_RequestManifestDebugInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ");
  typename decltype(params->debug_info)::BaseType::BufferWriter
      debug_info_writer;
  mojo::internal::Serialize<::blink::mojom::ManifestDebugInfoDataView>(
      in_debug_info, buffer, &debug_info_writer, &serialization_context);
  params->debug_info.Set(
      debug_info_writer.is_null() ? nullptr : debug_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestDebugInfoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ManifestManager::Name_);
  message.set_method_name("RequestManifestDebugInfo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ManifestManagerStubDispatch::Accept(
    ManifestManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kManifestManager_RequestManifest_Name: {
      break;
    }
    case internal::kManifestManager_RequestManifestDebugInfo_Name: {
      break;
    }
  }
  return false;
}

// static
bool ManifestManagerStubDispatch::AcceptWithResponder(
    ManifestManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kManifestManager_RequestManifest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ManifestManager_RequestManifest_Params_Data* params =
          reinterpret_cast<
              internal::ManifestManager_RequestManifest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ManifestManager_RequestManifest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ManifestManager::Name_, 0, false);
        return false;
      }
      ManifestManager::RequestManifestCallback callback =
          ManifestManager_RequestManifest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestManifest(std::move(callback));
      return true;
    }
    case internal::kManifestManager_RequestManifestDebugInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ManifestManager::RequestManifestDebugInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ManifestManager_RequestManifestDebugInfo_Params_Data* params =
          reinterpret_cast<
              internal::ManifestManager_RequestManifestDebugInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ManifestManager_RequestManifestDebugInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ManifestManager::Name_, 1, false);
        return false;
      }
      ManifestManager::RequestManifestDebugInfoCallback callback =
          ManifestManager_RequestManifestDebugInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestManifestDebugInfo(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ManifestManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ManifestManager RequestValidator");

  switch (message->header()->name) {
    case internal::kManifestManager_RequestManifest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ManifestManager_RequestManifest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kManifestManager_RequestManifestDebugInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ManifestManager_RequestManifestDebugInfo_Params_Data>(
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

bool ManifestManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ManifestManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kManifestManager_RequestManifest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ManifestManager_RequestManifest_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kManifestManager_RequestManifestDebugInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif