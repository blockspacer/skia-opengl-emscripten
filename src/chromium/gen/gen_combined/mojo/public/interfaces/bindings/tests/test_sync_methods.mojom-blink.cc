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

#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_JUMBO_H_
#endif
namespace mojo {
namespace test {
namespace blink {
const char TestSyncCodeGeneration::Name_[] = "mojo.test.TestSyncCodeGeneration";
bool TestSyncCodeGeneration::NoInput(int32_t* out_result) {
  NOTREACHED();
  return false;
}
bool TestSyncCodeGeneration::NoOutput(int32_t value) {
  NOTREACHED();
  return false;
}
bool TestSyncCodeGeneration::NoInOut() {
  NOTREACHED();
  return false;
}
bool TestSyncCodeGeneration::HaveInOut(int32_t value1, int32_t value2, int32_t* out_result1, int32_t* out_result2) {
  NOTREACHED();
  return false;
}
class TestSyncCodeGeneration_NoInput_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoInput_HandleSyncResponse(
      bool* result, int32_t* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_result_;DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInput_HandleSyncResponse);
};

class TestSyncCodeGeneration_NoInput_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoInput_ForwardToCallback(
      TestSyncCodeGeneration::NoInputCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncCodeGeneration::NoInputCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInput_ForwardToCallback);
};
class TestSyncCodeGeneration_NoOutput_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoOutput_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoOutput_HandleSyncResponse);
};

class TestSyncCodeGeneration_NoOutput_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoOutput_ForwardToCallback(
      TestSyncCodeGeneration::NoOutputCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncCodeGeneration::NoOutputCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoOutput_ForwardToCallback);
};
class TestSyncCodeGeneration_NoInOut_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoInOut_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInOut_HandleSyncResponse);
};

class TestSyncCodeGeneration_NoInOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_NoInOut_ForwardToCallback(
      TestSyncCodeGeneration::NoInOutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncCodeGeneration::NoInOutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInOut_ForwardToCallback);
};
class TestSyncCodeGeneration_HaveInOut_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_HaveInOut_HandleSyncResponse(
      bool* result, int32_t* out_result1, int32_t* out_result2)
      : result_(result), out_result1_(out_result1), out_result2_(out_result2) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_result1_;
  int32_t* out_result2_;DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_HaveInOut_HandleSyncResponse);
};

class TestSyncCodeGeneration_HaveInOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncCodeGeneration_HaveInOut_ForwardToCallback(
      TestSyncCodeGeneration::HaveInOutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncCodeGeneration::HaveInOutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_HaveInOut_ForwardToCallback);
};

TestSyncCodeGenerationProxy::TestSyncCodeGenerationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class TestSyncCodeGenerationProxy_NoInput_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGenerationProxy_NoInput_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoInput_Name,
          message_flags){}
  ~TestSyncCodeGenerationProxy_NoInput_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGenerationProxy_NoInput_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoInput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoInput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration* impl, TestSyncCodeGeneration::NoInputCallback callback) {
    impl->NoInput(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoInput_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGenerationProxy_NoInput_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGenerationProxy_NoInput_Message::kMessageTag = {};
bool TestSyncCodeGenerationProxy::NoInput(
    int32_t* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInput");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoInput_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInput");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoInput_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncCodeGenerationProxy::NoInput(
    NoInputCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInput");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoInput_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInput");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoInput_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncCodeGenerationProxy_NoOutput_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGenerationProxy_NoOutput_Message(
      uint32_t message_flags
      , int32_t param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoOutput_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~TestSyncCodeGenerationProxy_NoOutput_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGenerationProxy_NoOutput_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoOutput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoOutput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration* impl, TestSyncCodeGeneration::NoOutputCallback callback) {
    impl->NoOutput(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoOutput_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  int32_t param_value_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGenerationProxy_NoOutput_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGenerationProxy_NoOutput_Message::kMessageTag = {};
bool TestSyncCodeGenerationProxy::NoOutput(
    int32_t param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoOutput");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoOutput_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoOutput");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoOutput_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncCodeGenerationProxy::NoOutput(
    int32_t in_value, NoOutputCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoOutput");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoOutput_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoOutput");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoOutput_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncCodeGenerationProxy_NoInOut_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGenerationProxy_NoInOut_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoInOut_Name,
          message_flags){}
  ~TestSyncCodeGenerationProxy_NoInOut_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGenerationProxy_NoInOut_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoInOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoInOut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration* impl, TestSyncCodeGeneration::NoInOutCallback callback) {
    impl->NoInOut(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoInOut_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGenerationProxy_NoInOut_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGenerationProxy_NoInOut_Message::kMessageTag = {};
bool TestSyncCodeGenerationProxy::NoInOut(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoInOut_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInOut");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoInOut_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncCodeGenerationProxy::NoInOut(
    NoInOutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_NoInOut_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInOut");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_NoInOut_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncCodeGenerationProxy_HaveInOut_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGenerationProxy_HaveInOut_Message(
      uint32_t message_flags
      , int32_t param_value1
      , int32_t param_value2
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_HaveInOut_Name,
          message_flags)
      , param_value1_(std::move(param_value1))
      , param_value2_(std::move(param_value2)){}
  ~TestSyncCodeGenerationProxy_HaveInOut_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value1, int32_t param_value2) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGenerationProxy_HaveInOut_Message>(
          kFlags
          , std::move(param_value1)
          , std::move(param_value2)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_HaveInOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_HaveInOut_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value1 = param_value1;
  params->value2 = param_value2;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration* impl, TestSyncCodeGeneration::HaveInOutCallback callback) {
    impl->HaveInOut(
        std::move(param_value1_),
        std::move(param_value2_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_HaveInOut_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value1 = param_value1_;
  params->value2 = param_value2_;
  }
  int32_t param_value1_;
  int32_t param_value2_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGenerationProxy_HaveInOut_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGenerationProxy_HaveInOut_Message::kMessageTag = {};
bool TestSyncCodeGenerationProxy::HaveInOut(
    int32_t param_value1, int32_t param_value2, int32_t* out_param_result1, int32_t* out_param_result2) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::HaveInOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_HaveInOut_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_value1), std::move(param_value2));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("HaveInOut");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_HaveInOut_HandleSyncResponse(
          &result, out_param_result1, out_param_result2));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncCodeGenerationProxy::HaveInOut(
    int32_t in_value1, int32_t in_value2, HaveInOutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::HaveInOut");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncCodeGenerationProxy_HaveInOut_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value1), std::move(in_value2));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("HaveInOut");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncCodeGeneration_HaveInOut_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncCodeGeneration_NoInput_ProxyToResponder {
 public:
  static TestSyncCodeGeneration::NoInputCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncCodeGeneration_NoInput_ProxyToResponder> proxy(
        new TestSyncCodeGeneration_NoInput_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncCodeGeneration_NoInput_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncCodeGeneration_NoInput_ProxyToResponder() {
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
  TestSyncCodeGeneration_NoInput_ProxyToResponder(
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
        << "TestSyncCodeGeneration::NoInputCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInput_ProxyToResponder);
};
class TestSyncCodeGeneration_NoInput_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGeneration_NoInput_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoInput_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~TestSyncCodeGeneration_NoInput_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGeneration_NoInput_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoInput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration::NoInputCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }


  void HandleSyncResponse(

      int32_t* out_result) {

    *out_result = std::move(param_result_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInput_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGeneration_NoInput_Response_Message::kMessageTag = {};

bool TestSyncCodeGeneration_NoInput_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInputCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoInput_Response_Message>();
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
  internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSyncCodeGeneration_NoInput_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void TestSyncCodeGeneration_NoInput_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncCodeGeneration_NoInput_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInputCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInput");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncCodeGeneration_NoInput_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoInput_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_result_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSyncCodeGeneration_NoInput_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 0, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSyncCodeGeneration_NoOutput_ProxyToResponder {
 public:
  static TestSyncCodeGeneration::NoOutputCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncCodeGeneration_NoOutput_ProxyToResponder> proxy(
        new TestSyncCodeGeneration_NoOutput_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncCodeGeneration_NoOutput_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncCodeGeneration_NoOutput_ProxyToResponder() {
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
  TestSyncCodeGeneration_NoOutput_ProxyToResponder(
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
        << "TestSyncCodeGeneration::NoOutputCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoOutput_ProxyToResponder);
};
class TestSyncCodeGeneration_NoOutput_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGeneration_NoOutput_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoOutput_Name,
          message_flags){}
  ~TestSyncCodeGeneration_NoOutput_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGeneration_NoOutput_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoOutput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration::NoOutputCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoOutput_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGeneration_NoOutput_Response_Message::kMessageTag = {};

bool TestSyncCodeGeneration_NoOutput_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoOutputCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoOutput_Response_Message>();
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
  internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncCodeGeneration_NoOutput_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TestSyncCodeGeneration_NoOutput_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncCodeGeneration_NoOutput_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoOutputCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoOutput");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncCodeGeneration_NoOutput_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoOutput_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncCodeGeneration_NoOutput_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 1, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSyncCodeGeneration_NoInOut_ProxyToResponder {
 public:
  static TestSyncCodeGeneration::NoInOutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncCodeGeneration_NoInOut_ProxyToResponder> proxy(
        new TestSyncCodeGeneration_NoInOut_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncCodeGeneration_NoInOut_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncCodeGeneration_NoInOut_ProxyToResponder() {
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
  TestSyncCodeGeneration_NoInOut_ProxyToResponder(
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
        << "TestSyncCodeGeneration::NoInOutCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInOut_ProxyToResponder);
};
class TestSyncCodeGeneration_NoInOut_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGeneration_NoInOut_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_NoInOut_Name,
          message_flags){}
  ~TestSyncCodeGeneration_NoInOut_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGeneration_NoInOut_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_NoInOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration::NoInOutCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_NoInOut_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGeneration_NoInOut_Response_Message::kMessageTag = {};

bool TestSyncCodeGeneration_NoInOut_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInOutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoInOut_Response_Message>();
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
  internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncCodeGeneration_NoInOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TestSyncCodeGeneration_NoInOut_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncCodeGeneration_NoInOut_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInOutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("NoInOut");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncCodeGeneration_NoInOut_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_NoInOut_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncCodeGeneration_NoInOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 2, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSyncCodeGeneration_HaveInOut_ProxyToResponder {
 public:
  static TestSyncCodeGeneration::HaveInOutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncCodeGeneration_HaveInOut_ProxyToResponder> proxy(
        new TestSyncCodeGeneration_HaveInOut_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncCodeGeneration_HaveInOut_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncCodeGeneration_HaveInOut_ProxyToResponder() {
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
  TestSyncCodeGeneration_HaveInOut_ProxyToResponder(
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
        << "TestSyncCodeGeneration::HaveInOutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result1, int32_t in_result2);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_HaveInOut_ProxyToResponder);
};
class TestSyncCodeGeneration_HaveInOut_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncCodeGeneration_HaveInOut_Response_Message(
      uint32_t message_flags
      , int32_t param_result1
      , int32_t param_result2
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncCodeGeneration_HaveInOut_Name,
          message_flags)
      , param_result1_(std::move(param_result1))
      , param_result2_(std::move(param_result2)){}
  ~TestSyncCodeGeneration_HaveInOut_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result1, int32_t param_result2) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncCodeGeneration_HaveInOut_Response_Message>(
          kFlags
          , std::move(param_result1)
          , std::move(param_result2)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncCodeGeneration_HaveInOut_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result1 = param_result1;
  params->result2 = param_result2;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncCodeGeneration::HaveInOutCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result1_), 
        std::move(param_result2_));
  }


  void HandleSyncResponse(

      int32_t* out_result1, 
      int32_t* out_result2) {

    *out_result1 = std::move(param_result1_);

    *out_result2 = std::move(param_result2_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result1 = param_result1_;
  params->result2 = param_result2_;
  }
  int32_t param_result1_;
  int32_t param_result2_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncCodeGeneration_HaveInOut_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncCodeGeneration_HaveInOut_Response_Message::kMessageTag = {};

bool TestSyncCodeGeneration_HaveInOut_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::HaveInOutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_HaveInOut_Response_Message>();
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
  internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result1{};
  int32_t p_result2{};
  TestSyncCodeGeneration_HaveInOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result1 = input_data_view.result1();
  p_result2 = input_data_view.result2();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result1), 
std::move(p_result2));
  return true;
}

void TestSyncCodeGeneration_HaveInOut_ProxyToResponder::Run(
    int32_t in_result1, int32_t in_result2) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncCodeGeneration_HaveInOut_Response_Message::Build(kSerialize, is_sync_, std::move(in_result1), std::move(in_result2));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::HaveInOutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncCodeGeneration::Name_);
  message.set_method_name("HaveInOut");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncCodeGeneration_HaveInOut_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncCodeGeneration_HaveInOut_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_result1_, 
          out_result2_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result1{};
  int32_t p_result2{};
  TestSyncCodeGeneration_HaveInOut_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result1 = input_data_view.result1();
  p_result2 = input_data_view.result2();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncCodeGeneration::Name_, 3, true);
    return false;
  }
  *out_result1_ = std::move(p_result1);
  *out_result2_ = std::move(p_result2);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool TestSyncCodeGenerationStubDispatch::Accept(
    TestSyncCodeGeneration* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTestSyncCodeGeneration_NoInput_Name: {
      break;
    }
    case internal::kTestSyncCodeGeneration_NoOutput_Name: {
      break;
    }
    case internal::kTestSyncCodeGeneration_NoInOut_Name: {
      break;
    }
    case internal::kTestSyncCodeGeneration_HaveInOut_Name: {
      break;
    }
  }
  return false;
}

// static
bool TestSyncCodeGenerationStubDispatch::AcceptWithResponder(
    TestSyncCodeGeneration* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTestSyncCodeGeneration_NoInput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInput",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncCodeGenerationProxy_NoInput_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncCodeGeneration::NoInputCallback callback =
              TestSyncCodeGeneration_NoInput_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncCodeGeneration_NoInput_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncCodeGeneration_NoInput_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TestSyncCodeGeneration_NoInput_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncCodeGeneration::Name_, 0, false);
        return false;
      }
      TestSyncCodeGeneration::NoInputCallback callback =
          TestSyncCodeGeneration_NoInput_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NoInput(std::move(callback));
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoOutput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoOutput",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncCodeGenerationProxy_NoOutput_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncCodeGeneration::NoOutputCallback callback =
              TestSyncCodeGeneration_NoOutput_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncCodeGeneration_NoOutput_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncCodeGeneration_NoOutput_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value{};
      TestSyncCodeGeneration_NoOutput_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncCodeGeneration::Name_, 1, false);
        return false;
      }
      TestSyncCodeGeneration::NoOutputCallback callback =
          TestSyncCodeGeneration_NoOutput_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NoOutput(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoInOut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::NoInOut",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncCodeGenerationProxy_NoInOut_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncCodeGeneration::NoInOutCallback callback =
              TestSyncCodeGeneration_NoInOut_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncCodeGeneration_NoInOut_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncCodeGeneration_NoInOut_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TestSyncCodeGeneration_NoInOut_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncCodeGeneration::Name_, 2, false);
        return false;
      }
      TestSyncCodeGeneration::NoInOutCallback callback =
          TestSyncCodeGeneration_NoInOut_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NoInOut(std::move(callback));
      return true;
    }
    case internal::kTestSyncCodeGeneration_HaveInOut_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncCodeGeneration::HaveInOut",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncCodeGenerationProxy_HaveInOut_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncCodeGeneration::HaveInOutCallback callback =
              TestSyncCodeGeneration_HaveInOut_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncCodeGeneration_HaveInOut_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncCodeGeneration_HaveInOut_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value1{};
      int32_t p_value2{};
      TestSyncCodeGeneration_HaveInOut_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value1 = input_data_view.value1();
      p_value2 = input_data_view.value2();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncCodeGeneration::Name_, 3, false);
        return false;
      }
      TestSyncCodeGeneration::HaveInOutCallback callback =
          TestSyncCodeGeneration_HaveInOut_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HaveInOut(
std::move(p_value1), 
std::move(p_value2), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TestSyncCodeGenerationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSyncCodeGeneration RequestValidator");

  switch (message->header()->name) {
    case internal::kTestSyncCodeGeneration_NoInput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoInput_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoOutput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoOutput_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoInOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoInOut_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_HaveInOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_HaveInOut_Params_Data>(
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

bool TestSyncCodeGenerationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSyncCodeGeneration ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTestSyncCodeGeneration_NoInput_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoOutput_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_NoInOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncCodeGeneration_HaveInOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data>(
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
const char TestSync::Name_[] = "mojo.test.TestSync";
bool TestSync::Ping() {
  NOTREACHED();
  return false;
}
bool TestSync::Echo(int32_t value, int32_t* out_result) {
  NOTREACHED();
  return false;
}
class TestSync_Ping_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSync_Ping_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(TestSync_Ping_HandleSyncResponse);
};

class TestSync_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSync_Ping_ForwardToCallback(
      TestSync::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSync::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSync_Ping_ForwardToCallback);
};
class TestSync_Echo_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSync_Echo_HandleSyncResponse(
      bool* result, int32_t* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_result_;DISALLOW_COPY_AND_ASSIGN(TestSync_Echo_HandleSyncResponse);
};

class TestSync_Echo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSync_Echo_ForwardToCallback(
      TestSync::EchoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSync::EchoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSync_Echo_ForwardToCallback);
};

class TestSync_AsyncEcho_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSync_AsyncEcho_ForwardToCallback(
      TestSync::AsyncEchoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSync::AsyncEchoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSync_AsyncEcho_ForwardToCallback);
};

TestSyncProxy::TestSyncProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class TestSyncProxy_Ping_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncProxy_Ping_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_Ping_Name,
          message_flags){}
  ~TestSyncProxy_Ping_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncProxy_Ping_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync* impl, TestSync::PingCallback callback) {
    impl->Ping(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_Ping_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncProxy_Ping_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncProxy_Ping_Message::kMessageTag = {};
bool TestSyncProxy::Ping(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncProxy_Ping_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Ping");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSync_Ping_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncProxy_Ping_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Ping");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSync_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncProxy_Echo_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncProxy_Echo_Message(
      uint32_t message_flags
      , int32_t param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_Echo_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~TestSyncProxy_Echo_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncProxy_Echo_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_Echo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_Echo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync* impl, TestSync::EchoCallback callback) {
    impl->Echo(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_Echo_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  int32_t param_value_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncProxy_Echo_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncProxy_Echo_Message::kMessageTag = {};
bool TestSyncProxy::Echo(
    int32_t param_value, int32_t* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::Echo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncProxy_Echo_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Echo");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSync_Echo_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncProxy::Echo(
    int32_t in_value, EchoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::Echo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncProxy_Echo_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Echo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSync_Echo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncProxy_AsyncEcho_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncProxy_AsyncEcho_Message(
      uint32_t message_flags
      , int32_t param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_AsyncEcho_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~TestSyncProxy_AsyncEcho_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncProxy_AsyncEcho_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_AsyncEcho_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_AsyncEcho_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync* impl, TestSync::AsyncEchoCallback callback) {
    impl->AsyncEcho(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_AsyncEcho_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  int32_t param_value_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncProxy_AsyncEcho_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncProxy_AsyncEcho_Message::kMessageTag = {};

void TestSyncProxy::AsyncEcho(
    int32_t in_value, AsyncEchoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::AsyncEcho");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncProxy_AsyncEcho_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("AsyncEcho");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSync_AsyncEcho_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSync_Ping_ProxyToResponder {
 public:
  static TestSync::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSync_Ping_ProxyToResponder> proxy(
        new TestSync_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSync_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSync_Ping_ProxyToResponder() {
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
  TestSync_Ping_ProxyToResponder(
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
        << "TestSync::PingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(TestSync_Ping_ProxyToResponder);
};
class TestSync_Ping_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSync_Ping_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_Ping_Name,
          message_flags){}
  ~TestSync_Ping_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSync_Ping_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync::PingCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_Ping_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSync_Ping_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSync_Ping_Response_Message::kMessageTag = {};

bool TestSync_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSync_Ping_Response_Message>();
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
  internal::TestSync_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSync_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSync_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSync::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TestSync_Ping_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSync_Ping_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::PingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Ping");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSync_Ping_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSync_Ping_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSync_Ping_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSync_Ping_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSync_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSync::Name_, 0, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSync_Echo_ProxyToResponder {
 public:
  static TestSync::EchoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSync_Echo_ProxyToResponder> proxy(
        new TestSync_Echo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSync_Echo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSync_Echo_ProxyToResponder() {
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
  TestSync_Echo_ProxyToResponder(
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
        << "TestSync::EchoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSync_Echo_ProxyToResponder);
};
class TestSync_Echo_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSync_Echo_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_Echo_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~TestSync_Echo_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSync_Echo_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_Echo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_Echo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync::EchoCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }


  void HandleSyncResponse(

      int32_t* out_result) {

    *out_result = std::move(param_result_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_Echo_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(TestSync_Echo_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSync_Echo_Response_Message::kMessageTag = {};

bool TestSync_Echo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::EchoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSync_Echo_Response_Message>();
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
  internal::TestSync_Echo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSync_Echo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSync_Echo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSync::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void TestSync_Echo_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSync_Echo_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::EchoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("Echo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSync_Echo_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSync_Echo_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_result_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSync_Echo_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSync_Echo_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSync_Echo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSync::Name_, 1, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSync_AsyncEcho_ProxyToResponder {
 public:
  static TestSync::AsyncEchoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSync_AsyncEcho_ProxyToResponder> proxy(
        new TestSync_AsyncEcho_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSync_AsyncEcho_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSync_AsyncEcho_ProxyToResponder() {
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
  TestSync_AsyncEcho_ProxyToResponder(
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
        << "TestSync::AsyncEchoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSync_AsyncEcho_ProxyToResponder);
};
class TestSync_AsyncEcho_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSync_AsyncEcho_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSync_AsyncEcho_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~TestSync_AsyncEcho_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSync_AsyncEcho_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSync_AsyncEcho_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSync_AsyncEcho_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSync::AsyncEchoCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSync_AsyncEcho_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(TestSync_AsyncEcho_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSync_AsyncEcho_Response_Message::kMessageTag = {};

bool TestSync_AsyncEcho_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSync::AsyncEchoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSync_AsyncEcho_Response_Message>();
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
  internal::TestSync_AsyncEcho_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSync_AsyncEcho_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSync_AsyncEcho_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSync::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void TestSync_AsyncEcho_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSync_AsyncEcho_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::AsyncEchoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSync::Name_);
  message.set_method_name("AsyncEcho");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TestSyncStubDispatch::Accept(
    TestSync* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTestSync_Ping_Name: {
      break;
    }
    case internal::kTestSync_Echo_Name: {
      break;
    }
    case internal::kTestSync_AsyncEcho_Name: {
      break;
    }
  }
  return false;
}

// static
bool TestSyncStubDispatch::AcceptWithResponder(
    TestSync* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTestSync_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncProxy_Ping_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSync::PingCallback callback =
              TestSync_Ping_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSync_Ping_Params_Data* params =
          reinterpret_cast<
              internal::TestSync_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TestSync_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSync::Name_, 0, false);
        return false;
      }
      TestSync::PingCallback callback =
          TestSync_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(std::move(callback));
      return true;
    }
    case internal::kTestSync_Echo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::Echo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncProxy_Echo_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSync::EchoCallback callback =
              TestSync_Echo_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSync_Echo_Params_Data* params =
          reinterpret_cast<
              internal::TestSync_Echo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value{};
      TestSync_Echo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSync::Name_, 1, false);
        return false;
      }
      TestSync::EchoCallback callback =
          TestSync_Echo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Echo(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kTestSync_AsyncEcho_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSync::AsyncEcho",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncProxy_AsyncEcho_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSync::AsyncEchoCallback callback =
              TestSync_AsyncEcho_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSync_AsyncEcho_Params_Data* params =
          reinterpret_cast<
              internal::TestSync_AsyncEcho_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value{};
      TestSync_AsyncEcho_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSync::Name_, 2, false);
        return false;
      }
      TestSync::AsyncEchoCallback callback =
          TestSync_AsyncEcho_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AsyncEcho(
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TestSyncRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSync RequestValidator");

  switch (message->header()->name) {
    case internal::kTestSync_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSync_Echo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_Echo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSync_AsyncEcho_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_AsyncEcho_Params_Data>(
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

bool TestSyncResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSync ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTestSync_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_Ping_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSync_Echo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_Echo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSync_AsyncEcho_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSync_AsyncEcho_ResponseParams_Data>(
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
const char TestSyncMaster::Name_[] = "mojo.test.TestSyncMaster";
bool TestSyncMaster::Ping() {
  NOTREACHED();
  return false;
}
bool TestSyncMaster::Echo(int32_t value, int32_t* out_result) {
  NOTREACHED();
  return false;
}
class TestSyncMaster_Ping_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncMaster_Ping_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Ping_HandleSyncResponse);
};

class TestSyncMaster_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncMaster_Ping_ForwardToCallback(
      TestSyncMaster::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncMaster::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Ping_ForwardToCallback);
};
class TestSyncMaster_Echo_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  TestSyncMaster_Echo_HandleSyncResponse(
      bool* result, int32_t* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_result_;DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Echo_HandleSyncResponse);
};

class TestSyncMaster_Echo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncMaster_Echo_ForwardToCallback(
      TestSyncMaster::EchoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncMaster::EchoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Echo_ForwardToCallback);
};

class TestSyncMaster_AsyncEcho_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestSyncMaster_AsyncEcho_ForwardToCallback(
      TestSyncMaster::AsyncEchoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestSyncMaster::AsyncEchoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_AsyncEcho_ForwardToCallback);
};

TestSyncMasterProxy::TestSyncMasterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class TestSyncMasterProxy_Ping_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMasterProxy_Ping_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_Ping_Name,
          message_flags){}
  ~TestSyncMasterProxy_Ping_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMasterProxy_Ping_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster* impl, TestSyncMaster::PingCallback callback) {
    impl->Ping(std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_Ping_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncMasterProxy_Ping_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMasterProxy_Ping_Message::kMessageTag = {};
bool TestSyncMasterProxy::Ping(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncMasterProxy_Ping_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Ping");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncMaster_Ping_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncMasterProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncMasterProxy_Ping_Message::Build(
      kSerialize, kExpectsResponse, kIsSync);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Ping");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncMaster_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncMasterProxy_Echo_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMasterProxy_Echo_Message(
      uint32_t message_flags
      , int32_t param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_Echo_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~TestSyncMasterProxy_Echo_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMasterProxy_Echo_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_Echo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_Echo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster* impl, TestSyncMaster::EchoCallback callback) {
    impl->Echo(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_Echo_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  int32_t param_value_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMasterProxy_Echo_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMasterProxy_Echo_Message::kMessageTag = {};
bool TestSyncMasterProxy::Echo(
    int32_t param_value, int32_t* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::Echo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncMasterProxy_Echo_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(param_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Echo");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncMaster_Echo_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void TestSyncMasterProxy::Echo(
    int32_t in_value, EchoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::Echo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncMasterProxy_Echo_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Echo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncMaster_Echo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestSyncMasterProxy_AsyncEcho_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMasterProxy_AsyncEcho_Message(
      uint32_t message_flags
      , int32_t param_value
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_AsyncEcho_Name,
          message_flags)
      , param_value_(std::move(param_value)){}
  ~TestSyncMasterProxy_AsyncEcho_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      int32_t param_value) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMasterProxy_AsyncEcho_Message>(
          kFlags
          , std::move(param_value)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_AsyncEcho_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_AsyncEcho_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = param_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster* impl, TestSyncMaster::AsyncEchoCallback callback) {
    impl->AsyncEcho(
        std::move(param_value_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_AsyncEcho_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->value = param_value_;
  }
  int32_t param_value_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMasterProxy_AsyncEcho_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMasterProxy_AsyncEcho_Message::kMessageTag = {};

void TestSyncMasterProxy::AsyncEcho(
    int32_t in_value, AsyncEchoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::AsyncEcho");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = TestSyncMasterProxy_AsyncEcho_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_value));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("AsyncEcho");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestSyncMaster_AsyncEcho_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TestSyncMasterProxy::SendRemote(
    mojo::PendingAssociatedRemote<TestSync> in_remote) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::SendRemote");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestSyncMaster_SendRemote_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_SendRemote_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo::test::TestSyncAssociatedPtrInfoDataView>(
      in_remote, &params->remote, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->remote),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid remote in TestSyncMaster.SendRemote request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("SendRemote");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void TestSyncMasterProxy::SendReceiver(
    mojo::PendingAssociatedReceiver<TestSync> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::SendReceiver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestSyncMaster_SendReceiver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_SendReceiver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo::test::TestSyncAssociatedRequestDataView>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid receiver in TestSyncMaster.SendReceiver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("SendReceiver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class TestSyncMaster_Ping_ProxyToResponder {
 public:
  static TestSyncMaster::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncMaster_Ping_ProxyToResponder> proxy(
        new TestSyncMaster_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncMaster_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncMaster_Ping_ProxyToResponder() {
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
  TestSyncMaster_Ping_ProxyToResponder(
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
        << "TestSyncMaster::PingCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Ping_ProxyToResponder);
};
class TestSyncMaster_Ping_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMaster_Ping_Response_Message(
      uint32_t message_flags
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_Ping_Name,
          message_flags){}
  ~TestSyncMaster_Ping_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMaster_Ping_Response_Message>(
          kFlags
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster::PingCallback* callback) {
    std::move(*callback).Run();
  }


  void HandleSyncResponse(
) {

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_Ping_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  }

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Ping_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMaster_Ping_Response_Message::kMessageTag = {};

bool TestSyncMaster_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncMaster_Ping_Response_Message>();
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
  internal::TestSyncMaster_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncMaster_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncMaster_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncMaster::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void TestSyncMaster_Ping_ProxyToResponder::Run(
    ) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncMaster_Ping_Response_Message::Build(kSerialize, is_sync_);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::PingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Ping");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncMaster_Ping_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncMaster_Ping_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse();
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncMaster_Ping_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncMaster_Ping_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  TestSyncMaster_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncMaster::Name_, 0, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSyncMaster_Echo_ProxyToResponder {
 public:
  static TestSyncMaster::EchoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncMaster_Echo_ProxyToResponder> proxy(
        new TestSyncMaster_Echo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncMaster_Echo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncMaster_Echo_ProxyToResponder() {
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
  TestSyncMaster_Echo_ProxyToResponder(
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
        << "TestSyncMaster::EchoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Echo_ProxyToResponder);
};
class TestSyncMaster_Echo_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMaster_Echo_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_Echo_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~TestSyncMaster_Echo_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMaster_Echo_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_Echo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_Echo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster::EchoCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }


  void HandleSyncResponse(

      int32_t* out_result) {

    *out_result = std::move(param_result_);

  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_Echo_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_Echo_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMaster_Echo_Response_Message::kMessageTag = {};

bool TestSyncMaster_Echo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::EchoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncMaster_Echo_Response_Message>();
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
  internal::TestSyncMaster_Echo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncMaster_Echo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSyncMaster_Echo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncMaster::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void TestSyncMaster_Echo_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncMaster_Echo_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::EchoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("Echo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool TestSyncMaster_Echo_HandleSyncResponse::Accept(
    mojo::Message* message) {
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncMaster_Echo_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was built using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      context->HandleSyncResponse(
          out_result_);
      *result_ = true;
      mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
          message);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::TestSyncMaster_Echo_ResponseParams_Data* params =
      reinterpret_cast<internal::TestSyncMaster_Echo_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSyncMaster_Echo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncMaster::Name_, 1, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class TestSyncMaster_AsyncEcho_ProxyToResponder {
 public:
  static TestSyncMaster::AsyncEchoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestSyncMaster_AsyncEcho_ProxyToResponder> proxy(
        new TestSyncMaster_AsyncEcho_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestSyncMaster_AsyncEcho_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestSyncMaster_AsyncEcho_ProxyToResponder() {
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
  TestSyncMaster_AsyncEcho_ProxyToResponder(
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
        << "TestSyncMaster::AsyncEchoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_AsyncEcho_ProxyToResponder);
};
class TestSyncMaster_AsyncEcho_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit TestSyncMaster_AsyncEcho_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kTestSyncMaster_AsyncEcho_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~TestSyncMaster_AsyncEcho_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<TestSyncMaster_AsyncEcho_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kTestSyncMaster_AsyncEcho_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestSyncMaster_AsyncEcho_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(TestSyncMaster::AsyncEchoCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::TestSyncMaster_AsyncEcho_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(TestSyncMaster_AsyncEcho_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
TestSyncMaster_AsyncEcho_Response_Message::kMessageTag = {};

bool TestSyncMaster_AsyncEcho_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestSyncMaster::AsyncEchoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<TestSyncMaster_AsyncEcho_Response_Message>();
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
  internal::TestSyncMaster_AsyncEcho_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestSyncMaster_AsyncEcho_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  TestSyncMaster_AsyncEcho_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestSyncMaster::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void TestSyncMaster_AsyncEcho_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = TestSyncMaster_AsyncEcho_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::AsyncEchoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestSyncMaster::Name_);
  message.set_method_name("AsyncEcho");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TestSyncMasterStubDispatch::Accept(
    TestSyncMaster* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTestSyncMaster_Ping_Name: {
      break;
    }
    case internal::kTestSyncMaster_Echo_Name: {
      break;
    }
    case internal::kTestSyncMaster_AsyncEcho_Name: {
      break;
    }
    case internal::kTestSyncMaster_SendRemote_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::SendRemote",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TestSyncMaster_SendRemote_Params_Data* params =
          reinterpret_cast<internal::TestSyncMaster_SendRemote_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::PendingAssociatedRemote<TestSync> p_remote{};
      TestSyncMaster_SendRemote_ParamsDataView input_data_view(params, &serialization_context);
      
      p_remote =
          input_data_view.TakeRemote<decltype(p_remote)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncMaster::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendRemote(
std::move(p_remote));
      return true;
    }
    case internal::kTestSyncMaster_SendReceiver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::SendReceiver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TestSyncMaster_SendReceiver_Params_Data* params =
          reinterpret_cast<internal::TestSyncMaster_SendReceiver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::PendingAssociatedReceiver<TestSync> p_receiver{};
      TestSyncMaster_SendReceiver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncMaster::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendReceiver(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool TestSyncMasterStubDispatch::AcceptWithResponder(
    TestSyncMaster* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTestSyncMaster_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncMasterProxy_Ping_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncMaster::PingCallback callback =
              TestSyncMaster_Ping_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncMaster_Ping_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncMaster_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      TestSyncMaster_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncMaster::Name_, 0, false);
        return false;
      }
      TestSyncMaster::PingCallback callback =
          TestSyncMaster_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(std::move(callback));
      return true;
    }
    case internal::kTestSyncMaster_Echo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::Echo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncMasterProxy_Echo_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncMaster::EchoCallback callback =
              TestSyncMaster_Echo_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncMaster_Echo_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncMaster_Echo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value{};
      TestSyncMaster_Echo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncMaster::Name_, 1, false);
        return false;
      }
      TestSyncMaster::EchoCallback callback =
          TestSyncMaster_Echo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Echo(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kTestSyncMaster_AsyncEcho_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestSyncMaster::AsyncEcho",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            TestSyncMasterProxy_AsyncEcho_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          TestSyncMaster::AsyncEchoCallback callback =
              TestSyncMaster_AsyncEcho_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::TestSyncMaster_AsyncEcho_Params_Data* params =
          reinterpret_cast<
              internal::TestSyncMaster_AsyncEcho_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_value{};
      TestSyncMaster_AsyncEcho_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestSyncMaster::Name_, 2, false);
        return false;
      }
      TestSyncMaster::AsyncEchoCallback callback =
          TestSyncMaster_AsyncEcho_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AsyncEcho(
std::move(p_value), std::move(callback));
      return true;
    }
    case internal::kTestSyncMaster_SendRemote_Name: {
      break;
    }
    case internal::kTestSyncMaster_SendReceiver_Name: {
      break;
    }
  }
  return false;
}

bool TestSyncMasterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSyncMaster RequestValidator");

  switch (message->header()->name) {
    case internal::kTestSyncMaster_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_Echo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_Echo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_AsyncEcho_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_AsyncEcho_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_SendRemote_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_SendRemote_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_SendReceiver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_SendReceiver_Params_Data>(
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

bool TestSyncMasterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestSyncMaster ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTestSyncMaster_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_Ping_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_Echo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_Echo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestSyncMaster_AsyncEcho_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestSyncMaster_AsyncEcho_ResponseParams_Data>(
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
}  // namespace test
}  // namespace mojo

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif