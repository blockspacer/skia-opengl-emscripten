// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {
using CdmProxy_Status = mojo::NativeEnum;
using CdmProxy_Protocol = mojo::NativeEnum;
using CdmProxy_Function = mojo::NativeEnum;
using CdmProxy_KeyType = mojo::NativeEnum;
class CdmProxy;
using CdmProxyPtr = mojo::InterfacePtr<CdmProxy>;
using CdmProxyPtrInfo = mojo::InterfacePtrInfo<CdmProxy>;
using ThreadSafeCdmProxyPtr =
    mojo::ThreadSafeInterfacePtr<CdmProxy>;
using CdmProxyRequest = mojo::InterfaceRequest<CdmProxy>;
using CdmProxyAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmProxy>;
using ThreadSafeCdmProxyAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmProxy>;
using CdmProxyAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmProxy>;
using CdmProxyAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmProxy>;

class CdmProxyClient;
using CdmProxyClientPtr = mojo::InterfacePtr<CdmProxyClient>;
using CdmProxyClientPtrInfo = mojo::InterfacePtrInfo<CdmProxyClient>;
using ThreadSafeCdmProxyClientPtr =
    mojo::ThreadSafeInterfacePtr<CdmProxyClient>;
using CdmProxyClientRequest = mojo::InterfaceRequest<CdmProxyClient>;
using CdmProxyClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<CdmProxyClient>;
using ThreadSafeCdmProxyClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CdmProxyClient>;
using CdmProxyClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CdmProxyClient>;
using CdmProxyClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CdmProxyClient>;




}  // namespace mojom
}  // namespace media
#include "media/cdm/cdm_proxy.h"

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_FORWARD_H_