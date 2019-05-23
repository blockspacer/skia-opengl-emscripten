// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_FORWARD_H_



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






namespace network {
namespace mojom {

constexpr uint32_t kURLLoadOptionNone = 0U;

constexpr uint32_t kURLLoadOptionSendSSLInfoWithResponse = 1U;

constexpr uint32_t kURLLoadOptionSniffMimeType = 2U;

constexpr uint32_t kURLLoadOptionSynchronous = 4U;

constexpr uint32_t kURLLoadOptionSendSSLInfoForCertificateError = 8U;

constexpr uint32_t kURLLoadOptionPauseOnResponseStarted = 16U;

constexpr uint32_t kURLLoadOptionUseHeaderClient = 32U;

constexpr uint32_t kURLLoadOptionBlockAllCookies = 64U;

constexpr uint32_t kURLLoadOptionBlockThirdPartyCookies = 128U;
class URLLoaderFactory;
using URLLoaderFactoryPtr = mojo::InterfacePtr<URLLoaderFactory>;
using URLLoaderFactoryPtrInfo = mojo::InterfacePtrInfo<URLLoaderFactory>;
using ThreadSafeURLLoaderFactoryPtr =
    mojo::ThreadSafeInterfacePtr<URLLoaderFactory>;
using URLLoaderFactoryRequest = mojo::InterfaceRequest<URLLoaderFactory>;
using URLLoaderFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoaderFactory>;
using ThreadSafeURLLoaderFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<URLLoaderFactory>;
using URLLoaderFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoaderFactory>;
using URLLoaderFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<URLLoaderFactory>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_FORWARD_H_