// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_FORWARD_H_

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
class SSLConfigDataView;


enum class SSLVersion : int32_t;
class SSLConfig;
using SSLConfigPtr = mojo::StructPtr<SSLConfig>;

class SSLConfigClient;
using SSLConfigClientPtr = mojo::InterfacePtr<SSLConfigClient>;
using SSLConfigClientPtrInfo = mojo::InterfacePtrInfo<SSLConfigClient>;
using ThreadSafeSSLConfigClientPtr =
    mojo::ThreadSafeInterfacePtr<SSLConfigClient>;
using SSLConfigClientRequest = mojo::InterfaceRequest<SSLConfigClient>;
using SSLConfigClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SSLConfigClient>;
using ThreadSafeSSLConfigClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SSLConfigClient>;
using SSLConfigClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SSLConfigClient>;
using SSLConfigClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SSLConfigClient>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_FORWARD_H_