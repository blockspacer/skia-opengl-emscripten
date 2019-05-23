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

#include "mojo/public/interfaces/bindings/tests/sample_service.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_JUMBO_H_
#endif
namespace sample {
const char Foo::kFooby[] = "Fooby";
Bar::Bar()
    : alpha(0xffU),
      beta(),
      gamma(),
      type(Bar_Type::VERTICAL) {}

Bar::Bar(
    uint8_t alpha_in,
    uint8_t beta_in,
    uint8_t gamma_in,
    Bar::Type type_in)
    : alpha(std::move(alpha_in)),
      beta(std::move(beta_in)),
      gamma(std::move(gamma_in)),
      type(std::move(type_in)) {}

Bar::~Bar() = default;
size_t Bar::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->alpha);
  seed = mojo::internal::Hash(seed, this->beta);
  seed = mojo::internal::Hash(seed, this->gamma);
  seed = mojo::internal::Hash(seed, this->type);
  return seed;
}

bool Bar::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Foo::Foo()
    : name(Foo::kFooby),
      x(),
      y(),
      a(true),
      b(),
      c(),
      bar(),
      extra_bars(),
      data(),
      source(),
      input_streams(),
      output_streams(),
      array_of_array_of_bools(),
      multi_array_of_strings(),
      array_of_bools() {}

Foo::Foo(
    const std::string& name_in,
    int32_t x_in,
    int32_t y_in,
    bool a_in,
    bool b_in,
    bool c_in,
    BarPtr bar_in,
    base::Optional<std::vector<BarPtr>> extra_bars_in,
    const base::Optional<std::vector<uint8_t>>& data_in,
    mojo::ScopedMessagePipeHandle source_in,
    base::Optional<std::vector<mojo::ScopedDataPipeConsumerHandle>> input_streams_in,
    base::Optional<std::vector<mojo::ScopedDataPipeProducerHandle>> output_streams_in,
    const base::Optional<std::vector<std::vector<bool>>>& array_of_array_of_bools_in,
    const base::Optional<std::vector<std::vector<std::vector<std::string>>>>& multi_array_of_strings_in,
    const base::Optional<std::vector<bool>>& array_of_bools_in)
    : name(std::move(name_in)),
      x(std::move(x_in)),
      y(std::move(y_in)),
      a(std::move(a_in)),
      b(std::move(b_in)),
      c(std::move(c_in)),
      bar(std::move(bar_in)),
      extra_bars(std::move(extra_bars_in)),
      data(std::move(data_in)),
      source(std::move(source_in)),
      input_streams(std::move(input_streams_in)),
      output_streams(std::move(output_streams_in)),
      array_of_array_of_bools(std::move(array_of_array_of_bools_in)),
      multi_array_of_strings(std::move(multi_array_of_strings_in)),
      array_of_bools(std::move(array_of_bools_in)) {}

Foo::~Foo() = default;

bool Foo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DefaultsTest::DefaultsTest()
    : a0(-12),
      a1(kTwelve),
      a2(1234),
      a3(34567U),
      a4(123456),
      a5(3456789012U),
      a6(-111111111111),
      a7(9999999999999999999ULL),
      a8(0x12345),
      a9(-0x12345),
      a10(+1234),
      a11(true),
      a12(false),
      a13(123.25f),
      a14(1234567890.123),
      a15(1E10),
      a16(-1.2E+20),
      a17(+1.23E-20),
      a18(),
      a19(),
      a20(Bar_Type::BOTH),
      a21(),
      a22(::imported::Thing::New()),
      a23(0xFFFFFFFFFFFFFFFFULL),
      a24(0x123456789),
      a25(-0x123456789),
      a26(std::numeric_limits<double>::infinity()),
      a27(-std::numeric_limits<double>::infinity()),
      a28(std::numeric_limits<double>::quiet_NaN()),
      a29(std::numeric_limits<float>::infinity()),
      a30(-std::numeric_limits<float>::infinity()),
      a31(std::numeric_limits<float>::quiet_NaN()) {}

DefaultsTest::DefaultsTest(
    int8_t a0_in,
    uint8_t a1_in,
    int16_t a2_in,
    uint16_t a3_in,
    int32_t a4_in,
    uint32_t a5_in,
    int64_t a6_in,
    uint64_t a7_in,
    int32_t a8_in,
    int32_t a9_in,
    int32_t a10_in,
    bool a11_in,
    bool a12_in,
    float a13_in,
    double a14_in,
    double a15_in,
    double a16_in,
    double a17_in,
    const std::vector<uint8_t>& a18_in,
    const std::string& a19_in,
    Bar::Type a20_in,
    ::imported::PointPtr a21_in,
    ::imported::ThingPtr a22_in,
    uint64_t a23_in,
    int64_t a24_in,
    int64_t a25_in,
    double a26_in,
    double a27_in,
    double a28_in,
    float a29_in,
    float a30_in,
    float a31_in)
    : a0(std::move(a0_in)),
      a1(std::move(a1_in)),
      a2(std::move(a2_in)),
      a3(std::move(a3_in)),
      a4(std::move(a4_in)),
      a5(std::move(a5_in)),
      a6(std::move(a6_in)),
      a7(std::move(a7_in)),
      a8(std::move(a8_in)),
      a9(std::move(a9_in)),
      a10(std::move(a10_in)),
      a11(std::move(a11_in)),
      a12(std::move(a12_in)),
      a13(std::move(a13_in)),
      a14(std::move(a14_in)),
      a15(std::move(a15_in)),
      a16(std::move(a16_in)),
      a17(std::move(a17_in)),
      a18(std::move(a18_in)),
      a19(std::move(a19_in)),
      a20(std::move(a20_in)),
      a21(std::move(a21_in)),
      a22(std::move(a22_in)),
      a23(std::move(a23_in)),
      a24(std::move(a24_in)),
      a25(std::move(a25_in)),
      a26(std::move(a26_in)),
      a27(std::move(a27_in)),
      a28(std::move(a28_in)),
      a29(std::move(a29_in)),
      a30(std::move(a30_in)),
      a31(std::move(a31_in)) {}

DefaultsTest::~DefaultsTest() = default;

bool DefaultsTest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StructWithHoleV1::StructWithHoleV1()
    : v1(1),
      v2(2) {}

StructWithHoleV1::StructWithHoleV1(
    int32_t v1_in,
    int64_t v2_in)
    : v1(std::move(v1_in)),
      v2(std::move(v2_in)) {}

StructWithHoleV1::~StructWithHoleV1() = default;
size_t StructWithHoleV1::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->v1);
  seed = mojo::internal::Hash(seed, this->v2);
  return seed;
}

bool StructWithHoleV1::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StructWithHoleV2::StructWithHoleV2()
    : v1(1),
      v2(2),
      v3(3) {}

StructWithHoleV2::StructWithHoleV2(
    int32_t v1_in,
    int64_t v2_in,
    int32_t v3_in)
    : v1(std::move(v1_in)),
      v2(std::move(v2_in)),
      v3(std::move(v3_in)) {}

StructWithHoleV2::~StructWithHoleV2() = default;
size_t StructWithHoleV2::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->v1);
  seed = mojo::internal::Hash(seed, this->v2);
  seed = mojo::internal::Hash(seed, this->v3);
  return seed;
}

bool StructWithHoleV2::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Service::Name_[] = "sample.Service";
constexpr uint8_t Service::kFavoriteBaz;

class Service_Frobinate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Service_Frobinate_ForwardToCallback(
      Service::FrobinateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Service::FrobinateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Service_Frobinate_ForwardToCallback);
};

ServiceProxy::ServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class ServiceProxy_Frobinate_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ServiceProxy_Frobinate_Message(
      uint32_t message_flags
      , FooPtr param_foo
      , Service::BazOptions param_baz
      , mojo::PendingRemote<Port> param_port
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kService_Frobinate_Name,
          message_flags)
      , param_foo_(std::move(param_foo))
      , param_baz_(std::move(param_baz))
      , param_port_(std::move(param_port)){}
  ~ServiceProxy_Frobinate_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      FooPtr param_foo, Service::BazOptions param_baz, mojo::PendingRemote<Port> param_port) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ServiceProxy_Frobinate_Message>(
          kFlags
          , std::move(param_foo)
          , std::move(param_baz)
          , std::move(param_port)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kService_Frobinate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Service_Frobinate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->foo)::BaseType::BufferWriter
      foo_writer;
  mojo::internal::Serialize<::sample::FooDataView>(
      param_foo, buffer, &foo_writer, &serialization_context);
  params->foo.Set(
      foo_writer.is_null() ? nullptr : foo_writer.data());
  mojo::internal::Serialize<::sample::Service_BazOptions>(
      param_baz, &params->baz);
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
      param_port, &params->port, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Service* impl, Service::FrobinateCallback callback) {
    impl->Frobinate(
        std::move(param_foo_),
        std::move(param_baz_),
        std::move(param_port_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Service_Frobinate_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->foo)::BaseType::BufferWriter
      foo_writer;
  mojo::internal::Serialize<::sample::FooDataView>(
      param_foo_, buffer, &foo_writer, serialization_context);
  params->foo.Set(
      foo_writer.is_null() ? nullptr : foo_writer.data());
  mojo::internal::Serialize<::sample::Service_BazOptions>(
      param_baz_, &params->baz);
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
      param_port_, &params->port, serialization_context);
  }
  FooPtr param_foo_;
  Service::BazOptions param_baz_;
  mojo::PendingRemote<Port> param_port_;

  DISALLOW_COPY_AND_ASSIGN(ServiceProxy_Frobinate_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ServiceProxy_Frobinate_Message::kMessageTag = {};

void ServiceProxy::Frobinate(
    FooPtr in_foo, Service::BazOptions in_baz, mojo::PendingRemote<Port> in_port, FrobinateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Service::Frobinate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ServiceProxy_Frobinate_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_foo), std::move(in_baz), std::move(in_port));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("Frobinate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Service_Frobinate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ServiceProxy_GetPort_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit ServiceProxy_GetPort_Message(
      uint32_t message_flags
      , mojo::PendingReceiver<Port> param_receiver
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kService_GetPort_Name,
          message_flags)
      , param_receiver_(std::move(param_receiver)){}
  ~ServiceProxy_GetPort_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      mojo::PendingReceiver<Port> param_receiver) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<ServiceProxy_GetPort_Message>(
          kFlags
          , std::move(param_receiver)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kService_GetPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Service_GetPort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::sample::PortInterfaceBase>>(
      param_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in Service.GetPort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Service* impl) {
    impl->GetPort(
        std::move(param_receiver_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Service_GetPort_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::sample::PortInterfaceBase>>(
      param_receiver_, &params->receiver, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in Service.GetPort request");
  }
  mojo::PendingReceiver<Port> param_receiver_;

  DISALLOW_COPY_AND_ASSIGN(ServiceProxy_GetPort_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
ServiceProxy_GetPort_Message::kMessageTag = {};

void ServiceProxy::GetPort(
    mojo::PendingReceiver<Port> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Service::GetPort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = ServiceProxy_GetPort_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_receiver));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("GetPort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Service_Frobinate_ProxyToResponder {
 public:
  static Service::FrobinateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Service_Frobinate_ProxyToResponder> proxy(
        new Service_Frobinate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Service_Frobinate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Service_Frobinate_ProxyToResponder() {
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
  Service_Frobinate_ProxyToResponder(
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
        << "Service::FrobinateCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(Service_Frobinate_ProxyToResponder);
};
class Service_Frobinate_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit Service_Frobinate_Response_Message(
      uint32_t message_flags
      , int32_t param_result
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kService_Frobinate_Name,
          message_flags)
      , param_result_(std::move(param_result)){}
  ~Service_Frobinate_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      int32_t param_result) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<Service_Frobinate_Response_Message>(
          kFlags
          , std::move(param_result)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kService_Frobinate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Service_Frobinate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = param_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Service::FrobinateCallback* callback) {
    std::move(*callback).Run(
        std::move(param_result_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Service_Frobinate_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  params->result = param_result_;
  }
  int32_t param_result_;

  DISALLOW_COPY_AND_ASSIGN(Service_Frobinate_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
Service_Frobinate_Response_Message::kMessageTag = {};

bool Service_Frobinate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Service::FrobinateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<Service_Frobinate_Response_Message>();
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
  internal::Service_Frobinate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Service_Frobinate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  Service_Frobinate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Service::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void Service_Frobinate_ProxyToResponder::Run(
    int32_t in_result) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = Service_Frobinate_Response_Message::Build(kSerialize, is_sync_, std::move(in_result));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Service::FrobinateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Service::Name_);
  message.set_method_name("Frobinate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceStubDispatch::Accept(
    Service* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kService_Frobinate_Name: {
      break;
    }
    case internal::kService_GetPort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Service::GetPort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ServiceProxy_GetPort_Message>();
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
      internal::Service_GetPort_Params_Data* params =
          reinterpret_cast<internal::Service_GetPort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::PendingReceiver<Port> p_receiver{};
      Service_GetPort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Service::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPort(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool ServiceStubDispatch::AcceptWithResponder(
    Service* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kService_Frobinate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Service::Frobinate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            ServiceProxy_Frobinate_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          Service::FrobinateCallback callback =
              Service_Frobinate_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::Service_Frobinate_Params_Data* params =
          reinterpret_cast<
              internal::Service_Frobinate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FooPtr p_foo{};
      Service::BazOptions p_baz{};
      mojo::PendingRemote<Port> p_port{};
      Service_Frobinate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFoo(&p_foo))
        success = false;
      if (!input_data_view.ReadBaz(&p_baz))
        success = false;
      p_port =
          input_data_view.TakePort<decltype(p_port)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Service::Name_, 0, false);
        return false;
      }
      Service::FrobinateCallback callback =
          Service_Frobinate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Frobinate(
std::move(p_foo), 
std::move(p_baz), 
std::move(p_port), std::move(callback));
      return true;
    }
    case internal::kService_GetPort_Name: {
      break;
    }
  }
  return false;
}

bool ServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Service RequestValidator");

  switch (message->header()->name) {
    case internal::kService_Frobinate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_Frobinate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kService_GetPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_GetPort_Params_Data>(
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

bool ServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Service ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kService_Frobinate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_Frobinate_ResponseParams_Data>(
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
const char Port::Name_[] = "sample.Port";

PortProxy::PortProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class PortProxy_PostMessageToPort_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit PortProxy_PostMessageToPort_Message(
      uint32_t message_flags
      , const std::string& param_message_text
      , mojo::PendingRemote<Port> param_port
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kPort_PostMessageToPort_Name,
          message_flags)
      , param_message_text_(std::move(param_message_text))
      , param_port_(std::move(param_port)){}
  ~PortProxy_PostMessageToPort_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      const std::string& param_message_text, mojo::PendingRemote<Port> param_port) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<PortProxy_PostMessageToPort_Message>(
          kFlags
          , std::move(param_message_text)
          , std::move(param_port)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kPort_PostMessageToPort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::sample::internal::Port_PostMessageToPort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message_text)::BaseType::BufferWriter
      message_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_message_text, buffer, &message_text_writer, &serialization_context);
  params->message_text.Set(
      message_text_writer.is_null() ? nullptr : message_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message_text in Port.PostMessageToPort request");
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
      param_port, &params->port, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->port),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid port in Port.PostMessageToPort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(Port* impl) {
    impl->PostMessageToPort(
        std::move(param_message_text_),
        std::move(param_port_));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::sample::internal::Port_PostMessageToPort_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->message_text)::BaseType::BufferWriter
      message_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_message_text_, buffer, &message_text_writer, serialization_context);
  params->message_text.Set(
      message_text_writer.is_null() ? nullptr : message_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message_text in Port.PostMessageToPort request");
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::sample::PortInterfaceBase>>(
      param_port_, &params->port, serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->port),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid port in Port.PostMessageToPort request");
  }
  std::string param_message_text_;
  mojo::PendingRemote<Port> param_port_;

  DISALLOW_COPY_AND_ASSIGN(PortProxy_PostMessageToPort_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
PortProxy_PostMessageToPort_Message::kMessageTag = {};

void PortProxy::PostMessageToPort(
    const std::string& in_message_text, mojo::PendingRemote<Port> in_port) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Port::PostMessageToPort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = PortProxy_PostMessageToPort_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_message_text), std::move(in_port));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Port::Name_);
  message.set_method_name("PostMessageToPort");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PortStubDispatch::Accept(
    Port* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPort_PostMessageToPort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Port::PostMessageToPort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            PortProxy_PostMessageToPort_Message>();
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
      internal::Port_PostMessageToPort_Params_Data* params =
          reinterpret_cast<internal::Port_PostMessageToPort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_message_text{};
      mojo::PendingRemote<Port> p_port{};
      Port_PostMessageToPort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessageText(&p_message_text))
        success = false;
      p_port =
          input_data_view.TakePort<decltype(p_port)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Port::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToPort(
std::move(p_message_text), 
std::move(p_port));
      return true;
    }
  }
  return false;
}

// static
bool PortStubDispatch::AcceptWithResponder(
    Port* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPort_PostMessageToPort_Name: {
      break;
    }
  }
  return false;
}

bool PortRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Port RequestValidator");

  switch (message->header()->name) {
    case internal::kPort_PostMessageToPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Port_PostMessageToPort_Params_Data>(
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

}  // namespace sample

namespace mojo {


// static
bool StructTraits<::sample::Bar::DataView, ::sample::BarPtr>::Read(
    ::sample::Bar::DataView input,
    ::sample::BarPtr* output) {
  bool success = true;
  ::sample::BarPtr result(::sample::Bar::New());
  
      result->alpha = input.alpha();
      result->beta = input.beta();
      result->gamma = input.gamma();
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::sample::Foo::DataView, ::sample::FooPtr>::Read(
    ::sample::Foo::DataView input,
    ::sample::FooPtr* output) {
  bool success = true;
  ::sample::FooPtr result(::sample::Foo::New());
  
      result->x = input.x();
      result->y = input.y();
      result->a = input.a();
      result->b = input.b();
      result->c = input.c();
      if (!input.ReadBar(&result->bar))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadExtraBars(&result->extra_bars))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      result->source = input.TakeSource();
      if (!input.ReadInputStreams(&result->input_streams))
        success = false;
      if (!input.ReadOutputStreams(&result->output_streams))
        success = false;
      if (!input.ReadArrayOfArrayOfBools(&result->array_of_array_of_bools))
        success = false;
      if (!input.ReadMultiArrayOfStrings(&result->multi_array_of_strings))
        success = false;
      if (!input.ReadArrayOfBools(&result->array_of_bools))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::sample::DefaultsTest::DataView, ::sample::DefaultsTestPtr>::Read(
    ::sample::DefaultsTest::DataView input,
    ::sample::DefaultsTestPtr* output) {
  bool success = true;
  ::sample::DefaultsTestPtr result(::sample::DefaultsTest::New());
  
      result->a0 = input.a0();
      result->a1 = input.a1();
      result->a2 = input.a2();
      result->a3 = input.a3();
      result->a4 = input.a4();
      result->a5 = input.a5();
      result->a6 = input.a6();
      result->a7 = input.a7();
      result->a8 = input.a8();
      result->a9 = input.a9();
      result->a10 = input.a10();
      result->a11 = input.a11();
      result->a12 = input.a12();
      result->a13 = input.a13();
      result->a14 = input.a14();
      result->a15 = input.a15();
      result->a16 = input.a16();
      result->a17 = input.a17();
      if (!input.ReadA18(&result->a18))
        success = false;
      if (!input.ReadA19(&result->a19))
        success = false;
      if (!input.ReadA20(&result->a20))
        success = false;
      if (!input.ReadA21(&result->a21))
        success = false;
      if (!input.ReadA22(&result->a22))
        success = false;
      result->a23 = input.a23();
      result->a24 = input.a24();
      result->a25 = input.a25();
      result->a26 = input.a26();
      result->a27 = input.a27();
      result->a28 = input.a28();
      result->a29 = input.a29();
      result->a30 = input.a30();
      result->a31 = input.a31();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::sample::StructWithHoleV1::DataView, ::sample::StructWithHoleV1Ptr>::Read(
    ::sample::StructWithHoleV1::DataView input,
    ::sample::StructWithHoleV1Ptr* output) {
  bool success = true;
  ::sample::StructWithHoleV1Ptr result(::sample::StructWithHoleV1::New());
  
      result->v1 = input.v1();
      result->v2 = input.v2();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::sample::StructWithHoleV2::DataView, ::sample::StructWithHoleV2Ptr>::Read(
    ::sample::StructWithHoleV2::DataView input,
    ::sample::StructWithHoleV2Ptr* output) {
  bool success = true;
  ::sample::StructWithHoleV2Ptr result(::sample::StructWithHoleV2::New());
  
      result->v1 = input.v1();
      result->v2 = input.v2();
      result->v3 = input.v3();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif