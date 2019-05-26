// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_FORWARD_H_

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

enum class CredentialType : int32_t;

enum class CredentialMediationRequirement : int32_t;

enum class CredentialManagerError : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_CredentialType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::CredentialType> {
  using Hash = blink_mojom_internal_CredentialType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_CredentialMediationRequirement_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::CredentialMediationRequirement> {
  using Hash = blink_mojom_internal_CredentialMediationRequirement_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_CredentialManagerError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::CredentialManagerError> {
  using Hash = blink_mojom_internal_CredentialManagerError_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using CredentialType = CredentialType;  // Alias for definition in the parent namespace.
using CredentialMediationRequirement = CredentialMediationRequirement;  // Alias for definition in the parent namespace.
using CredentialManagerError = CredentialManagerError;  // Alias for definition in the parent namespace.
class CredentialInfo;
using CredentialInfoPtr = mojo::StructPtr<CredentialInfo>;

class CredentialManager;
using CredentialManagerPtr = mojo::InterfacePtr<CredentialManager>;
using CredentialManagerPtrInfo = mojo::InterfacePtrInfo<CredentialManager>;
using ThreadSafeCredentialManagerPtr =
    mojo::ThreadSafeInterfacePtr<CredentialManager>;
using CredentialManagerRequest = mojo::InterfaceRequest<CredentialManager>;
using CredentialManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<CredentialManager>;
using ThreadSafeCredentialManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CredentialManager>;
using CredentialManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CredentialManager>;
using CredentialManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CredentialManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_BLINK_FORWARD_H_