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

#include "mojo/public/interfaces/bindings/tests/scoping.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/scoping.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/scoping.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/scoping.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace test {
const char A::Name_[] = "mojo.test.A";

AProxy::AProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class AProxy_GetB_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit AProxy_GetB_Message(
      uint32_t message_flags
      , mojo::PendingReceiver<B> param_b
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kA_GetB_Name,
          message_flags)
      , param_b_(std::move(param_b)){}
  ~AProxy_GetB_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      mojo::PendingReceiver<B> param_b) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<AProxy_GetB_Message>(
          kFlags
          , std::move(param_b)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kA_GetB_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::A_GetB_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::BInterfaceBase>>(
      param_b, &params->b, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->b),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid b in A.GetB request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(A* impl) {
    impl->GetB(
        std::move(param_b_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::A_GetB_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::BInterfaceBase>>(
      param_b_, &params->b, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->b),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid b in A.GetB request");
  }
  mojo::PendingReceiver<B> param_b_;

  DISALLOW_COPY_AND_ASSIGN(AProxy_GetB_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
AProxy_GetB_Message::kMessageTag = {};

void AProxy::GetB(
    mojo::PendingReceiver<B> in_b) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::A::GetB");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = AProxy_GetB_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_b));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(A::Name_);
  message.set_method_name("GetB");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AStubDispatch::Accept(
    A* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kA_GetB_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::A::GetB",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            AProxy_GetB_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::A_GetB_Params_Data* params =
          reinterpret_cast<internal::A_GetB_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::PendingReceiver<B> p_b{};
      A_GetB_ParamsDataView input_data_view(params, &serialization_context);
      
      p_b =
          input_data_view.TakeB<decltype(p_b)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            A::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetB(
std::move(p_b));
      return true;
    }
  }
  return false;
}

// static
bool AStubDispatch::AcceptWithResponder(
    A* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kA_GetB_Name: {
      break;
    }
  }
  return false;
}

bool ARequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "A RequestValidator");

  switch (message->header()->name) {
    case internal::kA_GetB_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::A_GetB_Params_Data>(
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

const char B::Name_[] = "mojo.test.B";

BProxy::BProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class BProxy_GetC_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit BProxy_GetC_Message(
      uint32_t message_flags
      , mojo::PendingReceiver<C> param_c
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kB_GetC_Name,
          message_flags)
      , param_c_(std::move(param_c)){}
  ~BProxy_GetC_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      mojo::PendingReceiver<C> param_c) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<BProxy_GetC_Message>(
          kFlags
          , std::move(param_c)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kB_GetC_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::B_GetC_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::CInterfaceBase>>(
      param_c, &params->c, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->c),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid c in B.GetC request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(B* impl) {
    impl->GetC(
        std::move(param_c_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::B_GetC_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::CInterfaceBase>>(
      param_c_, &params->c, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->c),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid c in B.GetC request");
  }
  mojo::PendingReceiver<C> param_c_;

  DISALLOW_COPY_AND_ASSIGN(BProxy_GetC_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
BProxy_GetC_Message::kMessageTag = {};

void BProxy::GetC(
    mojo::PendingReceiver<C> in_c) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::B::GetC");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = BProxy_GetC_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_c));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(B::Name_);
  message.set_method_name("GetC");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BStubDispatch::Accept(
    B* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kB_GetC_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::B::GetC",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            BProxy_GetC_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::B_GetC_Params_Data* params =
          reinterpret_cast<internal::B_GetC_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::PendingReceiver<C> p_c{};
      B_GetC_ParamsDataView input_data_view(params, &serialization_context);
      
      p_c =
          input_data_view.TakeC<decltype(p_c)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            B::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetC(
std::move(p_c));
      return true;
    }
  }
  return false;
}

// static
bool BStubDispatch::AcceptWithResponder(
    B* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kB_GetC_Name: {
      break;
    }
  }
  return false;
}

bool BRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "B RequestValidator");

  switch (message->header()->name) {
    case internal::kB_GetC_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::B_GetC_Params_Data>(
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

const char C::Name_[] = "mojo.test.C";

CProxy::CProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class CProxy_D_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CProxy_D_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kC_D_Name,
          message_flags){}
  ~CProxy_D_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CProxy_D_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kC_D_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::C_D_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(C* impl) {
    impl->D();
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::C_D_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(CProxy_D_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CProxy_D_Message::kMessageTag = {};

void CProxy::D(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::C::D");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CProxy_D_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(C::Name_);
  message.set_method_name("D");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CStubDispatch::Accept(
    C* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kC_D_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::C::D",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CProxy_D_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was serialized using a different variant of these bindings.
          // Force serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          context->Dispatch(impl);
          return true;
        }
      }

      DCHECK(message->is_serialized());
      internal::C_D_Params_Data* params =
          reinterpret_cast<internal::C_D_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      C_D_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            C::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->D();
      return true;
    }
  }
  return false;
}

// static
bool CStubDispatch::AcceptWithResponder(
    C* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kC_D_Name: {
      break;
    }
  }
  return false;
}

bool CRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "C RequestValidator");

  switch (message->header()->name) {
    case internal::kC_D_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::C_D_Params_Data>(
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

}  // namespace test
}  // namespace mojo

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif