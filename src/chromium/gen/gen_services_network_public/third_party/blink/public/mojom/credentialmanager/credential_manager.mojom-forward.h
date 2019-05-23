// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class CredentialInfoDataView;


enum class CredentialType : int32_t;

enum class CredentialMediationRequirement : int32_t;

enum class CredentialManagerError : int32_t;
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




}  // namespace mojom
}  // namespace blink
#include "components/password_manager/core/common/credential_manager_types.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_FORWARD_H_