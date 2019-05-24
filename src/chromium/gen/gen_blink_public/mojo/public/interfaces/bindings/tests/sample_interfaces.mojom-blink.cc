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

#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_BLINK_JUMBO_H_
#endif
namespace sample {
namespace blink {
const char PingTest::Name_[] = "sample.PingTest";

class PingTest_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PingTest_Ping_ForwardToCallback(
      PingTest::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PingTest::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PingTest_Ping_ForwardToCallback);
};

PingTestProxy::PingTestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class PingTestProxy_Ping_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit PingTestProxy_Ping_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kPingTest_Ping_Name,
          message_flags){}
  ~PingTestProxy_Ping_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<PingTestProxy_Ping_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kPingTest_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::PingTest_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(PingTest* impl, PingTest::PingCallback callback) {
    impl->Ping(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::PingTest_Ping_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(PingTestProxy_Ping_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
PingTestProxy_Ping_Message::kMessageTag = {};

void PingTestProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PingTest::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = PingTestProxy_Ping_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PingTest::Name_);
  message.set_method_name("Ping");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PingTest_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PingTest_Ping_ProxyToResponder {
 public:
  static PingTest::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PingTest_Ping_ProxyToResponder> proxy(
        new PingTest_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PingTest_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PingTest_Ping_ProxyToResponder() {
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
  PingTest_Ping_ProxyToResponder(
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
        << "PingTest::PingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PingTest_Ping_ProxyToResponder);
};
class PingTest_Ping_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit PingTest_Ping_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kPingTest_Ping_Name,
          message_flags){}
  ~PingTest_Ping_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<PingTest_Ping_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kPingTest_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::PingTest_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(PingTest::PingCallback* callback) {
    std::move(*callback).Run();
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::PingTest_Ping_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(PingTest_Ping_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
PingTest_Ping_Response_Message::kMessageTag = {};

bool PingTest_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PingTest::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<PingTest_Ping_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::PingTest_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PingTest_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PingTest_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PingTest::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void PingTest_Ping_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = PingTest_Ping_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PingTest::PingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PingTest::Name_);
  message.set_method_name("Ping");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PingTestStubDispatch::Accept(
    PingTest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPingTest_Ping_Name: {
      break;
    }
  }
  return false;
}

// static
bool PingTestStubDispatch::AcceptWithResponder(
    PingTest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPingTest_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PingTest::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            PingTestProxy_Ping_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          PingTest::PingCallback callback =
              PingTest_Ping_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::PingTest_Ping_Params_Data* params =
          reinterpret_cast<
              internal::PingTest_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PingTest_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PingTest::Name_, 0, false);
        return false;
      }
      PingTest::PingCallback callback =
          PingTest_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(std::move(callback));
      return true;
    }
  }
  return false;
}

bool PingTestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PingTest RequestValidator");

  switch (message->header()->name) {
    case internal::kPingTest_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PingTest_Ping_Params_Data>(
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

bool PingTestResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PingTest ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPingTest_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PingTest_Ping_ResponseParams_Data>(
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
const char Provider::Name_[] = "sample.Provider";

class Provider_EchoString_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Provider_EchoString_ForwardToCallback(
      Provider::EchoStringCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Provider::EchoStringCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Provider_EchoString_ForwardToCallback);
};

class Provider_EchoStrings_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Provider_EchoStrings_ForwardToCallback(
      Provider::EchoStringsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Provider::EchoStringsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Provider_EchoStrings_ForwardToCallback);
};

class Provider_EchoMessagePipeHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Provider_EchoMessagePipeHandle_ForwardToCallback(
      Provider::EchoMessagePipeHandleCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Provider::EchoMessagePipeHandleCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Provider_EchoMessagePipeHandle_ForwardToCallback);
};

class Provider_EchoEnum_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Provider_EchoEnum_ForwardToCallback(
      Provider::EchoEnumCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Provider::EchoEnumCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Provider_EchoEnum_ForwardToCallback);
};

class Provider_EchoInt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Provider_EchoInt_ForwardToCallback(
      Provider::EchoIntCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Provider::EchoIntCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Provider_EchoInt_ForwardToCallback);
};

ProviderProxy::ProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class ProviderProxy_EchoString_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProviderProxy_EchoString_Message(
      uint32_t message_flags
      , const WTF::String& param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoString_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~ProviderProxy_EchoString_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const WTF::String& param_a) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProviderProxy_EchoString_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoString_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoString_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a, buffer, &a_writer, &serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoString request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider* impl, Provider::EchoStringCallback callback) {
    impl->EchoString(
        std::move(param_a_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoString_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a_, buffer, &a_writer, serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoString request");
  }
  WTF::String param_a_;

  DISALLOW_COPY_AND_ASSIGN(ProviderProxy_EchoString_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProviderProxy_EchoString_Message::kMessageTag = {};

void ProviderProxy::EchoString(
    const WTF::String& in_a, EchoStringCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoString");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProviderProxy_EchoString_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_a));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoString");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Provider_EchoString_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProviderProxy_EchoStrings_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProviderProxy_EchoStrings_Message(
      uint32_t message_flags
      , const WTF::String& param_a
      , const WTF::String& param_b
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoStrings_Name,
          message_flags)
      , param_a_(std::move(param_a))
      , param_b_(std::move(param_b)){}
  ~ProviderProxy_EchoStrings_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const WTF::String& param_a, const WTF::String& param_b) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProviderProxy_EchoStrings_Message>(
          kFlags
          , std::move(param_a)
          , std::move(param_b)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoStrings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoStrings_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a, buffer, &a_writer, &serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoStrings request");
  typename decltype(params->b)::BaseType::BufferWriter
      b_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_b, buffer, &b_writer, &serialization_context);
  params->b.Set(
      b_writer.is_null() ? nullptr : b_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->b.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null b in Provider.EchoStrings request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider* impl, Provider::EchoStringsCallback callback) {
    impl->EchoStrings(
        std::move(param_a_),
        std::move(param_b_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoStrings_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a_, buffer, &a_writer, serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoStrings request");
  typename decltype(params->b)::BaseType::BufferWriter
      b_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_b_, buffer, &b_writer, serialization_context);
  params->b.Set(
      b_writer.is_null() ? nullptr : b_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->b.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null b in Provider.EchoStrings request");
  }
  WTF::String param_a_;
  WTF::String param_b_;

  DISALLOW_COPY_AND_ASSIGN(ProviderProxy_EchoStrings_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProviderProxy_EchoStrings_Message::kMessageTag = {};

void ProviderProxy::EchoStrings(
    const WTF::String& in_a, const WTF::String& in_b, EchoStringsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoStrings");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProviderProxy_EchoStrings_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_a), std::move(in_b));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoStrings");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Provider_EchoStrings_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProviderProxy_EchoMessagePipeHandle_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProviderProxy_EchoMessagePipeHandle_Message(
      uint32_t message_flags
      , mojo::ScopedMessagePipeHandle param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoMessagePipeHandle_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~ProviderProxy_EchoMessagePipeHandle_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      mojo::ScopedMessagePipeHandle param_a) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProviderProxy_EchoMessagePipeHandle_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoMessagePipeHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoMessagePipeHandle_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      param_a, &params->a, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->a),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid a in Provider.EchoMessagePipeHandle request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider* impl, Provider::EchoMessagePipeHandleCallback callback) {
    impl->EchoMessagePipeHandle(
        std::move(param_a_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoMessagePipeHandle_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      param_a_, &params->a, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->a),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid a in Provider.EchoMessagePipeHandle request");
  }
  mojo::ScopedMessagePipeHandle param_a_;

  DISALLOW_COPY_AND_ASSIGN(ProviderProxy_EchoMessagePipeHandle_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProviderProxy_EchoMessagePipeHandle_Message::kMessageTag = {};

void ProviderProxy::EchoMessagePipeHandle(
    mojo::ScopedMessagePipeHandle in_a, EchoMessagePipeHandleCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoMessagePipeHandle");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProviderProxy_EchoMessagePipeHandle_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_a));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoMessagePipeHandle");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Provider_EchoMessagePipeHandle_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProviderProxy_EchoEnum_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProviderProxy_EchoEnum_Message(
      uint32_t message_flags
      , Enum param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoEnum_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~ProviderProxy_EchoEnum_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      Enum param_a) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProviderProxy_EchoEnum_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoEnum_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoEnum_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::sample::Enum>(
      param_a, &params->a);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider* impl, Provider::EchoEnumCallback callback) {
    impl->EchoEnum(
        std::move(param_a_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoEnum_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::sample::Enum>(
      param_a_, &params->a);
  }
  Enum param_a_;

  DISALLOW_COPY_AND_ASSIGN(ProviderProxy_EchoEnum_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProviderProxy_EchoEnum_Message::kMessageTag = {};

void ProviderProxy::EchoEnum(
    Enum in_a, EchoEnumCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoEnum");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProviderProxy_EchoEnum_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_a));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoEnum");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Provider_EchoEnum_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProviderProxy_EchoInt_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ProviderProxy_EchoInt_Message(
      uint32_t message_flags
      , int32_t param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoInt_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~ProviderProxy_EchoInt_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_a) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ProviderProxy_EchoInt_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoInt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoInt_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->a = param_a;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider* impl, Provider::EchoIntCallback callback) {
    impl->EchoInt(
        std::move(param_a_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoInt_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->a = param_a_;
  }
  int32_t param_a_;

  DISALLOW_COPY_AND_ASSIGN(ProviderProxy_EchoInt_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ProviderProxy_EchoInt_Message::kMessageTag = {};

void ProviderProxy::EchoInt(
    int32_t in_a, EchoIntCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoInt");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ProviderProxy_EchoInt_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_a));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoInt");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Provider_EchoInt_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Provider_EchoString_ProxyToResponder {
 public:
  static Provider::EchoStringCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Provider_EchoString_ProxyToResponder> proxy(
        new Provider_EchoString_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Provider_EchoString_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Provider_EchoString_ProxyToResponder() {
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
  Provider_EchoString_ProxyToResponder(
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
        << "Provider::EchoStringCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_a);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoString_ProxyToResponder);
};
class Provider_EchoString_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Provider_EchoString_Response_Message(
      uint32_t message_flags
      , const WTF::String& param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoString_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~Provider_EchoString_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const WTF::String& param_a) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Provider_EchoString_Response_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoString_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoString_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a, buffer, &a_writer, &serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoString response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider::EchoStringCallback* callback) {
    std::move(*callback).Run(
        std::move(param_a_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoString_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a_, buffer, &a_writer, serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoString response");
  }
  WTF::String param_a_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoString_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Provider_EchoString_Response_Message::kMessageTag = {};

bool Provider_EchoString_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoStringCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Provider_EchoString_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::Provider_EchoString_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Provider_EchoString_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_a{};
  Provider_EchoString_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadA(&p_a))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Provider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_a));
  return true;
}

void Provider_EchoString_ProxyToResponder::Run(
    const WTF::String& in_a) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Provider_EchoString_Response_Message::Build(kSerialize, is_sync_, std::move(in_a));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoStringCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoString");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Provider_EchoStrings_ProxyToResponder {
 public:
  static Provider::EchoStringsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Provider_EchoStrings_ProxyToResponder> proxy(
        new Provider_EchoStrings_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Provider_EchoStrings_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Provider_EchoStrings_ProxyToResponder() {
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
  Provider_EchoStrings_ProxyToResponder(
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
        << "Provider::EchoStringsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_a, const WTF::String& in_b);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoStrings_ProxyToResponder);
};
class Provider_EchoStrings_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Provider_EchoStrings_Response_Message(
      uint32_t message_flags
      , const WTF::String& param_a
      , const WTF::String& param_b
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoStrings_Name,
          message_flags)
      , param_a_(std::move(param_a))
      , param_b_(std::move(param_b)){}
  ~Provider_EchoStrings_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      const WTF::String& param_a, const WTF::String& param_b) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Provider_EchoStrings_Response_Message>(
          kFlags
          , std::move(param_a)
          , std::move(param_b)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoStrings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoStrings_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a, buffer, &a_writer, &serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoStrings response");
  typename decltype(params->b)::BaseType::BufferWriter
      b_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_b, buffer, &b_writer, &serialization_context);
  params->b.Set(
      b_writer.is_null() ? nullptr : b_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->b.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null b in Provider.EchoStrings response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider::EchoStringsCallback* callback) {
    std::move(*callback).Run(
        std::move(param_a_), 
        std::move(param_b_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoStrings_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->a)::BaseType::BufferWriter
      a_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_a_, buffer, &a_writer, serialization_context);
  params->a.Set(
      a_writer.is_null() ? nullptr : a_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->a.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null a in Provider.EchoStrings response");
  typename decltype(params->b)::BaseType::BufferWriter
      b_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_b_, buffer, &b_writer, serialization_context);
  params->b.Set(
      b_writer.is_null() ? nullptr : b_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->b.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null b in Provider.EchoStrings response");
  }
  WTF::String param_a_;
  WTF::String param_b_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoStrings_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Provider_EchoStrings_Response_Message::kMessageTag = {};

bool Provider_EchoStrings_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoStringsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Provider_EchoStrings_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::Provider_EchoStrings_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Provider_EchoStrings_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_a{};
  WTF::String p_b{};
  Provider_EchoStrings_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadA(&p_a))
    success = false;
  if (!input_data_view.ReadB(&p_b))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Provider::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_a), 
std::move(p_b));
  return true;
}

void Provider_EchoStrings_ProxyToResponder::Run(
    const WTF::String& in_a, const WTF::String& in_b) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Provider_EchoStrings_Response_Message::Build(kSerialize, is_sync_, std::move(in_a), std::move(in_b));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoStringsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoStrings");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Provider_EchoMessagePipeHandle_ProxyToResponder {
 public:
  static Provider::EchoMessagePipeHandleCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Provider_EchoMessagePipeHandle_ProxyToResponder> proxy(
        new Provider_EchoMessagePipeHandle_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Provider_EchoMessagePipeHandle_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Provider_EchoMessagePipeHandle_ProxyToResponder() {
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
  Provider_EchoMessagePipeHandle_ProxyToResponder(
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
        << "Provider::EchoMessagePipeHandleCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedMessagePipeHandle in_a);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoMessagePipeHandle_ProxyToResponder);
};
class Provider_EchoMessagePipeHandle_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Provider_EchoMessagePipeHandle_Response_Message(
      uint32_t message_flags
      , mojo::ScopedMessagePipeHandle param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoMessagePipeHandle_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~Provider_EchoMessagePipeHandle_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      mojo::ScopedMessagePipeHandle param_a) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Provider_EchoMessagePipeHandle_Response_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoMessagePipeHandle_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoMessagePipeHandle_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      param_a, &params->a, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->a),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid a in Provider.EchoMessagePipeHandle response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider::EchoMessagePipeHandleCallback* callback) {
    std::move(*callback).Run(
        std::move(param_a_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoMessagePipeHandle_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      param_a_, &params->a, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->a),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid a in Provider.EchoMessagePipeHandle response");
  }
  mojo::ScopedMessagePipeHandle param_a_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoMessagePipeHandle_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Provider_EchoMessagePipeHandle_Response_Message::kMessageTag = {};

bool Provider_EchoMessagePipeHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoMessagePipeHandleCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Provider_EchoMessagePipeHandle_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::Provider_EchoMessagePipeHandle_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Provider_EchoMessagePipeHandle_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedMessagePipeHandle p_a{};
  Provider_EchoMessagePipeHandle_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_a = input_data_view.TakeA();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Provider::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_a));
  return true;
}

void Provider_EchoMessagePipeHandle_ProxyToResponder::Run(
    mojo::ScopedMessagePipeHandle in_a) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Provider_EchoMessagePipeHandle_Response_Message::Build(kSerialize, is_sync_, std::move(in_a));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoMessagePipeHandleCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoMessagePipeHandle");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Provider_EchoEnum_ProxyToResponder {
 public:
  static Provider::EchoEnumCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Provider_EchoEnum_ProxyToResponder> proxy(
        new Provider_EchoEnum_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Provider_EchoEnum_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Provider_EchoEnum_ProxyToResponder() {
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
  Provider_EchoEnum_ProxyToResponder(
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
        << "Provider::EchoEnumCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      Enum in_a);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoEnum_ProxyToResponder);
};
class Provider_EchoEnum_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Provider_EchoEnum_Response_Message(
      uint32_t message_flags
      , Enum param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoEnum_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~Provider_EchoEnum_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      Enum param_a) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Provider_EchoEnum_Response_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoEnum_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoEnum_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::sample::Enum>(
      param_a, &params->a);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider::EchoEnumCallback* callback) {
    std::move(*callback).Run(
        std::move(param_a_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoEnum_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<::sample::Enum>(
      param_a_, &params->a);
  }
  Enum param_a_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoEnum_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Provider_EchoEnum_Response_Message::kMessageTag = {};

bool Provider_EchoEnum_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoEnumCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Provider_EchoEnum_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::Provider_EchoEnum_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Provider_EchoEnum_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Enum p_a{};
  Provider_EchoEnum_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadA(&p_a))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Provider::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_a));
  return true;
}

void Provider_EchoEnum_ProxyToResponder::Run(
    Enum in_a) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Provider_EchoEnum_Response_Message::Build(kSerialize, is_sync_, std::move(in_a));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoEnumCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoEnum");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Provider_EchoInt_ProxyToResponder {
 public:
  static Provider::EchoIntCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Provider_EchoInt_ProxyToResponder> proxy(
        new Provider_EchoInt_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Provider_EchoInt_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Provider_EchoInt_ProxyToResponder() {
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
  Provider_EchoInt_ProxyToResponder(
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
        << "Provider::EchoIntCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_a);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoInt_ProxyToResponder);
};
class Provider_EchoInt_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Provider_EchoInt_Response_Message(
      uint32_t message_flags
      , int32_t param_a
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kProvider_EchoInt_Name,
          message_flags)
      , param_a_(std::move(param_a)){}
  ~Provider_EchoInt_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_a) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Provider_EchoInt_Response_Message>(
          kFlags
          , std::move(param_a)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kProvider_EchoInt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Provider_EchoInt_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->a = param_a;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Provider::EchoIntCallback* callback) {
    std::move(*callback).Run(
        std::move(param_a_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Provider_EchoInt_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->a = param_a_;
  }
  int32_t param_a_;

  DISALLOW_COPY_AND_ASSIGN(Provider_EchoInt_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Provider_EchoInt_Response_Message::kMessageTag = {};

bool Provider_EchoInt_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Provider::EchoIntCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Provider_EchoInt_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::Provider_EchoInt_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Provider_EchoInt_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_a{};
  Provider_EchoInt_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_a = input_data_view.a();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Provider::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_a));
  return true;
}

void Provider_EchoInt_ProxyToResponder::Run(
    int32_t in_a) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Provider_EchoInt_Response_Message::Build(kSerialize, is_sync_, std::move(in_a));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoIntCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Provider::Name_);
  message.set_method_name("EchoInt");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProviderStubDispatch::Accept(
    Provider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProvider_EchoString_Name: {
      break;
    }
    case internal::kProvider_EchoStrings_Name: {
      break;
    }
    case internal::kProvider_EchoMessagePipeHandle_Name: {
      break;
    }
    case internal::kProvider_EchoEnum_Name: {
      break;
    }
    case internal::kProvider_EchoInt_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProviderStubDispatch::AcceptWithResponder(
    Provider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProvider_EchoString_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoString",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProviderProxy_EchoString_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Provider::EchoStringCallback callback =
              Provider_EchoString_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Provider_EchoString_Params_Data* params =
          reinterpret_cast<
              internal::Provider_EchoString_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_a{};
      Provider_EchoString_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadA(&p_a))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Provider::Name_, 0, false);
        return false;
      }
      Provider::EchoStringCallback callback =
          Provider_EchoString_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoString(
std::move(p_a), std::move(callback));
      return true;
    }
    case internal::kProvider_EchoStrings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoStrings",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProviderProxy_EchoStrings_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Provider::EchoStringsCallback callback =
              Provider_EchoStrings_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Provider_EchoStrings_Params_Data* params =
          reinterpret_cast<
              internal::Provider_EchoStrings_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_a{};
      WTF::String p_b{};
      Provider_EchoStrings_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadA(&p_a))
        success = false;
      if (!input_data_view.ReadB(&p_b))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Provider::Name_, 1, false);
        return false;
      }
      Provider::EchoStringsCallback callback =
          Provider_EchoStrings_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoStrings(
std::move(p_a), 
std::move(p_b), std::move(callback));
      return true;
    }
    case internal::kProvider_EchoMessagePipeHandle_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoMessagePipeHandle",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProviderProxy_EchoMessagePipeHandle_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Provider::EchoMessagePipeHandleCallback callback =
              Provider_EchoMessagePipeHandle_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Provider_EchoMessagePipeHandle_Params_Data* params =
          reinterpret_cast<
              internal::Provider_EchoMessagePipeHandle_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedMessagePipeHandle p_a{};
      Provider_EchoMessagePipeHandle_ParamsDataView input_data_view(params, &serialization_context);
      
      p_a = input_data_view.TakeA();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Provider::Name_, 2, false);
        return false;
      }
      Provider::EchoMessagePipeHandleCallback callback =
          Provider_EchoMessagePipeHandle_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoMessagePipeHandle(
std::move(p_a), std::move(callback));
      return true;
    }
    case internal::kProvider_EchoEnum_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoEnum",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProviderProxy_EchoEnum_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Provider::EchoEnumCallback callback =
              Provider_EchoEnum_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Provider_EchoEnum_Params_Data* params =
          reinterpret_cast<
              internal::Provider_EchoEnum_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Enum p_a{};
      Provider_EchoEnum_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadA(&p_a))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Provider::Name_, 3, false);
        return false;
      }
      Provider::EchoEnumCallback callback =
          Provider_EchoEnum_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoEnum(
std::move(p_a), std::move(callback));
      return true;
    }
    case internal::kProvider_EchoInt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Provider::EchoInt",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ProviderProxy_EchoInt_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Provider::EchoIntCallback callback =
              Provider_EchoInt_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Provider_EchoInt_Params_Data* params =
          reinterpret_cast<
              internal::Provider_EchoInt_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_a{};
      Provider_EchoInt_ParamsDataView input_data_view(params, &serialization_context);
      
      p_a = input_data_view.a();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Provider::Name_, 4, false);
        return false;
      }
      Provider::EchoIntCallback callback =
          Provider_EchoInt_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoInt(
std::move(p_a), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Provider RequestValidator");

  switch (message->header()->name) {
    case internal::kProvider_EchoString_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoString_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoStrings_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoStrings_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoMessagePipeHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoMessagePipeHandle_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoEnum_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoEnum_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoInt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoInt_Params_Data>(
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

bool ProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Provider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProvider_EchoString_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoString_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoStrings_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoStrings_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoMessagePipeHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoMessagePipeHandle_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoEnum_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoEnum_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProvider_EchoInt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Provider_EchoInt_ResponseParams_Data>(
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
const char IntegerAccessor::Name_[] = "sample.IntegerAccessor";

class IntegerAccessor_GetInteger_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  IntegerAccessor_GetInteger_ForwardToCallback(
      IntegerAccessor::GetIntegerCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  IntegerAccessor::GetIntegerCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(IntegerAccessor_GetInteger_ForwardToCallback);
};

IntegerAccessorProxy::IntegerAccessorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class IntegerAccessorProxy_GetInteger_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit IntegerAccessorProxy_GetInteger_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kIntegerAccessor_GetInteger_Name,
          message_flags){}
  ~IntegerAccessorProxy_GetInteger_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<IntegerAccessorProxy_GetInteger_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kIntegerAccessor_GetInteger_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::IntegerAccessor_GetInteger_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(IntegerAccessor* impl, IntegerAccessor::GetIntegerCallback callback) {
    impl->GetInteger(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::IntegerAccessor_GetInteger_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(IntegerAccessorProxy_GetInteger_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
IntegerAccessorProxy_GetInteger_Message::kMessageTag = {};

void IntegerAccessorProxy::GetInteger(
    GetIntegerCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IntegerAccessor::GetInteger");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = IntegerAccessorProxy_GetInteger_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IntegerAccessor::Name_);
  message.set_method_name("GetInteger");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new IntegerAccessor_GetInteger_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class IntegerAccessorProxy_SetInteger_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit IntegerAccessorProxy_SetInteger_Message(
      uint32_t message_flags
      , int64_t param_data
      , Enum param_type
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kIntegerAccessor_SetInteger_Name,
          message_flags)
      , param_data_(std::move(param_data))
      , param_type_(std::move(param_type)){}
  ~IntegerAccessorProxy_SetInteger_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int64_t param_data, Enum param_type) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<IntegerAccessorProxy_SetInteger_Message>(
          kFlags
          , std::move(param_data)
          , std::move(param_type)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kIntegerAccessor_SetInteger_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::IntegerAccessor_SetInteger_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->data = param_data;
  mojo::internal::Serialize<::sample::Enum>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(IntegerAccessor* impl) {
    impl->SetInteger(
        std::move(param_data_),
        std::move(param_type_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::IntegerAccessor_SetInteger_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->data = param_data_;
  mojo::internal::Serialize<::sample::Enum>(
      param_type_, &params->type);
  }
  int64_t param_data_;
  Enum param_type_;

  DISALLOW_COPY_AND_ASSIGN(IntegerAccessorProxy_SetInteger_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
IntegerAccessorProxy_SetInteger_Message::kMessageTag = {};

void IntegerAccessorProxy::SetInteger(
    int64_t in_data, Enum in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::IntegerAccessor::SetInteger");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = IntegerAccessorProxy_SetInteger_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_data), std::move(in_type));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IntegerAccessor::Name_);
  message.set_method_name("SetInteger");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class IntegerAccessor_GetInteger_ProxyToResponder {
 public:
  static IntegerAccessor::GetIntegerCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<IntegerAccessor_GetInteger_ProxyToResponder> proxy(
        new IntegerAccessor_GetInteger_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&IntegerAccessor_GetInteger_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~IntegerAccessor_GetInteger_ProxyToResponder() {
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
  IntegerAccessor_GetInteger_ProxyToResponder(
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
        << "IntegerAccessor::GetIntegerCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int64_t in_data, Enum in_type);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(IntegerAccessor_GetInteger_ProxyToResponder);
};
class IntegerAccessor_GetInteger_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit IntegerAccessor_GetInteger_Response_Message(
      uint32_t message_flags
      , int64_t param_data
      , Enum param_type
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kIntegerAccessor_GetInteger_Name,
          message_flags)
      , param_data_(std::move(param_data))
      , param_type_(std::move(param_type)){}
  ~IntegerAccessor_GetInteger_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int64_t param_data, Enum param_type) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<IntegerAccessor_GetInteger_Response_Message>(
          kFlags
          , std::move(param_data)
          , std::move(param_type)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kIntegerAccessor_GetInteger_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::IntegerAccessor_GetInteger_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->data = param_data;
  mojo::internal::Serialize<::sample::Enum>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(IntegerAccessor::GetIntegerCallback* callback) {
    std::move(*callback).Run(
        std::move(param_data_), 
        std::move(param_type_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::IntegerAccessor_GetInteger_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->data = param_data_;
  mojo::internal::Serialize<::sample::Enum>(
      param_type_, &params->type);
  }
  int64_t param_data_;
  Enum param_type_;

  DISALLOW_COPY_AND_ASSIGN(IntegerAccessor_GetInteger_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
IntegerAccessor_GetInteger_Response_Message::kMessageTag = {};

bool IntegerAccessor_GetInteger_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::IntegerAccessor::GetIntegerCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<IntegerAccessor_GetInteger_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::IntegerAccessor_GetInteger_ResponseParams_Data* params =
      reinterpret_cast<
          internal::IntegerAccessor_GetInteger_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int64_t p_data{};
  Enum p_type{};
  IntegerAccessor_GetInteger_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_data = input_data_view.data();
  if (!input_data_view.ReadType(&p_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        IntegerAccessor::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data), 
std::move(p_type));
  return true;
}

void IntegerAccessor_GetInteger_ProxyToResponder::Run(
    int64_t in_data, Enum in_type) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = IntegerAccessor_GetInteger_Response_Message::Build(kSerialize, is_sync_, std::move(in_data), std::move(in_type));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::IntegerAccessor::GetIntegerCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(IntegerAccessor::Name_);
  message.set_method_name("GetInteger");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool IntegerAccessorStubDispatch::Accept(
    IntegerAccessor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kIntegerAccessor_GetInteger_Name: {
      break;
    }
    case internal::kIntegerAccessor_SetInteger_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IntegerAccessor::SetInteger",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            IntegerAccessorProxy_SetInteger_Message>();
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
      internal::IntegerAccessor_SetInteger_Params_Data* params =
          reinterpret_cast<internal::IntegerAccessor_SetInteger_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_data{};
      Enum p_type{};
      IntegerAccessor_SetInteger_ParamsDataView input_data_view(params, &serialization_context);
      
      p_data = input_data_view.data();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IntegerAccessor::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetInteger(
std::move(p_data), 
std::move(p_type));
      return true;
    }
  }
  return false;
}

// static
bool IntegerAccessorStubDispatch::AcceptWithResponder(
    IntegerAccessor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kIntegerAccessor_GetInteger_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::IntegerAccessor::GetInteger",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            IntegerAccessorProxy_GetInteger_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          IntegerAccessor::GetIntegerCallback callback =
              IntegerAccessor_GetInteger_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::IntegerAccessor_GetInteger_Params_Data* params =
          reinterpret_cast<
              internal::IntegerAccessor_GetInteger_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      IntegerAccessor_GetInteger_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            IntegerAccessor::Name_, 0, false);
        return false;
      }
      IntegerAccessor::GetIntegerCallback callback =
          IntegerAccessor_GetInteger_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetInteger(std::move(callback));
      return true;
    }
    case internal::kIntegerAccessor_SetInteger_Name: {
      break;
    }
  }
  return false;
}

bool IntegerAccessorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IntegerAccessor RequestValidator");

  switch (message->header()->name) {
    case internal::kIntegerAccessor_GetInteger_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IntegerAccessor_GetInteger_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kIntegerAccessor_SetInteger_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::IntegerAccessor_SetInteger_Params_Data>(
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

bool IntegerAccessorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "IntegerAccessor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kIntegerAccessor_GetInteger_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::IntegerAccessor_GetInteger_ResponseParams_Data>(
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
}  // namespace sample

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif