// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class AuthenticatorStatus : int32_t;

enum class AuthenticatorTransport : int32_t;

enum class UserVerificationRequirement : int32_t;

enum class AttestationConveyancePreference : int32_t;

enum class AuthenticatorAttachment : int32_t;

enum class ProtectionPolicy : int32_t;

enum class PublicKeyCredentialType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_AuthenticatorStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AuthenticatorStatus> {
  using Hash = blink_mojom_internal_AuthenticatorStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_AuthenticatorTransport_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AuthenticatorTransport> {
  using Hash = blink_mojom_internal_AuthenticatorTransport_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_UserVerificationRequirement_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::UserVerificationRequirement> {
  using Hash = blink_mojom_internal_UserVerificationRequirement_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_AttestationConveyancePreference_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AttestationConveyancePreference> {
  using Hash = blink_mojom_internal_AttestationConveyancePreference_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_AuthenticatorAttachment_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AuthenticatorAttachment> {
  using Hash = blink_mojom_internal_AuthenticatorAttachment_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ProtectionPolicy_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ProtectionPolicy> {
  using Hash = blink_mojom_internal_ProtectionPolicy_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_PublicKeyCredentialType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PublicKeyCredentialType> {
  using Hash = blink_mojom_internal_PublicKeyCredentialType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using AuthenticatorStatus = AuthenticatorStatus;  // Alias for definition in the parent namespace.
using AuthenticatorTransport = AuthenticatorTransport;  // Alias for definition in the parent namespace.
using UserVerificationRequirement = UserVerificationRequirement;  // Alias for definition in the parent namespace.
using AttestationConveyancePreference = AttestationConveyancePreference;  // Alias for definition in the parent namespace.
using AuthenticatorAttachment = AuthenticatorAttachment;  // Alias for definition in the parent namespace.
using ProtectionPolicy = ProtectionPolicy;  // Alias for definition in the parent namespace.
using PublicKeyCredentialType = PublicKeyCredentialType;  // Alias for definition in the parent namespace.
class CommonCredentialInfo;
using CommonCredentialInfoPtr = mojo::StructPtr<CommonCredentialInfo>;

class MakeCredentialAuthenticatorResponse;
using MakeCredentialAuthenticatorResponsePtr = mojo::StructPtr<MakeCredentialAuthenticatorResponse>;

class GetAssertionAuthenticatorResponse;
using GetAssertionAuthenticatorResponsePtr = mojo::StructPtr<GetAssertionAuthenticatorResponse>;

class PublicKeyCredentialRpEntity;
using PublicKeyCredentialRpEntityPtr = mojo::StructPtr<PublicKeyCredentialRpEntity>;

class PublicKeyCredentialUserEntity;
using PublicKeyCredentialUserEntityPtr = mojo::StructPtr<PublicKeyCredentialUserEntity>;

class PublicKeyCredentialParameters;
using PublicKeyCredentialParametersPtr = mojo::InlinedStructPtr<PublicKeyCredentialParameters>;

class CableAuthentication;
using CableAuthenticationPtr = mojo::StructPtr<CableAuthentication>;

class CableRegistration;
using CableRegistrationPtr = mojo::StructPtr<CableRegistration>;

class PublicKeyCredentialRequestOptions;
using PublicKeyCredentialRequestOptionsPtr = mojo::StructPtr<PublicKeyCredentialRequestOptions>;

class AuthenticatorSelectionCriteria;
using AuthenticatorSelectionCriteriaPtr = mojo::InlinedStructPtr<AuthenticatorSelectionCriteria>;

class PublicKeyCredentialCreationOptions;
using PublicKeyCredentialCreationOptionsPtr = mojo::StructPtr<PublicKeyCredentialCreationOptions>;

class PublicKeyCredentialDescriptor;
using PublicKeyCredentialDescriptorPtr = mojo::StructPtr<PublicKeyCredentialDescriptor>;

class Authenticator;
using AuthenticatorPtr = mojo::InterfacePtr<Authenticator>;
using AuthenticatorPtrInfo = mojo::InterfacePtrInfo<Authenticator>;
using ThreadSafeAuthenticatorPtr =
    mojo::ThreadSafeInterfacePtr<Authenticator>;
using AuthenticatorRequest = mojo::InterfaceRequest<Authenticator>;
using AuthenticatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Authenticator>;
using ThreadSafeAuthenticatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Authenticator>;
using AuthenticatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Authenticator>;
using AuthenticatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Authenticator>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_