// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_FORWARD_H_



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


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class InstallationService;
using InstallationServicePtr = mojo::InterfacePtr<InstallationService>;
using InstallationServicePtrInfo = mojo::InterfacePtrInfo<InstallationService>;
using ThreadSafeInstallationServicePtr =
    mojo::ThreadSafeInterfacePtr<InstallationService>;
using InstallationServiceRequest = mojo::InterfaceRequest<InstallationService>;
using InstallationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<InstallationService>;
using ThreadSafeInstallationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InstallationService>;
using InstallationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InstallationService>;
using InstallationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InstallationService>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_FORWARD_H_