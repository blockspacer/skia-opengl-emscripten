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

#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink.h"

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

#include "services/network/public/mojom/restricted_cookie_manager.mojom-params-data.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared-message-ids.h"

#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/canonical_cookie_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
CookieManagerGetOptions::CookieManagerGetOptions()
    : name(),
      match_type() {}

CookieManagerGetOptions::CookieManagerGetOptions(
    const WTF::String& name_in,
    CookieMatchType match_type_in)
    : name(std::move(name_in)),
      match_type(std::move(match_type_in)) {}

CookieManagerGetOptions::~CookieManagerGetOptions() = default;
size_t CookieManagerGetOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->match_type);
  return seed;
}

bool CookieManagerGetOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char RestrictedCookieManager::Name_[] = "network.mojom.RestrictedCookieManager";

class RestrictedCookieManager_GetAllForUrl_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RestrictedCookieManager_GetAllForUrl_ForwardToCallback(
      RestrictedCookieManager::GetAllForUrlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RestrictedCookieManager::GetAllForUrlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_GetAllForUrl_ForwardToCallback);
};

class RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback(
      RestrictedCookieManager::SetCanonicalCookieCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RestrictedCookieManager::SetCanonicalCookieCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback);
};

class RestrictedCookieManager_AddChangeListener_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RestrictedCookieManager_AddChangeListener_ForwardToCallback(
      RestrictedCookieManager::AddChangeListenerCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RestrictedCookieManager::AddChangeListenerCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_AddChangeListener_ForwardToCallback);
};

RestrictedCookieManagerProxy::RestrictedCookieManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RestrictedCookieManagerProxy::GetAllForUrl(
    const ::blink::KURL& in_url, const ::blink::KURL& in_site_for_cookies, CookieManagerGetOptionsPtr in_options, GetAllForUrlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::GetAllForUrl");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_GetAllForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_Params_Data::BufferWriter
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
      "null url in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.GetAllForUrl request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::network::mojom::CookieManagerGetOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in RestrictedCookieManager.GetAllForUrl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("GetAllForUrl");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RestrictedCookieManager_GetAllForUrl_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RestrictedCookieManagerProxy::SetCanonicalCookie(
    const ::blink::WebCanonicalCookie& in_cookie, const ::blink::KURL& in_url, const ::blink::KURL& in_site_for_cookies, SetCanonicalCookieCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::SetCanonicalCookie");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data::BufferWriter
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
      "null cookie in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RestrictedCookieManager.SetCanonicalCookie request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.SetCanonicalCookie request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("SetCanonicalCookie");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void RestrictedCookieManagerProxy::AddChangeListener(
    const ::blink::KURL& in_url, const ::blink::KURL& in_site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr in_listener, AddChangeListenerCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::AddChangeListener");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_AddChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_AddChangeListener_Params_Data::BufferWriter
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
      "null url in RestrictedCookieManager.AddChangeListener request");
  typename decltype(params->site_for_cookies)::BaseType::BufferWriter
      site_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_site_for_cookies, buffer, &site_for_cookies_writer, &serialization_context);
  params->site_for_cookies.Set(
      site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->site_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null site_for_cookies in RestrictedCookieManager.AddChangeListener request");
  mojo::internal::Serialize<::network::mojom::CookieChangeListenerPtrDataView>(
      in_listener, &params->listener, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in RestrictedCookieManager.AddChangeListener request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("AddChangeListener");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new RestrictedCookieManager_AddChangeListener_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class RestrictedCookieManager_GetAllForUrl_ProxyToResponder {
 public:
  static RestrictedCookieManager::GetAllForUrlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RestrictedCookieManager_GetAllForUrl_ProxyToResponder> proxy(
        new RestrictedCookieManager_GetAllForUrl_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RestrictedCookieManager_GetAllForUrl_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RestrictedCookieManager_GetAllForUrl_ProxyToResponder() {
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
  RestrictedCookieManager_GetAllForUrl_ProxyToResponder(
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
        << "RestrictedCookieManager::GetAllForUrlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<::blink::WebCanonicalCookie>& in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_GetAllForUrl_ProxyToResponder);
};

bool RestrictedCookieManager_GetAllForUrl_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::GetAllForUrlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::blink::WebCanonicalCookie> p_cookies{};
  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RestrictedCookieManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cookies));
  return true;
}

void RestrictedCookieManager_GetAllForUrl_ProxyToResponder::Run(
    const WTF::Vector<::blink::WebCanonicalCookie>& in_cookies) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_GetAllForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::GetAllForUrlCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("GetAllForUrl");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder {
 public:
  static RestrictedCookieManager::SetCanonicalCookieCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder> proxy(
        new RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder() {
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
  RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder(
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
        << "RestrictedCookieManager::SetCanonicalCookieCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder);
};

bool RestrictedCookieManager_SetCanonicalCookie_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::SetCanonicalCookieCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RestrictedCookieManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_SetCanonicalCookie_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::SetCanonicalCookieCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("SetCanonicalCookie");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class RestrictedCookieManager_AddChangeListener_ProxyToResponder {
 public:
  static RestrictedCookieManager::AddChangeListenerCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<RestrictedCookieManager_AddChangeListener_ProxyToResponder> proxy(
        new RestrictedCookieManager_AddChangeListener_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&RestrictedCookieManager_AddChangeListener_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~RestrictedCookieManager_AddChangeListener_ProxyToResponder() {
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
  RestrictedCookieManager_AddChangeListener_ProxyToResponder(
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
        << "RestrictedCookieManager::AddChangeListenerCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(RestrictedCookieManager_AddChangeListener_ProxyToResponder);
};

bool RestrictedCookieManager_AddChangeListener_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::AddChangeListenerCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data* params =
      reinterpret_cast<
          internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RestrictedCookieManager_AddChangeListener_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        RestrictedCookieManager::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void RestrictedCookieManager_AddChangeListener_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRestrictedCookieManager_AddChangeListener_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::AddChangeListenerCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(RestrictedCookieManager::Name_);
  message.set_method_name("AddChangeListener");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool RestrictedCookieManagerStubDispatch::Accept(
    RestrictedCookieManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
      break;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
      break;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
      break;
    }
  }
  return false;
}

// static
bool RestrictedCookieManagerStubDispatch::AcceptWithResponder(
    RestrictedCookieManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::GetAllForUrl",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RestrictedCookieManager_GetAllForUrl_Params_Data* params =
          reinterpret_cast<
              internal::RestrictedCookieManager_GetAllForUrl_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ::blink::KURL p_site_for_cookies{};
      CookieManagerGetOptionsPtr p_options{};
      RestrictedCookieManager_GetAllForUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RestrictedCookieManager::Name_, 0, false);
        return false;
      }
      RestrictedCookieManager::GetAllForUrlCallback callback =
          RestrictedCookieManager_GetAllForUrl_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAllForUrl(
std::move(p_url), 
std::move(p_site_for_cookies), 
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::SetCanonicalCookie",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* params =
          reinterpret_cast<
              internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebCanonicalCookie p_cookie{};
      ::blink::KURL p_url{};
      ::blink::KURL p_site_for_cookies{};
      RestrictedCookieManager_SetCanonicalCookie_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RestrictedCookieManager::Name_, 1, false);
        return false;
      }
      RestrictedCookieManager::SetCanonicalCookieCallback callback =
          RestrictedCookieManager_SetCanonicalCookie_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCanonicalCookie(
std::move(p_cookie), 
std::move(p_url), 
std::move(p_site_for_cookies), std::move(callback));
      return true;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::RestrictedCookieManager::AddChangeListener",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::RestrictedCookieManager_AddChangeListener_Params_Data* params =
          reinterpret_cast<
              internal::RestrictedCookieManager_AddChangeListener_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ::blink::KURL p_site_for_cookies{};
      ::network::mojom::blink::CookieChangeListenerPtr p_listener{};
      RestrictedCookieManager_AddChangeListener_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadSiteForCookies(&p_site_for_cookies))
        success = false;
      p_listener =
          input_data_view.TakeListener<decltype(p_listener)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            RestrictedCookieManager::Name_, 2, false);
        return false;
      }
      RestrictedCookieManager::AddChangeListenerCallback callback =
          RestrictedCookieManager_AddChangeListener_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddChangeListener(
std::move(p_url), 
std::move(p_site_for_cookies), 
std::move(p_listener), std::move(callback));
      return true;
    }
  }
  return false;
}

bool RestrictedCookieManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RestrictedCookieManager RequestValidator");

  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_GetAllForUrl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_AddChangeListener_Params_Data>(
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

bool RestrictedCookieManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RestrictedCookieManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRestrictedCookieManager_GetAllForUrl_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_SetCanonicalCookie_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRestrictedCookieManager_AddChangeListener_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data>(
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
bool StructTraits<::network::mojom::blink::CookieManagerGetOptions::DataView, ::network::mojom::blink::CookieManagerGetOptionsPtr>::Read(
    ::network::mojom::blink::CookieManagerGetOptions::DataView input,
    ::network::mojom::blink::CookieManagerGetOptionsPtr* output) {
  bool success = true;
  ::network::mojom::blink::CookieManagerGetOptionsPtr result(::network::mojom::blink::CookieManagerGetOptions::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadMatchType(&result->match_type))
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