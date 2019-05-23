// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_FORWARD_H_

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




namespace network {
namespace mojom {
class LoadInfoDataView;

class HttpAuthStaticParamsDataView;

class HttpAuthDynamicParamsDataView;

class CryptConfigDataView;

class EnvironmentVariableDataView;

class NetworkServiceParamsDataView;

class LoadInfo;
using LoadInfoPtr = mojo::StructPtr<LoadInfo>;

class HttpAuthStaticParams;
using HttpAuthStaticParamsPtr = mojo::StructPtr<HttpAuthStaticParams>;

class HttpAuthDynamicParams;
using HttpAuthDynamicParamsPtr = mojo::StructPtr<HttpAuthDynamicParams>;

class CryptConfig;
using CryptConfigPtr = mojo::StructPtr<CryptConfig>;

class EnvironmentVariable;
using EnvironmentVariablePtr = mojo::InlinedStructPtr<EnvironmentVariable>;

class NetworkServiceParams;
using NetworkServiceParamsPtr = mojo::StructPtr<NetworkServiceParams>;

class SSLPrivateKey;
using SSLPrivateKeyPtr = mojo::InterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyPtrInfo = mojo::InterfacePtrInfo<SSLPrivateKey>;
using ThreadSafeSSLPrivateKeyPtr =
    mojo::ThreadSafeInterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyRequest = mojo::InterfaceRequest<SSLPrivateKey>;
using SSLPrivateKeyAssociatedPtr =
    mojo::AssociatedInterfacePtr<SSLPrivateKey>;
using ThreadSafeSSLPrivateKeyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SSLPrivateKey>;
using SSLPrivateKeyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SSLPrivateKey>;
using SSLPrivateKeyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SSLPrivateKey>;

class AuthChallengeResponder;
using AuthChallengeResponderPtr = mojo::InterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderPtrInfo = mojo::InterfacePtrInfo<AuthChallengeResponder>;
using ThreadSafeAuthChallengeResponderPtr =
    mojo::ThreadSafeInterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderRequest = mojo::InterfaceRequest<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AuthChallengeResponder>;
using ThreadSafeAuthChallengeResponderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AuthChallengeResponder>;
using AuthChallengeResponderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AuthChallengeResponder>;

class NetworkServiceClient;
using NetworkServiceClientPtr = mojo::InterfacePtr<NetworkServiceClient>;
using NetworkServiceClientPtrInfo = mojo::InterfacePtrInfo<NetworkServiceClient>;
using ThreadSafeNetworkServiceClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkServiceClient>;
using NetworkServiceClientRequest = mojo::InterfaceRequest<NetworkServiceClient>;
using NetworkServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkServiceClient>;
using ThreadSafeNetworkServiceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkServiceClient>;
using NetworkServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkServiceClient>;
using NetworkServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkServiceClient>;

class NetworkService;
using NetworkServicePtr = mojo::InterfacePtr<NetworkService>;
using NetworkServicePtrInfo = mojo::InterfacePtrInfo<NetworkService>;
using ThreadSafeNetworkServicePtr =
    mojo::ThreadSafeInterfacePtr<NetworkService>;
using NetworkServiceRequest = mojo::InterfaceRequest<NetworkService>;
using NetworkServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkService>;
using ThreadSafeNetworkServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkService>;
using NetworkServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkService>;
using NetworkServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkService>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_FORWARD_H_