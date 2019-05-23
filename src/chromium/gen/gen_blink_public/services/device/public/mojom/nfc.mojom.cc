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

#include "services/device/public/mojom/nfc.mojom.h"

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

#include "services/device/public/mojom/nfc.mojom-params-data.h"
#include "services/device/public/mojom/nfc.mojom-shared-message-ids.h"

#include "services/device/public/mojom/nfc.mojom-import-headers.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_JUMBO_H_
#endif
namespace device {
namespace mojom {
constexpr uint32_t NDEFMessage::kMaxSize;
NFCError::NFCError()
    : error_type() {}

NFCError::NFCError(
    NFCErrorType error_type_in)
    : error_type(std::move(error_type_in)) {}

NFCError::~NFCError() = default;
size_t NFCError::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->error_type);
  return seed;
}

bool NFCError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NDEFRecord::NDEFRecord()
    : record_type(),
      media_type(),
      data() {}

NDEFRecord::NDEFRecord(
    NDEFRecordType record_type_in,
    const base::Optional<std::string>& media_type_in,
    const std::vector<uint8_t>& data_in)
    : record_type(std::move(record_type_in)),
      media_type(std::move(media_type_in)),
      data(std::move(data_in)) {}

NDEFRecord::~NDEFRecord() = default;

bool NDEFRecord::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NDEFMessage::NDEFMessage()
    : data(),
      url() {}

NDEFMessage::NDEFMessage(
    std::vector<NDEFRecordPtr> data_in,
    const base::Optional<std::string>& url_in)
    : data(std::move(data_in)),
      url(std::move(url_in)) {}

NDEFMessage::~NDEFMessage() = default;

bool NDEFMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NFCPushOptions::NFCPushOptions()
    : target(),
      timeout(),
      ignore_read() {}

NFCPushOptions::NFCPushOptions(
    NFCPushTarget target_in,
    double timeout_in,
    bool ignore_read_in)
    : target(std::move(target_in)),
      timeout(std::move(timeout_in)),
      ignore_read(std::move(ignore_read_in)) {}

NFCPushOptions::~NFCPushOptions() = default;
size_t NFCPushOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->target);
  seed = mojo::internal::Hash(seed, this->timeout);
  seed = mojo::internal::Hash(seed, this->ignore_read);
  return seed;
}

bool NFCPushOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NDEFRecordTypeFilter::NDEFRecordTypeFilter()
    : record_type() {}

NDEFRecordTypeFilter::NDEFRecordTypeFilter(
    NDEFRecordType record_type_in)
    : record_type(std::move(record_type_in)) {}

NDEFRecordTypeFilter::~NDEFRecordTypeFilter() = default;
size_t NDEFRecordTypeFilter::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->record_type);
  return seed;
}

bool NDEFRecordTypeFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NFCWatchOptions::NFCWatchOptions()
    : url(),
      record_filter(),
      media_type(),
      mode() {}

NFCWatchOptions::NFCWatchOptions(
    const base::Optional<std::string>& url_in,
    NDEFRecordTypeFilterPtr record_filter_in,
    const base::Optional<std::string>& media_type_in,
    NFCWatchMode mode_in)
    : url(std::move(url_in)),
      record_filter(std::move(record_filter_in)),
      media_type(std::move(media_type_in)),
      mode(std::move(mode_in)) {}

NFCWatchOptions::~NFCWatchOptions() = default;

bool NFCWatchOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NFC::Name_[] = "device.mojom.NFC";

class NFC_Push_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_Push_ForwardToCallback(
      NFC::PushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::PushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NFC_Push_ForwardToCallback);
};

class NFC_CancelPush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelPush_ForwardToCallback(
      NFC::CancelPushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelPushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelPush_ForwardToCallback);
};

class NFC_Watch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_Watch_ForwardToCallback(
      NFC::WatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::WatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NFC_Watch_ForwardToCallback);
};

class NFC_CancelWatch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelWatch_ForwardToCallback(
      NFC::CancelWatchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelWatchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelWatch_ForwardToCallback);
};

class NFC_CancelAllWatches_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NFC_CancelAllWatches_ForwardToCallback(
      NFC::CancelAllWatchesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NFC::CancelAllWatchesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NFC_CancelAllWatches_ForwardToCallback);
};

NFCProxy::NFCProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NFCProxy::SetClient(
    NFCClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::NFCClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NFC.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NFCProxy::Push(
    NDEFMessagePtr in_message, NFCPushOptionsPtr in_options, PushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::Push");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_Push_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_Push_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::device::mojom::NDEFMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in NFC.Push request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::NFCPushOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("Push");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NFC_Push_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NFCProxy::CancelPush(
    NFCPushTarget in_target, CancelPushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelPush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelPush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelPush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::NFCPushTarget>(
      in_target, &params->target);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelPush");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NFC_CancelPush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NFCProxy::Watch(
    NFCWatchOptionsPtr in_options, WatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::Watch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_Watch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_Watch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::device::mojom::NFCWatchOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in NFC.Watch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("Watch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NFC_Watch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NFCProxy::CancelWatch(
    uint32_t in_id, CancelWatchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelWatch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelWatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelWatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelWatch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NFC_CancelWatch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NFCProxy::CancelAllWatches(
    CancelAllWatchesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelAllWatches");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelAllWatches_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelAllWatches_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelAllWatches");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NFC_CancelAllWatches_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NFCProxy::SuspendNFCOperations(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::SuspendNFCOperations");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_SuspendNFCOperations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_SuspendNFCOperations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("SuspendNFCOperations");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NFCProxy::ResumeNFCOperations(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFC::ResumeNFCOperations");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_ResumeNFCOperations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_ResumeNFCOperations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("ResumeNFCOperations");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NFC_Push_ProxyToResponder {
 public:
  static NFC::PushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NFC_Push_ProxyToResponder> proxy(
        new NFC_Push_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NFC_Push_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NFC_Push_ProxyToResponder() {
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
  NFC_Push_ProxyToResponder(
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
        << "NFC::PushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NFC_Push_ProxyToResponder);
};

bool NFC_Push_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NFC::PushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NFC_Push_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NFC_Push_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_Push_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NFC::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void NFC_Push_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_Push_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_Push_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::device::mojom::NFCErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NFC::PushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("Push");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NFC_CancelPush_ProxyToResponder {
 public:
  static NFC::CancelPushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NFC_CancelPush_ProxyToResponder> proxy(
        new NFC_CancelPush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NFC_CancelPush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NFC_CancelPush_ProxyToResponder() {
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
  NFC_CancelPush_ProxyToResponder(
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
        << "NFC::CancelPushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelPush_ProxyToResponder);
};

bool NFC_CancelPush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelPushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NFC_CancelPush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NFC_CancelPush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelPush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NFC::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void NFC_CancelPush_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelPush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelPush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::device::mojom::NFCErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelPushCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelPush");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NFC_Watch_ProxyToResponder {
 public:
  static NFC::WatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NFC_Watch_ProxyToResponder> proxy(
        new NFC_Watch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NFC_Watch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NFC_Watch_ProxyToResponder() {
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
  NFC_Watch_ProxyToResponder(
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
        << "NFC::WatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_id, NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NFC_Watch_ProxyToResponder);
};

bool NFC_Watch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NFC::WatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NFC_Watch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NFC_Watch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_id{};
  NFCErrorPtr p_error{};
  NFC_Watch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_id = input_data_view.id();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NFC::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id), 
std::move(p_error));
  return true;
}

void NFC_Watch_ProxyToResponder::Run(
    uint32_t in_id, NFCErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_Watch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_Watch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::device::mojom::NFCErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NFC::WatchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("Watch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NFC_CancelWatch_ProxyToResponder {
 public:
  static NFC::CancelWatchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NFC_CancelWatch_ProxyToResponder> proxy(
        new NFC_CancelWatch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NFC_CancelWatch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NFC_CancelWatch_ProxyToResponder() {
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
  NFC_CancelWatch_ProxyToResponder(
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
        << "NFC::CancelWatchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelWatch_ProxyToResponder);
};

bool NFC_CancelWatch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelWatchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NFC_CancelWatch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NFC_CancelWatch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelWatch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NFC::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void NFC_CancelWatch_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelWatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelWatch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::device::mojom::NFCErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelWatchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelWatch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NFC_CancelAllWatches_ProxyToResponder {
 public:
  static NFC::CancelAllWatchesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NFC_CancelAllWatches_ProxyToResponder> proxy(
        new NFC_CancelAllWatches_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NFC_CancelAllWatches_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NFC_CancelAllWatches_ProxyToResponder() {
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
  NFC_CancelAllWatches_ProxyToResponder(
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
        << "NFC::CancelAllWatchesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      NFCErrorPtr in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NFC_CancelAllWatches_ProxyToResponder);
};

bool NFC_CancelAllWatches_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NFC::CancelAllWatchesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NFC_CancelAllWatches_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NFC_CancelAllWatches_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NFCErrorPtr p_error{};
  NFC_CancelAllWatches_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NFC::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void NFC_CancelAllWatches_ProxyToResponder::Run(
    NFCErrorPtr in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFC_CancelAllWatches_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFC_CancelAllWatches_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<::device::mojom::NFCErrorDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelAllWatchesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFC::Name_);
  message.set_method_name("CancelAllWatches");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NFCStubDispatch::Accept(
    NFC* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NFC_SetClient_Params_Data* params =
          reinterpret_cast<internal::NFC_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFCClientPtr p_client{};
      NFC_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kNFC_Push_Name: {
      break;
    }
    case internal::kNFC_CancelPush_Name: {
      break;
    }
    case internal::kNFC_Watch_Name: {
      break;
    }
    case internal::kNFC_CancelWatch_Name: {
      break;
    }
    case internal::kNFC_CancelAllWatches_Name: {
      break;
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::SuspendNFCOperations",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NFC_SuspendNFCOperations_Params_Data* params =
          reinterpret_cast<internal::NFC_SuspendNFCOperations_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFC_SuspendNFCOperations_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SuspendNFCOperations();
      return true;
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::ResumeNFCOperations",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NFC_ResumeNFCOperations_Params_Data* params =
          reinterpret_cast<internal::NFC_ResumeNFCOperations_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFC_ResumeNFCOperations_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResumeNFCOperations();
      return true;
    }
  }
  return false;
}

// static
bool NFCStubDispatch::AcceptWithResponder(
    NFC* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
      break;
    }
    case internal::kNFC_Push_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::Push",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NFC_Push_Params_Data* params =
          reinterpret_cast<
              internal::NFC_Push_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NDEFMessagePtr p_message{};
      NFCPushOptionsPtr p_options{};
      NFC_Push_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 1, false);
        return false;
      }
      NFC::PushCallback callback =
          NFC_Push_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Push(
std::move(p_message), 
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kNFC_CancelPush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelPush",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NFC_CancelPush_Params_Data* params =
          reinterpret_cast<
              internal::NFC_CancelPush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFCPushTarget p_target{};
      NFC_CancelPush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 2, false);
        return false;
      }
      NFC::CancelPushCallback callback =
          NFC_CancelPush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelPush(
std::move(p_target), std::move(callback));
      return true;
    }
    case internal::kNFC_Watch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::Watch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NFC_Watch_Params_Data* params =
          reinterpret_cast<
              internal::NFC_Watch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFCWatchOptionsPtr p_options{};
      NFC_Watch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 3, false);
        return false;
      }
      NFC::WatchCallback callback =
          NFC_Watch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Watch(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kNFC_CancelWatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelWatch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NFC_CancelWatch_Params_Data* params =
          reinterpret_cast<
              internal::NFC_CancelWatch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_id{};
      NFC_CancelWatch_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 4, false);
        return false;
      }
      NFC::CancelWatchCallback callback =
          NFC_CancelWatch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelWatch(
std::move(p_id), std::move(callback));
      return true;
    }
    case internal::kNFC_CancelAllWatches_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFC::CancelAllWatches",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NFC_CancelAllWatches_Params_Data* params =
          reinterpret_cast<
              internal::NFC_CancelAllWatches_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NFC_CancelAllWatches_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFC::Name_, 5, false);
        return false;
      }
      NFC::CancelAllWatchesCallback callback =
          NFC_CancelAllWatches_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelAllWatches(std::move(callback));
      return true;
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
      break;
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
      break;
    }
  }
  return false;
}

bool NFCRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NFC RequestValidator");

  switch (message->header()->name) {
    case internal::kNFC_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_Push_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Push_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelPush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelPush_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_Watch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Watch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelWatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelWatch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelAllWatches_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelAllWatches_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_SuspendNFCOperations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_SuspendNFCOperations_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_ResumeNFCOperations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_ResumeNFCOperations_Params_Data>(
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

bool NFCResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NFC ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNFC_Push_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Push_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelPush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelPush_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_Watch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_Watch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelWatch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelWatch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNFC_CancelAllWatches_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFC_CancelAllWatches_ResponseParams_Data>(
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
const char NFCClient::Name_[] = "device.mojom.NFCClient";

NFCClientProxy::NFCClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NFCClientProxy::OnWatch(
    const std::vector<uint32_t>& in_watch_ids, NDEFMessagePtr in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NFCClient::OnWatch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFCClient_OnWatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFCClient_OnWatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->watch_ids)::BaseType::BufferWriter
      watch_ids_writer;
  const mojo::internal::ContainerValidateParams watch_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
      in_watch_ids, buffer, &watch_ids_writer, &watch_ids_validate_params,
      &serialization_context);
  params->watch_ids.Set(
      watch_ids_writer.is_null() ? nullptr : watch_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_ids in NFCClient.OnWatch request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::device::mojom::NDEFMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in NFCClient.OnWatch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NFCClient::Name_);
  message.set_method_name("OnWatch");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NFCClientStubDispatch::Accept(
    NFCClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NFCClient::OnWatch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NFCClient_OnWatch_Params_Data* params =
          reinterpret_cast<internal::NFCClient_OnWatch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint32_t> p_watch_ids{};
      NDEFMessagePtr p_message{};
      NFCClient_OnWatch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWatchIds(&p_watch_ids))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NFCClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWatch(
std::move(p_watch_ids), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool NFCClientStubDispatch::AcceptWithResponder(
    NFCClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
      break;
    }
  }
  return false;
}

bool NFCClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NFCClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNFCClient_OnWatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFCClient_OnWatch_Params_Data>(
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
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::NFCError::DataView, ::device::mojom::NFCErrorPtr>::Read(
    ::device::mojom::NFCError::DataView input,
    ::device::mojom::NFCErrorPtr* output) {
  bool success = true;
  ::device::mojom::NFCErrorPtr result(::device::mojom::NFCError::New());
  
      if (!input.ReadErrorType(&result->error_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::NDEFRecord::DataView, ::device::mojom::NDEFRecordPtr>::Read(
    ::device::mojom::NDEFRecord::DataView input,
    ::device::mojom::NDEFRecordPtr* output) {
  bool success = true;
  ::device::mojom::NDEFRecordPtr result(::device::mojom::NDEFRecord::New());
  
      if (!input.ReadRecordType(&result->record_type))
        success = false;
      if (!input.ReadMediaType(&result->media_type))
        success = false;
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::NDEFMessage::DataView, ::device::mojom::NDEFMessagePtr>::Read(
    ::device::mojom::NDEFMessage::DataView input,
    ::device::mojom::NDEFMessagePtr* output) {
  bool success = true;
  ::device::mojom::NDEFMessagePtr result(::device::mojom::NDEFMessage::New());
  
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::NFCPushOptions::DataView, ::device::mojom::NFCPushOptionsPtr>::Read(
    ::device::mojom::NFCPushOptions::DataView input,
    ::device::mojom::NFCPushOptionsPtr* output) {
  bool success = true;
  ::device::mojom::NFCPushOptionsPtr result(::device::mojom::NFCPushOptions::New());
  
      if (!input.ReadTarget(&result->target))
        success = false;
      result->timeout = input.timeout();
      result->ignore_read = input.ignore_read();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::NDEFRecordTypeFilter::DataView, ::device::mojom::NDEFRecordTypeFilterPtr>::Read(
    ::device::mojom::NDEFRecordTypeFilter::DataView input,
    ::device::mojom::NDEFRecordTypeFilterPtr* output) {
  bool success = true;
  ::device::mojom::NDEFRecordTypeFilterPtr result(::device::mojom::NDEFRecordTypeFilter::New());
  
      if (!input.ReadRecordType(&result->record_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::NFCWatchOptions::DataView, ::device::mojom::NFCWatchOptionsPtr>::Read(
    ::device::mojom::NFCWatchOptions::DataView input,
    ::device::mojom::NFCWatchOptionsPtr* output) {
  bool success = true;
  ::device::mojom::NFCWatchOptionsPtr result(::device::mojom::NFCWatchOptions::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadRecordFilter(&result->record_filter))
        success = false;
      if (!input.ReadMediaType(&result->media_type))
        success = false;
      if (!input.ReadMode(&result->mode))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif