// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class CommonCredentialInfoDataView;

class MakeCredentialAuthenticatorResponseDataView;

class GetAssertionAuthenticatorResponseDataView;

class PublicKeyCredentialRpEntityDataView;

class PublicKeyCredentialUserEntityDataView;

class PublicKeyCredentialParametersDataView;

class CableAuthenticationDataView;

class CableRegistrationDataView;

class PublicKeyCredentialRequestOptionsDataView;

class AuthenticatorSelectionCriteriaDataView;

class PublicKeyCredentialCreationOptionsDataView;

class PublicKeyCredentialDescriptorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CommonCredentialInfoDataView> {
  using Data = ::blink::mojom::internal::CommonCredentialInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::MakeCredentialAuthenticatorResponseDataView> {
  using Data = ::blink::mojom::internal::MakeCredentialAuthenticatorResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::GetAssertionAuthenticatorResponseDataView> {
  using Data = ::blink::mojom::internal::GetAssertionAuthenticatorResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialRpEntityDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialRpEntity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialUserEntityDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialUserEntity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialParametersDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::CableAuthenticationDataView> {
  using Data = ::blink::mojom::internal::CableAuthentication_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::CableRegistrationDataView> {
  using Data = ::blink::mojom::internal::CableRegistration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialRequestOptionsDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialRequestOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::AuthenticatorSelectionCriteriaDataView> {
  using Data = ::blink::mojom::internal::AuthenticatorSelectionCriteria_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialCreationOptionsDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialCreationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PublicKeyCredentialDescriptorDataView> {
  using Data = ::blink::mojom::internal::PublicKeyCredentialDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class AuthenticatorStatus : int32_t {
  
  SUCCESS,
  
  PENDING_REQUEST,
  
  NOT_ALLOWED_ERROR,
  
  INVALID_DOMAIN,
  
  CREDENTIAL_EXCLUDED,
  
  CREDENTIAL_NOT_RECOGNIZED,
  
  NOT_IMPLEMENTED,
  
  NOT_FOCUSED,
  
  RESIDENT_CREDENTIALS_UNSUPPORTED,
  
  USER_VERIFICATION_UNSUPPORTED,
  
  ALGORITHM_UNSUPPORTED,
  
  EMPTY_ALLOW_CREDENTIALS,
  
  ANDROID_NOT_SUPPORTED_ERROR,
  
  PROTECTION_POLICY_INCONSISTENT,
  
  ABORT_ERROR,
  
  UNKNOWN_ERROR,
  kMinValue = 0,
  kMaxValue = 15,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AuthenticatorStatus value);
inline bool IsKnownEnumValue(AuthenticatorStatus value) {
  return internal::AuthenticatorStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AuthenticatorTransport : int32_t {
  
  USB,
  
  NFC,
  
  BLE,
  
  CABLE,
  
  INTERNAL,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AuthenticatorTransport value);
inline bool IsKnownEnumValue(AuthenticatorTransport value) {
  return internal::AuthenticatorTransport_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class UserVerificationRequirement : int32_t {
  
  PREFERRED,
  
  REQUIRED,
  
  DISCOURAGED,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, UserVerificationRequirement value);
inline bool IsKnownEnumValue(UserVerificationRequirement value) {
  return internal::UserVerificationRequirement_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AttestationConveyancePreference : int32_t {
  
  NONE,
  
  INDIRECT,
  
  DIRECT,
  
  ENTERPRISE,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AttestationConveyancePreference value);
inline bool IsKnownEnumValue(AttestationConveyancePreference value) {
  return internal::AttestationConveyancePreference_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AuthenticatorAttachment : int32_t {
  
  NO_PREFERENCE,
  
  PLATFORM,
  
  CROSS_PLATFORM,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, AuthenticatorAttachment value);
inline bool IsKnownEnumValue(AuthenticatorAttachment value) {
  return internal::AuthenticatorAttachment_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ProtectionPolicy : int32_t {
  
  UNSPECIFIED,
  
  NONE,
  
  UV_OR_CRED_ID_REQUIRED,
  
  UV_REQUIRED,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ProtectionPolicy value);
inline bool IsKnownEnumValue(ProtectionPolicy value) {
  return internal::ProtectionPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PublicKeyCredentialType : int32_t {
  
  PUBLIC_KEY,
  kMinValue = 0,
  kMaxValue = 0,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PublicKeyCredentialType value);
inline bool IsKnownEnumValue(PublicKeyCredentialType value) {
  return internal::PublicKeyCredentialType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AuthenticatorInterfaceBase {};

using AuthenticatorPtrDataView =
    mojo::InterfacePtrDataView<AuthenticatorInterfaceBase>;
using AuthenticatorRequestDataView =
    mojo::InterfaceRequestDataView<AuthenticatorInterfaceBase>;
using AuthenticatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuthenticatorInterfaceBase>;
using AuthenticatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuthenticatorInterfaceBase>;
class CommonCredentialInfoDataView {
 public:
  CommonCredentialInfoDataView() {}

  CommonCredentialInfoDataView(
      internal::CommonCredentialInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRawIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawId(UserType* output) {
    auto* pointer = data_->raw_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetClientDataJsonDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientDataJson(UserType* output) {
    auto* pointer = data_->client_data_json.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CommonCredentialInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MakeCredentialAuthenticatorResponseDataView {
 public:
  MakeCredentialAuthenticatorResponseDataView() {}

  MakeCredentialAuthenticatorResponseDataView(
      internal::MakeCredentialAuthenticatorResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      CommonCredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::CommonCredentialInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAttestationObjectDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttestationObject(UserType* output) {
    auto* pointer = data_->attestation_object.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetTransportsDataView(
      mojo::ArrayDataView<AuthenticatorTransport>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransports(UserType* output) {
    auto* pointer = data_->transports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AuthenticatorTransport>>(
        pointer, output, context_);
  }
  bool echo_hmac_create_secret() const {
    return data_->echo_hmac_create_secret;
  }
  bool hmac_create_secret() const {
    return data_->hmac_create_secret;
  }
 private:
  internal::MakeCredentialAuthenticatorResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GetAssertionAuthenticatorResponseDataView {
 public:
  GetAssertionAuthenticatorResponseDataView() {}

  GetAssertionAuthenticatorResponseDataView(
      internal::GetAssertionAuthenticatorResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      CommonCredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::CommonCredentialInfoDataView>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorData(UserType* output) {
    auto* pointer = data_->authenticator_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetUserHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserHandle(UserType* output) {
    auto* pointer = data_->user_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  bool echo_appid_extension() const {
    return data_->echo_appid_extension;
  }
  bool appid_extension() const {
    return data_->appid_extension;
  }
 private:
  internal::GetAssertionAuthenticatorResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialRpEntityDataView {
 public:
  PublicKeyCredentialRpEntityDataView() {}

  PublicKeyCredentialRpEntityDataView(
      internal::PublicKeyCredentialRpEntity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialRpEntity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialUserEntityDataView {
 public:
  PublicKeyCredentialUserEntityDataView() {}

  PublicKeyCredentialUserEntityDataView(
      internal::PublicKeyCredentialUserEntity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialUserEntity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialParametersDataView {
 public:
  PublicKeyCredentialParametersDataView() {}

  PublicKeyCredentialParametersDataView(
      internal::PublicKeyCredentialParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialType>(
        data_value, output);
  }

  PublicKeyCredentialType type() const {
    return static_cast<PublicKeyCredentialType>(data_->type);
  }
  int32_t algorithm_identifier() const {
    return data_->algorithm_identifier;
  }
 private:
  internal::PublicKeyCredentialParameters_Data* data_ = nullptr;
};

class CableAuthenticationDataView {
 public:
  CableAuthenticationDataView() {}

  CableAuthenticationDataView(
      internal::CableAuthentication_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t version() const {
    return data_->version;
  }
  inline void GetClientEidDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientEid(UserType* output) {
    auto* pointer = data_->client_eid.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorEidDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorEid(UserType* output) {
    auto* pointer = data_->authenticator_eid.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSessionPreKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionPreKey(UserType* output) {
    auto* pointer = data_->session_pre_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CableAuthentication_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CableRegistrationDataView {
 public:
  CableRegistrationDataView() {}

  CableRegistrationDataView(
      internal::CableRegistration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVersionsDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersions(UserType* output) {
    auto* pointer = data_->versions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetRelyingPartyPublicKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingPartyPublicKey(UserType* output) {
    auto* pointer = data_->relying_party_public_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CableRegistration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialRequestOptionsDataView {
 public:
  PublicKeyCredentialRequestOptionsDataView() {}

  PublicKeyCredentialRequestOptionsDataView(
      internal::PublicKeyCredentialRequestOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChallengeDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAdjustedTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdjustedTimeout(UserType* output) {
    auto* pointer = data_->adjusted_timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetRelyingPartyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingPartyId(UserType* output) {
    auto* pointer = data_->relying_party_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAllowCredentialsDataView(
      mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllowCredentials(UserType* output) {
    auto* pointer = data_->allow_credentials.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialDescriptorDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserVerification(UserType* output) const {
    auto data_value = data_->user_verification;
    return mojo::internal::Deserialize<::blink::mojom::UserVerificationRequirement>(
        data_value, output);
  }

  UserVerificationRequirement user_verification() const {
    return static_cast<UserVerificationRequirement>(data_->user_verification);
  }
  inline void GetAppidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppid(UserType* output) {
    auto* pointer = data_->appid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCableAuthenticationDataDataView(
      mojo::ArrayDataView<CableAuthenticationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCableAuthenticationData(UserType* output) {
    auto* pointer = data_->cable_authentication_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::CableAuthenticationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialRequestOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AuthenticatorSelectionCriteriaDataView {
 public:
  AuthenticatorSelectionCriteriaDataView() {}

  AuthenticatorSelectionCriteriaDataView(
      internal::AuthenticatorSelectionCriteria_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorAttachment(UserType* output) const {
    auto data_value = data_->authenticator_attachment;
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorAttachment>(
        data_value, output);
  }

  AuthenticatorAttachment authenticator_attachment() const {
    return static_cast<AuthenticatorAttachment>(data_->authenticator_attachment);
  }
  bool require_resident_key() const {
    return data_->require_resident_key;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserVerification(UserType* output) const {
    auto data_value = data_->user_verification;
    return mojo::internal::Deserialize<::blink::mojom::UserVerificationRequirement>(
        data_value, output);
  }

  UserVerificationRequirement user_verification() const {
    return static_cast<UserVerificationRequirement>(data_->user_verification);
  }
 private:
  internal::AuthenticatorSelectionCriteria_Data* data_ = nullptr;
};

class PublicKeyCredentialCreationOptionsDataView {
 public:
  PublicKeyCredentialCreationOptionsDataView() {}

  PublicKeyCredentialCreationOptionsDataView(
      internal::PublicKeyCredentialCreationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRelyingPartyDataView(
      PublicKeyCredentialRpEntityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelyingParty(UserType* output) {
    auto* pointer = data_->relying_party.Get();
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialRpEntityDataView>(
        pointer, output, context_);
  }
  inline void GetUserDataView(
      PublicKeyCredentialUserEntityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUser(UserType* output) {
    auto* pointer = data_->user.Get();
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialUserEntityDataView>(
        pointer, output, context_);
  }
  inline void GetChallengeDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPublicKeyParametersDataView(
      mojo::ArrayDataView<PublicKeyCredentialParametersDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPublicKeyParameters(UserType* output) {
    auto* pointer = data_->public_key_parameters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialParametersDataView>>(
        pointer, output, context_);
  }
  inline void GetAdjustedTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdjustedTimeout(UserType* output) {
    auto* pointer = data_->adjusted_timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetExcludeCredentialsDataView(
      mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludeCredentials(UserType* output) {
    auto* pointer = data_->exclude_credentials.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialDescriptorDataView>>(
        pointer, output, context_);
  }
  inline void GetAuthenticatorSelectionDataView(
      AuthenticatorSelectionCriteriaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuthenticatorSelection(UserType* output) {
    auto* pointer = data_->authenticator_selection.Get();
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorSelectionCriteriaDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttestation(UserType* output) const {
    auto data_value = data_->attestation;
    return mojo::internal::Deserialize<::blink::mojom::AttestationConveyancePreference>(
        data_value, output);
  }

  AttestationConveyancePreference attestation() const {
    return static_cast<AttestationConveyancePreference>(data_->attestation);
  }
  inline void GetCableRegistrationDataDataView(
      CableRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCableRegistrationData(UserType* output) {
    auto* pointer = data_->cable_registration_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::CableRegistrationDataView>(
        pointer, output, context_);
  }
  bool hmac_create_secret() const {
    return data_->hmac_create_secret;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtectionPolicy(UserType* output) const {
    auto data_value = data_->protection_policy;
    return mojo::internal::Deserialize<::blink::mojom::ProtectionPolicy>(
        data_value, output);
  }

  ProtectionPolicy protection_policy() const {
    return static_cast<ProtectionPolicy>(data_->protection_policy);
  }
  bool enforce_protection_policy() const {
    return data_->enforce_protection_policy;
  }
 private:
  internal::PublicKeyCredentialCreationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PublicKeyCredentialDescriptorDataView {
 public:
  PublicKeyCredentialDescriptorDataView() {}

  PublicKeyCredentialDescriptorDataView(
      internal::PublicKeyCredentialDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::PublicKeyCredentialType>(
        data_value, output);
  }

  PublicKeyCredentialType type() const {
    return static_cast<PublicKeyCredentialType>(data_->type);
  }
  inline void GetIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetTransportsDataView(
      mojo::ArrayDataView<AuthenticatorTransport>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransports(UserType* output) {
    auto* pointer = data_->transports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AuthenticatorTransport>>(
        pointer, output, context_);
  }
 private:
  internal::PublicKeyCredentialDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::AuthenticatorStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AuthenticatorStatus> {};

template <>
struct hash<::blink::mojom::AuthenticatorTransport>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AuthenticatorTransport> {};

template <>
struct hash<::blink::mojom::UserVerificationRequirement>
    : public mojo::internal::EnumHashImpl<::blink::mojom::UserVerificationRequirement> {};

template <>
struct hash<::blink::mojom::AttestationConveyancePreference>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AttestationConveyancePreference> {};

template <>
struct hash<::blink::mojom::AuthenticatorAttachment>
    : public mojo::internal::EnumHashImpl<::blink::mojom::AuthenticatorAttachment> {};

template <>
struct hash<::blink::mojom::ProtectionPolicy>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ProtectionPolicy> {};

template <>
struct hash<::blink::mojom::PublicKeyCredentialType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PublicKeyCredentialType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::AuthenticatorStatus, ::blink::mojom::AuthenticatorStatus> {
  static ::blink::mojom::AuthenticatorStatus ToMojom(::blink::mojom::AuthenticatorStatus input) { return input; }
  static bool FromMojom(::blink::mojom::AuthenticatorStatus input, ::blink::mojom::AuthenticatorStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AuthenticatorStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AuthenticatorStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AuthenticatorStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::AuthenticatorTransport, ::blink::mojom::AuthenticatorTransport> {
  static ::blink::mojom::AuthenticatorTransport ToMojom(::blink::mojom::AuthenticatorTransport input) { return input; }
  static bool FromMojom(::blink::mojom::AuthenticatorTransport input, ::blink::mojom::AuthenticatorTransport* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AuthenticatorTransport, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AuthenticatorTransport, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AuthenticatorTransport>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::UserVerificationRequirement, ::blink::mojom::UserVerificationRequirement> {
  static ::blink::mojom::UserVerificationRequirement ToMojom(::blink::mojom::UserVerificationRequirement input) { return input; }
  static bool FromMojom(::blink::mojom::UserVerificationRequirement input, ::blink::mojom::UserVerificationRequirement* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UserVerificationRequirement, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::UserVerificationRequirement, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::UserVerificationRequirement>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::AttestationConveyancePreference, ::blink::mojom::AttestationConveyancePreference> {
  static ::blink::mojom::AttestationConveyancePreference ToMojom(::blink::mojom::AttestationConveyancePreference input) { return input; }
  static bool FromMojom(::blink::mojom::AttestationConveyancePreference input, ::blink::mojom::AttestationConveyancePreference* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AttestationConveyancePreference, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AttestationConveyancePreference, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AttestationConveyancePreference>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::AuthenticatorAttachment, ::blink::mojom::AuthenticatorAttachment> {
  static ::blink::mojom::AuthenticatorAttachment ToMojom(::blink::mojom::AuthenticatorAttachment input) { return input; }
  static bool FromMojom(::blink::mojom::AuthenticatorAttachment input, ::blink::mojom::AuthenticatorAttachment* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AuthenticatorAttachment, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::AuthenticatorAttachment, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::AuthenticatorAttachment>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ProtectionPolicy, ::blink::mojom::ProtectionPolicy> {
  static ::blink::mojom::ProtectionPolicy ToMojom(::blink::mojom::ProtectionPolicy input) { return input; }
  static bool FromMojom(::blink::mojom::ProtectionPolicy input, ::blink::mojom::ProtectionPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ProtectionPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ProtectionPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ProtectionPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PublicKeyCredentialType, ::blink::mojom::PublicKeyCredentialType> {
  static ::blink::mojom::PublicKeyCredentialType ToMojom(::blink::mojom::PublicKeyCredentialType input) { return input; }
  static bool FromMojom(::blink::mojom::PublicKeyCredentialType input, ::blink::mojom::PublicKeyCredentialType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PublicKeyCredentialType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PublicKeyCredentialType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CommonCredentialInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CommonCredentialInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CommonCredentialInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in CommonCredentialInfo struct");
    decltype(Traits::raw_id(input)) in_raw_id = Traits::raw_id(input);
    typename decltype((*output)->raw_id)::BaseType::BufferWriter
        raw_id_writer;
    const mojo::internal::ContainerValidateParams raw_id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_raw_id, buffer, &raw_id_writer, &raw_id_validate_params,
        context);
    (*output)->raw_id.Set(
        raw_id_writer.is_null() ? nullptr : raw_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_id in CommonCredentialInfo struct");
    decltype(Traits::client_data_json(input)) in_client_data_json = Traits::client_data_json(input);
    typename decltype((*output)->client_data_json)::BaseType::BufferWriter
        client_data_json_writer;
    const mojo::internal::ContainerValidateParams client_data_json_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_client_data_json, buffer, &client_data_json_writer, &client_data_json_validate_params,
        context);
    (*output)->client_data_json.Set(
        client_data_json_writer.is_null() ? nullptr : client_data_json_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_data_json.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_data_json in CommonCredentialInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::CommonCredentialInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CommonCredentialInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MakeCredentialAuthenticatorResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MakeCredentialAuthenticatorResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MakeCredentialAuthenticatorResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::info(input)) in_info = Traits::info(input);
    typename decltype((*output)->info)::BaseType::BufferWriter
        info_writer;
    mojo::internal::Serialize<::blink::mojom::CommonCredentialInfoDataView>(
        in_info, buffer, &info_writer, context);
    (*output)->info.Set(
        info_writer.is_null() ? nullptr : info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null info in MakeCredentialAuthenticatorResponse struct");
    decltype(Traits::attestation_object(input)) in_attestation_object = Traits::attestation_object(input);
    typename decltype((*output)->attestation_object)::BaseType::BufferWriter
        attestation_object_writer;
    const mojo::internal::ContainerValidateParams attestation_object_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_attestation_object, buffer, &attestation_object_writer, &attestation_object_validate_params,
        context);
    (*output)->attestation_object.Set(
        attestation_object_writer.is_null() ? nullptr : attestation_object_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->attestation_object.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null attestation_object in MakeCredentialAuthenticatorResponse struct");
    decltype(Traits::transports(input)) in_transports = Traits::transports(input);
    typename decltype((*output)->transports)::BaseType::BufferWriter
        transports_writer;
    const mojo::internal::ContainerValidateParams transports_validate_params(
        0, ::blink::mojom::internal::AuthenticatorTransport_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AuthenticatorTransport>>(
        in_transports, buffer, &transports_writer, &transports_validate_params,
        context);
    (*output)->transports.Set(
        transports_writer.is_null() ? nullptr : transports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transports in MakeCredentialAuthenticatorResponse struct");
    (*output)->echo_hmac_create_secret = Traits::echo_hmac_create_secret(input);
    (*output)->hmac_create_secret = Traits::hmac_create_secret(input);
  }

  static bool Deserialize(::blink::mojom::internal::MakeCredentialAuthenticatorResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MakeCredentialAuthenticatorResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::GetAssertionAuthenticatorResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::GetAssertionAuthenticatorResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::GetAssertionAuthenticatorResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::info(input)) in_info = Traits::info(input);
    typename decltype((*output)->info)::BaseType::BufferWriter
        info_writer;
    mojo::internal::Serialize<::blink::mojom::CommonCredentialInfoDataView>(
        in_info, buffer, &info_writer, context);
    (*output)->info.Set(
        info_writer.is_null() ? nullptr : info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null info in GetAssertionAuthenticatorResponse struct");
    decltype(Traits::authenticator_data(input)) in_authenticator_data = Traits::authenticator_data(input);
    typename decltype((*output)->authenticator_data)::BaseType::BufferWriter
        authenticator_data_writer;
    const mojo::internal::ContainerValidateParams authenticator_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_authenticator_data, buffer, &authenticator_data_writer, &authenticator_data_validate_params,
        context);
    (*output)->authenticator_data.Set(
        authenticator_data_writer.is_null() ? nullptr : authenticator_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->authenticator_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null authenticator_data in GetAssertionAuthenticatorResponse struct");
    decltype(Traits::signature(input)) in_signature = Traits::signature(input);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    const mojo::internal::ContainerValidateParams signature_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_signature, buffer, &signature_writer, &signature_validate_params,
        context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in GetAssertionAuthenticatorResponse struct");
    decltype(Traits::user_handle(input)) in_user_handle = Traits::user_handle(input);
    typename decltype((*output)->user_handle)::BaseType::BufferWriter
        user_handle_writer;
    const mojo::internal::ContainerValidateParams user_handle_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_user_handle, buffer, &user_handle_writer, &user_handle_validate_params,
        context);
    (*output)->user_handle.Set(
        user_handle_writer.is_null() ? nullptr : user_handle_writer.data());
    (*output)->echo_appid_extension = Traits::echo_appid_extension(input);
    (*output)->appid_extension = Traits::appid_extension(input);
  }

  static bool Deserialize(::blink::mojom::internal::GetAssertionAuthenticatorResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::GetAssertionAuthenticatorResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialRpEntityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialRpEntityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialRpEntity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialRpEntity struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PublicKeyCredentialRpEntity struct");
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialRpEntity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialRpEntityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialUserEntityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialUserEntityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialUserEntity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialUserEntity struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PublicKeyCredentialUserEntity struct");
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    decltype(Traits::display_name(input)) in_display_name = Traits::display_name(input);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in PublicKeyCredentialUserEntity struct");
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialUserEntity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialUserEntityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialType>(
        Traits::type(input), &(*output)->type);
    (*output)->algorithm_identifier = Traits::algorithm_identifier(input);
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CableAuthenticationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CableAuthenticationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CableAuthentication_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->version = Traits::version(input);
    decltype(Traits::client_eid(input)) in_client_eid = Traits::client_eid(input);
    typename decltype((*output)->client_eid)::BaseType::BufferWriter
        client_eid_writer;
    const mojo::internal::ContainerValidateParams client_eid_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_client_eid, buffer, &client_eid_writer, &client_eid_validate_params,
        context);
    (*output)->client_eid.Set(
        client_eid_writer.is_null() ? nullptr : client_eid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_eid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_eid in CableAuthentication struct");
    decltype(Traits::authenticator_eid(input)) in_authenticator_eid = Traits::authenticator_eid(input);
    typename decltype((*output)->authenticator_eid)::BaseType::BufferWriter
        authenticator_eid_writer;
    const mojo::internal::ContainerValidateParams authenticator_eid_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_authenticator_eid, buffer, &authenticator_eid_writer, &authenticator_eid_validate_params,
        context);
    (*output)->authenticator_eid.Set(
        authenticator_eid_writer.is_null() ? nullptr : authenticator_eid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->authenticator_eid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null authenticator_eid in CableAuthentication struct");
    decltype(Traits::session_pre_key(input)) in_session_pre_key = Traits::session_pre_key(input);
    typename decltype((*output)->session_pre_key)::BaseType::BufferWriter
        session_pre_key_writer;
    const mojo::internal::ContainerValidateParams session_pre_key_validate_params(
        32, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_session_pre_key, buffer, &session_pre_key_writer, &session_pre_key_validate_params,
        context);
    (*output)->session_pre_key.Set(
        session_pre_key_writer.is_null() ? nullptr : session_pre_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_pre_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_pre_key in CableAuthentication struct");
  }

  static bool Deserialize(::blink::mojom::internal::CableAuthentication_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CableAuthenticationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CableRegistrationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CableRegistrationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CableRegistration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::versions(input)) in_versions = Traits::versions(input);
    typename decltype((*output)->versions)::BaseType::BufferWriter
        versions_writer;
    const mojo::internal::ContainerValidateParams versions_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_versions, buffer, &versions_writer, &versions_validate_params,
        context);
    (*output)->versions.Set(
        versions_writer.is_null() ? nullptr : versions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->versions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null versions in CableRegistration struct");
    decltype(Traits::relying_party_public_key(input)) in_relying_party_public_key = Traits::relying_party_public_key(input);
    typename decltype((*output)->relying_party_public_key)::BaseType::BufferWriter
        relying_party_public_key_writer;
    const mojo::internal::ContainerValidateParams relying_party_public_key_validate_params(
        65, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_relying_party_public_key, buffer, &relying_party_public_key_writer, &relying_party_public_key_validate_params,
        context);
    (*output)->relying_party_public_key.Set(
        relying_party_public_key_writer.is_null() ? nullptr : relying_party_public_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party_public_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party_public_key in CableRegistration struct");
  }

  static bool Deserialize(::blink::mojom::internal::CableRegistration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CableRegistrationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialRequestOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialRequestOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialRequestOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::challenge(input)) in_challenge = Traits::challenge(input);
    typename decltype((*output)->challenge)::BaseType::BufferWriter
        challenge_writer;
    const mojo::internal::ContainerValidateParams challenge_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_challenge, buffer, &challenge_writer, &challenge_validate_params,
        context);
    (*output)->challenge.Set(
        challenge_writer.is_null() ? nullptr : challenge_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->challenge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenge in PublicKeyCredentialRequestOptions struct");
    decltype(Traits::adjusted_timeout(input)) in_adjusted_timeout = Traits::adjusted_timeout(input);
    typename decltype((*output)->adjusted_timeout)::BaseType::BufferWriter
        adjusted_timeout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_adjusted_timeout, buffer, &adjusted_timeout_writer, context);
    (*output)->adjusted_timeout.Set(
        adjusted_timeout_writer.is_null() ? nullptr : adjusted_timeout_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->adjusted_timeout.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null adjusted_timeout in PublicKeyCredentialRequestOptions struct");
    decltype(Traits::relying_party_id(input)) in_relying_party_id = Traits::relying_party_id(input);
    typename decltype((*output)->relying_party_id)::BaseType::BufferWriter
        relying_party_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_relying_party_id, buffer, &relying_party_id_writer, context);
    (*output)->relying_party_id.Set(
        relying_party_id_writer.is_null() ? nullptr : relying_party_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party_id in PublicKeyCredentialRequestOptions struct");
    decltype(Traits::allow_credentials(input)) in_allow_credentials = Traits::allow_credentials(input);
    typename decltype((*output)->allow_credentials)::BaseType::BufferWriter
        allow_credentials_writer;
    const mojo::internal::ContainerValidateParams allow_credentials_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialDescriptorDataView>>(
        in_allow_credentials, buffer, &allow_credentials_writer, &allow_credentials_validate_params,
        context);
    (*output)->allow_credentials.Set(
        allow_credentials_writer.is_null() ? nullptr : allow_credentials_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allow_credentials.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allow_credentials in PublicKeyCredentialRequestOptions struct");
    mojo::internal::Serialize<::blink::mojom::UserVerificationRequirement>(
        Traits::user_verification(input), &(*output)->user_verification);
    decltype(Traits::appid(input)) in_appid = Traits::appid(input);
    typename decltype((*output)->appid)::BaseType::BufferWriter
        appid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_appid, buffer, &appid_writer, context);
    (*output)->appid.Set(
        appid_writer.is_null() ? nullptr : appid_writer.data());
    decltype(Traits::cable_authentication_data(input)) in_cable_authentication_data = Traits::cable_authentication_data(input);
    typename decltype((*output)->cable_authentication_data)::BaseType::BufferWriter
        cable_authentication_data_writer;
    const mojo::internal::ContainerValidateParams cable_authentication_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::CableAuthenticationDataView>>(
        in_cable_authentication_data, buffer, &cable_authentication_data_writer, &cable_authentication_data_validate_params,
        context);
    (*output)->cable_authentication_data.Set(
        cable_authentication_data_writer.is_null() ? nullptr : cable_authentication_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cable_authentication_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cable_authentication_data in PublicKeyCredentialRequestOptions struct");
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialRequestOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialRequestOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AuthenticatorSelectionCriteriaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AuthenticatorSelectionCriteriaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AuthenticatorSelectionCriteria_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::AuthenticatorAttachment>(
        Traits::authenticator_attachment(input), &(*output)->authenticator_attachment);
    (*output)->require_resident_key = Traits::require_resident_key(input);
    mojo::internal::Serialize<::blink::mojom::UserVerificationRequirement>(
        Traits::user_verification(input), &(*output)->user_verification);
  }

  static bool Deserialize(::blink::mojom::internal::AuthenticatorSelectionCriteria_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AuthenticatorSelectionCriteriaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialCreationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialCreationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialCreationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::relying_party(input)) in_relying_party = Traits::relying_party(input);
    typename decltype((*output)->relying_party)::BaseType::BufferWriter
        relying_party_writer;
    mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialRpEntityDataView>(
        in_relying_party, buffer, &relying_party_writer, context);
    (*output)->relying_party.Set(
        relying_party_writer.is_null() ? nullptr : relying_party_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->relying_party.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null relying_party in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::user(input)) in_user = Traits::user(input);
    typename decltype((*output)->user)::BaseType::BufferWriter
        user_writer;
    mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialUserEntityDataView>(
        in_user, buffer, &user_writer, context);
    (*output)->user.Set(
        user_writer.is_null() ? nullptr : user_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::challenge(input)) in_challenge = Traits::challenge(input);
    typename decltype((*output)->challenge)::BaseType::BufferWriter
        challenge_writer;
    const mojo::internal::ContainerValidateParams challenge_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_challenge, buffer, &challenge_writer, &challenge_validate_params,
        context);
    (*output)->challenge.Set(
        challenge_writer.is_null() ? nullptr : challenge_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->challenge.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null challenge in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::public_key_parameters(input)) in_public_key_parameters = Traits::public_key_parameters(input);
    typename decltype((*output)->public_key_parameters)::BaseType::BufferWriter
        public_key_parameters_writer;
    const mojo::internal::ContainerValidateParams public_key_parameters_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialParametersDataView>>(
        in_public_key_parameters, buffer, &public_key_parameters_writer, &public_key_parameters_validate_params,
        context);
    (*output)->public_key_parameters.Set(
        public_key_parameters_writer.is_null() ? nullptr : public_key_parameters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->public_key_parameters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null public_key_parameters in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::adjusted_timeout(input)) in_adjusted_timeout = Traits::adjusted_timeout(input);
    typename decltype((*output)->adjusted_timeout)::BaseType::BufferWriter
        adjusted_timeout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_adjusted_timeout, buffer, &adjusted_timeout_writer, context);
    (*output)->adjusted_timeout.Set(
        adjusted_timeout_writer.is_null() ? nullptr : adjusted_timeout_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->adjusted_timeout.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null adjusted_timeout in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::exclude_credentials(input)) in_exclude_credentials = Traits::exclude_credentials(input);
    typename decltype((*output)->exclude_credentials)::BaseType::BufferWriter
        exclude_credentials_writer;
    const mojo::internal::ContainerValidateParams exclude_credentials_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PublicKeyCredentialDescriptorDataView>>(
        in_exclude_credentials, buffer, &exclude_credentials_writer, &exclude_credentials_validate_params,
        context);
    (*output)->exclude_credentials.Set(
        exclude_credentials_writer.is_null() ? nullptr : exclude_credentials_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->exclude_credentials.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null exclude_credentials in PublicKeyCredentialCreationOptions struct");
    decltype(Traits::authenticator_selection(input)) in_authenticator_selection = Traits::authenticator_selection(input);
    typename decltype((*output)->authenticator_selection)::BaseType::BufferWriter
        authenticator_selection_writer;
    mojo::internal::Serialize<::blink::mojom::AuthenticatorSelectionCriteriaDataView>(
        in_authenticator_selection, buffer, &authenticator_selection_writer, context);
    (*output)->authenticator_selection.Set(
        authenticator_selection_writer.is_null() ? nullptr : authenticator_selection_writer.data());
    mojo::internal::Serialize<::blink::mojom::AttestationConveyancePreference>(
        Traits::attestation(input), &(*output)->attestation);
    decltype(Traits::cable_registration_data(input)) in_cable_registration_data = Traits::cable_registration_data(input);
    typename decltype((*output)->cable_registration_data)::BaseType::BufferWriter
        cable_registration_data_writer;
    mojo::internal::Serialize<::blink::mojom::CableRegistrationDataView>(
        in_cable_registration_data, buffer, &cable_registration_data_writer, context);
    (*output)->cable_registration_data.Set(
        cable_registration_data_writer.is_null() ? nullptr : cable_registration_data_writer.data());
    (*output)->hmac_create_secret = Traits::hmac_create_secret(input);
    mojo::internal::Serialize<::blink::mojom::ProtectionPolicy>(
        Traits::protection_policy(input), &(*output)->protection_policy);
    (*output)->enforce_protection_policy = Traits::enforce_protection_policy(input);
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialCreationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialCreationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PublicKeyCredentialDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PublicKeyCredentialDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PublicKeyCredentialDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::PublicKeyCredentialType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    const mojo::internal::ContainerValidateParams id_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_id, buffer, &id_writer, &id_validate_params,
        context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PublicKeyCredentialDescriptor struct");
    decltype(Traits::transports(input)) in_transports = Traits::transports(input);
    typename decltype((*output)->transports)::BaseType::BufferWriter
        transports_writer;
    const mojo::internal::ContainerValidateParams transports_validate_params(
        0, ::blink::mojom::internal::AuthenticatorTransport_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::AuthenticatorTransport>>(
        in_transports, buffer, &transports_writer, &transports_validate_params,
        context);
    (*output)->transports.Set(
        transports_writer.is_null() ? nullptr : transports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transports in PublicKeyCredentialDescriptor struct");
  }

  static bool Deserialize(::blink::mojom::internal::PublicKeyCredentialDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PublicKeyCredentialDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CommonCredentialInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CommonCredentialInfoDataView::GetRawIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->raw_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CommonCredentialInfoDataView::GetClientDataJsonDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_data_json.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void MakeCredentialAuthenticatorResponseDataView::GetInfoDataView(
    CommonCredentialInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = CommonCredentialInfoDataView(pointer, context_);
}
inline void MakeCredentialAuthenticatorResponseDataView::GetAttestationObjectDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->attestation_object.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void MakeCredentialAuthenticatorResponseDataView::GetTransportsDataView(
    mojo::ArrayDataView<AuthenticatorTransport>* output) {
  auto pointer = data_->transports.Get();
  *output = mojo::ArrayDataView<AuthenticatorTransport>(pointer, context_);
}


inline void GetAssertionAuthenticatorResponseDataView::GetInfoDataView(
    CommonCredentialInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = CommonCredentialInfoDataView(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetAuthenticatorDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->authenticator_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetSignatureDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void GetAssertionAuthenticatorResponseDataView::GetUserHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->user_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void PublicKeyCredentialRpEntityDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRpEntityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRpEntityDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void PublicKeyCredentialUserEntityDataView::GetIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PublicKeyCredentialUserEntityDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void CableAuthenticationDataView::GetClientEidDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->client_eid.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CableAuthenticationDataView::GetAuthenticatorEidDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->authenticator_eid.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CableAuthenticationDataView::GetSessionPreKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->session_pre_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CableRegistrationDataView::GetVersionsDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->versions.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CableRegistrationDataView::GetRelyingPartyPublicKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->relying_party_public_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void PublicKeyCredentialRequestOptionsDataView::GetChallengeDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAdjustedTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->adjusted_timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetRelyingPartyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->relying_party_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAllowCredentialsDataView(
    mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output) {
  auto pointer = data_->allow_credentials.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetAppidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->appid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PublicKeyCredentialRequestOptionsDataView::GetCableAuthenticationDataDataView(
    mojo::ArrayDataView<CableAuthenticationDataView>* output) {
  auto pointer = data_->cable_authentication_data.Get();
  *output = mojo::ArrayDataView<CableAuthenticationDataView>(pointer, context_);
}




inline void PublicKeyCredentialCreationOptionsDataView::GetRelyingPartyDataView(
    PublicKeyCredentialRpEntityDataView* output) {
  auto pointer = data_->relying_party.Get();
  *output = PublicKeyCredentialRpEntityDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetUserDataView(
    PublicKeyCredentialUserEntityDataView* output) {
  auto pointer = data_->user.Get();
  *output = PublicKeyCredentialUserEntityDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetChallengeDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetPublicKeyParametersDataView(
    mojo::ArrayDataView<PublicKeyCredentialParametersDataView>* output) {
  auto pointer = data_->public_key_parameters.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialParametersDataView>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetAdjustedTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->adjusted_timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetExcludeCredentialsDataView(
    mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>* output) {
  auto pointer = data_->exclude_credentials.Get();
  *output = mojo::ArrayDataView<PublicKeyCredentialDescriptorDataView>(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetAuthenticatorSelectionDataView(
    AuthenticatorSelectionCriteriaDataView* output) {
  auto pointer = data_->authenticator_selection.Get();
  *output = AuthenticatorSelectionCriteriaDataView(pointer, context_);
}
inline void PublicKeyCredentialCreationOptionsDataView::GetCableRegistrationDataDataView(
    CableRegistrationDataView* output) {
  auto pointer = data_->cable_registration_data.Get();
  *output = CableRegistrationDataView(pointer, context_);
}


inline void PublicKeyCredentialDescriptorDataView::GetIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PublicKeyCredentialDescriptorDataView::GetTransportsDataView(
    mojo::ArrayDataView<AuthenticatorTransport>* output) {
  auto pointer = data_->transports.Get();
  *output = mojo::ArrayDataView<AuthenticatorTransport>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_H_