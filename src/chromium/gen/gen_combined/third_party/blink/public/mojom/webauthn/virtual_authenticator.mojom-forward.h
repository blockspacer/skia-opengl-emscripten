// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_FORWARD_H_

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
namespace test {
namespace mojom {
class VirtualAuthenticatorOptionsDataView;

class RegisteredKeyDataView;


enum class ClientToAuthenticatorProtocol : int32_t;
class VirtualAuthenticatorOptions;
using VirtualAuthenticatorOptionsPtr = mojo::StructPtr<VirtualAuthenticatorOptions>;

class RegisteredKey;
using RegisteredKeyPtr = mojo::StructPtr<RegisteredKey>;

class VirtualAuthenticator;
using VirtualAuthenticatorPtr = mojo::InterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorPtrInfo = mojo::InterfacePtrInfo<VirtualAuthenticator>;
using ThreadSafeVirtualAuthenticatorPtr =
    mojo::ThreadSafeInterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorRequest = mojo::InterfaceRequest<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VirtualAuthenticator>;
using ThreadSafeVirtualAuthenticatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VirtualAuthenticator>;
using VirtualAuthenticatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VirtualAuthenticator>;

class VirtualAuthenticatorManager;
using VirtualAuthenticatorManagerPtr = mojo::InterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerPtrInfo = mojo::InterfacePtrInfo<VirtualAuthenticatorManager>;
using ThreadSafeVirtualAuthenticatorManagerPtr =
    mojo::ThreadSafeInterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerRequest = mojo::InterfaceRequest<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VirtualAuthenticatorManager>;
using ThreadSafeVirtualAuthenticatorManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VirtualAuthenticatorManager>;
using VirtualAuthenticatorManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VirtualAuthenticatorManager>;




}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_FORWARD_H_