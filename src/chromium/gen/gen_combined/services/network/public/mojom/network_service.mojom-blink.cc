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

#include "services/network/public/mojom/network_service.mojom-blink.h"

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

#include "services/network/public/mojom/network_service.mojom-params-data.h"
#include "services/network/public/mojom/network_service.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_service.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/big_string_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/canonical_cookie_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/http_request_headers_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
LoadInfo::LoadInfo()
    : process_id(),
      routing_id(),
      host(),
      load_state(),
      state_param(),
      upload_position(),
      upload_size() {}

LoadInfo::LoadInfo(
    uint32_t process_id_in,
    uint32_t routing_id_in,
    const WTF::String& host_in,
    uint32_t load_state_in,
    const WTF::String& state_param_in,
    uint64_t upload_position_in,
    uint64_t upload_size_in)
    : process_id(std::move(process_id_in)),
      routing_id(std::move(routing_id_in)),
      host(std::move(host_in)),
      load_state(std::move(load_state_in)),
      state_param(std::move(state_param_in)),
      upload_position(std::move(upload_position_in)),
      upload_size(std::move(upload_size_in)) {}

LoadInfo::~LoadInfo() = default;

bool LoadInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HttpAuthStaticParams::HttpAuthStaticParams()
    : supported_schemes(),
      gssapi_library_name(),
      allow_gssapi_library_load(true) {}

HttpAuthStaticParams::HttpAuthStaticParams(
    const WTF::Vector<WTF::String>& supported_schemes_in,
    const WTF::String& gssapi_library_name_in,
    bool allow_gssapi_library_load_in)
    : supported_schemes(std::move(supported_schemes_in)),
      gssapi_library_name(std::move(gssapi_library_name_in)),
      allow_gssapi_library_load(std::move(allow_gssapi_library_load_in)) {}

HttpAuthStaticParams::~HttpAuthStaticParams() = default;

bool HttpAuthStaticParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HttpAuthDynamicParams::HttpAuthDynamicParams()
    : server_whitelist(),
      delegate_whitelist(),
      delegate_by_kdc_policy(false),
      negotiate_disable_cname_lookup(false),
      enable_negotiate_port(true),
      ntlm_v2_enabled(false),
      android_negotiate_account_type() {}

HttpAuthDynamicParams::HttpAuthDynamicParams(
    const WTF::String& server_whitelist_in,
    const WTF::String& delegate_whitelist_in,
    bool delegate_by_kdc_policy_in,
    bool negotiate_disable_cname_lookup_in,
    bool enable_negotiate_port_in,
    bool ntlm_v2_enabled_in,
    const WTF::String& android_negotiate_account_type_in)
    : server_whitelist(std::move(server_whitelist_in)),
      delegate_whitelist(std::move(delegate_whitelist_in)),
      delegate_by_kdc_policy(std::move(delegate_by_kdc_policy_in)),
      negotiate_disable_cname_lookup(std::move(negotiate_disable_cname_lookup_in)),
      enable_negotiate_port(std::move(enable_negotiate_port_in)),
      ntlm_v2_enabled(std::move(ntlm_v2_enabled_in)),
      android_negotiate_account_type(std::move(android_negotiate_account_type_in)) {}

HttpAuthDynamicParams::~HttpAuthDynamicParams() = default;
size_t HttpAuthDynamicParams::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->server_whitelist);
  seed = mojo::internal::WTFHash(seed, this->delegate_whitelist);
  seed = mojo::internal::WTFHash(seed, this->delegate_by_kdc_policy);
  seed = mojo::internal::WTFHash(seed, this->negotiate_disable_cname_lookup);
  seed = mojo::internal::WTFHash(seed, this->enable_negotiate_port);
  seed = mojo::internal::WTFHash(seed, this->ntlm_v2_enabled);
  seed = mojo::internal::WTFHash(seed, this->android_negotiate_account_type);
  return seed;
}

bool HttpAuthDynamicParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CryptConfig::CryptConfig()
    : store(),
      product_name(),
      should_use_preference(),
      user_data_path() {}

CryptConfig::CryptConfig(
    const WTF::String& store_in,
    const WTF::String& product_name_in,
    bool should_use_preference_in,
    const base::FilePath& user_data_path_in)
    : store(std::move(store_in)),
      product_name(std::move(product_name_in)),
      should_use_preference(std::move(should_use_preference_in)),
      user_data_path(std::move(user_data_path_in)) {}

CryptConfig::~CryptConfig() = default;

bool CryptConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EnvironmentVariable::EnvironmentVariable()
    : name(),
      value() {}

EnvironmentVariable::EnvironmentVariable(
    const WTF::String& name_in,
    const WTF::String& value_in)
    : name(std::move(name_in)),
      value(std::move(value_in)) {}

EnvironmentVariable::~EnvironmentVariable() = default;
size_t EnvironmentVariable::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool EnvironmentVariable::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkServiceParams::NetworkServiceParams()
    : initial_connection_type(::network::mojom::blink::ConnectionType::CONNECTION_UNKNOWN),
      initial_connection_subtype(::network::mojom::blink::ConnectionSubtype::SUBTYPE_UNKNOWN),
      environment() {}

NetworkServiceParams::NetworkServiceParams(
    ::network::mojom::blink::ConnectionType initial_connection_type_in,
    ::network::mojom::blink::ConnectionSubtype initial_connection_subtype_in,
    WTF::Vector<EnvironmentVariablePtr> environment_in)
    : initial_connection_type(std::move(initial_connection_type_in)),
      initial_connection_subtype(std::move(initial_connection_subtype_in)),
      environment(std::move(environment_in)) {}

NetworkServiceParams::~NetworkServiceParams() = default;

bool NetworkServiceParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SSLPrivateKey::Name_[] = "network.mojom.SSLPrivateKey";

class SSLPrivateKey_Sign_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SSLPrivateKey_Sign_ForwardToCallback(
      SSLPrivateKey::SignCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SSLPrivateKey::SignCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKey_Sign_ForwardToCallback);
};

SSLPrivateKeyProxy::SSLPrivateKeyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SSLPrivateKeyProxy::Sign(
    uint16_t in_algorithm, const WTF::Vector<uint8_t>& in_input, SignCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SSLPrivateKey::Sign");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSSLPrivateKey_Sign_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLPrivateKey_Sign_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->algorithm = in_algorithm;
  typename decltype(params->input)::BaseType::BufferWriter
      input_writer;
  const mojo::internal::ContainerValidateParams input_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_input, buffer, &input_writer, &input_validate_params,
      &serialization_context);
  params->input.Set(
      input_writer.is_null() ? nullptr : input_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input in SSLPrivateKey.Sign request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SSLPrivateKey::Name_);
  message.set_method_name("Sign");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SSLPrivateKey_Sign_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SSLPrivateKey_Sign_ProxyToResponder {
 public:
  static SSLPrivateKey::SignCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SSLPrivateKey_Sign_ProxyToResponder> proxy(
        new SSLPrivateKey_Sign_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SSLPrivateKey_Sign_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SSLPrivateKey_Sign_ProxyToResponder() {
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
  SSLPrivateKey_Sign_ProxyToResponder(
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
        << "SSLPrivateKey::SignCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, const WTF::Vector<uint8_t>& in_signature);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKey_Sign_ProxyToResponder);
};

bool SSLPrivateKey_Sign_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SSLPrivateKey::SignCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SSLPrivateKey_Sign_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SSLPrivateKey_Sign_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  WTF::Vector<uint8_t> p_signature{};
  SSLPrivateKey_Sign_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadSignature(&p_signature))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SSLPrivateKey::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_signature));
  return true;
}

void SSLPrivateKey_Sign_ProxyToResponder::Run(
    int32_t in_net_error, const WTF::Vector<uint8_t>& in_signature) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSSLPrivateKey_Sign_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLPrivateKey_Sign_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  typename decltype(params->signature)::BaseType::BufferWriter
      signature_writer;
  const mojo::internal::ContainerValidateParams signature_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_signature, buffer, &signature_writer, &signature_validate_params,
      &serialization_context);
  params->signature.Set(
      signature_writer.is_null() ? nullptr : signature_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signature.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signature in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SSLPrivateKey::SignCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SSLPrivateKey::Name_);
  message.set_method_name("Sign");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SSLPrivateKeyStubDispatch::Accept(
    SSLPrivateKey* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
      break;
    }
  }
  return false;
}

// static
bool SSLPrivateKeyStubDispatch::AcceptWithResponder(
    SSLPrivateKey* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SSLPrivateKey::Sign",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::SSLPrivateKey_Sign_Params_Data* params =
          reinterpret_cast<
              internal::SSLPrivateKey_Sign_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint16_t p_algorithm{};
      WTF::Vector<uint8_t> p_input{};
      SSLPrivateKey_Sign_ParamsDataView input_data_view(params, &serialization_context);
      
      p_algorithm = input_data_view.algorithm();
      if (!input_data_view.ReadInput(&p_input))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SSLPrivateKey::Name_, 0, false);
        return false;
      }
      SSLPrivateKey::SignCallback callback =
          SSLPrivateKey_Sign_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Sign(
std::move(p_algorithm), 
std::move(p_input), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SSLPrivateKeyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLPrivateKey RequestValidator");

  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLPrivateKey_Sign_Params_Data>(
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

bool SSLPrivateKeyResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLPrivateKey ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSSLPrivateKey_Sign_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLPrivateKey_Sign_ResponseParams_Data>(
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
const char AuthChallengeResponder::Name_[] = "network.mojom.AuthChallengeResponder";

AuthChallengeResponderProxy::AuthChallengeResponderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AuthChallengeResponderProxy::OnAuthCredentials(
    ::network::mojom::blink::AuthCredentialsPtr in_credentials) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AuthChallengeResponder::OnAuthCredentials");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthChallengeResponder_OnAuthCredentials_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::AuthChallengeResponder_OnAuthCredentials_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->credentials)::BaseType::BufferWriter
      credentials_writer;
  mojo::internal::Serialize<::network::mojom::AuthCredentialsDataView>(
      in_credentials, buffer, &credentials_writer, &serialization_context);
  params->credentials.Set(
      credentials_writer.is_null() ? nullptr : credentials_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AuthChallengeResponder::Name_);
  message.set_method_name("OnAuthCredentials");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AuthChallengeResponderStubDispatch::Accept(
    AuthChallengeResponder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AuthChallengeResponder::OnAuthCredentials",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AuthChallengeResponder_OnAuthCredentials_Params_Data* params =
          reinterpret_cast<internal::AuthChallengeResponder_OnAuthCredentials_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::AuthCredentialsPtr p_credentials{};
      AuthChallengeResponder_OnAuthCredentials_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCredentials(&p_credentials))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AuthChallengeResponder::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAuthCredentials(
std::move(p_credentials));
      return true;
    }
  }
  return false;
}

// static
bool AuthChallengeResponderStubDispatch::AcceptWithResponder(
    AuthChallengeResponder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
      break;
    }
  }
  return false;
}

bool AuthChallengeResponderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AuthChallengeResponder RequestValidator");

  switch (message->header()->name) {
    case internal::kAuthChallengeResponder_OnAuthCredentials_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AuthChallengeResponder_OnAuthCredentials_Params_Data>(
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

const char NetworkServiceClient::Name_[] = "network.mojom.NetworkServiceClient";

class NetworkServiceClient_OnCertificateRequested_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnCertificateRequested_ForwardToCallback(
      NetworkServiceClient::OnCertificateRequestedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnCertificateRequestedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnCertificateRequested_ForwardToCallback);
};

class NetworkServiceClient_OnSSLCertificateError_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnSSLCertificateError_ForwardToCallback(
      NetworkServiceClient::OnSSLCertificateErrorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnSSLCertificateErrorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnSSLCertificateError_ForwardToCallback);
};

class NetworkServiceClient_OnFileUploadRequested_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnFileUploadRequested_ForwardToCallback(
      NetworkServiceClient::OnFileUploadRequestedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnFileUploadRequestedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnFileUploadRequested_ForwardToCallback);
};

class NetworkServiceClient_OnLoadingStateUpdate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnLoadingStateUpdate_ForwardToCallback(
      NetworkServiceClient::OnLoadingStateUpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnLoadingStateUpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnLoadingStateUpdate_ForwardToCallback);
};

class NetworkServiceClient_OnClearSiteData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceClient_OnClearSiteData_ForwardToCallback(
      NetworkServiceClient::OnClearSiteDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceClient::OnClearSiteDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnClearSiteData_ForwardToCallback);
};

NetworkServiceClientProxy::NetworkServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkServiceClientProxy::OnAuthRequired(
    uint32_t in_process_id, uint32_t in_routing_id, uint32_t in_request_id, const ::blink::KURL& in_url, bool in_first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr in_auth_info, ::network::mojom::blink::URLResponseHeadPtr in_head, AuthChallengeResponderPtr in_auth_challenge_responder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnAuthRequired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnAuthRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnAuthRequired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  params->request_id = in_request_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnAuthRequired request");
  params->first_auth_attempt = in_first_auth_attempt;
  typename decltype(params->auth_info)::BaseType::BufferWriter
      auth_info_writer;
  mojo::internal::Serialize<::network::mojom::AuthChallengeInfoDataView>(
      in_auth_info, buffer, &auth_info_writer, &serialization_context);
  params->auth_info.Set(
      auth_info_writer.is_null() ? nullptr : auth_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->auth_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null auth_info in NetworkServiceClient.OnAuthRequired request");
  typename decltype(params->head)::BaseType::BufferWriter
      head_writer;
  mojo::internal::Serialize<::network::mojom::URLResponseHeadDataView>(
      in_head, buffer, &head_writer, &serialization_context);
  params->head.Set(
      head_writer.is_null() ? nullptr : head_writer.data());
  mojo::internal::Serialize<::network::mojom::AuthChallengeResponderPtrDataView>(
      in_auth_challenge_responder, &params->auth_challenge_responder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->auth_challenge_responder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid auth_challenge_responder in NetworkServiceClient.OnAuthRequired request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnAuthRequired");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceClientProxy::OnCertificateRequested(
    const base::Optional<base::UnguessableToken>& in_window_id, uint32_t in_process_id, uint32_t in_routing_id, uint32_t in_request_id, ::network::mojom::blink::SSLCertRequestInfoPtr in_cert_info, OnCertificateRequestedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCertificateRequested");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnCertificateRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->window_id)::BaseType::BufferWriter
      window_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_window_id, buffer, &window_id_writer, &serialization_context);
  params->window_id.Set(
      window_id_writer.is_null() ? nullptr : window_id_writer.data());
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  params->request_id = in_request_id;
  typename decltype(params->cert_info)::BaseType::BufferWriter
      cert_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLCertRequestInfoDataView>(
      in_cert_info, buffer, &cert_info_writer, &serialization_context);
  params->cert_info.Set(
      cert_info_writer.is_null() ? nullptr : cert_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert_info in NetworkServiceClient.OnCertificateRequested request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnCertificateRequested");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnCertificateRequested_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceClientProxy::OnSSLCertificateError(
    uint32_t in_process_id, uint32_t in_routing_id, const ::blink::KURL& in_url, int32_t in_net_error, ::network::mojom::blink::SSLInfoPtr in_ssl_info, bool in_fatal, OnSSLCertificateErrorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnSSLCertificateError");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnSSLCertificateError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnSSLCertificateError request");
  params->net_error = in_net_error;
  typename decltype(params->ssl_info)::BaseType::BufferWriter
      ssl_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLInfoDataView>(
      in_ssl_info, buffer, &ssl_info_writer, &serialization_context);
  params->ssl_info.Set(
      ssl_info_writer.is_null() ? nullptr : ssl_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_info in NetworkServiceClient.OnSSLCertificateError request");
  params->fatal = in_fatal;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnSSLCertificateError");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnSSLCertificateError_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceClientProxy::OnFileUploadRequested(
    uint32_t in_process_id, bool in_async, const WTF::Vector<base::FilePath>& in_file_paths, OnFileUploadRequestedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnFileUploadRequested");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnFileUploadRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnFileUploadRequested_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->async = in_async;
  typename decltype(params->file_paths)::BaseType::BufferWriter
      file_paths_writer;
  const mojo::internal::ContainerValidateParams file_paths_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>>(
      in_file_paths, buffer, &file_paths_writer, &file_paths_validate_params,
      &serialization_context);
  params->file_paths.Set(
      file_paths_writer.is_null() ? nullptr : file_paths_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file_paths.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_paths in NetworkServiceClient.OnFileUploadRequested request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnFileUploadRequested");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnFileUploadRequested_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceClientProxy::OnCookieChange(
    int32_t in_process_id, int32_t in_routing_id, const ::blink::KURL& in_url, const ::blink::KURL& in_frame_url, const ::blink::WebCanonicalCookie& in_cookie, bool in_blocked_by_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCookieChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnCookieChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCookieChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnCookieChange request");
  typename decltype(params->frame_url)::BaseType::BufferWriter
      frame_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_frame_url, buffer, &frame_url_writer, &serialization_context);
  params->frame_url.Set(
      frame_url_writer.is_null() ? nullptr : frame_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_url in NetworkServiceClient.OnCookieChange request");
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in NetworkServiceClient.OnCookieChange request");
  params->blocked_by_policy = in_blocked_by_policy;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnCookieChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceClientProxy::OnCookiesRead(
    int32_t in_process_id, int32_t in_routing_id, const ::blink::KURL& in_url, const ::blink::KURL& in_frame_url, const WTF::Vector<::blink::WebCanonicalCookie>& in_cookie_list, bool in_blocked_by_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCookiesRead");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnCookiesRead_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCookiesRead_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnCookiesRead request");
  typename decltype(params->frame_url)::BaseType::BufferWriter
      frame_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_frame_url, buffer, &frame_url_writer, &serialization_context);
  params->frame_url.Set(
      frame_url_writer.is_null() ? nullptr : frame_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_url in NetworkServiceClient.OnCookiesRead request");
  typename decltype(params->cookie_list)::BaseType::BufferWriter
      cookie_list_writer;
  const mojo::internal::ContainerValidateParams cookie_list_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
      in_cookie_list, buffer, &cookie_list_writer, &cookie_list_validate_params,
      &serialization_context);
  params->cookie_list.Set(
      cookie_list_writer.is_null() ? nullptr : cookie_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie_list in NetworkServiceClient.OnCookiesRead request");
  params->blocked_by_policy = in_blocked_by_policy;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnCookiesRead");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceClientProxy::OnLoadingStateUpdate(
    WTF::Vector<LoadInfoPtr> in_infos, OnLoadingStateUpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnLoadingStateUpdate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnLoadingStateUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->infos)::BaseType::BufferWriter
      infos_writer;
  const mojo::internal::ContainerValidateParams infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::LoadInfoDataView>>(
      in_infos, buffer, &infos_writer, &infos_validate_params,
      &serialization_context);
  params->infos.Set(
      infos_writer.is_null() ? nullptr : infos_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->infos.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null infos in NetworkServiceClient.OnLoadingStateUpdate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnLoadingStateUpdate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnLoadingStateUpdate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceClientProxy::OnClearSiteData(
    int32_t in_process_id, int32_t in_routing_id, const ::blink::KURL& in_url, const WTF::String& in_header_value, int32_t in_load_flags, OnClearSiteDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnClearSiteData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnClearSiteData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnClearSiteData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  params->routing_id = in_routing_id;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkServiceClient.OnClearSiteData request");
  typename decltype(params->header_value)::BaseType::BufferWriter
      header_value_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_header_value, buffer, &header_value_writer, &serialization_context);
  params->header_value.Set(
      header_value_writer.is_null() ? nullptr : header_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->header_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null header_value in NetworkServiceClient.OnClearSiteData request");
  params->load_flags = in_load_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnClearSiteData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceClient_OnClearSiteData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceClientProxy::OnDataUseUpdate(
    int32_t in_network_traffic_annotation_id_hash, int64_t in_recv_bytes, int64_t in_sent_bytes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnDataUseUpdate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnDataUseUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnDataUseUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->network_traffic_annotation_id_hash = in_network_traffic_annotation_id_hash;
  params->recv_bytes = in_recv_bytes;
  params->sent_bytes = in_sent_bytes;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnDataUseUpdate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkServiceClient_OnCertificateRequested_ProxyToResponder {
 public:
  static NetworkServiceClient::OnCertificateRequestedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnCertificateRequested_ProxyToResponder> proxy(
        new NetworkServiceClient_OnCertificateRequested_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnCertificateRequested_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnCertificateRequested_ProxyToResponder() {
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
  NetworkServiceClient_OnCertificateRequested_ProxyToResponder(
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
        << "NetworkServiceClient::OnCertificateRequestedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::network::mojom::blink::X509CertificatePtr in_x509_certificate, const WTF::String& in_provider_name, const WTF::Vector<uint16_t>& in_algorithm_preferences, SSLPrivateKeyPtr in_ssl_private_key, bool in_cancel_certificate_selection);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnCertificateRequested_ProxyToResponder);
};

bool NetworkServiceClient_OnCertificateRequested_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCertificateRequestedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::network::mojom::blink::X509CertificatePtr p_x509_certificate{};
  WTF::String p_provider_name{};
  WTF::Vector<uint16_t> p_algorithm_preferences{};
  SSLPrivateKeyPtr p_ssl_private_key{};
  bool p_cancel_certificate_selection{};
  NetworkServiceClient_OnCertificateRequested_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadX509Certificate(&p_x509_certificate))
    success = false;
  if (!input_data_view.ReadProviderName(&p_provider_name))
    success = false;
  if (!input_data_view.ReadAlgorithmPreferences(&p_algorithm_preferences))
    success = false;
  p_ssl_private_key =
      input_data_view.TakeSslPrivateKey<decltype(p_ssl_private_key)>();
  p_cancel_certificate_selection = input_data_view.cancel_certificate_selection();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_x509_certificate), 
std::move(p_provider_name), 
std::move(p_algorithm_preferences), 
std::move(p_ssl_private_key), 
std::move(p_cancel_certificate_selection));
  return true;
}

void NetworkServiceClient_OnCertificateRequested_ProxyToResponder::Run(
    ::network::mojom::blink::X509CertificatePtr in_x509_certificate, const WTF::String& in_provider_name, const WTF::Vector<uint16_t>& in_algorithm_preferences, SSLPrivateKeyPtr in_ssl_private_key, bool in_cancel_certificate_selection) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnCertificateRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->x509_certificate)::BaseType::BufferWriter
      x509_certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      in_x509_certificate, buffer, &x509_certificate_writer, &serialization_context);
  params->x509_certificate.Set(
      x509_certificate_writer.is_null() ? nullptr : x509_certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->x509_certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null x509_certificate in ");
  typename decltype(params->provider_name)::BaseType::BufferWriter
      provider_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_provider_name, buffer, &provider_name_writer, &serialization_context);
  params->provider_name.Set(
      provider_name_writer.is_null() ? nullptr : provider_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->provider_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null provider_name in ");
  typename decltype(params->algorithm_preferences)::BaseType::BufferWriter
      algorithm_preferences_writer;
  const mojo::internal::ContainerValidateParams algorithm_preferences_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
      in_algorithm_preferences, buffer, &algorithm_preferences_writer, &algorithm_preferences_validate_params,
      &serialization_context);
  params->algorithm_preferences.Set(
      algorithm_preferences_writer.is_null() ? nullptr : algorithm_preferences_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->algorithm_preferences.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null algorithm_preferences in ");
  mojo::internal::Serialize<::network::mojom::SSLPrivateKeyPtrDataView>(
      in_ssl_private_key, &params->ssl_private_key, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->ssl_private_key),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid ssl_private_key in ");
  params->cancel_certificate_selection = in_cancel_certificate_selection;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCertificateRequestedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnCertificateRequested");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceClient_OnSSLCertificateError_ProxyToResponder {
 public:
  static NetworkServiceClient::OnSSLCertificateErrorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnSSLCertificateError_ProxyToResponder> proxy(
        new NetworkServiceClient_OnSSLCertificateError_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnSSLCertificateError_ProxyToResponder() {
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
  NetworkServiceClient_OnSSLCertificateError_ProxyToResponder(
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
        << "NetworkServiceClient::OnSSLCertificateErrorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnSSLCertificateError_ProxyToResponder);
};

bool NetworkServiceClient_OnSSLCertificateError_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnSSLCertificateErrorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  NetworkServiceClient_OnSSLCertificateError_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceClient::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnSSLCertificateError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnSSLCertificateErrorCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnSSLCertificateError");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceClient_OnFileUploadRequested_ProxyToResponder {
 public:
  static NetworkServiceClient::OnFileUploadRequestedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnFileUploadRequested_ProxyToResponder> proxy(
        new NetworkServiceClient_OnFileUploadRequested_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnFileUploadRequested_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnFileUploadRequested_ProxyToResponder() {
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
  NetworkServiceClient_OnFileUploadRequested_ProxyToResponder(
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
        << "NetworkServiceClient::OnFileUploadRequestedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, WTF::Vector<base::File> in_files);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnFileUploadRequested_ProxyToResponder);
};

bool NetworkServiceClient_OnFileUploadRequested_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnFileUploadRequestedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  WTF::Vector<base::File> p_files{};
  NetworkServiceClient_OnFileUploadRequested_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadFiles(&p_files))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceClient::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_files));
  return true;
}

void NetworkServiceClient_OnFileUploadRequested_ProxyToResponder::Run(
    int32_t in_net_error, WTF::Vector<base::File> in_files) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnFileUploadRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  typename decltype(params->files)::BaseType::BufferWriter
      files_writer;
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::FileDataView>>(
      in_files, buffer, &files_writer, &files_validate_params,
      &serialization_context);
  params->files.Set(
      files_writer.is_null() ? nullptr : files_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnFileUploadRequestedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnFileUploadRequested");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder {
 public:
  static NetworkServiceClient::OnLoadingStateUpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder> proxy(
        new NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder() {
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
  NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder(
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
        << "NetworkServiceClient::OnLoadingStateUpdateCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder);
};

bool NetworkServiceClient_OnLoadingStateUpdate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnLoadingStateUpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceClient_OnLoadingStateUpdate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceClient::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnLoadingStateUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnLoadingStateUpdateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnLoadingStateUpdate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceClient_OnClearSiteData_ProxyToResponder {
 public:
  static NetworkServiceClient::OnClearSiteDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceClient_OnClearSiteData_ProxyToResponder> proxy(
        new NetworkServiceClient_OnClearSiteData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceClient_OnClearSiteData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceClient_OnClearSiteData_ProxyToResponder() {
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
  NetworkServiceClient_OnClearSiteData_ProxyToResponder(
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
        << "NetworkServiceClient::OnClearSiteDataCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClient_OnClearSiteData_ProxyToResponder);
};

bool NetworkServiceClient_OnClearSiteData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnClearSiteDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceClient_OnClearSiteData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceClient::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceClient_OnClearSiteData_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceClient_OnClearSiteData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnClearSiteDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceClient::Name_);
  message.set_method_name("OnClearSiteData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NetworkServiceClientStubDispatch::Accept(
    NetworkServiceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnAuthRequired",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceClient_OnAuthRequired_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceClient_OnAuthRequired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      uint32_t p_request_id{};
      ::blink::KURL p_url{};
      bool p_first_auth_attempt{};
      ::network::mojom::blink::AuthChallengeInfoPtr p_auth_info{};
      ::network::mojom::blink::URLResponseHeadPtr p_head{};
      AuthChallengeResponderPtr p_auth_challenge_responder{};
      NetworkServiceClient_OnAuthRequired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_first_auth_attempt = input_data_view.first_auth_attempt();
      if (!input_data_view.ReadAuthInfo(&p_auth_info))
        success = false;
      if (!input_data_view.ReadHead(&p_head))
        success = false;
      p_auth_challenge_responder =
          input_data_view.TakeAuthChallengeResponder<decltype(p_auth_challenge_responder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAuthRequired(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_url), 
std::move(p_first_auth_attempt), 
std::move(p_auth_info), 
std::move(p_head), 
std::move(p_auth_challenge_responder));
      return true;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnFileUploadRequested_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnCookieChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCookieChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceClient_OnCookieChange_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceClient_OnCookieChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_process_id{};
      int32_t p_routing_id{};
      ::blink::KURL p_url{};
      ::blink::KURL p_frame_url{};
      ::blink::WebCanonicalCookie p_cookie{};
      bool p_blocked_by_policy{};
      NetworkServiceClient_OnCookieChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFrameUrl(&p_frame_url))
        success = false;
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      p_blocked_by_policy = input_data_view.blocked_by_policy();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCookieChange(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_url), 
std::move(p_frame_url), 
std::move(p_cookie), 
std::move(p_blocked_by_policy));
      return true;
    }
    case internal::kNetworkServiceClient_OnCookiesRead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCookiesRead",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceClient_OnCookiesRead_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceClient_OnCookiesRead_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_process_id{};
      int32_t p_routing_id{};
      ::blink::KURL p_url{};
      ::blink::KURL p_frame_url{};
      WTF::Vector<::blink::WebCanonicalCookie> p_cookie_list{};
      bool p_blocked_by_policy{};
      NetworkServiceClient_OnCookiesRead_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFrameUrl(&p_frame_url))
        success = false;
      if (!input_data_view.ReadCookieList(&p_cookie_list))
        success = false;
      p_blocked_by_policy = input_data_view.blocked_by_policy();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCookiesRead(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_url), 
std::move(p_frame_url), 
std::move(p_cookie_list), 
std::move(p_blocked_by_policy));
      return true;
    }
    case internal::kNetworkServiceClient_OnLoadingStateUpdate_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnClearSiteData_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnDataUseUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnDataUseUpdate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceClient_OnDataUseUpdate_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceClient_OnDataUseUpdate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_network_traffic_annotation_id_hash{};
      int64_t p_recv_bytes{};
      int64_t p_sent_bytes{};
      NetworkServiceClient_OnDataUseUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_network_traffic_annotation_id_hash = input_data_view.network_traffic_annotation_id_hash();
      p_recv_bytes = input_data_view.recv_bytes();
      p_sent_bytes = input_data_view.sent_bytes();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDataUseUpdate(
std::move(p_network_traffic_annotation_id_hash), 
std::move(p_recv_bytes), 
std::move(p_sent_bytes));
      return true;
    }
  }
  return false;
}

// static
bool NetworkServiceClientStubDispatch::AcceptWithResponder(
    NetworkServiceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnCertificateRequested",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceClient_OnCertificateRequested_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnCertificateRequested_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<base::UnguessableToken> p_window_id{};
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      uint32_t p_request_id{};
      ::network::mojom::blink::SSLCertRequestInfoPtr p_cert_info{};
      NetworkServiceClient_OnCertificateRequested_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWindowId(&p_window_id))
        success = false;
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      p_request_id = input_data_view.request_id();
      if (!input_data_view.ReadCertInfo(&p_cert_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 1, false);
        return false;
      }
      NetworkServiceClient::OnCertificateRequestedCallback callback =
          NetworkServiceClient_OnCertificateRequested_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCertificateRequested(
std::move(p_window_id), 
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_request_id), 
std::move(p_cert_info), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnSSLCertificateError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceClient_OnSSLCertificateError_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnSSLCertificateError_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      uint32_t p_routing_id{};
      ::blink::KURL p_url{};
      int32_t p_net_error{};
      ::network::mojom::blink::SSLInfoPtr p_ssl_info{};
      bool p_fatal{};
      NetworkServiceClient_OnSSLCertificateError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_net_error = input_data_view.net_error();
      if (!input_data_view.ReadSslInfo(&p_ssl_info))
        success = false;
      p_fatal = input_data_view.fatal();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 2, false);
        return false;
      }
      NetworkServiceClient::OnSSLCertificateErrorCallback callback =
          NetworkServiceClient_OnSSLCertificateError_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSSLCertificateError(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_url), 
std::move(p_net_error), 
std::move(p_ssl_info), 
std::move(p_fatal), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnFileUploadRequested_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnFileUploadRequested",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceClient_OnFileUploadRequested_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnFileUploadRequested_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      bool p_async{};
      WTF::Vector<base::FilePath> p_file_paths{};
      NetworkServiceClient_OnFileUploadRequested_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_async = input_data_view.async();
      if (!input_data_view.ReadFilePaths(&p_file_paths))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 3, false);
        return false;
      }
      NetworkServiceClient::OnFileUploadRequestedCallback callback =
          NetworkServiceClient_OnFileUploadRequested_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFileUploadRequested(
std::move(p_process_id), 
std::move(p_async), 
std::move(p_file_paths), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnCookieChange_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnCookiesRead_Name: {
      break;
    }
    case internal::kNetworkServiceClient_OnLoadingStateUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnLoadingStateUpdate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<LoadInfoPtr> p_infos{};
      NetworkServiceClient_OnLoadingStateUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfos(&p_infos))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 6, false);
        return false;
      }
      NetworkServiceClient::OnLoadingStateUpdateCallback callback =
          NetworkServiceClient_OnLoadingStateUpdate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnLoadingStateUpdate(
std::move(p_infos), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnClearSiteData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceClient::OnClearSiteData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceClient_OnClearSiteData_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceClient_OnClearSiteData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_process_id{};
      int32_t p_routing_id{};
      ::blink::KURL p_url{};
      WTF::String p_header_value{};
      int32_t p_load_flags{};
      NetworkServiceClient_OnClearSiteData_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      p_routing_id = input_data_view.routing_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadHeaderValue(&p_header_value))
        success = false;
      p_load_flags = input_data_view.load_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceClient::Name_, 7, false);
        return false;
      }
      NetworkServiceClient::OnClearSiteDataCallback callback =
          NetworkServiceClient_OnClearSiteData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnClearSiteData(
std::move(p_process_id), 
std::move(p_routing_id), 
std::move(p_url), 
std::move(p_header_value), 
std::move(p_load_flags), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceClient_OnDataUseUpdate_Name: {
      break;
    }
  }
  return false;
}

bool NetworkServiceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnAuthRequired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnAuthRequired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCertificateRequested_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnSSLCertificateError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnFileUploadRequested_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnFileUploadRequested_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnCookieChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCookieChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnCookiesRead_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCookiesRead_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnLoadingStateUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnLoadingStateUpdate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnClearSiteData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnClearSiteData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnDataUseUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnDataUseUpdate_Params_Data>(
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

bool NetworkServiceClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkServiceClient_OnCertificateRequested_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnCertificateRequested_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnSSLCertificateError_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnSSLCertificateError_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnFileUploadRequested_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnFileUploadRequested_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnLoadingStateUpdate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnLoadingStateUpdate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceClient_OnClearSiteData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceClient_OnClearSiteData_ResponseParams_Data>(
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
const char NetworkService::Name_[] = "network.mojom.NetworkService";

class NetworkService_GetTotalNetworkUsages_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_GetTotalNetworkUsages_ForwardToCallback(
      NetworkService::GetTotalNetworkUsagesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::GetTotalNetworkUsagesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetTotalNetworkUsages_ForwardToCallback);
};

class NetworkService_GetNetworkList_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_GetNetworkList_ForwardToCallback(
      NetworkService::GetNetworkListCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::GetNetworkListCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetNetworkList_ForwardToCallback);
};

NetworkServiceProxy::NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkServiceProxy::SetClient(
    NetworkServiceClientPtr in_client, NetworkServiceParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NetworkService.SetClient request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::NetworkServiceParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkService.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::StartNetLog(
    base::File in_file, ::network::mojom::blink::NetLogCaptureMode in_capture_mode, ::mojo_base::mojom::blink::DictionaryValuePtr in_constants) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::StartNetLog");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_StartNetLog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_StartNetLog_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file in NetworkService.StartNetLog request");
  mojo::internal::Serialize<::network::mojom::NetLogCaptureMode>(
      in_capture_mode, &params->capture_mode);
  typename decltype(params->constants)::BaseType::BufferWriter
      constants_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_constants, buffer, &constants_writer, &serialization_context);
  params->constants.Set(
      constants_writer.is_null() ? nullptr : constants_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->constants.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null constants in NetworkService.StartNetLog request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("StartNetLog");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::SetSSLKeyLogFile(
    const base::FilePath& in_file) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetSSLKeyLogFile");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetSSLKeyLogFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetSSLKeyLogFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file in NetworkService.SetSSLKeyLogFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetSSLKeyLogFile");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::CreateNetworkContext(
    ::network::mojom::blink::NetworkContextRequest in_context, ::network::mojom::blink::NetworkContextParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::CreateNetworkContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_CreateNetworkContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_CreateNetworkContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkContextRequestDataView>(
      in_context, &params->context, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->context),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid context in NetworkService.CreateNetworkContext request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::NetworkContextParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkService.CreateNetworkContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("CreateNetworkContext");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::ConfigureStubHostResolver(
    bool in_stub_resolver_enabled, base::Optional<WTF::Vector<::network::mojom::blink::DnsOverHttpsServerPtr>> in_dns_over_https_servers) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::ConfigureStubHostResolver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_ConfigureStubHostResolver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_ConfigureStubHostResolver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->stub_resolver_enabled = in_stub_resolver_enabled;
  typename decltype(params->dns_over_https_servers)::BaseType::BufferWriter
      dns_over_https_servers_writer;
  const mojo::internal::ContainerValidateParams dns_over_https_servers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>>(
      in_dns_over_https_servers, buffer, &dns_over_https_servers_writer, &dns_over_https_servers_validate_params,
      &serialization_context);
  params->dns_over_https_servers.Set(
      dns_over_https_servers_writer.is_null() ? nullptr : dns_over_https_servers_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("ConfigureStubHostResolver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::DisableQuic(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::DisableQuic");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_DisableQuic_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_DisableQuic_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("DisableQuic");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::SetUpHttpAuth(
    HttpAuthStaticParamsPtr in_http_auth_static_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetUpHttpAuth");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetUpHttpAuth_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetUpHttpAuth_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->http_auth_static_params)::BaseType::BufferWriter
      http_auth_static_params_writer;
  mojo::internal::Serialize<::network::mojom::HttpAuthStaticParamsDataView>(
      in_http_auth_static_params, buffer, &http_auth_static_params_writer, &serialization_context);
  params->http_auth_static_params.Set(
      http_auth_static_params_writer.is_null() ? nullptr : http_auth_static_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->http_auth_static_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null http_auth_static_params in NetworkService.SetUpHttpAuth request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetUpHttpAuth");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::ConfigureHttpAuthPrefs(
    HttpAuthDynamicParamsPtr in_http_auth_dynamic_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::ConfigureHttpAuthPrefs");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_ConfigureHttpAuthPrefs_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->http_auth_dynamic_params)::BaseType::BufferWriter
      http_auth_dynamic_params_writer;
  mojo::internal::Serialize<::network::mojom::HttpAuthDynamicParamsDataView>(
      in_http_auth_dynamic_params, buffer, &http_auth_dynamic_params_writer, &serialization_context);
  params->http_auth_dynamic_params.Set(
      http_auth_dynamic_params_writer.is_null() ? nullptr : http_auth_dynamic_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->http_auth_dynamic_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null http_auth_dynamic_params in NetworkService.ConfigureHttpAuthPrefs request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("ConfigureHttpAuthPrefs");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::SetRawHeadersAccess(
    uint32_t in_process_id, const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& in_origins) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetRawHeadersAccess");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetRawHeadersAccess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetRawHeadersAccess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  typename decltype(params->origins)::BaseType::BufferWriter
      origins_writer;
  const mojo::internal::ContainerValidateParams origins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
      in_origins, buffer, &origins_writer, &origins_validate_params,
      &serialization_context);
  params->origins.Set(
      origins_writer.is_null() ? nullptr : origins_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origins in NetworkService.SetRawHeadersAccess request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetRawHeadersAccess");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::GetNetworkChangeManager(
    ::network::mojom::blink::NetworkChangeManagerRequest in_network_change_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkChangeManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetNetworkChangeManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetNetworkChangeManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkChangeManagerRequestDataView>(
      in_network_change_manager, &params->network_change_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->network_change_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid network_change_manager in NetworkService.GetNetworkChangeManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetNetworkChangeManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::GetNetworkQualityEstimatorManager(
    ::network::mojom::blink::NetworkQualityEstimatorManagerRequest in_network_quality_estimator_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkQualityEstimatorManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetNetworkQualityEstimatorManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkQualityEstimatorManagerRequestDataView>(
      in_network_quality_estimator_manager, &params->network_quality_estimator_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->network_quality_estimator_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid network_quality_estimator_manager in NetworkService.GetNetworkQualityEstimatorManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetNetworkQualityEstimatorManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::GetDnsConfigChangeManager(
    ::network::mojom::blink::DnsConfigChangeManagerRequest in_dns_config_change_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetDnsConfigChangeManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetDnsConfigChangeManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetDnsConfigChangeManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::DnsConfigChangeManagerRequestDataView>(
      in_dns_config_change_manager, &params->dns_config_change_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->dns_config_change_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid dns_config_change_manager in NetworkService.GetDnsConfigChangeManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetDnsConfigChangeManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::GetTotalNetworkUsages(
    GetTotalNetworkUsagesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetTotalNetworkUsages");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetTotalNetworkUsages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetTotalNetworkUsages");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkService_GetTotalNetworkUsages_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceProxy::GetNetworkList(
    uint32_t in_policy, GetNetworkListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkList");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetNetworkList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetNetworkList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->policy = in_policy;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetNetworkList");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkService_GetNetworkList_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceProxy::UpdateSignedTreeHead(
    ::network::mojom::blink::SignedTreeHeadPtr in_signed_tree_head) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::UpdateSignedTreeHead");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_UpdateSignedTreeHead_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_UpdateSignedTreeHead_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->signed_tree_head)::BaseType::BufferWriter
      signed_tree_head_writer;
  mojo::internal::Serialize<::network::mojom::SignedTreeHeadDataView>(
      in_signed_tree_head, buffer, &signed_tree_head_writer, &serialization_context);
  params->signed_tree_head.Set(
      signed_tree_head_writer.is_null() ? nullptr : signed_tree_head_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signed_tree_head.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signed_tree_head in NetworkService.UpdateSignedTreeHead request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("UpdateSignedTreeHead");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::UpdateCRLSet(
    ::mojo_base::mojom::blink::ReadOnlyBufferPtr in_crl_set) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::UpdateCRLSet");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_UpdateCRLSet_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_UpdateCRLSet_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->crl_set)::BaseType::BufferWriter
      crl_set_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
      in_crl_set, buffer, &crl_set_writer, &serialization_context);
  params->crl_set.Set(
      crl_set_writer.is_null() ? nullptr : crl_set_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->crl_set.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null crl_set in NetworkService.UpdateCRLSet request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("UpdateCRLSet");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::OnCertDBChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::OnCertDBChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_OnCertDBChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_OnCertDBChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("OnCertDBChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::SetCryptConfig(
    CryptConfigPtr in_crypt_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetCryptConfig");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetCryptConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetCryptConfig_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->crypt_config)::BaseType::BufferWriter
      crypt_config_writer;
  mojo::internal::Serialize<::network::mojom::CryptConfigDataView>(
      in_crypt_config, buffer, &crypt_config_writer, &serialization_context);
  params->crypt_config.Set(
      crypt_config_writer.is_null() ? nullptr : crypt_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->crypt_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null crypt_config in NetworkService.SetCryptConfig request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetCryptConfig");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::AddCorbExceptionForPlugin(
    uint32_t in_process_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::AddCorbExceptionForPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_AddCorbExceptionForPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_AddCorbExceptionForPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("AddCorbExceptionForPlugin");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::RemoveCorbExceptionForPlugin(
    uint32_t in_process_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::RemoveCorbExceptionForPlugin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_RemoveCorbExceptionForPlugin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->process_id = in_process_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("RemoveCorbExceptionForPlugin");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::OnMemoryPressure(
    ::mojo_base::mojom::blink::MemoryPressureLevel in_memory_pressure_level) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::OnMemoryPressure");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_OnMemoryPressure_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_OnMemoryPressure_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::MemoryPressureLevel>(
      in_memory_pressure_level, &params->memory_pressure_level);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("OnMemoryPressure");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceProxy::SetEnvironment(
    WTF::Vector<EnvironmentVariablePtr> in_environment) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::SetEnvironment");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_SetEnvironment_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_SetEnvironment_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->environment)::BaseType::BufferWriter
      environment_writer;
  const mojo::internal::ContainerValidateParams environment_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::EnvironmentVariableDataView>>(
      in_environment, buffer, &environment_writer, &environment_validate_params,
      &serialization_context);
  params->environment.Set(
      environment_writer.is_null() ? nullptr : environment_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->environment.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null environment in NetworkService.SetEnvironment request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("SetEnvironment");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkService_GetTotalNetworkUsages_ProxyToResponder {
 public:
  static NetworkService::GetTotalNetworkUsagesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkService_GetTotalNetworkUsages_ProxyToResponder> proxy(
        new NetworkService_GetTotalNetworkUsages_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkService_GetTotalNetworkUsages_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkService_GetTotalNetworkUsages_ProxyToResponder() {
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
  NetworkService_GetTotalNetworkUsages_ProxyToResponder(
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
        << "NetworkService::GetTotalNetworkUsagesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::network::mojom::blink::NetworkUsagePtr> in_total_network_usages);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetTotalNetworkUsages_ProxyToResponder);
};

bool NetworkService_GetTotalNetworkUsages_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetTotalNetworkUsagesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::network::mojom::blink::NetworkUsagePtr> p_total_network_usages{};
  NetworkService_GetTotalNetworkUsages_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTotalNetworkUsages(&p_total_network_usages))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkService::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_total_network_usages));
  return true;
}

void NetworkService_GetTotalNetworkUsages_ProxyToResponder::Run(
    WTF::Vector<::network::mojom::blink::NetworkUsagePtr> in_total_network_usages) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetTotalNetworkUsages_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->total_network_usages)::BaseType::BufferWriter
      total_network_usages_writer;
  const mojo::internal::ContainerValidateParams total_network_usages_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::NetworkUsageDataView>>(
      in_total_network_usages, buffer, &total_network_usages_writer, &total_network_usages_validate_params,
      &serialization_context);
  params->total_network_usages.Set(
      total_network_usages_writer.is_null() ? nullptr : total_network_usages_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->total_network_usages.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null total_network_usages in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetTotalNetworkUsagesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetTotalNetworkUsages");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkService_GetNetworkList_ProxyToResponder {
 public:
  static NetworkService::GetNetworkListCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkService_GetNetworkList_ProxyToResponder> proxy(
        new NetworkService_GetNetworkList_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkService_GetNetworkList_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkService_GetNetworkList_ProxyToResponder() {
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
  NetworkService_GetNetworkList_ProxyToResponder(
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
        << "NetworkService::GetNetworkListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<WTF::Vector<::network::mojom::blink::NetworkInterfacePtr>> in_networks);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkService_GetNetworkList_ProxyToResponder);
};

bool NetworkService_GetNetworkList_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkListCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkService_GetNetworkList_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkService_GetNetworkList_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<WTF::Vector<::network::mojom::blink::NetworkInterfacePtr>> p_networks{};
  NetworkService_GetNetworkList_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadNetworks(&p_networks))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkService::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_networks));
  return true;
}

void NetworkService_GetNetworkList_ProxyToResponder::Run(
    base::Optional<WTF::Vector<::network::mojom::blink::NetworkInterfacePtr>> in_networks) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkService_GetNetworkList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkService_GetNetworkList_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->networks)::BaseType::BufferWriter
      networks_writer;
  const mojo::internal::ContainerValidateParams networks_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>>(
      in_networks, buffer, &networks_writer, &networks_validate_params,
      &serialization_context);
  params->networks.Set(
      networks_writer.is_null() ? nullptr : networks_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkListCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkService::Name_);
  message.set_method_name("GetNetworkList");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NetworkServiceStubDispatch::Accept(
    NetworkService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetClient_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceClientPtr p_client{};
      NetworkServiceParamsPtr p_params{};
      NetworkService_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client), 
std::move(p_params));
      return true;
    }
    case internal::kNetworkService_StartNetLog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::StartNetLog",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_StartNetLog_Params_Data* params =
          reinterpret_cast<internal::NetworkService_StartNetLog_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_file{};
      ::network::mojom::blink::NetLogCaptureMode p_capture_mode{};
      ::mojo_base::mojom::blink::DictionaryValuePtr p_constants{};
      NetworkService_StartNetLog_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFile(&p_file))
        success = false;
      if (!input_data_view.ReadCaptureMode(&p_capture_mode))
        success = false;
      if (!input_data_view.ReadConstants(&p_constants))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartNetLog(
std::move(p_file), 
std::move(p_capture_mode), 
std::move(p_constants));
      return true;
    }
    case internal::kNetworkService_SetSSLKeyLogFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetSSLKeyLogFile",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetSSLKeyLogFile_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetSSLKeyLogFile_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_file{};
      NetworkService_SetSSLKeyLogFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFile(&p_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSSLKeyLogFile(
std::move(p_file));
      return true;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::CreateNetworkContext",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_CreateNetworkContext_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateNetworkContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::NetworkContextRequest p_context{};
      ::network::mojom::blink::NetworkContextParamsPtr p_params{};
      NetworkService_CreateNetworkContext_ParamsDataView input_data_view(params, &serialization_context);
      
      p_context =
          input_data_view.TakeContext<decltype(p_context)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateNetworkContext(
std::move(p_context), 
std::move(p_params));
      return true;
    }
    case internal::kNetworkService_ConfigureStubHostResolver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::ConfigureStubHostResolver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_ConfigureStubHostResolver_Params_Data* params =
          reinterpret_cast<internal::NetworkService_ConfigureStubHostResolver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_stub_resolver_enabled{};
      base::Optional<WTF::Vector<::network::mojom::blink::DnsOverHttpsServerPtr>> p_dns_over_https_servers{};
      NetworkService_ConfigureStubHostResolver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stub_resolver_enabled = input_data_view.stub_resolver_enabled();
      if (!input_data_view.ReadDnsOverHttpsServers(&p_dns_over_https_servers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConfigureStubHostResolver(
std::move(p_stub_resolver_enabled), 
std::move(p_dns_over_https_servers));
      return true;
    }
    case internal::kNetworkService_DisableQuic_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::DisableQuic",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_DisableQuic_Params_Data* params =
          reinterpret_cast<internal::NetworkService_DisableQuic_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkService_DisableQuic_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DisableQuic();
      return true;
    }
    case internal::kNetworkService_SetUpHttpAuth_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetUpHttpAuth",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetUpHttpAuth_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetUpHttpAuth_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HttpAuthStaticParamsPtr p_http_auth_static_params{};
      NetworkService_SetUpHttpAuth_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHttpAuthStaticParams(&p_http_auth_static_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetUpHttpAuth(
std::move(p_http_auth_static_params));
      return true;
    }
    case internal::kNetworkService_ConfigureHttpAuthPrefs_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::ConfigureHttpAuthPrefs",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data* params =
          reinterpret_cast<internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HttpAuthDynamicParamsPtr p_http_auth_dynamic_params{};
      NetworkService_ConfigureHttpAuthPrefs_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHttpAuthDynamicParams(&p_http_auth_dynamic_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConfigureHttpAuthPrefs(
std::move(p_http_auth_dynamic_params));
      return true;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetRawHeadersAccess",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetRawHeadersAccess_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetRawHeadersAccess_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>> p_origins{};
      NetworkService_SetRawHeadersAccess_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      if (!input_data_view.ReadOrigins(&p_origins))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetRawHeadersAccess(
std::move(p_process_id), 
std::move(p_origins));
      return true;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkChangeManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_GetNetworkChangeManager_Params_Data* params =
          reinterpret_cast<internal::NetworkService_GetNetworkChangeManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::NetworkChangeManagerRequest p_network_change_manager{};
      NetworkService_GetNetworkChangeManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_network_change_manager =
          input_data_view.TakeNetworkChangeManager<decltype(p_network_change_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNetworkChangeManager(
std::move(p_network_change_manager));
      return true;
    }
    case internal::kNetworkService_GetNetworkQualityEstimatorManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkQualityEstimatorManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data* params =
          reinterpret_cast<internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::NetworkQualityEstimatorManagerRequest p_network_quality_estimator_manager{};
      NetworkService_GetNetworkQualityEstimatorManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_network_quality_estimator_manager =
          input_data_view.TakeNetworkQualityEstimatorManager<decltype(p_network_quality_estimator_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNetworkQualityEstimatorManager(
std::move(p_network_quality_estimator_manager));
      return true;
    }
    case internal::kNetworkService_GetDnsConfigChangeManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetDnsConfigChangeManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_GetDnsConfigChangeManager_Params_Data* params =
          reinterpret_cast<internal::NetworkService_GetDnsConfigChangeManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::DnsConfigChangeManagerRequest p_dns_config_change_manager{};
      NetworkService_GetDnsConfigChangeManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_dns_config_change_manager =
          input_data_view.TakeDnsConfigChangeManager<decltype(p_dns_config_change_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDnsConfigChangeManager(
std::move(p_dns_config_change_manager));
      return true;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
      break;
    }
    case internal::kNetworkService_GetNetworkList_Name: {
      break;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::UpdateSignedTreeHead",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_UpdateSignedTreeHead_Params_Data* params =
          reinterpret_cast<internal::NetworkService_UpdateSignedTreeHead_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::SignedTreeHeadPtr p_signed_tree_head{};
      NetworkService_UpdateSignedTreeHead_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSignedTreeHead(&p_signed_tree_head))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSignedTreeHead(
std::move(p_signed_tree_head));
      return true;
    }
    case internal::kNetworkService_UpdateCRLSet_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::UpdateCRLSet",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_UpdateCRLSet_Params_Data* params =
          reinterpret_cast<internal::NetworkService_UpdateCRLSet_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::mojo_base::mojom::blink::ReadOnlyBufferPtr p_crl_set{};
      NetworkService_UpdateCRLSet_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCrlSet(&p_crl_set))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 15, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateCRLSet(
std::move(p_crl_set));
      return true;
    }
    case internal::kNetworkService_OnCertDBChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::OnCertDBChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_OnCertDBChanged_Params_Data* params =
          reinterpret_cast<internal::NetworkService_OnCertDBChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkService_OnCertDBChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 16, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCertDBChanged();
      return true;
    }
    case internal::kNetworkService_SetCryptConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetCryptConfig",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetCryptConfig_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetCryptConfig_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CryptConfigPtr p_crypt_config{};
      NetworkService_SetCryptConfig_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCryptConfig(&p_crypt_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCryptConfig(
std::move(p_crypt_config));
      return true;
    }
    case internal::kNetworkService_AddCorbExceptionForPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::AddCorbExceptionForPlugin",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_AddCorbExceptionForPlugin_Params_Data* params =
          reinterpret_cast<internal::NetworkService_AddCorbExceptionForPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      NetworkService_AddCorbExceptionForPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddCorbExceptionForPlugin(
std::move(p_process_id));
      return true;
    }
    case internal::kNetworkService_RemoveCorbExceptionForPlugin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::RemoveCorbExceptionForPlugin",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data* params =
          reinterpret_cast<internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_process_id{};
      NetworkService_RemoveCorbExceptionForPlugin_ParamsDataView input_data_view(params, &serialization_context);
      
      p_process_id = input_data_view.process_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 19, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveCorbExceptionForPlugin(
std::move(p_process_id));
      return true;
    }
    case internal::kNetworkService_OnMemoryPressure_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::OnMemoryPressure",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_OnMemoryPressure_Params_Data* params =
          reinterpret_cast<internal::NetworkService_OnMemoryPressure_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::mojo_base::mojom::blink::MemoryPressureLevel p_memory_pressure_level{};
      NetworkService_OnMemoryPressure_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMemoryPressureLevel(&p_memory_pressure_level))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 20, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnMemoryPressure(
std::move(p_memory_pressure_level));
      return true;
    }
    case internal::kNetworkService_SetEnvironment_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::SetEnvironment",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkService_SetEnvironment_Params_Data* params =
          reinterpret_cast<internal::NetworkService_SetEnvironment_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<EnvironmentVariablePtr> p_environment{};
      NetworkService_SetEnvironment_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEnvironment(&p_environment))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 21, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetEnvironment(
std::move(p_environment));
      return true;
    }
  }
  return false;
}

// static
bool NetworkServiceStubDispatch::AcceptWithResponder(
    NetworkService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
      break;
    }
    case internal::kNetworkService_StartNetLog_Name: {
      break;
    }
    case internal::kNetworkService_SetSSLKeyLogFile_Name: {
      break;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
      break;
    }
    case internal::kNetworkService_ConfigureStubHostResolver_Name: {
      break;
    }
    case internal::kNetworkService_DisableQuic_Name: {
      break;
    }
    case internal::kNetworkService_SetUpHttpAuth_Name: {
      break;
    }
    case internal::kNetworkService_ConfigureHttpAuthPrefs_Name: {
      break;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
      break;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
      break;
    }
    case internal::kNetworkService_GetNetworkQualityEstimatorManager_Name: {
      break;
    }
    case internal::kNetworkService_GetDnsConfigChangeManager_Name: {
      break;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetTotalNetworkUsages",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkService_GetTotalNetworkUsages_Params_Data* params =
          reinterpret_cast<
              internal::NetworkService_GetTotalNetworkUsages_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkService_GetTotalNetworkUsages_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 12, false);
        return false;
      }
      NetworkService::GetTotalNetworkUsagesCallback callback =
          NetworkService_GetTotalNetworkUsages_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetTotalNetworkUsages(std::move(callback));
      return true;
    }
    case internal::kNetworkService_GetNetworkList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkService::GetNetworkList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkService_GetNetworkList_Params_Data* params =
          reinterpret_cast<
              internal::NetworkService_GetNetworkList_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_policy{};
      NetworkService_GetNetworkList_ParamsDataView input_data_view(params, &serialization_context);
      
      p_policy = input_data_view.policy();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkService::Name_, 13, false);
        return false;
      }
      NetworkService::GetNetworkListCallback callback =
          NetworkService_GetNetworkList_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetNetworkList(
std::move(p_policy), std::move(callback));
      return true;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
      break;
    }
    case internal::kNetworkService_UpdateCRLSet_Name: {
      break;
    }
    case internal::kNetworkService_OnCertDBChanged_Name: {
      break;
    }
    case internal::kNetworkService_SetCryptConfig_Name: {
      break;
    }
    case internal::kNetworkService_AddCorbExceptionForPlugin_Name: {
      break;
    }
    case internal::kNetworkService_RemoveCorbExceptionForPlugin_Name: {
      break;
    }
    case internal::kNetworkService_OnMemoryPressure_Name: {
      break;
    }
    case internal::kNetworkService_SetEnvironment_Name: {
      break;
    }
  }
  return false;
}

bool NetworkServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkService RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_StartNetLog_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_StartNetLog_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetSSLKeyLogFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetSSLKeyLogFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_CreateNetworkContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateNetworkContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_ConfigureStubHostResolver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_ConfigureStubHostResolver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_DisableQuic_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_DisableQuic_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetUpHttpAuth_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetUpHttpAuth_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_ConfigureHttpAuthPrefs_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_ConfigureHttpAuthPrefs_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetRawHeadersAccess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetRawHeadersAccess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetNetworkChangeManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetNetworkChangeManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetNetworkQualityEstimatorManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetNetworkQualityEstimatorManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetDnsConfigChangeManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetDnsConfigChangeManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetTotalNetworkUsages_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetNetworkList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetNetworkList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_UpdateSignedTreeHead_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_UpdateSignedTreeHead_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_UpdateCRLSet_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_UpdateCRLSet_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_OnCertDBChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_OnCertDBChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetCryptConfig_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetCryptConfig_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_AddCorbExceptionForPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_AddCorbExceptionForPlugin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_RemoveCorbExceptionForPlugin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_RemoveCorbExceptionForPlugin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_OnMemoryPressure_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_OnMemoryPressure_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_SetEnvironment_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_SetEnvironment_Params_Data>(
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

bool NetworkServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkService_GetTotalNetworkUsages_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetTotalNetworkUsages_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkService_GetNetworkList_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetNetworkList_ResponseParams_Data>(
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
bool StructTraits<::network::mojom::blink::LoadInfo::DataView, ::network::mojom::blink::LoadInfoPtr>::Read(
    ::network::mojom::blink::LoadInfo::DataView input,
    ::network::mojom::blink::LoadInfoPtr* output) {
  bool success = true;
  ::network::mojom::blink::LoadInfoPtr result(::network::mojom::blink::LoadInfo::New());
  
      result->process_id = input.process_id();
      result->routing_id = input.routing_id();
      if (!input.ReadHost(&result->host))
        success = false;
      result->load_state = input.load_state();
      if (!input.ReadStateParam(&result->state_param))
        success = false;
      result->upload_position = input.upload_position();
      result->upload_size = input.upload_size();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::HttpAuthStaticParams::DataView, ::network::mojom::blink::HttpAuthStaticParamsPtr>::Read(
    ::network::mojom::blink::HttpAuthStaticParams::DataView input,
    ::network::mojom::blink::HttpAuthStaticParamsPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpAuthStaticParamsPtr result(::network::mojom::blink::HttpAuthStaticParams::New());
  
      if (!input.ReadSupportedSchemes(&result->supported_schemes))
        success = false;
      if (!input.ReadGssapiLibraryName(&result->gssapi_library_name))
        success = false;
      result->allow_gssapi_library_load = input.allow_gssapi_library_load();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::HttpAuthDynamicParams::DataView, ::network::mojom::blink::HttpAuthDynamicParamsPtr>::Read(
    ::network::mojom::blink::HttpAuthDynamicParams::DataView input,
    ::network::mojom::blink::HttpAuthDynamicParamsPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpAuthDynamicParamsPtr result(::network::mojom::blink::HttpAuthDynamicParams::New());
  
      if (!input.ReadServerWhitelist(&result->server_whitelist))
        success = false;
      if (!input.ReadDelegateWhitelist(&result->delegate_whitelist))
        success = false;
      result->delegate_by_kdc_policy = input.delegate_by_kdc_policy();
      result->negotiate_disable_cname_lookup = input.negotiate_disable_cname_lookup();
      result->enable_negotiate_port = input.enable_negotiate_port();
      result->ntlm_v2_enabled = input.ntlm_v2_enabled();
      if (!input.ReadAndroidNegotiateAccountType(&result->android_negotiate_account_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::CryptConfig::DataView, ::network::mojom::blink::CryptConfigPtr>::Read(
    ::network::mojom::blink::CryptConfig::DataView input,
    ::network::mojom::blink::CryptConfigPtr* output) {
  bool success = true;
  ::network::mojom::blink::CryptConfigPtr result(::network::mojom::blink::CryptConfig::New());
  
      if (!input.ReadStore(&result->store))
        success = false;
      if (!input.ReadProductName(&result->product_name))
        success = false;
      result->should_use_preference = input.should_use_preference();
      if (!input.ReadUserDataPath(&result->user_data_path))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::EnvironmentVariable::DataView, ::network::mojom::blink::EnvironmentVariablePtr>::Read(
    ::network::mojom::blink::EnvironmentVariable::DataView input,
    ::network::mojom::blink::EnvironmentVariablePtr* output) {
  bool success = true;
  ::network::mojom::blink::EnvironmentVariablePtr result(::network::mojom::blink::EnvironmentVariable::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::NetworkServiceParams::DataView, ::network::mojom::blink::NetworkServiceParamsPtr>::Read(
    ::network::mojom::blink::NetworkServiceParams::DataView input,
    ::network::mojom::blink::NetworkServiceParamsPtr* output) {
  bool success = true;
  ::network::mojom::blink::NetworkServiceParamsPtr result(::network::mojom::blink::NetworkServiceParams::New());
  
      if (!input.ReadInitialConnectionType(&result->initial_connection_type))
        success = false;
      if (!input.ReadInitialConnectionSubtype(&result->initial_connection_subtype))
        success = false;
      if (!input.ReadEnvironment(&result->environment))
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