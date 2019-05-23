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

#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom.h"

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

#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-params-data.h"
#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
const char InstalledAppProvider::Name_[] = "blink.mojom.InstalledAppProvider";

class InstalledAppProvider_FilterInstalledApps_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  InstalledAppProvider_FilterInstalledApps_ForwardToCallback(
      InstalledAppProvider::FilterInstalledAppsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  InstalledAppProvider::FilterInstalledAppsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(InstalledAppProvider_FilterInstalledApps_ForwardToCallback);
};

InstalledAppProviderProxy::InstalledAppProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InstalledAppProviderProxy::FilterInstalledApps(
    std::vector<::blink::mojom::RelatedApplicationPtr> in_related_apps, FilterInstalledAppsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InstalledAppProvider::FilterInstalledApps");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInstalledAppProvider_FilterInstalledApps_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::InstalledAppProvider_FilterInstalledApps_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->related_apps)::BaseType::BufferWriter
      related_apps_writer;
  const mojo::internal::ContainerValidateParams related_apps_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
      in_related_apps, buffer, &related_apps_writer, &related_apps_validate_params,
      &serialization_context);
  params->related_apps.Set(
      related_apps_writer.is_null() ? nullptr : related_apps_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->related_apps.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null related_apps in InstalledAppProvider.FilterInstalledApps request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InstalledAppProvider::Name_);
  message.set_method_name("FilterInstalledApps");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new InstalledAppProvider_FilterInstalledApps_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class InstalledAppProvider_FilterInstalledApps_ProxyToResponder {
 public:
  static InstalledAppProvider::FilterInstalledAppsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<InstalledAppProvider_FilterInstalledApps_ProxyToResponder> proxy(
        new InstalledAppProvider_FilterInstalledApps_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&InstalledAppProvider_FilterInstalledApps_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~InstalledAppProvider_FilterInstalledApps_ProxyToResponder() {
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
  InstalledAppProvider_FilterInstalledApps_ProxyToResponder(
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
        << "InstalledAppProvider::FilterInstalledAppsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::blink::mojom::RelatedApplicationPtr> in_installedApps);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(InstalledAppProvider_FilterInstalledApps_ProxyToResponder);
};

bool InstalledAppProvider_FilterInstalledApps_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::InstalledAppProvider::FilterInstalledAppsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data* params =
      reinterpret_cast<
          internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::blink::mojom::RelatedApplicationPtr> p_installedApps{};
  InstalledAppProvider_FilterInstalledApps_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInstalledApps(&p_installedApps))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        InstalledAppProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_installedApps));
  return true;
}

void InstalledAppProvider_FilterInstalledApps_ProxyToResponder::Run(
    std::vector<::blink::mojom::RelatedApplicationPtr> in_installedApps) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInstalledAppProvider_FilterInstalledApps_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->installedApps)::BaseType::BufferWriter
      installedApps_writer;
  const mojo::internal::ContainerValidateParams installedApps_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::RelatedApplicationDataView>>(
      in_installedApps, buffer, &installedApps_writer, &installedApps_validate_params,
      &serialization_context);
  params->installedApps.Set(
      installedApps_writer.is_null() ? nullptr : installedApps_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->installedApps.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null installedApps in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::InstalledAppProvider::FilterInstalledAppsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InstalledAppProvider::Name_);
  message.set_method_name("FilterInstalledApps");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool InstalledAppProviderStubDispatch::Accept(
    InstalledAppProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInstalledAppProvider_FilterInstalledApps_Name: {
      break;
    }
  }
  return false;
}

// static
bool InstalledAppProviderStubDispatch::AcceptWithResponder(
    InstalledAppProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInstalledAppProvider_FilterInstalledApps_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InstalledAppProvider::FilterInstalledApps",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::InstalledAppProvider_FilterInstalledApps_Params_Data* params =
          reinterpret_cast<
              internal::InstalledAppProvider_FilterInstalledApps_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::blink::mojom::RelatedApplicationPtr> p_related_apps{};
      InstalledAppProvider_FilterInstalledApps_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRelatedApps(&p_related_apps))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InstalledAppProvider::Name_, 0, false);
        return false;
      }
      InstalledAppProvider::FilterInstalledAppsCallback callback =
          InstalledAppProvider_FilterInstalledApps_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FilterInstalledApps(
std::move(p_related_apps), std::move(callback));
      return true;
    }
  }
  return false;
}

bool InstalledAppProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InstalledAppProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kInstalledAppProvider_FilterInstalledApps_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InstalledAppProvider_FilterInstalledApps_Params_Data>(
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

bool InstalledAppProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InstalledAppProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kInstalledAppProvider_FilterInstalledApps_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::InstalledAppProvider_FilterInstalledApps_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif