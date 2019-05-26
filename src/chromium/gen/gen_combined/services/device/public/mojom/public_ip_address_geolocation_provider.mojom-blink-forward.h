// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {
class PublicIpAddressGeolocationProvider;
using PublicIpAddressGeolocationProviderPtr = mojo::InterfacePtr<PublicIpAddressGeolocationProvider>;
using PublicIpAddressGeolocationProviderPtrInfo = mojo::InterfacePtrInfo<PublicIpAddressGeolocationProvider>;
using ThreadSafePublicIpAddressGeolocationProviderPtr =
    mojo::ThreadSafeInterfacePtr<PublicIpAddressGeolocationProvider>;
using PublicIpAddressGeolocationProviderRequest = mojo::InterfaceRequest<PublicIpAddressGeolocationProvider>;
using PublicIpAddressGeolocationProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<PublicIpAddressGeolocationProvider>;
using ThreadSafePublicIpAddressGeolocationProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PublicIpAddressGeolocationProvider>;
using PublicIpAddressGeolocationProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PublicIpAddressGeolocationProvider>;
using PublicIpAddressGeolocationProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PublicIpAddressGeolocationProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_BLINK_FORWARD_H_