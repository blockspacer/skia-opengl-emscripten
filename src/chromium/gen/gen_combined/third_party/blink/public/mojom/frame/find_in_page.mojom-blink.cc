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

#include "third_party/blink/public/mojom/frame/find_in_page.mojom-blink.h"

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

#include "third_party/blink/public/mojom/frame/find_in_page.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame/find_in_page.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
FindOptions::FindOptions()
    : forward(true),
      match_case(false),
      find_next(false),
      force(false),
      run_synchronously_for_testing(false) {}

FindOptions::FindOptions(
    bool forward_in,
    bool match_case_in,
    bool find_next_in,
    bool force_in,
    bool run_synchronously_for_testing_in)
    : forward(std::move(forward_in)),
      match_case(std::move(match_case_in)),
      find_next(std::move(find_next_in)),
      force(std::move(force_in)),
      run_synchronously_for_testing(std::move(run_synchronously_for_testing_in)) {}

FindOptions::~FindOptions() = default;
size_t FindOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->forward);
  seed = mojo::internal::WTFHash(seed, this->match_case);
  seed = mojo::internal::WTFHash(seed, this->find_next);
  seed = mojo::internal::WTFHash(seed, this->force);
  seed = mojo::internal::WTFHash(seed, this->run_synchronously_for_testing);
  return seed;
}

bool FindOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FindInPage::Name_[] = "blink.mojom.FindInPage";

class FindInPage_GetNearestFindResult_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FindInPage_GetNearestFindResult_ForwardToCallback(
      FindInPage::GetNearestFindResultCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FindInPage::GetNearestFindResultCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FindInPage_GetNearestFindResult_ForwardToCallback);
};

class FindInPage_FindMatchRects_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FindInPage_FindMatchRects_ForwardToCallback(
      FindInPage::FindMatchRectsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FindInPage::FindMatchRectsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FindInPage_FindMatchRects_ForwardToCallback);
};

FindInPageProxy::FindInPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FindInPageProxy::Find(
    int32_t in_request_id, const WTF::String& in_search_text, FindOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::Find");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_Find_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_Find_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  typename decltype(params->search_text)::BaseType::BufferWriter
      search_text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_search_text, buffer, &search_text_writer, &serialization_context);
  params->search_text.Set(
      search_text_writer.is_null() ? nullptr : search_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->search_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null search_text in FindInPage.Find request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::FindOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in FindInPage.Find request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("Find");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::StopFinding(
    StopFindAction in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::StopFinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_StopFinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_StopFinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::StopFindAction>(
      in_action, &params->action);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("StopFinding");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::ClearActiveFindMatch(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::ClearActiveFindMatch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_ClearActiveFindMatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_ClearActiveFindMatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("ClearActiveFindMatch");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::GetNearestFindResult(
    const ::blink::WebFloatPoint& in_point, GetNearestFindResultCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::GetNearestFindResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_GetNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_GetNearestFindResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in FindInPage.GetNearestFindResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("GetNearestFindResult");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FindInPage_GetNearestFindResult_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FindInPageProxy::ActivateNearestFindResult(
    int32_t in_request_id, const ::blink::WebFloatPoint& in_point) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::ActivateNearestFindResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_ActivateNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_ActivateNearestFindResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in FindInPage.ActivateNearestFindResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("ActivateNearestFindResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::SetClient(
    FindInPageClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::FindInPageClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in FindInPage.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::FindMatchRects(
    int32_t in_current_version, FindMatchRectsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::FindMatchRects");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_FindMatchRects_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_FindMatchRects_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->current_version = in_current_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("FindMatchRects");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FindInPage_FindMatchRects_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FindInPage_GetNearestFindResult_ProxyToResponder {
 public:
  static FindInPage::GetNearestFindResultCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FindInPage_GetNearestFindResult_ProxyToResponder> proxy(
        new FindInPage_GetNearestFindResult_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FindInPage_GetNearestFindResult_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FindInPage_GetNearestFindResult_ProxyToResponder() {
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
  FindInPage_GetNearestFindResult_ProxyToResponder(
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
        << "FindInPage::GetNearestFindResultCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      float in_distance);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FindInPage_GetNearestFindResult_ProxyToResponder);
};

bool FindInPage_GetNearestFindResult_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::GetNearestFindResultCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FindInPage_GetNearestFindResult_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FindInPage_GetNearestFindResult_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  float p_distance{};
  FindInPage_GetNearestFindResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_distance = input_data_view.distance();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FindInPage::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_distance));
  return true;
}

void FindInPage_GetNearestFindResult_ProxyToResponder::Run(
    float in_distance) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_GetNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_GetNearestFindResult_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->distance = in_distance;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::GetNearestFindResultCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("GetNearestFindResult");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FindInPage_FindMatchRects_ProxyToResponder {
 public:
  static FindInPage::FindMatchRectsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FindInPage_FindMatchRects_ProxyToResponder> proxy(
        new FindInPage_FindMatchRects_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FindInPage_FindMatchRects_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FindInPage_FindMatchRects_ProxyToResponder() {
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
  FindInPage_FindMatchRects_ProxyToResponder(
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
        << "FindInPage::FindMatchRectsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_version, const WTF::Vector<::blink::WebFloatRect>& in_rects, const ::blink::WebFloatRect& in_active_match_rect);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FindInPage_FindMatchRects_ProxyToResponder);
};

bool FindInPage_FindMatchRects_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FindInPage::FindMatchRectsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FindInPage_FindMatchRects_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FindInPage_FindMatchRects_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_version{};
  WTF::Vector<::blink::WebFloatRect> p_rects{};
  ::blink::WebFloatRect p_active_match_rect{};
  FindInPage_FindMatchRects_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_version = input_data_view.version();
  if (!input_data_view.ReadRects(&p_rects))
    success = false;
  if (!input_data_view.ReadActiveMatchRect(&p_active_match_rect))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FindInPage::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_version), 
std::move(p_rects), 
std::move(p_active_match_rect));
  return true;
}

void FindInPage_FindMatchRects_ProxyToResponder::Run(
    int32_t in_version, const WTF::Vector<::blink::WebFloatRect>& in_rects, const ::blink::WebFloatRect& in_active_match_rect) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_FindMatchRects_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_FindMatchRects_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->version = in_version;
  typename decltype(params->rects)::BaseType::BufferWriter
      rects_writer;
  const mojo::internal::ContainerValidateParams rects_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectFDataView>>(
      in_rects, buffer, &rects_writer, &rects_validate_params,
      &serialization_context);
  params->rects.Set(
      rects_writer.is_null() ? nullptr : rects_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rects.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rects in ");
  typename decltype(params->active_match_rect)::BaseType::BufferWriter
      active_match_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_active_match_rect, buffer, &active_match_rect_writer, &serialization_context);
  params->active_match_rect.Set(
      active_match_rect_writer.is_null() ? nullptr : active_match_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->active_match_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null active_match_rect in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::FindMatchRectsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPage::Name_);
  message.set_method_name("FindMatchRects");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FindInPageStubDispatch::Accept(
    FindInPage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFindInPage_Find_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::Find",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_Find_Params_Data* params =
          reinterpret_cast<internal::FindInPage_Find_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      WTF::String p_search_text{};
      FindOptionsPtr p_options{};
      FindInPage_Find_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadSearchText(&p_search_text))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Find(
std::move(p_request_id), 
std::move(p_search_text), 
std::move(p_options));
      return true;
    }
    case internal::kFindInPage_StopFinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::StopFinding",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_StopFinding_Params_Data* params =
          reinterpret_cast<internal::FindInPage_StopFinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StopFindAction p_action{};
      FindInPage_StopFinding_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopFinding(
std::move(p_action));
      return true;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::ClearActiveFindMatch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_ClearActiveFindMatch_Params_Data* params =
          reinterpret_cast<internal::FindInPage_ClearActiveFindMatch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FindInPage_ClearActiveFindMatch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearActiveFindMatch();
      return true;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
      break;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::ActivateNearestFindResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_ActivateNearestFindResult_Params_Data* params =
          reinterpret_cast<internal::FindInPage_ActivateNearestFindResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      ::blink::WebFloatPoint p_point{};
      FindInPage_ActivateNearestFindResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ActivateNearestFindResult(
std::move(p_request_id), 
std::move(p_point));
      return true;
    }
    case internal::kFindInPage_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_SetClient_Params_Data* params =
          reinterpret_cast<internal::FindInPage_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FindInPageClientPtr p_client{};
      FindInPage_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
      break;
    }
  }
  return false;
}

// static
bool FindInPageStubDispatch::AcceptWithResponder(
    FindInPage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFindInPage_Find_Name: {
      break;
    }
    case internal::kFindInPage_StopFinding_Name: {
      break;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
      break;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::GetNearestFindResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FindInPage_GetNearestFindResult_Params_Data* params =
          reinterpret_cast<
              internal::FindInPage_GetNearestFindResult_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebFloatPoint p_point{};
      FindInPage_GetNearestFindResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 3, false);
        return false;
      }
      FindInPage::GetNearestFindResultCallback callback =
          FindInPage_GetNearestFindResult_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNearestFindResult(
std::move(p_point), std::move(callback));
      return true;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
      break;
    }
    case internal::kFindInPage_SetClient_Name: {
      break;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPage::FindMatchRects",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FindInPage_FindMatchRects_Params_Data* params =
          reinterpret_cast<
              internal::FindInPage_FindMatchRects_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_current_version{};
      FindInPage_FindMatchRects_ParamsDataView input_data_view(params, &serialization_context);
      
      p_current_version = input_data_view.current_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPage::Name_, 6, false);
        return false;
      }
      FindInPage::FindMatchRectsCallback callback =
          FindInPage_FindMatchRects_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FindMatchRects(
std::move(p_current_version), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FindInPageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FindInPage RequestValidator");

  switch (message->header()->name) {
    case internal::kFindInPage_Find_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_Find_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_StopFinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_StopFinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_ClearActiveFindMatch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_GetNearestFindResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_ActivateNearestFindResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_FindMatchRects_Params_Data>(
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

bool FindInPageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FindInPage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFindInPage_GetNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_GetNearestFindResult_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_FindMatchRects_ResponseParams_Data>(
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
const char FindInPageClient::Name_[] = "blink.mojom.FindInPageClient";

FindInPageClientProxy::FindInPageClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FindInPageClientProxy::SetNumberOfMatches(
    int32_t in_request_id, uint32_t in_number_of_matches, FindMatchUpdateType in_update_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPageClient::SetNumberOfMatches");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPageClient_SetNumberOfMatches_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPageClient_SetNumberOfMatches_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  params->number_of_matches = in_number_of_matches;
  mojo::internal::Serialize<::blink::mojom::FindMatchUpdateType>(
      in_update_type, &params->update_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPageClient::Name_);
  message.set_method_name("SetNumberOfMatches");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageClientProxy::SetActiveMatch(
    int32_t in_request_id, const ::blink::WebRect& in_active_match_rect, int32_t in_active_match_ordinal, FindMatchUpdateType in_update_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FindInPageClient::SetActiveMatch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPageClient_SetActiveMatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPageClient_SetActiveMatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  typename decltype(params->active_match_rect)::BaseType::BufferWriter
      active_match_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_active_match_rect, buffer, &active_match_rect_writer, &serialization_context);
  params->active_match_rect.Set(
      active_match_rect_writer.is_null() ? nullptr : active_match_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->active_match_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null active_match_rect in FindInPageClient.SetActiveMatch request");
  params->active_match_ordinal = in_active_match_ordinal;
  mojo::internal::Serialize<::blink::mojom::FindMatchUpdateType>(
      in_update_type, &params->update_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FindInPageClient::Name_);
  message.set_method_name("SetActiveMatch");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FindInPageClientStubDispatch::Accept(
    FindInPageClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFindInPageClient_SetNumberOfMatches_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPageClient::SetNumberOfMatches",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPageClient_SetNumberOfMatches_Params_Data* params =
          reinterpret_cast<internal::FindInPageClient_SetNumberOfMatches_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      uint32_t p_number_of_matches{};
      FindMatchUpdateType p_update_type{};
      FindInPageClient_SetNumberOfMatches_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      p_number_of_matches = input_data_view.number_of_matches();
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPageClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNumberOfMatches(
std::move(p_request_id), 
std::move(p_number_of_matches), 
std::move(p_update_type));
      return true;
    }
    case internal::kFindInPageClient_SetActiveMatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FindInPageClient::SetActiveMatch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPageClient_SetActiveMatch_Params_Data* params =
          reinterpret_cast<internal::FindInPageClient_SetActiveMatch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      ::blink::WebRect p_active_match_rect{};
      int32_t p_active_match_ordinal{};
      FindMatchUpdateType p_update_type{};
      FindInPageClient_SetActiveMatch_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadActiveMatchRect(&p_active_match_rect))
        success = false;
      p_active_match_ordinal = input_data_view.active_match_ordinal();
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FindInPageClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetActiveMatch(
std::move(p_request_id), 
std::move(p_active_match_rect), 
std::move(p_active_match_ordinal), 
std::move(p_update_type));
      return true;
    }
  }
  return false;
}

// static
bool FindInPageClientStubDispatch::AcceptWithResponder(
    FindInPageClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFindInPageClient_SetNumberOfMatches_Name: {
      break;
    }
    case internal::kFindInPageClient_SetActiveMatch_Name: {
      break;
    }
  }
  return false;
}

bool FindInPageClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FindInPageClient RequestValidator");

  switch (message->header()->name) {
    case internal::kFindInPageClient_SetNumberOfMatches_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPageClient_SetNumberOfMatches_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPageClient_SetActiveMatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPageClient_SetActiveMatch_Params_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::FindOptions::DataView, ::blink::mojom::blink::FindOptionsPtr>::Read(
    ::blink::mojom::blink::FindOptions::DataView input,
    ::blink::mojom::blink::FindOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::FindOptionsPtr result(::blink::mojom::blink::FindOptions::New());
  
      result->forward = input.forward();
      result->match_case = input.match_case();
      result->find_next = input.find_next();
      result->force = input.force();
      result->run_synchronously_for_testing = input.run_synchronously_for_testing();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif