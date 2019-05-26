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

#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
const char TextureReleaser::Name_[] = "viz.mojom.TextureReleaser";

TextureReleaserProxy::TextureReleaserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TextureReleaserProxy::Release(
    const ::gpu::SyncToken& in_sync_token, bool in_is_lost) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TextureReleaser::Release");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTextureReleaser_Release_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::TextureReleaser_Release_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in TextureReleaser.Release request");
  params->is_lost = in_is_lost;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TextureReleaser::Name_);
  message.set_method_name("Release");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TextureReleaserStubDispatch::Accept(
    TextureReleaser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTextureReleaser_Release_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TextureReleaser::Release",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TextureReleaser_Release_Params_Data* params =
          reinterpret_cast<internal::TextureReleaser_Release_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::gpu::SyncToken p_sync_token{};
      bool p_is_lost{};
      TextureReleaser_Release_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      p_is_lost = input_data_view.is_lost();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TextureReleaser::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Release(
std::move(p_sync_token), 
std::move(p_is_lost));
      return true;
    }
  }
  return false;
}

// static
bool TextureReleaserStubDispatch::AcceptWithResponder(
    TextureReleaser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTextureReleaser_Release_Name: {
      break;
    }
  }
  return false;
}

bool TextureReleaserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TextureReleaser RequestValidator");

  switch (message->header()->name) {
    case internal::kTextureReleaser_Release_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TextureReleaser_Release_Params_Data>(
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
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif