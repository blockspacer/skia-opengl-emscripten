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

#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-blink.h"

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

#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-params-data.h"
#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-shared-message-ids.h"

#include "ui/base/ime/mojo/ime_engine_factory_registry.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_BLINK_JUMBO_H_
#define UI_BASE_IME_MOJO_IME_ENGINE_FACTORY_REGISTRY_MOJOM_BLINK_JUMBO_H_
#endif
namespace ime {
namespace mojom {
namespace blink {
const char ImeEngineFactoryRegistry::Name_[] = "ime.mojom.ImeEngineFactoryRegistry";

ImeEngineFactoryRegistryProxy::ImeEngineFactoryRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImeEngineFactoryRegistryProxy::ActivateFactory(
    ::ime::mojom::blink::ImeEngineFactoryPtr in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineFactoryRegistry::ActivateFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineFactoryRegistry_ActivateFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ime::mojom::ImeEngineFactoryPtrDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in ImeEngineFactoryRegistry.ActivateFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineFactoryRegistry::Name_);
  message.set_method_name("ActivateFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ImeEngineFactoryRegistryStubDispatch::Accept(
    ImeEngineFactoryRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImeEngineFactoryRegistry_ActivateFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineFactoryRegistry::ActivateFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data* params =
          reinterpret_cast<internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ime::mojom::blink::ImeEngineFactoryPtr p_factory{};
      ImeEngineFactoryRegistry_ActivateFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineFactoryRegistry::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ActivateFactory(
std::move(p_factory));
      return true;
    }
  }
  return false;
}

// static
bool ImeEngineFactoryRegistryStubDispatch::AcceptWithResponder(
    ImeEngineFactoryRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImeEngineFactoryRegistry_ActivateFactory_Name: {
      break;
    }
  }
  return false;
}

bool ImeEngineFactoryRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImeEngineFactoryRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kImeEngineFactoryRegistry_ActivateFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineFactoryRegistry_ActivateFactory_Params_Data>(
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
}  // namespace ime

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif