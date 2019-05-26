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

#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_JUMBO_H_
#endif
namespace math {
const char Calculator::Name_[] = "math.Calculator";

class Calculator_Clear_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Calculator_Clear_ForwardToCallback(
      Calculator::ClearCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Calculator::ClearCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Calculator_Clear_ForwardToCallback);
};

class Calculator_Add_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Calculator_Add_ForwardToCallback(
      Calculator::AddCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Calculator::AddCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Calculator_Add_ForwardToCallback);
};

class Calculator_Multiply_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Calculator_Multiply_ForwardToCallback(
      Calculator::MultiplyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Calculator::MultiplyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Calculator_Multiply_ForwardToCallback);
};

CalculatorProxy::CalculatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class CalculatorProxy_Clear_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CalculatorProxy_Clear_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Clear_Name,
          message_flags){}
  ~CalculatorProxy_Clear_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CalculatorProxy_Clear_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Clear_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Clear_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator* impl, Calculator::ClearCallback callback) {
    impl->Clear(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Clear_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(CalculatorProxy_Clear_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CalculatorProxy_Clear_Message::kMessageTag = {};

void CalculatorProxy::Clear(
    ClearCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::Clear");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CalculatorProxy_Clear_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Clear");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Calculator_Clear_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CalculatorProxy_Add_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CalculatorProxy_Add_Message(
      uint32_t message_flags
      , double param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Add_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~CalculatorProxy_Add_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      double param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CalculatorProxy_Add_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Add_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Add_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator* impl, Calculator::AddCallback callback) {
    impl->Add(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Add_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  double param_value_;

  DISALLOW_COPY_AND_ASSIGN(CalculatorProxy_Add_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CalculatorProxy_Add_Message::kMessageTag = {};

void CalculatorProxy::Add(
    double in_value, AddCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::Add");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CalculatorProxy_Add_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Add");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Calculator_Add_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CalculatorProxy_Multiply_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit CalculatorProxy_Multiply_Message(
      uint32_t message_flags
      , double param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Multiply_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~CalculatorProxy_Multiply_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      double param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<CalculatorProxy_Multiply_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Multiply_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Multiply_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator* impl, Calculator::MultiplyCallback callback) {
    impl->Multiply(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Multiply_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  double param_value_;

  DISALLOW_COPY_AND_ASSIGN(CalculatorProxy_Multiply_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
CalculatorProxy_Multiply_Message::kMessageTag = {};

void CalculatorProxy::Multiply(
    double in_value, MultiplyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::Multiply");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = CalculatorProxy_Multiply_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Multiply");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Calculator_Multiply_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Calculator_Clear_ProxyToResponder {
 public:
  static Calculator::ClearCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Calculator_Clear_ProxyToResponder> proxy(
        new Calculator_Clear_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Calculator_Clear_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Calculator_Clear_ProxyToResponder() {
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
  Calculator_Clear_ProxyToResponder(
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
        << "Calculator::ClearCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Clear_ProxyToResponder);
};
class Calculator_Clear_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Calculator_Clear_Response_Message(
      uint32_t message_flags
      , double param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Clear_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~Calculator_Clear_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      double param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Calculator_Clear_Response_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Clear_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Clear_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator::ClearCallback* callback) {
    std::move(*callback).Run(
        std::move(param_value_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Clear_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  double param_value_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Clear_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Calculator_Clear_Response_Message::kMessageTag = {};

bool Calculator_Clear_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::ClearCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Calculator_Clear_Response_Message>();
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
  internal::Calculator_Clear_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Calculator_Clear_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_value{};
  Calculator_Clear_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_value = input_data_view.value();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Calculator::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_value));
  return true;
}

void Calculator_Clear_ProxyToResponder::Run(
    double in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Calculator_Clear_Response_Message::Build(kSerialize, is_sync_, std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::ClearCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Clear");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Calculator_Add_ProxyToResponder {
 public:
  static Calculator::AddCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Calculator_Add_ProxyToResponder> proxy(
        new Calculator_Add_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Calculator_Add_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Calculator_Add_ProxyToResponder() {
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
  Calculator_Add_ProxyToResponder(
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
        << "Calculator::AddCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Add_ProxyToResponder);
};
class Calculator_Add_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Calculator_Add_Response_Message(
      uint32_t message_flags
      , double param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Add_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~Calculator_Add_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      double param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Calculator_Add_Response_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Add_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Add_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator::AddCallback* callback) {
    std::move(*callback).Run(
        std::move(param_value_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Add_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  double param_value_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Add_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Calculator_Add_Response_Message::kMessageTag = {};

bool Calculator_Add_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::AddCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Calculator_Add_Response_Message>();
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
  internal::Calculator_Add_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Calculator_Add_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_value{};
  Calculator_Add_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_value = input_data_view.value();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Calculator::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_value));
  return true;
}

void Calculator_Add_ProxyToResponder::Run(
    double in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Calculator_Add_Response_Message::Build(kSerialize, is_sync_, std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::AddCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Add");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Calculator_Multiply_ProxyToResponder {
 public:
  static Calculator::MultiplyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Calculator_Multiply_ProxyToResponder> proxy(
        new Calculator_Multiply_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Calculator_Multiply_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Calculator_Multiply_ProxyToResponder() {
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
  Calculator_Multiply_ProxyToResponder(
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
        << "Calculator::MultiplyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Multiply_ProxyToResponder);
};
class Calculator_Multiply_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Calculator_Multiply_Response_Message(
      uint32_t message_flags
      , double param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kCalculator_Multiply_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~Calculator_Multiply_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      double param_value) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Calculator_Multiply_Response_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kCalculator_Multiply_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::math::internal::Calculator_Multiply_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Calculator::MultiplyCallback* callback) {
    std::move(*callback).Run(
        std::move(param_value_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::math::internal::Calculator_Multiply_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  double param_value_;

  DISALLOW_COPY_AND_ASSIGN(Calculator_Multiply_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Calculator_Multiply_Response_Message::kMessageTag = {};

bool Calculator_Multiply_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Calculator::MultiplyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Calculator_Multiply_Response_Message>();
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
  internal::Calculator_Multiply_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Calculator_Multiply_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_value{};
  Calculator_Multiply_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_value = input_data_view.value();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Calculator::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_value));
  return true;
}

void Calculator_Multiply_ProxyToResponder::Run(
    double in_value) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Calculator_Multiply_Response_Message::Build(kSerialize, is_sync_, std::move(in_value));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::MultiplyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Calculator::Name_);
  message.set_method_name("Multiply");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CalculatorStubDispatch::Accept(
    Calculator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCalculator_Clear_Name: {
      break;
    }
    case internal::kCalculator_Add_Name: {
      break;
    }
    case internal::kCalculator_Multiply_Name: {
      break;
    }
  }
  return false;
}

// static
bool CalculatorStubDispatch::AcceptWithResponder(
    Calculator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCalculator_Clear_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::Clear",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CalculatorProxy_Clear_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Calculator::ClearCallback callback =
              Calculator_Clear_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Calculator_Clear_Params_Data* params =
          reinterpret_cast<
              internal::Calculator_Clear_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Calculator_Clear_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Calculator::Name_, 0, false);
        return false;
      }
      Calculator::ClearCallback callback =
          Calculator_Clear_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clear(std::move(callback));
      return true;
    }
    case internal::kCalculator_Add_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::Add",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CalculatorProxy_Add_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Calculator::AddCallback callback =
              Calculator_Add_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Calculator_Add_Params_Data* params =
          reinterpret_cast<
              internal::Calculator_Add_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_value{};
      Calculator_Add_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Calculator::Name_, 1, false);
        return false;
      }
      Calculator::AddCallback callback =
          Calculator_Add_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Add(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kCalculator_Multiply_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Calculator::Multiply",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            CalculatorProxy_Multiply_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Calculator::MultiplyCallback callback =
              Calculator_Multiply_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Calculator_Multiply_Params_Data* params =
          reinterpret_cast<
              internal::Calculator_Multiply_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_value{};
      Calculator_Multiply_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Calculator::Name_, 2, false);
        return false;
      }
      Calculator::MultiplyCallback callback =
          Calculator_Multiply_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Multiply(
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CalculatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Calculator RequestValidator");

  switch (message->header()->name) {
    case internal::kCalculator_Clear_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Clear_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCalculator_Add_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Add_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCalculator_Multiply_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Multiply_Params_Data>(
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

bool CalculatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Calculator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCalculator_Clear_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Clear_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCalculator_Add_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Add_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCalculator_Multiply_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Calculator_Multiply_ResponseParams_Data>(
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
}  // namespace math

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif