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

#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom.h"

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

#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom-params-data.h"
#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char ManifestUrlChangeObserver::Name_[] = "blink.mojom.ManifestUrlChangeObserver";

ManifestUrlChangeObserverProxy::ManifestUrlChangeObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ManifestUrlChangeObserverProxy::ManifestUrlChanged(
    const base::Optional<GURL>& in_manifest_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ManifestUrlChangeObserver::ManifestUrlChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kManifestUrlChangeObserver_ManifestUrlChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->manifest_url)::BaseType::BufferWriter
      manifest_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_manifest_url, buffer, &manifest_url_writer, &serialization_context);
  params->manifest_url.Set(
      manifest_url_writer.is_null() ? nullptr : manifest_url_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ManifestUrlChangeObserver::Name_);
  message.set_method_name("ManifestUrlChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ManifestUrlChangeObserverStubDispatch::Accept(
    ManifestUrlChangeObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kManifestUrlChangeObserver_ManifestUrlChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ManifestUrlChangeObserver::ManifestUrlChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data* params =
          reinterpret_cast<internal::ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<GURL> p_manifest_url{};
      ManifestUrlChangeObserver_ManifestUrlChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadManifestUrl(&p_manifest_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ManifestUrlChangeObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ManifestUrlChanged(
std::move(p_manifest_url));
      return true;
    }
  }
  return false;
}

// static
bool ManifestUrlChangeObserverStubDispatch::AcceptWithResponder(
    ManifestUrlChangeObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kManifestUrlChangeObserver_ManifestUrlChanged_Name: {
      break;
    }
  }
  return false;
}

bool ManifestUrlChangeObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ManifestUrlChangeObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kManifestUrlChangeObserver_ManifestUrlChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ManifestUrlChangeObserver_ManifestUrlChanged_Params_Data>(
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