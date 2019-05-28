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

#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace test {
TestWTFCodeGeneration::TestWTFCodeGeneration()
    : str(),
      nullable_str(),
      strs(),
      nullable_strs(),
      arrays(),
      bools(),
      handles(),
      str_map(),
      array_map(),
      handle_map(),
      str_maps() {}

TestWTFCodeGeneration::TestWTFCodeGeneration(
    const std::string& str_in,
    const base::Optional<std::string>& nullable_str_in,
    const std::vector<std::string>& strs_in,
    const std::vector<base::Optional<std::string>>& nullable_strs_in,
    const std::vector<std::vector<int32_t>>& arrays_in,
    const std::vector<bool>& bools_in,
    std::vector<mojo::ScopedMessagePipeHandle> handles_in,
    const base::flat_map<std::string, base::Optional<std::string>>& str_map_in,
    const base::flat_map<int32_t, std::vector<int32_t>>& array_map_in,
    base::flat_map<int32_t, mojo::ScopedMessagePipeHandle> handle_map_in,
    const std::vector<base::flat_map<std::string, base::Optional<std::string>>>& str_maps_in)
    : str(std::move(str_in)),
      nullable_str(std::move(nullable_str_in)),
      strs(std::move(strs_in)),
      nullable_strs(std::move(nullable_strs_in)),
      arrays(std::move(arrays_in)),
      bools(std::move(bools_in)),
      handles(std::move(handles_in)),
      str_map(std::move(str_map_in)),
      array_map(std::move(array_map_in)),
      handle_map(std::move(handle_map_in)),
      str_maps(std::move(str_maps_in)) {}

TestWTFCodeGeneration::~TestWTFCodeGeneration() = default;

bool TestWTFCodeGeneration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TestWTFStruct::TestWTFStruct()
    : str(),
      integer() {}

TestWTFStruct::TestWTFStruct(
    const std::string& str_in,
    int32_t integer_in)
    : str(std::move(str_in)),
      integer(std::move(integer_in)) {}

TestWTFStruct::~TestWTFStruct() = default;
size_t TestWTFStruct::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->str);
  seed = mojo::internal::Hash(seed, this->integer);
  return seed;
}

bool TestWTFStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TestWTFStructWrapper::TestWTFStructWrapper()
    : nested_struct(),
      array_struct(),
      map_struct() {}

TestWTFStructWrapper::TestWTFStructWrapper(
    TestWTFStructPtr nested_struct_in,
    std::vector<TestWTFStructPtr> array_struct_in,
    base::flat_map<TestWTFStructPtr, TestWTFStructPtr> map_struct_in)
    : nested_struct(std::move(nested_struct_in)),
      array_struct(std::move(array_struct_in)),
      map_struct(std::move(map_struct_in)) {}

TestWTFStructWrapper::~TestWTFStructWrapper() = default;

bool TestWTFStructWrapper::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TestWTFCodeGeneration2::TestWTFCodeGeneration2() : tag_(Tag::STR) {
  data_.str = new std::string;
}

TestWTFCodeGeneration2::~TestWTFCodeGeneration2() {
  DestroyActive();
}


void TestWTFCodeGeneration2::set_str(
    const std::string& str) {
  if (tag_ == Tag::STR) {
    *(data_.str) = std::move(str);
  } else {
    DestroyActive();
    tag_ = Tag::STR;
    data_.str = new std::string(
        std::move(str));
  }
}
void TestWTFCodeGeneration2::set_strs(
    const std::vector<std::string>& strs) {
  if (tag_ == Tag::STRS) {
    *(data_.strs) = std::move(strs);
  } else {
    DestroyActive();
    tag_ = Tag::STRS;
    data_.strs = new std::vector<std::string>(
        std::move(strs));
  }
}
void TestWTFCodeGeneration2::set_str_map(
    const base::flat_map<std::string, base::Optional<std::string>>& str_map) {
  if (tag_ == Tag::STR_MAP) {
    *(data_.str_map) = std::move(str_map);
  } else {
    DestroyActive();
    tag_ = Tag::STR_MAP;
    data_.str_map = new base::flat_map<std::string, base::Optional<std::string>>(
        std::move(str_map));
  }
}

void TestWTFCodeGeneration2::DestroyActive() {
  switch (tag_) {

    case Tag::STR:

      delete data_.str;
      break;
    case Tag::STRS:

      delete data_.strs;
      break;
    case Tag::STR_MAP:

      delete data_.str_map;
      break;
  }
}

bool TestWTFCodeGeneration2::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char TestWTF::Name_[] = "mojo.test.TestWTF";

class TestWTF_EchoString_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestWTF_EchoString_ForwardToCallback(
      TestWTF::EchoStringCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestWTF::EchoStringCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoString_ForwardToCallback);
};

class TestWTF_EchoStringArray_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestWTF_EchoStringArray_ForwardToCallback(
      TestWTF::EchoStringArrayCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestWTF::EchoStringArrayCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoStringArray_ForwardToCallback);
};

class TestWTF_EchoStringMap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TestWTF_EchoStringMap_ForwardToCallback(
      TestWTF::EchoStringMapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TestWTF::EchoStringMapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoStringMap_ForwardToCallback);
};

TestWTFProxy::TestWTFProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TestWTFProxy::EchoString(
    const base::Optional<std::string>& in_str, EchoStringCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoString");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoString_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoString_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->str)::BaseType::BufferWriter
      str_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_str, buffer, &str_writer, &serialization_context);
  params->str.Set(
      str_writer.is_null() ? nullptr : str_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoString");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestWTF_EchoString_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TestWTFProxy::EchoStringArray(
    const base::Optional<std::vector<base::Optional<std::string>>>& in_arr, EchoStringArrayCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringArray");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoStringArray_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoStringArray_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->arr)::BaseType::BufferWriter
      arr_writer;
  const mojo::internal::ContainerValidateParams arr_validate_params(
      0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_arr, buffer, &arr_writer, &arr_validate_params,
      &serialization_context);
  params->arr.Set(
      arr_writer.is_null() ? nullptr : arr_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoStringArray");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestWTF_EchoStringArray_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TestWTFProxy::EchoStringMap(
    const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>& in_str_map, EchoStringMapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringMap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoStringMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoStringMap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->str_map)::BaseType::BufferWriter
      str_map_writer;
  const mojo::internal::ContainerValidateParams str_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
      in_str_map, buffer, &str_map_writer, &str_map_validate_params,
      &serialization_context);
  params->str_map.Set(
      str_map_writer.is_null() ? nullptr : str_map_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoStringMap");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TestWTF_EchoStringMap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TestWTF_EchoString_ProxyToResponder {
 public:
  static TestWTF::EchoStringCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestWTF_EchoString_ProxyToResponder> proxy(
        new TestWTF_EchoString_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestWTF_EchoString_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestWTF_EchoString_ProxyToResponder() {
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
  TestWTF_EchoString_ProxyToResponder(
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
        << "TestWTF::EchoStringCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<std::string>& in_str);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoString_ProxyToResponder);
};

bool TestWTF_EchoString_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TestWTF_EchoString_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestWTF_EchoString_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::string> p_str{};
  TestWTF_EchoString_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStr(&p_str))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestWTF::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_str));
  return true;
}

void TestWTF_EchoString_ProxyToResponder::Run(
    const base::Optional<std::string>& in_str) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoString_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoString_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->str)::BaseType::BufferWriter
      str_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_str, buffer, &str_writer, &serialization_context);
  params->str.Set(
      str_writer.is_null() ? nullptr : str_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoString");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TestWTF_EchoStringArray_ProxyToResponder {
 public:
  static TestWTF::EchoStringArrayCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestWTF_EchoStringArray_ProxyToResponder> proxy(
        new TestWTF_EchoStringArray_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestWTF_EchoStringArray_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestWTF_EchoStringArray_ProxyToResponder() {
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
  TestWTF_EchoStringArray_ProxyToResponder(
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
        << "TestWTF::EchoStringArrayCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<std::vector<base::Optional<std::string>>>& in_arr);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoStringArray_ProxyToResponder);
};

bool TestWTF_EchoStringArray_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringArrayCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TestWTF_EchoStringArray_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestWTF_EchoStringArray_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<std::vector<base::Optional<std::string>>> p_arr{};
  TestWTF_EchoStringArray_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadArr(&p_arr))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestWTF::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_arr));
  return true;
}

void TestWTF_EchoStringArray_ProxyToResponder::Run(
    const base::Optional<std::vector<base::Optional<std::string>>>& in_arr) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoStringArray_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoStringArray_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->arr)::BaseType::BufferWriter
      arr_writer;
  const mojo::internal::ContainerValidateParams arr_validate_params(
      0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_arr, buffer, &arr_writer, &arr_validate_params,
      &serialization_context);
  params->arr.Set(
      arr_writer.is_null() ? nullptr : arr_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringArrayCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoStringArray");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TestWTF_EchoStringMap_ProxyToResponder {
 public:
  static TestWTF::EchoStringMapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TestWTF_EchoStringMap_ProxyToResponder> proxy(
        new TestWTF_EchoStringMap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TestWTF_EchoStringMap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TestWTF_EchoStringMap_ProxyToResponder() {
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
  TestWTF_EchoStringMap_ProxyToResponder(
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
        << "TestWTF::EchoStringMapCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>& in_str_map);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TestWTF_EchoStringMap_ProxyToResponder);
};

bool TestWTF_EchoStringMap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringMapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TestWTF_EchoStringMap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TestWTF_EchoStringMap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::flat_map<std::string, base::Optional<std::string>>> p_str_map{};
  TestWTF_EchoStringMap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStrMap(&p_str_map))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TestWTF::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_str_map));
  return true;
}

void TestWTF_EchoStringMap_ProxyToResponder::Run(
    const base::Optional<base::flat_map<std::string, base::Optional<std::string>>>& in_str_map) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTestWTF_EchoStringMap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::TestWTF_EchoStringMap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->str_map)::BaseType::BufferWriter
      str_map_writer;
  const mojo::internal::ContainerValidateParams str_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
      in_str_map, buffer, &str_map_writer, &str_map_validate_params,
      &serialization_context);
  params->str_map.Set(
      str_map_writer.is_null() ? nullptr : str_map_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringMapCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TestWTF::Name_);
  message.set_method_name("EchoStringMap");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TestWTFStubDispatch::Accept(
    TestWTF* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTestWTF_EchoString_Name: {
      break;
    }
    case internal::kTestWTF_EchoStringArray_Name: {
      break;
    }
    case internal::kTestWTF_EchoStringMap_Name: {
      break;
    }
  }
  return false;
}

// static
bool TestWTFStubDispatch::AcceptWithResponder(
    TestWTF* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTestWTF_EchoString_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoString",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TestWTF_EchoString_Params_Data* params =
          reinterpret_cast<
              internal::TestWTF_EchoString_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::string> p_str{};
      TestWTF_EchoString_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStr(&p_str))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestWTF::Name_, 0, false);
        return false;
      }
      TestWTF::EchoStringCallback callback =
          TestWTF_EchoString_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoString(
std::move(p_str), std::move(callback));
      return true;
    }
    case internal::kTestWTF_EchoStringArray_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringArray",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TestWTF_EchoStringArray_Params_Data* params =
          reinterpret_cast<
              internal::TestWTF_EchoStringArray_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::vector<base::Optional<std::string>>> p_arr{};
      TestWTF_EchoStringArray_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadArr(&p_arr))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestWTF::Name_, 1, false);
        return false;
      }
      TestWTF::EchoStringArrayCallback callback =
          TestWTF_EchoStringArray_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoStringArray(
std::move(p_arr), std::move(callback));
      return true;
    }
    case internal::kTestWTF_EchoStringMap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TestWTF::EchoStringMap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TestWTF_EchoStringMap_Params_Data* params =
          reinterpret_cast<
              internal::TestWTF_EchoStringMap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<base::flat_map<std::string, base::Optional<std::string>>> p_str_map{};
      TestWTF_EchoStringMap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStrMap(&p_str_map))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TestWTF::Name_, 2, false);
        return false;
      }
      TestWTF::EchoStringMapCallback callback =
          TestWTF_EchoStringMap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EchoStringMap(
std::move(p_str_map), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TestWTFRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestWTF RequestValidator");

  switch (message->header()->name) {
    case internal::kTestWTF_EchoString_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoString_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestWTF_EchoStringArray_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoStringArray_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestWTF_EchoStringMap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoStringMap_Params_Data>(
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

bool TestWTFResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TestWTF ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTestWTF_EchoString_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoString_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestWTF_EchoStringArray_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoStringArray_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTestWTF_EchoStringMap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TestWTF_EchoStringMap_ResponseParams_Data>(
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


// static
bool StructTraits<::mojo::test::TestWTFCodeGeneration::DataView, ::mojo::test::TestWTFCodeGenerationPtr>::Read(
    ::mojo::test::TestWTFCodeGeneration::DataView input,
    ::mojo::test::TestWTFCodeGenerationPtr* output) {
  bool success = true;
  ::mojo::test::TestWTFCodeGenerationPtr result(::mojo::test::TestWTFCodeGeneration::New());
  
      if (!input.ReadStr(&result->str))
        success = false;
      if (!input.ReadNullableStr(&result->nullable_str))
        success = false;
      if (!input.ReadStrs(&result->strs))
        success = false;
      if (!input.ReadNullableStrs(&result->nullable_strs))
        success = false;
      if (!input.ReadArrays(&result->arrays))
        success = false;
      if (!input.ReadBools(&result->bools))
        success = false;
      if (!input.ReadHandles(&result->handles))
        success = false;
      if (!input.ReadStrMap(&result->str_map))
        success = false;
      if (!input.ReadArrayMap(&result->array_map))
        success = false;
      if (!input.ReadHandleMap(&result->handle_map))
        success = false;
      if (!input.ReadStrMaps(&result->str_maps))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::TestWTFStruct::DataView, ::mojo::test::TestWTFStructPtr>::Read(
    ::mojo::test::TestWTFStruct::DataView input,
    ::mojo::test::TestWTFStructPtr* output) {
  bool success = true;
  ::mojo::test::TestWTFStructPtr result(::mojo::test::TestWTFStruct::New());
  
      if (!input.ReadStr(&result->str))
        success = false;
      result->integer = input.integer();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::TestWTFStructWrapper::DataView, ::mojo::test::TestWTFStructWrapperPtr>::Read(
    ::mojo::test::TestWTFStructWrapper::DataView input,
    ::mojo::test::TestWTFStructWrapperPtr* output) {
  bool success = true;
  ::mojo::test::TestWTFStructWrapperPtr result(::mojo::test::TestWTFStructWrapper::New());
  
      if (!input.ReadNestedStruct(&result->nested_struct))
        success = false;
      if (!input.ReadArrayStruct(&result->array_struct))
        success = false;
      if (!input.ReadMapStruct(&result->map_struct))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo::test::TestWTFCodeGeneration2::DataView, ::mojo::test::TestWTFCodeGeneration2Ptr>::Read(
    ::mojo::test::TestWTFCodeGeneration2::DataView input,
    ::mojo::test::TestWTFCodeGeneration2Ptr* output) {
  using UnionType = ::mojo::test::TestWTFCodeGeneration2;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STR: {
      std::string result_str;
      if (!input.ReadStr(&result_str))
        return false;

      *output = UnionType::NewStr(
          std::move(result_str));
      break;
    }
    case Tag::STRS: {
      std::vector<std::string> result_strs;
      if (!input.ReadStrs(&result_strs))
        return false;

      *output = UnionType::NewStrs(
          std::move(result_strs));
      break;
    }
    case Tag::STR_MAP: {
      base::flat_map<std::string, base::Optional<std::string>> result_str_map;
      if (!input.ReadStrMap(&result_str_map))
        return false;

      *output = UnionType::NewStrMap(
          std::move(result_str_map));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif