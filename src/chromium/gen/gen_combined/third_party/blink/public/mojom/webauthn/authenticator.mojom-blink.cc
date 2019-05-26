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

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink.h"

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

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-params-data.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
CommonCredentialInfo::CommonCredentialInfo()
    : id(),
      raw_id(),
      client_data_json() {}

CommonCredentialInfo::CommonCredentialInfo(
    const WTF::String& id_in,
    const WTF::Vector<uint8_t>& raw_id_in,
    const WTF::Vector<uint8_t>& client_data_json_in)
    : id(std::move(id_in)),
      raw_id(std::move(raw_id_in)),
      client_data_json(std::move(client_data_json_in)) {}

CommonCredentialInfo::~CommonCredentialInfo() = default;

bool CommonCredentialInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MakeCredentialAuthenticatorResponse::MakeCredentialAuthenticatorResponse()
    : info(),
      attestation_object(),
      transports(),
      echo_hmac_create_secret(),
      hmac_create_secret() {}

MakeCredentialAuthenticatorResponse::MakeCredentialAuthenticatorResponse(
    CommonCredentialInfoPtr info_in,
    const WTF::Vector<uint8_t>& attestation_object_in,
    const WTF::Vector<AuthenticatorTransport>& transports_in,
    bool echo_hmac_create_secret_in,
    bool hmac_create_secret_in)
    : info(std::move(info_in)),
      attestation_object(std::move(attestation_object_in)),
      transports(std::move(transports_in)),
      echo_hmac_create_secret(std::move(echo_hmac_create_secret_in)),
      hmac_create_secret(std::move(hmac_create_secret_in)) {}

MakeCredentialAuthenticatorResponse::~MakeCredentialAuthenticatorResponse() = default;

bool MakeCredentialAuthenticatorResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GetAssertionAuthenticatorResponse::GetAssertionAuthenticatorResponse()
    : info(),
      authenticator_data(),
      signature(),
      user_handle(),
      echo_appid_extension(),
      appid_extension() {}

GetAssertionAuthenticatorResponse::GetAssertionAuthenticatorResponse(
    CommonCredentialInfoPtr info_in,
    const WTF::Vector<uint8_t>& authenticator_data_in,
    const WTF::Vector<uint8_t>& signature_in,
    const base::Optional<WTF::Vector<uint8_t>>& user_handle_in,
    bool echo_appid_extension_in,
    bool appid_extension_in)
    : info(std::move(info_in)),
      authenticator_data(std::move(authenticator_data_in)),
      signature(std::move(signature_in)),
      user_handle(std::move(user_handle_in)),
      echo_appid_extension(std::move(echo_appid_extension_in)),
      appid_extension(std::move(appid_extension_in)) {}

GetAssertionAuthenticatorResponse::~GetAssertionAuthenticatorResponse() = default;

bool GetAssertionAuthenticatorResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialRpEntity::PublicKeyCredentialRpEntity()
    : id(),
      name(),
      icon() {}

PublicKeyCredentialRpEntity::PublicKeyCredentialRpEntity(
    const WTF::String& id_in,
    const WTF::String& name_in,
    const base::Optional<::blink::KURL>& icon_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      icon(std::move(icon_in)) {}

PublicKeyCredentialRpEntity::~PublicKeyCredentialRpEntity() = default;

bool PublicKeyCredentialRpEntity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialUserEntity::PublicKeyCredentialUserEntity()
    : id(),
      name(),
      icon(),
      display_name() {}

PublicKeyCredentialUserEntity::PublicKeyCredentialUserEntity(
    const WTF::Vector<uint8_t>& id_in,
    const WTF::String& name_in,
    const base::Optional<::blink::KURL>& icon_in,
    const WTF::String& display_name_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      icon(std::move(icon_in)),
      display_name(std::move(display_name_in)) {}

PublicKeyCredentialUserEntity::~PublicKeyCredentialUserEntity() = default;

bool PublicKeyCredentialUserEntity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialParameters::PublicKeyCredentialParameters()
    : type(),
      algorithm_identifier() {}

PublicKeyCredentialParameters::PublicKeyCredentialParameters(
    PublicKeyCredentialType type_in,
    int32_t algorithm_identifier_in)
    : type(std::move(type_in)),
      algorithm_identifier(std::move(algorithm_identifier_in)) {}

PublicKeyCredentialParameters::~PublicKeyCredentialParameters() = default;
size_t PublicKeyCredentialParameters::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->type);
  seed = mojo::internal::WTFHash(seed, this->algorithm_identifier);
  return seed;
}

bool PublicKeyCredentialParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CableAuthentication::CableAuthentication()
    : version(),
      client_eid(),
      authenticator_eid(),
      session_pre_key() {}

CableAuthentication::CableAuthentication(
    uint8_t version_in,
    const WTF::Vector<uint8_t>& client_eid_in,
    const WTF::Vector<uint8_t>& authenticator_eid_in,
    const WTF::Vector<uint8_t>& session_pre_key_in)
    : version(std::move(version_in)),
      client_eid(std::move(client_eid_in)),
      authenticator_eid(std::move(authenticator_eid_in)),
      session_pre_key(std::move(session_pre_key_in)) {}

CableAuthentication::~CableAuthentication() = default;

bool CableAuthentication::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CableRegistration::CableRegistration()
    : versions(),
      relying_party_public_key() {}

CableRegistration::CableRegistration(
    const WTF::Vector<uint8_t>& versions_in,
    const WTF::Vector<uint8_t>& relying_party_public_key_in)
    : versions(std::move(versions_in)),
      relying_party_public_key(std::move(relying_party_public_key_in)) {}

CableRegistration::~CableRegistration() = default;

bool CableRegistration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions()
    : challenge(),
      adjusted_timeout(),
      relying_party_id(),
      allow_credentials(),
      user_verification(),
      appid(),
      cable_authentication_data() {}

PublicKeyCredentialRequestOptions::PublicKeyCredentialRequestOptions(
    const WTF::Vector<uint8_t>& challenge_in,
    base::TimeDelta adjusted_timeout_in,
    const WTF::String& relying_party_id_in,
    WTF::Vector<PublicKeyCredentialDescriptorPtr> allow_credentials_in,
    UserVerificationRequirement user_verification_in,
    const WTF::String& appid_in,
    WTF::Vector<CableAuthenticationPtr> cable_authentication_data_in)
    : challenge(std::move(challenge_in)),
      adjusted_timeout(std::move(adjusted_timeout_in)),
      relying_party_id(std::move(relying_party_id_in)),
      allow_credentials(std::move(allow_credentials_in)),
      user_verification(std::move(user_verification_in)),
      appid(std::move(appid_in)),
      cable_authentication_data(std::move(cable_authentication_data_in)) {}

PublicKeyCredentialRequestOptions::~PublicKeyCredentialRequestOptions() = default;

bool PublicKeyCredentialRequestOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AuthenticatorSelectionCriteria::AuthenticatorSelectionCriteria()
    : authenticator_attachment(),
      require_resident_key(),
      user_verification() {}

AuthenticatorSelectionCriteria::AuthenticatorSelectionCriteria(
    AuthenticatorAttachment authenticator_attachment_in,
    bool require_resident_key_in,
    UserVerificationRequirement user_verification_in)
    : authenticator_attachment(std::move(authenticator_attachment_in)),
      require_resident_key(std::move(require_resident_key_in)),
      user_verification(std::move(user_verification_in)) {}

AuthenticatorSelectionCriteria::~AuthenticatorSelectionCriteria() = default;
size_t AuthenticatorSelectionCriteria::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->authenticator_attachment);
  seed = mojo::internal::WTFHash(seed, this->require_resident_key);
  seed = mojo::internal::WTFHash(seed, this->user_verification);
  return seed;
}

bool AuthenticatorSelectionCriteria::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions()
    : relying_party(),
      user(),
      challenge(),
      public_key_parameters(),
      adjusted_timeout(),
      exclude_credentials(),
      authenticator_selection(),
      attestation(),
      cable_registration_data(),
      hmac_create_secret(),
      protection_policy(),
      enforce_protection_policy() {}

PublicKeyCredentialCreationOptions::PublicKeyCredentialCreationOptions(
    PublicKeyCredentialRpEntityPtr relying_party_in,
    PublicKeyCredentialUserEntityPtr user_in,
    const WTF::Vector<uint8_t>& challenge_in,
    WTF::Vector<PublicKeyCredentialParametersPtr> public_key_parameters_in,
    base::TimeDelta adjusted_timeout_in,
    WTF::Vector<PublicKeyCredentialDescriptorPtr> exclude_credentials_in,
    AuthenticatorSelectionCriteriaPtr authenticator_selection_in,
    AttestationConveyancePreference attestation_in,
    CableRegistrationPtr cable_registration_data_in,
    bool hmac_create_secret_in,
    ProtectionPolicy protection_policy_in,
    bool enforce_protection_policy_in)
    : relying_party(std::move(relying_party_in)),
      user(std::move(user_in)),
      challenge(std::move(challenge_in)),
      public_key_parameters(std::move(public_key_parameters_in)),
      adjusted_timeout(std::move(adjusted_timeout_in)),
      exclude_credentials(std::move(exclude_credentials_in)),
      authenticator_selection(std::move(authenticator_selection_in)),
      attestation(std::move(attestation_in)),
      cable_registration_data(std::move(cable_registration_data_in)),
      hmac_create_secret(std::move(hmac_create_secret_in)),
      protection_policy(std::move(protection_policy_in)),
      enforce_protection_policy(std::move(enforce_protection_policy_in)) {}

PublicKeyCredentialCreationOptions::~PublicKeyCredentialCreationOptions() = default;

bool PublicKeyCredentialCreationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor()
    : type(),
      id(),
      transports() {}

PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor(
    PublicKeyCredentialType type_in,
    const WTF::Vector<uint8_t>& id_in,
    const WTF::Vector<AuthenticatorTransport>& transports_in)
    : type(std::move(type_in)),
      id(std::move(id_in)),
      transports(std::move(transports_in)) {}

PublicKeyCredentialDescriptor::~PublicKeyCredentialDescriptor() = default;

bool PublicKeyCredentialDescriptor::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Authenticator::Name_[] = "blink.mojom.Authenticator";

class Authenticator_MakeCredential_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Authenticator_MakeCredential_ForwardToCallback(
      Authenticator::MakeCredentialCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Authenticator::MakeCredentialCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Authenticator_MakeCredential_ForwardToCallback);
};

class Authenticator_GetAssertion_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Authenticator_GetAssertion_ForwardToCallback(
      Authenticator::GetAssertionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Authenticator::GetAssertionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Authenticator_GetAssertion_ForwardToCallback);
};

class Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ForwardToCallback(
      Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ForwardToCallback);
};

AuthenticatorProxy::AuthenticatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AuthenticatorProxy::MakeCredential(
    PublicKeyCredentialCreationOptionsPtr in_options, MakeCredentialCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::MakeCredential");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_MakeCredential_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_MakeCredential_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialCreationOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in Authenticator.MakeCredential request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("MakeCredential");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Authenticator_MakeCredential_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AuthenticatorProxy::GetAssertion(
    PublicKeyCredentialRequestOptionsPtr in_options, GetAssertionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::GetAssertion");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_GetAssertion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_GetAssertion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialRequestOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in Authenticator.GetAssertion request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("GetAssertion");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Authenticator_GetAssertion_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AuthenticatorProxy::IsUserVerifyingPlatformAuthenticatorAvailable(
    IsUserVerifyingPlatformAuthenticatorAvailableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::IsUserVerifyingPlatformAuthenticatorAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("IsUserVerifyingPlatformAuthenticatorAvailable");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void AuthenticatorProxy::Cancel(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::Cancel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_Cancel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_Cancel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("Cancel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Authenticator_MakeCredential_ProxyToResponder {
 public:
  static Authenticator::MakeCredentialCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Authenticator_MakeCredential_ProxyToResponder> proxy(
        new Authenticator_MakeCredential_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Authenticator_MakeCredential_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Authenticator_MakeCredential_ProxyToResponder() {
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
  Authenticator_MakeCredential_ProxyToResponder(
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
        << "Authenticator::MakeCredentialCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      AuthenticatorStatus in_status, MakeCredentialAuthenticatorResponsePtr in_credential);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Authenticator_MakeCredential_ProxyToResponder);
};

bool Authenticator_MakeCredential_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::MakeCredentialCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Authenticator_MakeCredential_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Authenticator_MakeCredential_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AuthenticatorStatus p_status{};
  MakeCredentialAuthenticatorResponsePtr p_credential{};
  Authenticator_MakeCredential_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadCredential(&p_credential))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Authenticator::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_credential));
  return true;
}

void Authenticator_MakeCredential_ProxyToResponder::Run(
    AuthenticatorStatus in_status, MakeCredentialAuthenticatorResponsePtr in_credential) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_MakeCredential_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_MakeCredential_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AuthenticatorStatus>(
      in_status, &params->status);
  typename decltype(params->credential)::BaseType::BufferWriter
      credential_writer;
  mojo::internal::Serialize<::blink::mojom::MakeCredentialAuthenticatorResponseDataView>(
      in_credential, buffer, &credential_writer, &serialization_context);
  params->credential.Set(
      credential_writer.is_null() ? nullptr : credential_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::MakeCredentialCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("MakeCredential");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Authenticator_GetAssertion_ProxyToResponder {
 public:
  static Authenticator::GetAssertionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Authenticator_GetAssertion_ProxyToResponder> proxy(
        new Authenticator_GetAssertion_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Authenticator_GetAssertion_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Authenticator_GetAssertion_ProxyToResponder() {
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
  Authenticator_GetAssertion_ProxyToResponder(
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
        << "Authenticator::GetAssertionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      AuthenticatorStatus in_status, GetAssertionAuthenticatorResponsePtr in_credential);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Authenticator_GetAssertion_ProxyToResponder);
};

bool Authenticator_GetAssertion_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::GetAssertionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Authenticator_GetAssertion_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Authenticator_GetAssertion_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  AuthenticatorStatus p_status{};
  GetAssertionAuthenticatorResponsePtr p_credential{};
  Authenticator_GetAssertion_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadCredential(&p_credential))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Authenticator::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_credential));
  return true;
}

void Authenticator_GetAssertion_ProxyToResponder::Run(
    AuthenticatorStatus in_status, GetAssertionAuthenticatorResponsePtr in_credential) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_GetAssertion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_GetAssertion_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::AuthenticatorStatus>(
      in_status, &params->status);
  typename decltype(params->credential)::BaseType::BufferWriter
      credential_writer;
  mojo::internal::Serialize<::blink::mojom::GetAssertionAuthenticatorResponseDataView>(
      in_credential, buffer, &credential_writer, &serialization_context);
  params->credential.Set(
      credential_writer.is_null() ? nullptr : credential_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::GetAssertionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("GetAssertion");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder {
 public:
  static Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder> proxy(
        new Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder() {
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
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder(
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
        << "Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_available);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder);
};

bool Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_available{};
  Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_available = input_data_view.available();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Authenticator::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_available));
  return true;
}

void Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder::Run(
    bool in_available) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->available = in_available;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Authenticator::Name_);
  message.set_method_name("IsUserVerifyingPlatformAuthenticatorAvailable");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AuthenticatorStubDispatch::Accept(
    Authenticator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAuthenticator_MakeCredential_Name: {
      break;
    }
    case internal::kAuthenticator_GetAssertion_Name: {
      break;
    }
    case internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name: {
      break;
    }
    case internal::kAuthenticator_Cancel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::Cancel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Authenticator_Cancel_Params_Data* params =
          reinterpret_cast<internal::Authenticator_Cancel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Authenticator_Cancel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Authenticator::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Cancel();
      return true;
    }
  }
  return false;
}

// static
bool AuthenticatorStubDispatch::AcceptWithResponder(
    Authenticator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAuthenticator_MakeCredential_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::MakeCredential",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Authenticator_MakeCredential_Params_Data* params =
          reinterpret_cast<
              internal::Authenticator_MakeCredential_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PublicKeyCredentialCreationOptionsPtr p_options{};
      Authenticator_MakeCredential_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Authenticator::Name_, 0, false);
        return false;
      }
      Authenticator::MakeCredentialCallback callback =
          Authenticator_MakeCredential_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MakeCredential(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kAuthenticator_GetAssertion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::GetAssertion",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Authenticator_GetAssertion_Params_Data* params =
          reinterpret_cast<
              internal::Authenticator_GetAssertion_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PublicKeyCredentialRequestOptionsPtr p_options{};
      Authenticator_GetAssertion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Authenticator::Name_, 1, false);
        return false;
      }
      Authenticator::GetAssertionCallback callback =
          Authenticator_GetAssertion_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAssertion(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Authenticator::IsUserVerifyingPlatformAuthenticatorAvailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data* params =
          reinterpret_cast<
              internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Authenticator::Name_, 2, false);
        return false;
      }
      Authenticator::IsUserVerifyingPlatformAuthenticatorAvailableCallback callback =
          Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsUserVerifyingPlatformAuthenticatorAvailable(std::move(callback));
      return true;
    }
    case internal::kAuthenticator_Cancel_Name: {
      break;
    }
  }
  return false;
}

bool AuthenticatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Authenticator RequestValidator");

  switch (message->header()->name) {
    case internal::kAuthenticator_MakeCredential_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_MakeCredential_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAuthenticator_GetAssertion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_GetAssertion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAuthenticator_Cancel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_Cancel_Params_Data>(
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

bool AuthenticatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Authenticator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAuthenticator_MakeCredential_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_MakeCredential_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAuthenticator_GetAssertion_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_GetAssertion_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Authenticator_IsUserVerifyingPlatformAuthenticatorAvailable_ResponseParams_Data>(
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
bool StructTraits<::blink::mojom::blink::CommonCredentialInfo::DataView, ::blink::mojom::blink::CommonCredentialInfoPtr>::Read(
    ::blink::mojom::blink::CommonCredentialInfo::DataView input,
    ::blink::mojom::blink::CommonCredentialInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::CommonCredentialInfoPtr result(::blink::mojom::blink::CommonCredentialInfo::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadRawId(&result->raw_id))
        success = false;
      if (!input.ReadClientDataJson(&result->client_data_json))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::MakeCredentialAuthenticatorResponse::DataView, ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr>::Read(
    ::blink::mojom::blink::MakeCredentialAuthenticatorResponse::DataView input,
    ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr* output) {
  bool success = true;
  ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr result(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::New());
  
      if (!input.ReadInfo(&result->info))
        success = false;
      if (!input.ReadAttestationObject(&result->attestation_object))
        success = false;
      if (!input.ReadTransports(&result->transports))
        success = false;
      result->echo_hmac_create_secret = input.echo_hmac_create_secret();
      result->hmac_create_secret = input.hmac_create_secret();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::GetAssertionAuthenticatorResponse::DataView, ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr>::Read(
    ::blink::mojom::blink::GetAssertionAuthenticatorResponse::DataView input,
    ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr* output) {
  bool success = true;
  ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr result(::blink::mojom::blink::GetAssertionAuthenticatorResponse::New());
  
      if (!input.ReadInfo(&result->info))
        success = false;
      if (!input.ReadAuthenticatorData(&result->authenticator_data))
        success = false;
      if (!input.ReadSignature(&result->signature))
        success = false;
      if (!input.ReadUserHandle(&result->user_handle))
        success = false;
      result->echo_appid_extension = input.echo_appid_extension();
      result->appid_extension = input.appid_extension();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialRpEntity::DataView, ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialRpEntity::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr result(::blink::mojom::blink::PublicKeyCredentialRpEntity::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialUserEntity::DataView, ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialUserEntity::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr result(::blink::mojom::blink::PublicKeyCredentialUserEntity::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadIcon(&result->icon))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialParameters::DataView, ::blink::mojom::blink::PublicKeyCredentialParametersPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialParameters::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialParametersPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialParametersPtr result(::blink::mojom::blink::PublicKeyCredentialParameters::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->algorithm_identifier = input.algorithm_identifier();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::CableAuthentication::DataView, ::blink::mojom::blink::CableAuthenticationPtr>::Read(
    ::blink::mojom::blink::CableAuthentication::DataView input,
    ::blink::mojom::blink::CableAuthenticationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::CableAuthenticationPtr result(::blink::mojom::blink::CableAuthentication::New());
  
      result->version = input.version();
      if (!input.ReadClientEid(&result->client_eid))
        success = false;
      if (!input.ReadAuthenticatorEid(&result->authenticator_eid))
        success = false;
      if (!input.ReadSessionPreKey(&result->session_pre_key))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::CableRegistration::DataView, ::blink::mojom::blink::CableRegistrationPtr>::Read(
    ::blink::mojom::blink::CableRegistration::DataView input,
    ::blink::mojom::blink::CableRegistrationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::CableRegistrationPtr result(::blink::mojom::blink::CableRegistration::New());
  
      if (!input.ReadVersions(&result->versions))
        success = false;
      if (!input.ReadRelyingPartyPublicKey(&result->relying_party_public_key))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialRequestOptions::DataView, ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialRequestOptions::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr result(::blink::mojom::blink::PublicKeyCredentialRequestOptions::New());
  
      if (!input.ReadChallenge(&result->challenge))
        success = false;
      if (!input.ReadAdjustedTimeout(&result->adjusted_timeout))
        success = false;
      if (!input.ReadRelyingPartyId(&result->relying_party_id))
        success = false;
      if (!input.ReadAllowCredentials(&result->allow_credentials))
        success = false;
      if (!input.ReadUserVerification(&result->user_verification))
        success = false;
      if (!input.ReadAppid(&result->appid))
        success = false;
      if (!input.ReadCableAuthenticationData(&result->cable_authentication_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::AuthenticatorSelectionCriteria::DataView, ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr>::Read(
    ::blink::mojom::blink::AuthenticatorSelectionCriteria::DataView input,
    ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr* output) {
  bool success = true;
  ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr result(::blink::mojom::blink::AuthenticatorSelectionCriteria::New());
  
      if (!input.ReadAuthenticatorAttachment(&result->authenticator_attachment))
        success = false;
      result->require_resident_key = input.require_resident_key();
      if (!input.ReadUserVerification(&result->user_verification))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialCreationOptions::DataView, ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialCreationOptions::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr result(::blink::mojom::blink::PublicKeyCredentialCreationOptions::New());
  
      if (!input.ReadRelyingParty(&result->relying_party))
        success = false;
      if (!input.ReadUser(&result->user))
        success = false;
      if (!input.ReadChallenge(&result->challenge))
        success = false;
      if (!input.ReadPublicKeyParameters(&result->public_key_parameters))
        success = false;
      if (!input.ReadAdjustedTimeout(&result->adjusted_timeout))
        success = false;
      if (!input.ReadExcludeCredentials(&result->exclude_credentials))
        success = false;
      if (!input.ReadAuthenticatorSelection(&result->authenticator_selection))
        success = false;
      if (!input.ReadAttestation(&result->attestation))
        success = false;
      if (!input.ReadCableRegistrationData(&result->cable_registration_data))
        success = false;
      result->hmac_create_secret = input.hmac_create_secret();
      if (!input.ReadProtectionPolicy(&result->protection_policy))
        success = false;
      result->enforce_protection_policy = input.enforce_protection_policy();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PublicKeyCredentialDescriptor::DataView, ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr>::Read(
    ::blink::mojom::blink::PublicKeyCredentialDescriptor::DataView input,
    ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr result(::blink::mojom::blink::PublicKeyCredentialDescriptor::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadTransports(&result->transports))
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