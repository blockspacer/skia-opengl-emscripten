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

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom.h"

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

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-params-data.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/public/common/manifest/manifest_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
BackgroundFetchSettledFetch::BackgroundFetchSettledFetch()
    : request(),
      response() {}

BackgroundFetchSettledFetch::BackgroundFetchSettledFetch(
    ::blink::mojom::FetchAPIRequestPtr request_in,
    ::blink::mojom::FetchAPIResponsePtr response_in)
    : request(std::move(request_in)),
      response(std::move(response_in)) {}

BackgroundFetchSettledFetch::~BackgroundFetchSettledFetch() = default;

bool BackgroundFetchSettledFetch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BackgroundFetchOptions::BackgroundFetchOptions()
    : icons(),
      download_total(),
      title() {}

BackgroundFetchOptions::BackgroundFetchOptions(
    const std::vector<::blink::Manifest::ImageResource>& icons_in,
    uint64_t download_total_in,
    const std::string& title_in)
    : icons(std::move(icons_in)),
      download_total(std::move(download_total_in)),
      title(std::move(title_in)) {}

BackgroundFetchOptions::~BackgroundFetchOptions() = default;

bool BackgroundFetchOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BackgroundFetchRegistrationData::BackgroundFetchRegistrationData()
    : developer_id(),
      upload_total(),
      uploaded(),
      download_total(),
      downloaded(),
      result(BackgroundFetchResult::UNSET),
      failure_reason(BackgroundFetchFailureReason::NONE) {}

BackgroundFetchRegistrationData::BackgroundFetchRegistrationData(
    const std::string& developer_id_in,
    uint64_t upload_total_in,
    uint64_t uploaded_in,
    uint64_t download_total_in,
    uint64_t downloaded_in,
    BackgroundFetchResult result_in,
    BackgroundFetchFailureReason failure_reason_in)
    : developer_id(std::move(developer_id_in)),
      upload_total(std::move(upload_total_in)),
      uploaded(std::move(uploaded_in)),
      download_total(std::move(download_total_in)),
      downloaded(std::move(downloaded_in)),
      result(std::move(result_in)),
      failure_reason(std::move(failure_reason_in)) {}

BackgroundFetchRegistrationData::~BackgroundFetchRegistrationData() = default;
size_t BackgroundFetchRegistrationData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->developer_id);
  seed = mojo::internal::Hash(seed, this->upload_total);
  seed = mojo::internal::Hash(seed, this->uploaded);
  seed = mojo::internal::Hash(seed, this->download_total);
  seed = mojo::internal::Hash(seed, this->downloaded);
  seed = mojo::internal::Hash(seed, this->result);
  seed = mojo::internal::Hash(seed, this->failure_reason);
  return seed;
}

bool BackgroundFetchRegistrationData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BackgroundFetchRegistration::BackgroundFetchRegistration()
    : registration_data(),
      registration_interface() {}

BackgroundFetchRegistration::BackgroundFetchRegistration(
    BackgroundFetchRegistrationDataPtr registration_data_in,
    BackgroundFetchRegistrationServicePtrInfo registration_interface_in)
    : registration_data(std::move(registration_data_in)),
      registration_interface(std::move(registration_interface_in)) {}

BackgroundFetchRegistration::~BackgroundFetchRegistration() = default;

bool BackgroundFetchRegistration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BackgroundFetchUkmData::BackgroundFetchUkmData()
    : ideal_to_chosen_icon_size(-1) {}

BackgroundFetchUkmData::BackgroundFetchUkmData(
    int64_t ideal_to_chosen_icon_size_in)
    : ideal_to_chosen_icon_size(std::move(ideal_to_chosen_icon_size_in)) {}

BackgroundFetchUkmData::~BackgroundFetchUkmData() = default;
size_t BackgroundFetchUkmData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->ideal_to_chosen_icon_size);
  return seed;
}

bool BackgroundFetchUkmData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BackgroundFetchRegistrationObserver::Name_[] = "blink.mojom.BackgroundFetchRegistrationObserver";

BackgroundFetchRegistrationObserverProxy::BackgroundFetchRegistrationObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BackgroundFetchRegistrationObserverProxy::OnProgress(
    uint64_t in_upload_total, uint64_t in_uploaded, uint64_t in_download_total, uint64_t in_downloaded, BackgroundFetchResult in_result, BackgroundFetchFailureReason in_failure_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnProgress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationObserver_OnProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->upload_total = in_upload_total;
  params->uploaded = in_uploaded;
  params->download_total = in_download_total;
  params->downloaded = in_downloaded;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchResult>(
      in_result, &params->result);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchFailureReason>(
      in_failure_reason, &params->failure_reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationObserver::Name_);
  message.set_method_name("OnProgress");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BackgroundFetchRegistrationObserverProxy::OnRecordsUnavailable(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnRecordsUnavailable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationObserver::Name_);
  message.set_method_name("OnRecordsUnavailable");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void BackgroundFetchRegistrationObserverProxy::OnRequestCompleted(
    ::blink::mojom::FetchAPIRequestPtr in_request, ::blink::mojom::FetchAPIResponsePtr in_response) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnRequestCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in BackgroundFetchRegistrationObserver.OnRequestCompleted request");
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationObserver::Name_);
  message.set_method_name("OnRequestCompleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BackgroundFetchRegistrationObserverStubDispatch::Accept(
    BackgroundFetchRegistrationObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationObserver_OnProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnProgress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data* params =
          reinterpret_cast<internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_upload_total{};
      uint64_t p_uploaded{};
      uint64_t p_download_total{};
      uint64_t p_downloaded{};
      BackgroundFetchResult p_result{};
      BackgroundFetchFailureReason p_failure_reason{};
      BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_upload_total = input_data_view.upload_total();
      p_uploaded = input_data_view.uploaded();
      p_download_total = input_data_view.download_total();
      p_downloaded = input_data_view.downloaded();
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!input_data_view.ReadFailureReason(&p_failure_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnProgress(
std::move(p_upload_total), 
std::move(p_uploaded), 
std::move(p_download_total), 
std::move(p_downloaded), 
std::move(p_result), 
std::move(p_failure_reason));
      return true;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnRecordsUnavailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* params =
          reinterpret_cast<internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BackgroundFetchRegistrationObserver_OnRecordsUnavailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnRecordsUnavailable();
      return true;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationObserver::OnRequestCompleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* params =
          reinterpret_cast<internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request{};
      ::blink::mojom::FetchAPIResponsePtr p_response{};
      BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnRequestCompleted(
std::move(p_request), 
std::move(p_response));
      return true;
    }
  }
  return false;
}

// static
bool BackgroundFetchRegistrationObserverStubDispatch::AcceptWithResponder(
    BackgroundFetchRegistrationObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationObserver_OnProgress_Name: {
      break;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name: {
      break;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name: {
      break;
    }
  }
  return false;
}

bool BackgroundFetchRegistrationObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundFetchRegistrationObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationObserver_OnProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data>(
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

const char BackgroundFetchService::Name_[] = "blink.mojom.BackgroundFetchService";

class BackgroundFetchService_Fetch_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchService_Fetch_ForwardToCallback(
      BackgroundFetchService::FetchCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchService::FetchCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_Fetch_ForwardToCallback);
};

class BackgroundFetchService_GetRegistration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchService_GetRegistration_ForwardToCallback(
      BackgroundFetchService::GetRegistrationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchService::GetRegistrationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetRegistration_ForwardToCallback);
};

class BackgroundFetchService_GetDeveloperIds_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchService_GetDeveloperIds_ForwardToCallback(
      BackgroundFetchService::GetDeveloperIdsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchService::GetDeveloperIdsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetDeveloperIds_ForwardToCallback);
};

class BackgroundFetchService_GetIconDisplaySize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchService_GetIconDisplaySize_ForwardToCallback(
      BackgroundFetchService::GetIconDisplaySizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchService::GetIconDisplaySizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetIconDisplaySize_ForwardToCallback);
};

BackgroundFetchServiceProxy::BackgroundFetchServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BackgroundFetchServiceProxy::Fetch(
    int64_t in_service_worker_registration_id, const std::string& in_developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> in_requests, BackgroundFetchOptionsPtr in_options, const SkBitmap& in_icon, BackgroundFetchUkmDataPtr in_ukm_data, FetchCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::Fetch");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_Fetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_Fetch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in BackgroundFetchService.Fetch request");
  typename decltype(params->requests)::BaseType::BufferWriter
      requests_writer;
  const mojo::internal::ContainerValidateParams requests_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
      in_requests, buffer, &requests_writer, &requests_validate_params,
      &serialization_context);
  params->requests.Set(
      requests_writer.is_null() ? nullptr : requests_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requests.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requests in BackgroundFetchService.Fetch request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundFetchService.Fetch request");
  typename decltype(params->icon)::BaseType::BufferWriter
      icon_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_icon, buffer, &icon_writer, &serialization_context);
  params->icon.Set(
      icon_writer.is_null() ? nullptr : icon_writer.data());
  typename decltype(params->ukm_data)::BaseType::BufferWriter
      ukm_data_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchUkmDataDataView>(
      in_ukm_data, buffer, &ukm_data_writer, &serialization_context);
  params->ukm_data.Set(
      ukm_data_writer.is_null() ? nullptr : ukm_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ukm_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ukm_data in BackgroundFetchService.Fetch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("Fetch");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchService_Fetch_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchServiceProxy::GetRegistration(
    int64_t in_service_worker_registration_id, const std::string& in_developer_id, GetRegistrationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetRegistration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetRegistration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in BackgroundFetchService.GetRegistration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetRegistration");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchService_GetRegistration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchServiceProxy::GetDeveloperIds(
    int64_t in_service_worker_registration_id, GetDeveloperIdsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetDeveloperIds");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetDeveloperIds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetDeveloperIds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->service_worker_registration_id = in_service_worker_registration_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetDeveloperIds");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchService_GetDeveloperIds_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchServiceProxy::GetIconDisplaySize(
    GetIconDisplaySizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetIconDisplaySize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetIconDisplaySize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetIconDisplaySize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetIconDisplaySize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchService_GetIconDisplaySize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BackgroundFetchService_Fetch_ProxyToResponder {
 public:
  static BackgroundFetchService::FetchCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchService_Fetch_ProxyToResponder> proxy(
        new BackgroundFetchService_Fetch_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchService_Fetch_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchService_Fetch_ProxyToResponder() {
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
  BackgroundFetchService_Fetch_ProxyToResponder(
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
        << "BackgroundFetchService::FetchCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundFetchError in_error, BackgroundFetchRegistrationPtr in_registration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_Fetch_ProxyToResponder);
};

bool BackgroundFetchService_Fetch_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::FetchCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchService_Fetch_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchService_Fetch_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundFetchError p_error{};
  BackgroundFetchRegistrationPtr p_registration{};
  BackgroundFetchService_Fetch_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadRegistration(&p_registration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_registration));
  return true;
}

void BackgroundFetchService_Fetch_ProxyToResponder::Run(
    BackgroundFetchError in_error, BackgroundFetchRegistrationPtr in_registration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_Fetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_Fetch_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchError>(
      in_error, &params->error);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::FetchCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("Fetch");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundFetchService_GetRegistration_ProxyToResponder {
 public:
  static BackgroundFetchService::GetRegistrationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchService_GetRegistration_ProxyToResponder> proxy(
        new BackgroundFetchService_GetRegistration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchService_GetRegistration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchService_GetRegistration_ProxyToResponder() {
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
  BackgroundFetchService_GetRegistration_ProxyToResponder(
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
        << "BackgroundFetchService::GetRegistrationCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundFetchError in_error, BackgroundFetchRegistrationPtr in_registration);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetRegistration_ProxyToResponder);
};

bool BackgroundFetchService_GetRegistration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetRegistrationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchService_GetRegistration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchService_GetRegistration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundFetchError p_error{};
  BackgroundFetchRegistrationPtr p_registration{};
  BackgroundFetchService_GetRegistration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadRegistration(&p_registration))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_registration));
  return true;
}

void BackgroundFetchService_GetRegistration_ProxyToResponder::Run(
    BackgroundFetchError in_error, BackgroundFetchRegistrationPtr in_registration) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetRegistration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetRegistration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchError>(
      in_error, &params->error);
  typename decltype(params->registration)::BaseType::BufferWriter
      registration_writer;
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
      in_registration, buffer, &registration_writer, &serialization_context);
  params->registration.Set(
      registration_writer.is_null() ? nullptr : registration_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetRegistrationCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetRegistration");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundFetchService_GetDeveloperIds_ProxyToResponder {
 public:
  static BackgroundFetchService::GetDeveloperIdsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchService_GetDeveloperIds_ProxyToResponder> proxy(
        new BackgroundFetchService_GetDeveloperIds_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchService_GetDeveloperIds_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchService_GetDeveloperIds_ProxyToResponder() {
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
  BackgroundFetchService_GetDeveloperIds_ProxyToResponder(
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
        << "BackgroundFetchService::GetDeveloperIdsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundFetchError in_error, const std::vector<std::string>& in_developer_ids);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetDeveloperIds_ProxyToResponder);
};

bool BackgroundFetchService_GetDeveloperIds_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetDeveloperIdsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundFetchError p_error{};
  std::vector<std::string> p_developer_ids{};
  BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadDeveloperIds(&p_developer_ids))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_developer_ids));
  return true;
}

void BackgroundFetchService_GetDeveloperIds_ProxyToResponder::Run(
    BackgroundFetchError in_error, const std::vector<std::string>& in_developer_ids) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetDeveloperIds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchError>(
      in_error, &params->error);
  typename decltype(params->developer_ids)::BaseType::BufferWriter
      developer_ids_writer;
  const mojo::internal::ContainerValidateParams developer_ids_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_developer_ids, buffer, &developer_ids_writer, &developer_ids_validate_params,
      &serialization_context);
  params->developer_ids.Set(
      developer_ids_writer.is_null() ? nullptr : developer_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_ids in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetDeveloperIdsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetDeveloperIds");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundFetchService_GetIconDisplaySize_ProxyToResponder {
 public:
  static BackgroundFetchService::GetIconDisplaySizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchService_GetIconDisplaySize_ProxyToResponder> proxy(
        new BackgroundFetchService_GetIconDisplaySize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchService_GetIconDisplaySize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchService_GetIconDisplaySize_ProxyToResponder() {
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
  BackgroundFetchService_GetIconDisplaySize_ProxyToResponder(
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
        << "BackgroundFetchService::GetIconDisplaySizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gfx::Size& in_icon_size_pixels);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchService_GetIconDisplaySize_ProxyToResponder);
};

bool BackgroundFetchService_GetIconDisplaySize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetIconDisplaySizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::Size p_icon_size_pixels{};
  BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIconSizePixels(&p_icon_size_pixels))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchService::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_icon_size_pixels));
  return true;
}

void BackgroundFetchService_GetIconDisplaySize_ProxyToResponder::Run(
    const gfx::Size& in_icon_size_pixels) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchService_GetIconDisplaySize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->icon_size_pixels)::BaseType::BufferWriter
      icon_size_pixels_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_icon_size_pixels, buffer, &icon_size_pixels_writer, &serialization_context);
  params->icon_size_pixels.Set(
      icon_size_pixels_writer.is_null() ? nullptr : icon_size_pixels_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->icon_size_pixels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null icon_size_pixels in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetIconDisplaySizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchService::Name_);
  message.set_method_name("GetIconDisplaySize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BackgroundFetchServiceStubDispatch::Accept(
    BackgroundFetchService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchService_Fetch_Name: {
      break;
    }
    case internal::kBackgroundFetchService_GetRegistration_Name: {
      break;
    }
    case internal::kBackgroundFetchService_GetDeveloperIds_Name: {
      break;
    }
    case internal::kBackgroundFetchService_GetIconDisplaySize_Name: {
      break;
    }
  }
  return false;
}

// static
bool BackgroundFetchServiceStubDispatch::AcceptWithResponder(
    BackgroundFetchService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchService_Fetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::Fetch",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchService_Fetch_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchService_Fetch_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      std::string p_developer_id{};
      std::vector<::blink::mojom::FetchAPIRequestPtr> p_requests{};
      BackgroundFetchOptionsPtr p_options{};
      SkBitmap p_icon{};
      BackgroundFetchUkmDataPtr p_ukm_data{};
      BackgroundFetchService_Fetch_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!input_data_view.ReadRequests(&p_requests))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!input_data_view.ReadIcon(&p_icon))
        success = false;
      if (!input_data_view.ReadUkmData(&p_ukm_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchService::Name_, 0, false);
        return false;
      }
      BackgroundFetchService::FetchCallback callback =
          BackgroundFetchService_Fetch_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Fetch(
std::move(p_service_worker_registration_id), 
std::move(p_developer_id), 
std::move(p_requests), 
std::move(p_options), 
std::move(p_icon), 
std::move(p_ukm_data), std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchService_GetRegistration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetRegistration",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchService_GetRegistration_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchService_GetRegistration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      std::string p_developer_id{};
      BackgroundFetchService_GetRegistration_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchService::Name_, 1, false);
        return false;
      }
      BackgroundFetchService::GetRegistrationCallback callback =
          BackgroundFetchService_GetRegistration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRegistration(
std::move(p_service_worker_registration_id), 
std::move(p_developer_id), std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchService_GetDeveloperIds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetDeveloperIds",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchService_GetDeveloperIds_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchService_GetDeveloperIds_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_service_worker_registration_id{};
      BackgroundFetchService_GetDeveloperIds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchService::Name_, 2, false);
        return false;
      }
      BackgroundFetchService::GetDeveloperIdsCallback callback =
          BackgroundFetchService_GetDeveloperIds_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDeveloperIds(
std::move(p_service_worker_registration_id), std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchService_GetIconDisplaySize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchService::GetIconDisplaySize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchService_GetIconDisplaySize_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchService_GetIconDisplaySize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BackgroundFetchService_GetIconDisplaySize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchService::Name_, 3, false);
        return false;
      }
      BackgroundFetchService::GetIconDisplaySizeCallback callback =
          BackgroundFetchService_GetIconDisplaySize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetIconDisplaySize(std::move(callback));
      return true;
    }
  }
  return false;
}

bool BackgroundFetchServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundFetchService RequestValidator");

  switch (message->header()->name) {
    case internal::kBackgroundFetchService_Fetch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_Fetch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetRegistration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetDeveloperIds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetDeveloperIds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetIconDisplaySize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetIconDisplaySize_Params_Data>(
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

bool BackgroundFetchServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundFetchService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundFetchService_Fetch_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_Fetch_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetRegistration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetDeveloperIds_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchService_GetIconDisplaySize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data>(
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
const char BackgroundFetchRegistrationService::Name_[] = "blink.mojom.BackgroundFetchRegistrationService";

class BackgroundFetchRegistrationService_UpdateUI_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchRegistrationService_UpdateUI_ForwardToCallback(
      BackgroundFetchRegistrationService::UpdateUICallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchRegistrationService::UpdateUICallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_UpdateUI_ForwardToCallback);
};

class BackgroundFetchRegistrationService_Abort_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchRegistrationService_Abort_ForwardToCallback(
      BackgroundFetchRegistrationService::AbortCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchRegistrationService::AbortCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_Abort_ForwardToCallback);
};

class BackgroundFetchRegistrationService_MatchRequests_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundFetchRegistrationService_MatchRequests_ForwardToCallback(
      BackgroundFetchRegistrationService::MatchRequestsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundFetchRegistrationService::MatchRequestsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_MatchRequests_ForwardToCallback);
};

BackgroundFetchRegistrationServiceProxy::BackgroundFetchRegistrationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BackgroundFetchRegistrationServiceProxy::UpdateUI(
    const base::Optional<std::string>& in_title, const SkBitmap& in_icon, UpdateUICallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::UpdateUI");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_UpdateUI_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->title)::BaseType::BufferWriter
      title_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_title, buffer, &title_writer, &serialization_context);
  params->title.Set(
      title_writer.is_null() ? nullptr : title_writer.data());
  typename decltype(params->icon)::BaseType::BufferWriter
      icon_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_icon, buffer, &icon_writer, &serialization_context);
  params->icon.Set(
      icon_writer.is_null() ? nullptr : icon_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("UpdateUI");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchRegistrationService_UpdateUI_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchRegistrationServiceProxy::Abort(
    AbortCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::Abort");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("Abort");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchRegistrationService_Abort_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchRegistrationServiceProxy::MatchRequests(
    ::blink::mojom::FetchAPIRequestPtr in_request_to_match, ::blink::mojom::CacheQueryOptionsPtr in_cache_query_options, bool in_match_all, MatchRequestsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::MatchRequests");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_MatchRequests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_to_match)::BaseType::BufferWriter
      request_to_match_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
      in_request_to_match, buffer, &request_to_match_writer, &serialization_context);
  params->request_to_match.Set(
      request_to_match_writer.is_null() ? nullptr : request_to_match_writer.data());
  typename decltype(params->cache_query_options)::BaseType::BufferWriter
      cache_query_options_writer;
  mojo::internal::Serialize<::blink::mojom::CacheQueryOptionsDataView>(
      in_cache_query_options, buffer, &cache_query_options_writer, &serialization_context);
  params->cache_query_options.Set(
      cache_query_options_writer.is_null() ? nullptr : cache_query_options_writer.data());
  params->match_all = in_match_all;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("MatchRequests");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BackgroundFetchRegistrationService_MatchRequests_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BackgroundFetchRegistrationServiceProxy::AddRegistrationObserver(
    BackgroundFetchRegistrationObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::AddRegistrationObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_AddRegistrationObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchRegistrationObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in BackgroundFetchRegistrationService.AddRegistrationObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("AddRegistrationObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder {
 public:
  static BackgroundFetchRegistrationService::UpdateUICallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder> proxy(
        new BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder() {
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
  BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder(
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
        << "BackgroundFetchRegistrationService::UpdateUICallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundFetchError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder);
};

bool BackgroundFetchRegistrationService_UpdateUI_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::UpdateUICallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundFetchError p_error{};
  BackgroundFetchRegistrationService_UpdateUI_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchRegistrationService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder::Run(
    BackgroundFetchError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_UpdateUI_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::UpdateUICallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("UpdateUI");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundFetchRegistrationService_Abort_ProxyToResponder {
 public:
  static BackgroundFetchRegistrationService::AbortCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchRegistrationService_Abort_ProxyToResponder> proxy(
        new BackgroundFetchRegistrationService_Abort_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchRegistrationService_Abort_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchRegistrationService_Abort_ProxyToResponder() {
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
  BackgroundFetchRegistrationService_Abort_ProxyToResponder(
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
        << "BackgroundFetchRegistrationService::AbortCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BackgroundFetchError in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_Abort_ProxyToResponder);
};

bool BackgroundFetchRegistrationService_Abort_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::AbortCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BackgroundFetchError p_error{};
  BackgroundFetchRegistrationService_Abort_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchRegistrationService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void BackgroundFetchRegistrationService_Abort_ProxyToResponder::Run(
    BackgroundFetchError in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BackgroundFetchError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::AbortCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("Abort");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder {
 public:
  static BackgroundFetchRegistrationService::MatchRequestsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder> proxy(
        new BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder() {
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
  BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder(
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
        << "BackgroundFetchRegistrationService::MatchRequestsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<BackgroundFetchSettledFetchPtr> in_fetches);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder);
};

bool BackgroundFetchRegistrationService_MatchRequests_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::MatchRequestsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<BackgroundFetchSettledFetchPtr> p_fetches{};
  BackgroundFetchRegistrationService_MatchRequests_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFetches(&p_fetches))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BackgroundFetchRegistrationService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_fetches));
  return true;
}

void BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder::Run(
    std::vector<BackgroundFetchSettledFetchPtr> in_fetches) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBackgroundFetchRegistrationService_MatchRequests_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->fetches)::BaseType::BufferWriter
      fetches_writer;
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::BackgroundFetchSettledFetchDataView>>(
      in_fetches, buffer, &fetches_writer, &fetches_validate_params,
      &serialization_context);
  params->fetches.Set(
      fetches_writer.is_null() ? nullptr : fetches_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->fetches.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null fetches in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::MatchRequestsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BackgroundFetchRegistrationService::Name_);
  message.set_method_name("MatchRequests");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool BackgroundFetchRegistrationServiceStubDispatch::Accept(
    BackgroundFetchRegistrationService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationService_UpdateUI_Name: {
      break;
    }
    case internal::kBackgroundFetchRegistrationService_Abort_Name: {
      break;
    }
    case internal::kBackgroundFetchRegistrationService_MatchRequests_Name: {
      break;
    }
    case internal::kBackgroundFetchRegistrationService_AddRegistrationObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::AddRegistrationObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* params =
          reinterpret_cast<internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BackgroundFetchRegistrationObserverPtr p_observer{};
      BackgroundFetchRegistrationService_AddRegistrationObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationService::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddRegistrationObserver(
std::move(p_observer));
      return true;
    }
  }
  return false;
}

// static
bool BackgroundFetchRegistrationServiceStubDispatch::AcceptWithResponder(
    BackgroundFetchRegistrationService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationService_UpdateUI_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::UpdateUI",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::string> p_title{};
      SkBitmap p_icon{};
      BackgroundFetchRegistrationService_UpdateUI_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!input_data_view.ReadIcon(&p_icon))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationService::Name_, 0, false);
        return false;
      }
      BackgroundFetchRegistrationService::UpdateUICallback callback =
          BackgroundFetchRegistrationService_UpdateUI_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateUI(
std::move(p_title), 
std::move(p_icon), std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::Abort",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchRegistrationService_Abort_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchRegistrationService_Abort_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BackgroundFetchRegistrationService_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationService::Name_, 1, false);
        return false;
      }
      BackgroundFetchRegistrationService::AbortCallback callback =
          BackgroundFetchRegistrationService_Abort_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Abort(std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_MatchRequests_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BackgroundFetchRegistrationService::MatchRequests",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data* params =
          reinterpret_cast<
              internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIRequestPtr p_request_to_match{};
      ::blink::mojom::CacheQueryOptionsPtr p_cache_query_options{};
      bool p_match_all{};
      BackgroundFetchRegistrationService_MatchRequests_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestToMatch(&p_request_to_match))
        success = false;
      if (!input_data_view.ReadCacheQueryOptions(&p_cache_query_options))
        success = false;
      p_match_all = input_data_view.match_all();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BackgroundFetchRegistrationService::Name_, 2, false);
        return false;
      }
      BackgroundFetchRegistrationService::MatchRequestsCallback callback =
          BackgroundFetchRegistrationService_MatchRequests_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MatchRequests(
std::move(p_request_to_match), 
std::move(p_cache_query_options), 
std::move(p_match_all), std::move(callback));
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_AddRegistrationObserver_Name: {
      break;
    }
  }
  return false;
}

bool BackgroundFetchRegistrationServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundFetchRegistrationService RequestValidator");

  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationService_UpdateUI_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_MatchRequests_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_AddRegistrationObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data>(
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

bool BackgroundFetchRegistrationServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BackgroundFetchRegistrationService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundFetchRegistrationService_UpdateUI_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_Abort_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBackgroundFetchRegistrationService_MatchRequests_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::BackgroundFetchSettledFetch::DataView, ::blink::mojom::BackgroundFetchSettledFetchPtr>::Read(
    ::blink::mojom::BackgroundFetchSettledFetch::DataView input,
    ::blink::mojom::BackgroundFetchSettledFetchPtr* output) {
  bool success = true;
  ::blink::mojom::BackgroundFetchSettledFetchPtr result(::blink::mojom::BackgroundFetchSettledFetch::New());
  
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadResponse(&result->response))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BackgroundFetchOptions::DataView, ::blink::mojom::BackgroundFetchOptionsPtr>::Read(
    ::blink::mojom::BackgroundFetchOptions::DataView input,
    ::blink::mojom::BackgroundFetchOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::BackgroundFetchOptionsPtr result(::blink::mojom::BackgroundFetchOptions::New());
  
      if (!input.ReadIcons(&result->icons))
        success = false;
      result->download_total = input.download_total();
      if (!input.ReadTitle(&result->title))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BackgroundFetchRegistrationData::DataView, ::blink::mojom::BackgroundFetchRegistrationDataPtr>::Read(
    ::blink::mojom::BackgroundFetchRegistrationData::DataView input,
    ::blink::mojom::BackgroundFetchRegistrationDataPtr* output) {
  bool success = true;
  ::blink::mojom::BackgroundFetchRegistrationDataPtr result(::blink::mojom::BackgroundFetchRegistrationData::New());
  
      if (!input.ReadDeveloperId(&result->developer_id))
        success = false;
      result->upload_total = input.upload_total();
      result->uploaded = input.uploaded();
      result->download_total = input.download_total();
      result->downloaded = input.downloaded();
      if (!input.ReadResult(&result->result))
        success = false;
      if (!input.ReadFailureReason(&result->failure_reason))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BackgroundFetchRegistration::DataView, ::blink::mojom::BackgroundFetchRegistrationPtr>::Read(
    ::blink::mojom::BackgroundFetchRegistration::DataView input,
    ::blink::mojom::BackgroundFetchRegistrationPtr* output) {
  bool success = true;
  ::blink::mojom::BackgroundFetchRegistrationPtr result(::blink::mojom::BackgroundFetchRegistration::New());
  
      if (!input.ReadRegistrationData(&result->registration_data))
        success = false;
      result->registration_interface =
          input.TakeRegistrationInterface<decltype(result->registration_interface)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::BackgroundFetchUkmData::DataView, ::blink::mojom::BackgroundFetchUkmDataPtr>::Read(
    ::blink::mojom::BackgroundFetchUkmData::DataView input,
    ::blink::mojom::BackgroundFetchUkmDataPtr* output) {
  bool success = true;
  ::blink::mojom::BackgroundFetchUkmDataPtr result(::blink::mojom::BackgroundFetchUkmData::New());
  
      result->ideal_to_chosen_icon_size = input.ideal_to_chosen_icon_size();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif