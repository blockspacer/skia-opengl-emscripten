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

#include "services/network/public/mojom/url_loader.mojom-blink.h"

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

#include "services/network/public/mojom/url_loader.mojom-params-data.h"
#include "services/network/public/mojom/url_loader.mojom-shared-message-ids.h"

#include "services/network/public/mojom/url_loader.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/http_request_headers_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
URLRequest::URLRequest()
    : method(),
      url(),
      site_for_cookies(),
      top_frame_origin(),
      attach_same_site_cookies(),
      update_first_party_url_on_redirect(),
      request_initiator(),
      referrer(),
      referrer_policy(),
      is_prerendering(),
      headers(),
      cors_exempt_headers(),
      load_flags(),
      allow_credentials(),
      plugin_child_id(),
      resource_type(),
      priority(),
      appcache_host_id(),
      should_reset_appcache(),
      is_external_request(),
      cors_preflight_policy(),
      originated_from_service_worker(),
      skip_service_worker(),
      corb_detachable(false),
      corb_excluded(false),
      fetch_request_mode(),
      fetch_credentials_mode(),
      fetch_redirect_mode(),
      fetch_integrity(),
      fetch_request_context_type(),
      request_body(),
      keepalive(),
      has_user_gesture(),
      enable_load_timing(),
      enable_upload_progress(),
      do_not_prompt_for_login(),
      render_frame_id(),
      is_main_frame(),
      transition_type(),
      allow_download(),
      report_raw_headers(),
      previews_state(),
      initiated_in_secure_context(),
      upgrade_if_insecure(),
      is_revalidating(),
      throttling_profile_id(),
      custom_proxy_pre_cache_headers(),
      custom_proxy_post_cache_headers(),
      fetch_window_id(),
      devtools_request_id() {}

URLRequest::URLRequest(
    const WTF::String& method_in,
    const ::blink::KURL& url_in,
    const ::blink::KURL& site_for_cookies_in,
    const scoped_refptr<const ::blink::SecurityOrigin>& top_frame_origin_in,
    bool attach_same_site_cookies_in,
    bool update_first_party_url_on_redirect_in,
    const scoped_refptr<const ::blink::SecurityOrigin>& request_initiator_in,
    const ::blink::KURL& referrer_in,
    URLRequestReferrerPolicy referrer_policy_in,
    bool is_prerendering_in,
    const ::blink::HTTPHeaderMap& headers_in,
    const ::blink::HTTPHeaderMap& cors_exempt_headers_in,
    int32_t load_flags_in,
    bool allow_credentials_in,
    int32_t plugin_child_id_in,
    int32_t resource_type_in,
    RequestPriority priority_in,
    int32_t appcache_host_id_in,
    bool should_reset_appcache_in,
    bool is_external_request_in,
    ::network::mojom::blink::CorsPreflightPolicy cors_preflight_policy_in,
    bool originated_from_service_worker_in,
    bool skip_service_worker_in,
    bool corb_detachable_in,
    bool corb_excluded_in,
    ::network::mojom::blink::FetchRequestMode fetch_request_mode_in,
    ::network::mojom::blink::FetchCredentialsMode fetch_credentials_mode_in,
    ::network::mojom::blink::FetchRedirectMode fetch_redirect_mode_in,
    const WTF::String& fetch_integrity_in,
    int32_t fetch_request_context_type_in,
    scoped_refptr<::blink::EncodedFormData> request_body_in,
    bool keepalive_in,
    bool has_user_gesture_in,
    bool enable_load_timing_in,
    bool enable_upload_progress_in,
    bool do_not_prompt_for_login_in,
    int32_t render_frame_id_in,
    bool is_main_frame_in,
    int32_t transition_type_in,
    bool allow_download_in,
    bool report_raw_headers_in,
    int32_t previews_state_in,
    bool initiated_in_secure_context_in,
    bool upgrade_if_insecure_in,
    bool is_revalidating_in,
    const base::Optional<base::UnguessableToken>& throttling_profile_id_in,
    const ::blink::HTTPHeaderMap& custom_proxy_pre_cache_headers_in,
    const ::blink::HTTPHeaderMap& custom_proxy_post_cache_headers_in,
    const base::Optional<base::UnguessableToken>& fetch_window_id_in,
    const WTF::String& devtools_request_id_in)
    : method(std::move(method_in)),
      url(std::move(url_in)),
      site_for_cookies(std::move(site_for_cookies_in)),
      top_frame_origin(std::move(top_frame_origin_in)),
      attach_same_site_cookies(std::move(attach_same_site_cookies_in)),
      update_first_party_url_on_redirect(std::move(update_first_party_url_on_redirect_in)),
      request_initiator(std::move(request_initiator_in)),
      referrer(std::move(referrer_in)),
      referrer_policy(std::move(referrer_policy_in)),
      is_prerendering(std::move(is_prerendering_in)),
      headers(std::move(headers_in)),
      cors_exempt_headers(std::move(cors_exempt_headers_in)),
      load_flags(std::move(load_flags_in)),
      allow_credentials(std::move(allow_credentials_in)),
      plugin_child_id(std::move(plugin_child_id_in)),
      resource_type(std::move(resource_type_in)),
      priority(std::move(priority_in)),
      appcache_host_id(std::move(appcache_host_id_in)),
      should_reset_appcache(std::move(should_reset_appcache_in)),
      is_external_request(std::move(is_external_request_in)),
      cors_preflight_policy(std::move(cors_preflight_policy_in)),
      originated_from_service_worker(std::move(originated_from_service_worker_in)),
      skip_service_worker(std::move(skip_service_worker_in)),
      corb_detachable(std::move(corb_detachable_in)),
      corb_excluded(std::move(corb_excluded_in)),
      fetch_request_mode(std::move(fetch_request_mode_in)),
      fetch_credentials_mode(std::move(fetch_credentials_mode_in)),
      fetch_redirect_mode(std::move(fetch_redirect_mode_in)),
      fetch_integrity(std::move(fetch_integrity_in)),
      fetch_request_context_type(std::move(fetch_request_context_type_in)),
      request_body(std::move(request_body_in)),
      keepalive(std::move(keepalive_in)),
      has_user_gesture(std::move(has_user_gesture_in)),
      enable_load_timing(std::move(enable_load_timing_in)),
      enable_upload_progress(std::move(enable_upload_progress_in)),
      do_not_prompt_for_login(std::move(do_not_prompt_for_login_in)),
      render_frame_id(std::move(render_frame_id_in)),
      is_main_frame(std::move(is_main_frame_in)),
      transition_type(std::move(transition_type_in)),
      allow_download(std::move(allow_download_in)),
      report_raw_headers(std::move(report_raw_headers_in)),
      previews_state(std::move(previews_state_in)),
      initiated_in_secure_context(std::move(initiated_in_secure_context_in)),
      upgrade_if_insecure(std::move(upgrade_if_insecure_in)),
      is_revalidating(std::move(is_revalidating_in)),
      throttling_profile_id(std::move(throttling_profile_id_in)),
      custom_proxy_pre_cache_headers(std::move(custom_proxy_pre_cache_headers_in)),
      custom_proxy_post_cache_headers(std::move(custom_proxy_post_cache_headers_in)),
      fetch_window_id(std::move(fetch_window_id_in)),
      devtools_request_id(std::move(devtools_request_id_in)) {}

URLRequest::~URLRequest() = default;

bool URLRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
URLRequestBody::URLRequestBody()
    : elements(),
      identifier(),
      contains_sensitive_info() {}

URLRequestBody::URLRequestBody(
    WTF::Vector<::blink::FormDataElement> elements_in,
    uint64_t identifier_in,
    bool contains_sensitive_info_in)
    : elements(std::move(elements_in)),
      identifier(std::move(identifier_in)),
      contains_sensitive_info(std::move(contains_sensitive_info_in)) {}

URLRequestBody::~URLRequestBody() = default;

bool URLRequestBody::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DataElement::DataElement()
    : type(),
      buf(),
      path(),
      file(),
      blob_uuid(),
      data_pipe_getter(),
      chunked_data_pipe_getter(),
      offset(),
      length(),
      expected_modification_time() {}

DataElement::DataElement(
    DataElementType type_in,
    const WTF::Vector<uint8_t>& buf_in,
    const base::FilePath& path_in,
    base::File file_in,
    const WTF::String& blob_uuid_in,
    ::network::mojom::blink::DataPipeGetterPtrInfo data_pipe_getter_in,
    ::network::mojom::blink::ChunkedDataPipeGetterPtrInfo chunked_data_pipe_getter_in,
    uint64_t offset_in,
    uint64_t length_in,
    base::Time expected_modification_time_in)
    : type(std::move(type_in)),
      buf(std::move(buf_in)),
      path(std::move(path_in)),
      file(std::move(file_in)),
      blob_uuid(std::move(blob_uuid_in)),
      data_pipe_getter(std::move(data_pipe_getter_in)),
      chunked_data_pipe_getter(std::move(chunked_data_pipe_getter_in)),
      offset(std::move(offset_in)),
      length(std::move(length_in)),
      expected_modification_time(std::move(expected_modification_time_in)) {}

DataElement::~DataElement() = default;

bool DataElement::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
URLLoaderClientEndpoints::URLLoaderClientEndpoints()
    : url_loader(),
      url_loader_client() {}

URLLoaderClientEndpoints::URLLoaderClientEndpoints(
    URLLoaderPtrInfo url_loader_in,
    URLLoaderClientRequest url_loader_client_in)
    : url_loader(std::move(url_loader_in)),
      url_loader_client(std::move(url_loader_client_in)) {}

URLLoaderClientEndpoints::~URLLoaderClientEndpoints() = default;

bool URLLoaderClientEndpoints::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char URLLoader::Name_[] = "network.mojom.URLLoader";
constexpr uint32_t URLLoader::kClientDisconnectReason;

URLLoaderProxy::URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void URLLoaderProxy::FollowRedirect(
    const WTF::Vector<WTF::String>& in_removed_headers, const ::blink::HTTPHeaderMap& in_modified_headers, const base::Optional<::blink::KURL>& in_new_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoader::FollowRedirect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoader_FollowRedirect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_FollowRedirect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->removed_headers)::BaseType::BufferWriter
      removed_headers_writer;
  const mojo::internal::ContainerValidateParams removed_headers_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_removed_headers, buffer, &removed_headers_writer, &removed_headers_validate_params,
      &serialization_context);
  params->removed_headers.Set(
      removed_headers_writer.is_null() ? nullptr : removed_headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->removed_headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null removed_headers in URLLoader.FollowRedirect request");
  typename decltype(params->modified_headers)::BaseType::BufferWriter
      modified_headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      in_modified_headers, buffer, &modified_headers_writer, &serialization_context);
  params->modified_headers.Set(
      modified_headers_writer.is_null() ? nullptr : modified_headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->modified_headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null modified_headers in URLLoader.FollowRedirect request");
  typename decltype(params->new_url)::BaseType::BufferWriter
      new_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_new_url, buffer, &new_url_writer, &serialization_context);
  params->new_url.Set(
      new_url_writer.is_null() ? nullptr : new_url_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoader::Name_);
  message.set_method_name("FollowRedirect");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderProxy::ProceedWithResponse(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoader::ProceedWithResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoader_ProceedWithResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_ProceedWithResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoader::Name_);
  message.set_method_name("ProceedWithResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderProxy::SetPriority(
    RequestPriority in_priority, int32_t in_intra_priority_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoader::SetPriority");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoader_SetPriority_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_SetPriority_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RequestPriority>(
      in_priority, &params->priority);
  params->intra_priority_value = in_intra_priority_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoader::Name_);
  message.set_method_name("SetPriority");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderProxy::PauseReadingBodyFromNet(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoader::PauseReadingBodyFromNet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoader_PauseReadingBodyFromNet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_PauseReadingBodyFromNet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoader::Name_);
  message.set_method_name("PauseReadingBodyFromNet");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderProxy::ResumeReadingBodyFromNet(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoader::ResumeReadingBodyFromNet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoader_ResumeReadingBodyFromNet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoader_ResumeReadingBodyFromNet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoader::Name_);
  message.set_method_name("ResumeReadingBodyFromNet");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool URLLoaderStubDispatch::Accept(
    URLLoader* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoader::FollowRedirect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoader_FollowRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoader_FollowRedirect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<WTF::String> p_removed_headers{};
      ::blink::HTTPHeaderMap p_modified_headers{};
      base::Optional<::blink::KURL> p_new_url{};
      URLLoader_FollowRedirect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRemovedHeaders(&p_removed_headers))
        success = false;
      if (!input_data_view.ReadModifiedHeaders(&p_modified_headers))
        success = false;
      if (!input_data_view.ReadNewUrl(&p_new_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoader::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FollowRedirect(
std::move(p_removed_headers), 
std::move(p_modified_headers), 
std::move(p_new_url));
      return true;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoader::ProceedWithResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoader_ProceedWithResponse_Params_Data* params =
          reinterpret_cast<internal::URLLoader_ProceedWithResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_ProceedWithResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoader::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ProceedWithResponse();
      return true;
    }
    case internal::kURLLoader_SetPriority_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoader::SetPriority",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoader_SetPriority_Params_Data* params =
          reinterpret_cast<internal::URLLoader_SetPriority_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RequestPriority p_priority{};
      int32_t p_intra_priority_value{};
      URLLoader_SetPriority_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPriority(&p_priority))
        success = false;
      p_intra_priority_value = input_data_view.intra_priority_value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoader::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetPriority(
std::move(p_priority), 
std::move(p_intra_priority_value));
      return true;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoader::PauseReadingBodyFromNet",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoader_PauseReadingBodyFromNet_Params_Data* params =
          reinterpret_cast<internal::URLLoader_PauseReadingBodyFromNet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_PauseReadingBodyFromNet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoader::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PauseReadingBodyFromNet();
      return true;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoader::ResumeReadingBodyFromNet",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* params =
          reinterpret_cast<internal::URLLoader_ResumeReadingBodyFromNet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoader_ResumeReadingBodyFromNet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoader::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResumeReadingBodyFromNet();
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderStubDispatch::AcceptWithResponder(
    URLLoader* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      break;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
      break;
    }
    case internal::kURLLoader_SetPriority_Name: {
      break;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
      break;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
      break;
    }
  }
  return false;
}

bool URLLoaderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoader RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoader_FollowRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_FollowRedirect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_ProceedWithResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_ProceedWithResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_SetPriority_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_SetPriority_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_PauseReadingBodyFromNet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_PauseReadingBodyFromNet_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoader_ResumeReadingBodyFromNet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_ResumeReadingBodyFromNet_Params_Data>(
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

const char URLLoaderClient::Name_[] = "network.mojom.URLLoaderClient";

class URLLoaderClient_OnUploadProgress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  URLLoaderClient_OnUploadProgress_ForwardToCallback(
      URLLoaderClient::OnUploadProgressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  URLLoaderClient::OnUploadProgressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(URLLoaderClient_OnUploadProgress_ForwardToCallback);
};

URLLoaderClientProxy::URLLoaderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void URLLoaderClientProxy::OnReceiveResponse(
    URLResponseHeadPtr in_head) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      in_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnReceiveResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderClientProxy::OnReceiveRedirect(
    URLRequestRedirectInfoPtr in_redirect_info, URLResponseHeadPtr in_head) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveRedirect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveRedirect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveRedirect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->redirect_info)::BaseType::BufferWriter
      redirect_info_writer;
  mojo::internal::Serialize<::network::mojom::URLRequestRedirectInfoDataView>(
      in_redirect_info, buffer, &redirect_info_writer, &serialization_context);
  params->redirect_info.Set(
      redirect_info_writer.is_null() ? nullptr : redirect_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->redirect_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null redirect_info in URLLoaderClient.OnReceiveRedirect request");
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      in_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null head in URLLoaderClient.OnReceiveRedirect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnReceiveRedirect");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderClientProxy::OnUploadProgress(
    int64_t in_current_position, int64_t in_total_size, OnUploadProgressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnUploadProgress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnUploadProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnUploadProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->current_position = in_current_position;
  params->total_size = in_total_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnUploadProgress");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new URLLoaderClient_OnUploadProgress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void URLLoaderClientProxy::OnReceiveCachedMetadata(
    mojo_base::BigBuffer in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnReceiveCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in URLLoaderClient.OnReceiveCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnReceiveCachedMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderClientProxy::OnTransferSizeUpdated(
    int32_t in_transfer_size_diff) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnTransferSizeUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnTransferSizeUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transfer_size_diff = in_transfer_size_diff;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnTransferSizeUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderClientProxy::OnStartLoadingResponseBody(
    mojo::ScopedDataPipeConsumerHandle in_body) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnStartLoadingResponseBody");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnStartLoadingResponseBody_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_body, &params->body, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->body),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid body in URLLoaderClient.OnStartLoadingResponseBody request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnStartLoadingResponseBody");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void URLLoaderClientProxy::OnComplete(
    URLLoaderCompletionStatusPtr in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderCompletionStatusDataView>(
      in_status, buffer, &status_writer, &serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in URLLoaderClient.OnComplete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class URLLoaderClient_OnUploadProgress_ProxyToResponder {
 public:
  static URLLoaderClient::OnUploadProgressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<URLLoaderClient_OnUploadProgress_ProxyToResponder> proxy(
        new URLLoaderClient_OnUploadProgress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&URLLoaderClient_OnUploadProgress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~URLLoaderClient_OnUploadProgress_ProxyToResponder() {
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
  URLLoaderClient_OnUploadProgress_ProxyToResponder(
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
        << "URLLoaderClient::OnUploadProgressCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClient_OnUploadProgress_ProxyToResponder);
};

bool URLLoaderClient_OnUploadProgress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnUploadProgressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  URLLoaderClient_OnUploadProgress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        URLLoaderClient::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void URLLoaderClient_OnUploadProgress_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kURLLoaderClient_OnUploadProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnUploadProgressCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(URLLoaderClient::Name_);
  message.set_method_name("OnUploadProgress");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool URLLoaderClientStubDispatch::Accept(
    URLLoaderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLResponseHeadPtr p_head{};
      URLLoaderClient_OnReceiveResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReceiveResponse(
std::move(p_head));
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveRedirect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnReceiveRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveRedirect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLRequestRedirectInfoPtr p_redirect_info{};
      URLResponseHeadPtr p_head{};
      URLLoaderClient_OnReceiveRedirect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRedirectInfo(&p_redirect_info))
        success = false;
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReceiveRedirect(
std::move(p_redirect_info), 
std::move(p_head));
      return true;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnReceiveCachedMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo_base::BigBuffer p_data{};
      URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReceiveCachedMetadata(
std::move(p_data));
      return true;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnTransferSizeUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_transfer_size_diff{};
      URLLoaderClient_OnTransferSizeUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transfer_size_diff = input_data_view.transfer_size_diff();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTransferSizeUpdated(
std::move(p_transfer_size_diff));
      return true;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnStartLoadingResponseBody",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_body{};
      URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView input_data_view(params, &serialization_context);
      
      p_body = input_data_view.TakeBody();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStartLoadingResponseBody(
std::move(p_body));
      return true;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnComplete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::URLLoaderClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::URLLoaderClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      URLLoaderCompletionStatusPtr p_status{};
      URLLoaderClient_OnComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnComplete(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool URLLoaderClientStubDispatch::AcceptWithResponder(
    URLLoaderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::URLLoaderClient::OnUploadProgress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::URLLoaderClient_OnUploadProgress_Params_Data* params =
          reinterpret_cast<
              internal::URLLoaderClient_OnUploadProgress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_current_position{};
      int64_t p_total_size{};
      URLLoaderClient_OnUploadProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_current_position = input_data_view.current_position();
      p_total_size = input_data_view.total_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            URLLoaderClient::Name_, 2, false);
        return false;
      }
      URLLoaderClient::OnUploadProgressCallback callback =
          URLLoaderClient_OnUploadProgress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnUploadProgress(
std::move(p_current_position), 
std::move(p_total_size), std::move(callback));
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      break;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      break;
    }
  }
  return false;
}

bool URLLoaderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnReceiveResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveRedirect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnUploadProgress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnReceiveCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnTransferSizeUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnStartLoadingResponseBody_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kURLLoaderClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnComplete_Params_Data>(
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

bool URLLoaderClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "URLLoaderClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kURLLoaderClient_OnUploadProgress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data>(
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
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::URLRequest::DataView, ::network::mojom::blink::URLRequestPtr>::Read(
    ::network::mojom::blink::URLRequest::DataView input,
    ::network::mojom::blink::URLRequestPtr* output) {
  bool success = true;
  ::network::mojom::blink::URLRequestPtr result(::network::mojom::blink::URLRequest::New());
  
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadSiteForCookies(&result->site_for_cookies))
        success = false;
      if (!input.ReadTopFrameOrigin(&result->top_frame_origin))
        success = false;
      result->attach_same_site_cookies = input.attach_same_site_cookies();
      result->update_first_party_url_on_redirect = input.update_first_party_url_on_redirect();
      if (!input.ReadRequestInitiator(&result->request_initiator))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadReferrerPolicy(&result->referrer_policy))
        success = false;
      result->is_prerendering = input.is_prerendering();
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadCorsExemptHeaders(&result->cors_exempt_headers))
        success = false;
      result->load_flags = input.load_flags();
      result->allow_credentials = input.allow_credentials();
      result->plugin_child_id = input.plugin_child_id();
      result->resource_type = input.resource_type();
      if (!input.ReadPriority(&result->priority))
        success = false;
      result->appcache_host_id = input.appcache_host_id();
      result->should_reset_appcache = input.should_reset_appcache();
      result->is_external_request = input.is_external_request();
      if (!input.ReadCorsPreflightPolicy(&result->cors_preflight_policy))
        success = false;
      result->originated_from_service_worker = input.originated_from_service_worker();
      result->skip_service_worker = input.skip_service_worker();
      result->corb_detachable = input.corb_detachable();
      result->corb_excluded = input.corb_excluded();
      if (!input.ReadFetchRequestMode(&result->fetch_request_mode))
        success = false;
      if (!input.ReadFetchCredentialsMode(&result->fetch_credentials_mode))
        success = false;
      if (!input.ReadFetchRedirectMode(&result->fetch_redirect_mode))
        success = false;
      if (!input.ReadFetchIntegrity(&result->fetch_integrity))
        success = false;
      result->fetch_request_context_type = input.fetch_request_context_type();
      if (!input.ReadRequestBody(&result->request_body))
        success = false;
      result->keepalive = input.keepalive();
      result->has_user_gesture = input.has_user_gesture();
      result->enable_load_timing = input.enable_load_timing();
      result->enable_upload_progress = input.enable_upload_progress();
      result->do_not_prompt_for_login = input.do_not_prompt_for_login();
      result->render_frame_id = input.render_frame_id();
      result->is_main_frame = input.is_main_frame();
      result->transition_type = input.transition_type();
      result->allow_download = input.allow_download();
      result->report_raw_headers = input.report_raw_headers();
      result->previews_state = input.previews_state();
      result->initiated_in_secure_context = input.initiated_in_secure_context();
      result->upgrade_if_insecure = input.upgrade_if_insecure();
      result->is_revalidating = input.is_revalidating();
      if (!input.ReadThrottlingProfileId(&result->throttling_profile_id))
        success = false;
      if (!input.ReadCustomProxyPreCacheHeaders(&result->custom_proxy_pre_cache_headers))
        success = false;
      if (!input.ReadCustomProxyPostCacheHeaders(&result->custom_proxy_post_cache_headers))
        success = false;
      if (!input.ReadFetchWindowId(&result->fetch_window_id))
        success = false;
      if (!input.ReadDevtoolsRequestId(&result->devtools_request_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::URLRequestBody::DataView, ::network::mojom::blink::URLRequestBodyPtr>::Read(
    ::network::mojom::blink::URLRequestBody::DataView input,
    ::network::mojom::blink::URLRequestBodyPtr* output) {
  bool success = true;
  ::network::mojom::blink::URLRequestBodyPtr result(::network::mojom::blink::URLRequestBody::New());
  
      if (!input.ReadElements(&result->elements))
        success = false;
      result->identifier = input.identifier();
      result->contains_sensitive_info = input.contains_sensitive_info();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::DataElement::DataView, ::network::mojom::blink::DataElementPtr>::Read(
    ::network::mojom::blink::DataElement::DataView input,
    ::network::mojom::blink::DataElementPtr* output) {
  bool success = true;
  ::network::mojom::blink::DataElementPtr result(::network::mojom::blink::DataElement::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadBuf(&result->buf))
        success = false;
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadFile(&result->file))
        success = false;
      if (!input.ReadBlobUuid(&result->blob_uuid))
        success = false;
      result->data_pipe_getter =
          input.TakeDataPipeGetter<decltype(result->data_pipe_getter)>();
      result->chunked_data_pipe_getter =
          input.TakeChunkedDataPipeGetter<decltype(result->chunked_data_pipe_getter)>();
      result->offset = input.offset();
      result->length = input.length();
      if (!input.ReadExpectedModificationTime(&result->expected_modification_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::URLLoaderClientEndpoints::DataView, ::network::mojom::blink::URLLoaderClientEndpointsPtr>::Read(
    ::network::mojom::blink::URLLoaderClientEndpoints::DataView input,
    ::network::mojom::blink::URLLoaderClientEndpointsPtr* output) {
  bool success = true;
  ::network::mojom::blink::URLLoaderClientEndpointsPtr result(::network::mojom::blink::URLLoaderClientEndpoints::New());
  
      result->url_loader =
          input.TakeUrlLoader<decltype(result->url_loader)>();
      result->url_loader_client =
          input.TakeUrlLoaderClient<decltype(result->url_loader_client)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif