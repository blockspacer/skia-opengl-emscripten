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

#include "services/network/public/mojom/cookie_manager.mojom.h"

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

#include "services/network/public/mojom/cookie_manager.mojom-params-data.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-message-ids.h"

#include "services/network/public/mojom/cookie_manager.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_JUMBO_H_
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace network {
namespace mojom {
CookieManagerParams::CookieManagerParams()
    : block_third_party_cookies(false),
      settings(),
      secure_origin_cookies_allowed_schemes(),
      matching_scheme_cookies_allowed_schemes(),
      third_party_cookies_allowed_schemes(),
      allow_file_scheme_cookies(false) {}

CookieManagerParams::CookieManagerParams(
    bool block_third_party_cookies_in,
    const std::vector<::ContentSettingPatternSource>& settings_in,
    const std::vector<std::string>& secure_origin_cookies_allowed_schemes_in,
    const std::vector<std::string>& matching_scheme_cookies_allowed_schemes_in,
    const std::vector<std::string>& third_party_cookies_allowed_schemes_in,
    bool allow_file_scheme_cookies_in)
    : block_third_party_cookies(std::move(block_third_party_cookies_in)),
      settings(std::move(settings_in)),
      secure_origin_cookies_allowed_schemes(std::move(secure_origin_cookies_allowed_schemes_in)),
      matching_scheme_cookies_allowed_schemes(std::move(matching_scheme_cookies_allowed_schemes_in)),
      third_party_cookies_allowed_schemes(std::move(third_party_cookies_allowed_schemes_in)),
      allow_file_scheme_cookies(std::move(allow_file_scheme_cookies_in)) {}

CookieManagerParams::~CookieManagerParams() = default;

bool CookieManagerParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CookieOptions::CookieOptions()
    : exclude_httponly(true),
      same_site_cookie_context(mojo::internal::ConvertEnumValue<CookieSameSiteContext, net::CookieOptions::SameSiteCookieContext>(CookieSameSiteContext::CROSS_SITE)),
      update_access_time(true),
      server_time(),
      return_excluded_cookies(false) {}

CookieOptions::CookieOptions(
    bool exclude_httponly_in,
    net::CookieOptions::SameSiteCookieContext same_site_cookie_context_in,
    bool update_access_time_in,
    base::Optional<base::Time> server_time_in,
    bool return_excluded_cookies_in)
    : exclude_httponly(std::move(exclude_httponly_in)),
      same_site_cookie_context(std::move(same_site_cookie_context_in)),
      update_access_time(std::move(update_access_time_in)),
      server_time(std::move(server_time_in)),
      return_excluded_cookies(std::move(return_excluded_cookies_in)) {}

CookieOptions::~CookieOptions() = default;

bool CookieOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CanonicalCookie::CanonicalCookie()
    : name(),
      value(),
      domain(),
      path(),
      creation(),
      expiry(),
      last_access(),
      secure(false),
      httponly(false),
      site_restrictions(mojo::internal::ConvertEnumValue<CookieSameSite, net::CookieSameSite>(CookieSameSite::NO_RESTRICTION)),
      priority(mojo::internal::ConvertEnumValue<CookiePriority, net::CookiePriority>(CookiePriority::MEDIUM)) {}

CanonicalCookie::CanonicalCookie(
    const std::string& name_in,
    const std::string& value_in,
    const std::string& domain_in,
    const std::string& path_in,
    base::Time creation_in,
    base::Time expiry_in,
    base::Time last_access_in,
    bool secure_in,
    bool httponly_in,
    net::CookieSameSite site_restrictions_in,
    net::CookiePriority priority_in)
    : name(std::move(name_in)),
      value(std::move(value_in)),
      domain(std::move(domain_in)),
      path(std::move(path_in)),
      creation(std::move(creation_in)),
      expiry(std::move(expiry_in)),
      last_access(std::move(last_access_in)),
      secure(std::move(secure_in)),
      httponly(std::move(httponly_in)),
      site_restrictions(std::move(site_restrictions_in)),
      priority(std::move(priority_in)) {}

CanonicalCookie::~CanonicalCookie() = default;

bool CanonicalCookie::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CookieWithStatus::CookieWithStatus()
    : cookie(),
      status() {}

CookieWithStatus::CookieWithStatus(
    const net::CanonicalCookie& cookie_in,
    net::CanonicalCookie::CookieInclusionStatus status_in)
    : cookie(std::move(cookie_in)),
      status(std::move(status_in)) {}

CookieWithStatus::~CookieWithStatus() = default;

bool CookieWithStatus::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CookieDeletionFilter::CookieDeletionFilter()
    : created_after_time(),
      created_before_time(),
      excluding_domains(),
      including_domains(),
      cookie_name(),
      host_name(),
      url(),
      session_control(CookieDeletionSessionControl::IGNORE_CONTROL) {}

CookieDeletionFilter::CookieDeletionFilter(
    base::Optional<base::Time> created_after_time_in,
    base::Optional<base::Time> created_before_time_in,
    const base::Optional<std::vector<std::string>>& excluding_domains_in,
    const base::Optional<std::vector<std::string>>& including_domains_in,
    const base::Optional<std::string>& cookie_name_in,
    const base::Optional<std::string>& host_name_in,
    const base::Optional<GURL>& url_in,
    CookieDeletionSessionControl session_control_in)
    : created_after_time(std::move(created_after_time_in)),
      created_before_time(std::move(created_before_time_in)),
      excluding_domains(std::move(excluding_domains_in)),
      including_domains(std::move(including_domains_in)),
      cookie_name(std::move(cookie_name_in)),
      host_name(std::move(host_name_in)),
      url(std::move(url_in)),
      session_control(std::move(session_control_in)) {}

CookieDeletionFilter::~CookieDeletionFilter() = default;

bool CookieDeletionFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CookieChangeListener::Name_[] = "network.mojom.CookieChangeListener";

CookieChangeListenerProxy::CookieChangeListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CookieChangeListenerProxy::OnCookieChange(
    const net::CanonicalCookie& in_cookie, CookieChangeCause in_cause) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieChangeListener::OnCookieChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieChangeListener_OnCookieChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieChangeListener_OnCookieChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in CookieChangeListener.OnCookieChange request");
  mojo::internal::Serialize<::network::mojom::CookieChangeCause>(
      in_cause, &params->cause);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieChangeListener::Name_);
  message.set_method_name("OnCookieChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CookieChangeListenerStubDispatch::Accept(
    CookieChangeListener* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieChangeListener::OnCookieChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieChangeListener_OnCookieChange_Params_Data* params =
          reinterpret_cast<internal::CookieChangeListener_OnCookieChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      CookieChangeCause p_cause{};
      CookieChangeListener_OnCookieChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadCause(&p_cause))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieChangeListener::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCookieChange(
std::move(p_cookie), 
std::move(p_cause));
      return true;
    }
  }
  return false;
}

// static
bool CookieChangeListenerStubDispatch::AcceptWithResponder(
    CookieChangeListener* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
      break;
    }
  }
  return false;
}

bool CookieChangeListenerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieChangeListener RequestValidator");

  switch (message->header()->name) {
    case internal::kCookieChangeListener_OnCookieChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieChangeListener_OnCookieChange_Params_Data>(
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

const char CookieManager::Name_[] = "network.mojom.CookieManager";

class CookieManager_GetAllCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_GetAllCookies_ForwardToCallback(
      CookieManager::GetAllCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::GetAllCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetAllCookies_ForwardToCallback);
};

class CookieManager_GetCookieList_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_GetCookieList_ForwardToCallback(
      CookieManager::GetCookieListCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::GetCookieListCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetCookieList_ForwardToCallback);
};

class CookieManager_SetCanonicalCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_SetCanonicalCookie_ForwardToCallback(
      CookieManager::SetCanonicalCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::SetCanonicalCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_SetCanonicalCookie_ForwardToCallback);
};

class CookieManager_DeleteCanonicalCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_DeleteCanonicalCookie_ForwardToCallback(
      CookieManager::DeleteCanonicalCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::DeleteCanonicalCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCanonicalCookie_ForwardToCallback);
};

class CookieManager_DeleteCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_DeleteCookies_ForwardToCallback(
      CookieManager::DeleteCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::DeleteCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCookies_ForwardToCallback);
};

class CookieManager_FlushCookieStore_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_FlushCookieStore_ForwardToCallback(
      CookieManager::FlushCookieStoreCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::FlushCookieStoreCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_FlushCookieStore_ForwardToCallback);
};

class CookieManager_AllowFileSchemeCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieManager_AllowFileSchemeCookies_ForwardToCallback(
      CookieManager::AllowFileSchemeCookiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieManager::AllowFileSchemeCookiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CookieManager_AllowFileSchemeCookies_ForwardToCallback);
};

CookieManagerProxy::CookieManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CookieManagerProxy::GetAllCookies(
    GetAllCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::GetAllCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetAllCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetAllCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("GetAllCookies");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_GetAllCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::GetCookieList(
    const GURL& in_url, const net::CookieOptions& in_cookie_options, GetCookieListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::GetCookieList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetCookieList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetCookieList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieManager.GetCookieList request");
  typename decltype(params->cookie_options)::BaseType::BufferWriter
      cookie_options_writer;
  mojo::internal::Serialize<::network::mojom::CookieOptionsDataView>(
      in_cookie_options, buffer, &cookie_options_writer, &serialization_context);
  params->cookie_options.Set(
      cookie_options_writer.is_null() ? nullptr : cookie_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie_options in CookieManager.GetCookieList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("GetCookieList");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_GetCookieList_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::SetCanonicalCookie(
    const net::CanonicalCookie& in_cookie, const std::string& in_source_scheme, const net::CookieOptions& in_cookie_options, SetCanonicalCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::SetCanonicalCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetCanonicalCookie_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in CookieManager.SetCanonicalCookie request");
  typename decltype(params->source_scheme)::BaseType::BufferWriter
      source_scheme_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_scheme, buffer, &source_scheme_writer, &serialization_context);
  params->source_scheme.Set(
      source_scheme_writer.is_null() ? nullptr : source_scheme_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_scheme.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_scheme in CookieManager.SetCanonicalCookie request");
  typename decltype(params->cookie_options)::BaseType::BufferWriter
      cookie_options_writer;
  mojo::internal::Serialize<::network::mojom::CookieOptionsDataView>(
      in_cookie_options, buffer, &cookie_options_writer, &serialization_context);
  params->cookie_options.Set(
      cookie_options_writer.is_null() ? nullptr : cookie_options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie_options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie_options in CookieManager.SetCanonicalCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("SetCanonicalCookie");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_SetCanonicalCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::DeleteCanonicalCookie(
    const net::CanonicalCookie& in_cookie, DeleteCanonicalCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCanonicalCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCanonicalCookie_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in CookieManager.DeleteCanonicalCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("DeleteCanonicalCookie");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_DeleteCanonicalCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::DeleteCookies(
    CookieDeletionFilterPtr in_filter, DeleteCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::CookieDeletionFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->filter.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in CookieManager.DeleteCookies request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("DeleteCookies");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_DeleteCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::AddCookieChangeListener(
    const GURL& in_url, const std::string& in_name, CookieChangeListenerPtr in_listener) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::AddCookieChangeListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_AddCookieChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AddCookieChangeListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieManager.AddCookieChangeListener request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in CookieManager.AddCookieChangeListener request");
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in CookieManager.AddCookieChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("AddCookieChangeListener");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CookieManagerProxy::AddGlobalChangeListener(
    CookieChangeListenerPtr in_notification_pointer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::AddGlobalChangeListener");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_AddGlobalChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AddGlobalChangeListener_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      in_notification_pointer, &params->notification_pointer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->notification_pointer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid notification_pointer in CookieManager.AddGlobalChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("AddGlobalChangeListener");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CookieManagerProxy::CloneInterface(
    CookieManagerRequest in_new_interface) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::CloneInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_CloneInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_CloneInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      in_new_interface, &params->new_interface, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->new_interface),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid new_interface in CookieManager.CloneInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("CloneInterface");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CookieManagerProxy::FlushCookieStore(
    FlushCookieStoreCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::FlushCookieStore");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_FlushCookieStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_FlushCookieStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("FlushCookieStore");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_FlushCookieStore_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::AllowFileSchemeCookies(
    bool in_allow, AllowFileSchemeCookiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::AllowFileSchemeCookies");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_AllowFileSchemeCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AllowFileSchemeCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->allow = in_allow;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("AllowFileSchemeCookies");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CookieManager_AllowFileSchemeCookies_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CookieManagerProxy::SetContentSettings(
    const std::vector<::ContentSettingPatternSource>& in_settings) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::SetContentSettings");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_SetContentSettings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetContentSettings_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->settings)::BaseType::BufferWriter
      settings_writer;
  const mojo::internal::ContainerValidateParams settings_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
      in_settings, buffer, &settings_writer, &settings_validate_params,
      &serialization_context);
  params->settings.Set(
      settings_writer.is_null() ? nullptr : settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null settings in CookieManager.SetContentSettings request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("SetContentSettings");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CookieManagerProxy::SetForceKeepSessionState(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::SetForceKeepSessionState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_SetForceKeepSessionState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetForceKeepSessionState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("SetForceKeepSessionState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CookieManagerProxy::BlockThirdPartyCookies(
    bool in_block) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::BlockThirdPartyCookies");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_BlockThirdPartyCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_BlockThirdPartyCookies_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->block = in_block;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("BlockThirdPartyCookies");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CookieManager_GetAllCookies_ProxyToResponder {
 public:
  static CookieManager::GetAllCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_GetAllCookies_ProxyToResponder> proxy(
        new CookieManager_GetAllCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_GetAllCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_GetAllCookies_ProxyToResponder() {
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
  CookieManager_GetAllCookies_ProxyToResponder(
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
        << "CookieManager::GetAllCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<net::CanonicalCookie>& in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetAllCookies_ProxyToResponder);
};

bool CookieManager_GetAllCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::GetAllCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_GetAllCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_GetAllCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<net::CanonicalCookie> p_cookies{};
  CookieManager_GetAllCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void CookieManager_GetAllCookies_ProxyToResponder::Run(
    const std::vector<net::CanonicalCookie>& in_cookies) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetAllCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetAllCookies_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      in_cookies, buffer, &cookies_writer, &cookies_validate_params,
      &serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::GetAllCookiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("GetAllCookies");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_GetCookieList_ProxyToResponder {
 public:
  static CookieManager::GetCookieListCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_GetCookieList_ProxyToResponder> proxy(
        new CookieManager_GetCookieList_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_GetCookieList_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_GetCookieList_ProxyToResponder() {
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
  CookieManager_GetCookieList_ProxyToResponder(
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
        << "CookieManager::GetCookieListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<net::CanonicalCookie>& in_cookies, const std::vector<net::CookieWithStatus>& in_excluded_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_GetCookieList_ProxyToResponder);
};

bool CookieManager_GetCookieList_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::GetCookieListCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_GetCookieList_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_GetCookieList_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<net::CanonicalCookie> p_cookies{};
  std::vector<net::CookieWithStatus> p_excluded_cookies{};
  CookieManager_GetCookieList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!input_data_view.ReadExcludedCookies(&p_excluded_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies), 
std::move(p_excluded_cookies));
  return true;
}

void CookieManager_GetCookieList_ProxyToResponder::Run(
    const std::vector<net::CanonicalCookie>& in_cookies, const std::vector<net::CookieWithStatus>& in_excluded_cookies) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_GetCookieList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_GetCookieList_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookies)::BaseType::BufferWriter
      cookies_writer;
  const mojo::internal::ContainerValidateParams cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      in_cookies, buffer, &cookies_writer, &cookies_validate_params,
      &serialization_context);
  params->cookies.Set(
      cookies_writer.is_null() ? nullptr : cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in ");
  typename decltype(params->excluded_cookies)::BaseType::BufferWriter
      excluded_cookies_writer;
  const mojo::internal::ContainerValidateParams excluded_cookies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CookieWithStatusDataView>>(
      in_excluded_cookies, buffer, &excluded_cookies_writer, &excluded_cookies_validate_params,
      &serialization_context);
  params->excluded_cookies.Set(
      excluded_cookies_writer.is_null() ? nullptr : excluded_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_cookies in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::GetCookieListCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("GetCookieList");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_SetCanonicalCookie_ProxyToResponder {
 public:
  static CookieManager::SetCanonicalCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_SetCanonicalCookie_ProxyToResponder> proxy(
        new CookieManager_SetCanonicalCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_SetCanonicalCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_SetCanonicalCookie_ProxyToResponder() {
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
  CookieManager_SetCanonicalCookie_ProxyToResponder(
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
        << "CookieManager::SetCanonicalCookieCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      net::CanonicalCookie::CookieInclusionStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_SetCanonicalCookie_ProxyToResponder);
};

bool CookieManager_SetCanonicalCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::SetCanonicalCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_SetCanonicalCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  net::CanonicalCookie::CookieInclusionStatus p_status{};
  CookieManager_SetCanonicalCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void CookieManager_SetCanonicalCookie_ProxyToResponder::Run(
    net::CanonicalCookie::CookieInclusionStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieInclusionStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::SetCanonicalCookieCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("SetCanonicalCookie");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_DeleteCanonicalCookie_ProxyToResponder {
 public:
  static CookieManager::DeleteCanonicalCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_DeleteCanonicalCookie_ProxyToResponder> proxy(
        new CookieManager_DeleteCanonicalCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_DeleteCanonicalCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_DeleteCanonicalCookie_ProxyToResponder() {
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
  CookieManager_DeleteCanonicalCookie_ProxyToResponder(
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
        << "CookieManager::DeleteCanonicalCookieCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCanonicalCookie_ProxyToResponder);
};

bool CookieManager_DeleteCanonicalCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCanonicalCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  CookieManager_DeleteCanonicalCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void CookieManager_DeleteCanonicalCookie_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCanonicalCookieCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("DeleteCanonicalCookie");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_DeleteCookies_ProxyToResponder {
 public:
  static CookieManager::DeleteCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_DeleteCookies_ProxyToResponder> proxy(
        new CookieManager_DeleteCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_DeleteCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_DeleteCookies_ProxyToResponder() {
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
  CookieManager_DeleteCookies_ProxyToResponder(
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
        << "CookieManager::DeleteCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_num_deleted);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_DeleteCookies_ProxyToResponder);
};

bool CookieManager_DeleteCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_DeleteCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_DeleteCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_num_deleted{};
  CookieManager_DeleteCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_num_deleted = input_data_view.num_deleted();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_num_deleted));
  return true;
}

void CookieManager_DeleteCookies_ProxyToResponder::Run(
    uint32_t in_num_deleted) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_DeleteCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_DeleteCookies_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_deleted = in_num_deleted;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCookiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("DeleteCookies");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_FlushCookieStore_ProxyToResponder {
 public:
  static CookieManager::FlushCookieStoreCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_FlushCookieStore_ProxyToResponder> proxy(
        new CookieManager_FlushCookieStore_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_FlushCookieStore_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_FlushCookieStore_ProxyToResponder() {
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
  CookieManager_FlushCookieStore_ProxyToResponder(
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
        << "CookieManager::FlushCookieStoreCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(CookieManager_FlushCookieStore_ProxyToResponder);
};

bool CookieManager_FlushCookieStore_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::FlushCookieStoreCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_FlushCookieStore_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_FlushCookieStore_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CookieManager_FlushCookieStore_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CookieManager_FlushCookieStore_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_FlushCookieStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_FlushCookieStore_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::FlushCookieStoreCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("FlushCookieStore");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class CookieManager_AllowFileSchemeCookies_ProxyToResponder {
 public:
  static CookieManager::AllowFileSchemeCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CookieManager_AllowFileSchemeCookies_ProxyToResponder> proxy(
        new CookieManager_AllowFileSchemeCookies_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CookieManager_AllowFileSchemeCookies_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CookieManager_AllowFileSchemeCookies_ProxyToResponder() {
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
  CookieManager_AllowFileSchemeCookies_ProxyToResponder(
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
        << "CookieManager::AllowFileSchemeCookiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CookieManager_AllowFileSchemeCookies_ProxyToResponder);
};

bool CookieManager_AllowFileSchemeCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CookieManager::AllowFileSchemeCookiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  CookieManager_AllowFileSchemeCookies_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CookieManager::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void CookieManager_AllowFileSchemeCookies_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCookieManager_AllowFileSchemeCookies_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::AllowFileSchemeCookiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CookieManager::Name_);
  message.set_method_name("AllowFileSchemeCookies");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CookieManagerStubDispatch::Accept(
    CookieManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
      break;
    }
    case internal::kCookieManager_GetCookieList_Name: {
      break;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
      break;
    }
    case internal::kCookieManager_DeleteCanonicalCookie_Name: {
      break;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
      break;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::AddCookieChangeListener",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_AddCookieChangeListener_Params_Data* params =
          reinterpret_cast<internal::CookieManager_AddCookieChangeListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_name{};
      CookieChangeListenerPtr p_listener{};
      CookieManager_AddCookieChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddCookieChangeListener(
std::move(p_url), 
std::move(p_name), 
std::move(p_listener));
      return true;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::AddGlobalChangeListener",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_AddGlobalChangeListener_Params_Data* params =
          reinterpret_cast<internal::CookieManager_AddGlobalChangeListener_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieChangeListenerPtr p_notification_pointer{};
      CookieManager_AddGlobalChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      p_notification_pointer =
          input_data_view.TakeNotificationPointer<decltype(p_notification_pointer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddGlobalChangeListener(
std::move(p_notification_pointer));
      return true;
    }
    case internal::kCookieManager_CloneInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::CloneInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_CloneInterface_Params_Data* params =
          reinterpret_cast<internal::CookieManager_CloneInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManagerRequest p_new_interface{};
      CookieManager_CloneInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      p_new_interface =
          input_data_view.TakeNewInterface<decltype(p_new_interface)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloneInterface(
std::move(p_new_interface));
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
      break;
    }
    case internal::kCookieManager_AllowFileSchemeCookies_Name: {
      break;
    }
    case internal::kCookieManager_SetContentSettings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::SetContentSettings",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_SetContentSettings_Params_Data* params =
          reinterpret_cast<internal::CookieManager_SetContentSettings_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ContentSettingPatternSource> p_settings{};
      CookieManager_SetContentSettings_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSettings(&p_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetContentSettings(
std::move(p_settings));
      return true;
    }
    case internal::kCookieManager_SetForceKeepSessionState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::SetForceKeepSessionState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_SetForceKeepSessionState_Params_Data* params =
          reinterpret_cast<internal::CookieManager_SetForceKeepSessionState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManager_SetForceKeepSessionState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetForceKeepSessionState();
      return true;
    }
    case internal::kCookieManager_BlockThirdPartyCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::BlockThirdPartyCookies",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CookieManager_BlockThirdPartyCookies_Params_Data* params =
          reinterpret_cast<internal::CookieManager_BlockThirdPartyCookies_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_block{};
      CookieManager_BlockThirdPartyCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      p_block = input_data_view.block();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BlockThirdPartyCookies(
std::move(p_block));
      return true;
    }
  }
  return false;
}

// static
bool CookieManagerStubDispatch::AcceptWithResponder(
    CookieManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::GetAllCookies",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_GetAllCookies_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_GetAllCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManager_GetAllCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 0, false);
        return false;
      }
      CookieManager::GetAllCookiesCallback callback =
          CookieManager_GetAllCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAllCookies(std::move(callback));
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::GetCookieList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_GetCookieList_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_GetCookieList_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      net::CookieOptions p_cookie_options{};
      CookieManager_GetCookieList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadCookieOptions(&p_cookie_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 1, false);
        return false;
      }
      CookieManager::GetCookieListCallback callback =
          CookieManager_GetCookieList_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetCookieList(
std::move(p_url), 
std::move(p_cookie_options), std::move(callback));
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::SetCanonicalCookie",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_SetCanonicalCookie_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_SetCanonicalCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      std::string p_source_scheme{};
      net::CookieOptions p_cookie_options{};
      CookieManager_SetCanonicalCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadSourceScheme(&p_source_scheme))
        success = false;
      if (!input_data_view.ReadCookieOptions(&p_cookie_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 2, false);
        return false;
      }
      CookieManager::SetCanonicalCookieCallback callback =
          CookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCanonicalCookie(
std::move(p_cookie), 
std::move(p_source_scheme), 
std::move(p_cookie_options), std::move(callback));
      return true;
    }
    case internal::kCookieManager_DeleteCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCanonicalCookie",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_DeleteCanonicalCookie_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_DeleteCanonicalCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      CookieManager_DeleteCanonicalCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 3, false);
        return false;
      }
      CookieManager::DeleteCanonicalCookieCallback callback =
          CookieManager_DeleteCanonicalCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteCanonicalCookie(
std::move(p_cookie), std::move(callback));
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::DeleteCookies",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_DeleteCookies_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_DeleteCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieDeletionFilterPtr p_filter{};
      CookieManager_DeleteCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 4, false);
        return false;
      }
      CookieManager::DeleteCookiesCallback callback =
          CookieManager_DeleteCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteCookies(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
      break;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
      break;
    }
    case internal::kCookieManager_CloneInterface_Name: {
      break;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::FlushCookieStore",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_FlushCookieStore_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_FlushCookieStore_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CookieManager_FlushCookieStore_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 8, false);
        return false;
      }
      CookieManager::FlushCookieStoreCallback callback =
          CookieManager_FlushCookieStore_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FlushCookieStore(std::move(callback));
      return true;
    }
    case internal::kCookieManager_AllowFileSchemeCookies_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CookieManager::AllowFileSchemeCookies",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CookieManager_AllowFileSchemeCookies_Params_Data* params =
          reinterpret_cast<
              internal::CookieManager_AllowFileSchemeCookies_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_allow{};
      CookieManager_AllowFileSchemeCookies_ParamsDataView input_data_view(params, &serialization_context);
      
      p_allow = input_data_view.allow();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CookieManager::Name_, 9, false);
        return false;
      }
      CookieManager::AllowFileSchemeCookiesCallback callback =
          CookieManager_AllowFileSchemeCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AllowFileSchemeCookies(
std::move(p_allow), std::move(callback));
      return true;
    }
    case internal::kCookieManager_SetContentSettings_Name: {
      break;
    }
    case internal::kCookieManager_SetForceKeepSessionState_Name: {
      break;
    }
    case internal::kCookieManager_BlockThirdPartyCookies_Name: {
      break;
    }
  }
  return false;
}

bool CookieManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieManager RequestValidator");

  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetAllCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetCookieList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetCanonicalCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCanonicalCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AddCookieChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AddCookieChangeListener_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AddGlobalChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AddGlobalChangeListener_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_CloneInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_CloneInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_FlushCookieStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AllowFileSchemeCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AllowFileSchemeCookies_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetContentSettings_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetContentSettings_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetForceKeepSessionState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetForceKeepSessionState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_BlockThirdPartyCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_BlockThirdPartyCookies_Params_Data>(
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

bool CookieManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CookieManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCookieManager_GetAllCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetAllCookies_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_GetCookieList_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_GetCookieList_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_SetCanonicalCookie_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_DeleteCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_DeleteCookies_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_FlushCookieStore_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_FlushCookieStore_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCookieManager_AllowFileSchemeCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data>(
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
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::CookieManagerParams::DataView, ::network::mojom::CookieManagerParamsPtr>::Read(
    ::network::mojom::CookieManagerParams::DataView input,
    ::network::mojom::CookieManagerParamsPtr* output) {
  bool success = true;
  ::network::mojom::CookieManagerParamsPtr result(::network::mojom::CookieManagerParams::New());
  
      result->block_third_party_cookies = input.block_third_party_cookies();
      if (!input.ReadSettings(&result->settings))
        success = false;
      if (!input.ReadSecureOriginCookiesAllowedSchemes(&result->secure_origin_cookies_allowed_schemes))
        success = false;
      if (!input.ReadMatchingSchemeCookiesAllowedSchemes(&result->matching_scheme_cookies_allowed_schemes))
        success = false;
      if (!input.ReadThirdPartyCookiesAllowedSchemes(&result->third_party_cookies_allowed_schemes))
        success = false;
      result->allow_file_scheme_cookies = input.allow_file_scheme_cookies();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::CookieOptions::DataView, ::network::mojom::CookieOptionsPtr>::Read(
    ::network::mojom::CookieOptions::DataView input,
    ::network::mojom::CookieOptionsPtr* output) {
  bool success = true;
  ::network::mojom::CookieOptionsPtr result(::network::mojom::CookieOptions::New());
  
      result->exclude_httponly = input.exclude_httponly();
      if (!input.ReadSameSiteCookieContext(&result->same_site_cookie_context))
        success = false;
      result->update_access_time = input.update_access_time();
      if (!input.ReadServerTime(&result->server_time))
        success = false;
      result->return_excluded_cookies = input.return_excluded_cookies();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::CanonicalCookie::DataView, ::network::mojom::CanonicalCookiePtr>::Read(
    ::network::mojom::CanonicalCookie::DataView input,
    ::network::mojom::CanonicalCookiePtr* output) {
  bool success = true;
  ::network::mojom::CanonicalCookiePtr result(::network::mojom::CanonicalCookie::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadDomain(&result->domain))
        success = false;
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadCreation(&result->creation))
        success = false;
      if (!input.ReadExpiry(&result->expiry))
        success = false;
      if (!input.ReadLastAccess(&result->last_access))
        success = false;
      result->secure = input.secure();
      result->httponly = input.httponly();
      if (!input.ReadSiteRestrictions(&result->site_restrictions))
        success = false;
      if (!input.ReadPriority(&result->priority))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::CookieWithStatus::DataView, ::network::mojom::CookieWithStatusPtr>::Read(
    ::network::mojom::CookieWithStatus::DataView input,
    ::network::mojom::CookieWithStatusPtr* output) {
  bool success = true;
  ::network::mojom::CookieWithStatusPtr result(::network::mojom::CookieWithStatus::New());
  
      if (!input.ReadCookie(&result->cookie))
        success = false;
      if (!input.ReadStatus(&result->status))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::CookieDeletionFilter::DataView, ::network::mojom::CookieDeletionFilterPtr>::Read(
    ::network::mojom::CookieDeletionFilter::DataView input,
    ::network::mojom::CookieDeletionFilterPtr* output) {
  bool success = true;
  ::network::mojom::CookieDeletionFilterPtr result(::network::mojom::CookieDeletionFilter::New());
  
      if (!input.ReadCreatedAfterTime(&result->created_after_time))
        success = false;
      if (!input.ReadCreatedBeforeTime(&result->created_before_time))
        success = false;
      if (!input.ReadExcludingDomains(&result->excluding_domains))
        success = false;
      if (!input.ReadIncludingDomains(&result->including_domains))
        success = false;
      if (!input.ReadCookieName(&result->cookie_name))
        success = false;
      if (!input.ReadHostName(&result->host_name))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadSessionControl(&result->session_control))
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